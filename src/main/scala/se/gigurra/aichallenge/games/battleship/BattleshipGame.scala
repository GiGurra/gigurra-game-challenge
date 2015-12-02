package se.gigurra.aichallenge.games.battleship

import se.gigurra.aichallenge.{GameChallengeFound, GameMessage, GameSelection}
import se.gigurra.aichallenge.games.TwoplayerTurnGame
import se.gigurra.aichallenge.games.battleship.GamePhase.{GAME_OVER, JOINING, PLACING_SHIPS, PLAYING}
import se.gigurra.aichallenge.host.IUserSession
import se.gigurra.aichallenge.GameChallengeFound

import scala.collection.JavaConversions.asScalaBuffer
import scala.language.{implicitConversions, postfixOps}

object BattleshipGame {
  val NUM_SHIPS = 5
  val SHIP_LENGTHS = Seq(2, 3, 4, 5, 6)
  val MAX_LEN = SHIP_LENGTHS.max
}

class BattleshipGame extends TwoplayerTurnGame[GameState, Player](GameSelection.BATTLESHIP, new GameState) {

  logger.info(s"A new battleship game ($this) is hosted")

  ///////////////////////////////////////////////////////////////////

  override def countdownReached(): Unit = {
    phase match {
      case PLACING_SHIPS => gameOver(opponentOf(curUser), "Place ships timeout")
      case PLAYING       => gameOver(opponentOf(curUser), "Make shot timeout")
      case _             =>
    }
  }

  override def initGame(): Unit = {
    gameState.setBluePlayer(new Player().setName(userB.name))
    gameState.setRedPlayer(new Player().setName(userA.name))
    gameState.setPhase(PLACING_SHIPS)
    broadCast(p => new GameChallengeFound().setGame(typ).setOpponent(opponentOf(p).getName))
    broadCast(new PlaceShipsRequest())
  }


  override def handleMessage(client: IUserSession, msg: GameMessage) {
    msg match {
      case msg: BattleshipMessage => msg match {
        case msg: PlaceShips => handlePlaceShips(client, msg)
        case msg: MakeShot   => handleMakeShot(client, msg)
      }
      case _                      => throw new RuntimeException(s"Bad msg received by BattleshipGame: ${msg.getClass}")
    }
  }

  override def nextTurn() {
    super.nextTurn()
    curUser.send(new MakeShotRequest)
  }

  override def gameOver(uWinner: IUserSession, reason: String) {
    super.gameOver(uWinner, reason)
    gameState.setPhase(GAME_OVER)
    broadCast(
      new GameOver()
        .setReason(reason)
        .setWinner(winner.name)
        .setLoser(loser.name)
        .setEndState(gameState))
  }

  override def playerOf(user: IUserSession): Player = {
    if (user == userA) gameState.getRedPlayer
    else if (user == userB) gameState.getBluePlayer
    else throw new RuntimeException(s"$user is not in game $this")
  }

  override def userOf(player: Player): IUserSession = {
    if (player eq playerA) userA
    else if (player eq playerB) userB
    else throw new RuntimeException(s"${player.getName} is not in game $this")
  }

  def opponentOf(player: Player): Player = playerOf(opponentOf(userOf(player)))

  ///////////////////////////////////////////////////////////////////

  def handlePlaceShips(user: IUserSession, msg: PlaceShips) {

    if (phase != PLACING_SHIPS)
      throw new RuntimeException(s"Cannot place ships, game is in phase $phase!")

    if (!BattleshipUtil.areValid(msg.getShips))
      throw new RuntimeException("Ship placement not valid!")

    playerOf(user).setShips(msg.getShips)

    if (players.forall(_.getShips.nonEmpty)) {
      gameState.setPhase(PLAYING)
      nextTurn()
    }

  }

  def handleMakeShot(user: IUserSession, msg: MakeShot) {

    if (phase != PLAYING)
      throw new RuntimeException(s"Cannot make shot, game is int phase $phase!")

    if (user != curUser)
      throw new RuntimeException("Cannot make shot, it's not yet your turn!")

    if (!BattleshipUtil.isInsideMap(msg.getShot.getPos))
      throw new RuntimeException("Cannot make shot, tried to fire outside the map!")

    val opponent = playerOf(opponentOf(user))
    val result = BattleshipUtil.fireAt(playerOf(user), opponent, msg.getShot)

    broadCast(result)

    if (BattleshipUtil.isAlive(opponent)) {
      nextTurn()
    } else {
      gameOver(user, s"no ships alive after ${playerOf(user).getShotsFired.size} shots")
    }
  }

  def phase: GamePhase = {
    gameState.getPhase
  }

}