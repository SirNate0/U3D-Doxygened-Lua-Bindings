
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/IO/FileWatcher.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/IO/FileWatcher.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_FileWatcher(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::FileWatcher::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::FileWatcher::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::FileWatcher>((Urho3D::FileWatcher*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::FileWatcher>( "FileWatcher"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted,Urho3D::Thread>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::FileWatcher>(context);
        });

// Members

    /*Directory watching loop.*//*() override*/
    type["ThreadFunction"] = static_cast<void (Urho3D::FileWatcher::*)()>(&Urho3D::FileWatcher::ThreadFunction) ;
    /*Start watching a directory. Return true if successful.*//*(const String &pathName, bool watchSubDirs)*/
    type["StartWatching"] = static_cast<bool (Urho3D::FileWatcher::*)(const  String &, bool)>(&Urho3D::FileWatcher::StartWatching) ;
    /*Stop watching the directory.*//*()*/
    type["StopWatching"] = static_cast<void (Urho3D::FileWatcher::*)()>(&Urho3D::FileWatcher::StopWatching) ;
    /*Set the delay in seconds before file changes are notified. This (hopefully) avoids notifying when a file save is still in progress. Default 1 second.*//*(float interval)*/
    type["SetDelay"] = static_cast<void (Urho3D::FileWatcher::*)(float)>(&Urho3D::FileWatcher::SetDelay) ;
    /*Add a file change into the changes queue.*//*(const String &fileName)*/
    type["AddChange"] = static_cast<void (Urho3D::FileWatcher::*)(const  String &)>(&Urho3D::FileWatcher::AddChange) ;
#if 0 // INVALID: NeedsWrap(String &)
    /*Return a file change (true if was found, false if not).*//*(String &dest)*/
    type["GetNextChange"] = static_cast<bool (Urho3D::FileWatcher::*)(String &)>(&Urho3D::FileWatcher::GetNextChange) ;
#endif
        
    /*Return the path being watched, or empty if not watching.*//*() const*/
    type["GetPath"] = static_cast<const String& (Urho3D::FileWatcher::*)() const>(&Urho3D::FileWatcher::GetPath) ;
    /*Return the delay in seconds for notifying file changes.*//*() const*/
    type["GetDelay"] = static_cast<float (Urho3D::FileWatcher::*)() const>(&Urho3D::FileWatcher::GetDelay) ;

}

