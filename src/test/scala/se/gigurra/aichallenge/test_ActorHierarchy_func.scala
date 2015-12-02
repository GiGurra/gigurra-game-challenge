package se.gigurra.aichallenge

import akka.actor.{Actor, ActorSystem, Props, actorRef2Scala}
import org.junit.{Before, Test}
import org.slf4j.LoggerFactory

class BaseActor extends Actor {

  override def receive = {
    case msg => println(s"Base received a ${msg.getClass}")
  }
}

class DerivedActor extends BaseActor {

  override def receive = {
    case msg: String => println(s"Derived received a ${msg.getClass}")
    case msg         => super.receive(msg)
  }

}

class test_ActorHierarchy_func {

  @Before
  def initLog4j(): Unit = LoggerFactory.getLogger(getClass())

  @Test
  def test {

    implicit val system = ActorSystem()

    val handler = system.actorOf(Props[DerivedActor], name = "handler")

    handler ! "Hello"
    handler ! 123
    
    Thread.sleep(200)

  }

}