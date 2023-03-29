

// Generated File
//!!Skipping Class Template!!'

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

void bindClass_Urho3D_RWOpsWrapper(sol::state_view& lua) { }

#if 0


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/IO/RWOpsWrapper.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/IO/RWOpsWrapper.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_RWOpsWrapper(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::RWOpsWrapper>( "RWOpsWrapper"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::RWOpsWrapper(T &)>();

// Members

    /*Return the RWOps structure.*//*()*/
    type["GetRWOps"] = static_cast<SDL_RWops* (Urho3D::RWOpsWrapper<T>::*)()>(&Urho3D::RWOpsWrapper<T>::GetRWOps) ;

}



#endif

                