/********************************************************************************************************************
 ********************************************************************************************************************
 ********************************************************************************************************************
           *****                                                                                      *****
           *****               GENERATED WITH MGEN (SNAPSHOT 2015-06-17 20:18:26 +0200)               *****
           *****                                                                                      *****		
 ********************************************************************************************************************
 ********************************************************************************************************************/

#include "se/gigurra/aichallenge/RestGetAvail.h"
#include "mgen/util/validation.h"
#include "mgen/util/stlLiteral.h"
/* custom_includes_begin *//* custom_includes_end */

namespace se {
namespace gigurra {
namespace aichallenge {

RestGetAvail::RestGetAvail() : 
		_m_msgtype_isSet(false) {
}

RestGetAvail::RestGetAvail(const std::string& msgtype) : 
		m_msgtype(msgtype),
		_m_msgtype_isSet(true) {
}

RestGetAvail::~RestGetAvail() {
}

const std::string& RestGetAvail::getMsgtype() const {
	return m_msgtype;
}

std::string& RestGetAvail::getMsgtypeMutable() {
	_m_msgtype_isSet = true;
	return m_msgtype;
}

RestGetAvail& RestGetAvail::setMsgtype(const std::string& msgtype) {
	m_msgtype = msgtype;
	_m_msgtype_isSet = true;
	return *this;
}

/* custom_methods_begin *//* custom_methods_end */

bool RestGetAvail::hasMsgtype() const {
	return _isMsgtypeSet(mgen::SHALLOW);
}

RestGetAvail& RestGetAvail::unsetMsgtype() {
	_setMsgtypeSet(false, mgen::SHALLOW);
	return *this;
}

bool RestGetAvail::operator==(const RestGetAvail& other) const {
	return true
		 && _isMsgtypeSet(mgen::SHALLOW) == other._isMsgtypeSet(mgen::SHALLOW)
		 && getMsgtype() == other.getMsgtype();
}

bool RestGetAvail::operator!=(const RestGetAvail& other) const {
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
		  
const mgen::Field * RestGetAvail::_fieldById(const short id) const {
	switch (id) {
	case _field_msgtype_id:
		return &_field_msgtype_metadata();
	default:
		return 0;
	}
}

const mgen::Field * RestGetAvail::_fieldByName(const std::string& name) const {
	static const std::map<std::string, const mgen::Field*> name2meta = mgen::make_map<std::string, const mgen::Field*>()("msgtype", &RestGetAvail::_field_msgtype_metadata());
	const std::map<std::string, const mgen::Field*>::const_iterator it = name2meta.find(name);
	return it != name2meta.end() ? it->second : 0;
}

const long long RestGetAvail::_typeId() const {
	return _type_id;
}

const std::string& RestGetAvail::_typeName() const {
	return _type_name();
}

const short RestGetAvail::_typeId16Bit() const {
	return _type_id_16bit;
}

const std::vector<long long>& RestGetAvail::_typeIds() const {
	return _type_ids();
}

const std::vector<short>& RestGetAvail::_typeIds16Bit() const {
	return _type_ids_16bit();
}

const std::string& RestGetAvail::_typeId16BitBase64() const {
	return _type_id_16bit_base64();
}

const std::vector<std::string>& RestGetAvail::_typeNames() const {
	return _type_names();
}

const std::vector<std::string>& RestGetAvail::_typeIds16BitBase64() const {
	return _type_ids_16bit_base64();
}

const std::string& RestGetAvail::_typeIds16BitBase64String() const {
	return _type_ids_16bit_base64_string();
}

const std::vector<mgen::Field>& RestGetAvail::_fieldMetadatas() const {
	return _field_metadatas();
}

RestGetAvail& RestGetAvail::_setMsgtypeSet(const bool state, const mgen::FieldSetDepth depth) {
	if (!state)
		m_msgtype = "";
	_m_msgtype_isSet = state;
	return *this;
}

RestGetAvail& RestGetAvail::_setAllFieldsSet(const bool state, const mgen::FieldSetDepth depth) { 
	_setMsgtypeSet(state, depth);
	return *this;
}

int RestGetAvail::_numFieldsSet(const mgen::FieldSetDepth depth, const bool includeTransient) const {
	int out = 0;
	out += _isMsgtypeSet(depth) ? 1 : 0;
	return out;
}

bool RestGetAvail::_isFieldSet(const mgen::Field& field, const mgen::FieldSetDepth depth) const {
	switch(field.id()) {
		case (_field_msgtype_id):
			return _isMsgtypeSet(depth);
		default:
			return false;
	}
}

bool RestGetAvail::_isMsgtypeSet(const mgen::FieldSetDepth depth) const {
	return _m_msgtype_isSet;
}

bool RestGetAvail::_validate(const mgen::FieldSetDepth depth) const { 
	if (depth == mgen::SHALLOW) {
		return true;
	} else {
		return true;
	}
}

bool RestGetAvail::_equals(const mgen::MGenBase& other) const {
	return _type_id == other._typeId() && static_cast<const RestGetAvail&>(other) == *this;
}

RestGetAvail * RestGetAvail::_deepCopy() const {
	return new RestGetAvail(*this);
}

mgen::MGenBase * RestGetAvail::_newInstance() {
	return new RestGetAvail;
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
		  
const std::string& RestGetAvail::_type_name() {
	static const std::string out("se.gigurra.aichallenge.RestGetAvail");
	return out;
}

const std::vector<long long>& RestGetAvail::_type_ids() {
	static const std::vector<long long> out = mgen::make_vector<long long>() << 1369439193061359418LL << 9040306092979076215LL << 6044465482077956727LL;
	return out;
}

const std::vector<short>& RestGetAvail::_type_ids_16bit() {
	static const std::vector<short> out = mgen::make_vector<short>() << -15038 << -16268 << -21391;
	return out;
}

const std::vector<std::string>& RestGetAvail::_type_names() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "se.gigurra.aichallenge.Message" << "se.gigurra.aichallenge.RestMessage" << "se.gigurra.aichallenge.RestGetAvail";
	return out;
}

const std::vector<std::string>& RestGetAvail::_type_ids_16bit_base64() {
	static const std::vector<std::string> out = mgen::make_vector<std::string>() << "xUI" << "wHQ" << "rHE";
	return out;
}

const std::string& RestGetAvail::_type_ids_16bit_base64_string() {
	static const std::string out("xUIwHQrHE");
	return out;
}

const std::string& RestGetAvail::_type_id_16bit_base64() {
	static const std::string out("rHE");
	return out;
}

const std::vector<mgen::Field>& RestGetAvail::_field_metadatas() {
	static const std::vector<mgen::Field> out = mgen::make_vector<mgen::Field>() << _field_msgtype_metadata();
	return out;
}

const mgen::Field& RestGetAvail::_field_msgtype_metadata() {
	static const mgen::Field out(-22547, "msgtype");
	return out;
}

} // End namespace aichallenge
} // End namespace gigurra
} // End namespace se

