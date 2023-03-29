
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Audio/SoundListener.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Audio/SoundListener.h>
#include <Urho3D/Core/Context.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_SoundListener(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::SoundListener::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::SoundListener::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::SoundListener>((Urho3D::SoundListener*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::SoundListener>( "SoundListener"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::SoundListener>(context);
        });

// Members


}

