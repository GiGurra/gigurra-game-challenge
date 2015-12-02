package se.gigurra.aichallenge.host

import se.gigurra.aichallenge._
import se.gigurra.aichallenge.games.Game

import scala.collection.JavaConversions.seqAsJavaList
import scala.collection.mutable.ArrayBuffer
import scala.concurrent.duration.DurationInt
import scala.language.postfixOps
import scala.util.Failure
import scala.util.Success
import scala.util.Try

import akka.actor.ActorSystem
import se.gigurra.aichallenge.Checkin
import se.gigurra.aichallenge.PlayGame
import se.gigurra.aichallenge.games.go.GoGame
import se.gigurra.aichallenge.games.battleship.BattleshipGame
import se.gigurra.aichallenge.games.chess.ChessGame
import se.gigurra.aichallenge.games.gomoku.GomokuGame
import se.gigurra.util.TypedActorBase
import se.gigurra.util.TypedActorUtil

class GameHost private(databaseHandler: IDatabaseHandler)(implicit sys: ActorSystem)
  extends TypedActorBase[IGameHostInternal]
  with IGameHostInternal {

  val games = new ArrayBuffer[Game]

  val gameTypes: Map[GameSelection, Class[_ <: Game]] = Map(
    GameSelection.BATTLESHIP -> classOf[BattleshipGame],
    GameSelection.CHESS -> classOf[ChessGame],
    GameSelection.GO -> classOf[GoGame],
    GameSelection.GOMOKU -> classOf[GomokuGame])

  /////////////////////////////////////////
  /////////// Actor Callbacks /////////////

  override def init() {
    scheduleOnce(100 millis, _.step())
  }

  override def attach(session: IUserSession) {
    session.send(
      new WelcomeMessage()
        .setMsg("Welcome to the gigurra AI game challenge server!")
        .setAvailableGames(gameTypes.keys.toSeq))
  }

  override def detach(session: IUserSession) {
    for (game <- session2game(session)) {
      game.leftGame(session)
      if (game.isGameOver) {
        handleGameOver(game)
      } else {
        games -= game // Remove dead games
      }
    }
  }

  override def handleMessage(msg: Message, session: IUserSession) {

    Try(msg match {

      case msg: PlayGame =>

        session2game(session) match {
          case Some(game) =>
            if (game.isGameOver) {
              games -= game
              databaseHandler.handleGameover(game)
            } else {
              throw new RuntimeException("You're already playing a game..")
            }
          case None       =>

        }

        // Exists a game already?
        games.find(g => g.typ == msg.getGame && g.canJoin(session)) match {
          case Some(game) =>
            game.join(session)
          case None       =>
            val game = make_game(msg)
            game.join(session)
            games += game
        }

      case msg: GameMessage =>
        session2game(session) match {
          case Some(game) =>
            game.handleMessage(session, msg)
            if (game.isGameOver)
              handleGameOver(game)
          case None       =>
            throw new RuntimeException(s"Server received a ${msg.getClass}, but you're not playing a game..")
        }

      case msg: Checkin => logger.info(s"${msg.getUsername} checked in")
      case _            => throw new RuntimeException(s"Unexpected message type ${msg.getClass}")

    }) match {
      case Success(_) =>
      case Failure(e) =>
        e.printStackTrace()
        session.send(
          new ErrorMessage()
            .setMsg(s"Unable to process msg of type '${msg.getClass}', error: '${e.getMessage}'. See server for stacktrace"))
    }

  }

  override def step() {

    // Step each game
    for (game <- games)
      game.step()

    // Handle finished games
    for (game <- games.filter(_.isGameOver))
      handleGameOver(game)

    // Schedule another step
    scheduleOnce(100 millis, _.step())
  }

  /////////////////////////////////////////

  def handleGameOver(g: Game): Unit = {
    games -= g
    databaseHandler.handleGameover(g)
  }

  def session2game(session: IUserSession): Option[Game] = {
    games.find(_.isPlayer(session))
  }

  def make_game(msg: PlayGame): Game = {
    val selection = msg.getGame
    gameTypes.get(selection) match {
      case Some(gameClass) => gameClass.newInstance()
      case None            => throw new RuntimeException(s"Invalid game selection: $selection")
    }
  }

}

object GameHost {
  def apply(databaseHandler: IDatabaseHandler)(implicit sys: ActorSystem): IGameHost = {
    TypedActorUtil.make_typedActor(classOf[IGameHostInternal], new GameHost(databaseHandler))
  }
}
