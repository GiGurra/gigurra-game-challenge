/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package se.gigurra.aichallenge;

import se.culvertsoft.mgen.api.model.Field;
import se.culvertsoft.mgen.javapack.metadata.FieldSetDepth;
import se.culvertsoft.mgen.javapack.metadata.FieldVisitSelection;
import se.culvertsoft.mgen.javapack.serialization.FieldVisitor;
import se.culvertsoft.mgen.javapack.serialization.Reader;
import se.culvertsoft.mgen.javapack.util.FieldHasher;
import se.culvertsoft.mgen.javapack.util.EqualityTester;
/* custom_imports_begin *//* custom_imports_end */

public class RestGetAvail extends RestMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private String m_msgtype;

	public RestGetAvail() {
		super();
		m_msgtype = null;
	}

	public RestGetAvail(final String msgtype) {
		m_msgtype = msgtype;
	}

	public String getMsgtype() {
		return m_msgtype;
	}

	public boolean hasMsgtype() {
		return _isMsgtypeSet(FieldSetDepth.SHALLOW);
	}

	public RestGetAvail unsetMsgtype() {
		_setMsgtypeSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public String getMsgtypeCopy() {
		return m_msgtype;
	}

	public RestGetAvail setMsgtype(final String msgtype) {
		m_msgtype = msgtype;
		return this;
	}

	/* custom_methods_begin *//* custom_methods_end */

	@Override
	public String toString() {
		return se.culvertsoft.mgen.javapack.util.Stringifyer.toString(this);
	}

	@Override
	public int hashCode() {
		final int prime = 31;
		int result = -1485471303;
		result = _isMsgtypeSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getMsgtype(), _msgtype_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (RestGetAvail.class != other.getClass()) return false;
		final RestGetAvail o = (RestGetAvail)other;
		return true
		  && hasMsgtype() == o.hasMsgtype()
		  && EqualityTester.areEqual(getMsgtype(), o.getMsgtype(), _msgtype_METADATA.typ());
	}

	@Override
	public RestGetAvail deepCopy() {
		final RestGetAvail out = new RestGetAvail(
			getMsgtype());
		return out;
	}


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                    TYPE METADATA ACCESS AND SERIALIZATION METHODS                    *****
           *****          (accessed primarily by (de-)serializers and for ORM functionality)          *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  

	@Override
	public long _typeId() {
		return _TYPE_ID;
	}

	@Override
	public short _typeId16Bit() {
		return _TYPE_ID_16BIT;
	}

	@Override
	public String _typeId16BitBase64() {
		return _TYPE_ID_16BIT_BASE64;
	}

	@Override
	public String _typeName() {
		return _TYPE_NAME;
	}

	@Override
	public long[] _typeIds() {
		return _TYPE_IDS;
	}

	@Override
	public short[] _typeIds16Bit() {
		return _TYPE_IDS_16BIT;
	}

	@Override
	public String[] _typeIds16BitBase64() {
		return _TYPE_IDS_16BIT_BASE64;
	}

	@Override
	public String _typeIds16BitBase64String() {
		return _TYPE_IDS_16BIT_BASE64_STRING;
	}

	@Override
	public String[] _typeNames() {
		return _TYPE_NAMES;
	}

	@Override
	public void _accept(final FieldVisitor visitor, final FieldVisitSelection selection) throws java.io.IOException {
		switch(selection) {
			case ALL: {
				visitor.beginVisit(this, 1);
				visitor.visit(getMsgtype(), _msgtype_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isMsgtypeSet(FieldSetDepth.SHALLOW))
					visitor.visit(getMsgtype(), _msgtype_METADATA);
				visitor.endVisit();
				break;
			}
		}
	}

	@Override
	public boolean _readField(final short fieldId,
	                         final Object context,
	                         final Reader reader) throws java.io.IOException {
		switch(fieldId) {
			case (_msgtype_ID):
				setMsgtype((String)reader.readStringField(_msgtype_METADATA, context));
				return true;
			default:
				reader.handleUnknownField(null, context);
				return false;
		}
	}

	@Override
	public Field[] _fields() {
		return _FIELDS;
	}

	public boolean _isMsgtypeSet(final FieldSetDepth fieldSetDepth) {
		return m_msgtype != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_msgtype_ID):
				return _isMsgtypeSet(depth);
			default:
				return false;
		}
	}

	public RestGetAvail _setMsgtypeSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_msgtype = m_msgtype != null ? m_msgtype : "";
		else
			m_msgtype = null;
		return this;
	}

	public RestGetAvail _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setMsgtypeSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true;
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isMsgtypeSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_msgtype_ID):
				return _msgtype_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("msgtype"):
				return _msgtype_METADATA;
			default:
				return null;
		}
	}


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                                    TYPE METADATA                                     *****
           *****             (generally speaking, it's a bad idea to edit this manually)              *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  

	public static final long _TYPE_ID = 6044465482077956727L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.Message._TYPE_ID, se.gigurra.aichallenge.RestMessage._TYPE_ID, se.gigurra.aichallenge.RestGetAvail._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -21391;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT, se.gigurra.aichallenge.RestMessage._TYPE_ID_16BIT, se.gigurra.aichallenge.RestGetAvail._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "rHE";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.RestMessage._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.RestGetAvail._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.RestMessage._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.RestGetAvail._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.RestGetAvail";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.Message._TYPE_NAME, se.gigurra.aichallenge.RestMessage._TYPE_NAME, se.gigurra.aichallenge.RestGetAvail._TYPE_NAME };

	public static final Field _msgtype_METADATA = new Field("se.gigurra.aichallenge.RestGetAvail", "msgtype", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)-22547);

	public static final short _msgtype_ID = (short)-22547;

	public static final Field[] _FIELDS = { _msgtype_METADATA };

}
