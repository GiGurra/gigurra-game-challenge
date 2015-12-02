package se.gigurra.aichallenge

import org.junit.{Before, Test}
import org.slf4j.LoggerFactory
import se.gigurra.aichallenge.util.{ZmqSocket, ZmqUtil}
import se.gigurra.util.MsgQue

import scala.concurrent.duration.DurationInt
import scala.language.postfixOps

class test_zmq_func {

  @Before
  def initLog4j(): Unit = LoggerFactory.getLogger(getClass())

  @Test
  def basicCom() {
    val dealerQ = new MsgQue[ZmqUtil.ZmqMessage]
    val dealer = new ZmqSocket("tcp://127.0.0.1:12345", ZmqSocket.Type.DEALER, dealerQ.put).start()

    val routerQ = new MsgQue[ZmqUtil.ZmqMessage]
    val router = new ZmqSocket("tcp://127.0.0.1:12345", ZmqSocket.Type.ROUTER, routerQ.put).start()

    dealer.send(Seq("Hello".getBytes))

    val msgs = routerQ.pop(1 second)
    println(msgs.size)

    assert(msgs.size == 1)

    for (msg <- msgs) {

      println(msg.size)
      assert(msg.size == 2)

      println(msg.head.toSeq)
      println(new String(msg.last))

      println("Queuing send back")
      assert(dealerQ.pop(100 millis).isEmpty)
      router.send(msg.head, "Yo".getBytes)

      assert(dealerQ.pop(100 millis).nonEmpty)
    }

    dealer.close()
    router.close()

  }
}