package se.gigurra.util.serialization.json.writer

/**
 * Created by johan on 2015-03-27.
 */
object SimpleTypeWriter extends TypeWriter {
  override def apply(x: Any)(implicit buffer: StringBuilder, writer: JsonWriter): Unit = {
    writeQuoteEscaped(String.valueOf(x))
  }
}
