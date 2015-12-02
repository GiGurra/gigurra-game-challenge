package se.gigurra.util

import scala.collection.mutable.ArrayBuffer
import scala.concurrent.duration.FiniteDuration

class MsgQue[T] {

  private val q = new ArrayBuffer[T]

  def put(t: T) {
    synchronized {
      q += t
      notifyAll()
    }
  }

  def size: Int = {
    synchronized {
      q.size
    }
  }

  def pop(timeout: FiniteDuration): Seq[T] = {
    synchronized {
      if (q.isEmpty)
        wait(timeout.toMillis)
      flush()
    }
  }

  def popNow(): Seq[T] = {
    synchronized {
      flush()
    }
  }

  private def flush(): Seq[T] = {
    if (q.nonEmpty) {
      val out = new ArrayBuffer[T](q.size)
      out ++= q
      q.clear()
      out
    } else {
      Nil
    }
  }

}