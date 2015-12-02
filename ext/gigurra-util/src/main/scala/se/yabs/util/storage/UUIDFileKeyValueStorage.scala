package se.gigurra.util.storage

import java.io.File
import java.util.UUID


import se.gigurra.util.serialization.Serializer

import scala.reflect.ClassTag

class UUIDFileKeyValueStorage[ItemType <: AnyRef : ClassTag](saveFolderPath: String,
                                                             fileExtension: String,
                                                             serializer: Serializer[ItemType])
  extends FileKeyValueStorage[UUID, ItemType](saveFolderPath, fileExtension, serializer) {

  override def key2File(key: UUID): File = {
    new File(s"$saveFolderPath/$key$fileExtension")
  }

  override def file2Key(file: File): UUID = {
    val uuidString = file.getName.stripSuffix(fileExtension)
    UUID.fromString(uuidString)
  }
}
