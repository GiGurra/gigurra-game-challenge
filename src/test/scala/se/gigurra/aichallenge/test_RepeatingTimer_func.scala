package se.gigurra.aichallenge

import org.junit.{Before, Test}
import org.slf4j.LoggerFactory
import se.gigurra.util.RepeatingTimer

import scala.concurrent.duration.DurationInt
import scala.language.postfixOps

class test_RepeatingTimer_func {

  @Before
  def initLog4j(): Unit = LoggerFactory.getLogger(getClass())

  @Test
  def test {

    val timer = new RepeatingTimer(250 millis)

    var i = 0
    while (i < 10) {
      timer.step {
        i += 1
        println(s"i: $i/10")
      }
      Thread.sleep(10)
    }

    assert(i == 10)
  }

}