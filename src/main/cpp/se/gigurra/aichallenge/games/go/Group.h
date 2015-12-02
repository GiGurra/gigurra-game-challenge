/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_GAMES_GO_GROUP
#define SE_GIGURRA_AICHALLENGE_GAMES_GO_GROUP

#include "mgen/classes/MGenBase.h"
#include "se/gigurra/aichallenge/games/go/Team.h"
#include "se/gigurra/aichallenge/games/go/Vec2.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace go {

class Group : public mgen::MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	std::vector<Vec2>  m_positions;
	Team m_team;
	bool _m_positions_isSet;
	bool _m_team_isSet;

public:
	Group();
	Group(const std::vector<Vec2> & positions,
			const Team& team);
	virtual ~Group();

	const std::vector<Vec2> & getPositions() const;
	const Team& getTeam() const;

	std::vector<Vec2> & getPositionsMutable();
	Team& getTeamMutable();

	Group& setPositions(const std::vector<Vec2> & positions);
	Group& setTeam(const Team& team);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasPositions() const;
	bool hasTeam() const;

	Group& unsetPositions();
	Group& unsetTeam();

	bool operator==(const Group& other) const;
	bool operator!=(const Group& other) const;


							
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
		case _field_positions_id:
			reader.readField(_field_positions_metadata(), context, getPositionsMutable());
			break;
		case _field_team_id:
			reader.readField(_field_team_metadata(), context, getTeamMutable());
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
				visitor.visit(getPositions(), _field_positions_metadata());
				visitor.visit(getTeam(), _field_team_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isPositionsSet(mgen::SHALLOW))
					visitor.visit(getPositions(), _field_positions_metadata());
				if (_isTeamSet(mgen::SHALLOW))
					visitor.visit(getTeam(), _field_team_metadata());
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
				visitor.visit(getPositionsMutable(), _field_positions_metadata());
				visitor.visit(getTeamMutable(), _field_team_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isPositionsSet(mgen::SHALLOW))
					visitor.visit(getPositionsMutable(), _field_positions_metadata());
				if (_isTeamSet(mgen::SHALLOW))
					visitor.visit(getTeamMutable(), _field_team_metadata());
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

	Group& _setPositionsSet(const bool state, const mgen::FieldSetDepth depth);
	Group& _setTeamSet(const bool state, const mgen::FieldSetDepth depth);

	Group& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isPositionsSet(const mgen::FieldSetDepth depth) const;
	bool _isTeamSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	Group * _deepCopy() const;

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
		  
	static const long long _type_id = 7626111610355576618LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = -9471;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_positions_metadata();
	static const mgen::Field& _field_team_metadata();

	static const short _field_positions_id = 17252;
	static const short _field_team_id = -1585;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class Group

} // End namespace go
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

#endif
