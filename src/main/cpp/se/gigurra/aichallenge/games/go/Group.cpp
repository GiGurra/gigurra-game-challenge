/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/games/go/Group.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace go {

Group::Group() : 
		m_team(Team_UNKNOWN),
		_m_positions_isSet(false),
		_m_team_isSet(false) {
}

Group::Group(const std::vector<Vec2> & positions, 
			const Team& team) : 
		m_positions(positions),
		m_team(team),
		_m_positions_isSet(true),
		_m_team_isSet(true) {
}

Group::~Group() {
}

const std::vector<Vec2> & Group::getPositions() const {
	return m_positions;
}

const Team& Group::getTeam() const {
	return m_team;
}

std::vector<Vec2> & Group::getPositionsMutable() {
	_m_positions_isSet = true;
	return m_positions;
}

Team& Group::getTeamMutable() {
	_m_team_isSet = true;
	return m_team;
}

Group& Group::setPositions(const std::vector<Vec2> & positions) {
	m_positions = positions;
	_m_positions_isSet = true;
	return *this;
}

Group& Group::setTeam(const Team& team) {
	m_team = team;
	_m_team_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool Group::hasPositions() const {
	return _isPositionsSet(mgen::SHALLOW);
}

bool Group::hasTeam() const {
	return _isTeamSet(mgen::SHALLOW);
}

Group& Group::unsetPositions() {
	_setPositionsSet(false, mgen::SHALLOW);
	return *this;
}

Group& Group::unsetTeam() {
	_setTeamSet(false, mgen::SHALLOW);
	return *this;
}

bool Group::operator==(const Group& other) const {
	return true
		 && _isPositionsSet(mgen::SHALLOW) == other._isPositionsSet(mgen::SHALLOW)
		 && _isTeamSet(mgen::SHALLOW) == other._isTeamSet(mgen::SHALLOW)
		 && getPositions() == other.getPositions()
		 && getTeam() == other.getTeam();
}

bool Group::operator!=(const Group& other) const {
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
		  
const mgen::Field * Group::_fieldById(const short id) const {
	switch (id) {
	case _field_positions_id:
		return &_field_positions_metadata();
	case _field_team_id:
		return &_field_team_metadata();
	default:
		return 0;
	}
}

const mgen::Field * Group::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("positions", &Group::_field_positions_metadata())("team", &Group::_field_team_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long Group::_typeId() const {
	return _type_id;
}

const std::string& Group::_typeName() const {
	return _type_name();
}

const short Group::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& Group::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& Group::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& Group::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& Group::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& Group::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& Group::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& Group::_fieldMetadatas() const {
	return _field_metadatas();
}

Group& Group::_setPositionsSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_positions.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_positions);
	_m_positions_isSet = state;
	return *this;
}

Group& Group::_setTeamSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_team = Team_UNKNOWN;
	_m_team_isSet = state;
	return *this;
}

Group& Group::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setPositionsSet(state, depth);
	_setTeamSet(state, depth);
	return *this;
}

int Group::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isPositionsSet(depth) ? 1 : 0;
	out += _isTeamSet(depth) ? 1 : 0;
	return out;
}

bool Group::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_positions_id):
			return _isPositionsSet(depth);
		case (_field_team_id):
			return _isTeamSet(depth);
		default:
			return false;
	}
}

bool Group::_isPositionsSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_positions_isSet;
	} else {
		return _m_positions_isSet && mgen::validation::validateFieldDeep(getPositions());
	}
}

bool Group::_isTeamSet(const mgen::FieldSetDepth depth) const {
	return _m_team_isSet;
}

bool Group::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isPositionsSet(mgen::SHALLOW) || _isPositionsSet(mgen::DEEP));
	}
}

bool Group::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const Group&>(other) == *this;
}

Group * Group::_deepCopy() const {
	return new Group(*this);
}

mgen::MGenBase * Group::_newInstance() {
	return new Group;
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
		  
const std::string& Group::_type_name() {
	static const std::string out("se.gigurra.aichallenge.games.go.Group");
	return out;
}

const std::vector<long long>& Group::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 7626111610355576618LL;
	return out;
}

const std::vector<short>& Group::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -9471;
	return out;
}

const std::vector<std::string>& Group::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.games.go.Group";
	return out;
}

const std::vector<std::string>& Group::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "2wE";
	return out;
}

const std::string& Group::_type_ids_16bit_base64_string() {
	static const std::string out("2wE");
	return out;
}

const std::string& Group::_type_id_16bit_base64() {
	static const std::string out("2wE");
	return out;
}

const std::vector<mgen::Field>& Group::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_positions_metadata() << _field_team_metadata();
	return out;
}

const mgen::Field& Group::_field_positions_metadata() {
	static const mgen::Field out(17252, "positions");
	return out;
}

const mgen::Field& Group::_field_team_metadata() {
	static const mgen::Field out(-1585, "team");
	return out;
}

} // End namespace go
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

