import org.junit.Test
import se.gigurra.util.serialization.json.writer.JsonWriter

import scala.collection.mutable

/**
 * Created by johan on 2015-03-27.
 */
class test_writeJson_func {

  abstract class MyBase {
    val myList = List(1,2,3)
    val myArray = Array("1", "2", "3")
    val myMap = Map(1 -> 4, "f" -> "u", 1.3 -> 12)
  }

  class MyCrazyClass extends MyBase {
    val name = "apa"
    val myHashmap = new mutable.HashMap[String, Int]()
    myHashmap.put("1", 2)
    myHashmap.put("3", 4)
  }

  @Test
  def test(): Unit = {
    val item = new MyCrazyClass
    val writer = new JsonWriter
    writer.write(item)
    val output = writer.pop()
    println(output)
  }
}
