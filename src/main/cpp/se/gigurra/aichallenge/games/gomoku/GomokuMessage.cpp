/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/games/gomoku/GomokuMessage.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace gomoku {

GomokuMessage::GomokuMessage() {
}

GomokuMessage::~GomokuMessage() {
}

/* custom_methods_begin *//* custom_methods_end */

bool GomokuMessage::operator==(const GomokuMessage& other) const {
	return true;
}

bool GomokuMessage::operator!=(const GomokuMessage& other) const {
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
		  
const mgen::Field * GomokuMessage::_fieldById(const short id) const {
	return 0;
}

const mgen::Field * GomokuMessage::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta;
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long GomokuMessage::_typeId() const {
	return _type_id;
}

const std::string& GomokuMessage::_typeName() const {
	return _type_name();
}

const short GomokuMessage::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& GomokuMessage::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& GomokuMessage::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& GomokuMessage::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& GomokuMessage::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& GomokuMessage::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& GomokuMessage::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& GomokuMessage::_fieldMetadatas() const {
	return _field_metadatas();
}

GomokuMessage& GomokuMessage::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	return *this;
}

int GomokuMessage::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	return out;
}

bool GomokuMessage::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	return false;
}

bool GomokuMessage::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool GomokuMessage::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const GomokuMessage&>(other) == *this;
}

GomokuMessage * GomokuMessage::_deepCopy() const {
	return new GomokuMessage(*this);
}

mgen::MGenBase * GomokuMessage::_newInstance() {
	return new GomokuMessage;
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
		  
const std::string& GomokuMessage::_type_name() {
	static const std::string out("se.gigurra.aichallenge.games.gomoku.GomokuMessage");
	return out;
}

const std::vector<long long>& GomokuMessage::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 7939421773867622329LL << 669011708587813573LL;
	return out;
}

const std::vector<short>& GomokuMessage::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -5220 << 32152;
	return out;
}

const std::vector<std::string>& GomokuMessage::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.GameMessage" << "se.gigurra.aichallenge.games.gomoku.GomokuMessage";
	return out;
}

const std::vector<std::string>& GomokuMessage::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "65w" << "fZg";
	return out;
}

const std::string& GomokuMessage::_type_ids_16bit_base64_string() {
	static const std::string out("xUI65wfZg");
	return out;
}

const std::string& GomokuMessage::_type_id_16bit_base64() {
	static const std::string out("fZg");
	return out;
}

const std::vector<mgen::Field>& GomokuMessage::_field_metadatas() {
	static const std::vector<mgen::Field> out;
	return out;
}

} // End namespace gomoku
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

