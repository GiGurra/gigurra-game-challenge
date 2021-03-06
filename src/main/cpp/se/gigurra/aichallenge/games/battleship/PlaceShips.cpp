/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/games/battleship/PlaceShips.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace battleship {

PlaceShips::PlaceShips() : 
		m_ships(std::vector<Ship>()),
		_m_ships_isSet(true) {
}

PlaceShips::PlaceShips(const std::vector<Ship> & ships) : 
		m_ships(ships),
		_m_ships_isSet(true) {
}

PlaceShips::~PlaceShips() {
}

const std::vector<Ship> & PlaceShips::getShips() const {
	return m_ships;
}

std::vector<Ship> & PlaceShips::getShipsMutable() {
	_m_ships_isSet = true;
	return m_ships;
}

PlaceShips& PlaceShips::setShips(const std::vector<Ship> & ships) {
	m_ships = ships;
	_m_ships_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool PlaceShips::hasShips() const {
	return _isShipsSet(mgen::SHALLOW);
}

PlaceShips& PlaceShips::unsetShips() {
	_setShipsSet(false, mgen::SHALLOW);
	return *this;
}

bool PlaceShips::operator==(const PlaceShips& other) const {
	return true
		 && _isShipsSet(mgen::SHALLOW) == other._isShipsSet(mgen::SHALLOW)
		 && getShips() == other.getShips();
}

bool PlaceShips::operator!=(const PlaceShips& other) const {
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
		  
const mgen::Field * PlaceShips::_fieldById(const short id) const {
	switch (id) {
	case _field_ships_id:
		return &_field_ships_metadata();
	default:
		return 0;
	}
}

const mgen::Field * PlaceShips::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("ships", &PlaceShips::_field_ships_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long PlaceShips::_typeId() const {
	return _type_id;
}

const std::string& PlaceShips::_typeName() const {
	return _type_name();
}

const short PlaceShips::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& PlaceShips::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& PlaceShips::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& PlaceShips::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& PlaceShips::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& PlaceShips::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& PlaceShips::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& PlaceShips::_fieldMetadatas() const {
	return _field_metadatas();
}

PlaceShips& PlaceShips::_setShipsSet(const bool state, const mgen::FieldSetDepth depth) {
	if (state && !_isShipsSet(mgen::SHALLOW))
		m_ships = std::vector<Ship>();
	if (!state)
		m_ships.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_ships);
	_m_ships_isSet = state;
	return *this;
}

PlaceShips& PlaceShips::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setShipsSet(state, depth);
	return *this;
}

int PlaceShips::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isShipsSet(depth) ? 1 : 0;
	return out;
}

bool PlaceShips::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_ships_id):
			return _isShipsSet(depth);
		default:
			return false;
	}
}

bool PlaceShips::_isShipsSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_ships_isSet;
	} else {
		return _m_ships_isSet && mgen::validation::validateFieldDeep(getShips());
	}
}

bool PlaceShips::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isShipsSet(mgen::SHALLOW) || _isShipsSet(mgen::DEEP));
	}
}

bool PlaceShips::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const PlaceShips&>(other) == *this;
}

PlaceShips * PlaceShips::_deepCopy() const {
	return new PlaceShips(*this);
}

mgen::MGenBase * PlaceShips::_newInstance() {
	return new PlaceShips;
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
		  
const std::string& PlaceShips::_type_name() {
	static const std::string out("se.gigurra.aichallenge.games.battleship.PlaceShips");
	return out;
}

const std::vector<long long>& PlaceShips::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 7939421773867622329LL << 7379711854769594968LL << 3912746060705945642LL;
	return out;
}

const std::vector<short>& PlaceShips::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -5220 << 2093 << 8648;
	return out;
}

const std::vector<std::string>& PlaceShips::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.GameMessage" << "se.gigurra.aichallenge.games.battleship.BattleshipMessage" << "se.gigurra.aichallenge.games.battleship.PlaceShips";
	return out;
}

const std::vector<std::string>& PlaceShips::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "65w" << "CC0" << "Icg";
	return out;
}

const std::string& PlaceShips::_type_ids_16bit_base64_string() {
	static const std::string out("xUI65wCC0Icg");
	return out;
}

const std::string& PlaceShips::_type_id_16bit_base64() {
	static const std::string out("Icg");
	return out;
}

const std::vector<mgen::Field>& PlaceShips::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_ships_metadata();
	return out;
}

const mgen::Field& PlaceShips::_field_ships_metadata() {
	static const mgen::Field out(32030, "ships");
	return out;
}

} // End namespace battleship
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

