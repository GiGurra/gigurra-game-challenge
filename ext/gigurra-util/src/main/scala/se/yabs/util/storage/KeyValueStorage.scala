package se.gigurra.util.storage

trait KeyValueStorage[KeyType, ValueType] {

  def list: Seq[KeyType]

  def store(key: KeyType, item: ValueType)

  def load(key: KeyType, fdefault: => Option[ValueType] = None): ValueType

  def delete(key: KeyType)

  def close () {}

  def loadAll(): Map[KeyType, ValueType] = {
    list.map(k => k -> load(k)).toMap
  }

  def storeAll(pairs: Map[KeyType, ValueType]): Unit = {
    for ((k, v) <- pairs) {
      store(k, v)
    }
  }

  def deleteAll(): Unit = {
    list.foreach(delete)
  }

}
