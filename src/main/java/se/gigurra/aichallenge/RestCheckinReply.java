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

public class RestCheckinReply extends RestMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private String m_session;

	public RestCheckinReply() {
		super();
		m_session = null;
	}

	public RestCheckinReply(final String session) {
		m_session = session;
	}

	public String getSession() {
		return m_session;
	}

	public boolean hasSession() {
		return _isSessionSet(FieldSetDepth.SHALLOW);
	}

	public RestCheckinReply unsetSession() {
		_setSessionSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public String getSessionCopy() {
		return m_session;
	}

	public RestCheckinReply setSession(final String session) {
		m_session = session;
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
		int result = 1098579261;
		result = _isSessionSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getSession(), _session_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (RestCheckinReply.class != other.getClass()) return false;
		final RestCheckinReply o = (RestCheckinReply)other;
		return true
		  && hasSession() == o.hasSession()
		  && EqualityTester.areEqual(getSession(), o.getSession(), _session_METADATA.typ());
	}

	@Override
	public RestCheckinReply deepCopy() {
		final RestCheckinReply out = new RestCheckinReply(
			getSession());
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
				visitor.visit(getSession(), _session_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isSessionSet(FieldSetDepth.SHALLOW))
					visitor.visit(getSession(), _session_METADATA);
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
			case (_session_ID):
				setSession((String)reader.readStringField(_session_METADATA, context));
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

	public boolean _isSessionSet(final FieldSetDepth fieldSetDepth) {
		return m_session != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_session_ID):
				return _isSessionSet(depth);
			default:
				return false;
		}
	}

	public RestCheckinReply _setSessionSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_session = m_session != null ? m_session : "";
		else
			m_session = null;
		return this;
	}

	public RestCheckinReply _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setSessionSet(state, depth);
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
		out += _isSessionSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_session_ID):
				return _session_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("session"):
				return _session_METADATA;
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
		  

	public static final long _TYPE_ID = 4691145557295699189L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.Message._TYPE_ID, se.gigurra.aichallenge.RestMessage._TYPE_ID, se.gigurra.aichallenge.RestCheckinReply._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -26244;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT, se.gigurra.aichallenge.RestMessage._TYPE_ID_16BIT, se.gigurra.aichallenge.RestCheckinReply._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "mXw";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.RestMessage._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.RestCheckinReply._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.RestMessage._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.RestCheckinReply._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.RestCheckinReply";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.Message._TYPE_NAME, se.gigurra.aichallenge.RestMessage._TYPE_NAME, se.gigurra.aichallenge.RestCheckinReply._TYPE_NAME };

	public static final Field _session_METADATA = new Field("se.gigurra.aichallenge.RestCheckinReply", "session", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)2127);

	public static final short _session_ID = (short)2127;

	public static final Field[] _FIELDS = { _session_METADATA };

}
