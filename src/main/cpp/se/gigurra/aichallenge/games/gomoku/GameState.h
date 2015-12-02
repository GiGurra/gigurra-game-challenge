/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_GAMES_GOMOKU_GAMESTATE
#define SE_GIGURRA_AICHALLENGE_GAMES_GOMOKU_GAMESTATE

#include "mgen/classes/MGenBase.h"
#include "se/gigurra/aichallenge/games/gomoku/Board.h"
#include "se/gigurra/aichallenge/games/gomoku/GamePhase.h"
#include "se/gigurra/aichallenge/games/gomoku/Player.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace gomoku {

class GameState : public mgen::MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	Player m_redPlayer;
	Player m_bluePlayer;
	Board m_board;
	GamePhase m_phase;
	bool _m_redPlayer_isSet;
	bool _m_bluePlayer_isSet;
	bool _m_board_isSet;
	bool _m_phase_isSet;

public:
	GameState();
	GameState(const Player& redPlayer,
			const Player& bluePlayer,
			const Board& board,
			const GamePhase& phase);
	virtual ~GameState();

	const Player& getRedPlayer() const;
	const Player& getBluePlayer() const;
	const Board& getBoard() const;
	const GamePhase& getPhase() const;

	Player& getRedPlayerMutable();
	Player& getBluePlayerMutable();
	Board& getBoardMutable();
	GamePhase& getPhaseMutable();

	GameState& setRedPlayer(const Player& redPlayer);
	GameState& setBluePlayer(const Player& bluePlayer);
	GameState& setBoard(const Board& board);
	GameState& setPhase(const GamePhase& phase);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasRedPlayer() const;
	bool hasBluePlayer() const;
	bool hasBoard() const;
	bool hasPhase() const;

	GameState& unsetRedPlayer();
	GameState& unsetBluePlayer();
	GameState& unsetBoard();
	GameState& unsetPhase();

	bool operator==(const GameState& other) const;
	bool operator!=(const GameState& other) const;


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                    TYPE METADATA ACCESS AND SERIALIZATION METHODS                    *****
           *****          (accessed primarily by (de-)serializers and for ORM functionality)          *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  
public:
	template<typename ReaderType, typename ReadContextType>
	void _readField(const short fieldId, ReadContextType& context, ReaderType& reader) {
		switch (fieldId) {
		case _field_redPlayer_id:
			reader.readField(_field_redPlayer_metadata(), context, getRedPlayerMutable());
			break;
		case _field_bluePlayer_id:
			reader.readField(_field_bluePlayer_metadata(), context, getBluePlayerMutable());
			break;
		case _field_board_id:
			reader.readField(_field_board_metadata(), context, getBoardMutable());
			break;
		case _field_phase_id:
			reader.readField(_field_phase_metadata(), context, getPhaseMutable());
			break;
		default:
			reader.handleUnknownField(fieldId, context);
			break;
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) const {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 4);
				visitor.visit(getRedPlayer(), _field_redPlayer_metadata());
				visitor.visit(getBluePlayer(), _field_bluePlayer_metadata());
				visitor.visit(getBoard(), _field_board_metadata());
				visitor.visit(getPhase(), _field_phase_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isRedPlayerSet(mgen::SHALLOW))
					visitor.visit(getRedPlayer(), _field_redPlayer_metadata());
				if (_isBluePlayerSet(mgen::SHALLOW))
					visitor.visit(getBluePlayer(), _field_bluePlayer_metadata());
				if (_isBoardSet(mgen::SHALLOW))
					visitor.visit(getBoard(), _field_board_metadata());
				if (_isPhaseSet(mgen::SHALLOW))
					visitor.visit(getPhase(), _field_phase_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 4);
				visitor.visit(getRedPlayerMutable(), _field_redPlayer_metadata());
				visitor.visit(getBluePlayerMutable(), _field_bluePlayer_metadata());
				visitor.visit(getBoardMutable(), _field_board_metadata());
				visitor.visit(getPhaseMutable(), _field_phase_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isRedPlayerSet(mgen::SHALLOW))
					visitor.visit(getRedPlayerMutable(), _field_redPlayer_metadata());
				if (_isBluePlayerSet(mgen::SHALLOW))
					visitor.visit(getBluePlayerMutable(), _field_bluePlayer_metadata());
				if (_isBoardSet(mgen::SHALLOW))
					visitor.visit(getBoardMutable(), _field_board_metadata());
				if (_isPhaseSet(mgen::SHALLOW))
					visitor.visit(getPhaseMutable(), _field_phase_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	const mgen::Field * _fieldById(const short id) const;
	const mgen::Field * _fieldByName(const std::string& name) const;
	const long long _typeId() const;
	const short _typeId16Bit() const;
	const std::string& _typeId16BitBase64() const;
	const std::string& _typeName() const;

	const std::vector<long long>& _typeIds() const;
	const std::vector<short>& _typeIds16Bit() const;
	const std::vector<std::string>& _typeIds16BitBase64() const;
	const std::string& _typeIds16BitBase64String() const;
	const std::vector<std::string>& _typeNames() const;

	const std::vector<mgen::Field>& _fieldMetadatas() const;

	bool _isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const;

	GameState& _setRedPlayerSet(const bool state, const mgen::FieldSetDepth depth);
	GameState& _setBluePlayerSet(const bool state, const mgen::FieldSetDepth depth);
	GameState& _setBoardSet(const bool state, const mgen::FieldSetDepth depth);
	GameState& _setPhaseSet(const bool state, const mgen::FieldSetDepth depth);

	GameState& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isRedPlayerSet(const mgen::FieldSetDepth depth) const;
	bool _isBluePlayerSet(const mgen::FieldSetDepth depth) const;
	bool _isBoardSet(const mgen::FieldSetDepth depth) const;
	bool _isPhaseSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	GameState * _deepCopy() const;

	static mgen::MGenBase * _newInstance();

							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                                    TYPE METADATA                                     *****
           *****             (generally speaking, it's a bad idea to edit this manually)              *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  
	static const long long _type_id = 8695176692006056988LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 20714;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_redPlayer_metadata();
	static const mgen::Field& _field_bluePlayer_metadata();
	static const mgen::Field& _field_board_metadata();
	static const mgen::Field& _field_phase_metadata();

	static const short _field_redPlayer_id = -7294;
	static const short _field_bluePlayer_id = 10760;
	static const short _field_board_id = 12077;
	static const short _field_phase_id = 7625;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class GameState

} // End namespace gomoku
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

#endif
