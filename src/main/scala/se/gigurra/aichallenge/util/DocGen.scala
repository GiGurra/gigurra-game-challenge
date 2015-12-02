package se.gigurra.aichallenge.util

import java.util.UUID

import se.gigurra.aichallenge._
import se.gigurra.aichallenge._
import se.gigurra.aichallenge.games.battleship.{MakeShot, PlaceShips}
import se.gigurra.aichallenge.games.gomoku.{GameOver, MakeMove}

import scala.collection.JavaConversions._

/**
 * Created by johan on 2015-03-23.
 */
object DocGen {
  def main(args: Array[String]): Unit = {

    val loginReply = new RestCheckinReply().setSession(UUID.randomUUID().toString)

    println("Generating REST documentation for gigurra aichallenge")

    println(
      s"""
        |Communication with the gigurra AIChallenge-server is performed using JSON messages.
        |We have used MGen (http://culvertsoft.github.io/mgen) to model all game states and
        |messages and to generate classes/code. MGen generated classes have built-in functionality
        |to automatically be serialized/deserialized to/from json. If you program in C++ or Java,
        |you can use these generated classes and do not have to worry about writing raw json or serialization.
        |
        |If you want to program in other languages, or do not wish to use the generated code,
        |you must format the JSON messages yourself.
        |
        |Client-Server communication can be done using ØMQ or REST. Both can be used with or without generated code,
        |although we recommend using ØMQ with generated code and REST without.
        |
        |All messages coming from the server will contain fields named '__t'. These fields can be
        |ignored if you intend to use REST without generated code, as they only contain type
        |metadata for MGen to know which classes to instantiate objects from. These fields are
        |required when using the ØMQ API, so if you do not intend to use generated code,
        |we recommend you stick with the REST API.
        |
        |This document will show how to communicate with raw json over REST, but won't go into detail
        |about how to use MGen generated code, or how to use ØMQ.
        |
        |
        |* MESSAGE TYPE REFERENCE *
        |
        |All message types and game state definitions are found in the files:
        | - se.gigurra.aichallenge.xml
        | - se.gigurra.aichallenge.games.battleship.xml
        | - se.gigurra.aichallenge.games.gomoku.xml
        |
        |This document will explain in what order the messages should be used.
        |
        |
        |* Communicating with the server *
        |
        |** Logging in **
        |
        |The first thing you must do is log in. This is done by:
        | - HTTP GET http://<server-url>/LOGIN/?username=<username>&password=<password>        |
        |The result of the login is a session key will be sent back to you as JSON in the HTTP response body.
        |The response json looks like this:
        |${loginReply}
        |WARNING: At the moment everything is sent plain text without encryption (https support coming soon!),
        |so pick a username and password you don't care too much about!
        |
        |You must save the 'session' key from the reply as it must be used for all future HTTP requests.
        |
        |After you log in you can do one of three things.
        |1. Send a message to the server
        |2. List what messages are available for you to receive
        |3. Receive messages of a particular type.
        |
        |** Sending messages **
        |
        |Sending a message to the server is done by
        | - HTTP POST http://<server-url>/SEND/?session=<sessionkey>&messagetype=<messagetype>
        |Your send your message as json in the http request body.
        |You use the session key provided by the log in
        |You replace <messagetype> with the full qualified class name of the message you wish to send,
        |for example 'messagetype=${classOf[PlayGame].getName}' tells the server that the json in the
        |http request body is to be interpreted as a '${classOf[PlayGame].getName}' message.
        |
        |Using the login from above, you would do a HTTP post to:
        | - http://<server-url>/SEND/?session=${loginReply.getSession}&messagetype=${classOf[PlayGame].getName}
        |with the contents:
        |${new PlayGame().setGame(GameSelection.BATTLESHIP)}
        |
        |** Listing available messages for download **
        |
        |At any time you can do a:
        | - HTTP GET http://<server-url>/LIST_AVAILABLE/?session=${loginReply.getSession}
        |Which will return a JSON message with a list of all the messages pending to be delivered to you,
        |for example:
        |${new RestListAvailReply().setMessageTypes(Seq(classOf[WelcomeMessage].getName))}
        |
        |** Receiving messages from the server **
        |
        |Once you know what message types are pending for download, you can download them by:
        | - HTTP GET http://<server-url>/RECEIVE/?session=<sessionkey>&messagetype=<messagetype>
        | - Example: HTTP GET http://<server-url>/RECEIVE/?session=${loginReply.getSession}&messagetype=${classOf[WelcomeMessage].getName}
        |The returned http response body will then contain the message you downloaded, which in the case
        |of the above WelcomeMessage would look something like:
        |${new WelcomeMessage().setMsg("Welcome to the gigurra AIChallenge game server! Please select a game.").setAvailableGames(Seq(GameSelection.BATTLESHIP, GameSelection.GOMOKU))}
        |
        |
        |* Playing a game *
        |
        |After you have logged in and received the '${classOf[WelcomeMessage].getName}' message (see above), you should
        |send a '${classOf[PlayGame].getName}' with the game you want to play, such as:
        | - HTTP POST http://<server-url>/SEND/?session=<sessionkey>&messagetype=${classOf[PlayGame].getName}
        |With contents:
        |${new PlayGame().setGame(GameSelection.GOMOKU)}
        |
        |This tells the server to put you in the match making system for playing GOMOKU.
        |Once you have sent this, you should continously poll LIST_AVAILABLE as explained above.
        |
        |Eventually you will receive a '${classOf[GameChallengeFound].getName}' message.
        |Once that is done, the game implementation (Gomoku or Battleship) will start feeding
        |you with control messages. For example, Gomoku will send you '${classOf[MakeMove].getName}' messages every
        |time you should send a position where you want to place your stone. Similarly, Battleship
        |will send you '${classOf[PlaceShips].getName}' messages and '${classOf[MakeShot].getName}' messages.
        |Most of the time, the server expects you to reply to these messages within 3 seconds,
        |or you will automatically lose the game you're playing.
        |
        |Once a game is over you will receive a 'se.gigurra.aichallenge.games.<game>.GameOver' message telling you
        |that you can send another '${classOf[PlayGame].getName}' to start a new game.
        |
        |
        |""".stripMargin)

  }
}
