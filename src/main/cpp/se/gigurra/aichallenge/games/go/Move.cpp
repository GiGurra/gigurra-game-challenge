/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/games/go/Move.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace go {

Move::Move() : 
		m_point(Vec2()),
		_m_point_isSet(true) {
}

Move::Move(const Vec2& point) : 
		m_point(point),
		_m_point_isSet(true) {
}

Move::~Move() {
}

const Vec2& Move::getPoint() const {
	return m_point;
}

Vec2& Move::getPointMutable() {
	_m_point_isSet = true;
	return m_point;
}

Move& Move::setPoint(const Vec2& point) {
	m_point = point;
	_m_point_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool Move::hasPoint() const {
	return _isPointSet(mgen::SHALLOW);
}

Move& Move::unsetPoint() {
	_setPointSet(false, mgen::SHALLOW);
	return *this;
}

bool Move::operator==(const Move& other) const {
	return true
		 && _isPointSet(mgen::SHALLOW) == other._isPointSet(mgen::SHALLOW)
		 && getPoint() == other.getPoint();
}

bool Move::operator!=(const Move& other) const {
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
		  
const mgen::Field * Move::_fieldById(const short id) const {
	switch (id) {
	case _field_point_id:
		return &_field_point_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Move::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("point", &Move::_field_point_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Move::_typeId() const {
	return _type_id;
}

const std::string& Move::_typeName() const {
	return _type_name();
}

const short Move::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Move::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Move::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Move::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Move::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Move::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Move::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Move::_fieldMetadatas() const {
	return _field_metadatas();
}

Move& Move::_setPointSet(const bool state, const mgen::FieldSetDepth depth) {
	if (state && !_isPointSet(mgen::SHALLOW))
		m_point = Vec2();
	if (depth == mgen::DEEP)
		m_point._setAllFieldsSet(state, mgen::DEEP);
	_m_point_isSet = state;
	return *this;
}

Move& Move::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setPointSet(state, depth);
	return *this;
}

int Move::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isPointSet(depth) ? 1 : 0;
	return out;
}

bool Move::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_point_id):
			return _isPointSet(depth);
		default:
			return false;
	}
}

bool Move::_isPointSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_point_isSet;
	} else {
		return _m_point_isSet && mgen::validation::validateFieldDeep(getPoint());
	}
}

bool Move::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isPointSet(mgen::SHALLOW) || _isPointSet(mgen::DEEP));
	}
}

bool Move::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Move&>(other) == *this;
}

Move * Move::_deepCopy() const {
	return new Move(*this);
}

mgen::MGenBase * Move::_newInstance() {
	return new Move;
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
		  
const std::string& Move::_type_name() {
	static const std::string out("se.gigurra.aichallenge.games.go.Move");
	return out;
}

const std::vector<long long>& Move::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 7996782320405793945LL;
	return out;
}

const std::vector<short>& Move::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -28276;
	return out;
}

const std::vector<std::string>& Move::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.games.go.Move";
	return out;
}

const std::vector<std::string>& Move::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "kYw";
	return out;
}

const std::string& Move::_type_ids_16bit_base64_string() {
	static const std::string out("kYw");
	return out;
}

const std::string& Move::_type_id_16bit_base64() {
	static const std::string out("kYw");
	return out;
}

const std::vector<mgen::Field>& Move::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_point_metadata();
	return out;
}

const mgen::Field& Move::_field_point_metadata() {
	static const mgen::Field out(-28038, "point");
	return out;
}

} // End namespace go
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

