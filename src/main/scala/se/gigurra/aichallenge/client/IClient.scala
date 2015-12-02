package se.gigurra.aichallenge.client

import se.gigurra.aichallenge.Message

import scala.concurrent.duration.FiniteDuration
import java.io.Closeable

trait IClient extends Closeable {
  def getNewMessages(timeout: FiniteDuration): Seq[Message]
  def send(msg: Message)
  def close()
}