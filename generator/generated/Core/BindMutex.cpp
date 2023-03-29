
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Mutex.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Mutex.h>
#include <Urho3D/Core/Mutex.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_MutexLock(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::MutexLock>( "MutexLock"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::MutexLock(Mutex &)>();

// Members

#if 0 // INVALID: deleted!
    /*Prevent assignment.*//*(const MutexLock &rhs)=delete*/
    type["operator_assign"] = static_cast<MutexLock& (Urho3D::MutexLock::*)(const  MutexLock &)=delete>(&Urho3D::MutexLock::operator=) ;
#endif
        

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Mutex.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Mutex.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Mutex(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Mutex>( "Mutex"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Mutex()>();

// Members

    /*Acquire the mutex. Block if already acquired.*//*()*/
    type["Acquire"] = static_cast<void (Urho3D::Mutex::*)()>(&Urho3D::Mutex::Acquire) ;
    /*Try to acquire the mutex without locking. Return true if successful.*//*()*/
    type["TryAcquire"] = static_cast<bool (Urho3D::Mutex::*)()>(&Urho3D::Mutex::TryAcquire) ;
    /*Release the mutex.*//*()*/
    type["Release"] = static_cast<void (Urho3D::Mutex::*)()>(&Urho3D::Mutex::Release) ;

}

