package se.gigurra.aichallenge.host

import se.gigurra.aichallenge.Message
import se.gigurra.util.TypedActorProxy

trait IGameHost extends TypedActorProxy {
  def attach(session: IUserSession)
  def detach(session: IUserSession)
  def handleMessage(msg: Message, session: IUserSession)
}

trait IGameHostInternal extends IGameHost {
  def step()
}