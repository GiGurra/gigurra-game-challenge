/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_GAMES_GO_BOARD
#define SE_GIGURRA_AICHALLENGE_GAMES_GO_BOARD

#include "mgen/classes/MGenBase.h"
#include "se/gigurra/aichallenge/games/go/Team.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace go {

class Board : public mgen::MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	int m_width;
	int m_height;
	std::vector<Team>  m_points;
	bool _m_width_isSet;
	bool _m_height_isSet;
	bool _m_points_isSet;

public:
	Board();
	Board(const int& width,
			const int& height,
			const std::vector<Team> & points);
	virtual ~Board();

	const int& getWidth() const;
	const int& getHeight() const;
	const std::vector<Team> & getPoints() const;

	int& getWidthMutable();
	int& getHeightMutable();
	std::vector<Team> & getPointsMutable();

	Board& setWidth(const int& width);
	Board& setHeight(const int& height);
	Board& setPoints(const std::vector<Team> & points);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasWidth() const;
	bool hasHeight() const;
	bool hasPoints() const;

	Board& unsetWidth();
	Board& unsetHeight();
	Board& unsetPoints();

	bool operator==(const Board& other) const;
	bool operator!=(const Board& other) const;


							
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
		case _field_width_id:
			reader.readField(_field_width_metadata(), context, getWidthMutable());
			break;
		case _field_height_id:
			reader.readField(_field_height_metadata(), context, getHeightMutable());
			break;
		case _field_points_id:
			reader.readField(_field_points_metadata(), context, getPointsMutable());
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
				visitor.visit(getWidth(), _field_width_metadata());
				visitor.visit(getHeight(), _field_height_metadata());
				visitor.visit(getPoints(), _field_points_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isWidthSet(mgen::SHALLOW))
					visitor.visit(getWidth(), _field_width_metadata());
				if (_isHeightSet(mgen::SHALLOW))
					visitor.visit(getHeight(), _field_height_metadata());
				if (_isPointsSet(mgen::SHALLOW))
					visitor.visit(getPoints(), _field_points_metadata());
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
				visitor.visit(getWidthMutable(), _field_width_metadata());
				visitor.visit(getHeightMutable(), _field_height_metadata());
				visitor.visit(getPointsMutable(), _field_points_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isWidthSet(mgen::SHALLOW))
					visitor.visit(getWidthMutable(), _field_width_metadata());
				if (_isHeightSet(mgen::SHALLOW))
					visitor.visit(getHeightMutable(), _field_height_metadata());
				if (_isPointsSet(mgen::SHALLOW))
					visitor.visit(getPointsMutable(), _field_points_metadata());
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

	Board& _setWidthSet(const bool state, const mgen::FieldSetDepth depth);
	Board& _setHeightSet(const bool state, const mgen::FieldSetDepth depth);
	Board& _setPointsSet(const bool state, const mgen::FieldSetDepth depth);

	Board& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isWidthSet(const mgen::FieldSetDepth depth) const;
	bool _isHeightSet(const mgen::FieldSetDepth depth) const;
	bool _isPointsSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	Board * _deepCopy() const;

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
		  
	static const long long _type_id = 2859743780939014881LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 2644;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_width_metadata();
	static const mgen::Field& _field_height_metadata();
	static const mgen::Field& _field_points_metadata();

	static const short _field_width_id = -20637;
	static const short _field_height_id = 28175;
	static const short _field_points_id = -26865;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class Board

} // End namespace go
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

#endif
