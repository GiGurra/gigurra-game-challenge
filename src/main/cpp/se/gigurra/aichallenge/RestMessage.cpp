/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/RestMessage.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {

RestMessage::RestMessage() {
}

RestMessage::~RestMessage() {
}

/* custom_methods_begin *//* custom_methods_end */

bool RestMessage::operator==(const RestMessage& other) const {
	return true;
}

bool RestMessage::operator!=(const RestMessage& other) const {
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
		  
const mgen::Field * RestMessage::_fieldById(const short id) const {
	return 0;
}

const mgen::Field * RestMessage::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta;
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long RestMessage::_typeId() const {
	return _type_id;
}

const std::string& RestMessage::_typeName() const {
	return _type_name();
}

const short RestMessage::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& RestMessage::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& RestMessage::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& RestMessage::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& RestMessage::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& RestMessage::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& RestMessage::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& RestMessage::_fieldMetadatas() const {
	return _field_metadatas();
}

RestMessage& RestMessage::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	return *this;
}

int RestMessage::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	return out;
}

bool RestMessage::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	return false;
}

bool RestMessage::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool RestMessage::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const RestMessage&>(other) == *this;
}

RestMessage * RestMessage::_deepCopy() const {
	return new RestMessage(*this);
}

mgen::MGenBase * RestMessage::_newInstance() {
	return new RestMessage;
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
		  
const std::string& RestMessage::_type_name() {
	static const std::string out("se.gigurra.aichallenge.RestMessage");
	return out;
}

const std::vector<long long>& RestMessage::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 9040306092979076215LL;
	return out;
}

const std::vector<short>& RestMessage::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -16268;
	return out;
}

const std::vector<std::string>& RestMessage::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.RestMessage";
	return out;
}

const std::vector<std::string>& RestMessage::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "wHQ";
	return out;
}

const std::string& RestMessage::_type_ids_16bit_base64_string() {
	static const std::string out("xUIwHQ");
	return out;
}

const std::string& RestMessage::_type_id_16bit_base64() {
	static const std::string out("wHQ");
	return out;
}

const std::vector<mgen::Field>& RestMessage::_field_metadatas() {
	static const std::vector<mgen::Field> out;
	return out;
}

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

