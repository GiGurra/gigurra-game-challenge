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

public class GameChallengeFound extends Message /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private GameSelection m_game;
	private String m_opponent;

	public GameChallengeFound() {
		super();
		m_game = null;
		m_opponent = null;
	}

	public GameChallengeFound(final GameSelection game,
				final String opponent) {
		m_game = game;
		m_opponent = opponent;
	}

	public GameSelection getGame() {
		return m_game;
	}

	public String getOpponent() {
		return m_opponent;
	}

	public boolean hasGame() {
		return _isGameSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasOpponent() {
		return _isOpponentSet(FieldSetDepth.SHALLOW);
	}

	public GameChallengeFound unsetGame() {
		_setGameSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GameChallengeFound unsetOpponent() {
		_setOpponentSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GameSelection getGameCopy() {
		return m_game;
	}

	public String getOpponentCopy() {
		return m_opponent;
	}

	public GameChallengeFound setGame(final GameSelection game) {
		m_game = game;
		return this;
	}

	public GameChallengeFound setOpponent(final String opponent) {
		m_opponent = opponent;
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
		int result = -1584542979;
		result = _isGameSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getGame(), _game_METADATA.typ())) : result;
		result = _isOpponentSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getOpponent(), _opponent_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (GameChallengeFound.class != other.getClass()) return false;
		final GameChallengeFound o = (GameChallengeFound)other;
		return true
		  && hasGame() == o.hasGame()
		  && hasOpponent() == o.hasOpponent()
		  && getGame() == o.getGame()
		  && EqualityTester.areEqual(getOpponent(), o.getOpponent(), _opponent_METADATA.typ());
	}

	@Override
	public GameChallengeFound deepCopy() {
		final GameChallengeFound out = new GameChallengeFound(
			getGame(),
			getOpponent());
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
				visitor.visit(getGame(), _game_METADATA);
				visitor.visit(getOpponent(), _opponent_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isGameSet(FieldSetDepth.SHALLOW))
					visitor.visit(getGame(), _game_METADATA);
				if (_isOpponentSet(FieldSetDepth.SHALLOW))
					visitor.visit(getOpponent(), _opponent_METADATA);
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
			case (_game_ID):
				setGame((GameSelection)reader.readEnumField(_game_METADATA, context));
				return true;
			case (_opponent_ID):
				setOpponent((String)reader.readStringField(_opponent_METADATA, context));
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

	public boolean _isGameSet(final FieldSetDepth fieldSetDepth) {
		return m_game != null;
	}

	public boolean _isOpponentSet(final FieldSetDepth fieldSetDepth) {
		return m_opponent != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_game_ID):
				return _isGameSet(depth);
			case (_opponent_ID):
				return _isOpponentSet(depth);
			default:
				return false;
		}
	}

	public GameChallengeFound _setGameSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_game = m_game != null ? m_game : GameSelection.UNKNOWN;
		else
			m_game = null;
		return this;
	}

	public GameChallengeFound _setOpponentSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_opponent = m_opponent != null ? m_opponent : "";
		else
			m_opponent = null;
		return this;
	}

	public GameChallengeFound _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setGameSet(state, depth);
		_setOpponentSet(state, depth);
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
		out += _isGameSet(depth) ? 1 : 0;
		out += _isOpponentSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_game_ID):
				return _game_METADATA;
			case (_opponent_ID):
				return _opponent_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("game"):
				return _game_METADATA;
			case ("opponent"):
				return _opponent_METADATA;
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
		  

	public static final long _TYPE_ID = 4960850565215976785L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.Message._TYPE_ID, se.gigurra.aichallenge.GameChallengeFound._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -26051;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT, se.gigurra.aichallenge.GameChallengeFound._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "mj0";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.GameChallengeFound._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.GameChallengeFound._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.GameChallengeFound";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.Message._TYPE_NAME, se.gigurra.aichallenge.GameChallengeFound._TYPE_NAME };

	public static final Field _game_METADATA = new Field("se.gigurra.aichallenge.GameChallengeFound", "game", se.gigurra.aichallenge.GameSelection._TYPE, null, (short)24849);
	public static final Field _opponent_METADATA = new Field("se.gigurra.aichallenge.GameChallengeFound", "opponent", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)17849);

	public static final short _game_ID = (short)24849;
	public static final short _opponent_ID = (short)17849;

	public static final Field[] _FIELDS = { _game_METADATA, _opponent_METADATA };

}
