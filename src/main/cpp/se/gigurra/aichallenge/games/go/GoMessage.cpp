/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/games/go/GoMessage.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace go {

GoMessage::GoMessage() {
}

GoMessage::~GoMessage() {
}

/* custom_methods_begin *//* custom_methods_end */

bool GoMessage::operator==(const GoMessage& other) const {
	return true;
}

bool GoMessage::operator!=(const GoMessage& other) const {
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
		  
const mgen::Field * GoMessage::_fieldById(const short id) const {
	return 0;
}

const mgen::Field * GoMessage::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta;
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long GoMessage::_typeId() const {
	return _type_id;
}

const std::string& GoMessage::_typeName() const {
	return _type_name();
}

const short GoMessage::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& GoMessage::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& GoMessage::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& GoMessage::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& GoMessage::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& GoMessage::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& GoMessage::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& GoMessage::_fieldMetadatas() const {
	return _field_metadatas();
}

GoMessage& GoMessage::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	return *this;
}

int GoMessage::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	return out;
}

bool GoMessage::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	return false;
}

bool GoMessage::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool GoMessage::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const GoMessage&>(other) == *this;
}

GoMessage * GoMessage::_deepCopy() const {
	return new GoMessage(*this);
}

mgen::MGenBase * GoMessage::_newInstance() {
	return new GoMessage;
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
		  
const std::string& GoMessage::_type_name() {
	static const std::string out("se.gigurra.aichallenge.games.go.GoMessage");
	return out;
}

const std::vector<long long>& GoMessage::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 7939421773867622329LL << 5106868930527964703LL;
	return out;
}

const std::vector<short>& GoMessage::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -5220 << -13325;
	return out;
}

const std::vector<std::string>& GoMessage::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.GameMessage" << "se.gigurra.aichallenge.games.go.GoMessage";
	return out;
}

const std::vector<std::string>& GoMessage::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "65w" << "y/M";
	return out;
}

const std::string& GoMessage::_type_ids_16bit_base64_string() {
	static const std::string out("xUI65wy/M");
	return out;
}

const std::string& GoMessage::_type_id_16bit_base64() {
	static const std::string out("y/M");
	return out;
}

const std::vector<mgen::Field>& GoMessage::_field_metadatas() {
	static const std::vector<mgen::Field> out;
	return out;
}

} // End namespace go
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

