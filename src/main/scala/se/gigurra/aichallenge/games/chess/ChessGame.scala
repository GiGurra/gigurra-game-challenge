package se.gigurra.aichallenge.games.chess

import se.gigurra.aichallenge.{GameMessage, GameSelection, GamePlayed}
import se.gigurra.aichallenge.games.Game

import scala.language.implicitConversions
import se.gigurra.aichallenge.host.IUserSession

class ChessGame extends Game(GameSelection.CHESS) {
  ???
  
  override def step(): Unit = ???
  override def isGameOver: Boolean = ???

  override def join(client: IUserSession) = ???
  override def canJoin(client: IUserSession): Boolean = ???
  override def isPlayer(client: IUserSession): Boolean = ???

  override def leftGame(client: IUserSession) = ???
  
  override def handleMessage(client: IUserSession, msg: GameMessage) = ???
  
  override def result(): GamePlayed = ???
}