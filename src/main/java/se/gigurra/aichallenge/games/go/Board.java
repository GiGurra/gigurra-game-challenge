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
/* custom_imports_begin *//* custom_imports_end */

public class Board extends se.culvertsoft.mgen.javapack.classes.MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private int m_width;
	private int m_height;
	private Team[] m_points;
	private boolean _m_width_isSet;
	private boolean _m_height_isSet;

	public Board() {
		super();
		m_width = 9;
		m_height = 9;
		m_points = new Team[]{Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O};
		_m_width_isSet = true;
		_m_height_isSet = true;
	}

	public Board(final int width,
				final int height,
				final Team[] points) {
		m_width = width;
		m_height = height;
		m_points = points;
		_m_width_isSet = true;
		_m_height_isSet = true;
	}

	public int getWidth() {
		return m_width;
	}

	public int getHeight() {
		return m_height;
	}

	public Team[] getPoints() {
		return m_points;
	}

	public boolean hasWidth() {
		return _isWidthSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasHeight() {
		return _isHeightSet(FieldSetDepth.SHALLOW);
	}

	public boolean hasPoints() {
		return _isPointsSet(FieldSetDepth.SHALLOW);
	}

	public Board unsetWidth() {
		_setWidthSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Board unsetHeight() {
		_setHeightSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Board unsetPoints() {
		_setPointsSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public int getWidthCopy() {
		return m_width;
	}

	public int getHeightCopy() {
		return m_height;
	}

	public Team[] getPointsCopy() {
		Team[] out = null;
		final Team[] var0 = getPoints();
		if (var0 != null) {
			out = new Team[var0.length];
			System.arraycopy(var0, 0, out, 0, var0.length);
		} else {
			out = null;
		}
		return out;
	}

	public Board setWidth(final int width) {
		m_width = width;
		_m_width_isSet = true;
		return this;
	}

	public Board setHeight(final int height) {
		m_height = height;
		_m_height_isSet = true;
		return this;
	}

	public Board setPoints(final Team[] points) {
		m_points = points;
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
		int result = 1711070777;
		result = _isWidthSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getWidth(), _width_METADATA.typ())) : result;
		result = _isHeightSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getHeight(), _height_METADATA.typ())) : result;
		result = _isPointsSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getPoints(), _points_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (Board.class != other.getClass()) return false;
		final Board o = (Board)other;
		return true
		  && hasWidth() == o.hasWidth()
		  && hasHeight() == o.hasHeight()
		  && hasPoints() == o.hasPoints()
		  && getWidth() == o.getWidth()
		  && getHeight() == o.getHeight()
		  && EqualityTester.areEqual(getPoints(), o.getPoints(), _points_METADATA.typ());
	}

	@Override
	public Board deepCopy() {
		final Board out = new Board(
			getWidth(),
			getHeight(),
			getPointsCopy());
		if (!hasWidth()) out.unsetWidth();
		if (!hasHeight()) out.unsetHeight();
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
				visitor.visit(getWidth(), _width_METADATA);
				visitor.visit(getHeight(), _height_METADATA);
				visitor.visit(getPoints(), _points_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isWidthSet(FieldSetDepth.SHALLOW))
					visitor.visit(getWidth(), _width_METADATA);
				if (_isHeightSet(FieldSetDepth.SHALLOW))
					visitor.visit(getHeight(), _height_METADATA);
				if (_isPointsSet(FieldSetDepth.SHALLOW))
					visitor.visit(getPoints(), _points_METADATA);
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
			case (_width_ID):
				setWidth((int)reader.readInt32Field(_width_METADATA, context));
				return true;
			case (_height_ID):
				setHeight((int)reader.readInt32Field(_height_METADATA, context));
				return true;
			case (_points_ID):
				setPoints((Team[])reader.readArrayField(_points_METADATA, context));
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

	public boolean _isWidthSet(final FieldSetDepth fieldSetDepth) {
		return _m_width_isSet;
	}

	public boolean _isHeightSet(final FieldSetDepth fieldSetDepth) {
		return _m_height_isSet;
	}

	public boolean _isPointsSet(final FieldSetDepth fieldSetDepth) {
		return m_points != null;
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_width_ID):
				return _isWidthSet(depth);
			case (_height_ID):
				return _isHeightSet(depth);
			case (_points_ID):
				return _isPointsSet(depth);
			default:
				return false;
		}
	}

	public Board _setWidthSet(final boolean state, final FieldSetDepth depth) {
		if (!state)
			m_width = 9;
		_m_width_isSet = state;
		return this;
	}

	public Board _setHeightSet(final boolean state, final FieldSetDepth depth) {
		if (!state)
			m_height = 9;
		_m_height_isSet = state;
		return this;
	}

	public Board _setPointsSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_points = m_points != null ? m_points : new Team[]{Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O, Team.O};
		else
			m_points = null;
		return this;
	}

	public Board _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setWidthSet(state, depth);
		_setHeightSet(state, depth);
		_setPointsSet(state, depth);
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
		out += _isWidthSet(depth) ? 1 : 0;
		out += _isHeightSet(depth) ? 1 : 0;
		out += _isPointsSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_width_ID):
				return _width_METADATA;
			case (_height_ID):
				return _height_METADATA;
			case (_points_ID):
				return _points_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("width"):
				return _width_METADATA;
			case ("height"):
				return _height_METADATA;
			case ("points"):
				return _points_METADATA;
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
		  

	public static final long _TYPE_ID = 2859743780939014881L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.games.go.Board._TYPE_ID };

	public static final short _TYPE_ID_16BIT = 2644;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.games.go.Board._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "ClQ";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.games.go.Board._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.games.go.Board._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.games.go.Board";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.games.go.Board._TYPE_NAME };

	public static final Field _width_METADATA = new Field("se.gigurra.aichallenge.games.go.Board", "width", se.culvertsoft.mgen.api.model.Int32Type.INSTANCE, null, (short)-20637);
	public static final Field _height_METADATA = new Field("se.gigurra.aichallenge.games.go.Board", "height", se.culvertsoft.mgen.api.model.Int32Type.INSTANCE, null, (short)28175);
	public static final Field _points_METADATA = new Field("se.gigurra.aichallenge.games.go.Board", "points", new se.culvertsoft.mgen.api.model.ArrayType(se.gigurra.aichallenge.games.go.Team._TYPE), null, (short)-26865);

	public static final short _width_ID = (short)-20637;
	public static final short _height_ID = (short)28175;
	public static final short _points_ID = (short)-26865;

	public static final Field[] _FIELDS = { _width_METADATA, _height_METADATA, _points_METADATA };

}
