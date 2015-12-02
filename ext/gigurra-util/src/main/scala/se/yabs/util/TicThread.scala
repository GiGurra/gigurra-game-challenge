package se.gigurra.util

import scala.concurrent.duration._
import scala.language.postfixOps

/**
 * Created by johan on 2015-03-25.
 */
abstract class TicThread(val interval: FiniteDuration,
                         val freeStep: Boolean = false) extends SimpleThread {

  private var tNextStep = TimeStamp() + (if (freeStep) (0 second) else interval)

  override final def onStep(): Unit = {
    val t = TimeStamp()
    if (t >= tNextStep) {
      tic()
      tNextStep += interval
    } else {
      Thread.sleep((tNextStep - t).toMillis + 1)
    }
  }


  def tic()
}
