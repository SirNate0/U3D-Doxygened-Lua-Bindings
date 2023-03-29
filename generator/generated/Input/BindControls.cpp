
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Input/Controls.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Input/Controls.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Input/Controls.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Controls(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Controls>( "Controls"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Controls()>();

// Members

    /*Reset to initial state.*//*()*/
    type["Reset"] = static_cast<void (Urho3D::Controls::*)()>(&Urho3D::Controls::Reset) ;
    /*Check if a button is held down.*//*(unsigned button) const*/
    type["IsDown"] = static_cast<bool (Urho3D::Controls::*)(unsigned) const>(&Urho3D::Controls::IsDown) ;
    /*Check if a button was pressed on this frame. Requires previous frame's controls.*//*(unsigned button, const Controls &previousControls) const*/
    type["IsPressed"] = static_cast<bool (Urho3D::Controls::*)(unsigned, const  Controls &) const>(&Urho3D::Controls::IsPressed) ;
    type["Set"] = sol::overload(
        static_cast<void (Urho3D::Controls::*)(unsigned, bool)>(&Urho3D::Controls::Set) ,
        [](Urho3D::Controls& self, unsigned buttons){ self.Set(buttons); } );
    type["buttons_"] = &Urho3D::Controls::buttons_;
    type["yaw_"] = &Urho3D::Controls::yaw_;
    type["pitch_"] = &Urho3D::Controls::pitch_;
    type["extraData_"] = &Urho3D::Controls::extraData_;

}

