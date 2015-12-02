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

public class MoveResult extends GoMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private Player m_player;
	private Vec2 m_point;
	private Vec2[] m_removed;

	public MoveResult() {
		super();
		m_player = null;
		m_point = null;
		m_removed = new Vec2[]{};
	}

	public MoveResult(final Player player,
				final Vec2 point,
				final Vec2[] removed) {
		m_player = player;
		m_point = point;
		m_removed = removed;
	}

	public Player getPlayer() {
		return m_player;
	}

	public Vec2 getPoint() {
		return m_point;
	}

	public Vec2[] getRemoved() {
		return m_removed;
	}

	public boolean hasPlayer() {
		return _isPlayerSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasPoint() {
		return _isPointSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasRemoved() {
		return _isRemovedSet(FieldSetDepth.SHALLOW);
	}

	public MoveResult unsetPlayer() {
		_setPlayerSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public MoveResult unsetPoint() {
		_setPointSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public MoveResult unsetRemoved() {
		_setRemovedSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Player getPlayerCopy() {
		Player out = null;
		final Player var0 = getPlayer();
		if (var0 != null) {
			out = var0.deepCopy();
		} else {
			out = null;
		}
		return out;
	}

	public Vec2 getPointCopy() {
		Vec2 out = null;
		final Vec2 var0 = getPoint();
		if (var0 != null) {
			out = var0.deepCopy();
		} else {
			out = null;
		}
		return out;
	}

	public Vec2[] getRemovedCopy() {
		Vec2[] out = null;
		final Vec2[] var0 = getRemoved();
		if (var0 != null) {
			out = new Vec2[var0.length];
			for (int var1 = 0; var1 < var0.length; var1++) {
				final Vec2 var2 = var0[var1];
				if (var2 != null) {
					out[var1] = var2.deepCopy();
				} else {
					out[var1] = null;
				}
			}
		} else {
			out = null;
		}
		return out;
	}

	public MoveResult setPlayer(final Player player) {
		m_player = player;
		return this;
	}

	public MoveResult setPoint(final Vec2 point) {
		m_point = point;
		return this;
	}

	public MoveResult setRemoved(final Vec2[] removed) {
		m_removed = removed;
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
		int result = 1755298779;
		result = _isPlayerSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPlayer(), _player_METADATA.typ())) : result;
		result = _isPointSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPoint(), _point_METADATA.typ())) : result;
		result = _isRemovedSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getRemoved(), _removed_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (MoveResult.class != other.getClass()) return false;
		final MoveResult o = (MoveResult)other;
		return true
		  && hasPlayer() == o.hasPlayer()
		  && hasPoint() == o.hasPoint()
		  && hasRemoved() == o.hasRemoved()
		  && EqualityTester.areEqual(getPlayer(), o.getPlayer(), _player_METADATA.typ())
		  && EqualityTester.areEqual(getPoint(), o.getPoint(), _point_METADATA.typ())
		  && EqualityTester.areEqual(getRemoved(), o.getRemoved(), _removed_METADATA.typ());
	}

	@Override
	public MoveResult deepCopy() {
		final MoveResult out = new MoveResult(
			getPlayerCopy(),
			getPointCopy(),
			getRemovedCopy());
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
				visitor.visit(getPlayer(), _player_METADATA);
				visitor.visit(getPoint(), _point_METADATA);
				visitor.visit(getRemoved(), _removed_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isPlayerSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPlayer(), _player_METADATA);
				if (_isPointSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPoint(), _point_METADATA);
				if (_isRemovedSet(FieldSetDepth.SHALLOW))
					visitor.visit(getRemoved(), _removed_METADATA);
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
			case (_player_ID):
				setPlayer((Player)reader.readMgenObjectField(_player_METADATA, context));
				return true;
			case (_point_ID):
				setPoint((Vec2)reader.readMgenObjectField(_point_METADATA, context));
				return true;
			case (_removed_ID):
				setRemoved((Vec2[])reader.readArrayField(_removed_METADATA, context));
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

	public boolean _isPlayerSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_player != null;
		} else {
			return m_player != null && Validator.validateFieldDeep(getPlayer(), _player_METADATA.typ());
		}
	}

	public boolean _isPointSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_point != null;
		} else {
			return m_point != null && Validator.validateFieldDeep(getPoint(), _point_METADATA.typ());
		}
	}

	public boolean _isRemovedSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_removed != null;
		} else {
			return m_removed != null && Validator.validateFieldDeep(getRemoved(), _removed_METADATA.typ());
		}
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_player_ID):
				return _isPlayerSet(depth);
			case (_point_ID):
				return _isPointSet(depth);
			case (_removed_ID):
				return _isRemovedSet(depth);
			default:
				return false;
		}
	}

	public MoveResult _setPlayerSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_player = m_player != null ? m_player : new Player();
		else
			m_player = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getPlayer(), _player_METADATA.typ());
		return this;
	}

	public MoveResult _setPointSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_point = m_point != null ? m_point : new Vec2();
		else
			m_point = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getPoint(), _point_METADATA.typ());
		return this;
	}

	public MoveResult _setRemovedSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_removed = m_removed != null ? m_removed : new Vec2[]{};
		else
			m_removed = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getRemoved(), _removed_METADATA.typ());
		return this;
	}

	public MoveResult _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setPlayerSet(state, depth);
		_setPointSet(state, depth);
		_setRemovedSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isPlayerSet(FieldSetDepth.SHALLOW) || _isPlayerSet(FieldSetDepth.DEEP))
				&& (!_isPointSet(FieldSetDepth.SHALLOW) || _isPointSet(FieldSetDepth.DEEP))
				&& (!_isRemovedSet(FieldSetDepth.SHALLOW) || _isRemovedSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isPlayerSet(depth) ? 1 : 0;
		out += _isPointSet(depth) ? 1 : 0;
		out += _isRemovedSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_player_ID):
				return _player_METADATA;
			case (_point_ID):
				return _point_METADATA;
			case (_removed_ID):
				return _removed_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("player"):
				return _player_METADATA;
			case ("point"):
				return _point_METADATA;
			case ("removed"):
				return _removed_METADATA;
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
		  

	public static final long _TYPE_ID = 27423387546254282L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.Message._TYPE_ID, se.gigurra.aichallenge.GameMessage._TYPE_ID, se.gigurra.aichallenge.games.go.GoMessage._TYPE_ID, se.gigurra.aichallenge.games.go.MoveResult._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 31141;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT, se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT, se.gigurra.aichallenge.games.go.GoMessage._TYPE_ID_16BIT, se.gigurra.aichallenge.games.go.MoveResult._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "eaU";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.games.go.GoMessage._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.games.go.MoveResult._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.games.go.GoMessage._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.games.go.MoveResult._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.games.go.MoveResult";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.Message._TYPE_NAME, se.gigurra.aichallenge.GameMessage._TYPE_NAME, se.gigurra.aichallenge.games.go.GoMessage._TYPE_NAME, se.gigurra.aichallenge.games.go.MoveResult._TYPE_NAME };

	public static final Field _player_METADATA = new Field("se.gigurra.aichallenge.games.go.MoveResult", "player", new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.go.Player", 6275090646202330472L), null, (short)6798);
	public static final Field _point_METADATA = new Field("se.gigurra.aichallenge.games.go.MoveResult", "point", new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.go.Vec2", 3474169627079865342L), null, (short)-28038);
	public static final Field _removed_METADATA = new Field("se.gigurra.aichallenge.games.go.MoveResult", "removed", new se.culvertsoft.mgen.api.model.ArrayType(new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.go.Vec2", 3474169627079865342L)), null, (short)3738);

	public static final short _player_ID = (short)6798;
	public static final short _point_ID = (short)-28038;
	public static final short _removed_ID = (short)3738;

	public static final Field[] _FIELDS = { _player_METADATA, _point_METADATA, _removed_METADATA };

}
