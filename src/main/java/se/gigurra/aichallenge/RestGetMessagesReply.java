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
import se.culvertsoft.mgen.javapack.util.Validator;
import se.culvertsoft.mgen.javapack.util.Marker;
/* custom_imports_begin *//* custom_imports_end */

public class RestGetMessagesReply extends RestMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private java.util.List<Message> m_messages;

	public RestGetMessagesReply() {
		super();
		m_messages = null;
	}

	public RestGetMessagesReply(final java.util.List<Message> messages) {
		m_messages = messages;
	}

	public java.util.List<Message> getMessages() {
		return m_messages;
	}

	public boolean hasMessages() {
		return _isMessagesSet(FieldSetDepth.SHALLOW);
	}

	public RestGetMessagesReply unsetMessages() {
		_setMessagesSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public java.util.List<Message> getMessagesCopy() {
		java.util.List<Message> out = null;
		final java.util.List<Message> var0 = getMessages();
		if (var0 != null) {
			out = new java.util.ArrayList<Message>(var0.size());
			for (final Message var1 : var0) {
				Message var2 = null;
				final Message var3 = var1;
				if (var3 != null) {
					var2 = var3.deepCopy();
				} else {
					var2 = null;
				}
				out.add(var2);
			}
		} else {
			out = null;
		}
		return out;
	}

	public RestGetMessagesReply setMessages(final java.util.List<Message> messages) {
		m_messages = messages;
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
		int result = -963501112;
		result = _isMessagesSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getMessages(), _messages_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (RestGetMessagesReply.class != other.getClass()) return false;
		final RestGetMessagesReply o = (RestGetMessagesReply)other;
		return true
		  && hasMessages() == o.hasMessages()
		  && EqualityTester.areEqual(getMessages(), o.getMessages(), _messages_METADATA.typ());
	}

	@Override
	public RestGetMessagesReply deepCopy() {
		final RestGetMessagesReply out = new RestGetMessagesReply(
			getMessagesCopy());
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
				visitor.visit(getMessages(), _messages_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isMessagesSet(FieldSetDepth.SHALLOW))
					visitor.visit(getMessages(), _messages_METADATA);
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
			case (_messages_ID):
				setMessages((java.util.List<Message>)reader.readListField(_messages_METADATA, context));
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

	public boolean _isMessagesSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_messages != null;
		} else {
			return m_messages != null && Validator.validateFieldDeep(getMessages(), _messages_METADATA.typ());
		}
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_messages_ID):
				return _isMessagesSet(depth);
			default:
				return false;
		}
	}

	public RestGetMessagesReply _setMessagesSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_messages = m_messages != null ? m_messages : new java.util.ArrayList<Message>(16);
		else
			m_messages = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getMessages(), _messages_METADATA.typ());
		return this;
	}

	public RestGetMessagesReply _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setMessagesSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isMessagesSet(FieldSetDepth.SHALLOW) || _isMessagesSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isMessagesSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_messages_ID):
				return _messages_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("messages"):
				return _messages_METADATA;
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
		  

	public static final long _TYPE_ID = 2205916529773378471L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.Message._TYPE_ID, se.gigurra.aichallenge.RestMessage._TYPE_ID, se.gigurra.aichallenge.RestGetMessagesReply._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -1478;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT, se.gigurra.aichallenge.RestMessage._TYPE_ID_16BIT, se.gigurra.aichallenge.RestGetMessagesReply._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "+jo";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.RestMessage._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.RestGetMessagesReply._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.RestMessage._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.RestGetMessagesReply._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.RestGetMessagesReply";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.Message._TYPE_NAME, se.gigurra.aichallenge.RestMessage._TYPE_NAME, se.gigurra.aichallenge.RestGetMessagesReply._TYPE_NAME };

	public static final Field _messages_METADATA = new Field("se.gigurra.aichallenge.RestGetMessagesReply", "messages", new se.culvertsoft.mgen.api.model.ListType(new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.Message", 1369439193061359418L)), null, (short)-11327);

	public static final short _messages_ID = (short)-11327;

	public static final Field[] _FIELDS = { _messages_METADATA };

}
