package se.gigurra.aichallenge.games.go

import scala.annotation.tailrec

/**
 * Created by kjolh on 9/23/2015.
 */
object GoUtil {

  def getWinner(board: Board, blackPlayer: Player, whitePlayer: Player): Player = {

    val nBlack = board.getPoints.filter(_ == Team.B).size
    val nWhite = board.getPoints.filter(_ == Team.W).size

    if (nBlack > nWhite) {
      blackPlayer
    } else if (nWhite > nBlack) {
      whitePlayer
    } else {
      if (math.random > 0.5) {
        blackPlayer
      } else {
        whitePlayer
      }
    }
  }

  def move(player: Player,
           opponent: Player,
           move: Move,
           board: Board,
           previousMoves: Seq[Move],
           previousBoards: Seq[Board]): MoveResult = {

    val point = move.getPoint

    // Check that we aren't processing a pass move (this function should not be called with pass!)
    if (point == null)
      throw new RuntimeException(s"Cannot call move(..) with a pass move!")

    // Throw if outside board
    if (!isInside(point, board))
      throw new RuntimeException(s"Cannot place stone at $point - That position is outside the board!")

    // Throw if point isn't empty
    if (!isPointEmpty(point, board))
      throw new RuntimeException(s"Cannot place stone at $point - That position isn't empty!")

    // Place stone
    setAt(point, board, player.getTeam)

    // Kill/Remove enemy groups that have no freedoms
    val deadEnemyGroups =
      neighbors(point, board)
        .flatMap(makeGroup(_, board))
        .filter(_.getTeam == opponent.getTeam)
        .distinct
        .filter(findFreedoms(_, board).isEmpty)
    for (enemyGroup <- deadEnemyGroups) {
      for (p <- enemyGroup.getPositions) {
        setAt(p, board, Team.O)
      }
    }

    // Undo move if killed ourselves and no enemy groups were removed
    val group = makeGroup(move.getPoint, board).get
    val freedoms = findFreedoms(group, board)
    if (freedoms.isEmpty) {
      setAt(point, board, Team.O)
      throw new RuntimeException(s"Cannot place stone at $point - The group formed by it would have no freedoms!")
    }

    val removedPositions = deadEnemyGroups.flatMap(_.getPositions).distinct
    new MoveResult().setPlayer(player).setPoint(point).setRemoved(removedPositions.toArray)
  }

  def setAt(p: Vec2, board: Board, team: Team): Unit = {
    if (!isInside(p, board))
      throw new RuntimeException(s"setAt failed: Position $p outside board")
    board.getPoints()(Vec22ArrayIndex(p, board)) = team
  }

  def findFreedoms(group: Group, board: Board): Seq[Vec2] = {
    group.getPositions
      .flatMap(neighbors(_, board)).distinct
      .filter(at(_, board) == Team.O)
  }

  def isPointEmpty(point: Vec2, board: Board): Boolean = {
    at(point, board) == Team.O
  }

  def arrayIndex2Vec2(i: Int, board: Board): Vec2 = {
    if (i < 0 || i >= board.getWidth * board.getHeight)
      throw new RuntimeException(s"arrayIndex2Vec: Invalid array index $i")

    val y = i / board.getWidth
    val x = i % board.getWidth
    new Vec2(x, y)
  }


  def Vec22ArrayIndex(point: Vec2, board: Board): Int = {
    if (!isInside(point, board))
      throw new RuntimeException(s"Vec22ArrayIndex: Invalid coordinate $point")
    point.getY * board.getWidth + point.getX
  }

  def makeGroup(p0: Vec2, board: Board): Option[Group] = {

    @tailrec
    def groupImpl(team: Team,
                  accChecked: Set[Vec2],
                  accMembers: Set[Vec2],
                  lastAdded: Set[Vec2]): Set[Vec2] = {

      val newToCheck = (lastAdded.flatMap(neighbors(_,board)).toBuffer -- accChecked).toSet
      if (newToCheck.isEmpty)
        return accMembers

      val newAccChecked = accChecked ++ newToCheck
      val newLastAdded = newToCheck.filter(p => at(p, board) == team)
      val newAccMembers = accMembers ++ newLastAdded

      groupImpl(team, newAccChecked, newAccMembers, newLastAdded)
    }

    at(p0, board) match {
      case Team.O => None
      case team => Some(new Group().setTeam(team).setPositions(groupImpl(team, Set(p0), Set(p0), Set(p0)).toArray))
    }
  }

  def neighbors(p: Vec2, board: Board): Seq[Vec2] = {

    if (!isInside(p, board))
      throw new RuntimeException(s"Position $p outside board")

    val items = for ((dx, dy) <- Seq((-1, 0), (1, 0), (0, -1), (0, 1))) yield {
      new Vec2(p.getX + dx, p.getY + dy)
    }

    items.filter(isInside(_, board))
  }

  def isInside(p: Vec2, board: Board): Boolean = {
    0 <= p.getX && p.getX < board.getWidth && 0 <= p.getY && p.getY < board.getHeight
  }

  def at(p: Vec2, board: Board): Team = {
    if (!isInside(p, board))
      throw new RuntimeException(s"Position $p outside board")
    board.getPoints()(Vec22ArrayIndex(p, board))
  }

}
