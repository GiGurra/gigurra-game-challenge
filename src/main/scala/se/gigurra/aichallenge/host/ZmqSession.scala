package se.gigurra.aichallenge.host

import akka.actor.ActorSystem
import se.gigurra.aichallenge.Message
import se.gigurra.util.{TypedActorBase, TypedActorUtil}

class ZmqSession private (val username: String, val provider: IZmqSessionProvider, val host: IGameHost)(implicit sys: ActorSystem)
  extends TypedActorBase[IUserSessionInternal] with IUserSessionInternal {

  override def init() {
    host.attach(getProxy)
  }

  override def send(msg: Message) {
    provider.sendToUser(msg, getProxy)
  }

  override def name = {
    username
  }

  override def receive(msg: Message) {
    host.handleMessage(msg, getProxy)
  }

}

object ZmqSession {
  def apply(username: String, provider: IZmqSessionProvider, host: IGameHost)(implicit sys: ActorSystem): IUserSessionInternal = {
    TypedActorUtil.make_typedActor(classOf[IUserSessionInternal], new ZmqSession(username, provider, host))
  }
}