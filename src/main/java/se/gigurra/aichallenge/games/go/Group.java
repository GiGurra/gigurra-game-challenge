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

public class Group extends se.culvertsoft.mgen.javapack.classes.MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private Vec2[] m_positions;
	private Team m_team;

	public Group() {
		super();
		m_positions = null;
		m_team = null;
	}

	public Group(final Vec2[] positions,
				final Team team) {
		m_positions = positions;
		m_team = team;
	}

	public Vec2[] getPositions() {
		return m_positions;
	}

	public Team getTeam() {
		return m_team;
	}

	public boolean hasPositions() {
		return _isPositionsSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasTeam() {
		return _isTeamSet(FieldSetDepth.SHALLOW);
	}

	public Group unsetPositions() {
		_setPositionsSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Group unsetTeam() {
		_setTeamSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Vec2[] getPositionsCopy() {
		Vec2[] out = null;
		final Vec2[] var0 = getPositions();
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

	public Team getTeamCopy() {
		return m_team;
	}

	public Group setPositions(final Vec2[] positions) {
		m_positions = positions;
		return this;
	}

	public Group setTeam(final Team team) {
		m_team = team;
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
		int result = 1715791314;
		result = _isPositionsSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPositions(), _positions_METADATA.typ())) : result;
		result = _isTeamSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getTeam(), _team_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (Group.class != other.getClass()) return false;
		final Group o = (Group)other;
		return true
		  && hasPositions() == o.hasPositions()
		  && hasTeam() == o.hasTeam()
		  && EqualityTester.areEqual(getPositions(), o.getPositions(), _positions_METADATA.typ())
		  && getTeam() == o.getTeam();
	}

	@Override
	public Group deepCopy() {
		final Group out = new Group(
			getPositionsCopy(),
			getTeam());
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
				visitor.visit(getPositions(), _positions_METADATA);
				visitor.visit(getTeam(), _team_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isPositionsSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPositions(), _positions_METADATA);
				if (_isTeamSet(FieldSetDepth.SHALLOW))
					visitor.visit(getTeam(), _team_METADATA);
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
			case (_positions_ID):
				setPositions((Vec2[])reader.readArrayField(_positions_METADATA, context));
				return true;
			case (_team_ID):
				setTeam((Team)reader.readEnumField(_team_METADATA, context));
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

	public boolean _isPositionsSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_positions != null;
		} else {
			return m_positions != null && Validator.validateFieldDeep(getPositions(), _positions_METADATA.typ());
		}
	}

	public boolean _isTeamSet(final FieldSetDepth fieldSetDepth) {
		return m_team != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_positions_ID):
				return _isPositionsSet(depth);
			case (_team_ID):
				return _isTeamSet(depth);
			default:
				return false;
		}
	}

	public Group _setPositionsSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_positions = m_positions != null ? m_positions : new Vec2[0];
		else
			m_positions = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getPositions(), _positions_METADATA.typ());
		return this;
	}

	public Group _setTeamSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_team = m_team != null ? m_team : Team.UNKNOWN;
		else
			m_team = null;
		return this;
	}

	public Group _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setPositionsSet(state, depth);
		_setTeamSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isPositionsSet(FieldSetDepth.SHALLOW) || _isPositionsSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isPositionsSet(depth) ? 1 : 0;
		out += _isTeamSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_positions_ID):
				return _positions_METADATA;
			case (_team_ID):
				return _team_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("positions"):
				return _positions_METADATA;
			case ("team"):
				return _team_METADATA;
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
		  

	public static final long _TYPE_ID = 7626111610355576618L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.games.go.Group._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -9471;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.games.go.Group._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "2wE";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.games.go.Group._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.games.go.Group._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.games.go.Group";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.games.go.Group._TYPE_NAME };

	public static final Field _positions_METADATA = new Field("se.gigurra.aichallenge.games.go.Group", "positions", new se.culvertsoft.mgen.api.model.ArrayType(new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.go.Vec2", 3474169627079865342L)), null, (short)17252);
	public static final Field _team_METADATA = new Field("se.gigurra.aichallenge.games.go.Group", "team", se.gigurra.aichallenge.games.go.Team._TYPE, null, (short)-1585);

	public static final short _positions_ID = (short)17252;
	public static final short _team_ID = (short)-1585;

	public static final Field[] _FIELDS = { _positions_METADATA, _team_METADATA };

}
