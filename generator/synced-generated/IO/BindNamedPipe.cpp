
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/IO/NamedPipe.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/IO/NamedPipe.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_NamedPipe(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::NamedPipe::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::NamedPipe::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::NamedPipe>((Urho3D::NamedPipe*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::NamedPipe>( "NamedPipe"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted,Urho3D::AbstractFile,Urho3D::Deserializer,Urho3D::Serializer>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::NamedPipe>(context);
        },[](Context *context, const String &name, bool isServer) { 
            return Urho3D::MakeShared<Urho3D::NamedPipe>(context, name, isServer);
        });

// Members

    /*Read bytes from the pipe without blocking if there is less data available. Return number of bytes actually read.*//*(void *dest, unsigned size) override*/
    type["Read"] = static_cast<unsigned (Urho3D::NamedPipe::*)(void *, unsigned)>(&Urho3D::NamedPipe::Read) ;
    /*Set position. No-op for pipes.*//*(unsigned position) override*/
    type["Seek"] = static_cast<unsigned (Urho3D::NamedPipe::*)(unsigned)>(&Urho3D::NamedPipe::Seek) ;
    /*Write bytes to the pipe. Return number of bytes actually written.*//*(const void *data, unsigned size) override*/
    type["Write"] = static_cast<unsigned (Urho3D::NamedPipe::*)(const void *, unsigned)>(&Urho3D::NamedPipe::Write) ;
    /*Return whether pipe has no data available.*//*() const override*/
    type["IsEof"] = static_cast<bool (Urho3D::NamedPipe::*)() const>(&Urho3D::NamedPipe::IsEof) ;
    /*Not supported.*//*(const String &name) override*/
    type["SetName"] = static_cast<void (Urho3D::NamedPipe::*)(const  String &)>(&Urho3D::NamedPipe::SetName) ;
    /*Open the pipe in either server or client mode. If already open, the existing pipe is closed. For a client end to open successfully the server end must already to be open. Return true if successful.*//*(const String &name, bool isServer)*/
    type["Open"] = static_cast<bool (Urho3D::NamedPipe::*)(const  String &, bool)>(&Urho3D::NamedPipe::Open) ;
    /*Close the pipe. Note that once a client has disconnected, the server needs to close and reopen the pipe so that another client can connect. At least on Windows this is not possible to detect automatically, so the communication protocol should include a "bye" message to handle this situation.*//*()*/
    type["Close"] = static_cast<void (Urho3D::NamedPipe::*)()>(&Urho3D::NamedPipe::Close) ;
    /*Return whether is open. BIND_AS_PROPERTY*//*() const*/
    type["IsOpen"] = static_cast<bool (Urho3D::NamedPipe::*)() const>(&Urho3D::NamedPipe::IsOpen) ;
    /*Return whether is in server mode. BIND_AS_PROPERTY*//*() const*/
    type["IsServer"] = static_cast<bool (Urho3D::NamedPipe::*)() const>(&Urho3D::NamedPipe::IsServer) ;
    type["open"] = sol::property(static_cast<bool (Urho3D::NamedPipe::*)() const>(&Urho3D::NamedPipe::IsOpen) );
    type["server"] = sol::property(static_cast<bool (Urho3D::NamedPipe::*)() const>(&Urho3D::NamedPipe::IsServer) );

}

