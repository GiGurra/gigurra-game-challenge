/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/RestGetScoresReply.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {

RestGetScoresReply::RestGetScoresReply() : 
		_m_games_isSet(false) {
}

RestGetScoresReply::RestGetScoresReply(const std::vector<GamePlayed> & games) : 
		m_games(games),
		_m_games_isSet(true) {
}

RestGetScoresReply::~RestGetScoresReply() {
}

const std::vector<GamePlayed> & RestGetScoresReply::getGames() const {
	return m_games;
}

std::vector<GamePlayed> & RestGetScoresReply::getGamesMutable() {
	_m_games_isSet = true;
	return m_games;
}

RestGetScoresReply& RestGetScoresReply::setGames(const std::vector<GamePlayed> & games) {
	m_games = games;
	_m_games_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool RestGetScoresReply::hasGames() const {
	return _isGamesSet(mgen::SHALLOW);
}

RestGetScoresReply& RestGetScoresReply::unsetGames() {
	_setGamesSet(false, mgen::SHALLOW);
	return *this;
}

bool RestGetScoresReply::operator==(const RestGetScoresReply& other) const {
	return true
		 && _isGamesSet(mgen::SHALLOW) == other._isGamesSet(mgen::SHALLOW)
		 && getGames() == other.getGames();
}

bool RestGetScoresReply::operator!=(const RestGetScoresReply& other) const {
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
		  
const mgen::Field * RestGetScoresReply::_fieldById(const short id) const {
	switch (id) {
	case _field_games_id:
		return &_field_games_metadata();
	default:
		return 0;
	}
}

const mgen::Field * RestGetScoresReply::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("games", &RestGetScoresReply::_field_games_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long RestGetScoresReply::_typeId() const {
	return _type_id;
}

const std::string& RestGetScoresReply::_typeName() const {
	return _type_name();
}

const short RestGetScoresReply::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& RestGetScoresReply::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& RestGetScoresReply::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& RestGetScoresReply::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& RestGetScoresReply::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& RestGetScoresReply::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& RestGetScoresReply::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& RestGetScoresReply::_fieldMetadatas() const {
	return _field_metadatas();
}

RestGetScoresReply& RestGetScoresReply::_setGamesSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_games.clear();
	else if (depth == mgen::DEEP)
		mgen::validation::setFieldSetDeep(m_games);
	_m_games_isSet = state;
	return *this;
}

RestGetScoresReply& RestGetScoresReply::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setGamesSet(state, depth);
	return *this;
}

int RestGetScoresReply::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isGamesSet(depth) ? 1 : 0;
	return out;
}

bool RestGetScoresReply::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_games_id):
			return _isGamesSet(depth);
		default:
			return false;
	}
}

bool RestGetScoresReply::_isGamesSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_games_isSet;
	} else {
		return _m_games_isSet && mgen::validation::validateFieldDeep(getGames());
	}
}

bool RestGetScoresReply::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isGamesSet(mgen::SHALLOW) || _isGamesSet(mgen::DEEP));
	}
}

bool RestGetScoresReply::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const RestGetScoresReply&>(other) == *this;
}

RestGetScoresReply * RestGetScoresReply::_deepCopy() const {
	return new RestGetScoresReply(*this);
}

mgen::MGenBase * RestGetScoresReply::_newInstance() {
	return new RestGetScoresReply;
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
		  
const std::string& RestGetScoresReply::_type_name() {
	static const std::string out("se.gigurra.aichallenge.RestGetScoresReply");
	return out;
}

const std::vector<long long>& RestGetScoresReply::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 9040306092979076215LL << 7553512035079753928LL;
	return out;
}

const std::vector<short>& RestGetScoresReply::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -16268 << 2943;
	return out;
}

const std::vector<std::string>& RestGetScoresReply::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.RestMessage" << "se.gigurra.aichallenge.RestGetScoresReply";
	return out;
}

const std::vector<std::string>& RestGetScoresReply::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "wHQ" << "C38";
	return out;
}

const std::string& RestGetScoresReply::_type_ids_16bit_base64_string() {
	static const std::string out("xUIwHQC38");
	return out;
}

const std::string& RestGetScoresReply::_type_id_16bit_base64() {
	static const std::string out("C38");
	return out;
}

const std::vector<mgen::Field>& RestGetScoresReply::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_games_metadata();
	return out;
}

const mgen::Field& RestGetScoresReply::_field_games_metadata() {
	static const mgen::Field out(9075, "games");
	return out;
}

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

