import org.junit.{Before, Test}
import org.slf4j.LoggerFactory
import se.gigurra.util.TicThread

import scala.concurrent.duration._

import scala.language.postfixOps

/**
 * Created by johan on 2015-03-25.
 */
class test_ticThread_func {

  @Before
  def initLog4j(): Unit = LoggerFactory.getLogger(getClass())

  @Test
  def test(): Unit = {

    @volatile var tics = 0

    val ticcer = new TicThread(300 millis, true) {
      override def tic(): Unit =  {
        tics += 1
        println("tic")
      }
    }

    ticcer.start()

    while(tics < 5) {
      Thread.sleep(10)
    }

  }
}
