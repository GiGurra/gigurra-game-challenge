/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/games/go/MoveRequest.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace go {

MoveRequest::MoveRequest() : 
		_m_state_isSet(false) {
}

MoveRequest::MoveRequest(const GameState& state) : 
		m_state(state),
		_m_state_isSet(true) {
}

MoveRequest::~MoveRequest() {
}

const GameState& MoveRequest::getState() const {
	return m_state;
}

GameState& MoveRequest::getStateMutable() {
	_m_state_isSet = true;
	return m_state;
}

MoveRequest& MoveRequest::setState(const GameState& state) {
	m_state = state;
	_m_state_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool MoveRequest::hasState() const {
	return _isStateSet(mgen::SHALLOW);
}

MoveRequest& MoveRequest::unsetState() {
	_setStateSet(false, mgen::SHALLOW);
	return *this;
}

bool MoveRequest::operator==(const MoveRequest& other) const {
	return true
		 && _isStateSet(mgen::SHALLOW) == other._isStateSet(mgen::SHALLOW)
		 && getState() == other.getState();
}

bool MoveRequest::operator!=(const MoveRequest& other) const {
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
		  
const mgen::Field * MoveRequest::_fieldById(const short id) const {
	switch (id) {
	case _field_state_id:
		return &_field_state_metadata();
	default:
		return 0;
	}
}

const mgen::Field * MoveRequest::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("state", &MoveRequest::_field_state_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long MoveRequest::_typeId() const {
	return _type_id;
}

const std::string& MoveRequest::_typeName() const {
	return _type_name();
}

const short MoveRequest::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& MoveRequest::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& MoveRequest::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& MoveRequest::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& MoveRequest::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& MoveRequest::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& MoveRequest::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& MoveRequest::_fieldMetadatas() const {
	return _field_metadatas();
}

MoveRequest& MoveRequest::_setStateSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_state._setAllFieldsSet(state, mgen::DEEP);
	_m_state_isSet = state;
	return *this;
}

MoveRequest& MoveRequest::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setStateSet(state, depth);
	return *this;
}

int MoveRequest::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isStateSet(depth) ? 1 : 0;
	return out;
}

bool MoveRequest::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_state_id):
			return _isStateSet(depth);
		default:
			return false;
	}
}

bool MoveRequest::_isStateSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_state_isSet;
	} else {
		return _m_state_isSet && mgen::validation::validateFieldDeep(getState());
	}
}

bool MoveRequest::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isStateSet(mgen::SHALLOW) || _isStateSet(mgen::DEEP));
	}
}

bool MoveRequest::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const MoveRequest&>(other) == *this;
}

MoveRequest * MoveRequest::_deepCopy() const {
	return new MoveRequest(*this);
}

mgen::MGenBase * MoveRequest::_newInstance() {
	return new MoveRequest;
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
		  
const std::string& MoveRequest::_type_name() {
	static const std::string out("se.gigurra.aichallenge.games.go.MoveRequest");
	return out;
}

const std::vector<long long>& MoveRequest::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 7939421773867622329LL << 5106868930527964703LL << 2788340059497092150LL << 3781050221568920587LL;
	return out;
}

const std::vector<short>& MoveRequest::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -5220 << -13325 << -30682 << 14120;
	return out;
}

const std::vector<std::string>& MoveRequest::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.GameMessage" << "se.gigurra.aichallenge.games.go.GoMessage" << "se.gigurra.aichallenge.games.go.RequestFromServer" << "se.gigurra.aichallenge.games.go.MoveRequest";
	return out;
}

const std::vector<std::string>& MoveRequest::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "65w" << "y/M" << "iCY" << "Nyg";
	return out;
}

const std::string& MoveRequest::_type_ids_16bit_base64_string() {
	static const std::string out("xUI65wy/MiCYNyg");
	return out;
}

const std::string& MoveRequest::_type_id_16bit_base64() {
	static const std::string out("Nyg");
	return out;
}

const std::vector<mgen::Field>& MoveRequest::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_state_metadata();
	return out;
}

const mgen::Field& MoveRequest::_field_state_metadata() {
	static const mgen::Field out(15897, "state");
	return out;
}

} // End namespace go
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

