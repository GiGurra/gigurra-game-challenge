package se.gigurra.util.serialization.json

/**
 * Created by johan on 2015-03-26.
 */
object ClassCategories {
  val ENUM = classOf[java.lang.Enum[_]]
  val NUMBER = classOf[java.lang.Number]
  val STRING = classOf[String]
  val SCALA_MAP = classOf[scala.collection.Map[_, _]]
  val SCALA_IT = classOf[scala.collection.Iterable[_]]
  val JAVA_MAP = classOf[java.util.Map[_, _]]
  val JAVA_IT = classOf[java.lang.Iterable[_]]
}
