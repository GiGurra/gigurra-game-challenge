/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#ifndef SE_GIGURRA_AICHALLENGE_CMDLINEARGS
#define SE_GIGURRA_AICHALLENGE_CMDLINEARGS

#include "mgen/classes/MGenBase.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {

class CmdLineArgs : public mgen::MGenBase /* custom_ifcs_begin *//* custom_ifcs_end */ {
private:
	int m_zmqPort;
	int m_restPort;
	bool _m_zmqPort_isSet;
	bool _m_restPort_isSet;

public:
	CmdLineArgs();
	CmdLineArgs(const int& zmqPort,
			const int& restPort);
	virtual ~CmdLineArgs();

	const int& getZmqPort() const;
	const int& getRestPort() const;

	int& getZmqPortMutable();
	int& getRestPortMutable();

	CmdLineArgs& setZmqPort(const int& zmqPort);
	CmdLineArgs& setRestPort(const int& restPort);

	/* custom_methods_begin *//* custom_methods_end */

	bool hasZmqPort() const;
	bool hasRestPort() const;

	CmdLineArgs& unsetZmqPort();
	CmdLineArgs& unsetRestPort();

	bool operator==(const CmdLineArgs& other) const;
	bool operator!=(const CmdLineArgs& other) const;


							
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
		case _field_zmqPort_id:
			reader.readField(_field_zmqPort_metadata(), context, getZmqPortMutable());
			break;
		case _field_restPort_id:
			reader.readField(_field_restPort_metadata(), context, getRestPortMutable());
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
				visitor.visit(getZmqPort(), _field_zmqPort_metadata());
				visitor.visit(getRestPort(), _field_restPort_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isZmqPortSet(mgen::SHALLOW))
					visitor.visit(getZmqPort(), _field_zmqPort_metadata());
				if (_isRestPortSet(mgen::SHALLOW))
					visitor.visit(getRestPort(), _field_restPort_metadata());
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
				visitor.visit(getZmqPortMutable(), _field_zmqPort_metadata());
				visitor.visit(getRestPortMutable(), _field_restPort_metadata());
				visitor.endVisit();
				break;
			}
			default /* case mgen::ALL_SET_NONTRANSIENT */ : {
				visitor.beginVisit(*this, _numFieldsSet(mgen::SHALLOW, false));
				if (_isZmqPortSet(mgen::SHALLOW))
					visitor.visit(getZmqPortMutable(), _field_zmqPort_metadata());
				if (_isRestPortSet(mgen::SHALLOW))
					visitor.visit(getRestPortMutable(), _field_restPort_metadata());
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

	CmdLineArgs& _setZmqPortSet(const bool state, const mgen::FieldSetDepth depth);
	CmdLineArgs& _setRestPortSet(const bool state, const mgen::FieldSetDepth depth);

	CmdLineArgs& _setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth);

	int _numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const;

	bool _isZmqPortSet(const mgen::FieldSetDepth depth) const;
	bool _isRestPortSet(const mgen::FieldSetDepth depth) const;

	bool _validate(const mgen::FieldSetDepth depth) const;

	bool _equals(const mgen::MGenBase& other) const;

	CmdLineArgs * _deepCopy() const;

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
		  
	static const long long _type_id = 3480774133642621864LL;
	static const std::vector<long long>& _type_ids();

	static const short _type_id_16bit = -20208;
	static const std::vector<short>& _type_ids_16bit();

	static const std::string& _type_id_16bit_base64();
	static const std::vector<std::string>& _type_ids_16bit_base64();

	static const std::string& _type_ids_16bit_base64_string();

	static const std::string& _type_name();
	static const std::vector<std::string>& _type_names();

	static const mgen::Field& _field_zmqPort_metadata();
	static const mgen::Field& _field_restPort_metadata();

	static const short _field_zmqPort_id = -19932;
	static const short _field_restPort_id = 18844;

	static const std::vector<mgen::Field>& _field_metadatas();

}; // End class CmdLineArgs

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

#endif
