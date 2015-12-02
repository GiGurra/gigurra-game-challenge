package se.gigurra.aichallenge.util

import java.io.{ByteArrayInputStream, ByteArrayOutputStream}

import se.culvertsoft.mgen.javapack.serialization.{JsonPrettyWriter, JsonReader}
import se.gigurra.aichallenge.{UserDb, ClassRegistry, Message}
import se.gigurra.aichallenge.ClassRegistry
import se.gigurra.util.FileUtil

object Serializer {

  private val reg = new ClassRegistry
  private val buffer = new ByteArrayOutputStream
  private val jsonWriter = new JsonPrettyWriter(buffer, reg, true)
  private val jsonReader = new JsonReader(new ByteArrayInputStream(Array[Byte]()), reg)

  def write(o: Message): Array[Byte] = synchronized {
    jsonWriter.writeObject(o)
    val out = buffer.toByteArray
    buffer.reset()
    out
  }

  def read(message: Array[Byte]): Message = synchronized {
    read(message, classOf[Message])
  }

  def read(message: String): Message = synchronized {
    read(message, classOf[Message])
  }
  
  def read(message: Array[Byte], cls: Class[_ <: Message]): Message = synchronized {
    jsonReader.setInput(new ByteArrayInputStream(message))
    jsonReader.readObject(cls)
  }

  def read(message: String, cls: Class[_ <: Message]): Message = synchronized {
    jsonReader.setInput(message)
    jsonReader.readObject(cls)
  }

}

object DbSaver {

  private val reg = new ClassRegistry
  private val buffer = new ByteArrayOutputStream
  private val jsonWriter = new JsonPrettyWriter(buffer, reg, true)
  private val jsonReader = new JsonReader(new ByteArrayInputStream(Array[Byte]()), reg)

  def write(db: UserDb): String = synchronized {
    jsonWriter.writeObjectToString(db)
  }

  def read(db: String): UserDb = synchronized {
    jsonReader.readObject(db, classOf[UserDb])
  }

  def readFile(fileName: String): Option[UserDb] = synchronized {
    FileUtil.file2String(fileName).map(read)
  }

  def writeFile(db: UserDb, fileName: String): Unit = synchronized {
    FileUtil.string2File(write(db), fileName)
  }

}