
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Animation.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Animation.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Animation.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Animation(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Animation::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Animation::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Animation>((Urho3D::Animation*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Animation>( "Animation"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::ResourceWithMetadata,Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Animation>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::Animation::*)(Deserializer &)>(&Urho3D::Animation::BeginLoad) ;
    /*Save resource. Return true if successful.*//*(Serializer &dest) const override*/
    type["Save"] = static_cast<bool (Urho3D::Animation::*)(Serializer &) const>(&Urho3D::Animation::Save) ;
    /*Set animation name. BIND_AS_PROPERTY*//*(const String &name)*/
    type["SetAnimationName"] = static_cast<void (Urho3D::Animation::*)(const  String &)>(&Urho3D::Animation::SetAnimationName) ;
    /*Set animation length. BIND_AS_PROPERTY*//*(float length)*/
    type["SetLength"] = static_cast<void (Urho3D::Animation::*)(float)>(&Urho3D::Animation::SetLength) ;
    /*Create and return a track by name. If track by same name already exists, returns the existing.*//*(const String &name)*/
    type["CreateTrack"] = static_cast<AnimationTrack* (Urho3D::Animation::*)(const  String &)>(&Urho3D::Animation::CreateTrack) ;
    /*Remove a track by name. Return true if was found and removed successfully. This is unsafe if the animation is currently used in playback.*//*(const String &name)*/
    type["RemoveTrack"] = static_cast<bool (Urho3D::Animation::*)(const  String &)>(&Urho3D::Animation::RemoveTrack) ;
    /*Remove all tracks. This is unsafe if the animation is currently used in playback.*//*()*/
    type["RemoveAllTracks"] = static_cast<void (Urho3D::Animation::*)()>(&Urho3D::Animation::RemoveAllTracks) ;
    /*Set a trigger point at index. BIND_AS_ALIAS_set_triggers*//*(unsigned index, const AnimationTriggerPoint &trigger)*/
    type["SetTrigger"] = static_cast<void (Urho3D::Animation::*)(unsigned, const  AnimationTriggerPoint &)>(&Urho3D::Animation::SetTrigger) ;
    /*Remove a trigger point by index.*//*(unsigned index)*/
    type["RemoveTrigger"] = static_cast<void (Urho3D::Animation::*)(unsigned)>(&Urho3D::Animation::RemoveTrigger) ;
    /*Remove all trigger points.*//*()*/
    type["RemoveAllTriggers"] = static_cast<void (Urho3D::Animation::*)()>(&Urho3D::Animation::RemoveAllTriggers) ;
    /*Resize trigger point vector. BIND_AS_PROPERTY*//*(unsigned num)*/
    type["SetNumTriggers"] = static_cast<void (Urho3D::Animation::*)(unsigned)>(&Urho3D::Animation::SetNumTriggers) ;
    /*Return animation name. BIND_AS_PROPERTY*//*() const*/
    type["GetAnimationName"] = static_cast<const String& (Urho3D::Animation::*)() const>(&Urho3D::Animation::GetAnimationName) ;
    /*Return animation name hash.*//*() const*/
    type["GetAnimationNameHash"] = static_cast<StringHash (Urho3D::Animation::*)() const>(&Urho3D::Animation::GetAnimationNameHash) ;
    /*Return animation length. BIND_AS_PROPERTY*//*() const*/
    type["GetLength"] = static_cast<float (Urho3D::Animation::*)() const>(&Urho3D::Animation::GetLength) ;
    /*Return all animation tracks.*//*() const*/
    type["GetTracks"] = static_cast<const HashMap<StringHash,AnimationTrack>& (Urho3D::Animation::*)() const>(&Urho3D::Animation::GetTracks) ;
    /*Return number of animation tracks. BIND_AS_PROPERTY*//*() const*/
    type["GetNumTracks"] = static_cast<unsigned (Urho3D::Animation::*)() const>(&Urho3D::Animation::GetNumTracks) ;
    /*Return animation trigger points.*//*() const*/
    type["GetTriggers"] = static_cast<const Vector<AnimationTriggerPoint>& (Urho3D::Animation::*)() const>(&Urho3D::Animation::GetTriggers) ;
    /*Return number of animation trigger points. BIND_AS_PROPERTY*//*() const*/
    type["GetNumTriggers"] = static_cast<unsigned (Urho3D::Animation::*)() const>(&Urho3D::Animation::GetNumTriggers) ;
    /*Return a trigger point by index.*//*(unsigned index)*/
    type["GetTrigger"] = static_cast<AnimationTriggerPoint* (Urho3D::Animation::*)(unsigned)>(&Urho3D::Animation::GetTrigger) ;
    type["AddTrigger"] = sol::overload(
        static_cast<void (Urho3D::Animation::*)(const  AnimationTriggerPoint &)>(&Urho3D::Animation::AddTrigger) ,
        static_cast<void (Urho3D::Animation::*)(float, bool, const  Variant &)>(&Urho3D::Animation::AddTrigger)  );
    type["Clone"] = sol::overload(
        static_cast<SharedPtr<Animation> (Urho3D::Animation::*)(const  String &) const>(&Urho3D::Animation::Clone) ,
        [](Urho3D::Animation& self){ return self.Clone(); } );
    type["GetTrack"] = sol::overload(
        static_cast<AnimationTrack* (Urho3D::Animation::*)(unsigned)>(&Urho3D::Animation::GetTrack) ,
        static_cast<AnimationTrack* (Urho3D::Animation::*)(const  String &)>(&Urho3D::Animation::GetTrack) ,
        static_cast<AnimationTrack* (Urho3D::Animation::*)(StringHash)>(&Urho3D::Animation::GetTrack)  );
    type["animationName"] = sol::property(static_cast<const String& (Urho3D::Animation::*)() const>(&Urho3D::Animation::GetAnimationName) 
        , static_cast<void (Urho3D::Animation::*)(const  String &)>(&Urho3D::Animation::SetAnimationName) );
    type["length"] = sol::property(static_cast<float (Urho3D::Animation::*)() const>(&Urho3D::Animation::GetLength) 
        , static_cast<void (Urho3D::Animation::*)(float)>(&Urho3D::Animation::SetLength) );
    type["numTracks"] = sol::property(static_cast<unsigned (Urho3D::Animation::*)() const>(&Urho3D::Animation::GetNumTracks) );
    type["numTriggers"] = sol::property(static_cast<unsigned (Urho3D::Animation::*)() const>(&Urho3D::Animation::GetNumTriggers) 
        , static_cast<void (Urho3D::Animation::*)(unsigned)>(&Urho3D::Animation::SetNumTriggers) );
    type["track"] = sol::property(static_cast<AnimationTrack* (Urho3D::Animation::*)(const  String &)>(&Urho3D::Animation::GetTrack) );
    type["trigger"] = sol::property(static_cast<void (Urho3D::Animation::*)(unsigned, const  AnimationTriggerPoint &)>(&Urho3D::Animation::SetTrigger) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Animation.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Animation.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_AnimationKeyFrame(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::AnimationKeyFrame>( "AnimationKeyFrame"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::AnimationKeyFrame()>();

// Members

    type["time_"] = &Urho3D::AnimationKeyFrame::time_;
    type["position_"] = &Urho3D::AnimationKeyFrame::position_;
    type["rotation_"] = &Urho3D::AnimationKeyFrame::rotation_;
    type["scale_"] = &Urho3D::AnimationKeyFrame::scale_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Animation.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Animation.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/Animation.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_AnimationTrack(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::AnimationTrack>( "AnimationTrack"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::AnimationTrack()>();

// Members

    /*Assign keyframe at index. BIND_AS_ALIAS_set_keyFrames*//*(unsigned index, const AnimationKeyFrame &keyFrame)*/
    type["SetKeyFrame"] = static_cast<void (Urho3D::AnimationTrack::*)(unsigned, const  AnimationKeyFrame &)>(&Urho3D::AnimationTrack::SetKeyFrame) ;
    /*Add a keyframe at the end.*//*(const AnimationKeyFrame &keyFrame)*/
    type["AddKeyFrame"] = static_cast<void (Urho3D::AnimationTrack::*)(const  AnimationKeyFrame &)>(&Urho3D::AnimationTrack::AddKeyFrame) ;
    /*Insert a keyframe at index.*//*(unsigned index, const AnimationKeyFrame &keyFrame)*/
    type["InsertKeyFrame"] = static_cast<void (Urho3D::AnimationTrack::*)(unsigned, const  AnimationKeyFrame &)>(&Urho3D::AnimationTrack::InsertKeyFrame) ;
    /*Remove a keyframe at index.*//*(unsigned index)*/
    type["RemoveKeyFrame"] = static_cast<void (Urho3D::AnimationTrack::*)(unsigned)>(&Urho3D::AnimationTrack::RemoveKeyFrame) ;
    /*Remove all keyframes.*//*()*/
    type["RemoveAllKeyFrames"] = static_cast<void (Urho3D::AnimationTrack::*)()>(&Urho3D::AnimationTrack::RemoveAllKeyFrames) ;
    /*Return keyframe at index, or null if not found.*//*(unsigned index)*/
    type["GetKeyFrame"] = static_cast<AnimationKeyFrame* (Urho3D::AnimationTrack::*)(unsigned)>(&Urho3D::AnimationTrack::GetKeyFrame) ;
    /*Return number of keyframes. BIND_AS_PROPERTY*//*() const*/
    type["GetNumKeyFrames"] = static_cast<unsigned (Urho3D::AnimationTrack::*)() const>(&Urho3D::AnimationTrack::GetNumKeyFrames) ;
#if 0 // INVALID: NeedsWrap(unsigned &)
    /*Return keyframe index based on time and previous index. Return false if animation is empty.*//*(float time, unsigned &index) const*/
    type["GetKeyFrameIndex"] = static_cast<bool (Urho3D::AnimationTrack::*)(float, unsigned &) const>(&Urho3D::AnimationTrack::GetKeyFrameIndex) ;
#endif
        
    type["keyFrame"] = sol::property(static_cast<void (Urho3D::AnimationTrack::*)(unsigned, const  AnimationKeyFrame &)>(&Urho3D::AnimationTrack::SetKeyFrame) );
    type["numKeyFrames"] = sol::property(static_cast<unsigned (Urho3D::AnimationTrack::*)() const>(&Urho3D::AnimationTrack::GetNumKeyFrames) );
    type["name_"] = &Urho3D::AnimationTrack::name_;
    type["nameHash_"] = &Urho3D::AnimationTrack::nameHash_;
    type["channelMask_"] = &Urho3D::AnimationTrack::channelMask_;
    type["keyFrames_"] = &Urho3D::AnimationTrack::keyFrames_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Animation.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Animation.h>
#include <Urho3D/Core/Variant.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_AnimationTriggerPoint(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::AnimationTriggerPoint>( "AnimationTriggerPoint"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::AnimationTriggerPoint()>();

// Members

    type["time_"] = &Urho3D::AnimationTriggerPoint::time_;
    type["data_"] = &Urho3D::AnimationTriggerPoint::data_;

}

