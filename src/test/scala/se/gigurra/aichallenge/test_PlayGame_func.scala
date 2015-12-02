package se.gigurra.aichallenge

import org.slf4j.LoggerFactory
import se.gigurra.aichallenge.games.go.{GameOver, GoClient}
import se.gigurra.aichallenge.games.gomoku.GomokuClient
import se.gigurra.aichallenge.util.Serializer

import scala.concurrent.Await
import scala.concurrent.ExecutionContext.Implicits.global
import scala.concurrent.Future
import scala.concurrent.duration.DurationInt
import scala.language.postfixOps

import org.junit.{Before, Ignore, Test}

import akka.actor.ActorSystem
import se.gigurra.aichallenge.games.battleship.BattleshipClient
import se.gigurra.aichallenge.client.RestClient
import se.gigurra.aichallenge.client.ZmqClient
import se.gigurra.aichallenge.host.DatabaseHandler
import se.gigurra.aichallenge.host.GameHost
import se.gigurra.aichallenge.host.IDatabaseHandler
import se.gigurra.aichallenge.host.IGameHost
import se.gigurra.aichallenge.host.ISessionProvider
import se.gigurra.aichallenge.host.RestProvider
import se.gigurra.aichallenge.host.ZmqProvider

import scala.util.{Failure, Success, Try}
import scalaj.http.Http

import scala.collection.JavaConversions._

class test_PlayGame_func {

  @Before
  def initLog4j(): Unit = LoggerFactory.getLogger(getClass())

  case class TestContext(
    system: ActorSystem,
    databaseHandler: IDatabaseHandler,
    host: IGameHost,
    zmqProvider: ISessionProvider,
    restProvider: ISessionProvider) {

    def close() {
      system.shutdown()
      system.awaitTermination(10 seconds)
    }

    def awaitInitialized() {
      Await.result(zmqProvider.initialized(), 3 seconds)
      Await.result(restProvider.initialized(), 3 seconds)
    }

  }

  def makeTestContext(): TestContext = {

    implicit val system = ActorSystem()
    val databaseHandler = DatabaseHandler()
    val host = GameHost(databaseHandler)
    val zmqProvider = ZmqProvider(databaseHandler, host, 12345)
    val restProvider = RestProvider(databaseHandler, host, 8080, "<no_ssl_cert_in_this_test>")

    val out = TestContext(system, databaseHandler, host, zmqProvider, restProvider)
    out.awaitInitialized()
    out
  }

  @Test
  def playGomoku_ZmqZmq() {

    val ctx = makeTestContext()

    val clientA = new GomokuClient(
      "dumb_userA",
      "dumb_password",
      new ZmqClient("127.0.0.1", 12345),
      new DumbGomokuAi)

    val clientB = new GomokuClient(
      "dumb_userB",
      "dumb_password",
      new ZmqClient("127.0.0.1", 12345),
      new DumbGomokuAi)

    val f1 = Future { clientA.playGame() }
    val f2 = Future { clientB.playGame() }

    TestUtil.await5sec(f1, f2)

    clientB.close()
    clientA.close()
    ctx.close()

  }

  @Test
  def getScores() {

    def call(): RestGetScoresReply = {
      val ctx = makeTestContext()
      val replyJson =
        Http("http://127.0.0.1:8080/SCORES/")
          .param("all", "true")
          .asString.body.toString
      val out = Serializer.read(replyJson).asInstanceOf[RestGetScoresReply]
      ctx.close()
      out
    }

    val gamesBefore = call().getGames
    val n0 = gamesBefore.size()

    // Ensure we have some scores
    playGomoku_ZmqZmq()

    val gamesAfter = call().getGames
    val n1 = gamesAfter.size()

    assert(n0 + 1 == n1)

  }

  def winnerLoser(f1: Try[GameOver],
                  f2: Try[GameOver]): Boolean = {
    (f1, f2) match {
      case (Success(f1), Failure(f2)) => f1.getWinner.getName == "dumb_userA"
      case (Failure(f1), Success(f2)) => f2.getWinner.getName == "dumb_userB"
      case _ => throw new RuntimeException("bad use!")
    }
  }

  @Test
  def playGame_Go_ZmqZmq() {

    val ctx = makeTestContext()
    val addr = "127.0.0.1"

    val clientA = new GoClient(
      "dumb_userA",
      "dumb_password",
      new ZmqClient(addr, 12345),
      new DumbGoAi)

    val clientB = new GoClient(
      "dumb_userB",
      "dumb_password",
      new ZmqClient(addr, 12345),
      new DumbGoAi)

    val f1 = Future { Try(clientA.playGame()) }
    val f2 = Future { Try(clientB.playGame()) }

    Try(Await.result(TestUtil.combineFutures(f1, f2), 5 seconds))

    assert( winnerLoser(get(f1), get(f2)) || winnerLoser(get(f2), get(f1)))

    clientB.close()
    clientA.close()
    ctx.close()

  }



  def get[T](f: Future[T]): T = {
    Await.result(f, 10000 seconds)
  }

  @Test
  def playGame_ZmqZmq() {

    val ctx = makeTestContext()
    val addr = "127.0.0.1"

    val clientA = new BattleshipClient(
      "dumb_userA",
      "dumb_password",
      new ZmqClient(addr, 12345),
      new DumbBattleshipAi)

    val clientB = new BattleshipClient(
      "dumb_userB",
      "dumb_password",
      new ZmqClient(addr, 12345),
      new DumbBattleshipAi)

    val f1 = Future { clientA.playGame() }
    val f2 = Future { clientB.playGame() }

    Await.result(TestUtil.combineFutures(f1, f2), 5 seconds)

    clientB.close()
    clientA.close()
    ctx.close()

  }

  @Ignore
  @Test
  def playGame_ZmqZmq_onRemoteServer() {

    val addr = "build.culvertsoft.se"

    val clientA = new BattleshipClient(
      "dumb_userA",
      "dumb_password",
      new ZmqClient(addr, 12345),
      new DumbBattleshipAi)

    val clientB = new BattleshipClient(
      "dumb_userB",
      "dumb_password",
      new ZmqClient(addr, 12345),
      new DumbBattleshipAi)

    val f1 = Future { clientA.playGame() }
    val f2 = Future { clientB.playGame() }

    Await.result(TestUtil.combineFutures(f1, f2), 20 seconds)

    clientB.close()
    clientA.close()

  }

  @Test
  def playGame_ZmqRest() {

    val ctx = makeTestContext()

    val clientA = new BattleshipClient(
      "dumb_userA",
      "dumb_password",
      new ZmqClient("127.0.0.1", 12345),
      new DumbBattleshipAi)

    val clientB = new BattleshipClient(
      "dumb_userB",
      "dumb_password",
      new RestClient("http://127.0.0.1:8080"),
      new DumbBattleshipAi)

    val f1 = Future { clientA.playGame() }
    val f2 = Future { clientB.playGame() }

    TestUtil.await5sec(f1, f2)

    clientB.close()
    clientA.close()
    ctx.close()

  }

  @Test
  def play10Games_RestRest() {

    val ctx = makeTestContext()

    val clientA = new BattleshipClient(
      "dumb_userA",
      "dumb_password",
      new RestClient("http://127.0.0.1:8080"),
      new DumbBattleshipAi)

    val clientB = new BattleshipClient(
      "dumb_userB",
      "dumb_password",
      new RestClient("http://127.0.0.1:8080"),
      new DumbBattleshipAi)

    for (i <- 0 until 10) {

      val f1 = Future { clientA.playGame() }
      val f2 = Future { clientB.playGame() }

      TestUtil.await5sec(f1, f2)
    }

    clientB.close()
    clientA.close()
    ctx.close()
  }

}