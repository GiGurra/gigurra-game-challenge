package se.gigurra.aichallenge.host

import akka.actor.ActorSystem
import org.slf4j.LoggerFactory
import se.culvertsoft.mgen.javapack.serialization.{CommandLineArgHelp, CommandLineArgParser}
import se.gigurra.aichallenge.{ClassRegistry, CmdLineArgs}
import se.gigurra.aichallenge.ClassRegistry

object Main {

  protected val logger = LoggerFactory.getLogger(getClass())

  def main(args: Array[String]) {

    if (args.exists(arg => {
      arg.contains("help") || arg == "h" || arg == "-h"
    })) {
      println(new CommandLineArgHelp(classOf[CmdLineArgs]))
      return
    }


    implicit val system = ActorSystem()

    val argParser = new CommandLineArgParser(classOf[CmdLineArgs], new ClassRegistry)
    val cmdLineArgs = argParser.parse(args)

    val databaseHandler = DatabaseHandler()

    val host = GameHost(databaseHandler)
    val zmqProvider = ZmqProvider(databaseHandler, host, cmdLineArgs.getZmqPort)
    val restProvider = RestProvider(databaseHandler, host, cmdLineArgs.getRestPort, "<no_ssl_cert>")

    Runtime.getRuntime.addShutdownHook(new Thread() {
      override def run() {
        logger.info("Shutting down server..")
        system.shutdown()
        system.awaitTermination()
        logger.info("Server closed normally")
      }
    })

  }
}