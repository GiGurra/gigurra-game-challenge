package se.gigurra.aichallenge.host

import akka.actor.ActorSystem
import se.gigurra.aichallenge.Message
import se.gigurra.util.{TypedActorBase, TypedActorUtil}

import scala.collection.mutable

class RestSession private (val username: String, val provider: ISessionProvider, val host: IGameHost)(implicit sys: ActorSystem)
  extends TypedActorBase[IRestSessionInternal] with IRestSessionInternal {

  val queued = new mutable.HashMap[Class[_ <: Message], mutable.ArrayBuffer[Message]]

  override def init() {
    host.attach(getProxy)
  }

  override def send(msg: Message) {
    val container = queued.getOrElseUpdate(msg.getClass, new mutable.ArrayBuffer[Message])
    container += msg
  }

  override def name = {
    username
  }

  override def receive(msg: Message) {
    host.handleMessage(msg, getProxy)
  }

  override def listAvailable(): Seq[Class[_ <: Message]] = {
    queued
      .flatMap(_._2)
      .map(_.getClass).toSeq
  }

  override def pop(cls: Class[_ <: Message]): Seq[Message] = {
    val out = queued.getOrElse(cls, new mutable.ArrayBuffer[Message])
    queued.put(cls, new mutable.ArrayBuffer[Message])
    out
  }

}

trait IRestSessionInternal extends IUserSessionInternal {
  def listAvailable(): Seq[Class[_ <: Message]]
  def pop(cls: Class[_ <: Message]): Seq[Message]
}

object RestSession {
  def apply(username: String, provider: ISessionProvider, host: IGameHost)(implicit sys: ActorSystem): IRestSessionInternal = {
    TypedActorUtil.make_typedActor(classOf[IRestSessionInternal], new RestSession(username, provider, host))
  }
}
