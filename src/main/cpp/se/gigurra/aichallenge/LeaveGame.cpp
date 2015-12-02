/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/LeaveGame.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {

LeaveGame::LeaveGame() {
}

LeaveGame::~LeaveGame() {
}

/* custom_methods_begin *//* custom_methods_end */

bool LeaveGame::operator==(const LeaveGame& other) const {
	return true;
}

bool LeaveGame::operator!=(const LeaveGame& other) const {
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
		  
const mgen::Field * LeaveGame::_fieldById(const short id) const {
	return 0;
}

const mgen::Field * LeaveGame::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta;
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long LeaveGame::_typeId() const {
	return _type_id;
}

const std::string& LeaveGame::_typeName() const {
	return _type_name();
}

const short LeaveGame::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& LeaveGame::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& LeaveGame::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& LeaveGame::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& LeaveGame::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& LeaveGame::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& LeaveGame::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& LeaveGame::_fieldMetadatas() const {
	return _field_metadatas();
}

LeaveGame& LeaveGame::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	return *this;
}

int LeaveGame::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	return out;
}

bool LeaveGame::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	return false;
}

bool LeaveGame::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool LeaveGame::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const LeaveGame&>(other) == *this;
}

LeaveGame * LeaveGame::_deepCopy() const {
	return new LeaveGame(*this);
}

mgen::MGenBase * LeaveGame::_newInstance() {
	return new LeaveGame;
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
		  
const std::string& LeaveGame::_type_name() {
	static const std::string out("se.gigurra.aichallenge.LeaveGame");
	return out;
}

const std::vector<long long>& LeaveGame::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 7939421773867622329LL << 2582770090956513515LL;
	return out;
}

const std::vector<short>& LeaveGame::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -5220 << 23904;
	return out;
}

const std::vector<std::string>& LeaveGame::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.GameMessage" << "se.gigurra.aichallenge.LeaveGame";
	return out;
}

const std::vector<std::string>& LeaveGame::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "65w" << "XWA";
	return out;
}

const std::string& LeaveGame::_type_ids_16bit_base64_string() {
	static const std::string out("xUI65wXWA");
	return out;
}

const std::string& LeaveGame::_type_id_16bit_base64() {
	static const std::string out("XWA");
	return out;
}

const std::vector<mgen::Field>& LeaveGame::_field_metadatas() {
	static const std::vector<mgen::Field> out;
	return out;
}

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

