package se.gigurra.util

import java.time.Instant

import scala.concurrent.duration._
import scala.language.postfixOps

case class TimeStamp(instant: Instant = Instant.now()) extends Serializable {

  def -(other: TimeStamp): Duration = {
    val jDelta = java.time.Duration.between(other.instant, instant)
    Duration.apply(jDelta.toNanos, NANOSECONDS)
  }

  def -(other: Duration): TimeStamp = {
    TimeStamp(instant.minus(java.time.Duration.ofNanos(other.toNanos)))
  }

  def +(other: Duration): TimeStamp = {
    TimeStamp(instant.plus(java.time.Duration.ofNanos(other.toNanos)))
  }

  def <(other: TimeStamp): Boolean = instant.isBefore(other.instant)

  def >(other: TimeStamp): Boolean = instant.isAfter(other.instant)

  def >=(other: TimeStamp): Boolean = instant.isAfter(other.instant) || instant.equals(other.instant)

  def millis: Long = instant.toEpochMilli

}
