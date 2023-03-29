
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Resource/Localization.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Resource/Localization.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Resource/JSONValue.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Localization(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Localization::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Localization::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Localization>((Urho3D::Localization*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Localization>( "Localization"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Localization>(context);
        });

// Members

    /*Return the number of languages. BIND_AS_PROPERTY*//*() const*/
    type["GetNumLanguages"] = static_cast<int (Urho3D::Localization::*)() const>(&Urho3D::Localization::GetNumLanguages) ;
    /*Return a string in the current language. Returns  String::EMPTY if id is empty. Returns id if translation is not found and logs a warning.*//*(const String &id)*/
    type["Get"] = static_cast<String (Urho3D::Localization::*)(const  String &)>(&Urho3D::Localization::Get) ;
    /*Clear all loaded strings.*//*()*/
    type["Reset"] = static_cast<void (Urho3D::Localization::*)()>(&Urho3D::Localization::Reset) ;
    /*Load strings from  JSONValue.*//*(const JSONValue &source)*/
    type["LoadMultipleLanguageJSON"] = static_cast<void (Urho3D::Localization::*)(const  JSONValue &)>(&Urho3D::Localization::LoadMultipleLanguageJSON) ;
    type["GetLanguageIndex"] = sol::overload(
        static_cast<int (Urho3D::Localization::*)() const>(&Urho3D::Localization::GetLanguageIndex) ,
        static_cast<int (Urho3D::Localization::*)(const  String &)>(&Urho3D::Localization::GetLanguageIndex)  );
    type["GetLanguage"] = sol::overload(
        static_cast<String (Urho3D::Localization::*)()>(&Urho3D::Localization::GetLanguage) ,
        static_cast<String (Urho3D::Localization::*)(int)>(&Urho3D::Localization::GetLanguage)  );
    type["SetLanguage"] = sol::overload(
        static_cast<void (Urho3D::Localization::*)(int)>(&Urho3D::Localization::SetLanguage) ,
        static_cast<void (Urho3D::Localization::*)(const  String &)>(&Urho3D::Localization::SetLanguage)  );
    type["LoadJSONFile"] = sol::overload(
        static_cast<void (Urho3D::Localization::*)(const  String &, const  String &)>(&Urho3D::Localization::LoadJSONFile) ,
        [](Urho3D::Localization& self, const  String & name){ self.LoadJSONFile(name); } );
    type["LoadSingleLanguageJSON"] = sol::overload(
        static_cast<void (Urho3D::Localization::*)(const  JSONValue &, const  String &)>(&Urho3D::Localization::LoadSingleLanguageJSON) ,
        [](Urho3D::Localization& self, const  JSONValue & source){ self.LoadSingleLanguageJSON(source); } );
    type["language"] = sol::property(static_cast<String (Urho3D::Localization::*)()>(&Urho3D::Localization::GetLanguage) );
    type["languageIndex"] = sol::property(static_cast<int (Urho3D::Localization::*)() const>(&Urho3D::Localization::GetLanguageIndex) );
    type["numLanguages"] = sol::property(static_cast<int (Urho3D::Localization::*)() const>(&Urho3D::Localization::GetNumLanguages) );

}

