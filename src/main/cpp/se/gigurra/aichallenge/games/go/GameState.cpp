/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/games/go/GameState.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace go {

GameState::GameState() : 
		m_board(Board()),
		m_phase(GamePhase_JOINING),
		_m_blackPlayer_isSet(false),
		_m_whitePlayer_isSet(false),
		_m_board_isSet(true),
		_m_phase_isSet(true) {
}

GameState::GameState(const Player& blackPlayer, 
			const Player& whitePlayer, 
			const Board& board, 
			const GamePhase& phase) : 
		m_blackPlayer(blackPlayer),
		m_whitePlayer(whitePlayer),
		m_board(board),
		m_phase(phase),
		_m_blackPlayer_isSet(true),
		_m_whitePlayer_isSet(true),
		_m_board_isSet(true),
		_m_phase_isSet(true) {
}

GameState::~GameState() {
}

const Player& GameState::getBlackPlayer() const {
	return m_blackPlayer;
}

const Player& GameState::getWhitePlayer() const {
	return m_whitePlayer;
}

const Board& GameState::getBoard() const {
	return m_board;
}

const GamePhase& GameState::getPhase() const {
	return m_phase;
}

Player& GameState::getBlackPlayerMutable() {
	_m_blackPlayer_isSet = true;
	return m_blackPlayer;
}

Player& GameState::getWhitePlayerMutable() {
	_m_whitePlayer_isSet = true;
	return m_whitePlayer;
}

Board& GameState::getBoardMutable() {
	_m_board_isSet = true;
	return m_board;
}

GamePhase& GameState::getPhaseMutable() {
	_m_phase_isSet = true;
	return m_phase;
}

GameState& GameState::setBlackPlayer(const Player& blackPlayer) {
	m_blackPlayer = blackPlayer;
	_m_blackPlayer_isSet = true;
	return *this;
}

GameState& GameState::setWhitePlayer(const Player& whitePlayer) {
	m_whitePlayer = whitePlayer;
	_m_whitePlayer_isSet = true;
	return *this;
}

GameState& GameState::setBoard(const Board& board) {
	m_board = board;
	_m_board_isSet = true;
	return *this;
}

GameState& GameState::setPhase(const GamePhase& phase) {
	m_phase = phase;
	_m_phase_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool GameState::hasBlackPlayer() const {
	return _isBlackPlayerSet(mgen::SHALLOW);
}

bool GameState::hasWhitePlayer() const {
	return _isWhitePlayerSet(mgen::SHALLOW);
}

bool GameState::hasBoard() const {
	return _isBoardSet(mgen::SHALLOW);
}

bool GameState::hasPhase() const {
	return _isPhaseSet(mgen::SHALLOW);
}

GameState& GameState::unsetBlackPlayer() {
	_setBlackPlayerSet(false, mgen::SHALLOW);
	return *this;
}

GameState& GameState::unsetWhitePlayer() {
	_setWhitePlayerSet(false, mgen::SHALLOW);
	return *this;
}

GameState& GameState::unsetBoard() {
	_setBoardSet(false, mgen::SHALLOW);
	return *this;
}

GameState& GameState::unsetPhase() {
	_setPhaseSet(false, mgen::SHALLOW);
	return *this;
}

bool GameState::operator==(const GameState& other) const {
	return true
		 && _isBlackPlayerSet(mgen::SHALLOW) == other._isBlackPlayerSet(mgen::SHALLOW)
		 && _isWhitePlayerSet(mgen::SHALLOW) == other._isWhitePlayerSet(mgen::SHALLOW)
		 && _isBoardSet(mgen::SHALLOW) == other._isBoardSet(mgen::SHALLOW)
		 && _isPhaseSet(mgen::SHALLOW) == other._isPhaseSet(mgen::SHALLOW)
		 && getBlackPlayer() == other.getBlackPlayer()
		 && getWhitePlayer() == other.getWhitePlayer()
		 && getBoard() == other.getBoard()
		 && getPhase() == other.getPhase();
}

bool GameState::operator!=(const GameState& other) const {
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
		  
const mgen::Field * GameState::_fieldById(const short id) const {
	switch (id) {
	case _field_blackPlayer_id:
		return &_field_blackPlayer_metadata();
	case _field_whitePlayer_id:
		return &_field_whitePlayer_metadata();
	case _field_board_id:
		return &_field_board_metadata();
	case _field_phase_id:
		return &_field_phase_metadata();
	default:
		return 0;
	}
}

const mgen::Field * GameState::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("blackPlayer", &GameState::_field_blackPlayer_metadata())("whitePlayer", &GameState::_field_whitePlayer_metadata())("board", &GameState::_field_board_metadata())("phase", &GameState::_field_phase_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long GameState::_typeId() const {
	return _type_id;
}

const std::string& GameState::_typeName() const {
	return _type_name();
}

const short GameState::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& GameState::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& GameState::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& GameState::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& GameState::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& GameState::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& GameState::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& GameState::_fieldMetadatas() const {
	return _field_metadatas();
}

GameState& GameState::_setBlackPlayerSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_blackPlayer._setAllFieldsSet(state, mgen::DEEP);
	_m_blackPlayer_isSet = state;
	return *this;
}

GameState& GameState::_setWhitePlayerSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_whitePlayer._setAllFieldsSet(state, mgen::DEEP);
	_m_whitePlayer_isSet = state;
	return *this;
}

GameState& GameState::_setBoardSet(const bool state, const mgen::FieldSetDepth depth) {
	if (state && !_isBoardSet(mgen::SHALLOW))
		m_board = Board();
	if (depth == mgen::DEEP)
		m_board._setAllFieldsSet(state, mgen::DEEP);
	_m_board_isSet = state;
	return *this;
}

GameState& GameState::_setPhaseSet(const bool state, const mgen::FieldSetDepth depth) {
	if (state && !_isPhaseSet(mgen::SHALLOW))
		m_phase = GamePhase_JOINING;
	if (!state)
		m_phase = GamePhase_UNKNOWN;
	_m_phase_isSet = state;
	return *this;
}

GameState& GameState::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setBlackPlayerSet(state, depth);
	_setWhitePlayerSet(state, depth);
	_setBoardSet(state, depth);
	_setPhaseSet(state, depth);
	return *this;
}

int GameState::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isBlackPlayerSet(depth) ? 1 : 0;
	out += _isWhitePlayerSet(depth) ? 1 : 0;
	out += _isBoardSet(depth) ? 1 : 0;
	out += _isPhaseSet(depth) ? 1 : 0;
	return out;
}

bool GameState::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_blackPlayer_id):
			return _isBlackPlayerSet(depth);
		case (_field_whitePlayer_id):
			return _isWhitePlayerSet(depth);
		case (_field_board_id):
			return _isBoardSet(depth);
		case (_field_phase_id):
			return _isPhaseSet(depth);
		default:
			return false;
	}
}

bool GameState::_isBlackPlayerSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_blackPlayer_isSet;
	} else {
		return _m_blackPlayer_isSet && mgen::validation::validateFieldDeep(getBlackPlayer());
	}
}

bool GameState::_isWhitePlayerSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_whitePlayer_isSet;
	} else {
		return _m_whitePlayer_isSet && mgen::validation::validateFieldDeep(getWhitePlayer());
	}
}

bool GameState::_isBoardSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_board_isSet;
	} else {
		return _m_board_isSet && mgen::validation::validateFieldDeep(getBoard());
	}
}

bool GameState::_isPhaseSet(const mgen::FieldSetDepth depth) const {
	return _m_phase_isSet;
}

bool GameState::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true
				&& (!_isBlackPlayerSet(mgen::SHALLOW) || _isBlackPlayerSet(mgen::DEEP))
				&& (!_isWhitePlayerSet(mgen::SHALLOW) || _isWhitePlayerSet(mgen::DEEP))
				&& (!_isBoardSet(mgen::SHALLOW) || _isBoardSet(mgen::DEEP));
	}
}

bool GameState::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const GameState&>(other) == *this;
}

GameState * GameState::_deepCopy() const {
	return new GameState(*this);
}

mgen::MGenBase * GameState::_newInstance() {
	return new GameState;
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
		  
const std::string& GameState::_type_name() {
	static const std::string out("se.gigurra.aichallenge.games.go.GameState");
	return out;
}

const std::vector<long long>& GameState::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 4199952919060231829LL;
	return out;
}

const std::vector<short>& GameState::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 13485;
	return out;
}

const std::vector<std::string>& GameState::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.games.go.GameState";
	return out;
}

const std::vector<std::string>& GameState::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "NK0";
	return out;
}

const std::string& GameState::_type_ids_16bit_base64_string() {
	static const std::string out("NK0");
	return out;
}

const std::string& GameState::_type_id_16bit_base64() {
	static const std::string out("NK0");
	return out;
}

const std::vector<mgen::Field>& GameState::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_blackPlayer_metadata() << _field_whitePlayer_metadata() << _field_board_metadata() << _field_phase_metadata();
	return out;
}

const mgen::Field& GameState::_field_blackPlayer_metadata() {
	static const mgen::Field out(-18158, "blackPlayer");
	return out;
}

const mgen::Field& GameState::_field_whitePlayer_metadata() {
	static const mgen::Field out(10703, "whitePlayer");
	return out;
}

const mgen::Field& GameState::_field_board_metadata() {
	static const mgen::Field out(12077, "board");
	return out;
}

const mgen::Field& GameState::_field_phase_metadata() {
	static const mgen::Field out(7625, "phase");
	return out;
}

} // End namespace go
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

