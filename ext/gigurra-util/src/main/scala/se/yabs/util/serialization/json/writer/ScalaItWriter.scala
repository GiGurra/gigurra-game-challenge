package se.gigurra.util.serialization.json.writer

/**
 * Created by johan on 2015-03-27.
 */
object ScalaItWriter extends TypeWriter {
  override def apply(x: Any)(implicit buffer: StringBuilder, writer: JsonWriter): Unit = {
    if (x != null) {
      val m = x.asInstanceOf[collection.Iterable[_]]
      buffer.append('[')
      var i = 0
      val sz = m.size
      for (e <- m) {
        writer.write(e)
        if (i + 1 < sz)
          buffer.append(',')
        i += 1
      }
      buffer.append(']')
    } else {
      writer.writeNull()
    }
  }
}
