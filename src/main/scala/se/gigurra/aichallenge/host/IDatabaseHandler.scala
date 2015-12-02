package se.gigurra.aichallenge.host

import se.gigurra.aichallenge.GamePlayed
import se.gigurra.aichallenge.games.Game
import se.gigurra.util.TypedActorProxy

trait IDatabaseHandler extends TypedActorProxy {
  def login(username: String, password: String): Boolean
  def handleGameover(game: Game)
  def getScores(): Seq[GamePlayed]
}

trait IDatabaseHandlerInternal extends IDatabaseHandler {
  def save()
}