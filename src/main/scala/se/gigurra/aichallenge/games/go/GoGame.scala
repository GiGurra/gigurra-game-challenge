package se.gigurra.aichallenge.games.go

import se.gigurra.aichallenge.{GameSelection, GameChallengeFound, GameMessage}
import se.gigurra.aichallenge.games.TwoplayerTurnGame
import se.gigurra.aichallenge.games.go.GamePhase.{GAME_OVER, PLAYING}
import se.gigurra.aichallenge.host.IUserSession
import se.gigurra.aichallenge.GameMessage

import scala.collection.mutable.ArrayBuffer
import scala.language.implicitConversions


import scala.concurrent.duration.DurationInt
import scala.language.postfixOps


class GoGame extends TwoplayerTurnGame[GameState, Player](
  GameSelection.GO,
  new GameState(),
  3 seconds) {

  val previousBoards = new ArrayBuffer[Board]
  val previousMoves = new ArrayBuffer[Move]

  logger.info(s"A new go game ($this) is hosted")

  ///////////////////////////////////////////////////////////////////

  override def countdownReached(): Unit = {
    phase match {
      case PLAYING       => gameOver(opponentOf(curUser), "Make shot timeout")
      case _             =>
    }
  }

  override def handleMessage(client: IUserSession, msg: GameMessage) {
    msg match {
      case msg: GoMessage => msg match {
        case msg: MakeMove   => handleMakeMove(client, msg)
      }
      case _                      => throw new RuntimeException(s"Bad msg received by BattleshipGame: ${msg.getClass}")
    }
  }


  override def initGame(): Unit = {
    gameState.setBlackPlayer(new Player().setName(userA.name).setTeam(Team.B))
    gameState.setWhitePlayer(new Player().setName(userB.name).setTeam(Team.W))
    broadCast(p => new GameChallengeFound().setGame(typ).setOpponent(opponentOf(p).getName))
    gameState.setPhase(PLAYING)
    nextTurn()
  }

  override def nextTurn(): Unit = {
    super.nextTurn()
    curUser.send(new MoveRequest().setState(gameState))
  }

  def handlePass(user: IUserSession): Unit = {
    opponnentsPreviousMove match {
      case Some(move) if isPass(move) => gameOver(userOf(GoUtil.getWinner(board, blackPlayer, whitePlayer)), "Both players passed")
      case _ => nextTurn()
    }
  }

  def handlePlaceStone(user: IUserSession, msg: MakeMove) =  {

    // Throws exception if move is otherwise illegal
    val moveResult: MoveResult = GoUtil.move(
      playerOf(user),
      playerOf(opponentOf(user)),
      msg.getMove,
      board,
      previousMoves,
      previousBoards)

    // Check ko?
    if (previousBoards.contains(board)) {
      gameState.setBoard(previousBoards.last.deepCopy())
      throw new RuntimeException("KO! - illegal move!")
    }

    broadCast(moveResult)
    nextTurn()
  }

  def handleMakeMove(user: IUserSession, msg: MakeMove) {

    if (phase != PLAYING)
      throw new RuntimeException(s"Cannot make move, game is int phase $phase!")

    if (user != curUser)
      throw new RuntimeException("Cannot make move, it's not yet your turn!")

    val move = msg.getMove
    val previousBoard = board.deepCopy()
    if (isPass(move)) {
      handlePass(user)
    } else {
      handlePlaceStone(user, msg)
    }

    previousMoves += msg.getMove
    previousBoards += previousBoard

  }
  
  override def gameOver(uWinner: IUserSession, reason: String) {
    super.gameOver(uWinner, reason)
    gameState.setPhase(GAME_OVER)
    broadCast(
      new GameOver()
        .setReason(reason)
        .setWinner(playerOf(winner))
        .setLoser(playerOf(loser))
        .setEndState(gameState))
  }

  override def playerOf(user: IUserSession): Player = {
    if (user == userA) gameState.getBlackPlayer
    else if (user == userB) gameState.getWhitePlayer
    else throw new RuntimeException(s"$user is not in game $this")
  }

  override def userOf(player: Player): IUserSession = {
    if (player == playerA) userA
    else if (player == playerB) userB
    else throw new RuntimeException(s"${player.getName} is not in game $this")
  }

  def opponentOf(player: Player): Player = playerOf(opponentOf(userOf(player)))

  def phase: GamePhase = gameState.getPhase

  def board: Board = gameState.getBoard

  def blackPlayer: Player = gameState.getBlackPlayer

  def whitePlayer: Player = gameState.getWhitePlayer

  def myPreviousMove: Option[Move] = {
    if (previousMoves.size >= 2) {
      Some(previousMoves(previousMoves.size - 2))
    } else {
      None
    }
  }

  def opponnentsPreviousMove: Option[Move] = {
    if (previousMoves.size >= 1) {
      Some(previousMoves(previousMoves.size - 1))
    } else {
      None
    }
  }

  def isPass(move: Move): Boolean = {
    move.getPoint == null
  }

}
