
#if 0 // forbidden template class: Forbidden class fmt::formatter< Urho3D::String, Char >
// Generated File
//!!Skipping Class Template!!'

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

void bindClass_fmt_formatter< Urho3D_String, Char >(sol::state_view& lua) { }

#if 0


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/StringUtils.h


#if 0 // Forbidden class fmt::formatter< Urho3D::String, Char >

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/StringUtils.h>
#include <Urho3D/Container/Str.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_fmt_formatter< Urho3D_String, Char >(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<fmt::formatter< Urho3D::String, Char >>( "String, Char >"
// Base Classes
    , sol::base_classes, sol::bases<formatter< basic_string_view< Char > >>()

);

// Constructors

    /*NONE*/

// Members


}


#endif // Forbidden class fmt::formatter< Urho3D::String, Char >


#endif
#endif // forbidden template class Forbidden class fmt::formatter< Urho3D::String, Char >
                