/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/games/go/Board.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace go {

Board::Board() : 
		m_width(9),
		m_height(9),
		m_points(mgen::make_vector<Team>(81).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).make()),
		_m_width_isSet(true),
		_m_height_isSet(true),
		_m_points_isSet(true) {
}

Board::Board(const int& width, 
			const int& height, 
			const std::vector<Team> & points) : 
		m_width(width),
		m_height(height),
		m_points(points),
		_m_width_isSet(true),
		_m_height_isSet(true),
		_m_points_isSet(true) {
}

Board::~Board() {
}

const int& Board::getWidth() const {
	return m_width;
}

const int& Board::getHeight() const {
	return m_height;
}

const std::vector<Team> & Board::getPoints() const {
	return m_points;
}

int& Board::getWidthMutable() {
	_m_width_isSet = true;
	return m_width;
}

int& Board::getHeightMutable() {
	_m_height_isSet = true;
	return m_height;
}

std::vector<Team> & Board::getPointsMutable() {
	_m_points_isSet = true;
	return m_points;
}

Board& Board::setWidth(const int& width) {
	m_width = width;
	_m_width_isSet = true;
	return *this;
}

Board& Board::setHeight(const int& height) {
	m_height = height;
	_m_height_isSet = true;
	return *this;
}

Board& Board::setPoints(const std::vector<Team> & points) {
	m_points = points;
	_m_points_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool Board::hasWidth() const {
	return _isWidthSet(mgen::SHALLOW);
}

bool Board::hasHeight() const {
	return _isHeightSet(mgen::SHALLOW);
}

bool Board::hasPoints() const {
	return _isPointsSet(mgen::SHALLOW);
}

Board& Board::unsetWidth() {
	_setWidthSet(false, mgen::SHALLOW);
	return *this;
}

Board& Board::unsetHeight() {
	_setHeightSet(false, mgen::SHALLOW);
	return *this;
}

Board& Board::unsetPoints() {
	_setPointsSet(false, mgen::SHALLOW);
	return *this;
}

bool Board::operator==(const Board& other) const {
	return true
		 && _isWidthSet(mgen::SHALLOW) == other._isWidthSet(mgen::SHALLOW)
		 && _isHeightSet(mgen::SHALLOW) == other._isHeightSet(mgen::SHALLOW)
		 && _isPointsSet(mgen::SHALLOW) == other._isPointsSet(mgen::SHALLOW)
		 && getWidth() == other.getWidth()
		 && getHeight() == other.getHeight()
		 && getPoints() == other.getPoints();
}

bool Board::operator!=(const Board& other) const {
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
		  
const mgen::Field * Board::_fieldById(const short id) const {
	switch (id) {
	case _field_width_id:
		return &_field_width_metadata();
	case _field_height_id:
		return &_field_height_metadata();
	case _field_points_id:
		return &_field_points_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Board::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("width", &Board::_field_width_metadata())("height", &Board::_field_height_metadata())("points", &Board::_field_points_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Board::_typeId() const {
	return _type_id;
}

const std::string& Board::_typeName() const {
	return _type_name();
}

const short Board::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Board::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Board::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Board::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Board::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Board::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Board::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Board::_fieldMetadatas() const {
	return _field_metadatas();
}

Board& Board::_setWidthSet(const bool state, const mgen::FieldSetDepth depth) {
	if (state && !_isWidthSet(mgen::SHALLOW))
		m_width = 9;
	if (!state)
		m_width = 0;
	_m_width_isSet = state;
	return *this;
}

Board& Board::_setHeightSet(const bool state, const mgen::FieldSetDepth depth) {
	if (state && !_isHeightSet(mgen::SHALLOW))
		m_height = 9;
	if (!state)
		m_height = 0;
	_m_height_isSet = state;
	return *this;
}

Board& Board::_setPointsSet(const bool state, const mgen::FieldSetDepth depth) {
	if (state && !_isPointsSet(mgen::SHALLOW))
		m_points = mgen::make_vector<Team>(81).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).add(Team_O).make();
	if (!state)
		m_points.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_points);
	_m_points_isSet = state;
	return *this;
}

Board& Board::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setWidthSet(state, depth);
	_setHeightSet(state, depth);
	_setPointsSet(state, depth);
	return *this;
}

int Board::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isWidthSet(depth) ? 1 : 0;
	out += _isHeightSet(depth) ? 1 : 0;
	out += _isPointsSet(depth) ? 1 : 0;
	return out;
}

bool Board::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_width_id):
			return _isWidthSet(depth);
		case (_field_height_id):
			return _isHeightSet(depth);
		case (_field_points_id):
			return _isPointsSet(depth);
		default:
			return false;
	}
}

bool Board::_isWidthSet(const mgen::FieldSetDepth depth) const {
	return _m_width_isSet;
}

bool Board::_isHeightSet(const mgen::FieldSetDepth depth) const {
	return _m_height_isSet;
}

bool Board::_isPointsSet(const mgen::FieldSetDepth depth) const {
	return _m_points_isSet;
}

bool Board::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool Board::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Board&>(other) == *this;
}

Board * Board::_deepCopy() const {
	return new Board(*this);
}

mgen::MGenBase * Board::_newInstance() {
	return new Board;
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
		  
const std::string& Board::_type_name() {
	static const std::string out("se.gigurra.aichallenge.games.go.Board");
	return out;
}

const std::vector<long long>& Board::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 2859743780939014881LL;
	return out;
}

const std::vector<short>& Board::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 2644;
	return out;
}

const std::vector<std::string>& Board::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.games.go.Board";
	return out;
}

const std::vector<std::string>& Board::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "ClQ";
	return out;
}

const std::string& Board::_type_ids_16bit_base64_string() {
	static const std::string out("ClQ");
	return out;
}

const std::string& Board::_type_id_16bit_base64() {
	static const std::string out("ClQ");
	return out;
}

const std::vector<mgen::Field>& Board::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_width_metadata() << _field_height_metadata() << _field_points_metadata();
	return out;
}

const mgen::Field& Board::_field_width_metadata() {
	static const mgen::Field out(-20637, "width");
	return out;
}

const mgen::Field& Board::_field_height_metadata() {
	static const mgen::Field out(28175, "height");
	return out;
}

const mgen::Field& Board::_field_points_metadata() {
	static const mgen::Field out(-26865, "points");
	return out;
}

} // End namespace go
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

