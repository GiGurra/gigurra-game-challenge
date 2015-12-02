/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package se.gigurra.aichallenge.games.gomoku;

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

public class MakeMove extends GomokuMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private Vec2 m_position;

	public MakeMove() {
		super();
		m_position = null;
	}

	public MakeMove(final Vec2 position) {
		m_position = position;
	}

	public Vec2 getPosition() {
		return m_position;
	}

	public boolean hasPosition() {
		return _isPositionSet(FieldSetDepth.SHALLOW);
	}

	public MakeMove unsetPosition() {
		_setPositionSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Vec2 getPositionCopy() {
		Vec2 out = null;
		final Vec2 var0 = getPosition();
		if (var0 != null) {
			out = var0.deepCopy();
		} else {
			out = null;
		}
		return out;
	}

	public MakeMove setPosition(final Vec2 position) {
		m_position = position;
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
		int result = 1800504864;
		result = _isPositionSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPosition(), _position_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (MakeMove.class != other.getClass()) return false;
		final MakeMove o = (MakeMove)other;
		return true
		  && hasPosition() == o.hasPosition()
		  && EqualityTester.areEqual(getPosition(), o.getPosition(), _position_METADATA.typ());
	}

	@Override
	public MakeMove deepCopy() {
		final MakeMove out = new MakeMove(
			getPositionCopy());
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
				visitor.visit(getPosition(), _position_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isPositionSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPosition(), _position_METADATA);
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
			case (_position_ID):
				setPosition((Vec2)reader.readMgenObjectField(_position_METADATA, context));
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

	public boolean _isPositionSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_position != null;
		} else {
			return m_position != null && Validator.validateFieldDeep(getPosition(), _position_METADATA.typ());
		}
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_position_ID):
				return _isPositionSet(depth);
			default:
				return false;
		}
	}

	public MakeMove _setPositionSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_position = m_position != null ? m_position : new Vec2();
		else
			m_position = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getPosition(), _position_METADATA.typ());
		return this;
	}

	public MakeMove _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setPositionSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isPositionSet(FieldSetDepth.SHALLOW) || _isPositionSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isPositionSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_position_ID):
				return _position_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("position"):
				return _position_METADATA;
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
		  

	public static final long _TYPE_ID = 7681838796452761563L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.Message._TYPE_ID, se.gigurra.aichallenge.GameMessage._TYPE_ID, se.gigurra.aichallenge.games.gomoku.GomokuMessage._TYPE_ID, se.gigurra.aichallenge.games.gomoku.MakeMove._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 19427;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT, se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT, se.gigurra.aichallenge.games.gomoku.GomokuMessage._TYPE_ID_16BIT, se.gigurra.aichallenge.games.gomoku.MakeMove._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "S+M";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.games.gomoku.GomokuMessage._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.games.gomoku.MakeMove._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.games.gomoku.GomokuMessage._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.games.gomoku.MakeMove._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.games.gomoku.MakeMove";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.Message._TYPE_NAME, se.gigurra.aichallenge.GameMessage._TYPE_NAME, se.gigurra.aichallenge.games.gomoku.GomokuMessage._TYPE_NAME, se.gigurra.aichallenge.games.gomoku.MakeMove._TYPE_NAME };

	public static final Field _position_METADATA = new Field("se.gigurra.aichallenge.games.gomoku.MakeMove", "position", new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.gomoku.Vec2", 988960440607832827L), null, (short)-26337);

	public static final short _position_ID = (short)-26337;

	public static final Field[] _FIELDS = { _position_METADATA };

}
