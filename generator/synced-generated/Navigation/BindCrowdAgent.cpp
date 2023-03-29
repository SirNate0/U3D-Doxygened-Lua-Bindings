
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Navigation/CrowdAgent.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Navigation/CrowdAgent.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Navigation/CrowdManager.h>
#include <Urho3D/Scene/Component.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CrowdAgent(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::CrowdAgent::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::CrowdAgent::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::CrowdAgent>((Urho3D::CrowdAgent*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::CrowdAgent>( "CrowdAgent"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::CrowdAgent>(context);
        });

// Members

    /*Apply attribute changes that can not be applied immediately. Called after scene load or a network update.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::CrowdAgent::*)()>(&Urho3D::CrowdAgent::ApplyAttributes) ;
    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::CrowdAgent::*)()>(&Urho3D::CrowdAgent::OnSetEnabled) ;
    /*Submit a new target position request for this agent. BIND_AS_PROPERTY*//*(const Vector3 &position)*/
    type["SetTargetPosition"] = static_cast<void (Urho3D::CrowdAgent::*)(const  Vector3 &)>(&Urho3D::CrowdAgent::SetTargetPosition) ;
    /*Submit a new target velocity request for this agent. BIND_AS_PROPERTY*//*(const Vector3 &velocity)*/
    type["SetTargetVelocity"] = static_cast<void (Urho3D::CrowdAgent::*)(const  Vector3 &)>(&Urho3D::CrowdAgent::SetTargetVelocity) ;
    /*Reset any target request for the specified agent. Note that the agent will continue to move into the current direction; set a zero target velocity to actually stop.*//*()*/
    type["ResetTarget"] = static_cast<void (Urho3D::CrowdAgent::*)()>(&Urho3D::CrowdAgent::ResetTarget) ;
    /*Update the node position. When set to false, the node position should be updated by other means (e.g. using Physics) in response to the E_CROWD_AGENT_REPOSITION event. BIND_AS_PROPERTY*//*(bool unodepos)*/
    type["SetUpdateNodePosition"] = static_cast<void (Urho3D::CrowdAgent::*)(bool)>(&Urho3D::CrowdAgent::SetUpdateNodePosition) ;
    /*Set the agent's max acceleration. BIND_AS_PROPERTY*//*(float maxAccel)*/
    type["SetMaxAccel"] = static_cast<void (Urho3D::CrowdAgent::*)(float)>(&Urho3D::CrowdAgent::SetMaxAccel) ;
    /*Set the agent's max velocity. BIND_AS_PROPERTY*//*(float maxSpeed)*/
    type["SetMaxSpeed"] = static_cast<void (Urho3D::CrowdAgent::*)(float)>(&Urho3D::CrowdAgent::SetMaxSpeed) ;
    /*Set the agent's radius. BIND_AS_PROPERTY*//*(float radius)*/
    type["SetRadius"] = static_cast<void (Urho3D::CrowdAgent::*)(float)>(&Urho3D::CrowdAgent::SetRadius) ;
    /*Set the agent's height. BIND_AS_PROPERTY*//*(float height)*/
    type["SetHeight"] = static_cast<void (Urho3D::CrowdAgent::*)(float)>(&Urho3D::CrowdAgent::SetHeight) ;
    /*Set the agent's query filter type. BIND_AS_PROPERTY*//*(unsigned queryFilterType)*/
    type["SetQueryFilterType"] = static_cast<void (Urho3D::CrowdAgent::*)(unsigned)>(&Urho3D::CrowdAgent::SetQueryFilterType) ;
    /*Set the agent's obstacle avoidance type. BIND_AS_PROPERTY*//*(unsigned obstacleAvoidanceType)*/
    type["SetObstacleAvoidanceType"] = static_cast<void (Urho3D::CrowdAgent::*)(unsigned)>(&Urho3D::CrowdAgent::SetObstacleAvoidanceType) ;
    /*Set the agent's navigation quality. BIND_AS_PROPERTY*//*(NavigationQuality val)*/
    type["SetNavigationQuality"] = static_cast<void (Urho3D::CrowdAgent::*)(NavigationQuality)>(&Urho3D::CrowdAgent::SetNavigationQuality) ;
    /*Set the agent's navigation pushiness. BIND_AS_PROPERTY*//*(NavigationPushiness val)*/
    type["SetNavigationPushiness"] = static_cast<void (Urho3D::CrowdAgent::*)(NavigationPushiness)>(&Urho3D::CrowdAgent::SetNavigationPushiness) ;
    /*Return the agent's position. BIND_AS_PROPERTY*//*() const*/
    type["GetPosition"] = static_cast<Vector3 (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetPosition) ;
    /*Return the agent's desired velocity. BIND_AS_PROPERTY*//*() const*/
    type["GetDesiredVelocity"] = static_cast<Vector3 (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetDesiredVelocity) ;
    /*Return the agent's actual velocity. BIND_AS_PROPERTY*//*() const*/
    type["GetActualVelocity"] = static_cast<Vector3 (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetActualVelocity) ;
    /*Return the agent's requested target position. BIND_AS_PROPERTY*//*() const*/
    type["GetTargetPosition"] = static_cast<const Vector3& (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetTargetPosition) ;
    /*Return the agent's requested target velocity. BIND_AS_PROPERTY*//*() const*/
    type["GetTargetVelocity"] = static_cast<const Vector3& (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetTargetVelocity) ;
    /*Return the agent's requested target type, if any. BIND_AS_PROPERTY*//*() const*/
    type["GetRequestedTargetType"] = static_cast<CrowdAgentRequestedTarget (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetRequestedTargetType) ;
    /*Return the agent's state. BIND_AS_PROPERTY*//*() const*/
    type["GetAgentState"] = static_cast<CrowdAgentState (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetAgentState) ;
    /*Return the agent's target state. BIND_AS_PROPERTY*//*() const*/
    type["GetTargetState"] = static_cast<CrowdAgentTargetState (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetTargetState) ;
    /*Return true when the node's position should be updated by the  CrowdManager. BIND_AS_PROPERTY*//*() const*/
    type["GetUpdateNodePosition"] = static_cast<bool (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetUpdateNodePosition) ;
    /*Return the agent id.*//*() const*/
    type["GetAgentCrowdId"] = static_cast<int (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetAgentCrowdId) ;
    /*Get the agent's max acceleration. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxAccel"] = static_cast<float (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetMaxAccel) ;
    /*Get the agent's max velocity. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxSpeed"] = static_cast<float (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetMaxSpeed) ;
    /*Get the agent's radius. BIND_AS_PROPERTY*//*() const*/
    type["GetRadius"] = static_cast<float (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetRadius) ;
    /*Get the agent's height. BIND_AS_PROPERTY*//*() const*/
    type["GetHeight"] = static_cast<float (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetHeight) ;
    /*Get the agent's query filter type. BIND_AS_PROPERTY*//*() const*/
    type["GetQueryFilterType"] = static_cast<unsigned (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetQueryFilterType) ;
    /*Get the agent's obstacle avoidance type. BIND_AS_PROPERTY*//*() const*/
    type["GetObstacleAvoidanceType"] = static_cast<unsigned (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetObstacleAvoidanceType) ;
    /*Get the agent's navigation quality. BIND_AS_PROPERTY*//*() const*/
    type["GetNavigationQuality"] = static_cast<NavigationQuality (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetNavigationQuality) ;
    /*Get the agent's navigation pushiness. BIND_AS_PROPERTY*//*() const*/
    type["GetNavigationPushiness"] = static_cast<NavigationPushiness (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetNavigationPushiness) ;
    /*Return true when the agent has a target. BIND_AS_ALIAS_get_requestedTarget*//*() const*/
    type["HasRequestedTarget"] = static_cast<bool (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::HasRequestedTarget) ;
    /*Return true when the agent has arrived at its target. BIND_AS_ALIAS_get_arrived*//*() const*/
    type["HasArrived"] = static_cast<bool (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::HasArrived) ;
    /*Return true when the agent is in crowd (being managed by a crowd manager). BIND_AS_PROPERTY*//*() const*/
    type["IsInCrowd"] = static_cast<bool (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::IsInCrowd) ;
    type["DrawDebugGeometry"] = sol::overload(
        static_cast<void (Urho3D::CrowdAgent::*)(bool)>(&Urho3D::CrowdAgent::DrawDebugGeometry) ,
        static_cast<void (Urho3D::CrowdAgent::*)(DebugRenderer *, bool)>(&Urho3D::CrowdAgent::DrawDebugGeometry)  );
    type["actualVelocity"] = sol::property(static_cast<Vector3 (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetActualVelocity) );
    type["agentState"] = sol::property(static_cast<CrowdAgentState (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetAgentState) );
    type["desiredVelocity"] = sol::property(static_cast<Vector3 (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetDesiredVelocity) );
    type["hasArrived"] = sol::property(static_cast<bool (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::HasArrived) );
    type["hasRequestedTarget"] = sol::property(static_cast<bool (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::HasRequestedTarget) );
    type["height"] = sol::property(static_cast<float (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetHeight) 
        , static_cast<void (Urho3D::CrowdAgent::*)(float)>(&Urho3D::CrowdAgent::SetHeight) );
    type["inCrowd"] = sol::property(static_cast<bool (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::IsInCrowd) );
    type["maxAccel"] = sol::property(static_cast<float (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetMaxAccel) 
        , static_cast<void (Urho3D::CrowdAgent::*)(float)>(&Urho3D::CrowdAgent::SetMaxAccel) );
    type["maxSpeed"] = sol::property(static_cast<float (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetMaxSpeed) 
        , static_cast<void (Urho3D::CrowdAgent::*)(float)>(&Urho3D::CrowdAgent::SetMaxSpeed) );
    type["navigationPushiness"] = sol::property(static_cast<NavigationPushiness (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetNavigationPushiness) 
        , static_cast<void (Urho3D::CrowdAgent::*)(NavigationPushiness)>(&Urho3D::CrowdAgent::SetNavigationPushiness) );
    type["navigationQuality"] = sol::property(static_cast<NavigationQuality (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetNavigationQuality) 
        , static_cast<void (Urho3D::CrowdAgent::*)(NavigationQuality)>(&Urho3D::CrowdAgent::SetNavigationQuality) );
    type["obstacleAvoidanceType"] = sol::property(static_cast<unsigned (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetObstacleAvoidanceType) 
        , static_cast<void (Urho3D::CrowdAgent::*)(unsigned)>(&Urho3D::CrowdAgent::SetObstacleAvoidanceType) );
    type["position"] = sol::property(static_cast<Vector3 (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetPosition) );
    type["queryFilterType"] = sol::property(static_cast<unsigned (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetQueryFilterType) 
        , static_cast<void (Urho3D::CrowdAgent::*)(unsigned)>(&Urho3D::CrowdAgent::SetQueryFilterType) );
    type["radius"] = sol::property(static_cast<float (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetRadius) 
        , static_cast<void (Urho3D::CrowdAgent::*)(float)>(&Urho3D::CrowdAgent::SetRadius) );
    type["requestedTargetType"] = sol::property(static_cast<CrowdAgentRequestedTarget (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetRequestedTargetType) );
    type["targetPosition"] = sol::property(static_cast<const Vector3& (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetTargetPosition) 
        , static_cast<void (Urho3D::CrowdAgent::*)(const  Vector3 &)>(&Urho3D::CrowdAgent::SetTargetPosition) );
    type["targetState"] = sol::property(static_cast<CrowdAgentTargetState (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetTargetState) );
    type["targetVelocity"] = sol::property(static_cast<const Vector3& (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetTargetVelocity) 
        , static_cast<void (Urho3D::CrowdAgent::*)(const  Vector3 &)>(&Urho3D::CrowdAgent::SetTargetVelocity) );
    type["updateNodePosition"] = sol::property(static_cast<bool (Urho3D::CrowdAgent::*)() const>(&Urho3D::CrowdAgent::GetUpdateNodePosition) 
        , static_cast<void (Urho3D::CrowdAgent::*)(bool)>(&Urho3D::CrowdAgent::SetUpdateNodePosition) );

}

