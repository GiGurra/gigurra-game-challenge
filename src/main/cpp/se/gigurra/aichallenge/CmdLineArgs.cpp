/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/CmdLineArgs.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {

CmdLineArgs::CmdLineArgs() : 
		m_zmqPort(12345),
		m_restPort(8080),
		_m_zmqPort_isSet(true),
		_m_restPort_isSet(true) {
}

CmdLineArgs::CmdLineArgs(const int& zmqPort, 
			const int& restPort) : 
		m_zmqPort(zmqPort),
		m_restPort(restPort),
		_m_zmqPort_isSet(true),
		_m_restPort_isSet(true) {
}

CmdLineArgs::~CmdLineArgs() {
}

const int& CmdLineArgs::getZmqPort() const {
	return m_zmqPort;
}

const int& CmdLineArgs::getRestPort() const {
	return m_restPort;
}

int& CmdLineArgs::getZmqPortMutable() {
	_m_zmqPort_isSet = true;
	return m_zmqPort;
}

int& CmdLineArgs::getRestPortMutable() {
	_m_restPort_isSet = true;
	return m_restPort;
}

CmdLineArgs& CmdLineArgs::setZmqPort(const int& zmqPort) {
	m_zmqPort = zmqPort;
	_m_zmqPort_isSet = true;
	return *this;
}

CmdLineArgs& CmdLineArgs::setRestPort(const int& restPort) {
	m_restPort = restPort;
	_m_restPort_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool CmdLineArgs::hasZmqPort() const {
	return _isZmqPortSet(mgen::SHALLOW);
}

bool CmdLineArgs::hasRestPort() const {
	return _isRestPortSet(mgen::SHALLOW);
}

CmdLineArgs& CmdLineArgs::unsetZmqPort() {
	_setZmqPortSet(false, mgen::SHALLOW);
	return *this;
}

CmdLineArgs& CmdLineArgs::unsetRestPort() {
	_setRestPortSet(false, mgen::SHALLOW);
	return *this;
}

bool CmdLineArgs::operator==(const CmdLineArgs& other) const {
	return true
		 && _isZmqPortSet(mgen::SHALLOW) == other._isZmqPortSet(mgen::SHALLOW)
		 && _isRestPortSet(mgen::SHALLOW) == other._isRestPortSet(mgen::SHALLOW)
		 && getZmqPort() == other.getZmqPort()
		 && getRestPort() == other.getRestPort();
}

bool CmdLineArgs::operator!=(const CmdLineArgs& other) const {
	return !(*this == other);
}


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                    TYPE METADATA ACCESS AND SERIALIZATION METHODS                    *****
           *****          (accessed primarily by (de-)serializers and for ORM functionality)          *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  
const mgen::Field * CmdLineArgs::_fieldById(const short id) const {
	switch (id) {
	case _field_zmqPort_id:
		return &_field_zmqPort_metadata();
	case _field_restPort_id:
		return &_field_restPort_metadata();
	default:
		return 0;
	}
}

const mgen::Field * CmdLineArgs::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("zmqPort", &CmdLineArgs::_field_zmqPort_metadata())("restPort", &CmdLineArgs::_field_restPort_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long CmdLineArgs::_typeId() const {
	return _type_id;
}

const std::string& CmdLineArgs::_typeName() const {
	return _type_name();
}

const short CmdLineArgs::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& CmdLineArgs::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& CmdLineArgs::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& CmdLineArgs::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& CmdLineArgs::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& CmdLineArgs::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& CmdLineArgs::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& CmdLineArgs::_fieldMetadatas() const {
	return _field_metadatas();
}

CmdLineArgs& CmdLineArgs::_setZmqPortSet(const bool state, const mgen::FieldSetDepth depth) {
	if (state && !_isZmqPortSet(mgen::SHALLOW))
		m_zmqPort = 12345;
	if (!state)
		m_zmqPort = 0;
	_m_zmqPort_isSet = state;
	return *this;
}

CmdLineArgs& CmdLineArgs::_setRestPortSet(const bool state, const mgen::FieldSetDepth depth) {
	if (state && !_isRestPortSet(mgen::SHALLOW))
		m_restPort = 8080;
	if (!state)
		m_restPort = 0;
	_m_restPort_isSet = state;
	return *this;
}

CmdLineArgs& CmdLineArgs::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setZmqPortSet(state, depth);
	_setRestPortSet(state, depth);
	return *this;
}

int CmdLineArgs::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isZmqPortSet(depth) ? 1 : 0;
	out += _isRestPortSet(depth) ? 1 : 0;
	return out;
}

bool CmdLineArgs::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_zmqPort_id):
			return _isZmqPortSet(depth);
		case (_field_restPort_id):
			return _isRestPortSet(depth);
		default:
			return false;
	}
}

bool CmdLineArgs::_isZmqPortSet(const mgen::FieldSetDepth depth) const {
	return _m_zmqPort_isSet;
}

bool CmdLineArgs::_isRestPortSet(const mgen::FieldSetDepth depth) const {
	return _m_restPort_isSet;
}

bool CmdLineArgs::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool CmdLineArgs::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const CmdLineArgs&>(other) == *this;
}

CmdLineArgs * CmdLineArgs::_deepCopy() const {
	return new CmdLineArgs(*this);
}

mgen::MGenBase * CmdLineArgs::_newInstance() {
	return new CmdLineArgs;
}


							
/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****                                    TYPE METADATA                                     *****
           *****             (generally speaking, it's a bad idea to edit this manually)              *****	
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/	 		  
		  
const std::string& CmdLineArgs::_type_name() {
	static const std::string out("se.gigurra.aichallenge.CmdLineArgs");
	return out;
}

const std::vector<long long>& CmdLineArgs::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 3480774133642621864LL;
	return out;
}

const std::vector<short>& CmdLineArgs::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -20208;
	return out;
}

const std::vector<std::string>& CmdLineArgs::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.CmdLineArgs";
	return out;
}

const std::vector<std::string>& CmdLineArgs::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "sRA";
	return out;
}

const std::string& CmdLineArgs::_type_ids_16bit_base64_string() {
	static const std::string out("sRA");
	return out;
}

const std::string& CmdLineArgs::_type_id_16bit_base64() {
	static const std::string out("sRA");
	return out;
}

const std::vector<mgen::Field>& CmdLineArgs::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_zmqPort_metadata() << _field_restPort_metadata();
	return out;
}

const mgen::Field& CmdLineArgs::_field_zmqPort_metadata() {
	static const mgen::Field out(-19932, "zmqPort");
	return out;
}

const mgen::Field& CmdLineArgs::_field_restPort_metadata() {
	static const mgen::Field out(18844, "restPort");
	return out;
}

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

