package se.gigurra.aichallenge

import org.slf4j.LoggerFactory

import scala.concurrent.Await
import scala.concurrent.duration.DurationInt
import scala.language.postfixOps

import org.junit.{Before, Test}

import akka.actor.ActorSystem
import scalaj.http.Http
import se.gigurra.aichallenge.util.Serializer
import se.gigurra.aichallenge.host.DatabaseHandler
import se.gigurra.aichallenge.host.GameHost
import se.gigurra.aichallenge.host.RestProvider

class test_RestAPI_func {

  @Before
  def initLog4j(): Unit = LoggerFactory.getLogger(getClass())

  @Test
  def login() {

    implicit val system = ActorSystem()

    val databaseHandler = DatabaseHandler()

    val host = GameHost(databaseHandler)
    val restProvider = RestProvider(databaseHandler, host, 8080, "<no_ssl_cert_in_this_test>")

    Await.ready(restProvider.initialized(), 2.seconds)

    val loginResponseJson = Http("http://127.0.0.1:8080/LOGIN/")
      .param("username", "rest_user")
      .param("password", "rest_user_password")
      .asString.body.toString()

    val loginReply = Serializer.read(loginResponseJson).asInstanceOf[RestCheckinReply]
    val session = loginReply.getSession

    val listAvailResponseJson = Http("http://127.0.0.1:8080/LIST_AVAILABLE/")
      .param("session", session)
      .asString.body.toString()

    val availMsgs = Serializer.read(listAvailResponseJson).asInstanceOf[RestListAvailReply]

    println(availMsgs)

    val getMessageResponseJson = Http("http://127.0.0.1:8080/RECEIVE/")
      .param("session", session)
      .param("messagetype", classOf[WelcomeMessage].getName)
      .asString.body.toString()

    val msgs = Serializer.read(getMessageResponseJson).asInstanceOf[RestGetMessagesReply]

    println(msgs)

    system.shutdown()
    system.awaitTermination()

  }
}