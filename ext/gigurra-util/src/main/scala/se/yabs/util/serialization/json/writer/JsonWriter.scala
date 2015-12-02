package se.gigurra.util.serialization.json.writer

import se.gigurra.util.serialization.FieldLoopkup
import se.gigurra.util.serialization.json.ClassCategories

import scala.collection.JavaConversions._

class JsonWriter {

  import ClassCategories._

  private val l1classWriters = new java.util.IdentityHashMap[Class[_], TypeWriter]()
  private val fieldLkup = new FieldLoopkup

  private implicit val writImpl = this
  private implicit val buffer = new StringBuilder

  def write(o: Any): Unit = {
    if (o != null) {
      val cls = o.getClass
      val writer = getWriter(cls)
      writer.apply(o)
    } else {
      writeNull()
    }
  }

  def pop(): String = {
    val out = buffer.toString()
    buffer.setLength(0)
    out
  }

  def getWriter(cls: Class[_]): TypeWriter = {
    l1classWriters.getOrElseUpdate(cls, makeWriter(cls, null))
  }

  def makeWriter(cls: Class[_], genericParameters: java.lang.reflect.Type): TypeWriter = {
    cls match {
      case cls if NUMBER.isAssignableFrom(cls) => SimpleTypeWriter
      case cls if STRING.isAssignableFrom(cls) => SimpleTypeWriter
      case cls if ENUM.isAssignableFrom(cls) => SimpleTypeWriter
      case cls if SCALA_MAP.isAssignableFrom(cls) => ScalaMapWriter
      case cls if JAVA_MAP.isAssignableFrom(cls) => JavaMapWriter
      case cls if SCALA_IT.isAssignableFrom(cls) => ScalaItWriter
      case cls if JAVA_IT.isAssignableFrom(cls) => JavaItWriter
      case cls if cls.isArray => ArrayWriter
      case _ => new ClassWriter(cls, fieldLkup, this) // Must be a user class ..
    }
  }

  def writeNull(): Unit = {
    buffer.append("\"null\"")
  }

}

