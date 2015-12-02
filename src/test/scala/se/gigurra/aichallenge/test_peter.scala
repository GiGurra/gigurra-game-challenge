package se.gigurra.aichallenge

import akka.actor.ActorSystem
import org.junit.Test
import se.gigurra.aichallenge.client.ZmqClient
import se.gigurra.aichallenge.games.go.GoClient
import se.gigurra.aichallenge.host._

import scala.concurrent.{Await, Future}
import scala.util.Try

import scala.concurrent.ExecutionContext.Implicits.global
import scala.concurrent.duration.DurationInt
import scala.language.postfixOps

class test_peter {

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
  def playGame_Go_ZmqPeter() {

    val ctx = makeTestContext()
    val addr = "127.0.0.1"

    // val clientA = new GoClient(
    //   "dumb_userA",
    //   "dumb_password",
    //   new ZmqClient(addr, 12345),
    //   new DumbGoAi)

    // val f1 = Future { Try(clientA.playGame()) }

    // get(f1)

    // clientA.close()
    Thread.sleep(100000000)
    ctx.close()

  }

  def get[T](f: Future[T]): T = {
    Await.result(f, 10000 seconds)
  }

}
