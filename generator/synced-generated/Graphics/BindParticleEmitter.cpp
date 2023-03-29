
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/ParticleEmitter.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/ParticleEmitter.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/ParticleEffect.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Scene/Animatable.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ParticleEmitter(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ParticleEmitter::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ParticleEmitter::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ParticleEmitter>((Urho3D::ParticleEmitter*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ParticleEmitter>( "ParticleEmitter"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::BillboardSet,Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ParticleEmitter>(context);
        });

// Members

    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::ParticleEmitter::*)()>(&Urho3D::ParticleEmitter::OnSetEnabled) ;
    /*Update before octree reinsertion. Is called from a worker thread.*//*(const FrameInfo &frame) override*/
    type["Update"] = static_cast<void (Urho3D::ParticleEmitter::*)(const  FrameInfo &)>(&Urho3D::ParticleEmitter::Update) ;
    /*Set particle effect. BIND_AS_PROPERTY*//*(ParticleEffect *effect)*/
    type["SetEffect"] = static_cast<void (Urho3D::ParticleEmitter::*)(ParticleEffect *)>(&Urho3D::ParticleEmitter::SetEffect) ;
    /*Set maximum number of particles. BIND_AS_PROPERTY*//*(unsigned num)*/
    type["SetNumParticles"] = static_cast<void (Urho3D::ParticleEmitter::*)(unsigned)>(&Urho3D::ParticleEmitter::SetNumParticles) ;
    /*Set whether should be emitting. If the state was changed, also resets the emission period timer. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetEmitting"] = static_cast<void (Urho3D::ParticleEmitter::*)(bool)>(&Urho3D::ParticleEmitter::SetEmitting) ;
    /*Set whether particles should be serialized. Default true, set false to reduce scene file size. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetSerializeParticles"] = static_cast<void (Urho3D::ParticleEmitter::*)(bool)>(&Urho3D::ParticleEmitter::SetSerializeParticles) ;
    /*Set to remove either the emitter component or its owner node from the scene automatically on particle effect completion. Disabled by default. BIND_AS_PROPERTY*//*(AutoRemoveMode mode)*/
    type["SetAutoRemoveMode"] = static_cast<void (Urho3D::ParticleEmitter::*)(AutoRemoveMode)>(&Urho3D::ParticleEmitter::SetAutoRemoveMode) ;
    /*Reset the emission period timer.*//*()*/
    type["ResetEmissionTimer"] = static_cast<void (Urho3D::ParticleEmitter::*)()>(&Urho3D::ParticleEmitter::ResetEmissionTimer) ;
    /*Remove all current particles.*//*()*/
    type["RemoveAllParticles"] = static_cast<void (Urho3D::ParticleEmitter::*)()>(&Urho3D::ParticleEmitter::RemoveAllParticles) ;
    /*Reset the particle emitter completely. Removes current particles, sets emitting state on, and resets the emission timer.*//*()*/
    type["Reset"] = static_cast<void (Urho3D::ParticleEmitter::*)()>(&Urho3D::ParticleEmitter::Reset) ;
    /*Apply not continuously updated values such as the material, the number of particles and sorting mode from the particle effect. Call this if you change the effect programmatically.*//*()*/
    type["ApplyEffect"] = static_cast<void (Urho3D::ParticleEmitter::*)()>(&Urho3D::ParticleEmitter::ApplyEffect) ;
    /*Return particle effect. BIND_AS_PROPERTY*//*() const*/
    type["GetEffect"] = [](Urho3D::ParticleEmitter& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetEffect());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return maximum number of particles. BIND_AS_PROPERTY*//*() const*/
    type["GetNumParticles"] = static_cast<unsigned (Urho3D::ParticleEmitter::*)() const>(&Urho3D::ParticleEmitter::GetNumParticles) ;
    /*Return whether is currently emitting. BIND_AS_PROPERTY*//*() const*/
    type["IsEmitting"] = static_cast<bool (Urho3D::ParticleEmitter::*)() const>(&Urho3D::ParticleEmitter::IsEmitting) ;
    /*Return whether particles are to be serialized. BIND_AS_PROPERTY*//*() const*/
    type["GetSerializeParticles"] = static_cast<bool (Urho3D::ParticleEmitter::*)() const>(&Urho3D::ParticleEmitter::GetSerializeParticles) ;
    /*Return automatic removal mode on particle effect completion. BIND_AS_PROPERTY*//*() const*/
    type["GetAutoRemoveMode"] = static_cast<AutoRemoveMode (Urho3D::ParticleEmitter::*)() const>(&Urho3D::ParticleEmitter::GetAutoRemoveMode) ;
    /*Set particles effect attribute.*//*(const ResourceRef &value)*/
    type["SetEffectAttr"] = static_cast<void (Urho3D::ParticleEmitter::*)(const  ResourceRef &)>(&Urho3D::ParticleEmitter::SetEffectAttr) ;
    /*Set particles effect attribute.*//*() const*/
    type["GetEffectAttr"] = static_cast<ResourceRef (Urho3D::ParticleEmitter::*)() const>(&Urho3D::ParticleEmitter::GetEffectAttr) ;
    /*Set particles attribute.*//*(const VariantVector &value)*/
    type["SetParticlesAttr"] = static_cast<void (Urho3D::ParticleEmitter::*)(const  VariantVector &)>(&Urho3D::ParticleEmitter::SetParticlesAttr) ;
    /*Return particles attribute. Returns particle amount only if particles are not to be serialized.*//*() const*/
    type["GetParticlesAttr"] = static_cast<VariantVector (Urho3D::ParticleEmitter::*)() const>(&Urho3D::ParticleEmitter::GetParticlesAttr) ;
    /*Return billboards attribute. Returns billboard amount only if particles are not to be serialized.*//*() const*/
    type["GetParticleBillboardsAttr"] = static_cast<VariantVector (Urho3D::ParticleEmitter::*)() const>(&Urho3D::ParticleEmitter::GetParticleBillboardsAttr) ;
    type["autoRemoveMode"] = sol::property(static_cast<AutoRemoveMode (Urho3D::ParticleEmitter::*)() const>(&Urho3D::ParticleEmitter::GetAutoRemoveMode) 
        , static_cast<void (Urho3D::ParticleEmitter::*)(AutoRemoveMode)>(&Urho3D::ParticleEmitter::SetAutoRemoveMode) );
    type["effect"] = sol::property([](Urho3D::ParticleEmitter& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetEffect());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::ParticleEmitter::*)(ParticleEffect *)>(&Urho3D::ParticleEmitter::SetEffect) );
    type["emitting"] = sol::property(static_cast<bool (Urho3D::ParticleEmitter::*)() const>(&Urho3D::ParticleEmitter::IsEmitting) 
        , static_cast<void (Urho3D::ParticleEmitter::*)(bool)>(&Urho3D::ParticleEmitter::SetEmitting) );
    type["numParticles"] = sol::property(static_cast<unsigned (Urho3D::ParticleEmitter::*)() const>(&Urho3D::ParticleEmitter::GetNumParticles) 
        , static_cast<void (Urho3D::ParticleEmitter::*)(unsigned)>(&Urho3D::ParticleEmitter::SetNumParticles) );
    type["serializeParticles"] = sol::property(static_cast<bool (Urho3D::ParticleEmitter::*)() const>(&Urho3D::ParticleEmitter::GetSerializeParticles) 
        , static_cast<void (Urho3D::ParticleEmitter::*)(bool)>(&Urho3D::ParticleEmitter::SetSerializeParticles) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/ParticleEmitter.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/ParticleEmitter.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Particle(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Particle>( "Particle"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["velocity_"] = &Urho3D::Particle::velocity_;
    type["size_"] = &Urho3D::Particle::size_;
    type["timer_"] = &Urho3D::Particle::timer_;
    type["timeToLive_"] = &Urho3D::Particle::timeToLive_;
    type["scale_"] = &Urho3D::Particle::scale_;
    type["rotationSpeed_"] = &Urho3D::Particle::rotationSpeed_;
    type["colorIndex_"] = &Urho3D::Particle::colorIndex_;
    type["texIndex_"] = &Urho3D::Particle::texIndex_;

}

