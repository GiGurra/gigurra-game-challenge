package se.gigurra.util

import scala.concurrent.duration._
import scala.language.postfixOps

class CountDown(val initialTimeLeft: FiniteDuration) {

  private var tFinished: TimeStamp = null
  reset()

  /////////////////////////

  def timeLeft: Duration = {
    val t = TimeStamp()
    if (t < tFinished)
      tFinished - t
    else
      0 seconds
  }

  def isReached = timeLeft == (0 seconds)

  def reset() {
    tFinished = TimeStamp() + initialTimeLeft
  }

}