/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_RESTGETMESSAGESREPLY
#define SE_GIGURRA_AICHALLENGE_RESTGETMESSAGESREPLY

#include "se/gigurra/aichallenge/Message.h"
#include "se/gigurra/aichallenge/RestMessage.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {

class RestGetMessagesReply : public RestMessage /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	std::vector<Message>  m_messages;
	bool _m_messages_isSet;

public:
	RestGetMessagesReply();
	RestGetMessagesReply(const std::vector<Message> & messages);
	virtual ~RestGetMessagesReply();

	const std::vector<Message> & getMessages() const;

	std::vector<Message> & getMessagesMutable();

	RestGetMessagesReply& setMessages(const std::vector<Message> & messages);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasMessages() const;

	RestGetMessagesReply& unsetMessages();

	bool operator==(const RestGetMessagesReply& other) const;
	bool operator!=(const RestGetMessagesReply& other) const;


							
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
		case _field_messages_id:
			reader.readField(_field_messages_metadata(), context, getMessagesMutable());
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
				visitor.visit(getMessages(), _field_messages_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isMessagesSet(mgen::SHALLOW))
					visitor.visit(getMessages(), _field_messages_metadata());
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
				visitor.visit(getMessagesMutable(), _field_messages_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isMessagesSet(mgen::SHALLOW))
					visitor.visit(getMessagesMutable(), _field_messages_metadata());
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

	RestGetMessagesReply& _setMessagesSet(const bool state, const mgen::FieldSetDepth depth);

	RestGetMessagesReply& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isMessagesSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	RestGetMessagesReply * _deepCopy() const;

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
		  
	static const long long _type_id = 2205916529773378471LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = -1478;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_messages_metadata();

	static const short _field_messages_id = -11327;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class RestGetMessagesReply

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

#endif
