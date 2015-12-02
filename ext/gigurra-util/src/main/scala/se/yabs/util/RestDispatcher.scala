package se.gigurra.util

import java.net.URLDecoder

import scala.collection.mutable.ArrayBuffer

import akka.actor.ActorRef

class RestDispatcher {
  type Callback = (Map[String, String], Option[String], ActorRef) => Unit
  private val callbacks = new ArrayBuffer[(String, Callback)]

  protected def register(path: String, callback: Callback) {
    callbacks += ((path, callback))
  }

  val enc = "utf-8"

  def apply(url: String, contents: Option[String], sender: ActorRef) {

    val cb = callbacks.find(cb => url.contains(cb._1))
      .getOrElse(throw new RuntimeException(s"No callback found for url $url"))

    val remain = url.substring(url.lastIndexOf(cb._1) + cb._1.length)

    if (remain.startsWith("?") && remain.contains("=")) {

      val params = remain.drop(1)
        .split('&')
        .map(_.split('='))
        .map(kv => (URLDecoder.decode(kv(0), enc), URLDecoder.decode(kv(1), enc)))
        .toMap

      cb._2(params, contents, sender)
    }
    else {
      cb._2(Map.empty, contents, sender)
    }


  }

}
