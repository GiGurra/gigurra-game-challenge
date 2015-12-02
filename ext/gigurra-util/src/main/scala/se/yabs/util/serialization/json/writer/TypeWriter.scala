package se.gigurra.util.serialization.json.writer

/**
 * Created by johan on 2015-03-27.
 */
trait TypeWriter {
  def apply(x: Any)(implicit buffer: StringBuilder, writer: JsonWriter)
}
