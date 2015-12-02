package se.gigurra.aichallenge.client

import se.gigurra.aichallenge._
import se.gigurra.aichallenge._
import se.gigurra.aichallenge.util.Serializer
import se.gigurra.util.TimeStamp

import scala.collection.JavaConversions.asScalaBuffer
import scala.concurrent.duration.FiniteDuration
import scala.language.postfixOps
import scala.reflect.ClassTag
import scalaj.http.{Http, HttpRequest}

class RestClient(url: String) extends IClient {

  private var sessionKey: Option[String] = None

  override def getNewMessages(timeout: FiniteDuration): Seq[Message] = {

    val t0 = TimeStamp()

    while (TimeStamp() - t0 < timeout) {

      val msgs = for (
        msgType <- executeRequest[RestListAvailReply](Http(s"$url/LIST_AVAILABLE/")).getMessageTypes;
        msg <- executeRequest[RestGetMessagesReply](Http(s"$url/RECEIVE/").param("messagetype", msgType)).getMessages
      ) yield {
          msg
        }

      if (msgs.nonEmpty)
        return msgs

    }

    Nil
  }

  private def executeRequest[ReturnType <: Message : ClassTag](request_wo_session: HttpRequest): ReturnType = {

    val request = sessionKey match {
      case Some(key) => request_wo_session.param("session", key)
      case None      => request_wo_session
    }

    Serializer.read(request.asString.body.toString) match {
      case reply: ReturnType   => reply
      case reply: ErrorMessage => throw new RuntimeException(reply.getMsg)
    }
  }

  override def send(msg: Message) {

    msg match {

      case msg: Checkin =>

        val reply = executeRequest[RestCheckinReply](Http(s"$url/LOGIN/")
          .param("username", msg.getUsername)
          .param("password", msg.getPassword))

        sessionKey = Option(reply.getSession)

      case _ =>
        executeRequest[RestPostOK](Http(s"$url/SEND/")
          .param("messagetype", msg.getClass.getName)
          .postData(Serializer.write(msg)))

    }

  }

  override def close() {
    // Stateless rest..
  }

}