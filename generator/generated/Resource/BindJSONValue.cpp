
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Resource/JSONValue.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Resource/JSONValue.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Resource/JSONValue.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_JSONValue(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::JSONValue>( "JSONValue"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::JSONValue(),
        Urho3D::JSONValue(bool),
        Urho3D::JSONValue(int),
        Urho3D::JSONValue(unsigned),
        Urho3D::JSONValue(float),
        Urho3D::JSONValue(double),
        Urho3D::JSONValue(const  String &),
        Urho3D::JSONValue(const char *),
        Urho3D::JSONValue(const  JSONArray &),
        Urho3D::JSONValue(const  JSONObject &),
        Urho3D::JSONValue(const  JSONValue &)>();

// Members

    /*Return value type. BIND_AS_PROPERTY*//*() const*/
    type["GetValueType"] = static_cast<JSONValueType (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::GetValueType) ;
    /*Return number type. BIND_AS_PROPERTY*//*() const*/
    type["GetNumberType"] = static_cast<JSONNumberType (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::GetNumberType) ;
    /*Return value type's name. BIND_AS_PROPERTY*//*() const*/
    type["GetValueTypeName"] = static_cast<String (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::GetValueTypeName) ;
    /*Return number type's name. BIND_AS_PROPERTY*//*() const*/
    type["GetNumberTypeName"] = static_cast<String (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::GetNumberTypeName) ;
    /*Check is null. BIND_AS_ALIAS_get_isNull*//*() const*/
    type["IsNull"] = static_cast<bool (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::IsNull) ;
    /*Check is boolean. BIND_AS_ALIAS_get_isBool*//*() const*/
    type["IsBool"] = static_cast<bool (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::IsBool) ;
    /*Check is number. BIND_AS_ALIAS_get_isNumber*//*() const*/
    type["IsNumber"] = static_cast<bool (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::IsNumber) ;
    /*Check is string. BIND_AS_ALIAS_get_isString*//*() const*/
    type["IsString"] = static_cast<bool (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::IsString) ;
    /*Check is array. BIND_AS_ALIAS_get_isArray*//*() const*/
    type["IsArray"] = static_cast<bool (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::IsArray) ;
    /*Check is object. BIND_AS_ALIAS_get_isObject*//*() const*/
    type["IsObject"] = static_cast<bool (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::IsObject) ;
    /*Return JSON array value.*//*() const*/
    type["GetArray"] = static_cast<const JSONArray& (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::GetArray) ;
    /*Return JSON object value.*//*() const*/
    type["GetObject"] = static_cast<const JSONObject& (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::GetObject) ;
    /*Add JSON value at end.*//*(const JSONValue &value)*/
    type["Push"] = static_cast<void (Urho3D::JSONValue::*)(const  JSONValue &)>(&Urho3D::JSONValue::Push) ;
    /*Remove the last JSON value.*//*()*/
    type["Pop"] = static_cast<void (Urho3D::JSONValue::*)()>(&Urho3D::JSONValue::Pop) ;
    /*Insert an JSON value at position.*//*(unsigned pos, const JSONValue &value)*/
    type["Insert"] = static_cast<void (Urho3D::JSONValue::*)(unsigned, const  JSONValue &)>(&Urho3D::JSONValue::Insert) ;
    /*Resize array.*//*(unsigned newSize)*/
    type["Resize"] = static_cast<void (Urho3D::JSONValue::*)(unsigned)>(&Urho3D::JSONValue::Resize) ;
    /*Return size of array or number of keys in object. BIND_AS_PROPERTY*//*() const*/
    type["Size"] = static_cast<unsigned (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::Size) ;
    /*Set JSON value with key.*//*(const String &key, const JSONValue &value)*/
    type["Set"] = static_cast<void (Urho3D::JSONValue::*)(const  String &, const  JSONValue &)>(&Urho3D::JSONValue::Set) ;
    /*Return JSON value with key.*//*(const String &key) const*/
    type["Get"] = static_cast<const JSONValue& (Urho3D::JSONValue::*)(const  String &) const>(&Urho3D::JSONValue::Get) ;
    /*Return whether contains a pair with key.*//*(const String &key) const*/
    type["Contains"] = static_cast<bool (Urho3D::JSONValue::*)(const  String &) const>(&Urho3D::JSONValue::Contains) ;
    /*Clear array or object.*//*()*/
    type["Clear"] = static_cast<void (Urho3D::JSONValue::*)()>(&Urho3D::JSONValue::Clear) ;
    /*Return a variant.*//*() const*/
    type["GetVariant"] = static_cast<Variant (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::GetVariant) ;
    /*Return a variant with type.*//*(VariantType type) const*/
    type["GetVariantValue"] = static_cast<Variant (Urho3D::JSONValue::*)(VariantType) const>(&Urho3D::JSONValue::GetVariantValue) ;
    /*Return a variant map.*//*() const*/
    type["GetVariantMap"] = static_cast<VariantMap (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::GetVariantMap) ;
    /*Return a variant vector.*//*() const*/
    type["GetVariantVector"] = static_cast<VariantVector (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::GetVariantVector) ;
    type["operator_assign"] = sol::overload(
        static_cast<JSONValue& (Urho3D::JSONValue::*)(bool)>(&Urho3D::JSONValue::operator=) ,
        static_cast<JSONValue& (Urho3D::JSONValue::*)(int)>(&Urho3D::JSONValue::operator=) ,
        static_cast<JSONValue& (Urho3D::JSONValue::*)(unsigned)>(&Urho3D::JSONValue::operator=) ,
        static_cast<JSONValue& (Urho3D::JSONValue::*)(float)>(&Urho3D::JSONValue::operator=) ,
        static_cast<JSONValue& (Urho3D::JSONValue::*)(double)>(&Urho3D::JSONValue::operator=) ,
        static_cast<JSONValue& (Urho3D::JSONValue::*)(const  String &)>(&Urho3D::JSONValue::operator=) ,
        static_cast<JSONValue& (Urho3D::JSONValue::*)(const char *)>(&Urho3D::JSONValue::operator=) ,
        static_cast<JSONValue& (Urho3D::JSONValue::*)(const  JSONArray &)>(&Urho3D::JSONValue::operator=) ,
        static_cast<JSONValue& (Urho3D::JSONValue::*)(const  JSONObject &)>(&Urho3D::JSONValue::operator=) ,
        static_cast<JSONValue& (Urho3D::JSONValue::*)(const  JSONValue &)>(&Urho3D::JSONValue::operator=)  );
    type["GetBool"] = sol::overload(
        static_cast<bool (Urho3D::JSONValue::*)(bool) const>(&Urho3D::JSONValue::GetBool) ,
        [](Urho3D::JSONValue& self){ return self.GetBool(); } );
    type["GetInt"] = sol::overload(
        static_cast<int (Urho3D::JSONValue::*)(int) const>(&Urho3D::JSONValue::GetInt) ,
        [](Urho3D::JSONValue& self){ return self.GetInt(); } );
    type["GetUInt"] = sol::overload(
        static_cast<unsigned (Urho3D::JSONValue::*)(unsigned) const>(&Urho3D::JSONValue::GetUInt) ,
        [](Urho3D::JSONValue& self){ return self.GetUInt(); } );
    type["GetFloat"] = sol::overload(
        static_cast<float (Urho3D::JSONValue::*)(float) const>(&Urho3D::JSONValue::GetFloat) ,
        [](Urho3D::JSONValue& self){ return self.GetFloat(); } );
    type["GetDouble"] = sol::overload(
        static_cast<double (Urho3D::JSONValue::*)(double) const>(&Urho3D::JSONValue::GetDouble) ,
        [](Urho3D::JSONValue& self){ return self.GetDouble(); } );
    type["GetString"] = sol::overload(
        static_cast<const String& (Urho3D::JSONValue::*)(const  String &) const>(&Urho3D::JSONValue::GetString) ,
        [](Urho3D::JSONValue& self){ return self.GetString(); } );
    type["GetCString"] = sol::overload(
        static_cast<const char* (Urho3D::JSONValue::*)(const char *) const>(&Urho3D::JSONValue::GetCString) ,
        [](Urho3D::JSONValue& self){ return self.GetCString(); } );
    type["op__newindex"] = sol::overload(
        static_cast<JSONValue& (Urho3D::JSONValue::*)(unsigned)>(&Urho3D::JSONValue::operator[]) ,
        static_cast<JSONValue& (Urho3D::JSONValue::*)(const  String &)>(&Urho3D::JSONValue::operator[])  );
    type["op__index"] = sol::overload(
        static_cast<const JSONValue& (Urho3D::JSONValue::*)(unsigned) const>(&Urho3D::JSONValue::operator[]) ,
        static_cast<const JSONValue& (Urho3D::JSONValue::*)(const  String &) const>(&Urho3D::JSONValue::operator[])  );
    type["Erase"] = sol::overload(
        static_cast<void (Urho3D::JSONValue::*)(unsigned, unsigned)>(&Urho3D::JSONValue::Erase) ,
        [](Urho3D::JSONValue& self, unsigned pos){ self.Erase(pos); },
        static_cast<bool (Urho3D::JSONValue::*)(const  String &)>(&Urho3D::JSONValue::Erase)  );
# if 0 // SKIPPED
    type["Begin"] = sol::overload(
        static_cast<JSONObjectIterator (Urho3D::JSONValue::*)()>(&Urho3D::JSONValue::Begin) ,
        static_cast<ConstJSONObjectIterator (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::Begin)  );
# endif
# if 0 // SKIPPED
    type["End"] = sol::overload(
        static_cast<JSONObjectIterator (Urho3D::JSONValue::*)()>(&Urho3D::JSONValue::End) ,
        static_cast<ConstJSONObjectIterator (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::End)  );
# endif
    type["SetType"] = sol::overload(
        static_cast<void (Urho3D::JSONValue::*)(JSONValueType, JSONNumberType)>(&Urho3D::JSONValue::SetType) ,
        [](Urho3D::JSONValue& self, JSONValueType valueType){ self.SetType(valueType); } );
    type["SetVariant"] = sol::overload(
        static_cast<void (Urho3D::JSONValue::*)(const  Variant &, Context *)>(&Urho3D::JSONValue::SetVariant) ,
        [](Urho3D::JSONValue& self, const  Variant & variant){ self.SetVariant(variant); } );
    type["SetVariantValue"] = sol::overload(
        static_cast<void (Urho3D::JSONValue::*)(const  Variant &, Context *)>(&Urho3D::JSONValue::SetVariantValue) ,
        [](Urho3D::JSONValue& self, const  Variant & variant){ self.SetVariantValue(variant); } );
    type["SetVariantMap"] = sol::overload(
        static_cast<void (Urho3D::JSONValue::*)(const  VariantMap &, Context *)>(&Urho3D::JSONValue::SetVariantMap) ,
        [](Urho3D::JSONValue& self, const  VariantMap & variantMap){ self.SetVariantMap(variantMap); } );
    type["SetVariantVector"] = sol::overload(
        static_cast<void (Urho3D::JSONValue::*)(const  VariantVector &, Context *)>(&Urho3D::JSONValue::SetVariantVector) ,
        [](Urho3D::JSONValue& self, const  VariantVector & variantVector){ self.SetVariantVector(variantVector); } );
    type["array"] = sol::property(static_cast<bool (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::IsArray) );
    type["bool"] = sol::property(static_cast<bool (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::IsBool) );
    type["null"] = sol::property(static_cast<bool (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::IsNull) );
    type["number"] = sol::property(static_cast<bool (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::IsNumber) );
    type["numberType"] = sol::property(static_cast<JSONNumberType (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::GetNumberType) );
    type["numberTypeName"] = sol::property(static_cast<String (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::GetNumberTypeName) );
    type["object"] = sol::property(static_cast<bool (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::IsObject) );
    type["size"] = sol::property(static_cast<unsigned (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::Size) );
    type["string"] = sol::property(static_cast<bool (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::IsString) );
    type["valueType"] = sol::property(static_cast<JSONValueType (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::GetValueType) );
    type["valueTypeName"] = sol::property(static_cast<String (Urho3D::JSONValue::*)() const>(&Urho3D::JSONValue::GetValueTypeName) );
//    type["boolValue_"] = &Urho3D::JSONValue::boolValue_;
//    type["numberValue_"] = &Urho3D::JSONValue::numberValue_;
//    type["stringValue_"] = &Urho3D::JSONValue::stringValue_;
//    type["arrayValue_"] = &Urho3D::JSONValue::arrayValue_;
//    type["objectValue_"] = &Urho3D::JSONValue::objectValue_;

}

