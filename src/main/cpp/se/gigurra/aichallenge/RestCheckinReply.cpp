/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/RestCheckinReply.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {

RestCheckinReply::RestCheckinReply() : 
		_m_session_isSet(false) {
}

RestCheckinReply::RestCheckinReply(const std::string& session) : 
		m_session(session),
		_m_session_isSet(true) {
}

RestCheckinReply::~RestCheckinReply() {
}

const std::string& RestCheckinReply::getSession() const {
	return m_session;
}

std::string& RestCheckinReply::getSessionMutable() {
	_m_session_isSet = true;
	return m_session;
}

RestCheckinReply& RestCheckinReply::setSession(const std::string& session) {
	m_session = session;
	_m_session_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool RestCheckinReply::hasSession() const {
	return _isSessionSet(mgen::SHALLOW);
}

RestCheckinReply& RestCheckinReply::unsetSession() {
	_setSessionSet(false, mgen::SHALLOW);
	return *this;
}

bool RestCheckinReply::operator==(const RestCheckinReply& other) const {
	return true
		 && _isSessionSet(mgen::SHALLOW) == other._isSessionSet(mgen::SHALLOW)
		 && getSession() == other.getSession();
}

bool RestCheckinReply::operator!=(const RestCheckinReply& other) const {
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
		  
const mgen::Field * RestCheckinReply::_fieldById(const short id) const {
	switch (id) {
	case _field_session_id:
		return &_field_session_metadata();
	default:
		return 0;
	}
}

const mgen::Field * RestCheckinReply::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("session", &RestCheckinReply::_field_session_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long RestCheckinReply::_typeId() const {
	return _type_id;
}

const std::string& RestCheckinReply::_typeName() const {
	return _type_name();
}

const short RestCheckinReply::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& RestCheckinReply::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& RestCheckinReply::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& RestCheckinReply::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& RestCheckinReply::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& RestCheckinReply::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& RestCheckinReply::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& RestCheckinReply::_fieldMetadatas() const {
	return _field_metadatas();
}

RestCheckinReply& RestCheckinReply::_setSessionSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_session = "";
	_m_session_isSet = state;
	return *this;
}

RestCheckinReply& RestCheckinReply::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setSessionSet(state, depth);
	return *this;
}

int RestCheckinReply::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isSessionSet(depth) ? 1 : 0;
	return out;
}

bool RestCheckinReply::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_session_id):
			return _isSessionSet(depth);
		default:
			return false;
	}
}

bool RestCheckinReply::_isSessionSet(const mgen::FieldSetDepth depth) const {
	return _m_session_isSet;
}

bool RestCheckinReply::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool RestCheckinReply::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const RestCheckinReply&>(other) == *this;
}

RestCheckinReply * RestCheckinReply::_deepCopy() const {
	return new RestCheckinReply(*this);
}

mgen::MGenBase * RestCheckinReply::_newInstance() {
	return new RestCheckinReply;
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
		  
const std::string& RestCheckinReply::_type_name() {
	static const std::string out("se.gigurra.aichallenge.RestCheckinReply");
	return out;
}

const std::vector<long long>& RestCheckinReply::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 9040306092979076215LL << 4691145557295699189LL;
	return out;
}

const std::vector<short>& RestCheckinReply::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -16268 << -26244;
	return out;
}

const std::vector<std::string>& RestCheckinReply::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.RestMessage" << "se.gigurra.aichallenge.RestCheckinReply";
	return out;
}

const std::vector<std::string>& RestCheckinReply::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "wHQ" << "mXw";
	return out;
}

const std::string& RestCheckinReply::_type_ids_16bit_base64_string() {
	static const std::string out("xUIwHQmXw");
	return out;
}

const std::string& RestCheckinReply::_type_id_16bit_base64() {
	static const std::string out("mXw");
	return out;
}

const std::vector<mgen::Field>& RestCheckinReply::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_session_metadata();
	return out;
}

const mgen::Field& RestCheckinReply::_field_session_metadata() {
	static const mgen::Field out(2127, "session");
	return out;
}

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

