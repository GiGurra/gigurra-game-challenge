package se.gigurra.util.serialization.json.writer

/**
 * Created by johan on 2015-03-27.
 */
object ScalaMapWriter extends TypeWriter {
  override def apply(x: Any)(implicit buffer: StringBuilder, writer: JsonWriter): Unit = {
    if (x != null) {
      val m = x.asInstanceOf[collection.Map[_, _]]
      buffer.append('{')
      for ((k, v) <- m) {
        SimpleTypeWriter.apply(k)
        buffer.append(':')
        writer.write(v)
        buffer.append(',')
      }
      writeClassName(x.getClass)
      buffer.append('}')
    } else {
      writer.writeNull()
    }
  }
}
