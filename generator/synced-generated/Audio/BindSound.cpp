
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Audio/Sound.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Audio/Sound.h>
#include <Urho3D/Audio/SoundStream.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/IO/Deserializer.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Sound(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Sound::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Sound::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Sound>((Urho3D::Sound*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Sound>( "Sound"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::ResourceWithMetadata,Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Sound>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::Sound::*)(Deserializer &)>(&Urho3D::Sound::BeginLoad) ;
    /*Load raw sound data.*//*(Deserializer &source)*/
    type["LoadRaw"] = static_cast<bool (Urho3D::Sound::*)(Deserializer &)>(&Urho3D::Sound::LoadRaw) ;
    /*Load WAV format sound data.*//*(Deserializer &source)*/
    type["LoadWav"] = static_cast<bool (Urho3D::Sound::*)(Deserializer &)>(&Urho3D::Sound::LoadWav) ;
    /*Load Ogg Vorbis format sound data. Does not decode at load, but will rather be decoded while playing.*//*(Deserializer &source)*/
    type["LoadOggVorbis"] = static_cast<bool (Urho3D::Sound::*)(Deserializer &)>(&Urho3D::Sound::LoadOggVorbis) ;
    /*Set sound size in bytes. Also resets the sound to be uncompressed and one-shot.*//*(unsigned dataSize)*/
    type["SetSize"] = static_cast<void (Urho3D::Sound::*)(unsigned)>(&Urho3D::Sound::SetSize) ;
    /*Set uncompressed sound data.*//*(const void *data, unsigned dataSize)*/
    type["SetData"] = static_cast<void (Urho3D::Sound::*)(const void *, unsigned)>(&Urho3D::Sound::SetData) ;
    /*Set uncompressed sound data format.*//*(unsigned frequency, bool sixteenBit, bool stereo)*/
    type["SetFormat"] = static_cast<void (Urho3D::Sound::*)(unsigned, bool, bool)>(&Urho3D::Sound::SetFormat) ;
    /*Set loop on/off. If loop is enabled, sets the full sound as loop range. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetLooped"] = static_cast<void (Urho3D::Sound::*)(bool)>(&Urho3D::Sound::SetLooped) ;
    /*Define loop.*//*(unsigned repeatOffset, unsigned endOffset)*/
    type["SetLoop"] = static_cast<void (Urho3D::Sound::*)(unsigned, unsigned)>(&Urho3D::Sound::SetLoop) ;
    /*Return a new instance of a decoder sound stream. Used by compressed sounds.*//*() const*/
    type["GetDecoderStream"] = static_cast<SharedPtr<SoundStream> (Urho3D::Sound::*)() const>(&Urho3D::Sound::GetDecoderStream) ;
    /*Return shared sound data.*//*() const*/
    type["GetData"] = static_cast<SharedArrayPtr<signed char> (Urho3D::Sound::*)() const>(&Urho3D::Sound::GetData) ;
    /*Return sound data start.*//*() const*/
    type["GetStart"] = static_cast<signed char* (Urho3D::Sound::*)() const>(&Urho3D::Sound::GetStart) ;
    /*Return loop start.*//*() const*/
    type["GetRepeat"] = static_cast<signed char* (Urho3D::Sound::*)() const>(&Urho3D::Sound::GetRepeat) ;
    /*Return sound data end.*//*() const*/
    type["GetEnd"] = static_cast<signed char* (Urho3D::Sound::*)() const>(&Urho3D::Sound::GetEnd) ;
    /*Return length in seconds. BIND_AS_PROPERTY*//*() const*/
    type["GetLength"] = static_cast<float (Urho3D::Sound::*)() const>(&Urho3D::Sound::GetLength) ;
    /*Return total sound data size.*//*() const*/
    type["GetDataSize"] = static_cast<unsigned (Urho3D::Sound::*)() const>(&Urho3D::Sound::GetDataSize) ;
    /*Return sample size. BIND_AS_PROPERTY*//*() const*/
    type["GetSampleSize"] = static_cast<unsigned (Urho3D::Sound::*)() const>(&Urho3D::Sound::GetSampleSize) ;
    /*Return default frequency as a float. BIND_AS_PROPERTY*//*() const*/
    type["GetFrequency"] = static_cast<float (Urho3D::Sound::*)() const>(&Urho3D::Sound::GetFrequency) ;
    /*Return default frequency as an integer.*//*() const*/
    type["GetIntFrequency"] = static_cast<unsigned (Urho3D::Sound::*)() const>(&Urho3D::Sound::GetIntFrequency) ;
    /*Return whether is looped. BIND_AS_PROPERTY*//*() const*/
    type["IsLooped"] = static_cast<bool (Urho3D::Sound::*)() const>(&Urho3D::Sound::IsLooped) ;
    /*Return whether data is sixteen bit. BIND_AS_PROPERTY*//*() const*/
    type["IsSixteenBit"] = static_cast<bool (Urho3D::Sound::*)() const>(&Urho3D::Sound::IsSixteenBit) ;
    /*Return whether data is stereo. BIND_AS_PROPERTY*//*() const*/
    type["IsStereo"] = static_cast<bool (Urho3D::Sound::*)() const>(&Urho3D::Sound::IsStereo) ;
    /*Return whether is compressed. BIND_AS_PROPERTY*//*() const*/
    type["IsCompressed"] = static_cast<bool (Urho3D::Sound::*)() const>(&Urho3D::Sound::IsCompressed) ;
    /*Fix interpolation by copying data from loop start to loop end (looped), or adding silence (oneshot). Called internally, does not normally need to be called, unless the sound data is modified manually on the fly.*//*()*/
    type["FixInterpolation"] = static_cast<void (Urho3D::Sound::*)()>(&Urho3D::Sound::FixInterpolation) ;
    type["compressed"] = sol::property(static_cast<bool (Urho3D::Sound::*)() const>(&Urho3D::Sound::IsCompressed) );
    type["frequency"] = sol::property(static_cast<float (Urho3D::Sound::*)() const>(&Urho3D::Sound::GetFrequency) );
    type["length"] = sol::property(static_cast<float (Urho3D::Sound::*)() const>(&Urho3D::Sound::GetLength) );
    type["looped"] = sol::property(static_cast<bool (Urho3D::Sound::*)() const>(&Urho3D::Sound::IsLooped) 
        , static_cast<void (Urho3D::Sound::*)(bool)>(&Urho3D::Sound::SetLooped) );
    type["sampleSize"] = sol::property(static_cast<unsigned (Urho3D::Sound::*)() const>(&Urho3D::Sound::GetSampleSize) );
    type["sixteenBit"] = sol::property(static_cast<bool (Urho3D::Sound::*)() const>(&Urho3D::Sound::IsSixteenBit) );
    type["stereo"] = sol::property(static_cast<bool (Urho3D::Sound::*)() const>(&Urho3D::Sound::IsStereo) );

}

