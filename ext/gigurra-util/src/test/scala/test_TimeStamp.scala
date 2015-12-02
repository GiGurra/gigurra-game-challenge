import java.time.Instant

import org.junit.{Before, Test}
import org.slf4j.LoggerFactory
import se.gigurra.util.TimeStamp

/**
 * Created by johan on 2015-04-04.
 */
class test_TimeStamp {

  @Before
  def initLog4j(): Unit = LoggerFactory.getLogger(getClass())

  @Test
  def create(): Unit = {
    val t = TimeStamp()
    assert(t != null)
    Thread.sleep(100)
    assert(t.instant != Instant.now())
  }

  @Test
  def createFromTime(): Unit = {
    val i = Instant.now()
    val t = TimeStamp(i)
    assert(t != null)
    Thread.sleep(100)
    assert(t.instant != Instant.now())
    assert(t.instant == i)
  }

  @Test
  def wait500millis(): Unit = {
    val t0 = TimeStamp()
    Thread.sleep(500)
    val t1 = TimeStamp()
    assert(math.abs((t1 - t0).toMillis - 500) < 100)

    assert(t1 > t0)
    assert(t0 < t1)
    assert(t1 == t1.copy())
    assert(t1 >= t0)
  }

}
