/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_USERDB
#define SE_GIGURRA_AICHALLENGE_USERDB

#include "mgen/classes/MGenBase.h"
#include "se/gigurra/aichallenge/GamePlayed.h"
#include "se/gigurra/aichallenge/User.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {

class UserDb : public mgen::MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	std::map<std::string, User>  m_users;
	std::vector<GamePlayed>  m_games;
	bool _m_users_isSet;
	bool _m_games_isSet;

public:
	UserDb();
	UserDb(const std::map<std::string, User> & users,
			const std::vector<GamePlayed> & games);
	virtual ~UserDb();

	const std::map<std::string, User> & getUsers() const;
	const std::vector<GamePlayed> & getGames() const;

	std::map<std::string, User> & getUsersMutable();
	std::vector<GamePlayed> & getGamesMutable();

	UserDb& setUsers(const std::map<std::string, User> & users);
	UserDb& setGames(const std::vector<GamePlayed> & games);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasUsers() const;
	bool hasGames() const;

	UserDb& unsetUsers();
	UserDb& unsetGames();

	bool operator==(const UserDb& other) const;
	bool operator!=(const UserDb& other) const;


							
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
		case _field_users_id:
			reader.readField(_field_users_metadata(), context, getUsersMutable());
			break;
		case _field_games_id:
			reader.readField(_field_games_metadata(), context, getGamesMutable());
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
				visitor.visit(getUsers(), _field_users_metadata());
				visitor.visit(getGames(), _field_games_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isUsersSet(mgen::SHALLOW))
					visitor.visit(getUsers(), _field_users_metadata());
				if (_isGamesSet(mgen::SHALLOW))
					visitor.visit(getGames(), _field_games_metadata());
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
				visitor.visit(getUsersMutable(), _field_users_metadata());
				visitor.visit(getGamesMutable(), _field_games_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isUsersSet(mgen::SHALLOW))
					visitor.visit(getUsersMutable(), _field_users_metadata());
				if (_isGamesSet(mgen::SHALLOW))
					visitor.visit(getGamesMutable(), _field_games_metadata());
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

	UserDb& _setUsersSet(const bool state, const mgen::FieldSetDepth depth);
	UserDb& _setGamesSet(const bool state, const mgen::FieldSetDepth depth);

	UserDb& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isUsersSet(const mgen::FieldSetDepth depth) const;
	bool _isGamesSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	UserDb * _deepCopy() const;

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
		  
	static const long long _type_id = 7303451540181597977LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 6980;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_users_metadata();
	static const mgen::Field& _field_games_metadata();

	static const short _field_users_id = -23008;
	static const short _field_games_id = 9075;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class UserDb

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

#endif
