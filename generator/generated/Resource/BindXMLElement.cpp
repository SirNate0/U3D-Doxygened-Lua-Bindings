
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Resource/XMLElement.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Resource/XMLElement.h>
#include <PugiXml/pugixml.hpp>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_XPathQuery(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::XPathQuery>( "XPathQuery"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::XPathQuery(),
        Urho3D::XPathQuery(const  String &, const  String &),
        Urho3D::XPathQuery(const  String &)>();

// Members

    /*Bind query object with variable set.*//*()*/
    type["Bind"] = static_cast<void (Urho3D::XPathQuery::*)()>(&Urho3D::XPathQuery::Bind) ;
    /*Clear by removing all variables and XPath query object.*//*()*/
    type["Clear"] = static_cast<void (Urho3D::XPathQuery::*)()>(&Urho3D::XPathQuery::Clear) ;
    /*Evaluate XPath query and expecting a boolean return value.*//*(const XMLElement &element) const*/
    type["EvaluateToBool"] = static_cast<bool (Urho3D::XPathQuery::*)(const  XMLElement &) const>(&Urho3D::XPathQuery::EvaluateToBool) ;
    /*Evaluate XPath query and expecting a float return value.*//*(const XMLElement &element) const*/
    type["EvaluateToFloat"] = static_cast<float (Urho3D::XPathQuery::*)(const  XMLElement &) const>(&Urho3D::XPathQuery::EvaluateToFloat) ;
    /*Evaluate XPath query and expecting a string return value.*//*(const XMLElement &element) const*/
    type["EvaluateToString"] = static_cast<String (Urho3D::XPathQuery::*)(const  XMLElement &) const>(&Urho3D::XPathQuery::EvaluateToString) ;
    /*Evaluate XPath query and expecting an XPath query result set as return value. Note: The  XPathResultSet return value must be stored in a lhs variable to ensure the underlying xpath_node_set* is still valid while performing  XPathResultSet::FirstResult(),  XPathResultSet::operator [], and  XMLElement::NextResult().*//*(const XMLElement &element) const*/
    type["Evaluate"] = static_cast<XPathResultSet (Urho3D::XPathQuery::*)(const  XMLElement &) const>(&Urho3D::XPathQuery::Evaluate) ;
    /*Return query string. BIND_AS_PROPERTY*//*() const*/
    type["GetQuery"] = static_cast<String (Urho3D::XPathQuery::*)() const>(&Urho3D::XPathQuery::GetQuery) ;
    /*Return pugixml xpath_query.*//*() const*/
    type["GetXPathQuery"] = static_cast<pugi::xpath_query* (Urho3D::XPathQuery::*)() const>(&Urho3D::XPathQuery::GetXPathQuery) ;
    /*Return pugixml xpath_variable_set.*//*() const*/
    type["GetXPathVariableSet"] = static_cast<pugi::xpath_variable_set* (Urho3D::XPathQuery::*)() const>(&Urho3D::XPathQuery::GetXPathVariableSet) ;
    type["SetVariable"] = sol::overload(
        static_cast<bool (Urho3D::XPathQuery::*)(const  String &, bool)>(&Urho3D::XPathQuery::SetVariable) ,
        static_cast<bool (Urho3D::XPathQuery::*)(const  String &, float)>(&Urho3D::XPathQuery::SetVariable) ,
        static_cast<bool (Urho3D::XPathQuery::*)(const  String &, const  String &)>(&Urho3D::XPathQuery::SetVariable) ,
        static_cast<bool (Urho3D::XPathQuery::*)(const char *, const char *)>(&Urho3D::XPathQuery::SetVariable) ,
        static_cast<bool (Urho3D::XPathQuery::*)(const  String &, const  XPathResultSet &)>(&Urho3D::XPathQuery::SetVariable)  );
    type["SetQuery"] = sol::overload(
        static_cast<bool (Urho3D::XPathQuery::*)(const  String &, const  String &, bool)>(&Urho3D::XPathQuery::SetQuery) ,
        [](Urho3D::XPathQuery& self, const  String & queryString, const  String & variableString){ return self.SetQuery(queryString, variableString); },
        [](Urho3D::XPathQuery& self, const  String & queryString){ return self.SetQuery(queryString); } );
    type["query"] = sol::property(static_cast<String (Urho3D::XPathQuery::*)() const>(&Urho3D::XPathQuery::GetQuery) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Resource/XMLElement.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Matrix4.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Math/Vector4.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Resource/XMLFile.h>
#include <PugiXml/pugixml.hpp>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_XMLElement(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::XMLElement>( "XMLElement"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::XMLElement(),
        Urho3D::XMLElement(XMLFile *, pugi::xml_node_struct *),
        Urho3D::XMLElement(XMLFile *, const  XPathResultSet *, const pugi::xpath_node *, unsigned),
        Urho3D::XMLElement(const  XMLElement &)>();

// Members

    /*Assignment operator.*//*(const XMLElement &rhs)*/
    type["operator_assign"] = static_cast<XMLElement& (Urho3D::XMLElement::*)(const  XMLElement &)>(&Urho3D::XMLElement::operator=) ;
    /*Remove element from its parent.*//*()*/
    type["Remove"] = static_cast<bool (Urho3D::XMLElement::*)()>(&Urho3D::XMLElement::Remove) ;
    /*Select an element/attribute using XPath query.*//*(const XPathQuery &query) const*/
    type["SelectSinglePrepared"] = static_cast<XMLElement (Urho3D::XMLElement::*)(const  XPathQuery &) const>(&Urho3D::XMLElement::SelectSinglePrepared) ;
    /*Select elements/attributes using XPath query.*//*(const XPathQuery &query) const*/
    type["SelectPrepared"] = static_cast<XPathResultSet (Urho3D::XMLElement::*)(const  XPathQuery &) const>(&Urho3D::XMLElement::SelectPrepared) ;
    /*Set a bool attribute.*//*(const String &name, bool value)*/
    type["SetBool"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, bool)>(&Urho3D::XMLElement::SetBool) ;
    /*Set a  BoundingBox attribute.*//*(const BoundingBox &value)*/
    type["SetBoundingBox"] = static_cast<bool (Urho3D::XMLElement::*)(const  BoundingBox &)>(&Urho3D::XMLElement::SetBoundingBox) ;
    /*Set a color attribute.*//*(const String &name, const Color &value)*/
    type["SetColor"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, const  Color &)>(&Urho3D::XMLElement::SetColor) ;
    /*Set a float attribute.*//*(const String &name, float value)*/
    type["SetFloat"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, float)>(&Urho3D::XMLElement::SetFloat) ;
    /*Set a double attribute.*//*(const String &name, double value)*/
    type["SetDouble"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, double)>(&Urho3D::XMLElement::SetDouble) ;
    /*Set an unsigned integer attribute.*//*(const String &name, unsigned value)*/
    type["SetUInt"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, unsigned)>(&Urho3D::XMLElement::SetUInt) ;
    /*Set an integer attribute.*//*(const String &name, int value)*/
    type["SetInt"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, int)>(&Urho3D::XMLElement::SetInt) ;
    /*Set an unsigned long long integer attribute.*//*(const String &name, unsigned long long value)*/
    type["SetUInt64"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, unsigned long long)>(&Urho3D::XMLElement::SetUInt64) ;
    /*Set a long long integer attribute.*//*(const String &name, long long value)*/
    type["SetInt64"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, long long)>(&Urho3D::XMLElement::SetInt64) ;
    /*Set an  IntRect attribute.*//*(const String &name, const IntRect &value)*/
    type["SetIntRect"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, const  IntRect &)>(&Urho3D::XMLElement::SetIntRect) ;
    /*Set an  IntVector2 attribute.*//*(const String &name, const IntVector2 &value)*/
    type["SetIntVector2"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, const  IntVector2 &)>(&Urho3D::XMLElement::SetIntVector2) ;
    /*Set an  IntVector3 attribute.*//*(const String &name, const IntVector3 &value)*/
    type["SetIntVector3"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, const  IntVector3 &)>(&Urho3D::XMLElement::SetIntVector3) ;
    /*Set a  Rect attribute.*//*(const String &name, const Rect &value)*/
    type["SetRect"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, const  Rect &)>(&Urho3D::XMLElement::SetRect) ;
    /*Set a quaternion attribute.*//*(const String &name, const Quaternion &value)*/
    type["SetQuaternion"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, const  Quaternion &)>(&Urho3D::XMLElement::SetQuaternion) ;
    /*Set a string attribute.*//*(const String &name, const String &value)*/
    type["SetString"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, const  String &)>(&Urho3D::XMLElement::SetString) ;
    /*Set a variant attribute.*//*(const Variant &value)*/
    type["SetVariant"] = static_cast<bool (Urho3D::XMLElement::*)(const  Variant &)>(&Urho3D::XMLElement::SetVariant) ;
    /*Set a variant attribute excluding the type.*//*(const Variant &value)*/
    type["SetVariantValue"] = static_cast<bool (Urho3D::XMLElement::*)(const  Variant &)>(&Urho3D::XMLElement::SetVariantValue) ;
    /*Set a resource reference attribute.*//*(const ResourceRef &value)*/
    type["SetResourceRef"] = static_cast<bool (Urho3D::XMLElement::*)(const  ResourceRef &)>(&Urho3D::XMLElement::SetResourceRef) ;
    /*Set a resource reference list attribute.*//*(const ResourceRefList &value)*/
    type["SetResourceRefList"] = static_cast<bool (Urho3D::XMLElement::*)(const  ResourceRefList &)>(&Urho3D::XMLElement::SetResourceRefList) ;
    /*Set a variant vector attribute. Creates child elements as necessary.*//*(const VariantVector &value)*/
    type["SetVariantVector"] = static_cast<bool (Urho3D::XMLElement::*)(const  VariantVector &)>(&Urho3D::XMLElement::SetVariantVector) ;
    /*Set a string vector attribute. Creates child elements as necessary.*//*(const StringVector &value)*/
    type["SetStringVector"] = static_cast<bool (Urho3D::XMLElement::*)(const  StringVector &)>(&Urho3D::XMLElement::SetStringVector) ;
    /*Set a variant map attribute. Creates child elements as necessary.*//*(const VariantMap &value)*/
    type["SetVariantMap"] = static_cast<bool (Urho3D::XMLElement::*)(const  VariantMap &)>(&Urho3D::XMLElement::SetVariantMap) ;
    /*Set a  Vector2 attribute.*//*(const String &name, const Vector2 &value)*/
    type["SetVector2"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, const  Vector2 &)>(&Urho3D::XMLElement::SetVector2) ;
    /*Set a  Vector3 attribute.*//*(const String &name, const Vector3 &value)*/
    type["SetVector3"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, const  Vector3 &)>(&Urho3D::XMLElement::SetVector3) ;
    /*Set a  Vector4 attribute.*//*(const String &name, const Vector4 &value)*/
    type["SetVector4"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, const  Vector4 &)>(&Urho3D::XMLElement::SetVector4) ;
    /*Set a float,  Vector or Matrix attribute stored in a variant.*//*(const String &name, const Variant &value)*/
    type["SetVectorVariant"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, const  Variant &)>(&Urho3D::XMLElement::SetVectorVariant) ;
    /*Set a  Matrix3 attribute.*//*(const String &name, const Matrix3 &value)*/
    type["SetMatrix3"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, const  Matrix3 &)>(&Urho3D::XMLElement::SetMatrix3) ;
    /*Set a  Matrix3x4 attribute.*//*(const String &name, const Matrix3x4 &value)*/
    type["SetMatrix3x4"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, const  Matrix3x4 &)>(&Urho3D::XMLElement::SetMatrix3x4) ;
    /*Set a  Matrix4 attribute.*//*(const String &name, const Matrix4 &value)*/
    type["SetMatrix4"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &, const  Matrix4 &)>(&Urho3D::XMLElement::SetMatrix4) ;
    /*Return whether does not refer to an element or an XPath node. BIND_AS_ALIAS_get_isNull*//*() const*/
    type["IsNull"] = static_cast<bool (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::IsNull) ;
    /*Return whether refers to an element or an XPath node. BIND_AS_PROPERTY*//*() const*/
    type["NotNull"] = static_cast<bool (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::NotNull) ;
    /*Return true if refers to an element or an XPath node.*//*() const*/
    type["operator bool"] = static_cast<bool (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::operator bool) ;
    /*Return element name (or attribute name if it is an attribute only XPath query result). BIND_AS_PROPERTY*//*() const*/
    type["GetName"] = static_cast<String (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetName) ;
    /*Return parent element. BIND_AS_PROPERTY*//*() const*/
    type["GetParent"] = static_cast<XMLElement (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetParent) ;
    /*Return number of attributes. BIND_AS_PROPERTY*//*() const*/
    type["GetNumAttributes"] = static_cast<unsigned (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetNumAttributes) ;
    /*Return inner value, or empty if missing for nodes like <node>value</node>. BIND_AS_PROPERTY*//*() const*/
    type["GetValue"] = static_cast<String (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetValue) ;
    /*Return attribute as C string, or null if missing.*//*(const char *name) const*/
    type["GetAttributeCString"] = static_cast<const char* (Urho3D::XMLElement::*)(const char *) const>(&Urho3D::XMLElement::GetAttributeCString) ;
    /*Return names of all attributes.*//*() const*/
    type["GetAttributeNames"] = static_cast<Vector<String> (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetAttributeNames) ;
    /*Return bool attribute, or false if missing.*//*(const String &name) const*/
    type["GetBool"] = static_cast<bool (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetBool) ;
    /*Return bounding box attribute, or empty if missing.*//*() const*/
    type["GetBoundingBox"] = static_cast<BoundingBox (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetBoundingBox) ;
    /*Return a color attribute, or default if missing.*//*(const String &name) const*/
    type["GetColor"] = static_cast<Color (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetColor) ;
    /*Return a float attribute, or zero if missing.*//*(const String &name) const*/
    type["GetFloat"] = static_cast<float (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetFloat) ;
    /*Return a double attribute, or zero if missing.*//*(const String &name) const*/
    type["GetDouble"] = static_cast<double (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetDouble) ;
    /*Return an unsigned integer attribute, or zero if missing.*//*(const String &name) const*/
    type["GetUInt"] = static_cast<unsigned (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetUInt) ;
    /*Return an integer attribute, or zero if missing.*//*(const String &name) const*/
    type["GetInt"] = static_cast<int (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetInt) ;
    /*Return an unsigned long long integer attribute, or zero if missing.*//*(const String &name) const*/
    type["GetUInt64"] = static_cast<unsigned long long (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetUInt64) ;
    /*Return a long long integer attribute, or zero if missing.*//*(const String &name) const*/
    type["GetInt64"] = static_cast<long long (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetInt64) ;
    /*Return an  IntRect attribute, or default if missing.*//*(const String &name) const*/
    type["GetIntRect"] = static_cast<IntRect (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetIntRect) ;
    /*Return an  IntVector2 attribute, or default if missing.*//*(const String &name) const*/
    type["GetIntVector2"] = static_cast<IntVector2 (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetIntVector2) ;
    /*Return an  IntVector3 attribute, or default if missing.*//*(const String &name) const*/
    type["GetIntVector3"] = static_cast<IntVector3 (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetIntVector3) ;
    /*Return a  Rect attribute, or default if missing.*//*(const String &name) const*/
    type["GetRect"] = static_cast<Rect (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetRect) ;
    /*Return a quaternion attribute, or default if missing.*//*(const String &name) const*/
    type["GetQuaternion"] = static_cast<Quaternion (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetQuaternion) ;
    /*Return a variant attribute, or empty if missing.*//*() const*/
    type["GetVariant"] = static_cast<Variant (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetVariant) ;
    /*Return a variant attribute with static type.*//*(VariantType type) const*/
    type["GetVariantValue"] = static_cast<Variant (Urho3D::XMLElement::*)(VariantType) const>(&Urho3D::XMLElement::GetVariantValue) ;
    /*Return a resource reference attribute, or empty if missing.*//*() const*/
    type["GetResourceRef"] = static_cast<ResourceRef (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetResourceRef) ;
    /*Return a resource reference list attribute, or empty if missing.*//*() const*/
    type["GetResourceRefList"] = static_cast<ResourceRefList (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetResourceRefList) ;
    /*Return a variant vector attribute, or empty if missing.*//*() const*/
    type["GetVariantVector"] = static_cast<VariantVector (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetVariantVector) ;
    /*Return a string vector attribute, or empty if missing.*//*() const*/
    type["GetStringVector"] = static_cast<StringVector (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetStringVector) ;
    /*Return a variant map attribute, or empty if missing.*//*() const*/
    type["GetVariantMap"] = static_cast<VariantMap (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetVariantMap) ;
    /*Return a  Vector2 attribute, or zero vector if missing.*//*(const String &name) const*/
    type["GetVector2"] = static_cast<Vector2 (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetVector2) ;
    /*Return a  Vector3 attribute, or zero vector if missing.*//*(const String &name) const*/
    type["GetVector3"] = static_cast<Vector3 (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetVector3) ;
    /*Return a  Vector4 attribute, or zero vector if missing.*//*(const String &name) const*/
    type["GetVector4"] = static_cast<Vector4 (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetVector4) ;
    /*Return any  Vector attribute as  Vector4. Missing coordinates will be zero.*//*(const String &name) const*/
    type["GetVector"] = static_cast<Vector4 (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetVector) ;
    /*Return a float,  Vector or Matrix attribute as  Variant.*//*(const String &name) const*/
    type["GetVectorVariant"] = static_cast<Variant (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetVectorVariant) ;
    /*Return a  Matrix3 attribute, or zero matrix if missing.*//*(const String &name) const*/
    type["GetMatrix3"] = static_cast<Matrix3 (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetMatrix3) ;
    /*Return a  Matrix3x4 attribute, or zero matrix if missing.*//*(const String &name) const*/
    type["GetMatrix3x4"] = static_cast<Matrix3x4 (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetMatrix3x4) ;
    /*Return a  Matrix4 attribute, or zero matrix if missing.*//*(const String &name) const*/
    type["GetMatrix4"] = static_cast<Matrix4 (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetMatrix4) ;
    /*Return XML file. BIND_AS_PROPERTY*//*() const*/
    type["GetFile"] = [](Urho3D::XMLElement& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFile());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return pugixml xml_node_struct.*//*() const*/
# if 0 // SKIPPED
    type["GetNode"] = static_cast<pugi::xml_node_struct* (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetNode) ;
# endif
    /*Return XPath query result set.*//*() const*/
    type["GetXPathResultSet"] = static_cast<const XPathResultSet* (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetXPathResultSet) ;
    /*Return pugixml xpath_node.*//*() const*/
    type["GetXPathNode"] = static_cast<const pugi::xpath_node* (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetXPathNode) ;
    /*Return current result index.*//*() const*/
    type["GetXPathResultIndex"] = static_cast<unsigned (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetXPathResultIndex) ;
    /*Return next XPath query result. Only valid when this instance of  XMLElement is itself one of the query result in the result set. BIND_AS_PROPERTY*//*() const*/
    type["NextResult"] = static_cast<XMLElement (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::NextResult) ;
    type["CreateChild"] = sol::overload(
        static_cast<XMLElement (Urho3D::XMLElement::*)(const  String &)>(&Urho3D::XMLElement::CreateChild) ,
        static_cast<XMLElement (Urho3D::XMLElement::*)(const char *)>(&Urho3D::XMLElement::CreateChild)  );
    type["GetOrCreateChild"] = sol::overload(
        static_cast<XMLElement (Urho3D::XMLElement::*)(const  String &)>(&Urho3D::XMLElement::GetOrCreateChild) ,
        static_cast<XMLElement (Urho3D::XMLElement::*)(const char *)>(&Urho3D::XMLElement::GetOrCreateChild)  );
    type["AppendChild"] = sol::overload(
        static_cast<bool (Urho3D::XMLElement::*)(XMLElement, bool)>(&Urho3D::XMLElement::AppendChild) ,
        [](Urho3D::XMLElement& self, XMLElement element){ return self.AppendChild(element); } );
    type["RemoveChild"] = sol::overload(
        static_cast<bool (Urho3D::XMLElement::*)(const  XMLElement &)>(&Urho3D::XMLElement::RemoveChild) ,
        static_cast<bool (Urho3D::XMLElement::*)(const  String &)>(&Urho3D::XMLElement::RemoveChild) ,
        static_cast<bool (Urho3D::XMLElement::*)(const char *)>(&Urho3D::XMLElement::RemoveChild)  );
    type["RemoveChildren"] = sol::overload(
        static_cast<bool (Urho3D::XMLElement::*)(const  String &)>(&Urho3D::XMLElement::RemoveChildren) ,
        [](Urho3D::XMLElement& self){ return self.RemoveChildren(); },
        static_cast<bool (Urho3D::XMLElement::*)(const char *)>(&Urho3D::XMLElement::RemoveChildren)  );
    type["RemoveAttribute"] = sol::overload(
        static_cast<bool (Urho3D::XMLElement::*)(const  String &)>(&Urho3D::XMLElement::RemoveAttribute) ,
        [](Urho3D::XMLElement& self){ return self.RemoveAttribute(); },
        static_cast<bool (Urho3D::XMLElement::*)(const char *)>(&Urho3D::XMLElement::RemoveAttribute)  );
    type["SelectSingle"] = sol::overload(
        static_cast<XMLElement (Urho3D::XMLElement::*)(const  String &, pugi::xpath_variable_set *) const>(&Urho3D::XMLElement::SelectSingle) ,
        [](Urho3D::XMLElement& self, const  String & query){ return self.SelectSingle(query); } );
    type["Select"] = sol::overload(
        static_cast<XPathResultSet (Urho3D::XMLElement::*)(const  String &, pugi::xpath_variable_set *) const>(&Urho3D::XMLElement::Select) ,
        [](Urho3D::XMLElement& self, const  String & query){ return self.Select(query); } );
    type["SetValue"] = sol::overload(
        static_cast<bool (Urho3D::XMLElement::*)(const  String &)>(&Urho3D::XMLElement::SetValue) ,
        static_cast<bool (Urho3D::XMLElement::*)(const char *)>(&Urho3D::XMLElement::SetValue)  );
    type["SetAttribute"] = sol::overload(
        static_cast<bool (Urho3D::XMLElement::*)(const  String &, const  String &)>(&Urho3D::XMLElement::SetAttribute) ,
        static_cast<bool (Urho3D::XMLElement::*)(const char *, const char *)>(&Urho3D::XMLElement::SetAttribute) ,
        static_cast<bool (Urho3D::XMLElement::*)(const  String &)>(&Urho3D::XMLElement::SetAttribute) ,
        static_cast<bool (Urho3D::XMLElement::*)(const char *)>(&Urho3D::XMLElement::SetAttribute)  );
    type["SetBuffer"] = sol::overload(
        static_cast<bool (Urho3D::XMLElement::*)(const  String &, const void *, unsigned)>(&Urho3D::XMLElement::SetBuffer) ,
        static_cast<bool (Urho3D::XMLElement::*)(const  String &, const  PODVector< unsigned char > &)>(&Urho3D::XMLElement::SetBuffer)  );
    type["HasChild"] = sol::overload(
        static_cast<bool (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::HasChild) ,
        static_cast<bool (Urho3D::XMLElement::*)(const char *) const>(&Urho3D::XMLElement::HasChild)  );
    type["GetChild"] = sol::overload(
        static_cast<XMLElement (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetChild) ,
        [](Urho3D::XMLElement& self){ return self.GetChild(); },
        static_cast<XMLElement (Urho3D::XMLElement::*)(const char *) const>(&Urho3D::XMLElement::GetChild)  );
    type["GetNext"] = sol::overload(
        static_cast<XMLElement (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetNext) ,
        [](Urho3D::XMLElement& self){ return self.GetNext(); },
        static_cast<XMLElement (Urho3D::XMLElement::*)(const char *) const>(&Urho3D::XMLElement::GetNext)  );
    type["HasAttribute"] = sol::overload(
        static_cast<bool (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::HasAttribute) ,
        static_cast<bool (Urho3D::XMLElement::*)(const char *) const>(&Urho3D::XMLElement::HasAttribute)  );
    type["GetAttribute"] = sol::overload(
        static_cast<String (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetAttribute) ,
        [](Urho3D::XMLElement& self){ return self.GetAttribute(); },
        static_cast<String (Urho3D::XMLElement::*)(const char *) const>(&Urho3D::XMLElement::GetAttribute)  );
    type["GetAttributeLower"] = sol::overload(
        static_cast<String (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetAttributeLower) ,
        static_cast<String (Urho3D::XMLElement::*)(const char *) const>(&Urho3D::XMLElement::GetAttributeLower)  );
    type["GetAttributeUpper"] = sol::overload(
        static_cast<String (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetAttributeUpper) ,
        static_cast<String (Urho3D::XMLElement::*)(const char *) const>(&Urho3D::XMLElement::GetAttributeUpper)  );
    type["GetBuffer"] = sol::overload(
        static_cast<PODVector<unsigned char> (Urho3D::XMLElement::*)(const  String &) const>(&Urho3D::XMLElement::GetBuffer) ,
        static_cast<bool (Urho3D::XMLElement::*)(const  String &, void *, unsigned) const>(&Urho3D::XMLElement::GetBuffer)  );
    type["file"] = sol::property([](Urho3D::XMLElement& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFile());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["name"] = sol::property(static_cast<String (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetName) );
    type["nextResult"] = sol::property(static_cast<XMLElement (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::NextResult) );
    type["notNull"] = sol::property(static_cast<bool (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::NotNull) );
    type["null"] = sol::property(static_cast<bool (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::IsNull) );
    type["numAttributes"] = sol::property(static_cast<unsigned (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetNumAttributes) );
    type["parent"] = sol::property(static_cast<XMLElement (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetParent) );
    type["value"] = sol::property(static_cast<String (Urho3D::XMLElement::*)() const>(&Urho3D::XMLElement::GetValue) 
        , static_cast<bool (Urho3D::XMLElement::*)(const  String &)>(&Urho3D::XMLElement::SetValue) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Resource/XMLElement.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Resource/XMLFile.h>
#include <PugiXml/pugixml.hpp>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_XPathResultSet(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::XPathResultSet>( "XPathResultSet"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::XPathResultSet(),
        Urho3D::XPathResultSet(XMLFile *, pugi::xpath_node_set *),
        Urho3D::XPathResultSet(const  XPathResultSet &)>();

// Members

    /*Assignment operator.*//*(const XPathResultSet &rhs)*/
    type["operator_assign"] = static_cast<XPathResultSet& (Urho3D::XPathResultSet::*)(const  XPathResultSet &)>(&Urho3D::XPathResultSet::operator=) ;
    /*Return the n-th result in the set. Call XMLElement::GetNextResult() to get the subsequent result in the set. Note: The  XPathResultSet return value must be stored in a lhs variable to ensure the underlying xpath_node_set* is still valid while performing  XPathResultSet::FirstResult(),  XPathResultSet::operator [], and  XMLElement::NextResult().*//*(unsigned index) const*/
    type["op__index"] = static_cast<XMLElement (Urho3D::XPathResultSet::*)(unsigned) const>(&Urho3D::XPathResultSet::operator[]) ;
    /*Return the first result in the set. Call XMLElement::GetNextResult() to get the subsequent result in the set. Note: The  XPathResultSet return value must be stored in a lhs variable to ensure the underlying xpath_node_set* is still valid while performing  XPathResultSet::FirstResult(),  XPathResultSet::operator [], and  XMLElement::NextResult(). BIND_AS_PROPERTY*//*()*/
    type["FirstResult"] = static_cast<XMLElement (Urho3D::XPathResultSet::*)()>(&Urho3D::XPathResultSet::FirstResult) ;
    /*Return size of result set. BIND_AS_PROPERTY*//*() const*/
    type["Size"] = static_cast<unsigned (Urho3D::XPathResultSet::*)() const>(&Urho3D::XPathResultSet::Size) ;
    /*Return whether result set is empty. BIND_AS_PROPERTY*//*() const*/
    type["Empty"] = static_cast<bool (Urho3D::XPathResultSet::*)() const>(&Urho3D::XPathResultSet::Empty) ;
    /*Return pugixml xpath_node_set.*//*() const*/
    type["GetXPathNodeSet"] = static_cast<pugi::xpath_node_set* (Urho3D::XPathResultSet::*)() const>(&Urho3D::XPathResultSet::GetXPathNodeSet) ;
    type["empty"] = sol::property(static_cast<bool (Urho3D::XPathResultSet::*)() const>(&Urho3D::XPathResultSet::Empty) );
    type["firstResult"] = sol::property(static_cast<XMLElement (Urho3D::XPathResultSet::*)()>(&Urho3D::XPathResultSet::FirstResult) );
    type["size"] = sol::property(static_cast<unsigned (Urho3D::XPathResultSet::*)() const>(&Urho3D::XPathResultSet::Size) );

}

