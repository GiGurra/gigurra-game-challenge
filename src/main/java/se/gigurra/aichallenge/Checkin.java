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

public class Checkin extends Message /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private String m_username;
	private String m_password;

	public Checkin() {
		super();
		m_username = null;
		m_password = null;
	}

	public Checkin(final String username,
				final String password) {
		m_username = username;
		m_password = password;
	}

	public String getUsername() {
		return m_username;
	}

	public String getPassword() {
		return m_password;
	}

	public boolean hasUsername() {
		return _isUsernameSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasPassword() {
		return _isPasswordSet(FieldSetDepth.SHALLOW);
	}

	public Checkin unsetUsername() {
		_setUsernameSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Checkin unsetPassword() {
		_setPasswordSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public String getUsernameCopy() {
		return m_username;
	}

	public String getPasswordCopy() {
		return m_password;
	}

	public Checkin setUsername(final String username) {
		m_username = username;
		return this;
	}

	public Checkin setPassword(final String password) {
		m_password = password;
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
		int result = -1050657247;
		result = _isUsernameSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getUsername(), _username_METADATA.typ())) : result;
		result = _isPasswordSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPassword(), _password_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (Checkin.class != other.getClass()) return false;
		final Checkin o = (Checkin)other;
		return true
		  && hasUsername() == o.hasUsername()
		  && hasPassword() == o.hasPassword()
		  && EqualityTester.areEqual(getUsername(), o.getUsername(), _username_METADATA.typ())
		  && EqualityTester.areEqual(getPassword(), o.getPassword(), _password_METADATA.typ());
	}

	@Override
	public Checkin deepCopy() {
		final Checkin out = new Checkin(
			getUsername(),
			getPassword());
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
				visitor.beginVisit(this, 2);
				visitor.visit(getUsername(), _username_METADATA);
				visitor.visit(getPassword(), _password_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isUsernameSet(FieldSetDepth.SHALLOW))
					visitor.visit(getUsername(), _username_METADATA);
				if (_isPasswordSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPassword(), _password_METADATA);
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
			case (_username_ID):
				setUsername((String)reader.readStringField(_username_METADATA, context));
				return true;
			case (_password_ID):
				setPassword((String)reader.readStringField(_password_METADATA, context));
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

	public boolean _isUsernameSet(final FieldSetDepth fieldSetDepth) {
		return m_username != null;
	}

	public boolean _isPasswordSet(final FieldSetDepth fieldSetDepth) {
		return m_password != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_username_ID):
				return _isUsernameSet(depth);
			case (_password_ID):
				return _isPasswordSet(depth);
			default:
				return false;
		}
	}

	public Checkin _setUsernameSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_username = m_username != null ? m_username : "";
		else
			m_username = null;
		return this;
	}

	public Checkin _setPasswordSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_password = m_password != null ? m_password : "";
		else
			m_password = null;
		return this;
	}

	public Checkin _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setUsernameSet(state, depth);
		_setPasswordSet(state, depth);
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
		out += _isUsernameSet(depth) ? 1 : 0;
		out += _isPasswordSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_username_ID):
				return _username_METADATA;
			case (_password_ID):
				return _password_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("username"):
				return _username_METADATA;
			case ("password"):
				return _password_METADATA;
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
		  

	public static final long _TYPE_ID = 8235336565925679407L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.Message._TYPE_ID, se.gigurra.aichallenge.Checkin._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 15956;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT, se.gigurra.aichallenge.Checkin._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "PlQ";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.Checkin._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.Checkin._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.Checkin";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.Message._TYPE_NAME, se.gigurra.aichallenge.Checkin._TYPE_NAME };

	public static final Field _username_METADATA = new Field("se.gigurra.aichallenge.Checkin", "username", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)-14635);
	public static final Field _password_METADATA = new Field("se.gigurra.aichallenge.Checkin", "password", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)5242);

	public static final short _username_ID = (short)-14635;
	public static final short _password_ID = (short)5242;

	public static final Field[] _FIELDS = { _username_METADATA, _password_METADATA };

}
