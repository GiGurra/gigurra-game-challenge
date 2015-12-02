package se.gigurra.util.serialization

import scala.reflect.ClassTag

trait Serializer[-T] {
  def write(o: T): Array[Byte]
  def read[T2 <: T : ClassTag](data: Array[Byte]): T2
}
