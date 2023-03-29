
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Condition.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Condition.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Condition(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Condition>( "Condition"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Condition()>();

// Members

    /*Set the condition. Will be automatically reset once a waiting thread wakes up.*//*()*/
    type["Set"] = static_cast<void (Urho3D::Condition::*)()>(&Urho3D::Condition::Set) ;
    /*Wait on the condition.*//*()*/
    type["Wait"] = static_cast<void (Urho3D::Condition::*)()>(&Urho3D::Condition::Wait) ;

}

