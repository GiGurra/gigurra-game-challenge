/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package se.gigurra.aichallenge.games.go;

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

public class GameOver extends GoMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private String m_reason;
	private Player m_winner;
	private Player m_loser;
	private GameState m_endState;

	public GameOver() {
		super();
		m_reason = null;
		m_winner = null;
		m_loser = null;
		m_endState = null;
	}

	public GameOver(final String reason,
				final Player winner,
				final Player loser,
				final GameState endState) {
		m_reason = reason;
		m_winner = winner;
		m_loser = loser;
		m_endState = endState;
	}

	public String getReason() {
		return m_reason;
	}

	public Player getWinner() {
		return m_winner;
	}

	public Player getLoser() {
		return m_loser;
	}

	public GameState getEndState() {
		return m_endState;
	}

	public boolean hasReason() {
		return _isReasonSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasWinner() {
		return _isWinnerSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasLoser() {
		return _isLoserSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasEndState() {
		return _isEndStateSet(FieldSetDepth.SHALLOW);
	}

	public GameOver unsetReason() {
		_setReasonSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GameOver unsetWinner() {
		_setWinnerSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GameOver unsetLoser() {
		_setLoserSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GameOver unsetEndState() {
		_setEndStateSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public String getReasonCopy() {
		return m_reason;
	}

	public Player getWinnerCopy() {
		Player out = null;
		final Player var0 = getWinner();
		if (var0 != null) {
			out = var0.deepCopy();
		} else {
			out = null;
		}
		return out;
	}

	public Player getLoserCopy() {
		Player out = null;
		final Player var0 = getLoser();
		if (var0 != null) {
			out = var0.deepCopy();
		} else {
			out = null;
		}
		return out;
	}

	public GameState getEndStateCopy() {
		GameState out = null;
		final GameState var0 = getEndState();
		if (var0 != null) {
			out = var0.deepCopy();
		} else {
			out = null;
		}
		return out;
	}

	public GameOver setReason(final String reason) {
		m_reason = reason;
		return this;
	}

	public GameOver setWinner(final Player winner) {
		m_winner = winner;
		return this;
	}

	public GameOver setLoser(final Player loser) {
		m_loser = loser;
		return this;
	}

	public GameOver setEndState(final GameState endState) {
		m_endState = endState;
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
		int result = -1542316109;
		result = _isReasonSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getReason(), _reason_METADATA.typ())) : result;
		result = _isWinnerSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getWinner(), _winner_METADATA.typ())) : result;
		result = _isLoserSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getLoser(), _loser_METADATA.typ())) : result;
		result = _isEndStateSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getEndState(), _endState_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (GameOver.class != other.getClass()) return false;
		final GameOver o = (GameOver)other;
		return true
		  && hasReason() == o.hasReason()
		  && hasWinner() == o.hasWinner()
		  && hasLoser() == o.hasLoser()
		  && hasEndState() == o.hasEndState()
		  && EqualityTester.areEqual(getReason(), o.getReason(), _reason_METADATA.typ())
		  && EqualityTester.areEqual(getWinner(), o.getWinner(), _winner_METADATA.typ())
		  && EqualityTester.areEqual(getLoser(), o.getLoser(), _loser_METADATA.typ())
		  && EqualityTester.areEqual(getEndState(), o.getEndState(), _endState_METADATA.typ());
	}

	@Override
	public GameOver deepCopy() {
		final GameOver out = new GameOver(
			getReason(),
			getWinnerCopy(),
			getLoserCopy(),
			getEndStateCopy());
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
				visitor.beginVisit(this, 4);
				visitor.visit(getReason(), _reason_METADATA);
				visitor.visit(getWinner(), _winner_METADATA);
				visitor.visit(getLoser(), _loser_METADATA);
				visitor.visit(getEndState(), _endState_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isReasonSet(FieldSetDepth.SHALLOW))
					visitor.visit(getReason(), _reason_METADATA);
				if (_isWinnerSet(FieldSetDepth.SHALLOW))
					visitor.visit(getWinner(), _winner_METADATA);
				if (_isLoserSet(FieldSetDepth.SHALLOW))
					visitor.visit(getLoser(), _loser_METADATA);
				if (_isEndStateSet(FieldSetDepth.SHALLOW))
					visitor.visit(getEndState(), _endState_METADATA);
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
			case (_reason_ID):
				setReason((String)reader.readStringField(_reason_METADATA, context));
				return true;
			case (_winner_ID):
				setWinner((Player)reader.readMgenObjectField(_winner_METADATA, context));
				return true;
			case (_loser_ID):
				setLoser((Player)reader.readMgenObjectField(_loser_METADATA, context));
				return true;
			case (_endState_ID):
				setEndState((GameState)reader.readMgenObjectField(_endState_METADATA, context));
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

	public boolean _isReasonSet(final FieldSetDepth fieldSetDepth) {
		return m_reason != null;
	}

	public boolean _isWinnerSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_winner != null;
		} else {
			return m_winner != null && Validator.validateFieldDeep(getWinner(), _winner_METADATA.typ());
		}
	}

	public boolean _isLoserSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_loser != null;
		} else {
			return m_loser != null && Validator.validateFieldDeep(getLoser(), _loser_METADATA.typ());
		}
	}

	public boolean _isEndStateSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_endState != null;
		} else {
			return m_endState != null && Validator.validateFieldDeep(getEndState(), _endState_METADATA.typ());
		}
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_reason_ID):
				return _isReasonSet(depth);
			case (_winner_ID):
				return _isWinnerSet(depth);
			case (_loser_ID):
				return _isLoserSet(depth);
			case (_endState_ID):
				return _isEndStateSet(depth);
			default:
				return false;
		}
	}

	public GameOver _setReasonSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_reason = m_reason != null ? m_reason : "";
		else
			m_reason = null;
		return this;
	}

	public GameOver _setWinnerSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_winner = m_winner != null ? m_winner : new Player();
		else
			m_winner = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getWinner(), _winner_METADATA.typ());
		return this;
	}

	public GameOver _setLoserSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_loser = m_loser != null ? m_loser : new Player();
		else
			m_loser = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getLoser(), _loser_METADATA.typ());
		return this;
	}

	public GameOver _setEndStateSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_endState = m_endState != null ? m_endState : new GameState();
		else
			m_endState = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getEndState(), _endState_METADATA.typ());
		return this;
	}

	public GameOver _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setReasonSet(state, depth);
		_setWinnerSet(state, depth);
		_setLoserSet(state, depth);
		_setEndStateSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isWinnerSet(FieldSetDepth.SHALLOW) || _isWinnerSet(FieldSetDepth.DEEP))
				&& (!_isLoserSet(FieldSetDepth.SHALLOW) || _isLoserSet(FieldSetDepth.DEEP))
				&& (!_isEndStateSet(FieldSetDepth.SHALLOW) || _isEndStateSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isReasonSet(depth) ? 1 : 0;
		out += _isWinnerSet(depth) ? 1 : 0;
		out += _isLoserSet(depth) ? 1 : 0;
		out += _isEndStateSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_reason_ID):
				return _reason_METADATA;
			case (_winner_ID):
				return _winner_METADATA;
			case (_loser_ID):
				return _loser_METADATA;
			case (_endState_ID):
				return _endState_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("reason"):
				return _reason_METADATA;
			case ("winner"):
				return _winner_METADATA;
			case ("loser"):
				return _loser_METADATA;
			case ("endState"):
				return _endState_METADATA;
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
		  

	public static final long _TYPE_ID = 2162097505141779409L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.Message._TYPE_ID, se.gigurra.aichallenge.GameMessage._TYPE_ID, se.gigurra.aichallenge.games.go.GoMessage._TYPE_ID, se.gigurra.aichallenge.games.go.GameOver._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -494;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT, se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT, se.gigurra.aichallenge.games.go.GoMessage._TYPE_ID_16BIT, se.gigurra.aichallenge.games.go.GameOver._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "/hI";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.games.go.GoMessage._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.games.go.GameOver._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.games.go.GoMessage._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.games.go.GameOver._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.games.go.GameOver";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.Message._TYPE_NAME, se.gigurra.aichallenge.GameMessage._TYPE_NAME, se.gigurra.aichallenge.games.go.GoMessage._TYPE_NAME, se.gigurra.aichallenge.games.go.GameOver._TYPE_NAME };

	public static final Field _reason_METADATA = new Field("se.gigurra.aichallenge.games.go.GameOver", "reason", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)-15867);
	public static final Field _winner_METADATA = new Field("se.gigurra.aichallenge.games.go.GameOver", "winner", new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.go.Player", 6275090646202330472L), null, (short)-7291);
	public static final Field _loser_METADATA = new Field("se.gigurra.aichallenge.games.go.GameOver", "loser", new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.go.Player", 6275090646202330472L), null, (short)9621);
	public static final Field _endState_METADATA = new Field("se.gigurra.aichallenge.games.go.GameOver", "endState", new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.go.GameState", 4199952919060231829L), null, (short)2994);

	public static final short _reason_ID = (short)-15867;
	public static final short _winner_ID = (short)-7291;
	public static final short _loser_ID = (short)9621;
	public static final short _endState_ID = (short)2994;

	public static final Field[] _FIELDS = { _reason_METADATA, _winner_METADATA, _loser_METADATA, _endState_METADATA };

}
