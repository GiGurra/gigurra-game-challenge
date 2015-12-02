package se.gigurra.util

import scala.concurrent.duration.FiniteDuration

/**
 * Created by johan on 2015-03-25.
 */
abstract class SimpleThread {
  @volatile private var killSignal = false

  private val thread = new Thread {
    override def run(): Unit = {
      onStart()
      while (!killSignal)
        onStep()
      onStop()
    }
  }

  protected def onStep()
  protected def onStart() {}
  protected def onStop() {}

  def start(): Unit = {
    thread.start()
  }

  def join(): Unit = {
    thread.join()
  }

  def kill(): Unit = {
    killSignal = true
  }

}
