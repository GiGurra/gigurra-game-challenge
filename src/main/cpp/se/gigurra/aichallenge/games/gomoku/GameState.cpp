/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/games/gomoku/GameState.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace gomoku {

GameState::GameState() : 
		m_board(Board()),
		m_phase(GamePhase_JOINING),
		_m_redPlayer_isSet(false),
		_m_bluePlayer_isSet(false),
		_m_board_isSet(true),
		_m_phase_isSet(true) {
}

GameState::GameState(const Player& redPlayer, 
			const Player& bluePlayer, 
			const Board& board, 
			const GamePhase& phase) : 
		m_redPlayer(redPlayer),
		m_bluePlayer(bluePlayer),
		m_board(board),
		m_phase(phase),
		_m_redPlayer_isSet(true),
		_m_bluePlayer_isSet(true),
		_m_board_isSet(true),
		_m_phase_isSet(true) {
}

GameState::~GameState() {
}

const Player& GameState::getRedPlayer() const {
	return m_redPlayer;
}

const Player& GameState::getBluePlayer() const {
	return m_bluePlayer;
}

const Board& GameState::getBoard() const {
	return m_board;
}

const GamePhase& GameState::getPhase() const {
	return m_phase;
}

Player& GameState::getRedPlayerMutable() {
	_m_redPlayer_isSet = true;
	return m_redPlayer;
}

Player& GameState::getBluePlayerMutable() {
	_m_bluePlayer_isSet = true;
	return m_bluePlayer;
}

Board& GameState::getBoardMutable() {
	_m_board_isSet = true;
	return m_board;
}

GamePhase& GameState::getPhaseMutable() {
	_m_phase_isSet = true;
	return m_phase;
}

GameState& GameState::setRedPlayer(const Player& redPlayer) {
	m_redPlayer = redPlayer;
	_m_redPlayer_isSet = true;
	return *this;
}

GameState& GameState::setBluePlayer(const Player& bluePlayer) {
	m_bluePlayer = bluePlayer;
	_m_bluePlayer_isSet = true;
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

bool GameState::hasRedPlayer() const {
	return _isRedPlayerSet(mgen::SHALLOW);
}

bool GameState::hasBluePlayer() const {
	return _isBluePlayerSet(mgen::SHALLOW);
}

bool GameState::hasBoard() const {
	return _isBoardSet(mgen::SHALLOW);
}

bool GameState::hasPhase() const {
	return _isPhaseSet(mgen::SHALLOW);
}

GameState& GameState::unsetRedPlayer() {
	_setRedPlayerSet(false, mgen::SHALLOW);
	return *this;
}

GameState& GameState::unsetBluePlayer() {
	_setBluePlayerSet(false, mgen::SHALLOW);
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
		 && _isRedPlayerSet(mgen::SHALLOW) == other._isRedPlayerSet(mgen::SHALLOW)
		 && _isBluePlayerSet(mgen::SHALLOW) == other._isBluePlayerSet(mgen::SHALLOW)
		 && _isBoardSet(mgen::SHALLOW) == other._isBoardSet(mgen::SHALLOW)
		 && _isPhaseSet(mgen::SHALLOW) == other._isPhaseSet(mgen::SHALLOW)
		 && getRedPlayer() == other.getRedPlayer()
		 && getBluePlayer() == other.getBluePlayer()
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
	case _field_redPlayer_id:
		return &_field_redPlayer_metadata();
	case _field_bluePlayer_id:
		return &_field_bluePlayer_metadata();
	case _field_board_id:
		return &_field_board_metadata();
	case _field_phase_id:
		return &_field_phase_metadata();
	default:
		return 0;
	}
}

const mgen::Field * GameState::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("redPlayer", &GameState::_field_redPlayer_metadata())("bluePlayer", &GameState::_field_bluePlayer_metadata())("board", &GameState::_field_board_metadata())("phase", &GameState::_field_phase_metadata());
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

GameState& GameState::_setRedPlayerSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_redPlayer._setAllFieldsSet(state, mgen::DEEP);
	_m_redPlayer_isSet = state;
	return *this;
}

GameState& GameState::_setBluePlayerSet(const bool state, const mgen::FieldSetDepth depth) {
	if (depth == mgen::DEEP)
		m_bluePlayer._setAllFieldsSet(state, mgen::DEEP);
	_m_bluePlayer_isSet = state;
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
	_setRedPlayerSet(state, depth);
	_setBluePlayerSet(state, depth);
	_setBoardSet(state, depth);
	_setPhaseSet(state, depth);
	return *this;
}

int GameState::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isRedPlayerSet(depth) ? 1 : 0;
	out += _isBluePlayerSet(depth) ? 1 : 0;
	out += _isBoardSet(depth) ? 1 : 0;
	out += _isPhaseSet(depth) ? 1 : 0;
	return out;
}

bool GameState::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_redPlayer_id):
			return _isRedPlayerSet(depth);
		case (_field_bluePlayer_id):
			return _isBluePlayerSet(depth);
		case (_field_board_id):
			return _isBoardSet(depth);
		case (_field_phase_id):
			return _isPhaseSet(depth);
		default:
			return false;
	}
}

bool GameState::_isRedPlayerSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_redPlayer_isSet;
	} else {
		return _m_redPlayer_isSet && mgen::validation::validateFieldDeep(getRedPlayer());
	}
}

bool GameState::_isBluePlayerSet(const mgen::FieldSetDepth depth) const {
	if (depth == mgen::SHALLOW) {
		return _m_bluePlayer_isSet;
	} else {
		return _m_bluePlayer_isSet && mgen::validation::validateFieldDeep(getBluePlayer());
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
				&& (!_isRedPlayerSet(mgen::SHALLOW) || _isRedPlayerSet(mgen::DEEP))
				&& (!_isBluePlayerSet(mgen::SHALLOW) || _isBluePlayerSet(mgen::DEEP))
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
	static const std::string out("se.gigurra.aichallenge.games.gomoku.GameState");
	return out;
}

const std::vector<long long>& GameState::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 8695176692006056988LL;
	return out;
}

const std::vector<short>& GameState::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << 20714;
	return out;
}

const std::vector<std::string>& GameState::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.games.gomoku.GameState";
	return out;
}

const std::vector<std::string>& GameState::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "UOo";
	return out;
}

const std::string& GameState::_type_ids_16bit_base64_string() {
	static const std::string out("UOo");
	return out;
}

const std::string& GameState::_type_id_16bit_base64() {
	static const std::string out("UOo");
	return out;
}

const std::vector<mgen::Field>& GameState::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_redPlayer_metadata() << _field_bluePlayer_metadata() << _field_board_metadata() << _field_phase_metadata();
	return out;
}

const mgen::Field& GameState::_field_redPlayer_metadata() {
	static const mgen::Field out(-7294, "redPlayer");
	return out;
}

const mgen::Field& GameState::_field_bluePlayer_metadata() {
	static const mgen::Field out(10760, "bluePlayer");
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

} // End namespace gomoku
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

