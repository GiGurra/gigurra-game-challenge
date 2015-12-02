package se.gigurra.aichallenge.host

import akka.actor.ActorSystem
import se.gigurra.aichallenge.{GamePlayed, UserDb}
import se.gigurra.aichallenge.games.Game
import se.gigurra.util.{RepeatingTimer, TypedActorBase, TypedActorUtil}
import se.gigurra.aichallenge.util.DbSaver
import se.gigurra.aichallenge.GamePlayed

import scala.collection.JavaConversions._
import scala.concurrent.duration.DurationInt
import scala.language.postfixOps

class DatabaseHandler private (saveFile: String)(implicit sys: ActorSystem)
  extends TypedActorBase[IDatabaseHandlerInternal]
  with IDatabaseHandlerInternal {

  val userDb = DbSaver.readFile(saveFile).getOrElse(new UserDb)
  val autosaveTimer = new RepeatingTimer(1 second)

  logger.info(s"Created $this - loaded ${userDb.getGames.size} saved game results")

  override def init() {
    val proxy = getProxy
    system.scheduler.scheduleOnce(1 second)(proxy.save())
  }

  override def login(username: String, password: String) = {
    userDb.login(username, password)
  }

  override def handleGameover(game: Game) {
    userDb.handleGamePlayed(game.result())
  }

  override def close() {
    logger.info(s"Stopping $this - saving ${userDb.getGames.size} game results")
    save(again = false)
  }

  override def save() {
    save(again = true)
  }

  override def getScores(): Seq[GamePlayed] = {
    Seq() ++ userDb.getGames // Important: Make copy!
  }

  private def save(again: Boolean) {
    DbSaver.writeFile(userDb, saveFile)
    if (again)
      scheduleOnce(1 second, _.save())
  }

}

object DatabaseHandler {
  def apply(saveFile: String = "game_results.json")(implicit sys: ActorSystem) = {
    TypedActorUtil.make_typedActor(classOf[IDatabaseHandlerInternal], new DatabaseHandler(saveFile))
  }
}