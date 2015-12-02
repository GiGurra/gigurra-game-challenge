package se.gigurra.util.serialization.json.writer

/**
 * Created by johan on 2015-03-27.
 */
object ArrayWriter extends TypeWriter {
  override def apply(x: Any)(implicit buffer: StringBuilder, writer: JsonWriter): Unit = {
    if (x != null) {
      val it: Iterable[_] = x.asInstanceOf[Array[_]]
      ScalaItWriter.apply(it)
    } else {
      writer.writeNull()
    }
  }
}
