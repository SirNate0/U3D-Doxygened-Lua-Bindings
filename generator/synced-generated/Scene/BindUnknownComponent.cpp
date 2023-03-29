
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/UnknownComponent.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/UnknownComponent.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Attribute.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Resource/JSONValue.h>
#include <Urho3D/Resource/XMLElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_UnknownComponent(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::UnknownComponent::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::UnknownComponent::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::UnknownComponent>((Urho3D::UnknownComponent*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::UnknownComponent>( "UnknownComponent"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::UnknownComponent>(context);
        });

// Members

    /*Return type of the stored component.*//*() const override*/
    type["GetType"] = static_cast<StringHash (Urho3D::UnknownComponent::*)() const>(&Urho3D::UnknownComponent::GetType) ;
    /*Return type name of the stored component.*//*() const override*/
    type["GetTypeName"] = static_cast<const String& (Urho3D::UnknownComponent::*)() const>(&Urho3D::UnknownComponent::GetTypeName) ;
    /*Return attribute descriptions, or null if none defined.*//*() const override*/
    type["GetAttributes"] = static_cast<const Vector<AttributeInfo>* (Urho3D::UnknownComponent::*)() const>(&Urho3D::UnknownComponent::GetAttributes) ;
    /*Load from binary data. Return true if successful.*//*(Deserializer &source) override*/
    type["Load"] = static_cast<bool (Urho3D::UnknownComponent::*)(Deserializer &)>(&Urho3D::UnknownComponent::Load) ;
    /*Load from XML data. Return true if successful.*//*(const XMLElement &source) override*/
    type["LoadXML"] = static_cast<bool (Urho3D::UnknownComponent::*)(const  XMLElement &)>(&Urho3D::UnknownComponent::LoadXML) ;
    /*Load from JSON data. Return true if successful.*//*(const JSONValue &source) override*/
    type["LoadJSON"] = static_cast<bool (Urho3D::UnknownComponent::*)(const  JSONValue &)>(&Urho3D::UnknownComponent::LoadJSON) ;
    /*Save as binary data. Return true if successful.*//*(Serializer &dest) const override*/
    type["Save"] = static_cast<bool (Urho3D::UnknownComponent::*)(Serializer &) const>(&Urho3D::UnknownComponent::Save) ;
    /*Save as XML data. Return true if successful.*//*(XMLElement &dest) const override*/
    type["SaveXML"] = static_cast<bool (Urho3D::UnknownComponent::*)(XMLElement &) const>(&Urho3D::UnknownComponent::SaveXML) ;
    /*Save as JSON data. Return true if successful.*//*(JSONValue &dest) const override*/
    type["SaveJSON"] = static_cast<bool (Urho3D::UnknownComponent::*)(JSONValue &) const>(&Urho3D::UnknownComponent::SaveJSON) ;
    /*Initialize the type name. Called by  Node when loading.*//*(const String &typeName)*/
    type["SetTypeName"] = static_cast<void (Urho3D::UnknownComponent::*)(const  String &)>(&Urho3D::UnknownComponent::SetTypeName) ;
    /*Initialize the type hash only when type name not known. Called by  Node when loading.*//*(StringHash typeHash)*/
    type["SetType"] = static_cast<void (Urho3D::UnknownComponent::*)(StringHash)>(&Urho3D::UnknownComponent::SetType) ;
    /*Return the XML format attributes. Empty when loaded with binary serialization.*//*() const*/
    type["GetXMLAttributes"] = static_cast<const Vector<String>& (Urho3D::UnknownComponent::*)() const>(&Urho3D::UnknownComponent::GetXMLAttributes) ;
    /*Return the binary attributes. Empty when loaded with XML serialization.*//*() const*/
    type["GetBinaryAttributes"] = static_cast<const PODVector<unsigned char>& (Urho3D::UnknownComponent::*)() const>(&Urho3D::UnknownComponent::GetBinaryAttributes) ;
    /*Return whether was loaded using XML data.*//*() const*/
    type["GetUseXML"] = static_cast<bool (Urho3D::UnknownComponent::*)() const>(&Urho3D::UnknownComponent::GetUseXML) ;

}

