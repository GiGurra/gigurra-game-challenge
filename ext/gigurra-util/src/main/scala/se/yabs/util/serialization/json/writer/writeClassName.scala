package se.gigurra.util.serialization.json.writer

/**
 * Created by johan on 2015-03-27.
 */
object writeClassName {

  def apply(cls: Class[_])(implicit buffer: StringBuilder): Unit = {
    buffer.append("\"_class_type\":")
    writeQuoteEscaped(cls.getName)
  }
}
