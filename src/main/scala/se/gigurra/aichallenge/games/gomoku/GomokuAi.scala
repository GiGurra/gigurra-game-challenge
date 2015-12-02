package se.gigurra.aichallenge.games.gomoku

trait GomokuAi {
  def moveMade(user: String, pos: Vec2)
  def makeMove(): Vec2
}