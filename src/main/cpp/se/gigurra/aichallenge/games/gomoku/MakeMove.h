/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_GAMES_GOMOKU_MAKEMOVE
#define SE_GIGURRA_AICHALLENGE_GAMES_GOMOKU_MAKEMOVE

#include "se/gigurra/aichallenge/games/gomoku/GomokuMessage.h"
#include "se/gigurra/aichallenge/games/gomoku/Vec2.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace gomoku {

class MakeMove : public GomokuMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	Vec2 m_position;
	bool _m_position_isSet;

public:
	MakeMove();
	MakeMove(const Vec2& position);
	virtual ~MakeMove();

	const Vec2& getPosition() const;

	Vec2& getPositionMutable();

	MakeMove& setPosition(const Vec2& position);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasPosition() const;

	MakeMove& unsetPosition();

	bool operator==(const MakeMove& other) const;
	bool operator!=(const MakeMove& other) const;


							
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
				visitor.beginVisit(*this, 1);
				visitor.visit(getPosition(), _field_position_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
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
				visitor.beginVisit(*this, 1);
				visitor.visit(getPositionMutable(), _field_position_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
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

	MakeMove& _setPositionSet(const bool state, const mgen::FieldSetDepth depth);

	MakeMove& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isPositionSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	MakeMove * _deepCopy() const;

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
		  
	static const long long _type_id = 7681838796452761563LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 19427;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_position_metadata();

	static const short _field_position_id = -26337;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class MakeMove

} // End namespace gomoku
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

#endif