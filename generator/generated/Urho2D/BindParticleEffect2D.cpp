
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/ParticleEffect2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/ParticleEffect2D.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Resource/Resource.h>
#include <Urho3D/Urho2D/ParticleEffect2D.h>
#include <Urho3D/Urho2D/Sprite2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ParticleEffect2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ParticleEffect2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ParticleEffect2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ParticleEffect2D>((Urho3D::ParticleEffect2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ParticleEffect2D>( "ParticleEffect2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ParticleEffect2D>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::ParticleEffect2D::*)(Deserializer &)>(&Urho3D::ParticleEffect2D::BeginLoad) ;
    /*Finish resource loading. Always called from the main thread. Return true if successful.*//*() override*/
    type["EndLoad"] = static_cast<bool (Urho3D::ParticleEffect2D::*)()>(&Urho3D::ParticleEffect2D::EndLoad) ;
    /*Save resource. Return true if successful.*//*(Serializer &dest) const override*/
    type["Save"] = static_cast<bool (Urho3D::ParticleEffect2D::*)(Serializer &) const>(&Urho3D::ParticleEffect2D::Save) ;
    /*Set sprite.*//*(Sprite2D *sprite)*/
    type["SetSprite"] = static_cast<void (Urho3D::ParticleEffect2D::*)(Sprite2D *)>(&Urho3D::ParticleEffect2D::SetSprite) ;
    /*Set source position variance.*//*(const Vector2 &sourcePositionVariance)*/
    type["SetSourcePositionVariance"] = static_cast<void (Urho3D::ParticleEffect2D::*)(const  Vector2 &)>(&Urho3D::ParticleEffect2D::SetSourcePositionVariance) ;
    /*Set speed.*//*(float speed)*/
    type["SetSpeed"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetSpeed) ;
    /*Set speed variance.*//*(float speedVariance)*/
    type["SetSpeedVariance"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetSpeedVariance) ;
    /*Set particle lifespan.*//*(float particleLifeSpan)*/
    type["SetParticleLifeSpan"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetParticleLifeSpan) ;
    /*Set particle lifespan variance.*//*(float particleLifespanVariance)*/
    type["SetParticleLifespanVariance"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetParticleLifespanVariance) ;
    /*Set angle.*//*(float angle)*/
    type["SetAngle"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetAngle) ;
    /*Set angle variance.*//*(float angleVariance)*/
    type["SetAngleVariance"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetAngleVariance) ;
    /*Set gravity.*//*(const Vector2 &gravity)*/
    type["SetGravity"] = static_cast<void (Urho3D::ParticleEffect2D::*)(const  Vector2 &)>(&Urho3D::ParticleEffect2D::SetGravity) ;
    /*Set radial acceleration.*//*(float radialAcceleration)*/
    type["SetRadialAcceleration"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetRadialAcceleration) ;
    /*Set tangential acceleration.*//*(float tangentialAcceleration)*/
    type["SetTangentialAcceleration"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetTangentialAcceleration) ;
    /*Set radial acceleration variance.*//*(float radialAccelVariance)*/
    type["SetRadialAccelVariance"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetRadialAccelVariance) ;
    /*Set tangential acceleration variance.*//*(float tangentialAccelVariance)*/
    type["SetTangentialAccelVariance"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetTangentialAccelVariance) ;
    /*Set start color.*//*(const Color &startColor)*/
    type["SetStartColor"] = static_cast<void (Urho3D::ParticleEffect2D::*)(const  Color &)>(&Urho3D::ParticleEffect2D::SetStartColor) ;
    /*Set start color variance.*//*(const Color &startColorVariance)*/
    type["SetStartColorVariance"] = static_cast<void (Urho3D::ParticleEffect2D::*)(const  Color &)>(&Urho3D::ParticleEffect2D::SetStartColorVariance) ;
    /*Set finish color.*//*(const Color &finishColor)*/
    type["SetFinishColor"] = static_cast<void (Urho3D::ParticleEffect2D::*)(const  Color &)>(&Urho3D::ParticleEffect2D::SetFinishColor) ;
    /*Set finish color variance.*//*(const Color &finishColorVariance)*/
    type["SetFinishColorVariance"] = static_cast<void (Urho3D::ParticleEffect2D::*)(const  Color &)>(&Urho3D::ParticleEffect2D::SetFinishColorVariance) ;
    /*Set max particles.*//*(int maxParticles)*/
    type["SetMaxParticles"] = static_cast<void (Urho3D::ParticleEffect2D::*)(int)>(&Urho3D::ParticleEffect2D::SetMaxParticles) ;
    /*Set start particle size.*//*(float startParticleSize)*/
    type["SetStartParticleSize"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetStartParticleSize) ;
    /*Set start particle size variance.*//*(float startParticleSizeVariance)*/
    type["SetStartParticleSizeVariance"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetStartParticleSizeVariance) ;
    /*Set finish particle size.*//*(float finishParticleSize)*/
    type["SetFinishParticleSize"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetFinishParticleSize) ;
    /*Set finish particle size variance.*//*(float finishParticleSizeVariance)*/
    type["SetFinishParticleSizeVariance"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetFinishParticleSizeVariance) ;
    /*Set duration.*//*(float duration)*/
    type["SetDuration"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetDuration) ;
    /*Set emitter type.*//*(EmitterType2D emitterType)*/
    type["SetEmitterType"] = static_cast<void (Urho3D::ParticleEffect2D::*)(EmitterType2D)>(&Urho3D::ParticleEffect2D::SetEmitterType) ;
    /*Set max radius.*//*(float maxRadius)*/
    type["SetMaxRadius"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetMaxRadius) ;
    /*Set max radius variance.*//*(float maxRadiusVariance)*/
    type["SetMaxRadiusVariance"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetMaxRadiusVariance) ;
    /*Set min radius.*//*(float minRadius)*/
    type["SetMinRadius"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetMinRadius) ;
    /*Set min radius variance.*//*(float minRadiusVariance)*/
    type["SetMinRadiusVariance"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetMinRadiusVariance) ;
    /*Set rotate per second.*//*(float rotatePerSecond)*/
    type["SetRotatePerSecond"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetRotatePerSecond) ;
    /*Set rotate per second variance.*//*(float rotatePerSecondVariance)*/
    type["SetRotatePerSecondVariance"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetRotatePerSecondVariance) ;
    /*Set blend mode.*//*(BlendMode blendMode)*/
    type["SetBlendMode"] = static_cast<void (Urho3D::ParticleEffect2D::*)(BlendMode)>(&Urho3D::ParticleEffect2D::SetBlendMode) ;
    /*Set rotation start.*//*(float rotationStart)*/
    type["SetRotationStart"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetRotationStart) ;
    /*Set rotation start variance.*//*(float rotationStartVariance)*/
    type["SetRotationStartVariance"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetRotationStartVariance) ;
    /*Set rotation end.*//*(float rotationEnd)*/
    type["SetRotationEnd"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetRotationEnd) ;
    /*Set rotation end variance.*//*(float rotationEndVariance)*/
    type["SetRotationEndVariance"] = static_cast<void (Urho3D::ParticleEffect2D::*)(float)>(&Urho3D::ParticleEffect2D::SetRotationEndVariance) ;
    /*Return sprite.*//*() const*/
    type["GetSprite"] = [](Urho3D::ParticleEffect2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSprite());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return source position variance.*//*() const*/
    type["GetSourcePositionVariance"] = static_cast<const Vector2& (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetSourcePositionVariance) ;
    /*Return speed.*//*() const*/
    type["GetSpeed"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetSpeed) ;
    /*Return speed variance.*//*() const*/
    type["GetSpeedVariance"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetSpeedVariance) ;
    /*Return particle lifespan.*//*() const*/
    type["GetParticleLifeSpan"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetParticleLifeSpan) ;
    /*Return particle lifespan variance.*//*() const*/
    type["GetParticleLifespanVariance"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetParticleLifespanVariance) ;
    /*Return angle.*//*() const*/
    type["GetAngle"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetAngle) ;
    /*Return angle variance.*//*() const*/
    type["GetAngleVariance"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetAngleVariance) ;
    /*Return gravity.*//*() const*/
    type["GetGravity"] = static_cast<const Vector2& (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetGravity) ;
    /*Return radial acceleration.*//*() const*/
    type["GetRadialAcceleration"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetRadialAcceleration) ;
    /*Return tangential acceleration.*//*() const*/
    type["GetTangentialAcceleration"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetTangentialAcceleration) ;
    /*Return radial acceleration variance.*//*() const*/
    type["GetRadialAccelVariance"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetRadialAccelVariance) ;
    /*Return tangential acceleration variance.*//*() const*/
    type["GetTangentialAccelVariance"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetTangentialAccelVariance) ;
    /*Return start color.*//*() const*/
    type["GetStartColor"] = static_cast<const Color& (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetStartColor) ;
    /*Return start color variance.*//*() const*/
    type["GetStartColorVariance"] = static_cast<const Color& (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetStartColorVariance) ;
    /*Return finish color.*//*() const*/
    type["GetFinishColor"] = static_cast<const Color& (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetFinishColor) ;
    /*Return finish color variance.*//*() const*/
    type["GetFinishColorVariance"] = static_cast<const Color& (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetFinishColorVariance) ;
    /*Return max particles.*//*() const*/
    type["GetMaxParticles"] = static_cast<int (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetMaxParticles) ;
    /*Return start particle size.*//*() const*/
    type["GetStartParticleSize"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetStartParticleSize) ;
    /*Return start particle size variance.*//*() const*/
    type["GetStartParticleSizeVariance"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetStartParticleSizeVariance) ;
    /*Return finish particle size.*//*() const*/
    type["GetFinishParticleSize"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetFinishParticleSize) ;
    /*Return finish particle size variance.*//*() const*/
    type["GetFinishParticleSizeVariance"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetFinishParticleSizeVariance) ;
    /*Return duration.*//*() const*/
    type["GetDuration"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetDuration) ;
    /*Return emitter type.*//*() const*/
    type["GetEmitterType"] = static_cast<EmitterType2D (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetEmitterType) ;
    /*Return max radius.*//*() const*/
    type["GetMaxRadius"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetMaxRadius) ;
    /*Return max radius variance.*//*() const*/
    type["GetMaxRadiusVariance"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetMaxRadiusVariance) ;
    /*Return min radius.*//*() const*/
    type["GetMinRadius"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetMinRadius) ;
    /*Return min radius variance.*//*() const*/
    type["GetMinRadiusVariance"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetMinRadiusVariance) ;
    /*Return rotate per second.*//*() const*/
    type["GetRotatePerSecond"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetRotatePerSecond) ;
    /*Return rotate per second variance.*//*() const*/
    type["GetRotatePerSecondVariance"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetRotatePerSecondVariance) ;
    /*Return blend mode.*//*() const*/
    type["GetBlendMode"] = static_cast<BlendMode (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetBlendMode) ;
    /*Return rotation start.*//*() const*/
    type["GetRotationStart"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetRotationStart) ;
    /*Return rotation start variance.*//*() const*/
    type["GetRotationStartVariance"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetRotationStartVariance) ;
    /*Return rotation end.*//*() const*/
    type["GetRotationEnd"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetRotationEnd) ;
    /*Return rotation end variance.*//*() const*/
    type["GetRotationEndVariance"] = static_cast<float (Urho3D::ParticleEffect2D::*)() const>(&Urho3D::ParticleEffect2D::GetRotationEndVariance) ;
    type["Clone"] = sol::overload(
        static_cast<SharedPtr<ParticleEffect2D> (Urho3D::ParticleEffect2D::*)(const  String &) const>(&Urho3D::ParticleEffect2D::Clone) ,
        [](Urho3D::ParticleEffect2D& self){ return self.Clone(); } );

}

