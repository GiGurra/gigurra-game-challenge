/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/games/gomoku/Board.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace gomoku {

Board::Board() : 
		_m_positions_isSet(false) {
}

Board::Board(const std::vector<std::vector<Team> > & positions) : 
		m_positions(positions),
		_m_positions_isSet(true) {
}

Board::~Board() {
}

const std::vector<std::vector<Team> > & Board::getPositions() const {
	return m_positions;
}

std::vector<std::vector<Team> > & Board::getPositionsMutable() {
	_m_positions_isSet = true;
	return m_positions;
}

Board& Board::setPositions(const std::vector<std::vector<Team> > & positions) {
	m_positions = positions;
	_m_positions_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool Board::hasPositions() const {
	return _isPositionsSet(mgen::SHALLOW);
}

Board& Board::unsetPositions() {
	_setPositionsSet(false, mgen::SHALLOW);
	return *this;
}

bool Board::operator==(const Board& other) const {
	return true
		 && _isPositionsSet(mgen::SHALLOW) == other._isPositionsSet(mgen::SHALLOW)
		 && getPositions() == other.getPositions();
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
	case _field_positions_id:
		return &_field_positions_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Board::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("positions", &Board::_field_positions_metadata());
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

Board& Board::_setPositionsSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_positions.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_positions);
	_m_positions_isSet = state;
	return *this;
}

Board& Board::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setPositionsSet(state, depth);
	return *this;
}

int Board::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isPositionsSet(depth) ? 1 : 0;
	return out;
}

bool Board::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_positions_id):
			return _isPositionsSet(depth);
		default:
			return false;
	}
}

bool Board::_isPositionsSet(const mgen::FieldSetDepth depth) const {
	return _m_positions_isSet;
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
	static const std::string out("se.gigurra.aichallenge.games.gomoku.Board");
	return out;
}

const std::vector<long long>& Board::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 7972794693990491050LL;
	return out;
}

const std::vector<short>& Board::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -2985;
	return out;
}

const std::vector<std::string>& Board::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.games.gomoku.Board";
	return out;
}

const std::vector<std::string>& Board::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "9Fc";
	return out;
}

const std::string& Board::_type_ids_16bit_base64_string() {
	static const std::string out("9Fc");
	return out;
}

const std::string& Board::_type_id_16bit_base64() {
	static const std::string out("9Fc");
	return out;
}

const std::vector<mgen::Field>& Board::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_positions_metadata();
	return out;
}

const mgen::Field& Board::_field_positions_metadata() {
	static const mgen::Field out(17252, "positions");
	return out;
}

} // End namespace gomoku
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

