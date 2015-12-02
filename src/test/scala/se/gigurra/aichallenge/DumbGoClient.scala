package se.gigurra.aichallenge

import se.gigurra.aichallenge.games.go._

/**
 * Created by johan_home on 2015-09-23.
 */
class DumbGoAi extends GoAi {

  override def moveMade(moveResult: MoveResult): Unit = {

  }

  override def makeMove(state: GameState): Move = {
    val nextFreeSpace: Option[Vec2] =  getNextFreeSpace(state)
    nextFreeSpace match {
      case Some(point) => new Move().setPoint(point)
      case None => new Move()
    }
  }

  def getNextFreeSpace(state: GameState): Option[Vec2] = {
    state.getBoard.getPoints.indexWhere( _ == Team.O) match {
      case i if i >= 0 =>
        Some(GoUtil.arrayIndex2Vec2(i, state.getBoard))
      case _ => None
    }
  }

}
