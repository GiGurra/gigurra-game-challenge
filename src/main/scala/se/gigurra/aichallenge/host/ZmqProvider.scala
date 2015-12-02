package se.gigurra.aichallenge.host

import akka.actor.ActorSystem
import se.gigurra.aichallenge.{Checkin, ErrorMessage, Message}
import se.gigurra.aichallenge.Message
import se.gigurra.aichallenge.util.{Serializer, ZmqSocket, ZmqUtil}
import se.gigurra.aichallenge.util.ZmqUtil.{ZmqMessage, ZmqRouteId}
import se.gigurra.util.{TypedActorBase, TypedActorUtil}

import scala.collection.mutable
import scala.concurrent.Future
import scala.language.postfixOps

class ZmqProvider private(
                           databaseHandler: IDatabaseHandler,
                           host: IGameHost,
                           port: Int)(implicit sys: ActorSystem)
  extends TypedActorBase[IZmqSessionProviderInternal]
  with IZmqSessionProviderInternal {

  val addr = ZmqUtil.mkTcpAddr("0.0.0.0", port)
  var socket: ZmqSocket = null
  val session2RouteId = new mutable.HashMap[IUserSession, ZmqRouteId]
  val routeId2session = new mutable.HashMap[ZmqRouteId, IUserSessionInternal]

  ////////////////////////////////
  //////// akka callbacks ////////

  override def init() {
    socket = new ZmqSocket(addr, ZmqSocket.Type.ROUTER, getProxy.recvFromUser)
    socket.start()
  }

  override def sendToUser(msg: Message, session: IUserSession) {
    sendToUser(session, msg)
  }

  override def recvFromUser(zmqMsg: ZmqMessage) {

    val routeId = zmqMsg.head
    val msg = Serializer.read(zmqMsg.last)

    (msg, routeId2session.get(routeId)) match {

      case (_, s@Some(session)) => session.receive(msg)

      case (msg: Checkin, None) =>

        if (databaseHandler.login(msg.getUsername, msg.getPassword)) {

          for (ghostSession <- session2RouteId.keys.find(_.name == msg.getUsername))
            host.detach(ghostSession)

          val session = ZmqSession(msg.getUsername, getProxy, host)
          session2RouteId.put(session, routeId)
          routeId2session.put(routeId, session)

          session.receive(msg)

        } else {
          sendToRoute(routeId, new ErrorMessage().setMsg("Login failed"))
        }

      case _ =>
        sendToRoute(routeId, new ErrorMessage().setMsg(s"Need to log in first"))

    }

  }

  override def initialized(): Future[Unit] = {
    Future.successful(Unit)
  }

  override def close() {
    socket.close()
  }

  /////////////////////////
  //////// Helpers ////////

  def sendToUser(session: IUserSession, msg: Message) {
    session2RouteId.get(session).foreach(sendToRoute(_, msg))
  }

  def sendToRoute(routeId: ZmqRouteId, msg: Message) {
    socket.send(routeId, Serializer.write(msg))
  }

}

trait IZmqSessionProvider extends ISessionProvider {
  def sendToUser(msg: Message, session: IUserSession)
}

trait IZmqSessionProviderInternal extends IZmqSessionProvider {
  def recvFromUser(zmqMsg: ZmqMessage)
}

object ZmqProvider {
  def apply(
             databaseHandler: IDatabaseHandler,
             host: IGameHost,
             port: Int)(implicit sys: ActorSystem): IZmqSessionProvider = {
    TypedActorUtil.make_typedActor(classOf[IZmqSessionProviderInternal], new ZmqProvider(databaseHandler, host, port))
  }
}
