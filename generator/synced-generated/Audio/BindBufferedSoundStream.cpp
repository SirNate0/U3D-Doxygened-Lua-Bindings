
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Audio/BufferedSoundStream.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Audio/BufferedSoundStream.h>
#include <Urho3D/Container/ArrayPtr.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_BufferedSoundStream(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::BufferedSoundStream>( "BufferedSoundStream"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::SoundStream,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([]() { 
            return Urho3D::MakeShared<Urho3D::BufferedSoundStream>();
        });

// Members

    /*Produce sound data into destination. Return number of bytes produced. Called by  SoundSource from the mixing thread.*//*(signed char *dest, unsigned numBytes) override*/
    type["GetData"] = static_cast<unsigned (Urho3D::BufferedSoundStream::*)(signed char *, unsigned)>(&Urho3D::BufferedSoundStream::GetData) ;
    /*Remove all buffered audio data.*//*()*/
    type["Clear"] = static_cast<void (Urho3D::BufferedSoundStream::*)()>(&Urho3D::BufferedSoundStream::Clear) ;
    /*Return amount of buffered (unplayed) sound data in bytes.*//*() const*/
    type["GetBufferNumBytes"] = static_cast<unsigned (Urho3D::BufferedSoundStream::*)() const>(&Urho3D::BufferedSoundStream::GetBufferNumBytes) ;
    /*Return length of buffered (unplayed) sound data in seconds.*//*() const*/
    type["GetBufferLength"] = static_cast<float (Urho3D::BufferedSoundStream::*)() const>(&Urho3D::BufferedSoundStream::GetBufferLength) ;
    type["AddData"] = sol::overload(
        static_cast<void (Urho3D::BufferedSoundStream::*)(void *, unsigned)>(&Urho3D::BufferedSoundStream::AddData) ,
        static_cast<void (Urho3D::BufferedSoundStream::*)(const  SharedArrayPtr< signed char > &, unsigned)>(&Urho3D::BufferedSoundStream::AddData) ,
        static_cast<void (Urho3D::BufferedSoundStream::*)(const  SharedArrayPtr< signed short > &, unsigned)>(&Urho3D::BufferedSoundStream::AddData)  );

}

