package se.gigurra.aichallenge

import akka.actor.ActorSystem
import org.junit.{Before, Test}
import org.slf4j.LoggerFactory
import se.gigurra.util.{MsgQue, TypedActorProxy, TypedActorUtil}

import scala.concurrent.duration.DurationInt
import scala.concurrent.{Await, Future, Promise}
import scala.language.postfixOps
import scala.util.Try

/**
 * Created by johan on 2015-03-19.
 */
class test_TypedActorFutures_func {

  @Before
  def initLog4j(): Unit = LoggerFactory.getLogger(getClass())

  abstract class MSG

  case object ASK extends MSG

  case object GOT_OUTER_FUTURE extends MSG

  case object RETURNED_INNER_FUTURE extends MSG

  val q = new MsgQue[MSG]

  trait IAsker extends TypedActorProxy {
    def askNow()

    override def start() {}
  }

  trait IAnswerer extends TypedActorProxy {
    def answer(): Future[String]

    override def start() {}
  }

  class Answerer extends IAnswerer {
    override def answer(): Future[String] = {
      println(s"$this.answer called")
      val p = Promise[String]()
      new Thread() {
        override def run(): Unit = {
          Thread.sleep(200)
          p.complete(Try("answer"))
        }

        start()
      }
      val out = p.future
      q.put(RETURNED_INNER_FUTURE)
      println(s"$this.answer returned")
      out
    }
  }

  class Asker(answerer: IAnswerer) extends IAsker {
    override def askNow(): Unit = {
      println(s"$this Asking")
      q.put(ASK)
      val f = answerer.answer()
      q.put(GOT_OUTER_FUTURE)
      println(s"$this got future")
      Await.result(f, 1 second)
      println(s"$this got result")
    }
  }

  @Test
  def test: Unit = {
    implicit val system = ActorSystem()
    val answerer = TypedActorUtil.make_typedActor(classOf[IAnswerer], new Answerer)
    val asker = TypedActorUtil.make_typedActor(classOf[IAsker], new Asker(answerer))

    asker.askNow()

    while(q.size <3) {
      Thread.sleep(100)
    }

    assert(q.popNow() == Seq(ASK, GOT_OUTER_FUTURE, RETURNED_INNER_FUTURE))

  }

}
