/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/RestListAvailReply.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {

RestListAvailReply::RestListAvailReply() : 
		_m_messageTypes_isSet(false) {
}

RestListAvailReply::RestListAvailReply(const std::vector<std::string> & messageTypes) : 
		m_messageTypes(messageTypes),
		_m_messageTypes_isSet(true) {
}

RestListAvailReply::~RestListAvailReply() {
}

const std::vector<std::string> & RestListAvailReply::getMessageTypes() const {
	return m_messageTypes;
}

std::vector<std::string> & RestListAvailReply::getMessageTypesMutable() {
	_m_messageTypes_isSet = true;
	return m_messageTypes;
}

RestListAvailReply& RestListAvailReply::setMessageTypes(const std::vector<std::string> & messageTypes) {
	m_messageTypes = messageTypes;
	_m_messageTypes_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool RestListAvailReply::hasMessageTypes() const {
	return _isMessageTypesSet(mgen::SHALLOW);
}

RestListAvailReply& RestListAvailReply::unsetMessageTypes() {
	_setMessageTypesSet(false, mgen::SHALLOW);
	return *this;
}

bool RestListAvailReply::operator==(const RestListAvailReply& other) const {
	return true
		 && _isMessageTypesSet(mgen::SHALLOW) == other._isMessageTypesSet(mgen::SHALLOW)
		 && getMessageTypes() == other.getMessageTypes();
}

bool RestListAvailReply::operator!=(const RestListAvailReply& other) const {
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
		  
const mgen::Field * RestListAvailReply::_fieldById(const short id) const {
	switch (id) {
	case _field_messageTypes_id:
		return &_field_messageTypes_metadata();
	default:
		return 0;
	}
}

const mgen::Field * RestListAvailReply::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("messageTypes", &RestListAvailReply::_field_messageTypes_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long RestListAvailReply::_typeId() const {
	return _type_id;
}

const std::string& RestListAvailReply::_typeName() const {
	return _type_name();
}

const short RestListAvailReply::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& RestListAvailReply::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& RestListAvailReply::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& RestListAvailReply::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& RestListAvailReply::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& RestListAvailReply::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& RestListAvailReply::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& RestListAvailReply::_fieldMetadatas() const {
	return _field_metadatas();
}

RestListAvailReply& RestListAvailReply::_setMessageTypesSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_messageTypes.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_messageTypes);
	_m_messageTypes_isSet = state;
	return *this;
}

RestListAvailReply& RestListAvailReply::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setMessageTypesSet(state, depth);
	return *this;
}

int RestListAvailReply::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isMessageTypesSet(depth) ? 1 : 0;
	return out;
}

bool RestListAvailReply::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_messageTypes_id):
			return _isMessageTypesSet(depth);
		default:
			return false;
	}
}

bool RestListAvailReply::_isMessageTypesSet(const mgen::FieldSetDepth depth) const {
	return _m_messageTypes_isSet;
}

bool RestListAvailReply::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool RestListAvailReply::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const RestListAvailReply&>(other) == *this;
}

RestListAvailReply * RestListAvailReply::_deepCopy() const {
	return new RestListAvailReply(*this);
}

mgen::MGenBase * RestListAvailReply::_newInstance() {
	return new RestListAvailReply;
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
		  
const std::string& RestListAvailReply::_type_name() {
	static const std::string out("se.gigurra.aichallenge.RestListAvailReply");
	return out;
}

const std::vector<long long>& RestListAvailReply::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 9040306092979076215LL << 1106664312393657088LL;
	return out;
}

const std::vector<short>& RestListAvailReply::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -16268 << -6588;
	return out;
}

const std::vector<std::string>& RestListAvailReply::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.RestMessage" << "se.gigurra.aichallenge.RestListAvailReply";
	return out;
}

const std::vector<std::string>& RestListAvailReply::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "wHQ" << "5kQ";
	return out;
}

const std::string& RestListAvailReply::_type_ids_16bit_base64_string() {
	static const std::string out("xUIwHQ5kQ");
	return out;
}

const std::string& RestListAvailReply::_type_id_16bit_base64() {
	static const std::string out("5kQ");
	return out;
}

const std::vector<mgen::Field>& RestListAvailReply::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_messageTypes_metadata();
	return out;
}

const mgen::Field& RestListAvailReply::_field_messageTypes_metadata() {
	static const mgen::Field out(-24999, "messageTypes");
	return out;
}

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

