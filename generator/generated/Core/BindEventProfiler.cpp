
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/EventProfiler.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/EventProfiler.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_EventProfiler(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::EventProfiler::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::EventProfiler::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::EventProfiler>((Urho3D::EventProfiler*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::EventProfiler>( "EventProfiler"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Profiler,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::EventProfiler>(context);
        });

// Members

    /*Begin timing a profiling block based on an event ID.*//*(StringHash eventID)*/
    type["BeginBlock"] = static_cast<void (Urho3D::EventProfiler::*)(StringHash)>(&Urho3D::EventProfiler::BeginBlock) ;

}

