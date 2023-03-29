
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/AnimatedSprite2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/AnimatedSprite2D.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Urho2D/AnimationSet2D.h>
#include <Urho3D/Urho2D/StaticSprite2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_AnimatedSprite2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::AnimatedSprite2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::AnimatedSprite2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::AnimatedSprite2D>((Urho3D::AnimatedSprite2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::AnimatedSprite2D>( "AnimatedSprite2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::StaticSprite2D,Urho3D::Drawable2D,Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::AnimatedSprite2D>(context);
        });

// Members

    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::AnimatedSprite2D::*)()>(&Urho3D::AnimatedSprite2D::OnSetEnabled) ;
    /*Set animation set. BIND_AS_PROPERTY*//*(AnimationSet2D *animationSet)*/
    type["SetAnimationSet"] = static_cast<void (Urho3D::AnimatedSprite2D::*)(AnimationSet2D *)>(&Urho3D::AnimatedSprite2D::SetAnimationSet) ;
    /*Set entity name (skin name for spine, entity name for spriter). BIND_AS_PROPERTY*//*(const String &entity)*/
    type["SetEntity"] = static_cast<void (Urho3D::AnimatedSprite2D::*)(const  String &)>(&Urho3D::AnimatedSprite2D::SetEntity) ;
    /*Set loop mode. BIND_AS_PROPERTY*//*(LoopMode2D loopMode)*/
    type["SetLoopMode"] = static_cast<void (Urho3D::AnimatedSprite2D::*)(LoopMode2D)>(&Urho3D::AnimatedSprite2D::SetLoopMode) ;
    /*Set speed. BIND_AS_PROPERTY*//*(float speed)*/
    type["SetSpeed"] = static_cast<void (Urho3D::AnimatedSprite2D::*)(float)>(&Urho3D::AnimatedSprite2D::SetSpeed) ;
    /*Return animation. BIND_AS_PROPERTY*//*() const*/
    type["GetAnimationSet"] = [](Urho3D::AnimatedSprite2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetAnimationSet());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return entity name. BIND_AS_PROPERTY*//*() const*/
    type["GetEntity"] = static_cast<const String& (Urho3D::AnimatedSprite2D::*)() const>(&Urho3D::AnimatedSprite2D::GetEntity) ;
    /*Return animation name. BIND_AS_PROPERTY*//*() const*/
    type["GetAnimation"] = static_cast<const String& (Urho3D::AnimatedSprite2D::*)() const>(&Urho3D::AnimatedSprite2D::GetAnimation) ;
    /*Return loop mode. BIND_AS_PROPERTY*//*() const*/
    type["GetLoopMode"] = static_cast<LoopMode2D (Urho3D::AnimatedSprite2D::*)() const>(&Urho3D::AnimatedSprite2D::GetLoopMode) ;
    /*Return speed. BIND_AS_PROPERTY*//*() const*/
    type["GetSpeed"] = static_cast<float (Urho3D::AnimatedSprite2D::*)() const>(&Urho3D::AnimatedSprite2D::GetSpeed) ;
    /*Set animation set attribute.*//*(const ResourceRef &value)*/
    type["SetAnimationSetAttr"] = static_cast<void (Urho3D::AnimatedSprite2D::*)(const  ResourceRef &)>(&Urho3D::AnimatedSprite2D::SetAnimationSetAttr) ;
    /*Return animation set attribute.*//*() const*/
    type["GetAnimationSetAttr"] = static_cast<ResourceRef (Urho3D::AnimatedSprite2D::*)() const>(&Urho3D::AnimatedSprite2D::GetAnimationSetAttr) ;
    /*Set animation by name. BIND_AS_ALIAS_set_animation*//*(const String &name)*/
    type["SetAnimationAttr"] = static_cast<void (Urho3D::AnimatedSprite2D::*)(const  String &)>(&Urho3D::AnimatedSprite2D::SetAnimationAttr) ;
    type["SetAnimation"] = sol::overload(
        static_cast<void (Urho3D::AnimatedSprite2D::*)(const  String &, LoopMode2D)>(&Urho3D::AnimatedSprite2D::SetAnimation) ,
        [](Urho3D::AnimatedSprite2D& self, const  String & name){ self.SetAnimation(name); } );
    type["animation"] = sol::property(static_cast<const String& (Urho3D::AnimatedSprite2D::*)() const>(&Urho3D::AnimatedSprite2D::GetAnimation) );
    type["animationAttr"] = sol::property(static_cast<void (Urho3D::AnimatedSprite2D::*)(const  String &)>(&Urho3D::AnimatedSprite2D::SetAnimationAttr) );
    type["animationSet"] = sol::property([](Urho3D::AnimatedSprite2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetAnimationSet());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::AnimatedSprite2D::*)(AnimationSet2D *)>(&Urho3D::AnimatedSprite2D::SetAnimationSet) );
    type["entity"] = sol::property(static_cast<const String& (Urho3D::AnimatedSprite2D::*)() const>(&Urho3D::AnimatedSprite2D::GetEntity) 
        , static_cast<void (Urho3D::AnimatedSprite2D::*)(const  String &)>(&Urho3D::AnimatedSprite2D::SetEntity) );
    type["loopMode"] = sol::property(static_cast<LoopMode2D (Urho3D::AnimatedSprite2D::*)() const>(&Urho3D::AnimatedSprite2D::GetLoopMode) 
        , static_cast<void (Urho3D::AnimatedSprite2D::*)(LoopMode2D)>(&Urho3D::AnimatedSprite2D::SetLoopMode) );
    type["speed"] = sol::property(static_cast<float (Urho3D::AnimatedSprite2D::*)() const>(&Urho3D::AnimatedSprite2D::GetSpeed) 
        , static_cast<void (Urho3D::AnimatedSprite2D::*)(float)>(&Urho3D::AnimatedSprite2D::SetSpeed) );

}

