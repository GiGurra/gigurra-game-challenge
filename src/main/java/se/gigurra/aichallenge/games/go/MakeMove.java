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

public class MakeMove extends GoMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {

	private Move m_move;

	public MakeMove() {
		super();
		m_move = null;
	}

	public MakeMove(final Move move) {
		m_move = move;
	}

	public Move getMove() {
		return m_move;
	}

	public boolean hasMove() {
		return _isMoveSet(FieldSetDepth.SHALLOW);
	}

	public MakeMove unsetMove() {
		_setMoveSet(false, FieldSetDepth.SHALLOW);
		return this;
	}

	public Move getMoveCopy() {
		Move out = null;
		final Move var0 = getMove();
		if (var0 != null) {
			out = var0.deepCopy();
		} else {
			out = null;
		}
		return out;
	}

	public MakeMove setMove(final Move move) {
		m_move = move;
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
		int result = 267287212;
		result = _isMoveSet(FieldSetDepth.SHALLOW) ? (prime * result + FieldHasher.calc(getMove(), _move_METADATA.typ())) : result;
		return result;
	}

	@Override
	public boolean equals(final Object other) {
		if (other == null) return false;
		if (other == this) return true;
		if (MakeMove.class != other.getClass()) return false;
		final MakeMove o = (MakeMove)other;
		return true
		  && hasMove() == o.hasMove()
		  && EqualityTester.areEqual(getMove(), o.getMove(), _move_METADATA.typ());
	}

	@Override
	public MakeMove deepCopy() {
		final MakeMove out = new MakeMove(
			getMoveCopy());
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
				visitor.visit(getMove(), _move_METADATA);
				visitor.endVisit();
				break;
			}
			default /* case ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(this, _nFieldsSet(FieldSetDepth.SHALLOW, false));
				if (_isMoveSet(FieldSetDepth.SHALLOW))
					visitor.visit(getMove(), _move_METADATA);
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
			case (_move_ID):
				setMove((Move)reader.readMgenObjectField(_move_METADATA, context));
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

	public boolean _isMoveSet(final FieldSetDepth fieldSetDepth) {
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return m_move != null;
		} else {
			return m_move != null && Validator.validateFieldDeep(getMove(), _move_METADATA.typ());
		}
	}

	public boolean _isFieldSet(final Field field, final FieldSetDepth depth) {
		switch(field.id()) {
			case (_move_ID):
				return _isMoveSet(depth);
			default:
				return false;
		}
	}

	public MakeMove _setMoveSet(final boolean state, final FieldSetDepth depth) {
		if (state)
			m_move = m_move != null ? m_move : new Move();
		else
			m_move = null;
		if (depth == FieldSetDepth.DEEP)
			Marker.setFieldSetDeep(getMove(), _move_METADATA.typ());
		return this;
	}

	public MakeMove _setAllFieldsSet(final boolean state, final FieldSetDepth depth) { 
		_setMoveSet(state, depth);
		return this;
	}

	public boolean _validate(final FieldSetDepth fieldSetDepth) { 
		if (fieldSetDepth == FieldSetDepth.SHALLOW) {
			return true;
		} else {
			return true
				&& (!_isMoveSet(FieldSetDepth.SHALLOW) || _isMoveSet(FieldSetDepth.DEEP));
		}
	}

	@Override
	public int _nFieldsSet(final FieldSetDepth depth, final boolean includeTransient) {
		int out = 0;
		out += _isMoveSet(depth) ? 1 : 0;
		return out;
	}

	@Override
	public Field _fieldById(final short fieldId) {
		switch(fieldId) {
			case (_move_ID):
				return _move_METADATA;
			default:
				return null;
		}
	}

	@Override
	public Field _fieldByName(final String fieldName) {
		switch(fieldName) {
			case ("move"):
				return _move_METADATA;
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
		  

	public static final long _TYPE_ID = 8663087923254891867L;

	public static final long[] _TYPE_IDS = { se.gigurra.aichallenge.Message._TYPE_ID, se.gigurra.aichallenge.GameMessage._TYPE_ID, se.gigurra.aichallenge.games.go.GoMessage._TYPE_ID, se.gigurra.aichallenge.games.go.MakeMove._TYPE_ID };

	public static final short _TYPE_ID_16BIT = -6429;

	public static final short[] _TYPE_IDS_16BIT = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT, se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT, se.gigurra.aichallenge.games.go.GoMessage._TYPE_ID_16BIT, se.gigurra.aichallenge.games.go.MakeMove._TYPE_ID_16BIT };

	public static final String _TYPE_ID_16BIT_BASE64 = "5uM";

	public static final String[] _TYPE_IDS_16BIT_BASE64 = { se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.games.go.GoMessage._TYPE_ID_16BIT_BASE64, se.gigurra.aichallenge.games.go.MakeMove._TYPE_ID_16BIT_BASE64 };

	public static final String _TYPE_IDS_16BIT_BASE64_STRING = se.gigurra.aichallenge.Message._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.GameMessage._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.games.go.GoMessage._TYPE_ID_16BIT_BASE64 + se.gigurra.aichallenge.games.go.MakeMove._TYPE_ID_16BIT_BASE64;

	public static final String _TYPE_NAME = "se.gigurra.aichallenge.games.go.MakeMove";

	public static final String[] _TYPE_NAMES = { se.gigurra.aichallenge.Message._TYPE_NAME, se.gigurra.aichallenge.GameMessage._TYPE_NAME, se.gigurra.aichallenge.games.go.GoMessage._TYPE_NAME, se.gigurra.aichallenge.games.go.MakeMove._TYPE_NAME };

	public static final Field _move_METADATA = new Field("se.gigurra.aichallenge.games.go.MakeMove", "move", new se.culvertsoft.mgen.api.model.RuntimeClassType("se.gigurra.aichallenge.games.go.Move", 7996782320405793945L), null, (short)-13006);

	public static final short _move_ID = (short)-13006;

	public static final Field[] _FIELDS = { _move_METADATA };

}
