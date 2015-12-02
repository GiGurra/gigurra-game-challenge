package se.gigurra.aichallenge.games

import org.slf4j.LoggerFactory
import se.gigurra.aichallenge.{GameSelection, GamePlayed, Message}
import se.gigurra.aichallenge.host.IUserSession
import se.gigurra.util.CountDown
import se.gigurra.aichallenge.GameSelection

import scala.collection.JavaConversions._
import scala.concurrent.duration._
import scala.language.postfixOps
import scala.util.Random

/**
 * Created by johan on 2015-03-19.
 */
abstract class TwoplayerTurnGame[GameStateType, PlayerType](typ: GameSelection,
                                                            val gameState: GameStateType,
                                                            val maxTurnTime: FiniteDuration = 3 seconds) extends Game(typ) {

  protected val logger = LoggerFactory.getLogger(getClass())

  private val _countDown = new CountDown(maxTurnTime)

  private var _userA: IUserSession = null
  private var _userB: IUserSession = null
  private var _winner: IUserSession = null
  private var _loser: IUserSession = null
  private var _currentUser: IUserSession = null

  private var _locked = false
  private var _gameOver = false

  /////////////////////////////////////////

  def countdownReached()

  def initGame()

  def playerOf(user: IUserSession): PlayerType

  def userOf(player: PlayerType): IUserSession

  def gameOver(winner: IUserSession, reason: String): Unit = {
    _winner = winner
    _loser = opponentOf(winner)
    _gameOver = true
    logger.info(s"Game over: ${winner.name} beat ${loser.name}!")
    logger.info(s"  reason: $reason")
  }

  def nextTurn(): Unit = {
    _currentUser = opponentOf(curUser)
    resetCountdown()
  }

  /////////////////////////////////////////

  final def curUser: IUserSession = {
    if (_currentUser == null) {
      val nextFloat = Random.nextFloat()
      if (nextFloat > 0.5) {
        _currentUser = userA
      } else {
        _currentUser = userB
      }
    }
    _currentUser
  }

  final override def isGameOver: Boolean = {
    _gameOver
  }

  final override def step() {
    if (_countDown.isReached) {
      countdownReached()
    }
  }

  final override def isPlayer(user: IUserSession): Boolean = {
    (user eq userA) || (user eq userB)
  }

  final override def canJoin(client: IUserSession): Boolean = {
    !_locked && !hasTwoUsers
  }

  final override def join(user: IUserSession) {

    if (userA == null) {
      _userA = user
      logger.info(s"${user.name} joined $this as player A")
    } else if (userB == null) {
      _userB = user
      logger.info(s"${user.name} joined $this as player B")
    } else
      throw new RuntimeException("Tried to join full game")

    if (hasTwoUsers) {

      logger.info(s"Challenge found, ${userA.name} vs ${userB.name}")
      _countDown.reset()

      _locked = true
      initGame()

    }
  }

  final override def result(): GamePlayed = {

    if (!isGameOver)
      throw new RuntimeException("Called result() before game was finished")

    new GamePlayed(typ, Seq(winner.name, loser.name), Seq(winner.name))
  }

  final override def leftGame(client: IUserSession) {
    if (isPlayer(client) && hasTwoUsers) {
      gameOver(opponentOf(client), s"${client.name} left the game")
    }
  }

  final def resetCountdown(): Unit = {
    _countDown.reset()
  }

  final def users = {
    Seq(userA, userB).filter(_ != null)
  }

  final def hasTwoUsers: Boolean = {
    users.size == 2
  }

  final def players = {
    Seq(playerA, playerB)
  }

  final def playerB: PlayerType = {
    playerOf(userB)
  }

  final def playerA: PlayerType = {
    playerOf(userA)
  }

  final def broadCast(msg: Message) {
    users.foreach(_.send(msg))
  }

  final def broadCast(fMsg: PlayerType => Message) {
    players.foreach(p => userOf(p).send(fMsg(p)))
  }

  final def opponentOf(user: IUserSession): IUserSession = {
    if (user == userA) userB
    else if (user == userB) userA
    else throw new RuntimeException(s"Bad user: $user")
  }

  final def userA = {
    _userA
  }

  final def userB = {
    _userB
  }

  final def winner = {
    _winner
  }

  final def loser = {
    _loser
  }

}
