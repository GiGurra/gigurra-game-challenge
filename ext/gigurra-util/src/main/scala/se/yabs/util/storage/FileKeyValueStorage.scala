package se.gigurra.util.storage

import java.io.File
import org.slf4j.LoggerFactory
import se.gigurra.util.FileUtil
import se.gigurra.util.serialization.Serializer

import scala.collection.mutable
import scala.reflect.ClassTag

abstract class FileKeyValueStorage[KeyType, ItemType <: AnyRef : ClassTag](val saveFolderPath: String,
                                                                       val fileExtension: String,
                                                                       val serializer: Serializer[ItemType]) extends KeyValueStorage[KeyType, ItemType] {
  private val fileLkup = new mutable.HashMap[KeyType, File]
  protected val logger = LoggerFactory.getLogger(getClass())
  init()

  ///////////////////////////

  override def store(key: KeyType, item: ItemType): Unit = {
    val data = serializer.write(item)
    val file = fileLkup.getOrElseUpdate(key, key2File(key))
    FileUtil.bytes2File(data, file)
  }

  override def load(key: KeyType, fdefault: => Option[ItemType] = None): ItemType = {
    fileLkup.get(key) match {
      case Some(file) => FileUtil.file2Bytes(file) match {
        case Some(data) => serializer.read[ItemType](data)
        case None => fdefault.getOrElse(throw new RuntimeException(s"File $file for key $key empty or not readable"))
      }
      case None => fdefault.getOrElse(throw new RuntimeException(s"No file to load for key $key"))
    }
  }

  override def delete(key: KeyType): Unit = {
    fileLkup.remove(key) foreach (_.delete())
  }

  override def list: Seq[KeyType] = {
    Seq() ++ fileLkup.keys
  }

  //////////////////////////

  def key2File(key: KeyType): File

  def file2Key(file: File): KeyType

  //////////////////////////

  private def init(): Unit = {

    val saveFolder = new File(saveFolderPath)

    if (!saveFolder.exists() && !saveFolder.mkdirs())
      throw new RuntimeException(s"Save folder '$saveFolder' does not exist and could not be created")

    if (!saveFolder.isDirectory)
      throw new RuntimeException(s"Save folder '$saveFolder' is a file, not a directory..")

    // Try writing a file there
    val testWriteFile = new File(s"$saveFolder/test_file$fileExtension")
    if (!testWriteFile.createNewFile() || !testWriteFile.delete())
      throw new RuntimeException(s"Save folder '$saveFolder' not writeable")

    // Find existing files
    val filesInFolder = FileUtil.listFilesInFolder(saveFolder, recurse = false)
      .filter(_.getName.endsWith(fileExtension))

    // Test files...
    logger.info(s"Verifying saved files in folder.. $saveFolderPath")
    for (file <- filesInFolder) {

      logger.info(s" Verifying $file..")

      val contents = FileUtil.file2Bytes(file.getAbsolutePath)
        .getOrElse(throw new RuntimeException(s"Failed reading $file"))

      if (serializer.read[ItemType](contents) == null)
        throw new RuntimeException(s"Failed reading $file (serializer return null)")

      fileLkup.put(file2Key(file), file)
      logger.info(s" Verified $file ok!")
    }
    logger.info(s"All (${fileLkup.size}) stored files verified ok")
  }

}
