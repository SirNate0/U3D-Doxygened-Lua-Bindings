
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Engine/Application.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Engine/Application.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Application(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Application::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Application::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Application>((Urho3D::Application*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Application>( "Application"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Application>(context);
        });

// Members

    /*Setup before engine initialization. This is a chance to eg. modify the engine parameters. Call  ErrorExit() to terminate without initializing the engine. Called by  Application.*//*()*/
    type["Setup"] = static_cast<void (Urho3D::Application::*)()>(&Urho3D::Application::Setup) ;
    /*Setup after engine initialization and before running the main loop. Call  ErrorExit() to terminate without running the main loop. Called by  Application.*//*()*/
    type["Start"] = static_cast<void (Urho3D::Application::*)()>(&Urho3D::Application::Start) ;
    /*Cleanup after the main loop. Called by  Application.*//*()*/
    type["Stop"] = static_cast<void (Urho3D::Application::*)()>(&Urho3D::Application::Stop) ;
    /*Initialize the engine and run the main loop, then return the application exit code. Catch out-of-memory exceptions while running.*//*()*/
    type["Run"] = static_cast<int (Urho3D::Application::*)()>(&Urho3D::Application::Run) ;
    type["ErrorExit"] = sol::overload(
        static_cast<void (Urho3D::Application::*)(const  String &)>(&Urho3D::Application::ErrorExit) ,
        [](Urho3D::Application& self){ self.ErrorExit(); } );

}

