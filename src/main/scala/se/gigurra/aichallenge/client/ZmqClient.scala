package se.gigurra.aichallenge.client

import se.gigurra.aichallenge.Message

import scala.concurrent.duration.FiniteDuration
import se.gigurra.util.MsgQue
import se.gigurra.aichallenge.util.Serializer
import se.gigurra.aichallenge.util.ZmqSocket
import se.gigurra.aichallenge.util.ZmqUtil

class ZmqClient(zmqAddr: String) extends IClient {
  def this(addr: String, port: Int) = this(s"tcp://$addr:$port")

  private val msgQ = new MsgQue[ZmqUtil.ZmqMessage]
  private val socket = new ZmqSocket(zmqAddr, ZmqSocket.Type.DEALER, msgQ.put).start()

  override def getNewMessages(timeout: FiniteDuration): Seq[Message] = {
    msgQ.pop(timeout).map(_.last).map(Serializer.read)
  }

  override def close() {
    socket.close()
  }

  override def send(msg: Message) {
    println(s"Sending ${msg.getClass}:")
    println(msg)
    socket.send(Seq(Serializer.write(msg)))
  }

}