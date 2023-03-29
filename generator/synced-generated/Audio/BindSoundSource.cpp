
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Audio/SoundSource.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Audio/SoundSource.h>
#include <Urho3D/Audio/Sound.h>
#include <Urho3D/Audio/SoundStream.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Scene/Animatable.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_SoundSource(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::SoundSource::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::SoundSource::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::SoundSource>((Urho3D::SoundSource*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::SoundSource>( "SoundSource"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::SoundSource>(context);
        });

// Members

    /*Seek to time.*//*(float seekTime)*/
    type["Seek"] = static_cast<void (Urho3D::SoundSource::*)(float)>(&Urho3D::SoundSource::Seek) ;
    /*Stop playback.*//*()*/
    type["Stop"] = static_cast<void (Urho3D::SoundSource::*)()>(&Urho3D::SoundSource::Stop) ;
    /*Set sound type, determines the master gain group. BIND_AS_PROPERTY*//*(const String &type)*/
    type["SetSoundType"] = static_cast<void (Urho3D::SoundSource::*)(const  String &)>(&Urho3D::SoundSource::SetSoundType) ;
    /*Set frequency. BIND_AS_PROPERTY*//*(float frequency)*/
    type["SetFrequency"] = static_cast<void (Urho3D::SoundSource::*)(float)>(&Urho3D::SoundSource::SetFrequency) ;
    /*Set gain. 0.0 is silence, 1.0 is full volume. BIND_AS_PROPERTY*//*(float gain)*/
    type["SetGain"] = static_cast<void (Urho3D::SoundSource::*)(float)>(&Urho3D::SoundSource::SetGain) ;
    /*Set attenuation. 1.0 is unaltered. Used for distance attenuated playback.*//*(float attenuation)*/
    type["SetAttenuation"] = static_cast<void (Urho3D::SoundSource::*)(float)>(&Urho3D::SoundSource::SetAttenuation) ;
    /*Set stereo panning. -1.0 is full left and 1.0 is full right. BIND_AS_PROPERTY*//*(float panning)*/
    type["SetPanning"] = static_cast<void (Urho3D::SoundSource::*)(float)>(&Urho3D::SoundSource::SetPanning) ;
    /*Set to remove either the sound source component or its owner node from the scene automatically on sound playback completion. Disabled by default. BIND_AS_PROPERTY*//*(AutoRemoveMode mode)*/
    type["SetAutoRemoveMode"] = static_cast<void (Urho3D::SoundSource::*)(AutoRemoveMode)>(&Urho3D::SoundSource::SetAutoRemoveMode) ;
    /*Set new playback position.*//*(signed char *pos)*/
    type["SetPlayPosition"] = static_cast<void (Urho3D::SoundSource::*)(signed char *)>(&Urho3D::SoundSource::SetPlayPosition) ;
    /*Return sound. BIND_AS_PROPERTY*//*() const*/
    type["GetSound"] = [](Urho3D::SoundSource& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSound());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return playback position.*//*() const*/
    type["GetPlayPosition"] = static_cast<volatile signed char* (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetPlayPosition) ;
    /*Return sound type, determines the master gain group. BIND_AS_PROPERTY*//*() const*/
    type["GetSoundType"] = static_cast<String (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetSoundType) ;
    /*Return playback time position. BIND_AS_PROPERTY*//*() const*/
    type["GetTimePosition"] = static_cast<float (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetTimePosition) ;
    /*Return frequency. BIND_AS_PROPERTY*//*() const*/
    type["GetFrequency"] = static_cast<float (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetFrequency) ;
    /*Return gain. BIND_AS_PROPERTY*//*() const*/
    type["GetGain"] = static_cast<float (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetGain) ;
    /*Return attenuation. BIND_AS_PROPERTY*//*() const*/
    type["GetAttenuation"] = static_cast<float (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetAttenuation) ;
    /*Return stereo panning. BIND_AS_PROPERTY*//*() const*/
    type["GetPanning"] = static_cast<float (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetPanning) ;
    /*Return automatic removal mode on sound playback completion. BIND_AS_PROPERTY*//*() const*/
    type["GetAutoRemoveMode"] = static_cast<AutoRemoveMode (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetAutoRemoveMode) ;
    /*Return whether is playing. BIND_AS_PROPERTY*//*() const*/
    type["IsPlaying"] = static_cast<bool (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::IsPlaying) ;
    /*Update the sound source. Perform subclass specific operations. Called by  Audio.*//*(float timeStep)*/
    type["Update"] = static_cast<void (Urho3D::SoundSource::*)(float)>(&Urho3D::SoundSource::Update) ;
    /*Mix sound source output to a 32-bit clipping buffer. Called by  Audio.*//*(int *dest, unsigned samples, int mixRate, bool stereo, bool interpolation)*/
    type["Mix"] = static_cast<void (Urho3D::SoundSource::*)(int *, unsigned, int, bool, bool)>(&Urho3D::SoundSource::Mix) ;
    /*Update the effective master gain. Called internally and by  Audio when the master gain changes.*//*()*/
    type["UpdateMasterGain"] = static_cast<void (Urho3D::SoundSource::*)()>(&Urho3D::SoundSource::UpdateMasterGain) ;
    /*Set sound attribute.*//*(const ResourceRef &value)*/
    type["SetSoundAttr"] = static_cast<void (Urho3D::SoundSource::*)(const  ResourceRef &)>(&Urho3D::SoundSource::SetSoundAttr) ;
    /*Set sound position attribute.*//*(int value)*/
    type["SetPositionAttr"] = static_cast<void (Urho3D::SoundSource::*)(int)>(&Urho3D::SoundSource::SetPositionAttr) ;
    /*Return sound attribute.*//*() const*/
    type["GetSoundAttr"] = static_cast<ResourceRef (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetSoundAttr) ;
    /*Set sound playing attribute.*//*(bool value)*/
    type["SetPlayingAttr"] = static_cast<void (Urho3D::SoundSource::*)(bool)>(&Urho3D::SoundSource::SetPlayingAttr) ;
    /*Return sound position attribute.*//*() const*/
    type["GetPositionAttr"] = static_cast<int (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetPositionAttr) ;
    type["Play"] = sol::overload(
        static_cast<void (Urho3D::SoundSource::*)(Sound *)>(&Urho3D::SoundSource::Play) ,
        static_cast<void (Urho3D::SoundSource::*)(Sound *, float)>(&Urho3D::SoundSource::Play) ,
        static_cast<void (Urho3D::SoundSource::*)(Sound *, float, float)>(&Urho3D::SoundSource::Play) ,
        static_cast<void (Urho3D::SoundSource::*)(Sound *, float, float, float)>(&Urho3D::SoundSource::Play) ,
        static_cast<void (Urho3D::SoundSource::*)(SoundStream *)>(&Urho3D::SoundSource::Play)  );
    type["attenuation"] = sol::property(static_cast<float (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetAttenuation) );
    type["autoRemoveMode"] = sol::property(static_cast<AutoRemoveMode (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetAutoRemoveMode) 
        , static_cast<void (Urho3D::SoundSource::*)(AutoRemoveMode)>(&Urho3D::SoundSource::SetAutoRemoveMode) );
    type["frequency"] = sol::property(static_cast<float (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetFrequency) 
        , static_cast<void (Urho3D::SoundSource::*)(float)>(&Urho3D::SoundSource::SetFrequency) );
    type["gain"] = sol::property(static_cast<float (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetGain) 
        , static_cast<void (Urho3D::SoundSource::*)(float)>(&Urho3D::SoundSource::SetGain) );
    type["panning"] = sol::property(static_cast<float (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetPanning) 
        , static_cast<void (Urho3D::SoundSource::*)(float)>(&Urho3D::SoundSource::SetPanning) );
    type["playing"] = sol::property(static_cast<bool (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::IsPlaying) );
    type["sound"] = sol::property([](Urho3D::SoundSource& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSound());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["soundType"] = sol::property(static_cast<String (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetSoundType) 
        , static_cast<void (Urho3D::SoundSource::*)(const  String &)>(&Urho3D::SoundSource::SetSoundType) );
    type["timePosition"] = sol::property(static_cast<float (Urho3D::SoundSource::*)() const>(&Urho3D::SoundSource::GetTimePosition) );

}

