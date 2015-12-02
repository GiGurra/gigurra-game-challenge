package se.gigurra.aichallenge

import akka.actor.ActorSystem
import com.typesafe.config.ConfigFactory
import org.junit.{Before, Test}
import org.slf4j.LoggerFactory
import se.gigurra.aichallenge.host.{DatabaseHandler, GameHost, RestProvider}

import scala.concurrent.Await
import scala.concurrent.duration._
import scala.language.postfixOps
import scalaj.http.{Http, HttpOptions}

/**
 * Created by johan on 2015-03-23.
 */
class test_ssl_func {

  @Before
  def initLog4j(): Unit = LoggerFactory.getLogger(getClass())

  @Test
  def startServer() {

    // This could also be placed in a file called 'application.conf' in 'resources/'
    val cfgString =
      """
        |spray.can {
        |  server {
        |    ssl-encryption = on
        |  }
        |}
      """.stripMargin

    val customConf = ConfigFactory.parseString(cfgString)

    implicit val system = ActorSystem("MySystem", ConfigFactory.load(customConf))

    val databaseHandler = DatabaseHandler()

    val host = GameHost(databaseHandler)
    val restProvider = RestProvider(databaseHandler, host, 8080, "/ssl-test-keystore.jks")

    Await.ready(restProvider.initialized(), 3 seconds)

    val loginResponseJson = Http("https://127.0.0.1:8080/LOGIN/")
      .option(HttpOptions.allowUnsafeSSL)
      .param("username", "rest_user")
      .param("password", "rest_user_password")
      .asString.body.toString()

    system.shutdown()
    system.awaitTermination()

  }

}
