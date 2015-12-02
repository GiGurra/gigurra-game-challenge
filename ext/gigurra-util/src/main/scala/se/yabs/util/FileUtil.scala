package se.gigurra.util

import java.io._
import java.nio.charset.Charset

object FileUtil {

  val enc = Charset.forName("utf-8")

  def file2Bytes(fileName: String): Option[Array[Byte]] = {
    file2Bytes(new File(fileName))
  }

  def file2Bytes(file: File): Option[Array[Byte]] = {
    if (file.exists()) {
      val stream = new FileInputStream(file)
      try {
        val n = stream.available()
        val bytes = new Array[Byte](n)
        stream.read(bytes)
        Some(bytes)
      } finally {
        if (stream != null)
          stream.close()
      }
    } else {
      None
    }
  }

  def file2String(fileName: String): Option[String] = {
    file2Bytes(fileName).map(new String(_, enc))
  }

  def exists(fileName: String): Boolean = {
    new File(fileName).exists
  }

  def bytes2File(bytes: Array[Byte], fileName: String): Unit = {
    bytes2File(bytes, new File(fileName))
  }

  def bytes2File(bytes: Array[Byte], file: File): Unit = {
    val stream = new FileOutputStream((file))
    try {
      stream.write(bytes)
    } finally {
      if (stream != null)
        stream.close()
    }
  }

  def string2File(text: String, fileName: String) {
    bytes2File(text.getBytes(enc), fileName)
  }

  def listFilesInFolder(folder: File, recurse: Boolean): Seq[File] = {
    if (!folder.exists())
      throw new RuntimeException(s"Folder $folder does not exist")
    if (!folder.isDirectory)
      throw new RuntimeException(s"$folder is not a directory")
    if (recurse)
      ???
    folder.listFiles.filterNot(_.isDirectory)
  }

  def listFilesInFolder(path: String, recurse: Boolean): Seq[File] = {
    listFilesInFolder(new File(path), recurse)
  }

}