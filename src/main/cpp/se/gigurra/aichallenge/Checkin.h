/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_CHECKIN
#define SE_GIGURRA_AICHALLENGE_CHECKIN

#include "se/gigurra/aichallenge/Message.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {

class Checkin : public Message /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	std::string m_username;
	std::string m_password;
	bool _m_username_isSet;
	bool _m_password_isSet;

public:
	Checkin();
	Checkin(const std::string& username,
			const std::string& password);
	virtual ~Checkin();

	const std::string& getUsername() const;
	const std::string& getPassword() const;

	std::string& getUsernameMutable();
	std::string& getPasswordMutable();

	Checkin& setUsername(const std::string& username);
	Checkin& setPassword(const std::string& password);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasUsername() const;
	bool hasPassword() const;

	Checkin& unsetUsername();
	Checkin& unsetPassword();

	bool operator==(const Checkin& other) const;
	bool operator!=(const Checkin& other) const;


							
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
		case _field_username_id:
			reader.readField(_field_username_metadata(), context, getUsernameMutable());
			break;
		case _field_password_id:
			reader.readField(_field_password_metadata(), context, getPasswordMutable());
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
				visitor.visit(getUsername(), _field_username_metadata());
				visitor.visit(getPassword(), _field_password_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isUsernameSet(mgen::SHALLOW))
					visitor.visit(getUsername(), _field_username_metadata());
				if (_isPasswordSet(mgen::SHALLOW))
					visitor.visit(getPassword(), _field_password_metadata());
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
				visitor.visit(getUsernameMutable(), _field_username_metadata());
				visitor.visit(getPasswordMutable(), _field_password_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isUsernameSet(mgen::SHALLOW))
					visitor.visit(getUsernameMutable(), _field_username_metadata());
				if (_isPasswordSet(mgen::SHALLOW))
					visitor.visit(getPasswordMutable(), _field_password_metadata());
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

	Checkin& _setUsernameSet(const bool state, const mgen::FieldSetDepth depth);
	Checkin& _setPasswordSet(const bool state, const mgen::FieldSetDepth depth);

	Checkin& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isUsernameSet(const mgen::FieldSetDepth depth) const;
	bool _isPasswordSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	Checkin * _deepCopy() const;

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
		  
	static const long long _type_id = 8235336565925679407LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = 15956;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_username_metadata();
	static const mgen::Field& _field_password_metadata();

	static const short _field_username_id = -14635;
	static const short _field_password_id = 5242;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class Checkin

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

#endif
