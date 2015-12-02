package se.gigurra.aichallenge

import org.junit.{Before, Test}
import org.slf4j.LoggerFactory
import se.gigurra.util.CountDown

import scala.concurrent.duration.DurationInt
import scala.language.postfixOps

/**
 * Created by johan on 2015-03-18.
 */
class test_Countdown_func {

  @Before
  def initLog4j(): Unit = LoggerFactory.getLogger(getClass())

  @Test
  def test(): Unit = {
    val countdown = new CountDown(1 seconds)

    for (i <- 0 until 10) {
      println(s"pass ${i+1}/10")

      countdown.reset()
      while (!countdown.isReached) {
        println(s"${countdown.timeLeft.toMillis} millis left")
        Thread.sleep(250)
      }
    }

    println(countdown)
  }

}
