/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/RestGetMessagesReply.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {

RestGetMessagesReply::RestGetMessagesReply() : 
		_m_messages_isSet(false) {
}

RestGetMessagesReply::RestGetMessagesReply(const std::vector<Message> & messages) : 
		m_messages(messages),
		_m_messages_isSet(true) {
}

RestGetMessagesReply::~RestGetMessagesReply() {
}

const std::vector<Message> & RestGetMessagesReply::getMessages() const {
	return m_messages;
}

std::vector<Message> & RestGetMessagesReply::getMessagesMutable() {
	_m_messages_isSet = true;
	return m_messages;
}

RestGetMessagesReply& RestGetMessagesReply::setMessages(const std::vector<Message> & messages) {
	m_messages = messages;
	_m_messages_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool RestGetMessagesReply::hasMessages() const {
	return _isMessagesSet(mgen::SHALLOW);
}

RestGetMessagesReply& RestGetMessagesReply::unsetMessages() {
	_setMessagesSet(false, mgen::SHALLOW);
	return *this;
}

bool RestGetMessagesReply::operator==(const RestGetMessagesReply& other) const {
	return true
		 && _isMessagesSet(mgen::SHALLOW) == other._isMessagesSet(mgen::SHALLOW)
		 && getMessages() == other.getMessages();
}

bool RestGetMessagesReply::operator!=(const RestGetMessagesReply& other) const {
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
		  
const mgen::Field * RestGetMessagesReply::_fieldById(const short id) const {
	switch (id) {
	case _field_messages_id:
		return &_field_messages_metadata();
	default:
		return 0;
	}
}

const mgen::Field * RestGetMessagesReply::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("messages", &RestGetMessagesReply::_field_messages_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long RestGetMessagesReply::_typeId() const {
	return _type_id;
}

const std::string& RestGetMessagesReply::_typeName() const {
	return _type_name();
}

const short RestGetMessagesReply::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& RestGetMessagesReply::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& RestGetMessagesReply::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& RestGetMessagesReply::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& RestGetMessagesReply::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& RestGetMessagesReply::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& RestGetMessagesReply::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& RestGetMessagesReply::_fieldMetadatas() const {
	return _field_metadatas();
}

RestGetMessagesReply& RestGetMessagesReply::_setMessagesSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_messages.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_messages);
	_m_messages_isSet = state;
	return *this;
}

RestGetMessagesReply& RestGetMessagesReply::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setMessagesSet(state, depth);
	return *this;
}

int RestGetMessagesReply::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isMessagesSet(depth) ? 1 : 0;
	return out;
}

bool RestGetMessagesReply::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_messages_id):
			return _isMessagesSet(depth);
		default:
			return false;
	}
}

bool RestGetMessagesReply::_isMessagesSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_messages_isSet;
	} else {
		return _m_messages_isSet && mgen::validation::validateFieldDeep(getMessages());
	}
}

bool RestGetMessagesReply::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isMessagesSet(mgen::SHALLOW) || _isMessagesSet(mgen::DEEP));
	}
}

bool RestGetMessagesReply::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const RestGetMessagesReply&>(other) == *this;
}

RestGetMessagesReply * RestGetMessagesReply::_deepCopy() const {
	return new RestGetMessagesReply(*this);
}

mgen::MGenBase * RestGetMessagesReply::_newInstance() {
	return new RestGetMessagesReply;
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
		  
const std::string& RestGetMessagesReply::_type_name() {
	static const std::string out("se.gigurra.aichallenge.RestGetMessagesReply");
	return out;
}

const std::vector<long long>& RestGetMessagesReply::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 9040306092979076215LL << 2205916529773378471LL;
	return out;
}

const std::vector<short>& RestGetMessagesReply::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -16268 << -1478;
	return out;
}

const std::vector<std::string>& RestGetMessagesReply::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.RestMessage" << "se.gigurra.aichallenge.RestGetMessagesReply";
	return out;
}

const std::vector<std::string>& RestGetMessagesReply::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "wHQ" << "+jo";
	return out;
}

const std::string& RestGetMessagesReply::_type_ids_16bit_base64_string() {
	static const std::string out("xUIwHQ+jo");
	return out;
}

const std::string& RestGetMessagesReply::_type_id_16bit_base64() {
	static const std::string out("+jo");
	return out;
}

const std::vector<mgen::Field>& RestGetMessagesReply::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_messages_metadata();
	return out;
}

const mgen::Field& RestGetMessagesReply::_field_messages_metadata() {
	static const mgen::Field out(-11327, "messages");
	return out;
}

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

