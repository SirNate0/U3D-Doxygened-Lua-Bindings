
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Timer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Timer.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_HiresTimer(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::HiresTimer>( "HiresTimer"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::HiresTimer()>();

// Members

    /*Return elapsed microseconds and optionally reset.*//*(bool reset)*/
    type["GetUSec"] = static_cast<long long (Urho3D::HiresTimer::*)(bool)>(&Urho3D::HiresTimer::GetUSec) ;
    /*Reset the timer.*//*()*/
    type["Reset"] = static_cast<void (Urho3D::HiresTimer::*)()>(&Urho3D::HiresTimer::Reset) ;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Timer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Timer.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Timer(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Timer>( "Timer"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Timer()>();

// Members

    /*Return elapsed milliseconds and optionally reset.*//*(bool reset)*/
    type["GetMSec"] = static_cast<unsigned (Urho3D::Timer::*)(bool)>(&Urho3D::Timer::GetMSec) ;
    /*Reset the timer.*//*()*/
    type["Reset"] = static_cast<void (Urho3D::Timer::*)()>(&Urho3D::Timer::Reset) ;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Timer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Timer.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Time(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Time::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Time::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Time>((Urho3D::Time*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Time>( "Time"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Time>(context);
        });

// Members

    /*Begin new frame, with (last) frame duration in seconds and send frame start event.*//*(float timeStep)*/
    type["BeginFrame"] = static_cast<void (Urho3D::Time::*)(float)>(&Urho3D::Time::BeginFrame) ;
    /*End frame. Increment total time and send frame end event.*//*()*/
    type["EndFrame"] = static_cast<void (Urho3D::Time::*)()>(&Urho3D::Time::EndFrame) ;
    /*Set the low-resolution timer period in milliseconds. 0 resets to the default period.*//*(unsigned mSec)*/
    type["SetTimerPeriod"] = static_cast<void (Urho3D::Time::*)(unsigned)>(&Urho3D::Time::SetTimerPeriod) ;
    /*Return frame number, starting from 1 once  BeginFrame() is called for the first time. BIND_AS_PROPERTY*//*() const*/
    type["GetFrameNumber"] = static_cast<unsigned (Urho3D::Time::*)() const>(&Urho3D::Time::GetFrameNumber) ;
    /*Return current frame timestep as seconds. BIND_AS_PROPERTY*//*() const*/
    type["GetTimeStep"] = static_cast<float (Urho3D::Time::*)() const>(&Urho3D::Time::GetTimeStep) ;
    /*Return current low-resolution timer period in milliseconds.*//*() const*/
    type["GetTimerPeriod"] = static_cast<unsigned (Urho3D::Time::*)() const>(&Urho3D::Time::GetTimerPeriod) ;
    /*Return elapsed time from program start as seconds. BIND_AS_PROPERTY*//*()*/
    type["GetElapsedTime"] = static_cast<float (Urho3D::Time::*)()>(&Urho3D::Time::GetElapsedTime) ;
    /*Return current frames per second. BIND_AS_PROPERTY*//*() const*/
    type["GetFramesPerSecond"] = static_cast<float (Urho3D::Time::*)() const>(&Urho3D::Time::GetFramesPerSecond) ;
    type["elapsedTime"] = sol::property(static_cast<float (Urho3D::Time::*)()>(&Urho3D::Time::GetElapsedTime) );
    type["frameNumber"] = sol::property(static_cast<unsigned (Urho3D::Time::*)() const>(&Urho3D::Time::GetFrameNumber) );
    type["framesPerSecond"] = sol::property(static_cast<float (Urho3D::Time::*)() const>(&Urho3D::Time::GetFramesPerSecond) );
    type["timeStep"] = sol::property(static_cast<float (Urho3D::Time::*)() const>(&Urho3D::Time::GetTimeStep) );

}

