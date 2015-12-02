package se.gigurra.util

import scala.concurrent.duration._

class RepeatingTimer(val interval: Duration, val freeStep: Boolean = false) extends Serializable {

  private var tLast = TimeStamp()
  private var firstRun = true

  def step[AnyReturnType](f: => AnyReturnType) {

    val t = TimeStamp()

    if (firstRun && freeStep || t - tLast >= interval) {
      firstRun = false
      tLast = t
      f
    }

  }

}