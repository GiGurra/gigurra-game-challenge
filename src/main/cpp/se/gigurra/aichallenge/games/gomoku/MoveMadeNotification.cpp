/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/games/gomoku/MoveMadeNotification.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace gomoku {

MoveMadeNotification::MoveMadeNotification() : 
		_m_playerName_isSet(false),
		_m_position_isSet(false) {
}

MoveMadeNotification::MoveMadeNotification(const std::string& playerName, 
			const Vec2& position) : 
		m_playerName(playerName),
		m_position(position),
		_m_playerName_isSet(true),
		_m_position_isSet(true) {
}

MoveMadeNotification::~MoveMadeNotification() {
}

const std::string& MoveMadeNotification::getPlayerName() const {
	return m_playerName;
}

const Vec2& MoveMadeNotification::getPosition() const {
	return m_position;
}

std::string& MoveMadeNotification::getPlayerNameMutable() {
	_m_playerName_isSet = true;
	return m_playerName;
}

Vec2& MoveMadeNotification::getPositionMutable() {
	_m_position_isSet = true;
	return m_position;
}

MoveMadeNotification& MoveMadeNotification::setPlayerName(const std::string& playerName) {
	m_playerName = playerName;
	_m_playerName_isSet = true;
	return *this;
}

MoveMadeNotification& MoveMadeNotification::setPosition(const Vec2& position) {
	m_position = position;
	_m_position_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool MoveMadeNotification::hasPlayerName() const {
	return _isPlayerNameSet(mgen::SHALLOW);
}

bool MoveMadeNotification::hasPosition() const {
	return _isPositionSet(mgen::SHALLOW);
}

MoveMadeNotification& MoveMadeNotification::unsetPlayerName() {
	_setPlayerNameSet(false, mgen::SHALLOW);
	return *this;
}

MoveMadeNotification& MoveMadeNotification::unsetPosition() {
	_setPositionSet(false, mgen::SHALLOW);
	return *this;
}

bool MoveMadeNotification::operator==(const MoveMadeNotification& other) const {
	return true
		 && _isPlayerNameSet(mgen::SHALLOW) == other._isPlayerNameSet(mgen::SHALLOW)
		 && _isPositionSet(mgen::SHALLOW) == other._isPositionSet(mgen::SHALLOW)
		 && getPlayerName() == other.getPlayerName()
		 && getPosition() == other.getPosition();
}

bool MoveMadeNotification::operator!=(const MoveMadeNotification& other) const {
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
		  
const mgen::Field * MoveMadeNotification::_fieldById(const short id) const {
	switch (id) {
	case _field_playerName_id:
		return &_field_playerName_metadata();
	case _field_position_id:
		return &_field_position_metadata();
	default:
		return 0;
	}
}

const mgen::Field * MoveMadeNotification::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("playerName", &MoveMadeNotification::_field_playerName_metadata())("position", &MoveMadeNotification::_field_position_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long MoveMadeNotification::_typeId() const {
	return _type_id;
}

const std::string& MoveMadeNotification::_typeName() const {
	return _type_name();
}

const short MoveMadeNotification::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& MoveMadeNotification::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& MoveMadeNotification::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& MoveMadeNotification::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& MoveMadeNotification::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& MoveMadeNotification::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& MoveMadeNotification::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& MoveMadeNotification::_fieldMetadatas() const {
	return _field_metadatas();
}

MoveMadeNotification& MoveMadeNotification::_setPlayerNameSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_playerName = "";
	_m_playerName_isSet = state;
	return *this;
}

MoveMadeNotification& MoveMadeNotification::_setPositionSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_position._setAllFieldsSet(state, mgen::DEEP);
	_m_position_isSet = state;
	return *this;
}

MoveMadeNotification& MoveMadeNotification::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setPlayerNameSet(state, depth);
	_setPositionSet(state, depth);
	return *this;
}

int MoveMadeNotification::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isPlayerNameSet(depth) ? 1 : 0;
	out += _isPositionSet(depth) ? 1 : 0;
	return out;
}

bool MoveMadeNotification::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_playerName_id):
			return _isPlayerNameSet(depth);
		case (_field_position_id):
			return _isPositionSet(depth);
		default:
			return false;
	}
}

bool MoveMadeNotification::_isPlayerNameSet(const mgen::FieldSetDepth depth) const {
	return _m_playerName_isSet;
}

bool MoveMadeNotification::_isPositionSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_position_isSet;
	} else {
		return _m_position_isSet && mgen::validation::validateFieldDeep(getPosition());
	}
}

bool MoveMadeNotification::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isPositionSet(mgen::SHALLOW) || _isPositionSet(mgen::DEEP));
	}
}

bool MoveMadeNotification::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const MoveMadeNotification&>(other) == *this;
}

MoveMadeNotification * MoveMadeNotification::_deepCopy() const {
	return new MoveMadeNotification(*this);
}

mgen::MGenBase * MoveMadeNotification::_newInstance() {
	return new MoveMadeNotification;
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
		  
const std::string& MoveMadeNotification::_type_name() {
	static const std::string out("se.gigurra.aichallenge.games.gomoku.MoveMadeNotification");
	return out;
}

const std::vector<long long>& MoveMadeNotification::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 7939421773867622329LL << 669011708587813573LL << 6430104820858040416LL;
	return out;
}

const std::vector<short>& MoveMadeNotification::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -5220 << 32152 << 9854;
	return out;
}

const std::vector<std::string>& MoveMadeNotification::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.GameMessage" << "se.gigurra.aichallenge.games.gomoku.GomokuMessage" << "se.gigurra.aichallenge.games.gomoku.MoveMadeNotification";
	return out;
}

const std::vector<std::string>& MoveMadeNotification::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "65w" << "fZg" << "Jn4";
	return out;
}

const std::string& MoveMadeNotification::_type_ids_16bit_base64_string() {
	static const std::string out("xUI65wfZgJn4");
	return out;
}

const std::string& MoveMadeNotification::_type_id_16bit_base64() {
	static const std::string out("Jn4");
	return out;
}

const std::vector<mgen::Field>& MoveMadeNotification::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_playerName_metadata() << _field_position_metadata();
	return out;
}

const mgen::Field& MoveMadeNotification::_field_playerName_metadata() {
	static const mgen::Field out(29375, "playerName");
	return out;
}

const mgen::Field& MoveMadeNotification::_field_position_metadata() {
	static const mgen::Field out(-26337, "position");
	return out;
}

} // End namespace gomoku
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

