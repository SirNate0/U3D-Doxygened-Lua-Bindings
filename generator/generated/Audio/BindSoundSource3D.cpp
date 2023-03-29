
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Audio/SoundSource3D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Audio/SoundSource3D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_SoundSource3D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::SoundSource3D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::SoundSource3D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::SoundSource3D>((Urho3D::SoundSource3D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::SoundSource3D>( "SoundSource3D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::SoundSource,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::SoundSource3D>(context);
        });

// Members

    /*Visualize the component as debug geometry.*//*(DebugRenderer *debug, bool depthTest) override*/
    type["DrawDebugGeometry"] = static_cast<void (Urho3D::SoundSource3D::*)(DebugRenderer *, bool)>(&Urho3D::SoundSource3D::DrawDebugGeometry) ;
    /*Update sound source.*//*(float timeStep) override*/
    type["Update"] = static_cast<void (Urho3D::SoundSource3D::*)(float)>(&Urho3D::SoundSource3D::Update) ;
    /*Set attenuation parameters.*//*(float nearDistance, float farDistance, float rolloffFactor)*/
    type["SetDistanceAttenuation"] = static_cast<void (Urho3D::SoundSource3D::*)(float, float, float)>(&Urho3D::SoundSource3D::SetDistanceAttenuation) ;
    /*Set angle attenuation parameters.*//*(float innerAngle, float outerAngle)*/
    type["SetAngleAttenuation"] = static_cast<void (Urho3D::SoundSource3D::*)(float, float)>(&Urho3D::SoundSource3D::SetAngleAttenuation) ;
    /*Set near distance. Inside this range sound will not be attenuated. BIND_AS_PROPERTY*//*(float distance)*/
    type["SetNearDistance"] = static_cast<void (Urho3D::SoundSource3D::*)(float)>(&Urho3D::SoundSource3D::SetNearDistance) ;
    /*Set far distance. Outside this range sound will be completely attenuated. BIND_AS_PROPERTY*//*(float distance)*/
    type["SetFarDistance"] = static_cast<void (Urho3D::SoundSource3D::*)(float)>(&Urho3D::SoundSource3D::SetFarDistance) ;
    /*Set inner angle in degrees. Inside this angle sound will not be attenuated.By default 360, meaning direction never has an effect. BIND_AS_PROPERTY*//*(float angle)*/
    type["SetInnerAngle"] = static_cast<void (Urho3D::SoundSource3D::*)(float)>(&Urho3D::SoundSource3D::SetInnerAngle) ;
    /*Set outer angle in degrees. Outside this angle sound will be completely attenuated. By default 360, meaning direction never has an effect. BIND_AS_PROPERTY*//*(float angle)*/
    type["SetOuterAngle"] = static_cast<void (Urho3D::SoundSource3D::*)(float)>(&Urho3D::SoundSource3D::SetOuterAngle) ;
    /*Set rolloff power factor, defines attenuation function shape. BIND_AS_PROPERTY*//*(float factor)*/
    type["SetRolloffFactor"] = static_cast<void (Urho3D::SoundSource3D::*)(float)>(&Urho3D::SoundSource3D::SetRolloffFactor) ;
    /*Calculate attenuation and panning based on current position and listener position.*//*()*/
    type["CalculateAttenuation"] = static_cast<void (Urho3D::SoundSource3D::*)()>(&Urho3D::SoundSource3D::CalculateAttenuation) ;
    /*Return near distance. BIND_AS_PROPERTY*//*() const*/
    type["GetNearDistance"] = static_cast<float (Urho3D::SoundSource3D::*)() const>(&Urho3D::SoundSource3D::GetNearDistance) ;
    /*Return far distance. BIND_AS_PROPERTY*//*() const*/
    type["GetFarDistance"] = static_cast<float (Urho3D::SoundSource3D::*)() const>(&Urho3D::SoundSource3D::GetFarDistance) ;
    /*Return inner angle in degrees. BIND_AS_PROPERTY*//*() const*/
    type["GetInnerAngle"] = static_cast<float (Urho3D::SoundSource3D::*)() const>(&Urho3D::SoundSource3D::GetInnerAngle) ;
    /*Return outer angle in degrees. BIND_AS_PROPERTY*//*() const*/
    type["GetOuterAngle"] = static_cast<float (Urho3D::SoundSource3D::*)() const>(&Urho3D::SoundSource3D::GetOuterAngle) ;
    /*Return rolloff power factor. BIND_AS_ALIAS_get_rolloffFactor*//*() const*/
    type["RollAngleoffFactor"] = static_cast<float (Urho3D::SoundSource3D::*)() const>(&Urho3D::SoundSource3D::RollAngleoffFactor) ;
    type["farDistance"] = sol::property(static_cast<float (Urho3D::SoundSource3D::*)() const>(&Urho3D::SoundSource3D::GetFarDistance) 
        , static_cast<void (Urho3D::SoundSource3D::*)(float)>(&Urho3D::SoundSource3D::SetFarDistance) );
    type["innerAngle"] = sol::property(static_cast<float (Urho3D::SoundSource3D::*)() const>(&Urho3D::SoundSource3D::GetInnerAngle) 
        , static_cast<void (Urho3D::SoundSource3D::*)(float)>(&Urho3D::SoundSource3D::SetInnerAngle) );
    type["nearDistance"] = sol::property(static_cast<float (Urho3D::SoundSource3D::*)() const>(&Urho3D::SoundSource3D::GetNearDistance) 
        , static_cast<void (Urho3D::SoundSource3D::*)(float)>(&Urho3D::SoundSource3D::SetNearDistance) );
    type["outerAngle"] = sol::property(static_cast<float (Urho3D::SoundSource3D::*)() const>(&Urho3D::SoundSource3D::GetOuterAngle) 
        , static_cast<void (Urho3D::SoundSource3D::*)(float)>(&Urho3D::SoundSource3D::SetOuterAngle) );
    type["rollAngleoffFactor"] = sol::property(static_cast<float (Urho3D::SoundSource3D::*)() const>(&Urho3D::SoundSource3D::RollAngleoffFactor) );
    type["rolloffFactor"] = sol::property(static_cast<void (Urho3D::SoundSource3D::*)(float)>(&Urho3D::SoundSource3D::SetRolloffFactor) );

}

