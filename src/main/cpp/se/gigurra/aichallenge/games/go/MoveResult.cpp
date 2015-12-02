/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/games/go/MoveResult.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace go {

MoveResult::MoveResult() : 
		m_removed(std::vector<Vec2>()),
		_m_player_isSet(false),
		_m_point_isSet(false),
		_m_removed_isSet(true) {
}

MoveResult::MoveResult(const Player& player, 
			const Vec2& point, 
			const std::vector<Vec2> & removed) : 
		m_player(player),
		m_point(point),
		m_removed(removed),
		_m_player_isSet(true),
		_m_point_isSet(true),
		_m_removed_isSet(true) {
}

MoveResult::~MoveResult() {
}

const Player& MoveResult::getPlayer() const {
	return m_player;
}

const Vec2& MoveResult::getPoint() const {
	return m_point;
}

const std::vector<Vec2> & MoveResult::getRemoved() const {
	return m_removed;
}

Player& MoveResult::getPlayerMutable() {
	_m_player_isSet = true;
	return m_player;
}

Vec2& MoveResult::getPointMutable() {
	_m_point_isSet = true;
	return m_point;
}

std::vector<Vec2> & MoveResult::getRemovedMutable() {
	_m_removed_isSet = true;
	return m_removed;
}

MoveResult& MoveResult::setPlayer(const Player& player) {
	m_player = player;
	_m_player_isSet = true;
	return *this;
}

MoveResult& MoveResult::setPoint(const Vec2& point) {
	m_point = point;
	_m_point_isSet = true;
	return *this;
}

MoveResult& MoveResult::setRemoved(const std::vector<Vec2> & removed) {
	m_removed = removed;
	_m_removed_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool MoveResult::hasPlayer() const {
	return _isPlayerSet(mgen::SHALLOW);
}

bool MoveResult::hasPoint() const {
	return _isPointSet(mgen::SHALLOW);
}

bool MoveResult::hasRemoved() const {
	return _isRemovedSet(mgen::SHALLOW);
}

MoveResult& MoveResult::unsetPlayer() {
	_setPlayerSet(false, mgen::SHALLOW);
	return *this;
}

MoveResult& MoveResult::unsetPoint() {
	_setPointSet(false, mgen::SHALLOW);
	return *this;
}

MoveResult& MoveResult::unsetRemoved() {
	_setRemovedSet(false, mgen::SHALLOW);
	return *this;
}

bool MoveResult::operator==(const MoveResult& other) const {
	return true
		 && _isPlayerSet(mgen::SHALLOW) == other._isPlayerSet(mgen::SHALLOW)
		 && _isPointSet(mgen::SHALLOW) == other._isPointSet(mgen::SHALLOW)
		 && _isRemovedSet(mgen::SHALLOW) == other._isRemovedSet(mgen::SHALLOW)
		 && getPlayer() == other.getPlayer()
		 && getPoint() == other.getPoint()
		 && getRemoved() == other.getRemoved();
}

bool MoveResult::operator!=(const MoveResult& other) const {
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
		  
const mgen::Field * MoveResult::_fieldById(const short id) const {
	switch (id) {
	case _field_player_id:
		return &_field_player_metadata();
	case _field_point_id:
		return &_field_point_metadata();
	case _field_removed_id:
		return &_field_removed_metadata();
	default:
		return 0;
	}
}

const mgen::Field * MoveResult::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("player", &MoveResult::_field_player_metadata())("point", &MoveResult::_field_point_metadata())("removed", &MoveResult::_field_removed_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long MoveResult::_typeId() const {
	return _type_id;
}

const std::string& MoveResult::_typeName() const {
	return _type_name();
}

const short MoveResult::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& MoveResult::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& MoveResult::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& MoveResult::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& MoveResult::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& MoveResult::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& MoveResult::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& MoveResult::_fieldMetadatas() const {
	return _field_metadatas();
}

MoveResult& MoveResult::_setPlayerSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_player._setAllFieldsSet(state, mgen::DEEP);
	_m_player_isSet = state;
	return *this;
}

MoveResult& MoveResult::_setPointSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_point._setAllFieldsSet(state, mgen::DEEP);
	_m_point_isSet = state;
	return *this;
}

MoveResult& MoveResult::_setRemovedSet(const bool state, const mgen::FieldSetDepth depth) {
	if (state && !_isRemovedSet(mgen::SHALLOW))
		m_removed = std::vector<Vec2>();
	if (!state)
		m_removed.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_removed);
	_m_removed_isSet = state;
	return *this;
}

MoveResult& MoveResult::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setPlayerSet(state, depth);
	_setPointSet(state, depth);
	_setRemovedSet(state, depth);
	return *this;
}

int MoveResult::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isPlayerSet(depth) ? 1 : 0;
	out += _isPointSet(depth) ? 1 : 0;
	out += _isRemovedSet(depth) ? 1 : 0;
	return out;
}

bool MoveResult::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_player_id):
			return _isPlayerSet(depth);
		case (_field_point_id):
			return _isPointSet(depth);
		case (_field_removed_id):
			return _isRemovedSet(depth);
		default:
			return false;
	}
}

bool MoveResult::_isPlayerSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_player_isSet;
	} else {
		return _m_player_isSet && mgen::validation::validateFieldDeep(getPlayer());
	}
}

bool MoveResult::_isPointSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_point_isSet;
	} else {
		return _m_point_isSet && mgen::validation::validateFieldDeep(getPoint());
	}
}

bool MoveResult::_isRemovedSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_removed_isSet;
	} else {
		return _m_removed_isSet && mgen::validation::validateFieldDeep(getRemoved());
	}
}

bool MoveResult::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isPlayerSet(mgen::SHALLOW) || _isPlayerSet(mgen::DEEP))
				&& (!_isPointSet(mgen::SHALLOW) || _isPointSet(mgen::DEEP))
				&& (!_isRemovedSet(mgen::SHALLOW) || _isRemovedSet(mgen::DEEP));
	}
}

bool MoveResult::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const MoveResult&>(other) == *this;
}

MoveResult * MoveResult::_deepCopy() const {
	return new MoveResult(*this);
}

mgen::MGenBase * MoveResult::_newInstance() {
	return new MoveResult;
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
		  
const std::string& MoveResult::_type_name() {
	static const std::string out("se.gigurra.aichallenge.games.go.MoveResult");
	return out;
}

const std::vector<long long>& MoveResult::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 7939421773867622329LL << 5106868930527964703LL << 27423387546254282LL;
	return out;
}

const std::vector<short>& MoveResult::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -5220 << -13325 << 31141;
	return out;
}

const std::vector<std::string>& MoveResult::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.GameMessage" << "se.gigurra.aichallenge.games.go.GoMessage" << "se.gigurra.aichallenge.games.go.MoveResult";
	return out;
}

const std::vector<std::string>& MoveResult::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "65w" << "y/M" << "eaU";
	return out;
}

const std::string& MoveResult::_type_ids_16bit_base64_string() {
	static const std::string out("xUI65wy/MeaU");
	return out;
}

const std::string& MoveResult::_type_id_16bit_base64() {
	static const std::string out("eaU");
	return out;
}

const std::vector<mgen::Field>& MoveResult::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_player_metadata() << _field_point_metadata() << _field_removed_metadata();
	return out;
}

const mgen::Field& MoveResult::_field_player_metadata() {
	static const mgen::Field out(6798, "player");
	return out;
}

const mgen::Field& MoveResult::_field_point_metadata() {
	static const mgen::Field out(-28038, "point");
	return out;
}

const mgen::Field& MoveResult::_field_removed_metadata() {
	static const mgen::Field out(3738, "removed");
	return out;
}

} // End namespace go
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

