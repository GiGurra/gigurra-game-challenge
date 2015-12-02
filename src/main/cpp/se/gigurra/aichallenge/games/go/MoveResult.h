/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_GAMES_GO_MOVERESULT
#define SE_GIGURRA_AICHALLENGE_GAMES_GO_MOVERESULT

#include "se/gigurra/aichallenge/games/go/GoMessage.h"
#include "se/gigurra/aichallenge/games/go/Player.h"
#include "se/gigurra/aichallenge/games/go/Vec2.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace go {

class MoveResult : public GoMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	Player m_player;
	Vec2 m_point;
	std::vector<Vec2>  m_removed;
	bool _m_player_isSet;
	bool _m_point_isSet;
	bool _m_removed_isSet;

public:
	MoveResult();
	MoveResult(const Player& player,
			const Vec2& point,
			const std::vector<Vec2> & removed);
	virtual ~MoveResult();

	const Player& getPlayer() const;
	const Vec2& getPoint() const;
	const std::vector<Vec2> & getRemoved() const;

	Player& getPlayerMutable();
	Vec2& getPointMutable();
	std::vector<Vec2> & getRemovedMutable();

	MoveResult& setPlayer(const Player& player);
	MoveResult& setPoint(const Vec2& point);
	MoveResult& setRemoved(const std::vector<Vec2> & removed);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasPlayer() const;
	bool hasPoint() const;
	bool hasRemoved() const;

	MoveResult& unsetPlayer();
	MoveResult& unsetPoint();
	MoveResult& unsetRemoved();

	bool operator==(const MoveResult& other) const;
	bool operator!=(const MoveResult& other) const;


							
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
		case _field_player_id:
			reader.readField(_field_player_metadata(), context, getPlayerMutable());
			break;
		case _field_point_id:
			reader.readField(_field_point_metadata(), context, getPointMutable());
			break;
		case _field_removed_id:
			reader.readField(_field_removed_metadata(), context, getRemovedMutable());
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
				visitor.beginVisit(*this, 3);
				visitor.visit(getPlayer(), _field_player_metadata());
				visitor.visit(getPoint(), _field_point_metadata());
				visitor.visit(getRemoved(), _field_removed_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isPlayerSet(mgen::SHALLOW))
					visitor.visit(getPlayer(), _field_player_metadata());
				if (_isPointSet(mgen::SHALLOW))
					visitor.visit(getPoint(), _field_point_metadata());
				if (_isRemovedSet(mgen::SHALLOW))
					visitor.visit(getRemoved(), _field_removed_metadata());
				visitor.endVisit();
				break;
			}
		}
	}

	template<typename VisitorType>
	void _accept(VisitorType& visitor, const mgen::FieldVisitSelection selection) {
		switch(selection) {
			case mgen::ALL: {
				visitor.beginVisit(*this, 3);
				visitor.visit(getPlayerMutable(), _field_player_metadata());
				visitor.visit(getPointMutable(), _field_point_metadata());
				visitor.visit(getRemovedMutable(), _field_removed_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isPlayerSet(mgen::SHALLOW))
					visitor.visit(getPlayerMutable(), _field_player_metadata());
				if (_isPointSet(mgen::SHALLOW))
					visitor.visit(getPointMutable(), _field_point_metadata());
				if (_isRemovedSet(mgen::SHALLOW))
					visitor.visit(getRemovedMutable(), _field_removed_metadata());
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

	MoveResult& _setPlayerSet(const bool state, const mgen::FieldSetDepth depth);
	MoveResult& _setPointSet(const bool state, const mgen::FieldSetDepth depth);
	MoveResult& _setRemovedSet(const bool state, const mgen::FieldSetDepth depth);

	MoveResult& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isPlayerSet(const mgen::FieldSetDepth depth) const;
	bool _isPointSet(const mgen::FieldSetDepth depth) const;
	bool _isRemovedSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	MoveResult * _deepCopy() const;

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
		  
	static const long long _type_id = 27423387546254282LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 31141;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_player_metadata();
	static const mgen::Field& _field_point_metadata();
	static const mgen::Field& _field_removed_metadata();

	static const short _field_player_id = 6798;
	static const short _field_point_id = -28038;
	static const short _field_removed_id = 3738;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class MoveResult

} // End namespace go
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

#endif
