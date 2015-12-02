package se.gigurra.util.serialization.json.writer

import scala.collection.JavaConverters._

/**
 * Created by johan on 2015-03-27.
 */
object JavaItWriter extends TypeWriter {
  override def apply(x: Any)(implicit buffer: StringBuilder, writer: JsonWriter): Unit = {
    if (x != null) {
      ScalaItWriter.apply(x.asInstanceOf[java.lang.Iterable[_]].asScala)
    } else {
      writer.writeNull()
    }
  }
}
