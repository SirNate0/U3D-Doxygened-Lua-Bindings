
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/IO/Log.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/IO/Log.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Log(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Log::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Log::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Log>((Urho3D::Log*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Log>( "Log"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Log>(context);
        });

// Members

    /*Open the log file.*//*(const String &fileName)*/
    type["Open"] = static_cast<void (Urho3D::Log::*)(const  String &)>(&Urho3D::Log::Open) ;
    /*Close the log file.*//*()*/
    type["Close"] = static_cast<void (Urho3D::Log::*)()>(&Urho3D::Log::Close) ;
    /*Set logging level. BIND_AS_PROPERTY*//*(int level)*/
    type["SetLevel"] = static_cast<void (Urho3D::Log::*)(int)>(&Urho3D::Log::SetLevel) ;
    /*Set whether to timestamp log messages. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetTimeStamp"] = static_cast<void (Urho3D::Log::*)(bool)>(&Urho3D::Log::SetTimeStamp) ;
    /*Set quiet mode ie. only print error entries to standard error stream (which is normally redirected to console also). Output to log file is not affected by this mode. BIND_AS_PROPERTY*//*(bool quiet)*/
    type["SetQuiet"] = static_cast<void (Urho3D::Log::*)(bool)>(&Urho3D::Log::SetQuiet) ;
    /*Return logging level. BIND_AS_PROPERTY*//*() const*/
    type["GetLevel"] = static_cast<int (Urho3D::Log::*)() const>(&Urho3D::Log::GetLevel) ;
    /*Return whether log messages are timestamped. BIND_AS_PROPERTY*//*() const*/
    type["GetTimeStamp"] = static_cast<bool (Urho3D::Log::*)() const>(&Urho3D::Log::GetTimeStamp) ;
    /*Return last log message. BIND_AS_PROPERTY*//*() const*/
    type["GetLastMessage"] = static_cast<String (Urho3D::Log::*)() const>(&Urho3D::Log::GetLastMessage) ;
    /*Return whether log is in quiet mode (only errors printed to standard error stream). BIND_AS_PROPERTY*//*() const*/
    type["IsQuiet"] = static_cast<bool (Urho3D::Log::*)() const>(&Urho3D::Log::IsQuiet) ;
    type["lastMessage"] = sol::property(static_cast<String (Urho3D::Log::*)() const>(&Urho3D::Log::GetLastMessage) );
    type["level"] = sol::property(static_cast<int (Urho3D::Log::*)() const>(&Urho3D::Log::GetLevel) 
        , static_cast<void (Urho3D::Log::*)(int)>(&Urho3D::Log::SetLevel) );
    type["quiet"] = sol::property(static_cast<bool (Urho3D::Log::*)() const>(&Urho3D::Log::IsQuiet) 
        , static_cast<void (Urho3D::Log::*)(bool)>(&Urho3D::Log::SetQuiet) );
    type["timeStamp"] = sol::property(static_cast<bool (Urho3D::Log::*)() const>(&Urho3D::Log::GetTimeStamp) 
        , static_cast<void (Urho3D::Log::*)(bool)>(&Urho3D::Log::SetTimeStamp) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/IO/Log.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/IO/Log.h>
#include <Urho3D/Container/Str.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_StoredLogMessage(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::StoredLogMessage>( "StoredLogMessage"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::StoredLogMessage(),
        Urho3D::StoredLogMessage(const  String &, int, bool)>();

// Members

    type["message_"] = &Urho3D::StoredLogMessage::message_;
    type["level_"] = &Urho3D::StoredLogMessage::level_;
    type["error_"] = &Urho3D::StoredLogMessage::error_;

}

