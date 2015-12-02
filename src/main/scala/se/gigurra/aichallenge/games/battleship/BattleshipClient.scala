package se.gigurra.aichallenge.games.battleship

import org.slf4j.LoggerFactory
import se.gigurra.aichallenge._

import scala.collection.JavaConversions.seqAsJavaList
import scala.concurrent.duration.DurationInt
import scala.language.postfixOps
import se.gigurra.aichallenge.WelcomeMessage
import se.gigurra.aichallenge.client.IClient

class BattleshipClient(name: String, pw: String, client: IClient, aiCtor: => BattleshipAi) {

  protected val logger = LoggerFactory.getLogger(getClass())

  client.send(new Checkin().setUsername(name).setPassword(pw))

  ///////////////////////////////////////////////////////////////////
  /////   API 

  def playGame(): GameOver = {
    val ai = aiCtor

    client.send(new PlayGame().setGame(GameSelection.BATTLESHIP))

    for (
      msgs <- Stream.continually(client.getNewMessages(10 millis));
      msg <- msgs
    ) {

      msg match {
        case msg: GameChallengeFound =>
        case msg: WelcomeMessage     => println(msg.getMsg)
        case msg: PlaceShipsRequest  => client.send(new PlaceShips().setShips(ai.placeShips()))
        case msg: MakeShotRequest    => client.send(new MakeShot().setShot(ai.makeShot()))
        case msg: GameOver           => return msg
        case msg: ShotResult         => ai.shotFired(msg.getShooterName, msg.getShot.getPos, msg.getShot.getIsHit)
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

