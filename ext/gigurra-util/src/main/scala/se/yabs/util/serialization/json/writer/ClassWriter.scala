package se.gigurra.util.serialization.json.writer

import se.gigurra.util.serialization.FieldLoopkup

/**
 * Created by johan on 2015-03-27.
 */
class ClassWriter(cls: Class[_], fieldLkup: FieldLoopkup, writer: JsonWriter) extends TypeWriter {

  val fields = fieldLkup.getAllFields(cls)
  val clsName = cls.getName

  for (f <- fields)
    f.setAccessible(true)

  // Laziness needed to support circular dependencies
  lazy val fieldWriters = fields.map(f => writer.makeWriter(f.getType, f.getGenericType))
  lazy val fieldsWithWriters = fields.zip(fieldWriters)

  ////////////////////////

  override def apply(x: Any)(implicit buffer: StringBuilder, writerImpl: JsonWriter): Unit = {
    buffer.append('{')

    for ((field, writer) <- fieldsWithWriters) {
      writeQuoteEscaped(field.getName)
      buffer.append(":")
      writer.apply(field.get(x))
      buffer.append(',')
    }

    buffer.append("\"_class_type\":")
    writeQuoteEscaped(x.getClass.getName)
    buffer.append('}')
  }

}
