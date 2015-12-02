package se.gigurra.aichallenge

import se.gigurra.aichallenge.games.gomoku._

/**
 * Created by johan on 2015-03-19.
 */
class DumbGomokuAi extends GomokuAi {

  val myTeam = Team.BLUE
  val opponentTeam = Team.BLUE
  val board = GomokuUtil.makeBoard()

  var myTurn = false
  var firstMove = true
  var xOffs = 0
  var yOffs = 0

  override def moveMade(user: String, pos: Vec2): Unit = {
    GomokuUtil.placeAt(pos, board, curTeam)
    myTurn = false
    firstMove = false
  }

  override def makeMove(): Vec2 = {
    if (yOffs == 0) {
      if (firstMove) {
        xOffs = 0
      } else {
        xOffs = 1
      }
    }
    myTurn = true
    yOffs += 1
    new Vec2(xOffs, yOffs)
  }

  def curTeam: Team = {
    if (myTurn)
      myTeam
    else
      opponentTeam
  }

}
