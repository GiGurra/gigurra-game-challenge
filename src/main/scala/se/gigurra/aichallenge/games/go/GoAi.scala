package se.gigurra.aichallenge.games.go

trait GoAi {
  def moveMade(moveResult: MoveResult)
  def makeMove(state: GameState): Move
}