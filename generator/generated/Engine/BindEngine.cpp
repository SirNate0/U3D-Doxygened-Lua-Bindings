
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Engine/Engine.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Engine/Engine.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Engine/Console.h>
#include <Urho3D/Engine/DebugHud.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Engine(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Engine::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Engine::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Engine>((Urho3D::Engine*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Engine>( "Engine"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Engine>(context);
        });

// Members

    /*Initialize engine using parameters given and show the application window. Return true if successful.*//*(const VariantMap &parameters)*/
    type["Initialize"] = static_cast<bool (Urho3D::Engine::*)(const  VariantMap &)>(&Urho3D::Engine::Initialize) ;
    /*Run one frame.*//*()*/
    type["RunFrame"] = static_cast<void (Urho3D::Engine::*)()>(&Urho3D::Engine::RunFrame) ;
    /*Create the console and return it. May return null if engine configuration does not allow creation (headless mode).*//*()*/
    type["CreateConsole"] = [](Urho3D::Engine& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateConsole());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Create the debug hud.*//*()*/
    type["CreateDebugHud"] = [](Urho3D::Engine& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateDebugHud());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Set minimum frames per second. If FPS goes lower than this, time will appear to slow down. BIND_AS_PROPERTY*//*(int fps)*/
    type["SetMinFps"] = static_cast<void (Urho3D::Engine::*)(int)>(&Urho3D::Engine::SetMinFps) ;
    /*Set maximum frames per second. The engine will sleep if FPS is higher than this. BIND_AS_PROPERTY*//*(int fps)*/
    type["SetMaxFps"] = static_cast<void (Urho3D::Engine::*)(int)>(&Urho3D::Engine::SetMaxFps) ;
    /*Set maximum frames per second when the application does not have input focus. BIND_AS_PROPERTY*//*(int fps)*/
    type["SetMaxInactiveFps"] = static_cast<void (Urho3D::Engine::*)(int)>(&Urho3D::Engine::SetMaxInactiveFps) ;
    /*Set how many frames to average for timestep smoothing. Default is 2. 1 disables smoothing. BIND_AS_PROPERTY*//*(int frames)*/
    type["SetTimeStepSmoothing"] = static_cast<void (Urho3D::Engine::*)(int)>(&Urho3D::Engine::SetTimeStepSmoothing) ;
    /*Set whether to pause update events and audio when minimized. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetPauseMinimized"] = static_cast<void (Urho3D::Engine::*)(bool)>(&Urho3D::Engine::SetPauseMinimized) ;
    /*Set whether to exit automatically on exit request (window close button). BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetAutoExit"] = static_cast<void (Urho3D::Engine::*)(bool)>(&Urho3D::Engine::SetAutoExit) ;
    /*Override timestep of the next frame. Should be called in between  RunFrame() calls.*//*(float seconds)*/
    type["SetNextTimeStep"] = static_cast<void (Urho3D::Engine::*)(float)>(&Urho3D::Engine::SetNextTimeStep) ;
    /*Close the graphics window and set the exit flag. No-op on iOS/tvOS, as an iOS/tvOS application can not legally exit.*//*()*/
    type["Exit"] = static_cast<void (Urho3D::Engine::*)()>(&Urho3D::Engine::Exit) ;
    /*Dump profiling information to the log.*//*()*/
    type["DumpProfiler"] = static_cast<void (Urho3D::Engine::*)()>(&Urho3D::Engine::DumpProfiler) ;
    /*Dump information of all memory allocations to the log. Supported in MSVC debug mode only.*//*()*/
    type["DumpMemory"] = static_cast<void (Urho3D::Engine::*)()>(&Urho3D::Engine::DumpMemory) ;
    /*Get timestep of the next frame. Updated by  ApplyFrameLimit().*//*() const*/
    type["GetNextTimeStep"] = static_cast<float (Urho3D::Engine::*)() const>(&Urho3D::Engine::GetNextTimeStep) ;
    /*Return the minimum frames per second. BIND_AS_PROPERTY*//*() const*/
    type["GetMinFps"] = static_cast<int (Urho3D::Engine::*)() const>(&Urho3D::Engine::GetMinFps) ;
    /*Return the maximum frames per second. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxFps"] = static_cast<int (Urho3D::Engine::*)() const>(&Urho3D::Engine::GetMaxFps) ;
    /*Return the maximum frames per second when the application does not have input focus. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxInactiveFps"] = static_cast<int (Urho3D::Engine::*)() const>(&Urho3D::Engine::GetMaxInactiveFps) ;
    /*Return how many frames to average for timestep smoothing. BIND_AS_PROPERTY*//*() const*/
    type["GetTimeStepSmoothing"] = static_cast<int (Urho3D::Engine::*)() const>(&Urho3D::Engine::GetTimeStepSmoothing) ;
    /*Return whether to pause update events and audio when minimized. BIND_AS_PROPERTY*//*() const*/
    type["GetPauseMinimized"] = static_cast<bool (Urho3D::Engine::*)() const>(&Urho3D::Engine::GetPauseMinimized) ;
    /*Return whether to exit automatically on exit request. BIND_AS_PROPERTY*//*() const*/
    type["GetAutoExit"] = static_cast<bool (Urho3D::Engine::*)() const>(&Urho3D::Engine::GetAutoExit) ;
    /*Return whether engine has been initialized. BIND_AS_PROPERTY*//*() const*/
    type["IsInitialized"] = static_cast<bool (Urho3D::Engine::*)() const>(&Urho3D::Engine::IsInitialized) ;
    /*Return whether exit has been requested. BIND_AS_PROPERTY*//*() const*/
    type["IsExiting"] = static_cast<bool (Urho3D::Engine::*)() const>(&Urho3D::Engine::IsExiting) ;
    /*Return whether the engine has been created in headless mode. BIND_AS_PROPERTY*//*() const*/
    type["IsHeadless"] = static_cast<bool (Urho3D::Engine::*)() const>(&Urho3D::Engine::IsHeadless) ;
    /*Send frame update events.*//*()*/
    type["Update"] = static_cast<void (Urho3D::Engine::*)()>(&Urho3D::Engine::Update) ;
    /*Render after frame update.*//*()*/
    type["Render"] = static_cast<void (Urho3D::Engine::*)()>(&Urho3D::Engine::Render) ;
    /*Get the timestep for the next frame and sleep for frame limiting if necessary.*//*()*/
    type["ApplyFrameLimit"] = static_cast<void (Urho3D::Engine::*)()>(&Urho3D::Engine::ApplyFrameLimit) ;
    type["InitializeResourceCache"] = sol::overload(
        static_cast<bool (Urho3D::Engine::*)(const  VariantMap &, bool)>(&Urho3D::Engine::InitializeResourceCache) ,
        [](Urho3D::Engine& self, const  VariantMap & parameters){ return self.InitializeResourceCache(parameters); } );
    type["DumpResources"] = sol::overload(
        static_cast<void (Urho3D::Engine::*)(bool)>(&Urho3D::Engine::DumpResources) ,
        [](Urho3D::Engine& self){ self.DumpResources(); } );
    type["autoExit"] = sol::property(static_cast<bool (Urho3D::Engine::*)() const>(&Urho3D::Engine::GetAutoExit) 
        , static_cast<void (Urho3D::Engine::*)(bool)>(&Urho3D::Engine::SetAutoExit) );
    type["exiting"] = sol::property(static_cast<bool (Urho3D::Engine::*)() const>(&Urho3D::Engine::IsExiting) );
    type["headless"] = sol::property(static_cast<bool (Urho3D::Engine::*)() const>(&Urho3D::Engine::IsHeadless) );
    type["initialized"] = sol::property(static_cast<bool (Urho3D::Engine::*)() const>(&Urho3D::Engine::IsInitialized) );
    type["maxFps"] = sol::property(static_cast<int (Urho3D::Engine::*)() const>(&Urho3D::Engine::GetMaxFps) 
        , static_cast<void (Urho3D::Engine::*)(int)>(&Urho3D::Engine::SetMaxFps) );
    type["maxInactiveFps"] = sol::property(static_cast<int (Urho3D::Engine::*)() const>(&Urho3D::Engine::GetMaxInactiveFps) 
        , static_cast<void (Urho3D::Engine::*)(int)>(&Urho3D::Engine::SetMaxInactiveFps) );
    type["minFps"] = sol::property(static_cast<int (Urho3D::Engine::*)() const>(&Urho3D::Engine::GetMinFps) 
        , static_cast<void (Urho3D::Engine::*)(int)>(&Urho3D::Engine::SetMinFps) );
    type["pauseMinimized"] = sol::property(static_cast<bool (Urho3D::Engine::*)() const>(&Urho3D::Engine::GetPauseMinimized) 
        , static_cast<void (Urho3D::Engine::*)(bool)>(&Urho3D::Engine::SetPauseMinimized) );
    type["timeStepSmoothing"] = sol::property(static_cast<int (Urho3D::Engine::*)() const>(&Urho3D::Engine::GetTimeStepSmoothing) 
        , static_cast<void (Urho3D::Engine::*)(int)>(&Urho3D::Engine::SetTimeStepSmoothing) );

}

