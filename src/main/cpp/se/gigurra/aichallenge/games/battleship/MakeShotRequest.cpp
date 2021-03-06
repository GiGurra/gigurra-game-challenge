/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/games/battleship/MakeShotRequest.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace battleship {

MakeShotRequest::MakeShotRequest() {
}

MakeShotRequest::~MakeShotRequest() {
}

/* custom_methods_begin *//* custom_methods_end */

bool MakeShotRequest::operator==(const MakeShotRequest& other) const {
	return true;
}

bool MakeShotRequest::operator!=(const MakeShotRequest& other) const {
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
		  
const mgen::Field * MakeShotRequest::_fieldById(const short id) const {
	return 0;
}

const mgen::Field * MakeShotRequest::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta;
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long MakeShotRequest::_typeId() const {
	return _type_id;
}

const std::string& MakeShotRequest::_typeName() const {
	return _type_name();
}

const short MakeShotRequest::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& MakeShotRequest::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& MakeShotRequest::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& MakeShotRequest::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& MakeShotRequest::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& MakeShotRequest::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& MakeShotRequest::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& MakeShotRequest::_fieldMetadatas() const {
	return _field_metadatas();
}

MakeShotRequest& MakeShotRequest::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	return *this;
}

int MakeShotRequest::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	return out;
}

bool MakeShotRequest::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	return false;
}

bool MakeShotRequest::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool MakeShotRequest::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const MakeShotRequest&>(other) == *this;
}

MakeShotRequest * MakeShotRequest::_deepCopy() const {
	return new MakeShotRequest(*this);
}

mgen::MGenBase * MakeShotRequest::_newInstance() {
	return new MakeShotRequest;
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
		  
const std::string& MakeShotRequest::_type_name() {
	static const std::string out("se.gigurra.aichallenge.games.battleship.MakeShotRequest");
	return out;
}

const std::vector<long long>& MakeShotRequest::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 7939421773867622329LL << 7379711854769594968LL << 8739336178944539833LL << 6690116801572131237LL;
	return out;
}

const std::vector<short>& MakeShotRequest::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -5220 << 2093 << -32442 << 28364;
	return out;
}

const std::vector<std::string>& MakeShotRequest::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.GameMessage" << "se.gigurra.aichallenge.games.battleship.BattleshipMessage" << "se.gigurra.aichallenge.games.battleship.RequestFromServer" << "se.gigurra.aichallenge.games.battleship.MakeShotRequest";
	return out;
}

const std::vector<std::string>& MakeShotRequest::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "65w" << "CC0" << "gUY" << "bsw";
	return out;
}

const std::string& MakeShotRequest::_type_ids_16bit_base64_string() {
	static const std::string out("xUI65wCC0gUYbsw");
	return out;
}

const std::string& MakeShotRequest::_type_id_16bit_base64() {
	static const std::string out("bsw");
	return out;
}

const std::vector<mgen::Field>& MakeShotRequest::_field_metadatas() {
	static const std::vector<mgen::Field> out;
	return out;
}

} // End namespace battleship
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

