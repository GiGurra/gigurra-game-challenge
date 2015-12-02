package se.gigurra.aichallenge

import akka.actor.ActorSystem
import org.junit.Test
import se.gigurra.aichallenge.host.{DatabaseHandler, GameHost, IDatabaseHandler, IGameHost, ISessionProvider, RestProvider, ZmqProvider}

import scala.annotation.tailrec
import scala.concurrent.Await
import scala.concurrent.duration.DurationInt
import scala.language.postfixOps

class test_GoStuff_func {

  sealed abstract class Team

  case object Black extends Team

  case object White extends Team

  case class Group(positions: Seq[Vec2], team: Team)

  case class Vec2(x: Int, y: Int)

  case class Board(width: Int = 19, height: Int = 19) {

    private val positions = Array.ofDim[Team](width, height)

    def at(p: Vec2): Option[Team] = {
      if (!isInside(p))
        throw new RuntimeException(s"Position $p outside board")
      Option(positions(p.x)(p.y))
    }

    def isInside(p: Vec2): Boolean = {
      0 <= p.x && p.x < width && 0 <= p.y && p.y < height
    }

    def place(team: Team, p: Vec2): Unit = {
      at(p) match {
        case Some(previous) => throw new RuntimeException(s"$previous already placed at $p")
        case None => positions(p.x)(p.y) = team
      }
    }

    def neighbors(p: Vec2): Seq[Vec2] = {

      if (!isInside(p))
        throw new RuntimeException(s"Position $p outside board")

      val items = for ((dx, dy) <- Seq((-1, 0), (1, 0), (0, -1), (0, 1))) yield {
        Vec2(p.x + dx, p.y + dy)
      }

      items.filter(isInside)
    }

    def freedoms(group: Group): Seq[Vec2] = {
      group.positions
        .flatMap(neighbors).distinct
        .filter(at(_).isEmpty)
    }

    def group(p0: Vec2): Option[Group] = {

      @tailrec
      def groupImpl(team: Team,
                    accChecked: Set[Vec2],
                    accMembers: Set[Vec2],
                    lastAdded: Set[Vec2]): Set[Vec2] = {

        val newToCheck = (lastAdded.flatMap(neighbors).toBuffer -- accChecked).toSet
        if (newToCheck.isEmpty)
          return accMembers

        val newAccChecked = accChecked ++ newToCheck
        val newLastAdded = newToCheck.filter(p => at(p).isDefined && at(p).get == team)
        val newAccMembers = accMembers ++ newLastAdded

        groupImpl(team, newAccChecked, newAccMembers, newLastAdded)
      }

      at(p0).map(team => Group(groupImpl(team, Set(p0), Set(p0), Set(p0)).toSeq, team))
    }

  }

  @Test
  def test(): Unit = {

    val board = Board()
    val refPositions = Set(Vec2(0, 1), Vec2(1, 1), Vec2(2, 1))
    refPositions.foreach(board.place(Black, _))

    val group = board.group(refPositions.head).get

    assert(refPositions == group.positions.toSet)
    assert(board.freedoms(group).size==7)

  }


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


  @Test
  def run_host_forever(): Unit = {
    def makeTestContext(): TestContext = {

      implicit val system = ActorSystem()
      val databaseHandler = DatabaseHandler()
      val host = GameHost(databaseHandler)
      val zmqProvider = ZmqProvider(databaseHandler, host, 12345)
      val restProvider = RestProvider(databaseHandler, host, 8080, "<no_ssl_cert_in_this_test>")

      val out: TestContext = TestContext(system, databaseHandler, host, zmqProvider, restProvider)
      out.awaitInitialized()
      out
    }

    val ctx = makeTestContext()

    Thread.sleep(Long.MaxValue)

  }
}
