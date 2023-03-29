
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/AnimationController.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/AnimationController.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/AnimationController.h>
#include <Urho3D/Graphics/AnimationState.h>
#include <Urho3D/Graphics/Skeleton.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_AnimationController(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::AnimationController::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::AnimationController::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::AnimationController>((Urho3D::AnimationController*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::AnimationController>( "AnimationController"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::AnimationController>(context);
        });

// Members

    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::AnimationController::*)()>(&Urho3D::AnimationController::OnSetEnabled) ;
    /*Update the animations. Is called from HandleScenePostUpdate().*//*(float timeStep)*/
    type["Update"] = static_cast<void (Urho3D::AnimationController::*)(float)>(&Urho3D::AnimationController::Update) ;
    /*Fade animation to target weight. Return true on success.*//*(const String &name, float targetWeight, float fadeTime)*/
    type["Fade"] = static_cast<bool (Urho3D::AnimationController::*)(const  String &, float, float)>(&Urho3D::AnimationController::Fade) ;
    /*Fade other animations on the same layer to target weight. Return true on success.*//*(const String &name, float targetWeight, float fadeTime)*/
    type["FadeOthers"] = static_cast<bool (Urho3D::AnimationController::*)(const  String &, float, float)>(&Urho3D::AnimationController::FadeOthers) ;
    /*Set animation blending layer priority. Return true on success.*//*(const String &name, unsigned char layer)*/
    type["SetLayer"] = static_cast<bool (Urho3D::AnimationController::*)(const  String &, unsigned char)>(&Urho3D::AnimationController::SetLayer) ;
    /*Set animation start bone. Return true on success.*//*(const String &name, const String &startBoneName)*/
    type["SetStartBone"] = static_cast<bool (Urho3D::AnimationController::*)(const  String &, const  String &)>(&Urho3D::AnimationController::SetStartBone) ;
    /*Set animation time position. Return true on success.*//*(const String &name, float time)*/
    type["SetTime"] = static_cast<bool (Urho3D::AnimationController::*)(const  String &, float)>(&Urho3D::AnimationController::SetTime) ;
    /*Set animation weight. Return true on success.*//*(const String &name, float weight)*/
    type["SetWeight"] = static_cast<bool (Urho3D::AnimationController::*)(const  String &, float)>(&Urho3D::AnimationController::SetWeight) ;
    /*Set animation looping. Return true on success.*//*(const String &name, bool enable)*/
    type["SetLooped"] = static_cast<bool (Urho3D::AnimationController::*)(const  String &, bool)>(&Urho3D::AnimationController::SetLooped) ;
    /*Set animation speed. Return true on success.*//*(const String &name, float speed)*/
    type["SetSpeed"] = static_cast<bool (Urho3D::AnimationController::*)(const  String &, float)>(&Urho3D::AnimationController::SetSpeed) ;
    /*Set animation autofade at end (non-looped animations only). Zero time disables. Return true on success.*//*(const String &name, float fadeOutTime)*/
    type["SetAutoFade"] = static_cast<bool (Urho3D::AnimationController::*)(const  String &, float)>(&Urho3D::AnimationController::SetAutoFade) ;
    /*Set whether an animation auto-removes on completion.*//*(const String &name, bool removeOnCompletion)*/
    type["SetRemoveOnCompletion"] = static_cast<bool (Urho3D::AnimationController::*)(const  String &, bool)>(&Urho3D::AnimationController::SetRemoveOnCompletion) ;
    /*Set animation blending mode. Return true on success.*//*(const String &name, AnimationBlendMode mode)*/
    type["SetBlendMode"] = static_cast<bool (Urho3D::AnimationController::*)(const  String &, AnimationBlendMode)>(&Urho3D::AnimationController::SetBlendMode) ;
    /*Return whether an animation is fading in.*//*(const String &name) const*/
    type["IsFadingIn"] = static_cast<bool (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::IsFadingIn) ;
    /*Return whether an animation is fading out.*//*(const String &name) const*/
    type["IsFadingOut"] = static_cast<bool (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::IsFadingOut) ;
    /*Return whether an animation is at its end. Will return false if the animation is not active at all.*//*(const String &name) const*/
    type["IsAtEnd"] = static_cast<bool (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::IsAtEnd) ;
    /*Return animation blending layer.*//*(const String &name) const*/
    type["GetLayer"] = static_cast<unsigned char (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::GetLayer) ;
    /*Return animation start bone, or null if no such animation.*//*(const String &name) const*/
    type["GetStartBone"] = static_cast<Bone* (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::GetStartBone) ;
    /*Return animation start bone name, or empty string if no such animation.*//*(const String &name) const*/
    type["GetStartBoneName"] = static_cast<const String& (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::GetStartBoneName) ;
    /*Return animation time position.*//*(const String &name) const*/
    type["GetTime"] = static_cast<float (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::GetTime) ;
    /*Return animation weight.*//*(const String &name) const*/
    type["GetWeight"] = static_cast<float (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::GetWeight) ;
    /*Return animation looping.*//*(const String &name) const*/
    type["IsLooped"] = static_cast<bool (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::IsLooped) ;
    /*Return animation blending mode.*//*(const String &name) const*/
    type["GetBlendMode"] = static_cast<AnimationBlendMode (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::GetBlendMode) ;
    /*Return animation length.*//*(const String &name) const*/
    type["GetLength"] = static_cast<float (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::GetLength) ;
    /*Return animation speed.*//*(const String &name) const*/
    type["GetSpeed"] = static_cast<float (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::GetSpeed) ;
    /*Return animation fade target weight.*//*(const String &name) const*/
    type["GetFadeTarget"] = static_cast<float (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::GetFadeTarget) ;
    /*Return animation fade time.*//*(const String &name) const*/
    type["GetFadeTime"] = static_cast<float (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::GetFadeTime) ;
    /*Return animation autofade time.*//*(const String &name) const*/
    type["GetAutoFade"] = static_cast<float (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::GetAutoFade) ;
    /*Return whether animation auto-removes on completion, or false if no such animation.*//*(const String &name) const*/
    type["GetRemoveOnCompletion"] = static_cast<bool (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::GetRemoveOnCompletion) ;
    /*Return the animation control structures for inspection.*//*() const*/
    type["GetAnimations"] = static_cast<const Vector<AnimationControl>& (Urho3D::AnimationController::*)() const>(&Urho3D::AnimationController::GetAnimations) ;
    /*Set animation control structures attribute.*//*(const VariantVector &value)*/
    type["SetAnimationsAttr"] = static_cast<void (Urho3D::AnimationController::*)(const  VariantVector &)>(&Urho3D::AnimationController::SetAnimationsAttr) ;
    /*Set animations attribute for network replication.*//*(const PODVector< unsigned char > &value)*/
    type["SetNetAnimationsAttr"] = static_cast<void (Urho3D::AnimationController::*)(const  PODVector< unsigned char > &)>(&Urho3D::AnimationController::SetNetAnimationsAttr) ;
    /*Set node animation states attribute.*//*(const VariantVector &value)*/
    type["SetNodeAnimationStatesAttr"] = static_cast<void (Urho3D::AnimationController::*)(const  VariantVector &)>(&Urho3D::AnimationController::SetNodeAnimationStatesAttr) ;
    /*Return animation control structures attribute.*//*() const*/
    type["GetAnimationsAttr"] = static_cast<VariantVector (Urho3D::AnimationController::*)() const>(&Urho3D::AnimationController::GetAnimationsAttr) ;
    /*Return animations attribute for network replication.*//*() const*/
    type["GetNetAnimationsAttr"] = static_cast<const PODVector<unsigned char>& (Urho3D::AnimationController::*)() const>(&Urho3D::AnimationController::GetNetAnimationsAttr) ;
    /*Return node animation states attribute.*//*() const*/
    type["GetNodeAnimationStatesAttr"] = static_cast<VariantVector (Urho3D::AnimationController::*)() const>(&Urho3D::AnimationController::GetNodeAnimationStatesAttr) ;
    type["Play"] = sol::overload(
        static_cast<bool (Urho3D::AnimationController::*)(const  String &, unsigned char, bool, float)>(&Urho3D::AnimationController::Play) ,
        [](Urho3D::AnimationController& self, const  String & name, unsigned char layer, bool looped){ return self.Play(name, layer, looped); } );
    type["PlayExclusive"] = sol::overload(
        static_cast<bool (Urho3D::AnimationController::*)(const  String &, unsigned char, bool, float)>(&Urho3D::AnimationController::PlayExclusive) ,
        [](Urho3D::AnimationController& self, const  String & name, unsigned char layer, bool looped){ return self.PlayExclusive(name, layer, looped); } );
    type["Stop"] = sol::overload(
        static_cast<bool (Urho3D::AnimationController::*)(const  String &, float)>(&Urho3D::AnimationController::Stop) ,
        [](Urho3D::AnimationController& self, const  String & name){ return self.Stop(name); } );
    type["StopLayer"] = sol::overload(
        static_cast<void (Urho3D::AnimationController::*)(unsigned char, float)>(&Urho3D::AnimationController::StopLayer) ,
        [](Urho3D::AnimationController& self, unsigned char layer){ self.StopLayer(layer); } );
    type["StopAll"] = sol::overload(
        static_cast<void (Urho3D::AnimationController::*)(float)>(&Urho3D::AnimationController::StopAll) ,
        [](Urho3D::AnimationController& self){ self.StopAll(); } );
    type["IsPlaying"] = sol::overload(
        static_cast<bool (Urho3D::AnimationController::*)(const  String &) const>(&Urho3D::AnimationController::IsPlaying) ,
        static_cast<bool (Urho3D::AnimationController::*)(unsigned char) const>(&Urho3D::AnimationController::IsPlaying)  );
    type["GetAnimationState"] = sol::overload(
        [](Urho3D::AnimationController& self, const String &name){ return SharedPtr(self.GetAnimationState(name)); },
        [](Urho3D::AnimationController& self, StringHash nameHash){ return SharedPtr(self.GetAnimationState(nameHash)); } );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/AnimationController.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/AnimationController.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_AnimationControl(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::AnimationControl>( "AnimationControl"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::AnimationControl()>();

// Members

    type["name_"] = &Urho3D::AnimationControl::name_;
    type["hash_"] = &Urho3D::AnimationControl::hash_;
    type["speed_"] = &Urho3D::AnimationControl::speed_;
    type["targetWeight_"] = &Urho3D::AnimationControl::targetWeight_;
    type["fadeTime_"] = &Urho3D::AnimationControl::fadeTime_;
    type["autoFadeTime_"] = &Urho3D::AnimationControl::autoFadeTime_;
    type["setTimeTtl_"] = &Urho3D::AnimationControl::setTimeTtl_;
    type["setWeightTtl_"] = &Urho3D::AnimationControl::setWeightTtl_;
    type["setTime_"] = &Urho3D::AnimationControl::setTime_;
    type["setWeight_"] = &Urho3D::AnimationControl::setWeight_;
    type["setTimeRev_"] = &Urho3D::AnimationControl::setTimeRev_;
    type["setWeightRev_"] = &Urho3D::AnimationControl::setWeightRev_;
    type["removeOnCompletion_"] = &Urho3D::AnimationControl::removeOnCompletion_;

}

