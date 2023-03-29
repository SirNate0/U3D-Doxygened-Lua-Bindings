
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/ValueAnimationInfo.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/ValueAnimationInfo.h>
#include <Urho3D/Core/Object.h>
#include <Urho3D/Scene/ValueAnimation.h>
#include <Urho3D/Scene/ValueAnimationInfo.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ValueAnimationInfo(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ValueAnimationInfo>( "ValueAnimationInfo"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](ValueAnimation *animation, WrapMode wrapMode, float speed) { 
            return Urho3D::MakeShared<Urho3D::ValueAnimationInfo>(animation, wrapMode, speed);
        },[](Object *target, ValueAnimation *animation, WrapMode wrapMode, float speed) { 
            return Urho3D::MakeShared<Urho3D::ValueAnimationInfo>(target, animation, wrapMode, speed);
        },[](const ValueAnimationInfo &other) { 
            return Urho3D::MakeShared<Urho3D::ValueAnimationInfo>(other);
        });

// Members

    /*Advance time position and apply. Return true when the animation is finished. No-op when the target object is not defined.*//*(float timeStep)*/
    type["Update"] = static_cast<bool (Urho3D::ValueAnimationInfo::*)(float)>(&Urho3D::ValueAnimationInfo::Update) ;
    /*Set time position and apply. Return true when the animation is finished. No-op when the target object is not defined.*//*(float time)*/
    type["SetTime"] = static_cast<bool (Urho3D::ValueAnimationInfo::*)(float)>(&Urho3D::ValueAnimationInfo::SetTime) ;
    /*Set wrap mode.*//*(WrapMode wrapMode)*/
    type["SetWrapMode"] = static_cast<void (Urho3D::ValueAnimationInfo::*)(WrapMode)>(&Urho3D::ValueAnimationInfo::SetWrapMode) ;
    /*Set speed.*//*(float speed)*/
    type["SetSpeed"] = static_cast<void (Urho3D::ValueAnimationInfo::*)(float)>(&Urho3D::ValueAnimationInfo::SetSpeed) ;
    /*Return target object.*//*() const*/
    type["GetTarget"] = [](Urho3D::ValueAnimationInfo& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTarget());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return animation.*//*() const*/
    type["GetAnimation"] = [](Urho3D::ValueAnimationInfo& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetAnimation());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return wrap mode.*//*() const*/
    type["GetWrapMode"] = static_cast<WrapMode (Urho3D::ValueAnimationInfo::*)() const>(&Urho3D::ValueAnimationInfo::GetWrapMode) ;
    /*Return time position.*//*() const*/
    type["GetTime"] = static_cast<float (Urho3D::ValueAnimationInfo::*)() const>(&Urho3D::ValueAnimationInfo::GetTime) ;
    /*Return speed.*//*() const*/
    type["GetSpeed"] = static_cast<float (Urho3D::ValueAnimationInfo::*)() const>(&Urho3D::ValueAnimationInfo::GetSpeed) ;

}

