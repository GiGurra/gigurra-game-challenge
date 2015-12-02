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

public class GameState extends se.culvertsoft.mgen.javapack.classes.MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private Player m_blackPlayer;
	private Player m_whitePlayer;
	private Board m_board;
	private GamePhase m_phase;

	public GameState() {
		super();
		m_blackPlayer = null;
		m_whitePlayer = null;
		m_board = new Board();
		m_phase = GamePhase.JOINING;
	}

	public GameState(final Player blackPlayer,
				final Player whitePlayer,
				final Board board,
				final GamePhase phase) {
		m_blackPlayer = blackPlayer;
		m_whitePlayer = whitePlayer;
		m_board = board;
		m_phase = phase;
	}

	public Player getBlackPlayer() {
		return m_blackPlayer;
	}

	public Player getWhitePlayer() {
		return m_whitePlayer;
	}

	public Board getBoard() {
		return m_board;
	}

	public GamePhase getPhase() {
		return m_phase;
	}

	public boolean hasBlackPlayer() {
		return _isBlackPlayerSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasWhitePlayer() {
		return _isWhitePlayerSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasBoard() {
		return _isBoardSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasPhase() {
		return _isPhaseSet(FieldSetDepth.SHALLOW);
	}

	public GameState unsetBlackPlayer() {
		_setBlackPlayerSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GameState unsetWhitePlayer() {
		_setWhitePlayerSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GameState unsetBoard() {
		_setBoardSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GameState unsetPhase() {
		_setPhaseSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Player getBlackPlayerCopy() {
		Player out = null;
		final Player var0 = getBlackPlayer();
		if (var0 != null) {
			out = var0.deepCopy();
		} else {
			out = null;
		}
		return out;
	}

	public Player getWhitePlayerCopy() {
		Player out = null;
		final Player var0 = getWhitePlayer();
		if (var0 != null) {
			out = var0.deepCopy();
		} else {
			out = null;
		}
		return out;
	}

	public Board getBoardCopy() {
		Board out = null;
		final Board var0 = getBoard();
		if (var0 != null) {
			out = var0.deepCopy();
		} else {
			out = null;
		}
		return out;
	}

	public GamePhase getPhaseCopy() {
		return m_phase;
	}

	public GameState setBlackPlayer(final Player blackPlayer) {
		m_blackPlayer = blackPlayer;
		return this;
	}

	public GameState setWhitePlayer(final Player whitePlayer) {
		m_whitePlayer = whitePlayer;
		return this;
	}

	public GameState setBoard(final Board board) {
		m_board = board;
		return this;
	}

	public GameState setPhase(final GamePhase phase) {
		m_phase = phase;
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
		int result = -563528302;
		result = _isBlackPlayerSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getBlackPlayer(), _blackPlayer_METADATA.typ())) : result;
		result = _isWhitePlayerSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getWhitePlayer(), _whitePlayer_METADATA.typ())) : result;
		result = _isBoardSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getBoard(), _board_METADATA.typ())) : result;
		result = _isPhaseSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPhase(), _phase_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (GameState.class != other.getClass()) return false;
		final GameState o = (GameState)other;
		return true
		  && hasBlackPlayer() == o.hasBlackPlayer()
		  && hasWhitePlayer() == o.hasWhitePlayer()
		  && hasBoard() == o.hasBoard()
		  && hasPhase() == o.hasPhase()
		  && EqualityTester.areEqual(getBlackPlayer(), o.getBlackPlayer(), _blackPlayer_METADATA.typ())
		  && EqualityTester.areEqual(getWhitePlayer(), o.getWhitePlayer(), _whitePlayer_METADATA.typ())
		  && EqualityTester.areEqual(getBoard(), o.getBoard(), _board_METADATA.typ())
		  && getPhase() == o.getPhase();
	}

	@Override
	public GameState deepCopy() {
		final GameState out = new GameState(
			getBlackPlayerCopy(),
			getWhitePlayerCopy(),
			getBoardCopy(),
			getPhase());
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
				visitor.visit(getBlackPlayer(), _blackPlayer_METADATA);
				visitor.visit(getWhitePlayer(), _whitePlayer_METADATA);
				visitor.visit(getBoard(), _board_METADATA);
				visitor.visit(getPhase(), _phase_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isBlackPlayerSet(FieldSetDepth.SHALLOW))
					visitor.visit(getBlackPlayer(), _blackPlayer_METADATA);
				if (_isWhitePlayerSet(FieldSetDepth.SHALLOW))
					visitor.visit(getWhitePlayer(), _whitePlayer_METADATA);
				if (_isBoardSet(FieldSetDepth.SHALLOW))
					visitor.visit(getBoard(), _board_METADATA);
				if (_isPhaseSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPhase(), _phase_METADATA);
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
			case (_blackPlayer_ID):
				setBlackPlayer((Player)reader.readMgenObjectField(_blackPlayer_METADATA, context));
				return true;
			case (_whitePlayer_ID):
				setWhitePlayer((Player)reader.readMgenObjectField(_whitePlayer_METADATA, context));
				return true;
			case (_board_ID):
				setBoard((Board)reader.readMgenObjectField(_board_METADATA, context));
				return true;
			case (_phase_ID):
				setPhase((GamePhase)reader.readEnumField(_phase_METADATA, context));
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

	public boolean _isBlackPlayerSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_blackPlayer != null;
		} else {
			return m_blackPlayer != null && Validator.validateFieldDeep(getBlackPlayer(), _blackPlayer_METADATA.typ());
		}
	}

	public boolean _isWhitePlayerSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_whitePlayer != null;
		} else {
			return m_whitePlayer != null && Validator.validateFieldDeep(getWhitePlayer(), _whitePlayer_METADATA.typ());
		}
	}

	public boolean _isBoardSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_board != null;
		} else {
			return m_board != null && Validator.validateFieldDeep(getBoard(), _board_METADATA.typ());
		}
	}

	public boolean _isPhaseSet(final FieldSetDepth fieldSetDepth) {
		return m_phase != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_blackPlayer_ID):
				return _isBlackPlayerSet(depth);
			case (_whitePlayer_ID):
				return _isWhitePlayerSet(depth);
			case (_board_ID):
				return _isBoardSet(depth);
			case (_phase_ID):
				return _isPhaseSet(depth);
			default:
				return false;
		}
	}

	public GameState _setBlackPlayerSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_blackPlayer = m_blackPlayer != null ? m_blackPlayer : new Player();
		else
			m_blackPlayer = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getBlackPlayer(), _blackPlayer_METADATA.typ());
		return this;
	}

	public GameState _setWhitePlayerSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_whitePlayer = m_whitePlayer != null ? m_whitePlayer : new Player();
		else
			m_whitePlayer = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getWhitePlayer(), _whitePlayer_METADATA.typ());
		return this;
	}

	public GameState _setBoardSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_board = m_board != null ? m_board : new Board();
		else
			m_board = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getBoard(), _board_METADATA.typ());
		return this;
	}

	public GameState _setPhaseSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_phase = m_phase != null ? m_phase : GamePhase.JOINING;
		else
			m_phase = null;
		return this;
	}

	public GameState _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setBlackPlayerSet(state, depth);
		_setWhitePlayerSet(state, depth);
		_setBoardSet(state, depth);
		_setPhaseSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isBlackPlayerSet(FieldSetDepth.SHALLOW) || _isBlackPlayerSet(FieldSetDepth.DEEP))
				&& (!_isWhitePlayerSet(FieldSetDepth.SHALLOW) || _isWhitePlayerSet(FieldSetDepth.DEEP))
				&& (!_isBoardSet(FieldSetDepth.SHALLOW) || _isBoardSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isBlackPlayerSet(depth) ? 1 : 0;
		out += _isWhitePlayerSet(depth) ? 1 : 0;
		out += _isBoardSet(depth) ? 1 : 0;
		out += _isPhaseSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_blackPlayer_ID):
				return _blackPlayer_METADATA;
			case (_whitePlayer_ID):
				return _whitePlayer_METADATA;
			case (_board_ID):
				return _board_METADATA;
			case (_phase_ID):
				return _phase_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("blackPlayer"):
				return _blackPlayer_METADATA;
			case ("whitePlayer"):
				return _whitePlayer_METADATA;
			case ("board"):
				return _board_METADATA;
			case ("phase"):
				return _phase_METADATA;
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
		  

	public static final long _TYPE_ID = 4199952919060231829L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.games.go.GameState._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 13485;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.games.go.GameState._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "NK0";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.games.go.GameState._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.games.go.GameState._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.games.go.GameState";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.games.go.GameState._TYPE_NAME };

	public static final Field _blackPlayer_METADATA = new Field("se.gigurra.aichallenge.games.go.GameState", "blackPlayer", new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.go.Player", 6275090646202330472L), null, (short)-18158);
	public static final Field _whitePlayer_METADATA = new Field("se.gigurra.aichallenge.games.go.GameState", "whitePlayer", new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.go.Player", 6275090646202330472L), null, (short)10703);
	public static final Field _board_METADATA = new Field("se.gigurra.aichallenge.games.go.GameState", "board", new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.go.Board", 2859743780939014881L), null, (short)12077);
	public static final Field _phase_METADATA = new Field("se.gigurra.aichallenge.games.go.GameState", "phase", se.gigurra.aichallenge.games.go.GamePhase._TYPE, null, (short)7625);

	public static final short _blackPlayer_ID = (short)-18158;
	public static final short _whitePlayer_ID = (short)10703;
	public static final short _board_ID = (short)12077;
	public static final short _phase_ID = (short)7625;

	public static final Field[] _FIELDS = { _blackPlayer_METADATA, _whitePlayer_METADATA, _board_METADATA, _phase_METADATA };

}
