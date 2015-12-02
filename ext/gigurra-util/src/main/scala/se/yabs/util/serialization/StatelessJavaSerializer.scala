package se.gigurra.util.serialization

import java.io.{ByteArrayInputStream, ByteArrayOutputStream, ObjectInputStream, ObjectOutputStream}

import scala.reflect.ClassTag

class StatelessJavaSerializer extends Serializer[AnyRef] {

  def write(o: AnyRef): Array[Byte] = {
    val bos = new ByteArrayOutputStream()
    val oos = new ObjectOutputStream(bos)
    oos.writeObject(o)
    bos.toByteArray
  }
  
  def read[T2 <: AnyRef : ClassTag](data: Array[Byte]): T2 = {
    val bis = new ByteArrayInputStream(data)
    val ois = new ObjectInputStream(bis)
    val o = ois.readObject()
    o.asInstanceOf[T2]
  }

}
