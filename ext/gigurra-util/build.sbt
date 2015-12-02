lazy val gigurra_util = (project in file(".")).settings(
    name := "util",
    organization := "se.gigurra",
    version := "SNAPSHOT",
    scalaVersion := "2.11.6",

    parallelExecution in Test := false,

    scalacOptions ++= Seq("-feature"),

    libraryDependencies ++= Seq(
        "org.slf4j" % "slf4j-api" % "1.7.12",
        "com.novocode" % "junit-interface" % "0.11" % "test",
        "se.culvertsoft" % "mgen-javalib" % "0.2.5",
        "org.scala-lang.modules" %% "scala-async" % "0.9.2",
        "com.typesafe.akka" % "akka-actor_2.11" % "2.3.9",
        "org.scala-lang.modules" %% "scala-xml" % "1.0.3"
    )
)


