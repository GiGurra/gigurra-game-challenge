/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_GAMES_BATTLESHIP_SHOT
#define SE_GIGURRA_AICHALLENGE_GAMES_BATTLESHIP_SHOT

#include "mgen/classes/MGenBase.h"
#include "se/gigurra/aichallenge/games/battleship/Vec2.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {
namespace games {
namespace battleship {

class Shot : public mgen::MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	Vec2 m_pos;
	bool m_isHit;
	bool _m_pos_isSet;
	bool _m_isHit_isSet;

public:
	Shot();
	Shot(const Vec2& pos,
			const bool& isHit);
	virtual ~Shot();

	const Vec2& getPos() const;
	const bool& getIsHit() const;

	Vec2& getPosMutable();
	bool& getIsHitMutable();

	Shot& setPos(const Vec2& pos);
	Shot& setIsHit(const bool& isHit);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasPos() const;
	bool hasIsHit() const;

	Shot& unsetPos();
	Shot& unsetIsHit();

	bool operator==(const Shot& other) const;
	bool operator!=(const Shot& other) const;


							
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
		case _field_pos_id:
			reader.readField(_field_pos_metadata(), context, getPosMutable());
			break;
		case _field_isHit_id:
			reader.readField(_field_isHit_metadata(), context, getIsHitMutable());
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
				visitor.visit(getPos(), _field_pos_metadata());
				visitor.visit(getIsHit(), _field_isHit_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isPosSet(mgen::SHALLOW))
					visitor.visit(getPos(), _field_pos_metadata());
				if (_isIsHitSet(mgen::SHALLOW))
					visitor.visit(getIsHit(), _field_isHit_metadata());
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
				visitor.visit(getPosMutable(), _field_pos_metadata());
				visitor.visit(getIsHitMutable(), _field_isHit_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isPosSet(mgen::SHALLOW))
					visitor.visit(getPosMutable(), _field_pos_metadata());
				if (_isIsHitSet(mgen::SHALLOW))
					visitor.visit(getIsHitMutable(), _field_isHit_metadata());
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

	Shot& _setPosSet(const bool state, const mgen::FieldSetDepth depth);
	Shot& _setIsHitSet(const bool state, const mgen::FieldSetDepth depth);

	Shot& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isPosSet(const mgen::FieldSetDepth depth) const;
	bool _isIsHitSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	Shot * _deepCopy() const;

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
		  
	static const long long _type_id = 7446599600640505600LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 808;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_pos_metadata();
	static const mgen::Field& _field_isHit_metadata();

	static const short _field_pos_id = 16756;
	static const short _field_isHit_id = 17064;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class Shot

} // End namespace battleship
} // End namespace games
} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

#endif
