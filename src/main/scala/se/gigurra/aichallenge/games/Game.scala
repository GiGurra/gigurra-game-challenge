package se.gigurra.aichallenge.games

import se.gigurra.aichallenge.{GameSelection, GameMessage, GamePlayed}
import se.gigurra.aichallenge.GameSelection
import se.gigurra.aichallenge.host.IUserSession

abstract class Game(val typ: GameSelection) {
  def step(): Unit
  def isGameOver: Boolean

  def join(client: IUserSession)
  def canJoin(client: IUserSession): Boolean
  def isPlayer(client: IUserSession): Boolean

  def leftGame(client: IUserSession)
  
  def handleMessage(client: IUserSession, msg: GameMessage)
  
  def result(): GamePlayed

}