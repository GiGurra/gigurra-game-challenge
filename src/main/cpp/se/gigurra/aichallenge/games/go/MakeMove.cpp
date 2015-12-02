/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/games/go/MakeMove.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace go {

MakeMove::MakeMove() : 
		_m_move_isSet(false) {
}

MakeMove::MakeMove(const Move& move) : 
		m_move(move),
		_m_move_isSet(true) {
}

MakeMove::~MakeMove() {
}

const Move& MakeMove::getMove() const {
	return m_move;
}

Move& MakeMove::getMoveMutable() {
	_m_move_isSet = true;
	return m_move;
}

MakeMove& MakeMove::setMove(const Move& move) {
	m_move = move;
	_m_move_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool MakeMove::hasMove() const {
	return _isMoveSet(mgen::SHALLOW);
}

MakeMove& MakeMove::unsetMove() {
	_setMoveSet(false, mgen::SHALLOW);
	return *this;
}

bool MakeMove::operator==(const MakeMove& other) const {
	return true
		 && _isMoveSet(mgen::SHALLOW) == other._isMoveSet(mgen::SHALLOW)
		 && getMove() == other.getMove();
}

bool MakeMove::operator!=(const MakeMove& other) const {
	return !(*this == other);
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
		  
const mgen::Field * MakeMove::_fieldById(const short id) const {
	switch (id) {
	case _field_move_id:
		return &_field_move_metadata();
	default:
		return 0;
	}
}

const mgen::Field * MakeMove::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("move", &MakeMove::_field_move_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long MakeMove::_typeId() const {
	return _type_id;
}

const std::string& MakeMove::_typeName() const {
	return _type_name();
}

const short MakeMove::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& MakeMove::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& MakeMove::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& MakeMove::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& MakeMove::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& MakeMove::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& MakeMove::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& MakeMove::_fieldMetadatas() const {
	return _field_metadatas();
}

MakeMove& MakeMove::_setMoveSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_move._setAllFieldsSet(state, mgen::DEEP);
	_m_move_isSet = state;
	return *this;
}

MakeMove& MakeMove::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setMoveSet(state, depth);
	return *this;
}

int MakeMove::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isMoveSet(depth) ? 1 : 0;
	return out;
}

bool MakeMove::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_move_id):
			return _isMoveSet(depth);
		default:
			return false;
	}
}

bool MakeMove::_isMoveSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_move_isSet;
	} else {
		return _m_move_isSet && mgen::validation::validateFieldDeep(getMove());
	}
}

bool MakeMove::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isMoveSet(mgen::SHALLOW) || _isMoveSet(mgen::DEEP));
	}
}

bool MakeMove::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const MakeMove&>(other) == *this;
}

MakeMove * MakeMove::_deepCopy() const {
	return new MakeMove(*this);
}

mgen::MGenBase * MakeMove::_newInstance() {
	return new MakeMove;
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
		  
const std::string& MakeMove::_type_name() {
	static const std::string out("se.gigurra.aichallenge.games.go.MakeMove");
	return out;
}

const std::vector<long long>& MakeMove::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 7939421773867622329LL << 5106868930527964703LL << 8663087923254891867LL;
	return out;
}

const std::vector<short>& MakeMove::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -5220 << -13325 << -6429;
	return out;
}

const std::vector<std::string>& MakeMove::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.GameMessage" << "se.gigurra.aichallenge.games.go.GoMessage" << "se.gigurra.aichallenge.games.go.MakeMove";
	return out;
}

const std::vector<std::string>& MakeMove::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "65w" << "y/M" << "5uM";
	return out;
}

const std::string& MakeMove::_type_ids_16bit_base64_string() {
	static const std::string out("xUI65wy/M5uM");
	return out;
}

const std::string& MakeMove::_type_id_16bit_base64() {
	static const std::string out("5uM");
	return out;
}

const std::vector<mgen::Field>& MakeMove::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_move_metadata();
	return out;
}

const mgen::Field& MakeMove::_field_move_metadata() {
	static const mgen::Field out(-13006, "move");
	return out;
}

} // End namespace go
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

