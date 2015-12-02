/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/RestPostOK.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {

RestPostOK::RestPostOK() {
}

RestPostOK::~RestPostOK() {
}

/* custom_methods_begin *//* custom_methods_end */

bool RestPostOK::operator==(const RestPostOK& other) const {
	return true;
}

bool RestPostOK::operator!=(const RestPostOK& other) const {
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
		  
const mgen::Field * RestPostOK::_fieldById(const short id) const {
	return 0;
}

const mgen::Field * RestPostOK::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta;
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long RestPostOK::_typeId() const {
	return _type_id;
}

const std::string& RestPostOK::_typeName() const {
	return _type_name();
}

const short RestPostOK::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& RestPostOK::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& RestPostOK::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& RestPostOK::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& RestPostOK::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& RestPostOK::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& RestPostOK::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& RestPostOK::_fieldMetadatas() const {
	return _field_metadatas();
}

RestPostOK& RestPostOK::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	return *this;
}

int RestPostOK::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	return out;
}

bool RestPostOK::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	return false;
}

bool RestPostOK::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool RestPostOK::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const RestPostOK&>(other) == *this;
}

RestPostOK * RestPostOK::_deepCopy() const {
	return new RestPostOK(*this);
}

mgen::MGenBase * RestPostOK::_newInstance() {
	return new RestPostOK;
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
		  
const std::string& RestPostOK::_type_name() {
	static const std::string out("se.gigurra.aichallenge.RestPostOK");
	return out;
}

const std::vector<long long>& RestPostOK::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 9040306092979076215LL << 7908472826321331793LL;
	return out;
}

const std::vector<short>& RestPostOK::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -16268 << -13984;
	return out;
}

const std::vector<std::string>& RestPostOK::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.RestMessage" << "se.gigurra.aichallenge.RestPostOK";
	return out;
}

const std::vector<std::string>& RestPostOK::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "wHQ" << "yWA";
	return out;
}

const std::string& RestPostOK::_type_ids_16bit_base64_string() {
	static const std::string out("xUIwHQyWA");
	return out;
}

const std::string& RestPostOK::_type_id_16bit_base64() {
	static const std::string out("yWA");
	return out;
}

const std::vector<mgen::Field>& RestPostOK::_field_metadatas() {
	static const std::vector<mgen::Field> out;
	return out;
}

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

