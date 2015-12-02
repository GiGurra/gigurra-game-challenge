package se.gigurra.aichallenge.games.gomoku

import se.gigurra.aichallenge.GamePlayed

/**
 * Created by johan on 2015-03-19.
 */
object GomokuUtil {

  def makeBoard(): Board = new Board().setPositions(Array.ofDim[Team](10, 10))

  def isInsideMap(x: Int, y: Int): Boolean = {
    x >= 0 && x < 10 && y >= 0 && y < 10
  }

  def isInsideMap(pos: Vec2): Boolean = {
    isInsideMap(pos.getX, pos.getY)
  }

  def placedAt(x: Int, y: Int, board: Board): Option[Team] = {
    if (isInsideMap(x, y)) {
      Option(board.getPositions()(x)(y))
    } else {
      None
    }
  }

  def placedAt(pos: Vec2, board: Board): Option[Team] = {
    placedAt(pos.getX, pos.getY, board)
  }

  def canPlaceAt(pos: Vec2, board: Board): Boolean = {
    isInsideMap(pos) && placedAt(pos, board).isEmpty
  }

  /**
   *
   * @param pos
   * @param board
   * @param team
   * @return
   * true if the move -> win
   */
  def placeAt(pos: Vec2, board: Board, team: Team): Boolean = {
    val x0 = pos.getX
    val y0 = pos.getY
    val ps = board.getPositions
    ps(x0)(y0) = team

    // Directions +x, +y, +xy, -xy
    for (xDir <- Seq(-1, 0, 1);
         yDir <- Seq(-1, 0, 1)) {
      if (xDir != 0 || yDir != 0) {
        var nInRow = 0
        for (delta <- -10 until 10) {
          val x = x0 + xDir * delta
          val y = y0 + yDir * delta
          if (placedAt(x, y, board) == Some(team)) {
            nInRow += 1
          } else {
            nInRow = 0
          }

          if (nInRow == 5) {
            return true
          }

        }
      }
    }

    false
  }

}
