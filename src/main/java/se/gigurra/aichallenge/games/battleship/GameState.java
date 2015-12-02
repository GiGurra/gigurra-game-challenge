/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/
package se.gigurra.aichallenge.games.battleship;

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

	private Player m_redPlayer;
	private Player m_bluePlayer;
	private GamePhase m_phase;

	public GameState() {
		super();
		m_redPlayer = null;
		m_bluePlayer = null;
		m_phase = GamePhase.JOINING;
	}

	public GameState(final Player redPlayer,
				final Player bluePlayer,
				final GamePhase phase) {
		m_redPlayer = redPlayer;
		m_bluePlayer = bluePlayer;
		m_phase = phase;
	}

	public Player getRedPlayer() {
		return m_redPlayer;
	}

	public Player getBluePlayer() {
		return m_bluePlayer;
	}

	public GamePhase getPhase() {
		return m_phase;
	}

	public boolean hasRedPlayer() {
		return _isRedPlayerSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasBluePlayer() {
		return _isBluePlayerSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasPhase() {
		return _isPhaseSet(FieldSetDepth.SHALLOW);
	}

	public GameState unsetRedPlayer() {
		_setRedPlayerSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GameState unsetBluePlayer() {
		_setBluePlayerSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public GameState unsetPhase() {
		_setPhaseSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Player getRedPlayerCopy() {
		Player out = null;
		final Player var0 = getRedPlayer();
		if (var0 != null) {
			out = var0.deepCopy();
		} else {
			out = null;
		}
		return out;
	}

	public Player getBluePlayerCopy() {
		Player out = null;
		final Player var0 = getBluePlayer();
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

	public GameState setRedPlayer(final Player redPlayer) {
		m_redPlayer = redPlayer;
		return this;
	}

	public GameState setBluePlayer(final Player bluePlayer) {
		m_bluePlayer = bluePlayer;
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
		int result = 77043614;
		result = _isRedPlayerSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getRedPlayer(), _redPlayer_METADATA.typ())) : result;
		result = _isBluePlayerSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getBluePlayer(), _bluePlayer_METADATA.typ())) : result;
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
		  && hasRedPlayer() == o.hasRedPlayer()
		  && hasBluePlayer() == o.hasBluePlayer()
		  && hasPhase() == o.hasPhase()
		  && EqualityTester.areEqual(getRedPlayer(), o.getRedPlayer(), _redPlayer_METADATA.typ())
		  && EqualityTester.areEqual(getBluePlayer(), o.getBluePlayer(), _bluePlayer_METADATA.typ())
		  && getPhase() == o.getPhase();
	}

	@Override
	public GameState deepCopy() {
		final GameState out = new GameState(
			getRedPlayerCopy(),
			getBluePlayerCopy(),
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
				visitor.beginVisit(this, 3);
				visitor.visit(getRedPlayer(), _redPlayer_METADATA);
				visitor.visit(getBluePlayer(), _bluePlayer_METADATA);
				visitor.visit(getPhase(), _phase_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isRedPlayerSet(FieldSetDepth.SHALLOW))
					visitor.visit(getRedPlayer(), _redPlayer_METADATA);
				if (_isBluePlayerSet(FieldSetDepth.SHALLOW))
					visitor.visit(getBluePlayer(), _bluePlayer_METADATA);
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
			case (_redPlayer_ID):
				setRedPlayer((Player)reader.readMgenObjectField(_redPlayer_METADATA, context));
				return true;
			case (_bluePlayer_ID):
				setBluePlayer((Player)reader.readMgenObjectField(_bluePlayer_METADATA, context));
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

	public boolean _isRedPlayerSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_redPlayer != null;
		} else {
			return m_redPlayer != null && Validator.validateFieldDeep(getRedPlayer(), _redPlayer_METADATA.typ());
		}
	}

	public boolean _isBluePlayerSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_bluePlayer != null;
		} else {
			return m_bluePlayer != null && Validator.validateFieldDeep(getBluePlayer(), _bluePlayer_METADATA.typ());
		}
	}

	public boolean _isPhaseSet(final FieldSetDepth fieldSetDepth) {
		return m_phase != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_redPlayer_ID):
				return _isRedPlayerSet(depth);
			case (_bluePlayer_ID):
				return _isBluePlayerSet(depth);
			case (_phase_ID):
				return _isPhaseSet(depth);
			default:
				return false;
		}
	}

	public GameState _setRedPlayerSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_redPlayer = m_redPlayer != null ? m_redPlayer : new Player();
		else
			m_redPlayer = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getRedPlayer(), _redPlayer_METADATA.typ());
		return this;
	}

	public GameState _setBluePlayerSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_bluePlayer = m_bluePlayer != null ? m_bluePlayer : new Player();
		else
			m_bluePlayer = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getBluePlayer(), _bluePlayer_METADATA.typ());
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
		_setRedPlayerSet(state, depth);
		_setBluePlayerSet(state, depth);
		_setPhaseSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isRedPlayerSet(FieldSetDepth.SHALLOW) || _isRedPlayerSet(FieldSetDepth.DEEP))
				&& (!_isBluePlayerSet(FieldSetDepth.SHALLOW) || _isBluePlayerSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isRedPlayerSet(depth) ? 1 : 0;
		out += _isBluePlayerSet(depth) ? 1 : 0;
		out += _isPhaseSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_redPlayer_ID):
				return _redPlayer_METADATA;
			case (_bluePlayer_ID):
				return _bluePlayer_METADATA;
			case (_phase_ID):
				return _phase_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("redPlayer"):
				return _redPlayer_METADATA;
			case ("bluePlayer"):
				return _bluePlayer_METADATA;
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
		  

	public static final long _TYPE_ID = 6762107626409611267L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.games.battleship.GameState._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -11743;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.games.battleship.GameState._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "0iE";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.games.battleship.GameState._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.games.battleship.GameState._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.games.battleship.GameState";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.games.battleship.GameState._TYPE_NAME };

	public static final Field _redPlayer_METADATA = new Field("se.gigurra.aichallenge.games.battleship.GameState", "redPlayer", new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.battleship.Player", 8982872967636735559L), null, (short)-7294);
	public static final Field _bluePlayer_METADATA = new Field("se.gigurra.aichallenge.games.battleship.GameState", "bluePlayer", new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.battleship.Player", 8982872967636735559L), null, (short)10760);
	public static final Field _phase_METADATA = new Field("se.gigurra.aichallenge.games.battleship.GameState", "phase", se.gigurra.aichallenge.games.battleship.GamePhase._TYPE, null, (short)7625);

	public static final short _redPlayer_ID = (short)-7294;
	public static final short _bluePlayer_ID = (short)10760;
	public static final short _phase_ID = (short)7625;

	public static final Field[] _FIELDS = { _redPlayer_METADATA, _bluePlayer_METADATA, _phase_METADATA };

}
