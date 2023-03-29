
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/StringHashRegister.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/StringHashRegister.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_StringHashRegister(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::StringHashRegister>( "StringHashRegister"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::StringHashRegister(bool)>();

// Members

    /*Return string for given  StringHash. Return empty string if not found.*//*(const StringHash &hash) const*/
    type["GetStringCopy"] = static_cast<String (Urho3D::StringHashRegister::*)(const  StringHash &) const>(&Urho3D::StringHashRegister::GetStringCopy) ;
    /*Return whether the string in contained in the register.*//*(const StringHash &hash) const*/
    type["Contains"] = static_cast<bool (Urho3D::StringHashRegister::*)(const  StringHash &) const>(&Urho3D::StringHashRegister::Contains) ;
    /*Return  String for given  StringHash. Return value is unsafe to use if RegisterString is called from other threads.*//*(const StringHash &hash) const*/
    type["GetString"] = static_cast<const String& (Urho3D::StringHashRegister::*)(const  StringHash &) const>(&Urho3D::StringHashRegister::GetString) ;
    /*Return map of hashes. Return value is unsafe to use if RegisterString is called from other threads.*//*() const*/
    type["GetInternalMap"] = static_cast<const StringMap& (Urho3D::StringHashRegister::*)() const>(&Urho3D::StringHashRegister::GetInternalMap) ;
    type["RegisterString"] = sol::overload(
        static_cast<StringHash (Urho3D::StringHashRegister::*)(const  StringHash &, const char *)>(&Urho3D::StringHashRegister::RegisterString) ,
        static_cast<StringHash (Urho3D::StringHashRegister::*)(const char *)>(&Urho3D::StringHashRegister::RegisterString)  );

}

