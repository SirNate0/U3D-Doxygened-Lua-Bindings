
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Audio/Audio.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Audio/Audio.h>
#include <Urho3D/Audio/Sound.h>
#include <Urho3D/Audio/SoundListener.h>
#include <Urho3D/Audio/SoundSource.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Mutex.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Audio(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Audio::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Audio::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Audio>((Urho3D::Audio*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Audio>( "Audio"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Audio>(context);
        });

// Members

    /*Run update on sound sources. Not required for continued playback, but frees unused sound sources & sounds and updates 3D positions.*//*(float timeStep)*/
    type["Update"] = static_cast<void (Urho3D::Audio::*)(float)>(&Urho3D::Audio::Update) ;
    /*Restart sound output.*//*()*/
    type["Play"] = static_cast<bool (Urho3D::Audio::*)()>(&Urho3D::Audio::Play) ;
    /*Suspend sound output.*//*()*/
    type["Stop"] = static_cast<void (Urho3D::Audio::*)()>(&Urho3D::Audio::Stop) ;
    /*Set master gain on a specific sound type such as sound effects, music or voice. BIND_AS_PROPERTY*//*(const String &type, float gain)*/
    type["SetMasterGain"] = static_cast<void (Urho3D::Audio::*)(const  String &, float)>(&Urho3D::Audio::SetMasterGain) ;
    /*Pause playback of specific sound type. This allows to suspend e.g. sound effects or voice when the game is paused. By default all sound types are unpaused.*//*(const String &type)*/
    type["PauseSoundType"] = static_cast<void (Urho3D::Audio::*)(const  String &)>(&Urho3D::Audio::PauseSoundType) ;
    /*Resume playback of specific sound type.*//*(const String &type)*/
    type["ResumeSoundType"] = static_cast<void (Urho3D::Audio::*)(const  String &)>(&Urho3D::Audio::ResumeSoundType) ;
    /*Resume playback of all sound types.*//*()*/
    type["ResumeAll"] = static_cast<void (Urho3D::Audio::*)()>(&Urho3D::Audio::ResumeAll) ;
    /*Set active sound listener for 3D sounds. BIND_AS_PROPERTY*//*(SoundListener *listener)*/
    type["SetListener"] = static_cast<void (Urho3D::Audio::*)(SoundListener *)>(&Urho3D::Audio::SetListener) ;
    /*Stop any sound source playing a certain sound clip.*//*(Sound *sound)*/
    type["StopSound"] = static_cast<void (Urho3D::Audio::*)(Sound *)>(&Urho3D::Audio::StopSound) ;
    /*Return byte size of one sample. BIND_AS_PROPERTY*//*() const*/
    type["GetSampleSize"] = static_cast<unsigned (Urho3D::Audio::*)() const>(&Urho3D::Audio::GetSampleSize) ;
    /*Return mixing rate. BIND_AS_PROPERTY*//*() const*/
    type["GetMixRate"] = static_cast<int (Urho3D::Audio::*)() const>(&Urho3D::Audio::GetMixRate) ;
    /*Return whether output is interpolated. BIND_AS_PROPERTY*//*() const*/
    type["GetInterpolation"] = static_cast<bool (Urho3D::Audio::*)() const>(&Urho3D::Audio::GetInterpolation) ;
    /*Return whether output is stereo. BIND_AS_PROPERTY*//*() const*/
    type["IsStereo"] = static_cast<bool (Urho3D::Audio::*)() const>(&Urho3D::Audio::IsStereo) ;
    /*Return whether audio is being output. BIND_AS_PROPERTY*//*() const*/
    type["IsPlaying"] = static_cast<bool (Urho3D::Audio::*)() const>(&Urho3D::Audio::IsPlaying) ;
    /*Return whether an audio stream has been reserved. BIND_AS_PROPERTY*//*() const*/
    type["IsInitialized"] = static_cast<bool (Urho3D::Audio::*)() const>(&Urho3D::Audio::IsInitialized) ;
    /*Return master gain for a specific sound source type. Unknown sound types will return full gain (1). BIND_AS_PROPERTY*//*(const String &type) const*/
    type["GetMasterGain"] = static_cast<float (Urho3D::Audio::*)(const  String &) const>(&Urho3D::Audio::GetMasterGain) ;
    /*Return whether specific sound type has been paused.*//*(const String &type) const*/
    type["IsSoundTypePaused"] = static_cast<bool (Urho3D::Audio::*)(const  String &) const>(&Urho3D::Audio::IsSoundTypePaused) ;
    /*Return active sound listener. BIND_AS_PROPERTY*//*() const*/
    type["GetListener"] = [](Urho3D::Audio& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetListener());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return all sound sources.*//*() const*/
    type["GetSoundSources"] = static_cast<const PODVector<SoundSource*>& (Urho3D::Audio::*)() const>(&Urho3D::Audio::GetSoundSources) ;
    /*Return whether the specified master gain has been defined.*//*(const String &type) const*/
    type["HasMasterGain"] = static_cast<bool (Urho3D::Audio::*)(const  String &) const>(&Urho3D::Audio::HasMasterGain) ;
    /*Add a sound source to keep track of. Called by  SoundSource.*//*(SoundSource *soundSource)*/
    type["AddSoundSource"] = static_cast<void (Urho3D::Audio::*)(SoundSource *)>(&Urho3D::Audio::AddSoundSource) ;
    /*Remove a sound source. Called by  SoundSource.*//*(SoundSource *soundSource)*/
    type["RemoveSoundSource"] = static_cast<void (Urho3D::Audio::*)(SoundSource *)>(&Urho3D::Audio::RemoveSoundSource) ;
    /*Return audio thread mutex.*//*()*/
    type["GetMutex"] = static_cast<Mutex& (Urho3D::Audio::*)()>(&Urho3D::Audio::GetMutex) ;
    /*Return sound type specific gain multiplied by master gain.*//*(StringHash typeHash) const*/
    type["GetSoundSourceMasterGain"] = static_cast<float (Urho3D::Audio::*)(StringHash) const>(&Urho3D::Audio::GetSoundSourceMasterGain) ;
    /*Mix sound sources into the buffer.*//*(void *dest, unsigned samples)*/
    type["MixOutput"] = static_cast<void (Urho3D::Audio::*)(void *, unsigned)>(&Urho3D::Audio::MixOutput) ;
    type["SetMode"] = sol::overload(
        static_cast<bool (Urho3D::Audio::*)(int, int, bool, bool)>(&Urho3D::Audio::SetMode) ,
        [](Urho3D::Audio& self, int bufferLengthMSec, int mixRate, bool stereo){ return self.SetMode(bufferLengthMSec, mixRate, stereo); } );
    type["initialized"] = sol::property(static_cast<bool (Urho3D::Audio::*)() const>(&Urho3D::Audio::IsInitialized) );
    type["interpolation"] = sol::property(static_cast<bool (Urho3D::Audio::*)() const>(&Urho3D::Audio::GetInterpolation) );
    type["listener"] = sol::property([](Urho3D::Audio& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetListener());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Audio::*)(SoundListener *)>(&Urho3D::Audio::SetListener) );
    type["masterGain"] = sol::property(static_cast<float (Urho3D::Audio::*)(const  String &) const>(&Urho3D::Audio::GetMasterGain) 
        , static_cast<void (Urho3D::Audio::*)(const  String &, float)>(&Urho3D::Audio::SetMasterGain) );
    type["mixRate"] = sol::property(static_cast<int (Urho3D::Audio::*)() const>(&Urho3D::Audio::GetMixRate) );
    type["playing"] = sol::property(static_cast<bool (Urho3D::Audio::*)() const>(&Urho3D::Audio::IsPlaying) );
    type["sampleSize"] = sol::property(static_cast<unsigned (Urho3D::Audio::*)() const>(&Urho3D::Audio::GetSampleSize) );
    type["stereo"] = sol::property(static_cast<bool (Urho3D::Audio::*)() const>(&Urho3D::Audio::IsStereo) );

}

