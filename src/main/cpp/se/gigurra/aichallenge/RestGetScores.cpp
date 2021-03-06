/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/RestGetScores.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {

RestGetScores::RestGetScores() {
}

RestGetScores::~RestGetScores() {
}

/* custom_methods_begin *//* custom_methods_end */

bool RestGetScores::operator==(const RestGetScores& other) const {
	return true;
}

bool RestGetScores::operator!=(const RestGetScores& other) const {
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
		  
const mgen::Field * RestGetScores::_fieldById(const short id) const {
	return 0;
}

const mgen::Field * RestGetScores::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta;
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long RestGetScores::_typeId() const {
	return _type_id;
}

const std::string& RestGetScores::_typeName() const {
	return _type_name();
}

const short RestGetScores::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& RestGetScores::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& RestGetScores::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& RestGetScores::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& RestGetScores::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& RestGetScores::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& RestGetScores::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& RestGetScores::_fieldMetadatas() const {
	return _field_metadatas();
}

RestGetScores& RestGetScores::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	return *this;
}

int RestGetScores::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	return out;
}

bool RestGetScores::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	return false;
}

bool RestGetScores::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool RestGetScores::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const RestGetScores&>(other) == *this;
}

RestGetScores * RestGetScores::_deepCopy() const {
	return new RestGetScores(*this);
}

mgen::MGenBase * RestGetScores::_newInstance() {
	return new RestGetScores;
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
		  
const std::string& RestGetScores::_type_name() {
	static const std::string out("se.gigurra.aichallenge.RestGetScores");
	return out;
}

const std::vector<long long>& RestGetScores::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 9040306092979076215LL << 6988356680270495347LL;
	return out;
}

const std::vector<short>& RestGetScores::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -16268 << 22027;
	return out;
}

const std::vector<std::string>& RestGetScores::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.RestMessage" << "se.gigurra.aichallenge.RestGetScores";
	return out;
}

const std::vector<std::string>& RestGetScores::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "wHQ" << "Vgs";
	return out;
}

const std::string& RestGetScores::_type_ids_16bit_base64_string() {
	static const std::string out("xUIwHQVgs");
	return out;
}

const std::string& RestGetScores::_type_id_16bit_base64() {
	static const std::string out("Vgs");
	return out;
}

const std::vector<mgen::Field>& RestGetScores::_field_metadatas() {
	static const std::vector<mgen::Field> out;
	return out;
}

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

