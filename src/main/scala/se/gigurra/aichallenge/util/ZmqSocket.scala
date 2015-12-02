package se.gigurra.aichallenge.util

import org.zeromq.ZContext
import org.zeromq.ZMQ.Poller

import se.gigurra.aichallenge.util.ZmqUtil.ZmqMessage
import zmq.ZMQ

class ZmqSocket(val endPoint: String, val typ: ZmqSocket.SocketType, handler: ZmqUtil.ZmqMessage => Unit) {
  def this(address: String, port: Int, typ: ZmqSocket.SocketType, handler: ZmqUtil.ZmqMessage => Unit) = this(ZmqUtil.mkTcpAddr(address, port), typ, handler)

  private val context = new ZContext
  private val remoteSock = context.createSocket(zmqSockType)
  private val inprocSndSock = context.createSocket(ZMQ.ZMQ_DEALER)
  private val inprocRecvSock = context.createSocket(ZMQ.ZMQ_ROUTER)
  private val poller = new Poller(2)

  @volatile private var _open = true

  typ match {
    case ZmqSocket.Type.ROUTER => remoteSock.bind(endPoint)
    case ZmqSocket.Type.DEALER => remoteSock.connect(endPoint)
  }

  inprocRecvSock.bind(ZmqUtil.mkInpAddr(this.toString))
  inprocSndSock.connect(ZmqUtil.mkInpAddr(this.toString))

  poller.register(remoteSock, ZMQ.ZMQ_POLLIN)
  poller.register(inprocRecvSock, ZMQ.ZMQ_POLLIN)

  //////////////////////////////////////////////////

  def send(msg: ZmqMessage) {
    ZmqUtil.sendParts(inprocSndSock, msg)
  }

  def send(routeId: Array[Byte], msg: Array[Byte]) {
    send(Seq(routeId, msg))
  }

  //////////////////////////////////////////////////

  private val threadLoop = new Thread {
    override def run() {
      while (isOpen) {
        if (poller.poll(10) > 0) {
          if (poller.pollin(0)) {
            val parts = ZmqUtil.recvParts(remoteSock)
            handler(parts)
          }
          if (poller.pollin(1)) {
            val parts = ZmqUtil.recvParts(inprocRecvSock).drop(1)
            ZmqUtil.sendParts(remoteSock, parts)
          }
        }
      }
    }
  }

  def start(): ZmqSocket = {
    threadLoop.start()
    this
  }

  def zmqSockType = {
    typ match {
      case ZmqSocket.Type.DEALER => ZMQ.ZMQ_DEALER
      case ZmqSocket.Type.ROUTER => ZMQ.ZMQ_ROUTER
    }
  }

  def close() {
    if (isOpen) {
      _open = false
      threadLoop.join()
      context.close()
    }
  }

  def isOpen: Boolean = _open

  def isClosed: Boolean = !isOpen

}

object ZmqSocket {
  abstract class SocketType
  object Type {
    case object DEALER extends SocketType
    case object ROUTER extends SocketType
  }
}