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

public class Player extends se.culvertsoft.mgen.javapack.classes.MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private String m_name;
	private java.util.List<Shot> m_shotsFired;
	private java.util.List<Shot> m_shotsReceived;
	private java.util.List<Ship> m_ships;

	public Player() {
		super();
		m_name = null;
		m_shotsFired = new java.util.ArrayList<Shot>();
		m_shotsReceived = new java.util.ArrayList<Shot>();
		m_ships = new java.util.ArrayList<Ship>();
	}

	public Player(final String name,
				final java.util.List<Shot> shotsFired,
				final java.util.List<Shot> shotsReceived,
				final java.util.List<Ship> ships) {
		m_name = name;
		m_shotsFired = shotsFired;
		m_shotsReceived = shotsReceived;
		m_ships = ships;
	}

	public String getName() {
		return m_name;
	}

	public java.util.List<Shot> getShotsFired() {
		return m_shotsFired;
	}

	public java.util.List<Shot> getShotsReceived() {
		return m_shotsReceived;
	}

	public java.util.List<Ship> getShips() {
		return m_ships;
	}

	public boolean hasName() {
		return _isNameSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasShotsFired() {
		return _isShotsFiredSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasShotsReceived() {
		return _isShotsReceivedSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasShips() {
		return _isShipsSet(FieldSetDepth.SHALLOW);
	}

	public Player unsetName() {
		_setNameSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Player unsetShotsFired() {
		_setShotsFiredSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Player unsetShotsReceived() {
		_setShotsReceivedSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Player unsetShips() {
		_setShipsSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public String getNameCopy() {
		return m_name;
	}

	public java.util.List<Shot> getShotsFiredCopy() {
		java.util.List<Shot> out = null;
		final java.util.List<Shot> var0 = getShotsFired();
		if (var0 != null) {
			out = new java.util.ArrayList<Shot>(var0.size());
			for (final Shot var1 : var0) {
				Shot var2 = null;
				final Shot var3 = var1;
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

	public java.util.List<Shot> getShotsReceivedCopy() {
		java.util.List<Shot> out = null;
		final java.util.List<Shot> var0 = getShotsReceived();
		if (var0 != null) {
			out = new java.util.ArrayList<Shot>(var0.size());
			for (final Shot var1 : var0) {
				Shot var2 = null;
				final Shot var3 = var1;
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

	public Player setName(final String name) {
		m_name = name;
		return this;
	}

	public Player setShotsFired(final java.util.List<Shot> shotsFired) {
		m_shotsFired = shotsFired;
		return this;
	}

	public Player setShotsReceived(final java.util.List<Shot> shotsReceived) {
		m_shotsReceived = shotsReceived;
		return this;
	}

	public Player setShips(final java.util.List<Ship> ships) {
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
		int result = 2077972322;
		result = _isNameSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getName(), _name_METADATA.typ())) : result;
		result = _isShotsFiredSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getShotsFired(), _shotsFired_METADATA.typ())) : result;
		result = _isShotsReceivedSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getShotsReceived(), _shotsReceived_METADATA.typ())) : result;
		result = _isShipsSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getShips(), _ships_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (Player.class != other.getClass()) return false;
		final Player o = (Player)other;
		return true
		  && hasName() == o.hasName()
		  && hasShotsFired() == o.hasShotsFired()
		  && hasShotsReceived() == o.hasShotsReceived()
		  && hasShips() == o.hasShips()
		  && EqualityTester.areEqual(getName(), o.getName(), _name_METADATA.typ())
		  && EqualityTester.areEqual(getShotsFired(), o.getShotsFired(), _shotsFired_METADATA.typ())
		  && EqualityTester.areEqual(getShotsReceived(), o.getShotsReceived(), _shotsReceived_METADATA.typ())
		  && EqualityTester.areEqual(getShips(), o.getShips(), _ships_METADATA.typ());
	}

	@Override
	public Player deepCopy() {
		final Player out = new Player(
			getName(),
			getShotsFiredCopy(),
			getShotsReceivedCopy(),
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
				visitor.beginVisit(this, 4);
				visitor.visit(getName(), _name_METADATA);
				visitor.visit(getShotsFired(), _shotsFired_METADATA);
				visitor.visit(getShotsReceived(), _shotsReceived_METADATA);
				visitor.visit(getShips(), _ships_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isNameSet(FieldSetDepth.SHALLOW))
					visitor.visit(getName(), _name_METADATA);
				if (_isShotsFiredSet(FieldSetDepth.SHALLOW))
					visitor.visit(getShotsFired(), _shotsFired_METADATA);
				if (_isShotsReceivedSet(FieldSetDepth.SHALLOW))
					visitor.visit(getShotsReceived(), _shotsReceived_METADATA);
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
			case (_name_ID):
				setName((String)reader.readStringField(_name_METADATA, context));
				return true;
			case (_shotsFired_ID):
				setShotsFired((java.util.List<Shot>)reader.readListField(_shotsFired_METADATA, context));
				return true;
			case (_shotsReceived_ID):
				setShotsReceived((java.util.List<Shot>)reader.readListField(_shotsReceived_METADATA, context));
				return true;
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

	public boolean _isNameSet(final FieldSetDepth fieldSetDepth) {
		return m_name != null;
	}

	public boolean _isShotsFiredSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_shotsFired != null;
		} else {
			return m_shotsFired != null && Validator.validateFieldDeep(getShotsFired(), _shotsFired_METADATA.typ());
		}
	}

	public boolean _isShotsReceivedSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_shotsReceived != null;
		} else {
			return m_shotsReceived != null && Validator.validateFieldDeep(getShotsReceived(), _shotsReceived_METADATA.typ());
		}
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
			case (_name_ID):
				return _isNameSet(depth);
			case (_shotsFired_ID):
				return _isShotsFiredSet(depth);
			case (_shotsReceived_ID):
				return _isShotsReceivedSet(depth);
			case (_ships_ID):
				return _isShipsSet(depth);
			default:
				return false;
		}
	}

	public Player _setNameSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_name = m_name != null ? m_name : "";
		else
			m_name = null;
		return this;
	}

	public Player _setShotsFiredSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_shotsFired = m_shotsFired != null ? m_shotsFired : new java.util.ArrayList<Shot>();
		else
			m_shotsFired = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getShotsFired(), _shotsFired_METADATA.typ());
		return this;
	}

	public Player _setShotsReceivedSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_shotsReceived = m_shotsReceived != null ? m_shotsReceived : new java.util.ArrayList<Shot>();
		else
			m_shotsReceived = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getShotsReceived(), _shotsReceived_METADATA.typ());
		return this;
	}

	public Player _setShipsSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_ships = m_ships != null ? m_ships : new java.util.ArrayList<Ship>();
		else
			m_ships = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getShips(), _ships_METADATA.typ());
		return this;
	}

	public Player _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setNameSet(state, depth);
		_setShotsFiredSet(state, depth);
		_setShotsReceivedSet(state, depth);
		_setShipsSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isShotsFiredSet(FieldSetDepth.SHALLOW) || _isShotsFiredSet(FieldSetDepth.DEEP))
				&& (!_isShotsReceivedSet(FieldSetDepth.SHALLOW) || _isShotsReceivedSet(FieldSetDepth.DEEP))
				&& (!_isShipsSet(FieldSetDepth.SHALLOW) || _isShipsSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isNameSet(depth) ? 1 : 0;
		out += _isShotsFiredSet(depth) ? 1 : 0;
		out += _isShotsReceivedSet(depth) ? 1 : 0;
		out += _isShipsSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_name_ID):
				return _name_METADATA;
			case (_shotsFired_ID):
				return _shotsFired_METADATA;
			case (_shotsReceived_ID):
				return _shotsReceived_METADATA;
			case (_ships_ID):
				return _ships_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("name"):
				return _name_METADATA;
			case ("shotsFired"):
				return _shotsFired_METADATA;
			case ("shotsReceived"):
				return _shotsReceived_METADATA;
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
		  

	public static final long _TYPE_ID = 8982872967636735559L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.games.battleship.Player._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -546;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.games.battleship.Player._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "/d4";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.games.battleship.Player._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.games.battleship.Player._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.games.battleship.Player";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.games.battleship.Player._TYPE_NAME };

	public static final Field _name_METADATA = new Field("se.gigurra.aichallenge.games.battleship.Player", "name", se.culvertsoft.mgen.api.model.StringType.INSTANCE, null, (short)-28058);
	public static final Field _shotsFired_METADATA = new Field("se.gigurra.aichallenge.games.battleship.Player", "shotsFired", new se.culvertsoft.mgen.api.model.ListType(new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.battleship.Shot", 7446599600640505600L)), null, (short)-9007);
	public static final Field _shotsReceived_METADATA = new Field("se.gigurra.aichallenge.games.battleship.Player", "shotsReceived", new se.culvertsoft.mgen.api.model.ListType(new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.battleship.Shot", 7446599600640505600L)), null, (short)-32090);
	public static final Field _ships_METADATA = new Field("se.gigurra.aichallenge.games.battleship.Player", "ships", new se.culvertsoft.mgen.api.model.ListType(new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.battleship.Ship", 8944528462373442872L)), null, (short)32030);

	public static final short _name_ID = (short)-28058;
	public static final short _shotsFired_ID = (short)-9007;
	public static final short _shotsReceived_ID = (short)-32090;
	public static final short _ships_ID = (short)32030;

	public static final Field[] _FIELDS = { _name_METADATA, _shotsFired_METADATA, _shotsReceived_METADATA, _ships_METADATA };

}
