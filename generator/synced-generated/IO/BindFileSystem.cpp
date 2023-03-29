
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/IO/FileSystem.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/IO/FileSystem.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_FileSystem(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::FileSystem::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::FileSystem::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::FileSystem>((Urho3D::FileSystem*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::FileSystem>( "FileSystem"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::FileSystem>(context);
        });

// Members

    /*Set the current working directory. BIND_AS_PROPERTY*//*(const String &pathName)*/
    type["SetCurrentDir"] = static_cast<bool (Urho3D::FileSystem::*)(const  String &)>(&Urho3D::FileSystem::SetCurrentDir) ;
    /*Create a directory.*//*(const String &pathName)*/
    type["CreateDir"] = static_cast<bool (Urho3D::FileSystem::*)(const  String &)>(&Urho3D::FileSystem::CreateDir) ;
    /*Set whether to execute engine console commands as OS-specific system command. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetExecuteConsoleCommands"] = static_cast<void (Urho3D::FileSystem::*)(bool)>(&Urho3D::FileSystem::SetExecuteConsoleCommands) ;
    /*Run a specific program, block until it exits and return the exit code. Will fail if any allowed paths are defined.*//*(const String &fileName, const Vector< String > &arguments)*/
    type["SystemRun"] = static_cast<int (Urho3D::FileSystem::*)(const  String &, const  Vector<  String > &)>(&Urho3D::FileSystem::SystemRun) ;
    /*Run a program using the command interpreter asynchronously. Return a request ID or M_MAX_UNSIGNED if failed. The exit code will be posted together with the request ID in an AsyncExecFinished event. Will fail if any allowed paths are defined.*//*(const String &commandLine)*/
    type["SystemCommandAsync"] = static_cast<unsigned (Urho3D::FileSystem::*)(const  String &)>(&Urho3D::FileSystem::SystemCommandAsync) ;
    /*Run a specific program asynchronously. Return a request ID or M_MAX_UNSIGNED if failed. The exit code will be posted together with the request ID in an AsyncExecFinished event. Will fail if any allowed paths are defined.*//*(const String &fileName, const Vector< String > &arguments)*/
    type["SystemRunAsync"] = static_cast<unsigned (Urho3D::FileSystem::*)(const  String &, const  Vector<  String > &)>(&Urho3D::FileSystem::SystemRunAsync) ;
    /*Copy a file. Return true if successful.*//*(const String &srcFileName, const String &destFileName)*/
    type["Copy"] = static_cast<bool (Urho3D::FileSystem::*)(const  String &, const  String &)>(&Urho3D::FileSystem::Copy) ;
    /*Rename a file. Return true if successful.*//*(const String &srcFileName, const String &destFileName)*/
    type["Rename"] = static_cast<bool (Urho3D::FileSystem::*)(const  String &, const  String &)>(&Urho3D::FileSystem::Rename) ;
    /*Delete a file. Return true if successful.*//*(const String &fileName)*/
    type["Delete"] = static_cast<bool (Urho3D::FileSystem::*)(const  String &)>(&Urho3D::FileSystem::Delete) ;
    /*Register a path as allowed to access. If no paths are registered, all are allowed. Registering allowed paths is considered securing the Urho3D execution environment: running programs and opening files externally through the system will fail afterward.*//*(const String &pathName)*/
    type["RegisterPath"] = static_cast<void (Urho3D::FileSystem::*)(const  String &)>(&Urho3D::FileSystem::RegisterPath) ;
    /*Set a file's last modified time as seconds since 1.1.1970. Return true on success.*//*(const String &fileName, unsigned newTime)*/
    type["SetLastModifiedTime"] = static_cast<bool (Urho3D::FileSystem::*)(const  String &, unsigned)>(&Urho3D::FileSystem::SetLastModifiedTime) ;
    /*Return the absolute current working directory. BIND_AS_PROPERTY*//*() const*/
    type["GetCurrentDir"] = static_cast<String (Urho3D::FileSystem::*)() const>(&Urho3D::FileSystem::GetCurrentDir) ;
    /*Return whether is executing engine console commands as OS-specific system command. BIND_AS_PROPERTY*//*() const*/
    type["GetExecuteConsoleCommands"] = static_cast<bool (Urho3D::FileSystem::*)() const>(&Urho3D::FileSystem::GetExecuteConsoleCommands) ;
    /*Return whether paths have been registered.*//*() const*/
    type["HasRegisteredPaths"] = static_cast<bool (Urho3D::FileSystem::*)() const>(&Urho3D::FileSystem::HasRegisteredPaths) ;
    /*Check if a path is allowed to be accessed. If no paths are registered, all are allowed.*//*(const String &pathName) const*/
    type["CheckAccess"] = static_cast<bool (Urho3D::FileSystem::*)(const  String &) const>(&Urho3D::FileSystem::CheckAccess) ;
    /*Returns the file's last modified time as seconds since 1.1.1970, or 0 if can not be accessed.*//*(const String &fileName) const*/
    type["GetLastModifiedTime"] = static_cast<unsigned (Urho3D::FileSystem::*)(const  String &) const>(&Urho3D::FileSystem::GetLastModifiedTime) ;
    /*Check if a file exists.*//*(const String &fileName) const*/
    type["FileExists"] = static_cast<bool (Urho3D::FileSystem::*)(const  String &) const>(&Urho3D::FileSystem::FileExists) ;
    /*Check if a directory exists.*//*(const String &pathName) const*/
    type["DirExists"] = static_cast<bool (Urho3D::FileSystem::*)(const  String &) const>(&Urho3D::FileSystem::DirExists) ;
    /*Scan a directory for specified files.*//*(Vector< String > &result, const String &pathName, const String &filter, unsigned flags, bool recursive) const*/
    type["ScanDir"] = static_cast<void (Urho3D::FileSystem::*)(Vector<  String > &, const  String &, const  String &, unsigned, bool) const>(&Urho3D::FileSystem::ScanDir) ;
    /*Return the program's directory. BIND_AS_PROPERTY*//*() const*/
    type["GetProgramDir"] = static_cast<String (Urho3D::FileSystem::*)() const>(&Urho3D::FileSystem::GetProgramDir) ;
    /*Return the user documents directory. BIND_AS_PROPERTY*//*() const*/
    type["GetUserDocumentsDir"] = static_cast<String (Urho3D::FileSystem::*)() const>(&Urho3D::FileSystem::GetUserDocumentsDir) ;
    /*Return the application preferences directory.*//*(const String &org, const String &app) const*/
    type["GetAppPreferencesDir"] = static_cast<String (Urho3D::FileSystem::*)(const  String &, const  String &) const>(&Urho3D::FileSystem::GetAppPreferencesDir) ;
    /*Return path of temporary directory. Path always ends with a forward slash. BIND_AS_PROPERTY*//*() const*/
    type["GetTemporaryDir"] = static_cast<String (Urho3D::FileSystem::*)() const>(&Urho3D::FileSystem::GetTemporaryDir) ;
    type["SystemCommand"] = sol::overload(
        static_cast<int (Urho3D::FileSystem::*)(const  String &, bool)>(&Urho3D::FileSystem::SystemCommand) ,
        [](Urho3D::FileSystem& self, const  String & commandLine){ return self.SystemCommand(commandLine); } );
    type["SystemOpen"] = sol::overload(
        static_cast<bool (Urho3D::FileSystem::*)(const  String &, const  String &)>(&Urho3D::FileSystem::SystemOpen) ,
        [](Urho3D::FileSystem& self, const  String & fileName){ return self.SystemOpen(fileName); } );
    type["currentDir"] = sol::property(static_cast<String (Urho3D::FileSystem::*)() const>(&Urho3D::FileSystem::GetCurrentDir) 
        , static_cast<bool (Urho3D::FileSystem::*)(const  String &)>(&Urho3D::FileSystem::SetCurrentDir) );
    type["executeConsoleCommands"] = sol::property(static_cast<bool (Urho3D::FileSystem::*)() const>(&Urho3D::FileSystem::GetExecuteConsoleCommands) 
        , static_cast<void (Urho3D::FileSystem::*)(bool)>(&Urho3D::FileSystem::SetExecuteConsoleCommands) );
    type["programDir"] = sol::property(static_cast<String (Urho3D::FileSystem::*)() const>(&Urho3D::FileSystem::GetProgramDir) );
    type["temporaryDir"] = sol::property(static_cast<String (Urho3D::FileSystem::*)() const>(&Urho3D::FileSystem::GetTemporaryDir) );
    type["userDocumentsDir"] = sol::property(static_cast<String (Urho3D::FileSystem::*)() const>(&Urho3D::FileSystem::GetUserDocumentsDir) );

}

