
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Resource/JSONFile.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Resource/JSONFile.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Resource/JSONValue.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_JSONFile(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::JSONFile::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::JSONFile::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::JSONFile>((Urho3D::JSONFile*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::JSONFile>( "JSONFile"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::JSONFile>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::JSONFile::*)(Deserializer &)>(&Urho3D::JSONFile::BeginLoad) ;
    /*Deserialize from a string. Return true if successful.*//*(const String &source)*/
    type["FromString"] = static_cast<bool (Urho3D::JSONFile::*)(const  String &)>(&Urho3D::JSONFile::FromString) ;
    type["Save"] = sol::overload(
        static_cast<bool (Urho3D::JSONFile::*)(Serializer &) const>(&Urho3D::JSONFile::Save) ,
        static_cast<bool (Urho3D::JSONFile::*)(Serializer &, const  String &) const>(&Urho3D::JSONFile::Save)  );
    type["__tostring"] = sol::overload(
        static_cast<String (Urho3D::JSONFile::*)(const  String &) const>(&Urho3D::JSONFile::ToString) ,
        [](Urho3D::JSONFile& self){ return self.ToString(); } );
    type["GetRoot"] = sol::overload(
        static_cast<JSONValue& (Urho3D::JSONFile::*)()>(&Urho3D::JSONFile::GetRoot) ,
        static_cast<const JSONValue& (Urho3D::JSONFile::*)() const>(&Urho3D::JSONFile::GetRoot)  );
    type["root"] = sol::property(static_cast<JSONValue& (Urho3D::JSONFile::*)()>(&Urho3D::JSONFile::GetRoot) );

}

