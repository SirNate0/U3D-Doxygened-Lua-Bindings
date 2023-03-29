
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Resource/Resource.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Resource/Resource.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ResourceWithMetadata(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ResourceWithMetadata::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ResourceWithMetadata::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ResourceWithMetadata>((Urho3D::ResourceWithMetadata*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ResourceWithMetadata>( "ResourceWithMetadata"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ResourceWithMetadata>(context);
        });

// Members

    /*Add new metadata variable or overwrite old value. BIND_AS_ALIAS_set_metadata*//*(const String &name, const Variant &value)*/
    type["AddMetadata"] = static_cast<void (Urho3D::ResourceWithMetadata::*)(const  String &, const  Variant &)>(&Urho3D::ResourceWithMetadata::AddMetadata) ;
    /*Remove metadata variable.*//*(const String &name)*/
    type["RemoveMetadata"] = static_cast<void (Urho3D::ResourceWithMetadata::*)(const  String &)>(&Urho3D::ResourceWithMetadata::RemoveMetadata) ;
    /*Remove all metadata variables.*//*()*/
    type["RemoveAllMetadata"] = static_cast<void (Urho3D::ResourceWithMetadata::*)()>(&Urho3D::ResourceWithMetadata::RemoveAllMetadata) ;
    /*Return metadata variable. BIND_AS_PROPERTY*//*(const String &name) const*/
    type["GetMetadata"] = static_cast<const Variant& (Urho3D::ResourceWithMetadata::*)(const  String &) const>(&Urho3D::ResourceWithMetadata::GetMetadata) ;
    /*Return whether the resource has metadata. BIND_AS_PROPERTY*//*() const*/
    type["HasMetadata"] = static_cast<bool (Urho3D::ResourceWithMetadata::*)() const>(&Urho3D::ResourceWithMetadata::HasMetadata) ;
    type["addMetadata"] = sol::property(static_cast<void (Urho3D::ResourceWithMetadata::*)(const  String &, const  Variant &)>(&Urho3D::ResourceWithMetadata::AddMetadata) );
    type["hasMetadata"] = sol::property(static_cast<bool (Urho3D::ResourceWithMetadata::*)() const>(&Urho3D::ResourceWithMetadata::HasMetadata) );
    type["metadata"] = sol::property(static_cast<const Variant& (Urho3D::ResourceWithMetadata::*)(const  String &) const>(&Urho3D::ResourceWithMetadata::GetMetadata) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Resource/Resource.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Resource/Resource.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Object.h>
#include <Urho3D/Core/Timer.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Resource/JSONValue.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Resource(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Resource::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Resource::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Resource>((Urho3D::Resource*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Resource>( "Resource"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Resource>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source)*/
    type["BeginLoad"] = static_cast<bool (Urho3D::Resource::*)(Deserializer &)>(&Urho3D::Resource::BeginLoad) ;
    /*Finish resource loading. Always called from the main thread. Return true if successful.*//*()*/
    type["EndLoad"] = static_cast<bool (Urho3D::Resource::*)()>(&Urho3D::Resource::EndLoad) ;
    /*Set name. BIND_AS_PROPERTY*//*(const String &name)*/
    type["SetName"] = static_cast<void (Urho3D::Resource::*)(const  String &)>(&Urho3D::Resource::SetName) ;
    /*Set memory use in bytes, possibly approximate.*//*(unsigned size)*/
    type["SetMemoryUse"] = static_cast<void (Urho3D::Resource::*)(unsigned)>(&Urho3D::Resource::SetMemoryUse) ;
    /*Reset last used timer.*//*()*/
    type["ResetUseTimer"] = static_cast<void (Urho3D::Resource::*)()>(&Urho3D::Resource::ResetUseTimer) ;
    /*Set the asynchronous loading state. Called by  ResourceCache. Resources in the middle of asynchronous loading are not normally returned to user.*//*(AsyncLoadState newState)*/
    type["SetAsyncLoadState"] = static_cast<void (Urho3D::Resource::*)(AsyncLoadState)>(&Urho3D::Resource::SetAsyncLoadState) ;
    /*Return name. BIND_AS_PROPERTY*//*() const*/
    type["GetName"] = static_cast<const String& (Urho3D::Resource::*)() const>(&Urho3D::Resource::GetName) ;
    /*Return name hash.*//*() const*/
    type["GetNameHash"] = static_cast<StringHash (Urho3D::Resource::*)() const>(&Urho3D::Resource::GetNameHash) ;
    /*Return memory use in bytes, possibly approximate. BIND_AS_PROPERTY*//*() const*/
    type["GetMemoryUse"] = static_cast<unsigned (Urho3D::Resource::*)() const>(&Urho3D::Resource::GetMemoryUse) ;
    /*Return time since last use in milliseconds. If referred to elsewhere than in the resource cache, returns always zero. BIND_AS_PROPERTY*//*()*/
    type["GetUseTimer"] = static_cast<unsigned (Urho3D::Resource::*)()>(&Urho3D::Resource::GetUseTimer) ;
    /*Return the asynchronous loading state.*//*() const*/
    type["GetAsyncLoadState"] = static_cast<AsyncLoadState (Urho3D::Resource::*)() const>(&Urho3D::Resource::GetAsyncLoadState) ;
    type["Load"] = sol::overload(
        static_cast<bool (Urho3D::Resource::*)(Deserializer &)>(&Urho3D::Resource::Load) ,
        static_cast<bool (Urho3D::Resource::*)(const  String &)>(&Urho3D::Resource::LoadFile)  );
    type["Save"] = sol::overload(
        static_cast<bool (Urho3D::Resource::*)(Serializer &) const>(&Urho3D::Resource::Save) ,
        static_cast<bool (Urho3D::Resource::*)(const  String &) const>(&Urho3D::Resource::SaveFile)  );
    type["load"] = sol::property(static_cast<bool (Urho3D::Resource::*)(const  String &)>(&Urho3D::Resource::LoadFile) );
    type["memoryUse"] = sol::property(static_cast<unsigned (Urho3D::Resource::*)() const>(&Urho3D::Resource::GetMemoryUse) );
    type["name"] = sol::property(static_cast<const String& (Urho3D::Resource::*)() const>(&Urho3D::Resource::GetName) 
        , static_cast<void (Urho3D::Resource::*)(const  String &)>(&Urho3D::Resource::SetName) );
    type["save"] = sol::property(static_cast<bool (Urho3D::Resource::*)(const  String &) const>(&Urho3D::Resource::SaveFile) );
    type["useTimer"] = sol::property(static_cast<unsigned (Urho3D::Resource::*)()>(&Urho3D::Resource::GetUseTimer) );

}

