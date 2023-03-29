
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/LogicComponent.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/LogicComponent.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Core/Context.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_LogicComponent(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::LogicComponent::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::LogicComponent::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::LogicComponent>((Urho3D::LogicComponent*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::LogicComponent>( "LogicComponent"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::LogicComponent>(context);
        });

// Members

    /*Handle enabled/disabled state change. Changes update event subscription.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::LogicComponent::*)()>(&Urho3D::LogicComponent::OnSetEnabled) ;
    /*Called when the component is added to a scene node. Other components may not yet exist.*//*()*/
    type["Start"] = static_cast<void (Urho3D::LogicComponent::*)()>(&Urho3D::LogicComponent::Start) ;
    /*Called before the first update. At this point all other components of the node should exist. Will also be called if update events are not wanted; in that case the event is immediately unsubscribed afterward.*//*()*/
    type["DelayedStart"] = static_cast<void (Urho3D::LogicComponent::*)()>(&Urho3D::LogicComponent::DelayedStart) ;
    /*Called when the component is detached from a scene node, usually on destruction. Note that you will no longer have access to the node and scene at that point.*//*()*/
    type["Stop"] = static_cast<void (Urho3D::LogicComponent::*)()>(&Urho3D::LogicComponent::Stop) ;
    /*Called on scene update, variable timestep.*//*(float timeStep)*/
    type["Update"] = static_cast<void (Urho3D::LogicComponent::*)(float)>(&Urho3D::LogicComponent::Update) ;
    /*Called on scene post-update, variable timestep.*//*(float timeStep)*/
    type["PostUpdate"] = static_cast<void (Urho3D::LogicComponent::*)(float)>(&Urho3D::LogicComponent::PostUpdate) ;
    /*Called on physics update, fixed timestep.*//*(float timeStep)*/
    type["FixedUpdate"] = static_cast<void (Urho3D::LogicComponent::*)(float)>(&Urho3D::LogicComponent::FixedUpdate) ;
    /*Called on physics post-update, fixed timestep.*//*(float timeStep)*/
    type["FixedPostUpdate"] = static_cast<void (Urho3D::LogicComponent::*)(float)>(&Urho3D::LogicComponent::FixedPostUpdate) ;
    /*Set what update events should be subscribed to. Use this for optimization: by default all are in use. Note that this is not an attribute and is not saved or network-serialized, therefore it should always be called eg. in the subclass constructor.*//*(UpdateEventFlags mask)*/
    type["SetUpdateEventMask"] = static_cast<void (Urho3D::LogicComponent::*)(UpdateEventFlags)>(&Urho3D::LogicComponent::SetUpdateEventMask) ;
    /*Return what update events are subscribed to.*//*() const*/
    type["GetUpdateEventMask"] = static_cast<UpdateEventFlags (Urho3D::LogicComponent::*)() const>(&Urho3D::LogicComponent::GetUpdateEventMask) ;
    /*Return whether the  DelayedStart() function has been called.*//*() const*/
    type["IsDelayedStartCalled"] = static_cast<bool (Urho3D::LogicComponent::*)() const>(&Urho3D::LogicComponent::IsDelayedStartCalled) ;

}

