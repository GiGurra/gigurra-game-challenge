package se.gigurra.util.serialization.json.writer

/**
 * Created by johan on 2015-03-26.
 */
object writeQuoteEscaped {

  def apply(s: String)(implicit buffer: StringBuilder) {

    if (s == null) {
      buffer.append("\"null\"")
      return
    }

    buffer.append('"')

    var i = 0
    while (i < s.length) {
      val ch = s.charAt(i)
      ch match {
        case '"'  =>
          buffer.append('\\')
          buffer.append('"')
        case '\\' =>
          buffer.append('\\')
          buffer.append('\\')
        case '\b' =>
          buffer.append('\\')
          buffer.append('b')
        case '\f' =>
          buffer.append('\\')
          buffer.append('f')
        case '\n' =>
          buffer.append('\\')
          buffer.append('n')
        case '\r' =>
          buffer.append('\\')
          buffer.append('r')
        case '\t' =>
          buffer.append('\\')
          buffer.append('t')
        case '/'  =>
          buffer.append('\\')
          buffer.append('/')
        case _    =>
          // Reference: http://www.unicode.org/versions/Unicode5.1.0/
          if ((ch >= '\u0000' && ch <= '\u001F') || (ch >= '\u007F' && ch <= '\u009F')
            || (ch >= '\u2000' && ch <= '\u20FF')) {
            val ss = Integer.toHexString(ch)
            buffer.append("\\u")
            var k = 0
            while (k < 4 - ss.length) {
              buffer.append('0')
              k += 1
            }
            buffer.append(ss.toUpperCase())
          } else {
            buffer.append(ch)
          }
      }
      i += 1
    }

    buffer.append('"')

  }

}
