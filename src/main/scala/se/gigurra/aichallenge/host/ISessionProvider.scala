package se.gigurra.aichallenge.host

import scala.concurrent.Future
import se.gigurra.util.TypedActorProxy

trait ISessionProvider extends TypedActorProxy {
  def initialized(): Future[Unit]
}
