package se.gigurra.util.serialization.json.writer

import scala.collection.JavaConverters._

/**
 * Created by johan on 2015-03-27.
 */
object JavaMapWriter extends TypeWriter {
  override def apply(x: Any)(implicit buffer: StringBuilder, writer: JsonWriter): Unit = {
    if (x != null) {
      ScalaMapWriter.apply(x.asInstanceOf[java.util.Map[_, _]].asScala)
    } else {
      writer.writeNull()
    }
  }
}
