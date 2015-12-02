package se.gigurra.aichallenge.games.gomoku

import se.gigurra.aichallenge.{GameSelection, GameChallengeFound, GameMessage}
import se.gigurra.aichallenge._
import se.gigurra.aichallenge.games.TwoplayerTurnGame
import se.gigurra.aichallenge.games.gomoku.GamePhase._
import se.gigurra.aichallenge.host.IUserSession

import scala.language.{implicitConversions, postfixOps}

class GomokuGame extends TwoplayerTurnGame[GameState, Player](GameSelection.GOMOKU, new GameState) {

  logger.info(s"A new gomoku game ($this) is hosted")


  ///////////////////////////////////////////////////////////////////

  override def countdownReached(): Unit = {
    phase match {
      case PLAYING => gameOver(opponentOf(curUser), "Make move timeout")
      case _       =>
    }
  }

  override def initGame(): Unit = {
    gameState.setBluePlayer(new Player().setName(userB.name))
    gameState.setRedPlayer(new Player().setName(userA.name))
    gameState.setPhase(PLAYING)
    gameState.setBoard(GomokuUtil.makeBoard())
    broadCast(p => new GameChallengeFound().setGame(typ).setOpponent(opponentOf(p).getName))
    nextTurn()
  }

  override def handleMessage(client: IUserSession, msg: GameMessage) {
    msg match {
      case msg: GomokuMessage => msg match {
        case msg: MakeMove => handleMakeMove(client, msg)
      }
      case _                  => throw new RuntimeException(s"Bad msg received by Gomokugame: ${msg.getClass}")
    }
  }

  ////////////////////

  override def nextTurn() {
    super.nextTurn()
    curUser.send(new MakeMoveRequest)
  }

  override def gameOver(winner: IUserSession, reason: String) {
    super.gameOver(winner, reason)
    gameState.setPhase(GAME_OVER)
    broadCast(new GameOver()
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

  def teamOf(user: IUserSession): Team = {
    if (user == userA) Team.RED
    else if (user == userB) Team.BLUE
    else throw new RuntimeException(s"$user is not in game $this")
  }

  def opponentOf(player: Player): Player = playerOf(opponentOf(userOf(player)))

  ////////////////////////////////////////////////

  def phase: GamePhase = {
    gameState.getPhase
  }

  def board: Board = {
    gameState.getBoard
  }

  def handleMakeMove(user: IUserSession, msg: MakeMove) {

    if (phase != PLAYING)
      throw new RuntimeException(s"Cannot make move, game is int phase $phase!")

    if (user != curUser)
      throw new RuntimeException("Cannot make move, it's not yet your turn!")

    if (!GomokuUtil.isInsideMap(msg.getPosition))
      throw new RuntimeException("Cannot make move, tried to place outside the map!")

    if (GomokuUtil.placedAt(msg.getPosition, board).isDefined)
      throw new RuntimeException("Cannot make move, position already occupied!")

    // Update board
    val isGameOver = GomokuUtil.placeAt(msg.getPosition, board, teamOf(user))

    // Notify players
    broadCast(new MoveMadeNotification()
      .setPlayerName(user.name)
      .setPosition(msg.getPosition))

    if (isGameOver) {
      gameOver(user, "Placed 5 in a row")
    } else {
      nextTurn()
    }
  }

}