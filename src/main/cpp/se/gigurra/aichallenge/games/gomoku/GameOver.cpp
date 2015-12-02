/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/games/gomoku/GameOver.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace gomoku {

GameOver::GameOver() : 
		_m_reason_isSet(false),
		_m_winner_isSet(false),
		_m_loser_isSet(false),
		_m_endState_isSet(false) {
}

GameOver::GameOver(const std::string& reason, 
			const std::string& winner, 
			const std::string& loser, 
			const GameState& endState) : 
		m_reason(reason),
		m_winner(winner),
		m_loser(loser),
		m_endState(endState),
		_m_reason_isSet(true),
		_m_winner_isSet(true),
		_m_loser_isSet(true),
		_m_endState_isSet(true) {
}

GameOver::~GameOver() {
}

const std::string& GameOver::getReason() const {
	return m_reason;
}

const std::string& GameOver::getWinner() const {
	return m_winner;
}

const std::string& GameOver::getLoser() const {
	return m_loser;
}

const GameState& GameOver::getEndState() const {
	return m_endState;
}

std::string& GameOver::getReasonMutable() {
	_m_reason_isSet = true;
	return m_reason;
}

std::string& GameOver::getWinnerMutable() {
	_m_winner_isSet = true;
	return m_winner;
}

std::string& GameOver::getLoserMutable() {
	_m_loser_isSet = true;
	return m_loser;
}

GameState& GameOver::getEndStateMutable() {
	_m_endState_isSet = true;
	return m_endState;
}

GameOver& GameOver::setReason(const std::string& reason) {
	m_reason = reason;
	_m_reason_isSet = true;
	return *this;
}

GameOver& GameOver::setWinner(const std::string& winner) {
	m_winner = winner;
	_m_winner_isSet = true;
	return *this;
}

GameOver& GameOver::setLoser(const std::string& loser) {
	m_loser = loser;
	_m_loser_isSet = true;
	return *this;
}

GameOver& GameOver::setEndState(const GameState& endState) {
	m_endState = endState;
	_m_endState_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool GameOver::hasReason() const {
	return _isReasonSet(mgen::SHALLOW);
}

bool GameOver::hasWinner() const {
	return _isWinnerSet(mgen::SHALLOW);
}

bool GameOver::hasLoser() const {
	return _isLoserSet(mgen::SHALLOW);
}

bool GameOver::hasEndState() const {
	return _isEndStateSet(mgen::SHALLOW);
}

GameOver& GameOver::unsetReason() {
	_setReasonSet(false, mgen::SHALLOW);
	return *this;
}

GameOver& GameOver::unsetWinner() {
	_setWinnerSet(false, mgen::SHALLOW);
	return *this;
}

GameOver& GameOver::unsetLoser() {
	_setLoserSet(false, mgen::SHALLOW);
	return *this;
}

GameOver& GameOver::unsetEndState() {
	_setEndStateSet(false, mgen::SHALLOW);
	return *this;
}

bool GameOver::operator==(const GameOver& other) const {
	return true
		 && _isReasonSet(mgen::SHALLOW) == other._isReasonSet(mgen::SHALLOW)
		 && _isWinnerSet(mgen::SHALLOW) == other._isWinnerSet(mgen::SHALLOW)
		 && _isLoserSet(mgen::SHALLOW) == other._isLoserSet(mgen::SHALLOW)
		 && _isEndStateSet(mgen::SHALLOW) == other._isEndStateSet(mgen::SHALLOW)
		 && getReason() == other.getReason()
		 && getWinner() == other.getWinner()
		 && getLoser() == other.getLoser()
		 && getEndState() == other.getEndState();
}

bool GameOver::operator!=(const GameOver& other) const {
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
		  
const mgen::Field * GameOver::_fieldById(const short id) const {
	switch (id) {
	case _field_reason_id:
		return &_field_reason_metadata();
	case _field_winner_id:
		return &_field_winner_metadata();
	case _field_loser_id:
		return &_field_loser_metadata();
	case _field_endState_id:
		return &_field_endState_metadata();
	default:
		return 0;
	}
}

const mgen::Field * GameOver::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("reason", &GameOver::_field_reason_metadata())("winner", &GameOver::_field_winner_metadata())("loser", &GameOver::_field_loser_metadata())("endState", &GameOver::_field_endState_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long GameOver::_typeId() const {
	return _type_id;
}

const std::string& GameOver::_typeName() const {
	return _type_name();
}

const short GameOver::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& GameOver::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& GameOver::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& GameOver::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& GameOver::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& GameOver::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& GameOver::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& GameOver::_fieldMetadatas() const {
	return _field_metadatas();
}

GameOver& GameOver::_setReasonSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_reason = "";
	_m_reason_isSet = state;
	return *this;
}

GameOver& GameOver::_setWinnerSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_winner = "";
	_m_winner_isSet = state;
	return *this;
}

GameOver& GameOver::_setLoserSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_loser = "";
	_m_loser_isSet = state;
	return *this;
}

GameOver& GameOver::_setEndStateSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_endState._setAllFieldsSet(state, mgen::DEEP);
	_m_endState_isSet = state;
	return *this;
}

GameOver& GameOver::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setReasonSet(state, depth);
	_setWinnerSet(state, depth);
	_setLoserSet(state, depth);
	_setEndStateSet(state, depth);
	return *this;
}

int GameOver::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isReasonSet(depth) ? 1 : 0;
	out += _isWinnerSet(depth) ? 1 : 0;
	out += _isLoserSet(depth) ? 1 : 0;
	out += _isEndStateSet(depth) ? 1 : 0;
	return out;
}

bool GameOver::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_reason_id):
			return _isReasonSet(depth);
		case (_field_winner_id):
			return _isWinnerSet(depth);
		case (_field_loser_id):
			return _isLoserSet(depth);
		case (_field_endState_id):
			return _isEndStateSet(depth);
		default:
			return false;
	}
}

bool GameOver::_isReasonSet(const mgen::FieldSetDepth depth) const {
	return _m_reason_isSet;
}

bool GameOver::_isWinnerSet(const mgen::FieldSetDepth depth) const {
	return _m_winner_isSet;
}

bool GameOver::_isLoserSet(const mgen::FieldSetDepth depth) const {
	return _m_loser_isSet;
}

bool GameOver::_isEndStateSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_endState_isSet;
	} else {
		return _m_endState_isSet && mgen::validation::validateFieldDeep(getEndState());
	}
}

bool GameOver::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isEndStateSet(mgen::SHALLOW) || _isEndStateSet(mgen::DEEP));
	}
}

bool GameOver::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const GameOver&>(other) == *this;
}

GameOver * GameOver::_deepCopy() const {
	return new GameOver(*this);
}

mgen::MGenBase * GameOver::_newInstance() {
	return new GameOver;
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
		  
const std::string& GameOver::_type_name() {
	static const std::string out("se.gigurra.aichallenge.games.gomoku.GameOver");
	return out;
}

const std::vector<long long>& GameOver::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 7939421773867622329LL << 669011708587813573LL << 910702424229933393LL;
	return out;
}

const std::vector<short>& GameOver::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -5220 << 32152 << 21266;
	return out;
}

const std::vector<std::string>& GameOver::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.GameMessage" << "se.gigurra.aichallenge.games.gomoku.GomokuMessage" << "se.gigurra.aichallenge.games.gomoku.GameOver";
	return out;
}

const std::vector<std::string>& GameOver::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "65w" << "fZg" << "UxI";
	return out;
}

const std::string& GameOver::_type_ids_16bit_base64_string() {
	static const std::string out("xUI65wfZgUxI");
	return out;
}

const std::string& GameOver::_type_id_16bit_base64() {
	static const std::string out("UxI");
	return out;
}

const std::vector<mgen::Field>& GameOver::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_reason_metadata() << _field_winner_metadata() << _field_loser_metadata() << _field_endState_metadata();
	return out;
}

const mgen::Field& GameOver::_field_reason_metadata() {
	static const mgen::Field out(-15867, "reason");
	return out;
}

const mgen::Field& GameOver::_field_winner_metadata() {
	static const mgen::Field out(-7291, "winner");
	return out;
}

const mgen::Field& GameOver::_field_loser_metadata() {
	static const mgen::Field out(9621, "loser");
	return out;
}

const mgen::Field& GameOver::_field_endState_metadata() {
	static const mgen::Field out(2994, "endState");
	return out;
}

} // End namespace gomoku
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

