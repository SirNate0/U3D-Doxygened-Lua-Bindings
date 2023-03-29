

// Generated File
//!!Skipping Class Template!!'

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

void bindClass_Urho3D_VariantAttributeAccessorImpl(sol::state_view& lua) { }

#if 0


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/Serializable.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/Serializable.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Scene/Serializable.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_VariantAttributeAccessorImpl(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::VariantAttributeAccessorImpl>( "VariantAttributeAccessorImpl"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::VariantAttributeAccessorImpl(TGetFunction, TSetFunction)>();

// Members

    /*Invoke getter function.*//*(const Serializable *ptr, Variant &value) const override*/
    type["Get"] = static_cast<void (Urho3D::VariantAttributeAccessorImpl<TClassType,TGetFunction,TSetFunction>::*)(const  Serializable *, Variant &) const>(&Urho3D::VariantAttributeAccessorImpl<TClassType,TGetFunction,TSetFunction>::Get) ;
    /*Invoke setter function.*//*(Serializable *ptr, const Variant &value) override*/
    type["Set"] = static_cast<void (Urho3D::VariantAttributeAccessorImpl<TClassType,TGetFunction,TSetFunction>::*)(Serializable *, const  Variant &)>(&Urho3D::VariantAttributeAccessorImpl<TClassType,TGetFunction,TSetFunction>::Set) ;

}



#endif

                
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/Serializable.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/Serializable.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Attribute.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Resource/JSONValue.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Scene/ReplicationState.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Serializable(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Serializable::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Serializable::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Serializable>((Urho3D::Serializable*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Serializable>( "Serializable"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Serializable>(context);
        });

// Members

    /*Handle attribute write access. Default implementation writes to the variable at offset, or invokes the set accessor.*//*(const AttributeInfo &attr, const Variant &src)*/
    type["OnSetAttribute"] = static_cast<void (Urho3D::Serializable::*)(const  AttributeInfo &, const  Variant &)>(&Urho3D::Serializable::OnSetAttribute) ;
    /*Handle attribute read access. Default implementation reads the variable at offset, or invokes the get accessor.*//*(const AttributeInfo &attr, Variant &dest) const*/
    type["OnGetAttribute"] = static_cast<void (Urho3D::Serializable::*)(const  AttributeInfo &, Variant &) const>(&Urho3D::Serializable::OnGetAttribute) ;
    /*Return attribute descriptions, or null if none defined.*//*() const*/
    type["GetAttributes"] = static_cast<const Vector<AttributeInfo>* (Urho3D::Serializable::*)() const>(&Urho3D::Serializable::GetAttributes) ;
    /*Return network replication attribute descriptions, or null if none defined.*//*() const*/
    type["GetNetworkAttributes"] = static_cast<const Vector<AttributeInfo>* (Urho3D::Serializable::*)() const>(&Urho3D::Serializable::GetNetworkAttributes) ;
    /*Load from binary data. Return true if successful.*//*(Deserializer &source)*/
    type["Load"] = static_cast<bool (Urho3D::Serializable::*)(Deserializer &)>(&Urho3D::Serializable::Load) ;
    /*Save as binary data. Return true if successful.*//*(Serializer &dest) const*/
    type["Save"] = static_cast<bool (Urho3D::Serializable::*)(Serializer &) const>(&Urho3D::Serializable::Save) ;
    /*Load from XML data. Return true if successful.*//*(const XMLElement &source)*/
    type["LoadXML"] = static_cast<bool (Urho3D::Serializable::*)(const  XMLElement &)>(&Urho3D::Serializable::LoadXML) ;
    /*Save as XML data. Return true if successful.*//*(XMLElement &dest) const*/
    type["SaveXML"] = static_cast<bool (Urho3D::Serializable::*)(XMLElement &) const>(&Urho3D::Serializable::SaveXML) ;
    /*Load from JSON data. Return true if successful.*//*(const JSONValue &source)*/
    type["LoadJSON"] = static_cast<bool (Urho3D::Serializable::*)(const  JSONValue &)>(&Urho3D::Serializable::LoadJSON) ;
    /*Save as JSON data. Return true if successful.*//*(JSONValue &dest) const*/
    type["SaveJSON"] = static_cast<bool (Urho3D::Serializable::*)(JSONValue &) const>(&Urho3D::Serializable::SaveJSON) ;
    /*Apply attribute changes that can not be applied immediately. Called after scene load or a network update.*//*()*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::Serializable::*)()>(&Urho3D::Serializable::ApplyAttributes) ;
    /*Return whether should save default-valued attributes into XML. Default false.*//*() const*/
    type["SaveDefaultAttributes"] = static_cast<bool (Urho3D::Serializable::*)() const>(&Urho3D::Serializable::SaveDefaultAttributes) ;
    /*Mark for attribute check on the next network update.*//*()*/
    type["MarkNetworkUpdate"] = static_cast<void (Urho3D::Serializable::*)()>(&Urho3D::Serializable::MarkNetworkUpdate) ;
    /*Set instance-level default flag.*//*(bool enable)*/
    type["SetInstanceDefault"] = static_cast<void (Urho3D::Serializable::*)(bool)>(&Urho3D::Serializable::SetInstanceDefault) ;
    /*Reset all editable attributes to their default values.*//*()*/
    type["ResetToDefault"] = static_cast<void (Urho3D::Serializable::*)()>(&Urho3D::Serializable::ResetToDefault) ;
    /*Remove instance's default values if they are set previously.*//*()*/
    type["RemoveInstanceDefault"] = static_cast<void (Urho3D::Serializable::*)()>(&Urho3D::Serializable::RemoveInstanceDefault) ;
    /*Set temporary flag. Temporary objects will not be saved. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetTemporary"] = static_cast<void (Urho3D::Serializable::*)(bool)>(&Urho3D::Serializable::SetTemporary) ;
    /*Enable interception of an attribute from network updates. Intercepted attributes are sent as events instead of applying directly. This can be used to implement client side prediction.*//*(const String &attributeName, bool enable)*/
    type["SetInterceptNetworkUpdate"] = static_cast<void (Urho3D::Serializable::*)(const  String &, bool)>(&Urho3D::Serializable::SetInterceptNetworkUpdate) ;
    /*Allocate network attribute state.*//*()*/
    type["AllocateNetworkState"] = static_cast<void (Urho3D::Serializable::*)()>(&Urho3D::Serializable::AllocateNetworkState) ;
    /*Write initial delta network update.*//*(Serializer &dest, unsigned char timeStamp)*/
    type["WriteInitialDeltaUpdate"] = static_cast<void (Urho3D::Serializable::*)(Serializer &, unsigned char)>(&Urho3D::Serializable::WriteInitialDeltaUpdate) ;
    /*Write a delta network update according to dirty attribute bits.*//*(Serializer &dest, const DirtyBits &attributeBits, unsigned char timeStamp)*/
    type["WriteDeltaUpdate"] = static_cast<void (Urho3D::Serializable::*)(Serializer &, const  DirtyBits &, unsigned char)>(&Urho3D::Serializable::WriteDeltaUpdate) ;
    /*Write a latest data network update.*//*(Serializer &dest, unsigned char timeStamp)*/
    type["WriteLatestDataUpdate"] = static_cast<void (Urho3D::Serializable::*)(Serializer &, unsigned char)>(&Urho3D::Serializable::WriteLatestDataUpdate) ;
    /*Read and apply a network delta update. Return true if attributes were changed.*//*(Deserializer &source)*/
    type["ReadDeltaUpdate"] = static_cast<bool (Urho3D::Serializable::*)(Deserializer &)>(&Urho3D::Serializable::ReadDeltaUpdate) ;
    /*Read and apply a network latest data update. Return true if attributes were changed.*//*(Deserializer &source)*/
    type["ReadLatestDataUpdate"] = static_cast<bool (Urho3D::Serializable::*)(Deserializer &)>(&Urho3D::Serializable::ReadLatestDataUpdate) ;
    /*Return number of attributes. BIND_AS_PROPERTY*//*() const*/
    type["GetNumAttributes"] = static_cast<unsigned (Urho3D::Serializable::*)() const>(&Urho3D::Serializable::GetNumAttributes) ;
    /*Return number of network replication attributes.*//*() const*/
    type["GetNumNetworkAttributes"] = static_cast<unsigned (Urho3D::Serializable::*)() const>(&Urho3D::Serializable::GetNumNetworkAttributes) ;
    /*Return whether is temporary. BIND_AS_PROPERTY*//*() const*/
    type["IsTemporary"] = static_cast<bool (Urho3D::Serializable::*)() const>(&Urho3D::Serializable::IsTemporary) ;
    /*Return whether an attribute's network updates are being intercepted.*//*(const String &attributeName) const*/
    type["GetInterceptNetworkUpdate"] = static_cast<bool (Urho3D::Serializable::*)(const  String &) const>(&Urho3D::Serializable::GetInterceptNetworkUpdate) ;
    /*Return the network attribute state, if allocated.*//*() const*/
    type["GetNetworkState"] = static_cast<NetworkState* (Urho3D::Serializable::*)() const>(&Urho3D::Serializable::GetNetworkState) ;
    type["SetAttribute"] = sol::overload(
        static_cast<bool (Urho3D::Serializable::*)(unsigned, const  Variant &)>(&Urho3D::Serializable::SetAttribute) ,
        static_cast<bool (Urho3D::Serializable::*)(const  String &, const  Variant &)>(&Urho3D::Serializable::SetAttribute)  );
    type["GetAttribute"] = sol::overload(
        static_cast<Variant (Urho3D::Serializable::*)(unsigned) const>(&Urho3D::Serializable::GetAttribute) ,
        static_cast<Variant (Urho3D::Serializable::*)(const  String &) const>(&Urho3D::Serializable::GetAttribute)  );
    type["GetAttributeDefault"] = sol::overload(
        static_cast<Variant (Urho3D::Serializable::*)(unsigned) const>(&Urho3D::Serializable::GetAttributeDefault) ,
        static_cast<Variant (Urho3D::Serializable::*)(const  String &) const>(&Urho3D::Serializable::GetAttributeDefault)  );
    type["attribute"] = sol::property(static_cast<Variant (Urho3D::Serializable::*)(unsigned) const>(&Urho3D::Serializable::GetAttribute) 
        , static_cast<bool (Urho3D::Serializable::*)(unsigned, const  Variant &)>(&Urho3D::Serializable::SetAttribute) );
    type["attributeDefault"] = sol::property(static_cast<Variant (Urho3D::Serializable::*)(unsigned) const>(&Urho3D::Serializable::GetAttributeDefault) );
    type["numAttributes"] = sol::property(static_cast<unsigned (Urho3D::Serializable::*)() const>(&Urho3D::Serializable::GetNumAttributes) );
    type["temporary"] = sol::property(static_cast<bool (Urho3D::Serializable::*)() const>(&Urho3D::Serializable::IsTemporary) 
        , static_cast<void (Urho3D::Serializable::*)(bool)>(&Urho3D::Serializable::SetTemporary) );

}

