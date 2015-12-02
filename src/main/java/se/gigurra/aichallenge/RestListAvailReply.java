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

public class RestListAvailReply extends RestMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private java.util.List<String> m_messageTypes;

	public RestListAvailReply() {
		super();
		m_messageTypes = null;
	}

	public RestListAvailReply(final java.util.List<String> messageTypes) {
		m_messageTypes = messageTypes;
	}

	public java.util.List<String> getMessageTypes() {
		return m_messageTypes;
	}

	public boolean hasMessageTypes() {
		return _isMessageTypesSet(FieldSetDepth.SHALLOW);
	}

	public RestListAvailReply unsetMessageTypes() {
		_setMessageTypesSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public java.util.List<String> getMessageTypesCopy() {
		java.util.List<String> out = null;
		final java.util.List<String> var0 = getMessageTypes();
		if (var0 != null) {
			out = new java.util.ArrayList<String>(var0.size());
			for (final String var1 : var0) {
				String var2 = null;
				var2 = var1;
				out.add(var2);
			}
		} else {
			out = null;
		}
		return out;
	}

	public RestListAvailReply setMessageTypes(final java.util.List<String> messageTypes) {
		m_messageTypes = messageTypes;
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
		int result = -186928903;
		result = _isMessageTypesSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getMessageTypes(), _messageTypes_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (RestListAvailReply.class != other.getClass()) return false;
		final RestListAvailReply o = (RestListAvailReply)other;
		return true
		  && hasMessageTypes() == o.hasMessageTypes()
		  && EqualityTester.areEqual(getMessageTypes(), o.getMessageTypes(), _messageTypes_METADATA.typ());
	}

	@Override
	public RestListAvailReply deepCopy() {
		final RestListAvailReply out = new RestListAvailReply(
			getMessageTypesCopy());
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
				visitor.visit(getMessageTypes(), _messageTypes_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isMessageTypesSet(FieldSetDepth.SHALLOW))
					visitor.visit(getMessageTypes(), _messageTypes_METADATA);
				visitor.endVisit();
				break;
			}
		}
	}

	@SuppressWarnings("unchecked")
	@Override
	public boolean _readField(final short fieldId,
	                         final Object context,
	                         final Reader reader) throws java.io.IOException {
		switch(fieldId) {
			case (_messageTypes_ID):
				setMessageTypes((java.util.List<String>)reader.readListField(_messageTypes_METADATA, context));
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

	public boolean _isMessageTypesSet(final FieldSetDepth fieldSetDepth) {
		return m_messageTypes != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_messageTypes_ID):
				return _isMessageTypesSet(depth);
			default:
				return false;
		}
	}

	public RestListAvailReply _setMessageTypesSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_messageTypes = m_messageTypes != null ? m_messageTypes : new java.util.ArrayList<String>(16);
		else
			m_messageTypes = null;
		return this;
	}

	public RestListAvailReply _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setMessageTypesSet(state, depth);
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
		out += _isMessageTypesSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_messageTypes_ID):
				return _messageTypes_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("messageTypes"):
				return _messageTypes_METADATA;
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
		  

	public static final long _TYPE_ID = 1106664312393657088L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.Message._TYPE_ID, se.gigurra.aichallenge.RestMessage._TYPE_ID, se.gigurra.aichallenge.RestListAvailReply._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -6588;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT, se.gigurra.aichallenge.RestMessage._TYPE_ID_16BIT, se.gigurra.aichallenge.RestListAvailReply._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "5kQ";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.RestMessage._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.RestListAvailReply._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.RestMessage._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.RestListAvailReply._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.RestListAvailReply";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.Message._TYPE_NAME, se.gigurra.aichallenge.RestMessage._TYPE_NAME, se.gigurra.aichallenge.RestListAvailReply._TYPE_NAME };

	public static final Field _messageTypes_METADATA = new Field("se.gigurra.aichallenge.RestListAvailReply", "messageTypes", new se.culvertsoft.mgen.api.model.ListType(se.culvertsoft.mgen.api.model.StringType.INSTANCE), null, (short)-24999);

	public static final short _messageTypes_ID = (short)-24999;

	public static final Field[] _FIELDS = { _messageTypes_METADATA };

}
