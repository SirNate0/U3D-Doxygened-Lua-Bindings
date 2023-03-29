
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/ParticleEmitter2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/ParticleEmitter2D.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Urho2D/ParticleEffect2D.h>
#include <Urho3D/Urho2D/Sprite2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ParticleEmitter2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ParticleEmitter2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ParticleEmitter2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ParticleEmitter2D>((Urho3D::ParticleEmitter2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ParticleEmitter2D>( "ParticleEmitter2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Drawable2D,Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ParticleEmitter2D>(context);
        });

// Members

    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::ParticleEmitter2D::*)()>(&Urho3D::ParticleEmitter2D::OnSetEnabled) ;
    /*Set particle effect. BIND_AS_PROPERTY*//*(ParticleEffect2D *effect)*/
    type["SetEffect"] = static_cast<void (Urho3D::ParticleEmitter2D::*)(ParticleEffect2D *)>(&Urho3D::ParticleEmitter2D::SetEffect) ;
    /*Set sprite. BIND_AS_PROPERTY*//*(Sprite2D *sprite)*/
    type["SetSprite"] = static_cast<void (Urho3D::ParticleEmitter2D::*)(Sprite2D *)>(&Urho3D::ParticleEmitter2D::SetSprite) ;
    /*Set blend mode. BIND_AS_PROPERTY*//*(BlendMode blendMode)*/
    type["SetBlendMode"] = static_cast<void (Urho3D::ParticleEmitter2D::*)(BlendMode)>(&Urho3D::ParticleEmitter2D::SetBlendMode) ;
    /*Set max particles.*//*(unsigned maxParticles)*/
    type["SetMaxParticles"] = static_cast<void (Urho3D::ParticleEmitter2D::*)(unsigned)>(&Urho3D::ParticleEmitter2D::SetMaxParticles) ;
    /*Set whether should be emitting. If the state was changed, also resets the emission period timer. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetEmitting"] = static_cast<void (Urho3D::ParticleEmitter2D::*)(bool)>(&Urho3D::ParticleEmitter2D::SetEmitting) ;
    /*Return particle effect. BIND_AS_PROPERTY*//*() const*/
    type["GetEffect"] = [](Urho3D::ParticleEmitter2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetEffect());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return sprite. BIND_AS_PROPERTY*//*() const*/
    type["GetSprite"] = [](Urho3D::ParticleEmitter2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSprite());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return blend mode. BIND_AS_PROPERTY*//*() const*/
    type["GetBlendMode"] = static_cast<BlendMode (Urho3D::ParticleEmitter2D::*)() const>(&Urho3D::ParticleEmitter2D::GetBlendMode) ;
    /*Return max particles.*//*() const*/
    type["GetMaxParticles"] = static_cast<unsigned (Urho3D::ParticleEmitter2D::*)() const>(&Urho3D::ParticleEmitter2D::GetMaxParticles) ;
    /*Set particle model attr.*//*(const ResourceRef &value)*/
    type["SetParticleEffectAttr"] = static_cast<void (Urho3D::ParticleEmitter2D::*)(const  ResourceRef &)>(&Urho3D::ParticleEmitter2D::SetParticleEffectAttr) ;
    /*Return particle model attr.*//*() const*/
    type["GetParticleEffectAttr"] = static_cast<ResourceRef (Urho3D::ParticleEmitter2D::*)() const>(&Urho3D::ParticleEmitter2D::GetParticleEffectAttr) ;
    /*Set sprite attribute.*//*(const ResourceRef &value)*/
    type["SetSpriteAttr"] = static_cast<void (Urho3D::ParticleEmitter2D::*)(const  ResourceRef &)>(&Urho3D::ParticleEmitter2D::SetSpriteAttr) ;
    /*Return sprite attribute.*//*() const*/
    type["GetSpriteAttr"] = static_cast<ResourceRef (Urho3D::ParticleEmitter2D::*)() const>(&Urho3D::ParticleEmitter2D::GetSpriteAttr) ;
    /*Return whether is currently emitting. BIND_AS_PROPERTY*//*() const*/
    type["IsEmitting"] = static_cast<bool (Urho3D::ParticleEmitter2D::*)() const>(&Urho3D::ParticleEmitter2D::IsEmitting) ;
    type["blendMode"] = sol::property(static_cast<BlendMode (Urho3D::ParticleEmitter2D::*)() const>(&Urho3D::ParticleEmitter2D::GetBlendMode) 
        , static_cast<void (Urho3D::ParticleEmitter2D::*)(BlendMode)>(&Urho3D::ParticleEmitter2D::SetBlendMode) );
    type["effect"] = sol::property([](Urho3D::ParticleEmitter2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetEffect());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::ParticleEmitter2D::*)(ParticleEffect2D *)>(&Urho3D::ParticleEmitter2D::SetEffect) );
    type["emitting"] = sol::property(static_cast<bool (Urho3D::ParticleEmitter2D::*)() const>(&Urho3D::ParticleEmitter2D::IsEmitting) 
        , static_cast<void (Urho3D::ParticleEmitter2D::*)(bool)>(&Urho3D::ParticleEmitter2D::SetEmitting) );
    type["sprite"] = sol::property([](Urho3D::ParticleEmitter2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSprite());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::ParticleEmitter2D::*)(Sprite2D *)>(&Urho3D::ParticleEmitter2D::SetSprite) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/ParticleEmitter2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/ParticleEmitter2D.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Particle2D(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Particle2D>( "Particle2D"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["timeToLive_"] = &Urho3D::Particle2D::timeToLive_;
    type["position_"] = &Urho3D::Particle2D::position_;
    type["size_"] = &Urho3D::Particle2D::size_;
    type["sizeDelta_"] = &Urho3D::Particle2D::sizeDelta_;
    type["rotation_"] = &Urho3D::Particle2D::rotation_;
    type["rotationDelta_"] = &Urho3D::Particle2D::rotationDelta_;
    type["color_"] = &Urho3D::Particle2D::color_;
    type["colorDelta_"] = &Urho3D::Particle2D::colorDelta_;
    type["startPos_"] = &Urho3D::Particle2D::startPos_;
    type["velocity_"] = &Urho3D::Particle2D::velocity_;
    type["radialAcceleration_"] = &Urho3D::Particle2D::radialAcceleration_;
    type["tangentialAcceleration_"] = &Urho3D::Particle2D::tangentialAcceleration_;
    type["emitRadius_"] = &Urho3D::Particle2D::emitRadius_;
    type["emitRadiusDelta_"] = &Urho3D::Particle2D::emitRadiusDelta_;
    type["emitRotation_"] = &Urho3D::Particle2D::emitRotation_;
    type["emitRotationDelta_"] = &Urho3D::Particle2D::emitRotationDelta_;

}

