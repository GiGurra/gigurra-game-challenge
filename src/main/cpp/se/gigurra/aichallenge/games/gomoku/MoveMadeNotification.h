/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_GAMES_GOMOKU_MOVEMADENOTIFICATION
#define SE_GIGURRA_AICHALLENGE_GAMES_GOMOKU_MOVEMADENOTIFICATION

#include "se/gigurra/aichallenge/games/gomoku/GomokuMessage.h"
#include "se/gigurra/aichallenge/games/gomoku/Vec2.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace gomoku {

class MoveMadeNotification : public GomokuMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	std::string m_playerName;
	Vec2 m_position;
	bool _m_playerName_isSet;
	bool _m_position_isSet;

public:
	MoveMadeNotification();
	MoveMadeNotification(const std::string& playerName,
			const Vec2& position);
	virtual ~MoveMadeNotification();

	const std::string& getPlayerName() const;
	const Vec2& getPosition() const;

	std::string& getPlayerNameMutable();
	Vec2& getPositionMutable();

	MoveMadeNotification& setPlayerName(const std::string& playerName);
	MoveMadeNotification& setPosition(const Vec2& position);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasPlayerName() const;
	bool hasPosition() const;

	MoveMadeNotification& unsetPlayerName();
	MoveMadeNotification& unsetPosition();

	bool operator==(const MoveMadeNotification& other) const;
	bool operator!=(const MoveMadeNotification& other) const;


							
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
		case _field_playerName_id:
			reader.readField(_field_playerName_metadata(), context, getPlayerNameMutable());
			break;
		case _field_position_id:
			reader.readField(_field_position_metadata(), context, getPositionMutable());
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
				visitor.beginVisit(*this, 2);
				visitor.visit(getPlayerName(), _field_playerName_metadata());
				visitor.visit(getPosition(), _field_position_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isPlayerNameSet(mgen::SHALLOW))
					visitor.visit(getPlayerName(), _field_playerName_metadata());
				if (_isPositionSet(mgen::SHALLOW))
					visitor.visit(getPosition(), _field_position_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 2);
				visitor.visit(getPlayerNameMutable(), _field_playerName_metadata());
				visitor.visit(getPositionMutable(), _field_position_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isPlayerNameSet(mgen::SHALLOW))
					visitor.visit(getPlayerNameMutable(), _field_playerName_metadata());
				if (_isPositionSet(mgen::SHALLOW))
					visitor.visit(getPositionMutable(), _field_position_metadata());
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

	MoveMadeNotification& _setPlayerNameSet(const bool state, const mgen::FieldSetDepth depth);
	MoveMadeNotification& _setPositionSet(const bool state, const mgen::FieldSetDepth depth);

	MoveMadeNotification& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isPlayerNameSet(const mgen::FieldSetDepth depth) const;
	bool _isPositionSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	MoveMadeNotification * _deepCopy() const;

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
		  
	static const long long _type_id = 6430104820858040416LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 9854;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_playerName_metadata();
	static const mgen::Field& _field_position_metadata();

	static const short _field_playerName_id = 29375;
	static const short _field_position_id = -26337;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class MoveMadeNotification

} // End namespace gomoku
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

#endif
