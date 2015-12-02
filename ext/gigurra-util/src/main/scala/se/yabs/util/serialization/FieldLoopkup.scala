package se.gigurra.util.serialization

import java.lang.reflect.{Modifier, Field}

import scala.annotation.tailrec
import scala.collection.mutable
import scala.language.existentials

/**
 * Created by johan on 2015-03-27.
 */
class FieldLoopkup {

  // w inheritance
  private val allClassFields = new mutable.HashMap[Class[_], Seq[Field]]

  // wo inheritance
  private val singleClassFields = new mutable.HashMap[Class[_], Seq[Field]]

  def getAllFields(cls: Class[_]): Seq[Field] = {
    allClassFields.getOrElseUpdate(cls, {
      val classes = getInheritanceTree(cls)
      classes.flatMap(getSingleClassFields)
    })
  }

  @tailrec
  private def getInheritanceTree(cls: Class[_],
                                 added: mutable.LinkedHashSet[Class[_]] = new mutable.LinkedHashSet[Class[_]]): Seq[Class[_]] = {
    added += cls
    val sup = cls.getSuperclass

    if (sup == null || sup == cls || sup == classOf[Object]) {
      added.toSeq.reverse
    } else {
      getInheritanceTree(sup, added)
    }
  }

  private def getSingleClassFields(cls: Class[_]): Seq[Field] = {
    singleClassFields.getOrElseUpdate(cls, cls.getDeclaredFields.filterNot(isStatic).filterNot(isTransient))
  }

  private def isStatic(field: Field): Boolean = {
    Modifier.isStatic(field.getModifiers)
  }

  private def isTransient(field: Field): Boolean = {
    Modifier.isTransient(field.getModifiers)
  }

}
