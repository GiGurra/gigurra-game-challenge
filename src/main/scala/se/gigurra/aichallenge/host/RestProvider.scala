package se.gigurra.aichallenge.host

import java.security.{KeyStore, SecureRandom}
import java.util.UUID
import javax.net.ssl.{KeyManagerFactory, SSLContext, TrustManagerFactory}

import akka.actor.{ActorRef, ActorSystem, actorRef2Scala}
import akka.io.IO
import akka.io.Tcp.Bound
import se.gigurra.aichallenge._
import se.gigurra.aichallenge._
import se.gigurra.aichallenge.util.Serializer
import se.gigurra.util.{TypedActorBase, TypedActorUtil, RestDispatcher}
import spray.can.Http
import spray.http.HttpEntity.apply
import spray.http.HttpMethods.{GET, POST}
import spray.http.{HttpRequest, HttpResponse}

import scala.collection.JavaConversions.seqAsJavaList
import scala.collection.mutable
import scala.concurrent.{Future, Promise}
import scala.util.{Failure, Success, Try}


//    Login should be https://../LOGIN/username=<username>&password=<password> [GET]
//     List should be https://../LIST_AVAILABLE/session=<session> [GET]
// Receives should be https://../RECEIVE/session=<session>&messagetype=<messagetype> [GET]
//    Sends should be https://../SEND/session=<session>&messagetype=<messagetype> [POST]

class RestProvider private(databaseHandler: IDatabaseHandler,
                           host: IGameHost,
                           port: Int,
                           sslCert: String)(implicit sys: ActorSystem)
  extends TypedActorBase[ISessionProvider] with ISessionProvider {


  // if there is no SSLContext in scope implicitly the HttpServer uses the default SSLContext,
  // since we want non-default settings in this example we make a custom SSLContext available here
  implicit def sslContext: SSLContext = {
    val keyStoreResource = sslCert
    val password = ""

    val keyStore = KeyStore.getInstance("jks")
    keyStore.load(getClass.getResourceAsStream(keyStoreResource), password.toCharArray)
    val keyManagerFactory = KeyManagerFactory.getInstance("SunX509")
    keyManagerFactory.init(keyStore, password.toCharArray)
    val trustManagerFactory = TrustManagerFactory.getInstance("SunX509")
    trustManagerFactory.init(keyStore)
    val context = SSLContext.getInstance("TLS")
    context.init(keyManagerFactory.getKeyManagers, trustManagerFactory.getTrustManagers, new SecureRandom)
    context
  }

  /*
    // if there is no ServerSSLEngineProvider in scope implicitly the HttpServer uses the default one,
    // since we want to explicitly enable cipher suites and protocols we make a custom ServerSSLEngineProvider
    // available here
    implicit def sslEngineProvider: ServerSSLEngineProvider = {
      ServerSSLEngineProvider { engine =>
        engine.setEnabledCipherSuites(Array("TLS_RSA_WITH_AES_256_CBC_SHA"))
        engine.setEnabledProtocols(Array("SSLv3", "TLSv1"))
        engine
      }
    }*/

  val username2sessionKey = new mutable.HashMap[String, String]
  val sessionkey2ssession = new mutable.HashMap[String, IRestSessionInternal]
  val initializedPromise = Promise[Unit]()
  val initializedFuture = initializedPromise.future

  val get = new RestDispatcher {
    register("LOGIN/", login)
    register("LIST_AVAILABLE/", listAvailable)
    register("RECEIVE/", sendMessageToUser)
    register("SCORES/", getScores)
  }

  val post = new RestDispatcher {
    register("SEND/", recvMessageFromUser)
  }

  //////////////////////////////////////////////////////////////////

  override def init() {
    implicit val self = getSelf
    IO(Http) ! Http.Bind(self, interface = "0.0.0.0", port)
  }

  override def onReceive(msg: Any, sender: ActorRef) {

    Try({
      msg match {
        case _: Http.Connected                         =>
          implicit val self = getSelf
          sender ! Http.Register(self)
        case _: Http.ConnectionClosed                  =>
        case HttpRequest(GET, path_uri, _, _, _)       => get(path_uri.toString(), None, sender)
        case HttpRequest(POST, path_uri, _, entity, _) => post(path_uri.toString(), Some(entity.data.asString), sender)
        case Bound(addr)                               => initializedPromise.complete(Try(Unit))
        case _                                         => logger.warn(s"$this: Unhandled message type: ${msg.getClass}")
      }
    }) match {
      case Success(_) =>
      case Failure(e) =>
        logger.error(s"Handling of ${msg.getClass} failed with error ${e.getMessage}", e)
        respond(sender, new ErrorMessage().setMsg(s"Handling of ${msg.getClass} failed with error ${e.getMessage}"))
    }
  }

  override def initialized(): Future[Unit] = {
    initializedFuture
  }

  //////////////////////////////////////////////////////////////////

  def respond(sender: ActorRef, msg: Message) {
    sender ! HttpResponse(entity = Serializer.write(msg))
  }

  def login(params: Map[String, String], contents: Option[String], sender: ActorRef) {

    val username = params.getOrElse("username", throw new RuntimeException("Missing username parameter"))
    val password = params.getOrElse("password", throw new RuntimeException("Missing password parameter"))

    if (databaseHandler.login(username, password)) {

      for (
        ghostSessionKey <- username2sessionKey.remove(username);
        ghostSession <- sessionkey2ssession.remove(ghostSessionKey)
      ) {
        host.detach(ghostSession)
      }

      val sessionKey = UUID.randomUUID().toString
      val session = make_session(username)
      sessionkey2ssession.put(sessionKey, session)
      username2sessionKey.put(username, sessionKey)

      session.receive(new Checkin().setUsername(username).setPassword(password))

      respond(sender, new RestCheckinReply().setSession(sessionKey))

    } else {
      throw new RuntimeException("Login failed")
    }

  }

  def listAvailable(params: Map[String, String], optContents: Option[String], sender: ActorRef) {
    val session = getSession(params)
    val msg = new RestListAvailReply(session.listAvailable().map(_.getName))
    respond(sender, msg)
  }

  def getScores(params: Map[String, String], optContents: Option[String], sender: ActorRef): Unit = {
    val msg = new RestGetScoresReply().setGames(databaseHandler.getScores())
    respond(sender, msg)
  }

  def recvMessageFromUser(params: Map[String, String], optContents: Option[String], sender: ActorRef) {
    val session = getSession(params)
    val json = optContents.getOrElse(throw new RuntimeException("Missing http entity/message contents"))
    val cls = getMessageClass(params.getOrElse("messagetype", throw new RuntimeException("Missing messagetype parameter")))
    val msg = Serializer.read(json, cls)
    session.receive(msg)
    respond(sender, new RestPostOK())
  }

  def sendMessageToUser(params: Map[String, String], optContents: Option[String], sender: ActorRef) {
    val session = getSession(params)
    val cls = getMessageClass(params.getOrElse("messagetype", throw new RuntimeException("Missing messagetype parameter")))
    val msgs = session.pop(cls)
    val msg = new RestGetMessagesReply(msgs)
    respond(sender, msg)
  }

  def getSession(params: Map[String, String]): IRestSessionInternal = {
    val sessionKey = params.getOrElse("session", throw new RuntimeException("Missing session parameter"))
    sessionkey2ssession.getOrElse(sessionKey, throw new RuntimeException("Invalid session"))
  }

  def make_session(username: String): IRestSessionInternal = {
    RestSession(username, getProxy, host)
  }

  def getMessageClass(className: String): Class[_ <: Message] = {
    Class.forName(className).asInstanceOf[Class[_ <: Message]]
  }

}

object RestProvider {
  def apply(databaseHandler: IDatabaseHandler,
            host: IGameHost,
            port: Int,
            sslCert: String)(implicit sys: ActorSystem): ISessionProvider = {
    TypedActorUtil.make_typedActor(classOf[ISessionProvider], new RestProvider(databaseHandler, host, port, sslCert))
  }
}