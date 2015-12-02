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

public class MoveMadeNotification extends GomokuMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private String m_playerName;
	private Vec2 m_position;

	public MoveMadeNotification() {
		super();
		m_playerName = null;
		m_position = null;
	}

	public MoveMadeNotification(final String playerName,
				final Vec2 position) {
		m_playerName = playerName;
		m_position = position;
	}

	public String getPlayerName() {
		return m_playerName;
	}

	public Vec2 getPosition() {
		return m_position;
	}

	public boolean hasPlayerName() {
		return _isPlayerNameSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasPosition() {
		return _isPositionSet(FieldSetDepth.SHALLOW);
	}

	public MoveMadeNotification unsetPlayerName() {
		_setPlayerNameSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public MoveMadeNotification unsetPosition() {
		_setPositionSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public String getPlayerNameCopy() {
		return m_playerName;
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

	public MoveMadeNotification setPlayerName(final String playerName) {
		m_playerName = playerName;
		return this;
	}

	public MoveMadeNotification setPosition(final Vec2 position) {
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
		int result = 1927104082;
		result = _isPlayerNameSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPlayerName(), _playerName_METADATA.typ())) : result;
		result = _isPositionSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPosition(), _position_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (MoveMadeNotification.class != other.getClass()) return false;
		final MoveMadeNotification o = (MoveMadeNotification)other;
		return true
		  && hasPlayerName() == o.hasPlayerName()
		  && hasPosition() == o.hasPosition()
		  && EqualityTester.areEqual(getPlayerName(), o.getPlayerName(), _playerName_METADATA.typ())
		  && EqualityTester.areEqual(getPosition(), o.getPosition(), _position_METADATA.typ());
	}

	@Override
	public MoveMadeNotification deepCopy() {
		final MoveMadeNotification out = new MoveMadeNotification(
			getPlayerName(),
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
				visitor.beginVisit(this, 2);
				visitor.visit(getPlayerName(), _playerName_METADATA);
				visitor.visit(getPosition(), _position_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isPlayerNameSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPlayerName(), _playerName_METADATA);
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
			case (_playerName_ID):
				setPlayerName((String)reader.readStringField(_playerName_METADATA, context));
				return true;
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

	public boolean _isPlayerNameSet(final FieldSetDepth fieldSetDepth) {
		return m_playerName != null;
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
			case (_playerName_ID):
				return _isPlayerNameSet(depth);
			case (_position_ID):
				return _isPositionSet(depth);
			default:
				return false;
		}
	}

	public MoveMadeNotification _setPlayerNameSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_playerName = m_playerName != null ? m_playerName : "";
		else
			m_playerName = null;
		return this;
	}

	public MoveMadeNotification _setPositionSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_position = m_position != null ? m_position : new Vec2();
		else
			m_position = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getPosition(), _position_METADATA.typ());
		return this;
	}

	public MoveMadeNotification _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setPlayerNameSet(state, depth);
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
		out += _isPlayerNameSet(depth) ? 1 : 0;
		out += _isPositionSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_playerName_ID):
				return _playerName_METADATA;
			case (_position_ID):
				return _position_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("playerName"):
				return _playerName_METADATA;
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
		  

	public static final long _TYPE_ID = 6430104820858040416L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.Message._TYPE_ID, se.gigurra.aichallenge.GameMessage._TYPE_ID, se.gigurra.aichallenge.games.gomoku.GomokuMessage._TYPE_ID, se.gigurra.aichallenge.games.gomoku.MoveMadeNotification._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 9854;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT, se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT, se.gigurra.aichallenge.games.gomoku.GomokuMessage._TYPE_ID_16BIT, se.gigurra.aichallenge.games.gomoku.MoveMadeNotification._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "Jn4";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.games.gomoku.GomokuMessage._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.games.gomoku.MoveMadeNotification._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.games.gomoku.GomokuMessage._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.games.gomoku.MoveMadeNotification._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.games.gomoku.MoveMadeNotification";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.Message._TYPE_NAME, se.gigurra.aichallenge.GameMessage._TYPE_NAME, se.gigurra.aichallenge.games.gomoku.GomokuMessage._TYPE_NAME, se.gigurra.aichallenge.games.gomoku.MoveMadeNotification._TYPE_NAME };

	public static final Field _playerName_METADATA = new Field("se.gigurra.aichallenge.games.gomoku.MoveMadeNotification", "playerName", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)29375);
	public static final Field _position_METADATA = new Field("se.gigurra.aichallenge.games.gomoku.MoveMadeNotification", "position", new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.gomoku.Vec2", 988960440607832827L), null, (short)-26337);

	public static final short _playerName_ID = (short)29375;
	public static final short _position_ID = (short)-26337;

	public static final Field[] _FIELDS = { _playerName_METADATA, _position_METADATA };

}
