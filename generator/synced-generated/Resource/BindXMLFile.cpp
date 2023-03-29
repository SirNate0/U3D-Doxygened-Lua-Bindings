
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Resource/XMLFile.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Resource/XMLFile.h>
#include <PugiXml/pugixml.hpp>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_XMLFile(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::XMLFile::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::XMLFile::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::XMLFile>((Urho3D::XMLFile*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::XMLFile>( "XMLFile"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::XMLFile>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::XMLFile::*)(Deserializer &)>(&Urho3D::XMLFile::BeginLoad) ;
    /*Deserialize from a string. Return true if successful.*//*(const String &source)*/
    type["FromString"] = static_cast<bool (Urho3D::XMLFile::*)(const  String &)>(&Urho3D::XMLFile::FromString) ;
    /*Clear the document and create a root element.*//*(const String &name)*/
    type["CreateRoot"] = static_cast<XMLElement (Urho3D::XMLFile::*)(const  String &)>(&Urho3D::XMLFile::CreateRoot) ;
    /*Get the root element if it has matching name, otherwise create it and clear the document.*//*(const String &name)*/
    type["GetOrCreateRoot"] = static_cast<XMLElement (Urho3D::XMLFile::*)(const  String &)>(&Urho3D::XMLFile::GetOrCreateRoot) ;
    /*Return the pugixml document.*//*() const*/
    type["GetDocument"] = static_cast<pugi::xml_document* (Urho3D::XMLFile::*)() const>(&Urho3D::XMLFile::GetDocument) ;
    type["Save"] = sol::overload(
        static_cast<bool (Urho3D::XMLFile::*)(Serializer &) const>(&Urho3D::XMLFile::Save) ,
        static_cast<bool (Urho3D::XMLFile::*)(Serializer &, const  String &) const>(&Urho3D::XMLFile::Save)  );
    type["GetRoot"] = sol::overload(
        static_cast<XMLElement (Urho3D::XMLFile::*)(const  String &)>(&Urho3D::XMLFile::GetRoot) ,
        [](Urho3D::XMLFile& self){ return self.GetRoot(); } );
    type["__tostring"] = sol::overload(
        static_cast<String (Urho3D::XMLFile::*)(const  String &) const>(&Urho3D::XMLFile::ToString) ,
        [](Urho3D::XMLFile& self){ return self.ToString(); } );
    type["Patch"] = sol::overload(
        static_cast<void (Urho3D::XMLFile::*)(XMLFile *)>(&Urho3D::XMLFile::Patch) ,
        static_cast<void (Urho3D::XMLFile::*)(const  XMLElement &)>(&Urho3D::XMLFile::Patch)  );

}

