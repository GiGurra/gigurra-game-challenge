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

public class PlaceShips extends BattleshipMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private java.util.List<Ship> m_ships;

	public PlaceShips() {
		super();
		m_ships = new java.util.ArrayList<Ship>();
	}

	public PlaceShips(final java.util.List<Ship> ships) {
		m_ships = ships;
	}

	public java.util.List<Ship> getShips() {
		return m_ships;
	}

	public boolean hasShips() {
		return _isShipsSet(FieldSetDepth.SHALLOW);
	}

	public PlaceShips unsetShips() {
		_setShipsSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public java.util.List<Ship> getShipsCopy() {
		java.util.List<Ship> out = null;
		final java.util.List<Ship> var0 = getShips();
		if (var0 != null) {
			out = new java.util.ArrayList<Ship>(var0.size());
			for (final Ship var1 : var0) {
				Ship var2 = null;
				final Ship var3 = var1;
				if (var3 != null) {
					var2 = var3.deepCopy();
				} else {
					var2 = null;
				}
				out.add(var2);
			}
		} else {
			out = null;
		}
		return out;
	}

	public PlaceShips setShips(final java.util.List<Ship> ships) {
		m_ships = ships;
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
		int result = 1483719921;
		result = _isShipsSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getShips(), _ships_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (PlaceShips.class != other.getClass()) return false;
		final PlaceShips o = (PlaceShips)other;
		return true
		  && hasShips() == o.hasShips()
		  && EqualityTester.areEqual(getShips(), o.getShips(), _ships_METADATA.typ());
	}

	@Override
	public PlaceShips deepCopy() {
		final PlaceShips out = new PlaceShips(
			getShipsCopy());
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
				visitor.visit(getShips(), _ships_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isShipsSet(FieldSetDepth.SHALLOW))
					visitor.visit(getShips(), _ships_METADATA);
				visitor.endVisit();
				break;
			}
		}
	}

	@SuppressWarnings("unchecked")
	@Override
	public boolean _readField(final short fieldId,
	                         final Object context,
	                         final Reader reader) throws java.io.IOException {
		switch(fieldId) {
			case (_ships_ID):
				setShips((java.util.List<Ship>)reader.readListField(_ships_METADATA, context));
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

	public boolean _isShipsSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_ships != null;
		} else {
			return m_ships != null && Validator.validateFieldDeep(getShips(), _ships_METADATA.typ());
		}
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_ships_ID):
				return _isShipsSet(depth);
			default:
				return false;
		}
	}

	public PlaceShips _setShipsSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_ships = m_ships != null ? m_ships : new java.util.ArrayList<Ship>();
		else
			m_ships = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getShips(), _ships_METADATA.typ());
		return this;
	}

	public PlaceShips _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setShipsSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isShipsSet(FieldSetDepth.SHALLOW) || _isShipsSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isShipsSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_ships_ID):
				return _ships_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("ships"):
				return _ships_METADATA;
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
		  

	public static final long _TYPE_ID = 3912746060705945642L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.Message._TYPE_ID, se.gigurra.aichallenge.GameMessage._TYPE_ID, se.gigurra.aichallenge.games.battleship.BattleshipMessage._TYPE_ID, se.gigurra.aichallenge.games.battleship.PlaceShips._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 8648;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT, se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT, se.gigurra.aichallenge.games.battleship.BattleshipMessage._TYPE_ID_16BIT, se.gigurra.aichallenge.games.battleship.PlaceShips._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "Icg";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.games.battleship.BattleshipMessage._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.games.battleship.PlaceShips._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.games.battleship.BattleshipMessage._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.games.battleship.PlaceShips._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.games.battleship.PlaceShips";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.Message._TYPE_NAME, se.gigurra.aichallenge.GameMessage._TYPE_NAME, se.gigurra.aichallenge.games.battleship.BattleshipMessage._TYPE_NAME, se.gigurra.aichallenge.games.battleship.PlaceShips._TYPE_NAME };

	public static final Field _ships_METADATA = new Field("se.gigurra.aichallenge.games.battleship.PlaceShips", "ships", new se.culvertsoft.mgen.api.model.ListType(new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.battleship.Ship", 8944528462373442872L)), null, (short)32030);

	public static final short _ships_ID = (short)32030;

	public static final Field[] _FIELDS = { _ships_METADATA };

}
