
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Thread.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Thread.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Thread(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Thread>( "Thread"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*ABSTRACT*/

// Members

    /*The function to run in the thread.*//*()=0*/
    type["ThreadFunction"] = static_cast<void (Urho3D::Thread::*)()>(&Urho3D::Thread::ThreadFunction) ;
    /*Start running the thread. Return true if successful, or false if already running or if can not create the thread.*//*()*/
    type["Run"] = static_cast<bool (Urho3D::Thread::*)()>(&Urho3D::Thread::Run) ;
    /*Set the running flag to false and wait for the thread to finish.*//*()*/
    type["Stop"] = static_cast<void (Urho3D::Thread::*)()>(&Urho3D::Thread::Stop) ;
    /*Set thread priority. The thread must have been started first.*//*(int priority)*/
    type["SetPriority"] = static_cast<void (Urho3D::Thread::*)(int)>(&Urho3D::Thread::SetPriority) ;
    /*Return whether thread exists.*//*() const*/
    type["IsStarted"] = static_cast<bool (Urho3D::Thread::*)() const>(&Urho3D::Thread::IsStarted) ;

}

