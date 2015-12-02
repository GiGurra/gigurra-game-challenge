/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_GAMES_BATTLESHIP_GAMEOVER
#define SE_GIGURRA_AICHALLENGE_GAMES_BATTLESHIP_GAMEOVER

#include "se/gigurra/aichallenge/games/battleship/BattleshipMessage.h"
#include "se/gigurra/aichallenge/games/battleship/GameState.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace battleship {

class GameOver : public BattleshipMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	std::string m_reason;
	std::string m_winner;
	std::string m_loser;
	GameState m_endState;
	bool _m_reason_isSet;
	bool _m_winner_isSet;
	bool _m_loser_isSet;
	bool _m_endState_isSet;

public:
	GameOver();
	GameOver(const std::string& reason,
			const std::string& winner,
			const std::string& loser,
			const GameState& endState);
	virtual ~GameOver();

	const std::string& getReason() const;
	const std::string& getWinner() const;
	const std::string& getLoser() const;
	const GameState& getEndState() const;

	std::string& getReasonMutable();
	std::string& getWinnerMutable();
	std::string& getLoserMutable();
	GameState& getEndStateMutable();

	GameOver& setReason(const std::string& reason);
	GameOver& setWinner(const std::string& winner);
	GameOver& setLoser(const std::string& loser);
	GameOver& setEndState(const GameState& endState);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasReason() const;
	bool hasWinner() const;
	bool hasLoser() const;
	bool hasEndState() const;

	GameOver& unsetReason();
	GameOver& unsetWinner();
	GameOver& unsetLoser();
	GameOver& unsetEndState();

	bool operator==(const GameOver& other) const;
	bool operator!=(const GameOver& other) const;


							
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
		case _field_reason_id:
			reader.readField(_field_reason_metadata(), context, getReasonMutable());
			break;
		case _field_winner_id:
			reader.readField(_field_winner_metadata(), context, getWinnerMutable());
			break;
		case _field_loser_id:
			reader.readField(_field_loser_metadata(), context, getLoserMutable());
			break;
		case _field_endState_id:
			reader.readField(_field_endState_metadata(), context, getEndStateMutable());
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
				visitor.visit(getReason(), _field_reason_metadata());
				visitor.visit(getWinner(), _field_winner_metadata());
				visitor.visit(getLoser(), _field_loser_metadata());
				visitor.visit(getEndState(), _field_endState_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isReasonSet(mgen::SHALLOW))
					visitor.visit(getReason(), _field_reason_metadata());
				if (_isWinnerSet(mgen::SHALLOW))
					visitor.visit(getWinner(), _field_winner_metadata());
				if (_isLoserSet(mgen::SHALLOW))
					visitor.visit(getLoser(), _field_loser_metadata());
				if (_isEndStateSet(mgen::SHALLOW))
					visitor.visit(getEndState(), _field_endState_metadata());
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
				visitor.visit(getReasonMutable(), _field_reason_metadata());
				visitor.visit(getWinnerMutable(), _field_winner_metadata());
				visitor.visit(getLoserMutable(), _field_loser_metadata());
				visitor.visit(getEndStateMutable(), _field_endState_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isReasonSet(mgen::SHALLOW))
					visitor.visit(getReasonMutable(), _field_reason_metadata());
				if (_isWinnerSet(mgen::SHALLOW))
					visitor.visit(getWinnerMutable(), _field_winner_metadata());
				if (_isLoserSet(mgen::SHALLOW))
					visitor.visit(getLoserMutable(), _field_loser_metadata());
				if (_isEndStateSet(mgen::SHALLOW))
					visitor.visit(getEndStateMutable(), _field_endState_metadata());
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

	GameOver& _setReasonSet(const bool state, const mgen::FieldSetDepth depth);
	GameOver& _setWinnerSet(const bool state, const mgen::FieldSetDepth depth);
	GameOver& _setLoserSet(const bool state, const mgen::FieldSetDepth depth);
	GameOver& _setEndStateSet(const bool state, const mgen::FieldSetDepth depth);

	GameOver& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isReasonSet(const mgen::FieldSetDepth depth) const;
	bool _isWinnerSet(const mgen::FieldSetDepth depth) const;
	bool _isLoserSet(const mgen::FieldSetDepth depth) const;
	bool _isEndStateSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	GameOver * _deepCopy() const;

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
		  
	static const long long _type_id = 2842249200045117097LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = -3531;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_reason_metadata();
	static const mgen::Field& _field_winner_metadata();
	static const mgen::Field& _field_loser_metadata();
	static const mgen::Field& _field_endState_metadata();

	static const short _field_reason_id = -15867;
	static const short _field_winner_id = -7291;
	static const short _field_loser_id = 9621;
	static const short _field_endState_id = 2994;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class GameOver

} // End namespace battleship
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

#endif
