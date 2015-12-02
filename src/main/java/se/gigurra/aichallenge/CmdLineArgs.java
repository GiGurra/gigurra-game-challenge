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
/* custom_imports_begin *//* custom_imports_end */

public class CmdLineArgs extends se.culvertsoft.mgen.javapack.classes.MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private int m_zmqPort;
	private int m_restPort;
	private boolean _m_zmqPort_isSet;
	private boolean _m_restPort_isSet;

	public CmdLineArgs() {
		super();
		m_zmqPort = 12345;
		m_restPort = 8080;
		_m_zmqPort_isSet = true;
		_m_restPort_isSet = true;
	}

	public CmdLineArgs(final int zmqPort,
				final int restPort) {
		m_zmqPort = zmqPort;
		m_restPort = restPort;
		_m_zmqPort_isSet = true;
		_m_restPort_isSet = true;
	}

	public int getZmqPort() {
		return m_zmqPort;
	}

	public int getRestPort() {
		return m_restPort;
	}

	public boolean hasZmqPort() {
		return _isZmqPortSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasRestPort() {
		return _isRestPortSet(FieldSetDepth.SHALLOW);
	}

	public CmdLineArgs unsetZmqPort() {
		_setZmqPortSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public CmdLineArgs unsetRestPort() {
		_setRestPortSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public int getZmqPortCopy() {
		return m_zmqPort;
	}

	public int getRestPortCopy() {
		return m_restPort;
	}

	public CmdLineArgs setZmqPort(final int zmqPort) {
		m_zmqPort = zmqPort;
		_m_zmqPort_isSet = true;
		return this;
	}

	public CmdLineArgs setRestPort(final int restPort) {
		m_restPort = restPort;
		_m_restPort_isSet = true;
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
		int result = -147965377;
		result = _isZmqPortSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getZmqPort(), _zmqPort_METADATA.typ())) : result;
		result = _isRestPortSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getRestPort(), _restPort_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (CmdLineArgs.class != other.getClass()) return false;
		final CmdLineArgs o = (CmdLineArgs)other;
		return true
		  && hasZmqPort() == o.hasZmqPort()
		  && hasRestPort() == o.hasRestPort()
		  && getZmqPort() == o.getZmqPort()
		  && getRestPort() == o.getRestPort();
	}

	@Override
	public CmdLineArgs deepCopy() {
		final CmdLineArgs out = new CmdLineArgs(
			getZmqPort(),
			getRestPort());
		if (!hasZmqPort()) out.unsetZmqPort();
		if (!hasRestPort()) out.unsetRestPort();
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
				visitor.visit(getZmqPort(), _zmqPort_METADATA);
				visitor.visit(getRestPort(), _restPort_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isZmqPortSet(FieldSetDepth.SHALLOW))
					visitor.visit(getZmqPort(), _zmqPort_METADATA);
				if (_isRestPortSet(FieldSetDepth.SHALLOW))
					visitor.visit(getRestPort(), _restPort_METADATA);
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
			case (_zmqPort_ID):
				setZmqPort((int)reader.readInt32Field(_zmqPort_METADATA, context));
				return true;
			case (_restPort_ID):
				setRestPort((int)reader.readInt32Field(_restPort_METADATA, context));
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

	public boolean _isZmqPortSet(final FieldSetDepth fieldSetDepth) {
		return _m_zmqPort_isSet;
	}

	public boolean _isRestPortSet(final FieldSetDepth fieldSetDepth) {
		return _m_restPort_isSet;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_zmqPort_ID):
				return _isZmqPortSet(depth);
			case (_restPort_ID):
				return _isRestPortSet(depth);
			default:
				return false;
		}
	}

	public CmdLineArgs _setZmqPortSet(final boolean state, final FieldSetDepth depth) {
		if (!state)
			m_zmqPort = 12345;
		_m_zmqPort_isSet = state;
		return this;
	}

	public CmdLineArgs _setRestPortSet(final boolean state, final FieldSetDepth depth) {
		if (!state)
			m_restPort = 8080;
		_m_restPort_isSet = state;
		return this;
	}

	public CmdLineArgs _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setZmqPortSet(state, depth);
		_setRestPortSet(state, depth);
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
		out += _isZmqPortSet(depth) ? 1 : 0;
		out += _isRestPortSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_zmqPort_ID):
				return _zmqPort_METADATA;
			case (_restPort_ID):
				return _restPort_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("zmqPort"):
				return _zmqPort_METADATA;
			case ("restPort"):
				return _restPort_METADATA;
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
		  

	public static final long _TYPE_ID = 3480774133642621864L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.CmdLineArgs._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -20208;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.CmdLineArgs._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "sRA";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.CmdLineArgs._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.CmdLineArgs._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.CmdLineArgs";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.CmdLineArgs._TYPE_NAME };

	public static final Field _zmqPort_METADATA = new Field("se.gigurra.aichallenge.CmdLineArgs", "zmqPort", se.culvertsoft.mgen.api.model.Int32Type.INSTANCE, null, (short)-19932);
	public static final Field _restPort_METADATA = new Field("se.gigurra.aichallenge.CmdLineArgs", "restPort", se.culvertsoft.mgen.api.model.Int32Type.INSTANCE, null, (short)18844);

	public static final short _zmqPort_ID = (short)-19932;
	public static final short _restPort_ID = (short)18844;

	public static final Field[] _FIELDS = { _zmqPort_METADATA, _restPort_METADATA };

}
