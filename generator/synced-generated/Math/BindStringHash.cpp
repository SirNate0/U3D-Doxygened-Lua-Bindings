
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/StringHash.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/StringHashRegister.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_StringHash(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::StringHash>( "StringHash"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::StringHash(),
        Urho3D::StringHash(const  StringHash &),
        Urho3D::StringHash(unsigned),
        Urho3D::StringHash(const char *),
        Urho3D::StringHash(const  String &)>();

// Members

    /*Assign from another hash.*//*(const StringHash &rhs) noexcept=default*/
    type["operator_assign"] = static_cast<StringHash& (Urho3D::StringHash::*)(const  StringHash &) noexcept>(&Urho3D::StringHash::operator=) ;
    /*Add a hash.*//*(const StringHash &rhs) const*/
    type["__add"] = static_cast<StringHash (Urho3D::StringHash::*)(const  StringHash &) const>(&Urho3D::StringHash::operator+) ;
    /*Add-assign a hash.*//*(const StringHash &rhs)*/
    type["operator_add_assign"] = static_cast<StringHash& (Urho3D::StringHash::*)(const  StringHash &)>(&Urho3D::StringHash::operator+=) ;
    /*Test for equality with another hash.*//*(const StringHash &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::StringHash::*)(const  StringHash &) const>(&Urho3D::StringHash::operator==) ;
    /*Test for inequality with another hash.*//*(const StringHash &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::StringHash::*)(const  StringHash &) const>(&Urho3D::StringHash::operator!=) ;
    /*Test if less than another hash.*//*(const StringHash &rhs) const*/
    type["__lt"] = static_cast<bool (Urho3D::StringHash::*)(const  StringHash &) const>(&Urho3D::StringHash::operator<) ;
    /*Test if greater than another hash.*//*(const StringHash &rhs) const*/
    type["operator_gt"] = static_cast<bool (Urho3D::StringHash::*)(const  StringHash &) const>(&Urho3D::StringHash::operator>) ;
    /*Return true if nonzero hash value.*//*() const*/
    type["operator bool"] = static_cast<bool (Urho3D::StringHash::*)() const>(&Urho3D::StringHash::operator bool) ;
    /*Return hash value. BIND_AS_PROPERTY*//*() const*/
    type["Value"] = static_cast<unsigned (Urho3D::StringHash::*)() const>(&Urho3D::StringHash::Value) ;
    /*Return as string.*//*() const*/
    type["__tostring"] = static_cast<String (Urho3D::StringHash::*)() const>(&Urho3D::StringHash::ToString) ;
    /*Return string which has specific hash value. Return first string if many (in order of calculation). Use for debug purposes only. Return empty string if URHO3D_HASH_DEBUG is off.*//*() const*/
    type["Reverse"] = static_cast<String (Urho3D::StringHash::*)() const>(&Urho3D::StringHash::Reverse) ;
    /*Return hash value for  HashSet &  HashMap.*//*() const*/
    type["ToHash"] = static_cast<unsigned (Urho3D::StringHash::*)() const>(&Urho3D::StringHash::ToHash) ;
    type["value"] = sol::property(static_cast<unsigned (Urho3D::StringHash::*)() const>(&Urho3D::StringHash::Value) );

}

