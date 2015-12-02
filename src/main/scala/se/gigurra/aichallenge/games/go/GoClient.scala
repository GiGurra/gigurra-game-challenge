package se.gigurra.aichallenge.games.go

import org.slf4j.LoggerFactory
import se.gigurra.aichallenge._
import se.gigurra.aichallenge.WelcomeMessage
import se.gigurra.aichallenge.client.IClient

import scala.concurrent.duration.DurationInt
import scala.language.postfixOps

class GoClient(name: String, pw: String, client: IClient, aiCtor: => GoAi) {

  protected val logger = LoggerFactory.getLogger(getClass())

  client.send(new Checkin().setUsername(name).setPassword(pw))

  ///////////////////////////////////////////////////////////////////
  /////   API 

  def playGame(): GameOver = {
    val ai = aiCtor

    client.send(new PlayGame().setGame(GameSelection.GO))

    for (
      msgs <- Stream.continually(client.getNewMessages(10 millis));
      msg <- msgs
    ) {

      msg match {
        case msg: GameChallengeFound =>
        case msg: WelcomeMessage     => println(msg.getMsg)
        case msg: MoveRequest        => client.send(new MakeMove().setMove(ai.makeMove(msg.getState)))
        case msg: GameOver           => return msg
        case msg: MoveResult         => ai.moveMade(msg)
        case msg: ErrorMessage       => throw new RuntimeException(s"ErrorMessage received from server: ${msg.getMsg}")
        case _                       => logger.warn(s"BattleshipClient '$name' ignoring msg of type: ${msg.getClass}")
      }
    }

    ???
  }

  def close() {
    client.close()
  }

}

