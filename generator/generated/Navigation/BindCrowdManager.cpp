
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Navigation/CrowdManager.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Navigation/CrowdManager.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Navigation/CrowdAgent.h>
#include <Urho3D/Navigation/CrowdManager.h>
#include <Urho3D/Navigation/NavigationMesh.h>
#include <Urho3D/Scene/Node.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CrowdManager(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::CrowdManager::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::CrowdManager::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::CrowdManager>((Urho3D::CrowdManager*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::CrowdManager>( "CrowdManager"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::CrowdManager>(context);
        });

// Members

    /*Apply attribute changes that can not be applied immediately. Called after scene load or a network update.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::CrowdManager::*)()>(&Urho3D::CrowdManager::ApplyAttributes) ;
    /*Set the maximum number of agents. BIND_AS_PROPERTY*//*(unsigned maxAgents)*/
    type["SetMaxAgents"] = static_cast<void (Urho3D::CrowdManager::*)(unsigned)>(&Urho3D::CrowdManager::SetMaxAgents) ;
    /*Set the maximum radius of any agent. BIND_AS_PROPERTY*//*(float maxAgentRadius)*/
    type["SetMaxAgentRadius"] = static_cast<void (Urho3D::CrowdManager::*)(float)>(&Urho3D::CrowdManager::SetMaxAgentRadius) ;
    /*Assigns the navigation mesh for the crowd. BIND_AS_ALIAS_set_navMesh*//*(NavigationMesh *navMesh)*/
    type["SetNavigationMesh"] = static_cast<void (Urho3D::CrowdManager::*)(NavigationMesh *)>(&Urho3D::CrowdManager::SetNavigationMesh) ;
    /*Set all the query filter types configured in the crowd based on the corresponding attribute.*//*(const VariantVector &value)*/
    type["SetQueryFilterTypesAttr"] = static_cast<void (Urho3D::CrowdManager::*)(const  VariantVector &)>(&Urho3D::CrowdManager::SetQueryFilterTypesAttr) ;
    /*Set the include flags for the specified query filter type.*//*(unsigned queryFilterType, unsigned short flags)*/
    type["SetIncludeFlags"] = static_cast<void (Urho3D::CrowdManager::*)(unsigned, unsigned short)>(&Urho3D::CrowdManager::SetIncludeFlags) ;
    /*Set the exclude flags for the specified query filter type.*//*(unsigned queryFilterType, unsigned short flags)*/
    type["SetExcludeFlags"] = static_cast<void (Urho3D::CrowdManager::*)(unsigned, unsigned short)>(&Urho3D::CrowdManager::SetExcludeFlags) ;
    /*Set the cost of an area for the specified query filter type.*//*(unsigned queryFilterType, unsigned areaID, float cost)*/
    type["SetAreaCost"] = static_cast<void (Urho3D::CrowdManager::*)(unsigned, unsigned, float)>(&Urho3D::CrowdManager::SetAreaCost) ;
    /*Set all the obstacle avoidance types configured in the crowd based on the corresponding attribute.*//*(const VariantVector &value)*/
    type["SetObstacleAvoidanceTypesAttr"] = static_cast<void (Urho3D::CrowdManager::*)(const  VariantVector &)>(&Urho3D::CrowdManager::SetObstacleAvoidanceTypesAttr) ;
    /*Set the params for the specified obstacle avoidance type.*//*(unsigned obstacleAvoidanceType, const CrowdObstacleAvoidanceParams &params)*/
    type["SetObstacleAvoidanceParams"] = static_cast<void (Urho3D::CrowdManager::*)(unsigned, const  CrowdObstacleAvoidanceParams &)>(&Urho3D::CrowdManager::SetObstacleAvoidanceParams) ;
    /*Find a path between world space points using the crowd initialized query extent (based on maxAgentRadius) and the specified query filter type. Return non-empty list of points if successful.*//*(PODVector< Vector3 > &dest, const Vector3 &start, const Vector3 &end, int queryFilterType)*/
    type["FindPath"] = static_cast<void (Urho3D::CrowdManager::*)(PODVector<  Vector3 > &, const  Vector3 &, const  Vector3 &, int)>(&Urho3D::CrowdManager::FindPath) ;
    /*Get the maximum number of agents. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxAgents"] = static_cast<unsigned (Urho3D::CrowdManager::*)() const>(&Urho3D::CrowdManager::GetMaxAgents) ;
    /*Get the maximum radius of any agent. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxAgentRadius"] = static_cast<float (Urho3D::CrowdManager::*)() const>(&Urho3D::CrowdManager::GetMaxAgentRadius) ;
    /*Get the Navigation mesh assigned to the crowd. BIND_AS_ALIAS_get_navMesh*//*() const*/
    type["GetNavigationMesh"] = [](Urho3D::CrowdManager& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetNavigationMesh());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Get the number of configured query filter types. BIND_AS_PROPERTY*//*() const*/
    type["GetNumQueryFilterTypes"] = static_cast<unsigned (Urho3D::CrowdManager::*)() const>(&Urho3D::CrowdManager::GetNumQueryFilterTypes) ;
    /*Get the number of configured area in the specified query filter type. BIND_AS_PROPERTY*//*(unsigned queryFilterType) const*/
    type["GetNumAreas"] = static_cast<unsigned (Urho3D::CrowdManager::*)(unsigned) const>(&Urho3D::CrowdManager::GetNumAreas) ;
    /*Return all the filter types configured in the crowd as attribute.*//*() const*/
    type["GetQueryFilterTypesAttr"] = static_cast<VariantVector (Urho3D::CrowdManager::*)() const>(&Urho3D::CrowdManager::GetQueryFilterTypesAttr) ;
    /*Get the include flags for the specified query filter type.*//*(unsigned queryFilterType) const*/
    type["GetIncludeFlags"] = static_cast<unsigned short (Urho3D::CrowdManager::*)(unsigned) const>(&Urho3D::CrowdManager::GetIncludeFlags) ;
    /*Get the exclude flags for the specified query filter type.*//*(unsigned queryFilterType) const*/
    type["GetExcludeFlags"] = static_cast<unsigned short (Urho3D::CrowdManager::*)(unsigned) const>(&Urho3D::CrowdManager::GetExcludeFlags) ;
    /*Get the cost of an area for the specified query filter type.*//*(unsigned queryFilterType, unsigned areaID) const*/
    type["GetAreaCost"] = static_cast<float (Urho3D::CrowdManager::*)(unsigned, unsigned) const>(&Urho3D::CrowdManager::GetAreaCost) ;
    /*Get the number of configured obstacle avoidance types. BIND_AS_PROPERTY*//*() const*/
    type["GetNumObstacleAvoidanceTypes"] = static_cast<unsigned (Urho3D::CrowdManager::*)() const>(&Urho3D::CrowdManager::GetNumObstacleAvoidanceTypes) ;
    /*Return all the obstacle avoidance types configured in the crowd as attribute.*//*() const*/
    type["GetObstacleAvoidanceTypesAttr"] = static_cast<VariantVector (Urho3D::CrowdManager::*)() const>(&Urho3D::CrowdManager::GetObstacleAvoidanceTypesAttr) ;
    /*Get the params for the specified obstacle avoidance type.*//*(unsigned obstacleAvoidanceType) const*/
    type["GetObstacleAvoidanceParams"] = static_cast<const CrowdObstacleAvoidanceParams& (Urho3D::CrowdManager::*)(unsigned) const>(&Urho3D::CrowdManager::GetObstacleAvoidanceParams) ;
    type["DrawDebugGeometry"] = sol::overload(
        static_cast<void (Urho3D::CrowdManager::*)(DebugRenderer *, bool)>(&Urho3D::CrowdManager::DrawDebugGeometry) ,
        static_cast<void (Urho3D::CrowdManager::*)(bool)>(&Urho3D::CrowdManager::DrawDebugGeometry)  );
    type["SetCrowdTarget"] = sol::overload(
        static_cast<void (Urho3D::CrowdManager::*)(const  Vector3 &, Node *)>(&Urho3D::CrowdManager::SetCrowdTarget) ,
        [](Urho3D::CrowdManager& self, const  Vector3 & position){ self.SetCrowdTarget(position); } );
    type["SetCrowdVelocity"] = sol::overload(
        static_cast<void (Urho3D::CrowdManager::*)(const  Vector3 &, Node *)>(&Urho3D::CrowdManager::SetCrowdVelocity) ,
        [](Urho3D::CrowdManager& self, const  Vector3 & velocity){ self.SetCrowdVelocity(velocity); } );
    type["ResetCrowdTarget"] = sol::overload(
        static_cast<void (Urho3D::CrowdManager::*)(Node *)>(&Urho3D::CrowdManager::ResetCrowdTarget) ,
        [](Urho3D::CrowdManager& self){ self.ResetCrowdTarget(); } );
    type["GetAgents"] = sol::overload(
        static_cast<PODVector<CrowdAgent*> (Urho3D::CrowdManager::*)(Node *, bool) const>(&Urho3D::CrowdManager::GetAgents) ,
        [](Urho3D::CrowdManager& self, Node * node){ return self.GetAgents(node); },
        [](Urho3D::CrowdManager& self){ return self.GetAgents(); } );
    type["FindNearestPoint"] = sol::overload(
        static_cast<Vector3 (Urho3D::CrowdManager::*)(const  Vector3 &, int, dtPolyRef *)>(&Urho3D::CrowdManager::FindNearestPoint) ,
        [](Urho3D::CrowdManager& self, const  Vector3 & point, int queryFilterType){ return self.FindNearestPoint(point, queryFilterType); } );
    type["MoveAlongSurface"] = sol::overload(
        static_cast<Vector3 (Urho3D::CrowdManager::*)(const  Vector3 &, const  Vector3 &, int, int)>(&Urho3D::CrowdManager::MoveAlongSurface) ,
        [](Urho3D::CrowdManager& self, const  Vector3 & start, const  Vector3 & end, int queryFilterType){ return self.MoveAlongSurface(start, end, queryFilterType); } );
    type["GetRandomPoint"] = sol::overload(
        static_cast<Vector3 (Urho3D::CrowdManager::*)(int, dtPolyRef *)>(&Urho3D::CrowdManager::GetRandomPoint) ,
        [](Urho3D::CrowdManager& self, int queryFilterType){ return self.GetRandomPoint(queryFilterType); } );
    type["GetRandomPointInCircle"] = sol::overload(
        static_cast<Vector3 (Urho3D::CrowdManager::*)(const  Vector3 &, float, int, dtPolyRef *)>(&Urho3D::CrowdManager::GetRandomPointInCircle) ,
        [](Urho3D::CrowdManager& self, const  Vector3 & center, float radius, int queryFilterType){ return self.GetRandomPointInCircle(center, radius, queryFilterType); } );
    type["GetDistanceToWall"] = sol::overload(
        static_cast<float (Urho3D::CrowdManager::*)(const  Vector3 &, float, int, Vector3 *, Vector3 *)>(&Urho3D::CrowdManager::GetDistanceToWall) ,
        [](Urho3D::CrowdManager& self, const  Vector3 & point, float radius, int queryFilterType, Vector3 * hitPos){ return self.GetDistanceToWall(point, radius, queryFilterType, hitPos); },
        [](Urho3D::CrowdManager& self, const  Vector3 & point, float radius, int queryFilterType){ return self.GetDistanceToWall(point, radius, queryFilterType); } );
    type["Raycast"] = sol::overload(
        static_cast<Vector3 (Urho3D::CrowdManager::*)(const  Vector3 &, const  Vector3 &, int, Vector3 *)>(&Urho3D::CrowdManager::Raycast) ,
        [](Urho3D::CrowdManager& self, const  Vector3 & start, const  Vector3 & end, int queryFilterType){ return self.Raycast(start, end, queryFilterType); } );
    type["maxAgentRadius"] = sol::property(static_cast<float (Urho3D::CrowdManager::*)() const>(&Urho3D::CrowdManager::GetMaxAgentRadius) 
        , static_cast<void (Urho3D::CrowdManager::*)(float)>(&Urho3D::CrowdManager::SetMaxAgentRadius) );
    type["maxAgents"] = sol::property(static_cast<unsigned (Urho3D::CrowdManager::*)() const>(&Urho3D::CrowdManager::GetMaxAgents) 
        , static_cast<void (Urho3D::CrowdManager::*)(unsigned)>(&Urho3D::CrowdManager::SetMaxAgents) );
    type["navigationMesh"] = sol::property([](Urho3D::CrowdManager& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetNavigationMesh());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::CrowdManager::*)(NavigationMesh *)>(&Urho3D::CrowdManager::SetNavigationMesh) );
    type["numAreas"] = sol::property(static_cast<unsigned (Urho3D::CrowdManager::*)(unsigned) const>(&Urho3D::CrowdManager::GetNumAreas) );
    type["numObstacleAvoidanceTypes"] = sol::property(static_cast<unsigned (Urho3D::CrowdManager::*)() const>(&Urho3D::CrowdManager::GetNumObstacleAvoidanceTypes) );
    type["numQueryFilterTypes"] = sol::property(static_cast<unsigned (Urho3D::CrowdManager::*)() const>(&Urho3D::CrowdManager::GetNumQueryFilterTypes) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Navigation/CrowdManager.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Navigation/CrowdManager.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CrowdObstacleAvoidanceParams(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::CrowdObstacleAvoidanceParams>( "CrowdObstacleAvoidanceParams"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["velBias"] = &Urho3D::CrowdObstacleAvoidanceParams::velBias;
    type["weightDesVel"] = &Urho3D::CrowdObstacleAvoidanceParams::weightDesVel;
    type["weightCurVel"] = &Urho3D::CrowdObstacleAvoidanceParams::weightCurVel;
    type["weightSide"] = &Urho3D::CrowdObstacleAvoidanceParams::weightSide;
    type["weightToi"] = &Urho3D::CrowdObstacleAvoidanceParams::weightToi;
    type["horizTime"] = &Urho3D::CrowdObstacleAvoidanceParams::horizTime;
    type["gridSize"] = &Urho3D::CrowdObstacleAvoidanceParams::gridSize;
    type["adaptiveDivs"] = &Urho3D::CrowdObstacleAvoidanceParams::adaptiveDivs;
    type["adaptiveRings"] = &Urho3D::CrowdObstacleAvoidanceParams::adaptiveRings;
    type["adaptiveDepth"] = &Urho3D::CrowdObstacleAvoidanceParams::adaptiveDepth;

}

