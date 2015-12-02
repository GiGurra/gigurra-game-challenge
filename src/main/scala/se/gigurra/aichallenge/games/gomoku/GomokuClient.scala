package se.gigurra.aichallenge.games.gomoku

import org.slf4j.LoggerFactory
import se.gigurra.aichallenge._
import se.gigurra.aichallenge.ErrorMessage
import se.gigurra.aichallenge.client.IClient

import scala.concurrent.duration.DurationInt
import scala.language.postfixOps

class GomokuClient(name: String, pw: String, client: IClient, aiCtor: => GomokuAi) {

  protected val logger = LoggerFactory.getLogger(getClass())

  client.send(new Checkin().setUsername(name).setPassword(pw))

  ///////////////////////////////////////////////////////////////////
  /////   API 

  def playGame(): GameOver = {
    val ai = aiCtor

    client.send(new PlayGame().setGame(GameSelection.GOMOKU))

    for (
      msgs <- Stream.continually(client.getNewMessages(10 millis));
      msg <- msgs
    ) {

      msg match {
        case msg: GameChallengeFound   =>
        case msg: WelcomeMessage       => println(msg.getMsg)
        case msg: MakeMoveRequest      => client.send(new MakeMove().setPosition(ai.makeMove()))
        case msg: GameOver             => return msg
        case msg: MoveMadeNotification => ai.moveMade(msg.getPlayerName, msg.getPosition)
        case msg: ErrorMessage         => throw new RuntimeException(s"ErrorMessage received from server: ${msg.getMsg}")
        case _                         => logger.warn(s"BattleshipClient '$name' ignoring msg of type: ${msg.getClass}")
      }
    }

    ???
  }

  def close() {
    client.close()
  }

}

