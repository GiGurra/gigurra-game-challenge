lazy val gigurra_util = project in file("ext/gigurra-util")

lazy val gigurra_game_challenge = (project in file(".")).settings(
    name := "gigurra-game-challenge",
    organization := "se.gigurra",
    version := "SNAPSHOT",
    scalaVersion := "2.11.6",

    parallelExecution in Test := false,
    EclipseKeys.withSource := true,

    test in assembly := {},
    mainClass in assembly := Some("se.gigurra.aichallenge.host.Main"),

    scalacOptions ++= Seq("-feature"),

    libraryDependencies ++= Seq(
        "org.slf4j" % "slf4j-log4j12" % "1.7.12",
        "com.novocode" % "junit-interface" % "0.11" % "test",
        "org.zeromq" % "jeromq" % "0.3.4",
        "org.scala-lang.modules" %% "scala-async" % "0.9.2",
        "com.typesafe.akka" % "akka-actor_2.11" % "2.3.9",
        "io.spray" %% "spray-can" % "1.3.2",
        "org.scalaj" %% "scalaj-http" % "1.1.4"
    ),

  // Sync to maven central is slow, so we add this line for instant access :)
  resolvers += "Sonatype OSS Releases" at "https://oss.sonatype.org/content/repositories/releases"

).dependsOn(gigurra_util)


