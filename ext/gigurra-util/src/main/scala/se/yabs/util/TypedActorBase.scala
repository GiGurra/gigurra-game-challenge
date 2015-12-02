package se.gigurra.util

import akka.actor.{ActorRef, ActorSystem, TypedActor, TypedProps}
import org.slf4j.LoggerFactory

import scala.concurrent.duration.FiniteDuration

abstract class TypedActorBase[InterfaceType <: TypedActorProxy](implicit sys: ActorSystem)
  extends TypedActor.PostStop
  with TypedActor.Receiver { _: TypedActorProxy =>

  implicit val system = sys
  implicit val executionContext: scala.concurrent.ExecutionContext = system.dispatcher
  protected val logger = LoggerFactory.getLogger(getClass())

  private var _proxy = null.asInstanceOf[InterfaceType]
  private var _self = null.asInstanceOf[ActorRef]
  @volatile private var started = false

  //////////////////////////////
  ////////// API ///////////////

  def init() {}
  def close() {}

  override def onReceive(msg: Any, sender: ActorRef) {}

  //////////////////////////////
  ////////// INTERNALS /////////

  final def getProxy: InterfaceType = {
    if (!started)
      throw new RuntimeException("Called getProxy before starting actor")
    _proxy
  }

  final def getSelf: ActorRef = {
    if (!started)
      throw new RuntimeException("Called getProxy before starting actor")
    _self
  }

  override final def start() {
    logger.info(s"Starting $this..")
    _proxy = TypedActor.self[InterfaceType]
    _self = TypedActor(system).getActorRefFor(_proxy)

    if (_proxy == null)
      throw new RuntimeException("Called start with proxy == null")

    if (_self == null)
      throw new RuntimeException("Called start with self == null")

    started = true

    init()
    logger.info(s"Started $this")
  }

  override final def postStop() {
    logger.info(s"Shutting down $this..")
    close()
    logger.info(s"Shut down $this")
  }

  final def scheduleOnce(delay: FiniteDuration, f: InterfaceType => Unit) {
    val proxy = getProxy
    system.scheduler.scheduleOnce(delay)(f(proxy))
  }

  final def scheduleAtInterval(initialDelay: FiniteDuration, interval: FiniteDuration, f: InterfaceType => Unit) {
    val proxy = getProxy
    system.scheduler.schedule(initialDelay, interval)(f(proxy))
  }

}

object TypedActorUtil {

  def make_typedActor[InterfaceType <: TypedActorProxy, T <: InterfaceType](ifClass: Class[InterfaceType], f: => T)(implicit sys: ActorSystem): InterfaceType = {
    val out: InterfaceType = TypedActor(sys).typedActorOf(TypedProps(ifClass, f))
    out.start()
    out
  }

}