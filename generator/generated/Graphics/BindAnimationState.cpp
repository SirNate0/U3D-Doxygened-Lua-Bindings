
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/AnimationState.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/AnimationState.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Graphics/AnimatedModel.h>
#include <Urho3D/Graphics/Animation.h>
#include <Urho3D/Graphics/Skeleton.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Scene/Node.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_AnimationState(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::AnimationState>( "AnimationState"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](AnimatedModel *model, Animation *animation) { 
            return Urho3D::MakeShared<Urho3D::AnimationState>(model, animation);
        },[](Node *node, Animation *animation) { 
            return Urho3D::MakeShared<Urho3D::AnimationState>(node, animation);
        });

// Members

    /*Set start bone. Not supported in node animation mode. Resets any assigned per-bone weights. BIND_AS_PROPERTY*//*(Bone *startBone)*/
    type["SetStartBone"] = static_cast<void (Urho3D::AnimationState::*)(Bone *)>(&Urho3D::AnimationState::SetStartBone) ;
    /*Set looping enabled/disabled. BIND_AS_PROPERTY*//*(bool looped)*/
    type["SetLooped"] = static_cast<void (Urho3D::AnimationState::*)(bool)>(&Urho3D::AnimationState::SetLooped) ;
    /*Set blending weight. BIND_AS_PROPERTY*//*(float weight)*/
    type["SetWeight"] = static_cast<void (Urho3D::AnimationState::*)(float)>(&Urho3D::AnimationState::SetWeight) ;
    /*Set blending mode. BIND_AS_PROPERTY*//*(AnimationBlendMode mode)*/
    type["SetBlendMode"] = static_cast<void (Urho3D::AnimationState::*)(AnimationBlendMode)>(&Urho3D::AnimationState::SetBlendMode) ;
    /*Set time position. Does not fire animation triggers. BIND_AS_PROPERTY*//*(float time)*/
    type["SetTime"] = static_cast<void (Urho3D::AnimationState::*)(float)>(&Urho3D::AnimationState::SetTime) ;
    /*Modify blending weight.*//*(float delta)*/
    type["AddWeight"] = static_cast<void (Urho3D::AnimationState::*)(float)>(&Urho3D::AnimationState::AddWeight) ;
    /*Modify time position. Animation triggers will be fired.*//*(float delta)*/
    type["AddTime"] = static_cast<void (Urho3D::AnimationState::*)(float)>(&Urho3D::AnimationState::AddTime) ;
    /*Set blending layer. BIND_AS_PROPERTY*//*(unsigned char layer)*/
    type["SetLayer"] = static_cast<void (Urho3D::AnimationState::*)(unsigned char)>(&Urho3D::AnimationState::SetLayer) ;
    /*Return animation. BIND_AS_PROPERTY*//*() const*/
    type["GetAnimation"] = [](Urho3D::AnimationState& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetAnimation());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return animated model this state belongs to (model mode). BIND_AS_PROPERTY*//*() const*/
    type["GetModel"] = [](Urho3D::AnimationState& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetModel());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return root scene node this state controls (node hierarchy mode). BIND_AS_PROPERTY*//*() const*/
    type["GetNode"] = [](Urho3D::AnimationState& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetNode());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return start bone. BIND_AS_PROPERTY*//*() const*/
    type["GetStartBone"] = static_cast<Bone* (Urho3D::AnimationState::*)() const>(&Urho3D::AnimationState::GetStartBone) ;
    /*Return whether weight is nonzero. BIND_AS_PROPERTY*//*() const*/
    type["IsEnabled"] = static_cast<bool (Urho3D::AnimationState::*)() const>(&Urho3D::AnimationState::IsEnabled) ;
    /*Return whether looped. BIND_AS_PROPERTY*//*() const*/
    type["IsLooped"] = static_cast<bool (Urho3D::AnimationState::*)() const>(&Urho3D::AnimationState::IsLooped) ;
    /*Return blending weight. BIND_AS_PROPERTY*//*() const*/
    type["GetWeight"] = static_cast<float (Urho3D::AnimationState::*)() const>(&Urho3D::AnimationState::GetWeight) ;
    /*Return blending mode. BIND_AS_PROPERTY*//*() const*/
    type["GetBlendMode"] = static_cast<AnimationBlendMode (Urho3D::AnimationState::*)() const>(&Urho3D::AnimationState::GetBlendMode) ;
    /*Return time position. BIND_AS_PROPERTY*//*() const*/
    type["GetTime"] = static_cast<float (Urho3D::AnimationState::*)() const>(&Urho3D::AnimationState::GetTime) ;
    /*Return animation length. BIND_AS_PROPERTY*//*() const*/
    type["GetLength"] = static_cast<float (Urho3D::AnimationState::*)() const>(&Urho3D::AnimationState::GetLength) ;
    /*Return blending layer. BIND_AS_PROPERTY*//*() const*/
    type["GetLayer"] = static_cast<unsigned char (Urho3D::AnimationState::*)() const>(&Urho3D::AnimationState::GetLayer) ;
    /*Apply the animation at the current time position.*//*()*/
    type["Apply"] = static_cast<void (Urho3D::AnimationState::*)()>(&Urho3D::AnimationState::Apply) ;
    type["SetBoneWeight"] = sol::overload(
        static_cast<void (Urho3D::AnimationState::*)(unsigned, float, bool)>(&Urho3D::AnimationState::SetBoneWeight) ,
        [](Urho3D::AnimationState& self, unsigned index, float weight){ self.SetBoneWeight(index, weight); },
        static_cast<void (Urho3D::AnimationState::*)(const  String &, float, bool)>(&Urho3D::AnimationState::SetBoneWeight) ,
        [](Urho3D::AnimationState& self, const  String & name, float weight){ self.SetBoneWeight(name, weight); },
        static_cast<void (Urho3D::AnimationState::*)(StringHash, float, bool)>(&Urho3D::AnimationState::SetBoneWeight) ,
        [](Urho3D::AnimationState& self, StringHash nameHash, float weight){ self.SetBoneWeight(nameHash, weight); } );
    type["GetBoneWeight"] = sol::overload(
        static_cast<float (Urho3D::AnimationState::*)(unsigned) const>(&Urho3D::AnimationState::GetBoneWeight) ,
        static_cast<float (Urho3D::AnimationState::*)(const  String &) const>(&Urho3D::AnimationState::GetBoneWeight) ,
        static_cast<float (Urho3D::AnimationState::*)(StringHash) const>(&Urho3D::AnimationState::GetBoneWeight)  );
    type["GetTrackIndex"] = sol::overload(
        static_cast<unsigned (Urho3D::AnimationState::*)(Node *) const>(&Urho3D::AnimationState::GetTrackIndex) ,
        static_cast<unsigned (Urho3D::AnimationState::*)(const  String &) const>(&Urho3D::AnimationState::GetTrackIndex) ,
        static_cast<unsigned (Urho3D::AnimationState::*)(StringHash) const>(&Urho3D::AnimationState::GetTrackIndex)  );
    type["animation"] = sol::property([](Urho3D::AnimationState& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetAnimation());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["blendMode"] = sol::property(static_cast<AnimationBlendMode (Urho3D::AnimationState::*)() const>(&Urho3D::AnimationState::GetBlendMode) 
        , static_cast<void (Urho3D::AnimationState::*)(AnimationBlendMode)>(&Urho3D::AnimationState::SetBlendMode) );
    type["boneWeight"] = sol::property(static_cast<float (Urho3D::AnimationState::*)(const  String &) const>(&Urho3D::AnimationState::GetBoneWeight) );
    type["enabled"] = sol::property(static_cast<bool (Urho3D::AnimationState::*)() const>(&Urho3D::AnimationState::IsEnabled) );
    type["layer"] = sol::property(static_cast<unsigned char (Urho3D::AnimationState::*)() const>(&Urho3D::AnimationState::GetLayer) 
        , static_cast<void (Urho3D::AnimationState::*)(unsigned char)>(&Urho3D::AnimationState::SetLayer) );
    type["length"] = sol::property(static_cast<float (Urho3D::AnimationState::*)() const>(&Urho3D::AnimationState::GetLength) );
    type["looped"] = sol::property(static_cast<bool (Urho3D::AnimationState::*)() const>(&Urho3D::AnimationState::IsLooped) 
        , static_cast<void (Urho3D::AnimationState::*)(bool)>(&Urho3D::AnimationState::SetLooped) );
    type["model"] = sol::property([](Urho3D::AnimationState& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetModel());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["node"] = sol::property([](Urho3D::AnimationState& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetNode());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["startBone"] = sol::property(static_cast<Bone* (Urho3D::AnimationState::*)() const>(&Urho3D::AnimationState::GetStartBone) 
        , static_cast<void (Urho3D::AnimationState::*)(Bone *)>(&Urho3D::AnimationState::SetStartBone) );
    type["time"] = sol::property(static_cast<float (Urho3D::AnimationState::*)() const>(&Urho3D::AnimationState::GetTime) 
        , static_cast<void (Urho3D::AnimationState::*)(float)>(&Urho3D::AnimationState::SetTime) );
    type["weight"] = sol::property(static_cast<float (Urho3D::AnimationState::*)() const>(&Urho3D::AnimationState::GetWeight) 
        , static_cast<void (Urho3D::AnimationState::*)(float)>(&Urho3D::AnimationState::SetWeight) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/AnimationState.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/AnimationState.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Graphics/Animation.h>
#include <Urho3D/Graphics/Skeleton.h>
#include <Urho3D/Scene/Node.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_AnimationStateTrack(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::AnimationStateTrack>( "AnimationStateTrack"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::AnimationStateTrack()>();

// Members

    type["track_"] = &Urho3D::AnimationStateTrack::track_;
    type["bone_"] = &Urho3D::AnimationStateTrack::bone_;
    type["node_"] = &Urho3D::AnimationStateTrack::node_;
    type["weight_"] = &Urho3D::AnimationStateTrack::weight_;
    type["keyFrame_"] = &Urho3D::AnimationStateTrack::keyFrame_;

}

