package se.gigurra.util.serialization

import java.io.{ByteArrayInputStream, ByteArrayOutputStream}

import se.culvertsoft.mgen.javapack.classes.{ClassRegistryBase, MGenBase}
import se.culvertsoft.mgen.javapack.serialization.{JsonPrettyWriter, JsonReader}

import scala.reflect.ClassTag

class MGenJsonSerializer[MesssageType <: MGenBase : ClassTag, ClassRegistryType <: ClassRegistryBase : ClassTag] extends Serializer[MesssageType] {

  private val msgClass = scala.reflect.classTag[MesssageType].runtimeClass.asInstanceOf[Class[_ <: MesssageType]]
  private val clsRegClass = scala.reflect.classTag[ClassRegistryType].runtimeClass.asInstanceOf[Class[_ <: ClassRegistryType]]

  private val reg = clsRegClass.newInstance()
  private val buffer = new ByteArrayOutputStream
  private val jsonWriter = new JsonPrettyWriter(buffer, reg, true)
  private val jsonReader = new JsonReader(new ByteArrayInputStream(Array[Byte]()), reg)

  def read(message: Array[Byte]): MesssageType = synchronized {
    read(message, msgClass)
  }

  def read(message: String): MesssageType = synchronized {
    read(message, msgClass)
  }

  def read[T <: MesssageType](message: Array[Byte], cls: Class[_ <: T]): T = synchronized {
    jsonReader.setInput(new ByteArrayInputStream(message))
    jsonReader.readObject(cls)
  }

  def read[T <: MesssageType](message: String, cls: Class[_ <: T]): T = synchronized {
    jsonReader.setInput(message)
    jsonReader.readObject(cls)
  }

  override def write(o: MesssageType): Array[Byte] = synchronized {
    jsonWriter.writeObject(o)
    val out = buffer.toByteArray
    buffer.reset()
    out
  }

  override def read[T2 <: MesssageType : ClassTag](data: Array[Byte]): T2 = synchronized {
    read(data, scala.reflect.classTag[T2].runtimeClass.asInstanceOf[Class[_ <: T2]])
  }
}
