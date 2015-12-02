package se.gigurra.aichallenge.host

import se.gigurra.aichallenge.Message
import se.gigurra.util.TypedActorProxy

trait IUserSession extends TypedActorProxy {
  def send(msg: Message)
  def name: String
}

// Only visible to providers
trait IUserSessionInternal extends IUserSession {
  def receive(msg: Message)
}