/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/RestListAvail.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {

RestListAvail::RestListAvail() {
}

RestListAvail::~RestListAvail() {
}

/* custom_methods_begin *//* custom_methods_end */

bool RestListAvail::operator==(const RestListAvail& other) const {
	return true;
}

bool RestListAvail::operator!=(const RestListAvail& other) const {
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
		  
const mgen::Field * RestListAvail::_fieldById(const short id) const {
	return 0;
}

const mgen::Field * RestListAvail::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta;
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long RestListAvail::_typeId() const {
	return _type_id;
}

const std::string& RestListAvail::_typeName() const {
	return _type_name();
}

const short RestListAvail::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& RestListAvail::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& RestListAvail::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& RestListAvail::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& RestListAvail::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& RestListAvail::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& RestListAvail::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& RestListAvail::_fieldMetadatas() const {
	return _field_metadatas();
}

RestListAvail& RestListAvail::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	return *this;
}

int RestListAvail::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	return out;
}

bool RestListAvail::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	return false;
}

bool RestListAvail::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool RestListAvail::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const RestListAvail&>(other) == *this;
}

RestListAvail * RestListAvail::_deepCopy() const {
	return new RestListAvail(*this);
}

mgen::MGenBase * RestListAvail::_newInstance() {
	return new RestListAvail;
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
		  
const std::string& RestListAvail::_type_name() {
	static const std::string out("se.gigurra.aichallenge.RestListAvail");
	return out;
}

const std::vector<long long>& RestListAvail::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 9040306092979076215LL << 7516963972044982950LL;
	return out;
}

const std::vector<short>& RestListAvail::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -16268 << -16531;
	return out;
}

const std::vector<std::string>& RestListAvail::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.RestMessage" << "se.gigurra.aichallenge.RestListAvail";
	return out;
}

const std::vector<std::string>& RestListAvail::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "wHQ" << "v20";
	return out;
}

const std::string& RestListAvail::_type_ids_16bit_base64_string() {
	static const std::string out("xUIwHQv20");
	return out;
}

const std::string& RestListAvail::_type_id_16bit_base64() {
	static const std::string out("v20");
	return out;
}

const std::vector<mgen::Field>& RestListAvail::_field_metadatas() {
	static const std::vector<mgen::Field> out;
	return out;
}

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

