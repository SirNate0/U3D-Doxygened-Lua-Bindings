
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics/PhysicsWorld.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics/PhysicsWorld.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Graphics/Model.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Ray.h>
#include <Urho3D/Math/Sphere.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Physics/CollisionShape.h>
#include <Urho3D/Physics/Constraint.h>
#include <Urho3D/Physics/PhysicsWorld.h>
#include <Urho3D/Physics/RigidBody.h>
#include <Urho3D/Scene/Component.h>
#include <BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h>
#include <BulletCollision/CollisionDispatch/btCollisionConfiguration.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_PhysicsWorld(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::PhysicsWorld::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::PhysicsWorld::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::PhysicsWorld>((Urho3D::PhysicsWorld*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::PhysicsWorld>( "PhysicsWorld"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted,btIDebugDraw>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::PhysicsWorld>(context);
        });

// Members

    /*Check if an AABB is visible for debug drawing.*//*(const btVector3 &aabbMin, const btVector3 &aabbMax) override*/
    type["isVisible"] = static_cast<bool (Urho3D::PhysicsWorld::*)(const btVector3 &, const btVector3 &)>(&Urho3D::PhysicsWorld::isVisible) ;
    /*Draw a physics debug line.*//*(const btVector3 &from, const btVector3 &to, const btVector3 &color) override*/
    type["drawLine"] = static_cast<void (Urho3D::PhysicsWorld::*)(const btVector3 &, const btVector3 &, const btVector3 &)>(&Urho3D::PhysicsWorld::drawLine) ;
    /*Log warning from the physics engine.*//*(const char *warningString) override*/
    type["reportErrorWarning"] = static_cast<void (Urho3D::PhysicsWorld::*)(const char *)>(&Urho3D::PhysicsWorld::reportErrorWarning) ;
    /*Draw a physics debug contact point. Not implemented.*//*(const btVector3 &pointOnB, const btVector3 &normalOnB, btScalar distance, int lifeTime, const btVector3 &color) override*/
    type["drawContactPoint"] = static_cast<void (Urho3D::PhysicsWorld::*)(const btVector3 &, const btVector3 &, btScalar, int, const btVector3 &)>(&Urho3D::PhysicsWorld::drawContactPoint) ;
    /*Draw physics debug 3D text. Not implemented.*//*(const btVector3 &location, const char *textString) override*/
    type["draw3dText"] = static_cast<void (Urho3D::PhysicsWorld::*)(const btVector3 &, const char *)>(&Urho3D::PhysicsWorld::draw3dText) ;
    /*Set debug draw flags.*//*(int debugMode) override*/
    type["setDebugMode"] = static_cast<void (Urho3D::PhysicsWorld::*)(int)>(&Urho3D::PhysicsWorld::setDebugMode) ;
    /*Return debug draw flags.*//*() const override*/
    type["getDebugMode"] = static_cast<int (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::getDebugMode) ;
    /*Step the simulation forward.*//*(float timeStep)*/
    type["Update"] = static_cast<void (Urho3D::PhysicsWorld::*)(float)>(&Urho3D::PhysicsWorld::Update) ;
    /*Refresh collisions only without updating dynamics.*//*()*/
    type["UpdateCollisions"] = static_cast<void (Urho3D::PhysicsWorld::*)()>(&Urho3D::PhysicsWorld::UpdateCollisions) ;
    /*Set simulation substeps per second. BIND_AS_PROPERTY*//*(int fps)*/
    type["SetFps"] = static_cast<void (Urho3D::PhysicsWorld::*)(int)>(&Urho3D::PhysicsWorld::SetFps) ;
    /*Set gravity. BIND_AS_PROPERTY*//*(const Vector3 &gravity)*/
    type["SetGravity"] = static_cast<void (Urho3D::PhysicsWorld::*)(const  Vector3 &)>(&Urho3D::PhysicsWorld::SetGravity) ;
    /*Set maximum number of physics substeps per frame. 0 (default) is unlimited. Positive values cap the amount. Use a negative value to enable an adaptive timestep. This may cause inconsistent physics behavior. BIND_AS_PROPERTY*//*(int num)*/
    type["SetMaxSubSteps"] = static_cast<void (Urho3D::PhysicsWorld::*)(int)>(&Urho3D::PhysicsWorld::SetMaxSubSteps) ;
    /*Set number of constraint solver iterations. BIND_AS_PROPERTY*//*(int num)*/
    type["SetNumIterations"] = static_cast<void (Urho3D::PhysicsWorld::*)(int)>(&Urho3D::PhysicsWorld::SetNumIterations) ;
    /*Enable or disable automatic physics simulation during scene update. Enabled by default. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetUpdateEnabled"] = static_cast<void (Urho3D::PhysicsWorld::*)(bool)>(&Urho3D::PhysicsWorld::SetUpdateEnabled) ;
    /*Set whether to interpolate between simulation steps. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetInterpolation"] = static_cast<void (Urho3D::PhysicsWorld::*)(bool)>(&Urho3D::PhysicsWorld::SetInterpolation) ;
    /*Set whether to use Bullet's internal edge utility for trimesh collisions. Disabled by default. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetInternalEdge"] = static_cast<void (Urho3D::PhysicsWorld::*)(bool)>(&Urho3D::PhysicsWorld::SetInternalEdge) ;
    /*Set split impulse collision mode. This is more accurate, but slower. Disabled by default. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetSplitImpulse"] = static_cast<void (Urho3D::PhysicsWorld::*)(bool)>(&Urho3D::PhysicsWorld::SetSplitImpulse) ;
    /*Set maximum angular velocity for network replication.*//*(float velocity)*/
    type["SetMaxNetworkAngularVelocity"] = static_cast<void (Urho3D::PhysicsWorld::*)(float)>(&Urho3D::PhysicsWorld::SetMaxNetworkAngularVelocity) ;
    /*Invalidate cached collision geometry for a model.*//*(Model *model)*/
    type["RemoveCachedGeometry"] = static_cast<void (Urho3D::PhysicsWorld::*)(Model *)>(&Urho3D::PhysicsWorld::RemoveCachedGeometry) ;
    /*Return rigid bodies that have been in collision with the specified body on the last simulation step. Only returns collisions that were sent as events (depends on collision event mode) and excludes e.g. static-static collisions.*//*(PODVector< RigidBody * > &result, const RigidBody *body)*/
    type["GetCollidingBodies"] = static_cast<void (Urho3D::PhysicsWorld::*)(PODVector<  RigidBody * > &, const  RigidBody *)>(&Urho3D::PhysicsWorld::GetCollidingBodies) ;
    /*Return gravity. BIND_AS_PROPERTY*//*() const*/
    type["GetGravity"] = static_cast<Vector3 (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::GetGravity) ;
    /*Return maximum number of physics substeps per frame. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxSubSteps"] = static_cast<int (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::GetMaxSubSteps) ;
    /*Return number of constraint solver iterations. BIND_AS_PROPERTY*//*() const*/
    type["GetNumIterations"] = static_cast<int (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::GetNumIterations) ;
    /*Return whether physics world will automatically simulate during scene update. BIND_AS_PROPERTY*//*() const*/
    type["IsUpdateEnabled"] = static_cast<bool (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::IsUpdateEnabled) ;
    /*Return whether interpolation between simulation steps is enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetInterpolation"] = static_cast<bool (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::GetInterpolation) ;
    /*Return whether Bullet's internal edge utility for trimesh collisions is enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetInternalEdge"] = static_cast<bool (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::GetInternalEdge) ;
    /*Return whether split impulse collision mode is enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetSplitImpulse"] = static_cast<bool (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::GetSplitImpulse) ;
    /*Return simulation steps per second. BIND_AS_PROPERTY*//*() const*/
    type["GetFps"] = static_cast<int (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::GetFps) ;
    /*Return maximum angular velocity for network replication.*//*() const*/
    type["GetMaxNetworkAngularVelocity"] = static_cast<float (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::GetMaxNetworkAngularVelocity) ;
    /*Add a rigid body to keep track of. Called by  RigidBody.*//*(RigidBody *body)*/
    type["AddRigidBody"] = static_cast<void (Urho3D::PhysicsWorld::*)(RigidBody *)>(&Urho3D::PhysicsWorld::AddRigidBody) ;
    /*Remove a rigid body. Called by  RigidBody.*//*(RigidBody *body)*/
    type["RemoveRigidBody"] = static_cast<void (Urho3D::PhysicsWorld::*)(RigidBody *)>(&Urho3D::PhysicsWorld::RemoveRigidBody) ;
    /*Add a collision shape to keep track of. Called by  CollisionShape.*//*(CollisionShape *shape)*/
    type["AddCollisionShape"] = static_cast<void (Urho3D::PhysicsWorld::*)(CollisionShape *)>(&Urho3D::PhysicsWorld::AddCollisionShape) ;
    /*Remove a collision shape. Called by  CollisionShape.*//*(CollisionShape *shape)*/
    type["RemoveCollisionShape"] = static_cast<void (Urho3D::PhysicsWorld::*)(CollisionShape *)>(&Urho3D::PhysicsWorld::RemoveCollisionShape) ;
    /*Add a constraint to keep track of. Called by  Constraint.*//*(Constraint *constraint)*/
    type["AddConstraint"] = static_cast<void (Urho3D::PhysicsWorld::*)(Constraint *)>(&Urho3D::PhysicsWorld::AddConstraint) ;
    /*Remove a constraint. Called by  Constraint.*//*(Constraint *constraint)*/
    type["RemoveConstraint"] = static_cast<void (Urho3D::PhysicsWorld::*)(Constraint *)>(&Urho3D::PhysicsWorld::RemoveConstraint) ;
    /*Add a delayed world transform assignment. Called by  RigidBody.*//*(const DelayedWorldTransform &transform)*/
    type["AddDelayedWorldTransform"] = static_cast<void (Urho3D::PhysicsWorld::*)(const  DelayedWorldTransform &)>(&Urho3D::PhysicsWorld::AddDelayedWorldTransform) ;
    /*Set debug renderer to use. Called both by  PhysicsWorld itself and physics components.*//*(DebugRenderer *debug)*/
    type["SetDebugRenderer"] = static_cast<void (Urho3D::PhysicsWorld::*)(DebugRenderer *)>(&Urho3D::PhysicsWorld::SetDebugRenderer) ;
    /*Set debug geometry depth test mode. Called both by  PhysicsWorld itself and physics components.*//*(bool enable)*/
    type["SetDebugDepthTest"] = static_cast<void (Urho3D::PhysicsWorld::*)(bool)>(&Urho3D::PhysicsWorld::SetDebugDepthTest) ;
    /*Return the Bullet physics world.*//*()*/
    type["GetWorld"] = static_cast<btDiscreteDynamicsWorld* (Urho3D::PhysicsWorld::*)()>(&Urho3D::PhysicsWorld::GetWorld) ;
    /*Clean up the geometry cache.*//*()*/
    type["CleanupGeometryCache"] = static_cast<void (Urho3D::PhysicsWorld::*)()>(&Urho3D::PhysicsWorld::CleanupGeometryCache) ;
    /*Return trimesh collision geometry cache.*//*()*/
    type["GetTriMeshCache"] = static_cast<CollisionGeometryDataCache& (Urho3D::PhysicsWorld::*)()>(&Urho3D::PhysicsWorld::GetTriMeshCache) ;
    /*Return convex collision geometry cache.*//*()*/
    type["GetConvexCache"] = static_cast<CollisionGeometryDataCache& (Urho3D::PhysicsWorld::*)()>(&Urho3D::PhysicsWorld::GetConvexCache) ;
    /*Return GImpact trimesh collision geometry cache.*//*()*/
    type["GetGImpactTrimeshCache"] = static_cast<CollisionGeometryDataCache& (Urho3D::PhysicsWorld::*)()>(&Urho3D::PhysicsWorld::GetGImpactTrimeshCache) ;
    /*Set node dirtying to be disregarded.*//*(bool enable)*/
    type["SetApplyingTransforms"] = static_cast<void (Urho3D::PhysicsWorld::*)(bool)>(&Urho3D::PhysicsWorld::SetApplyingTransforms) ;
    /*Return whether node dirtying should be disregarded.*//*() const*/
    type["IsApplyingTransforms"] = static_cast<bool (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::IsApplyingTransforms) ;
    /*Return whether is currently inside the Bullet substep loop.*//*() const*/
    type["IsSimulating"] = static_cast<bool (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::IsSimulating) ;
    type["DrawDebugGeometry"] = sol::overload(
        static_cast<void (Urho3D::PhysicsWorld::*)(DebugRenderer *, bool)>(&Urho3D::PhysicsWorld::DrawDebugGeometry) ,
        static_cast<void (Urho3D::PhysicsWorld::*)(bool)>(&Urho3D::PhysicsWorld::DrawDebugGeometry)  );
    type["Raycast"] = sol::overload(
        static_cast<void (Urho3D::PhysicsWorld::*)(PODVector<  PhysicsRaycastResult > &, const  Ray &, float, unsigned)>(&Urho3D::PhysicsWorld::Raycast) ,
        [](Urho3D::PhysicsWorld& self, PODVector<  PhysicsRaycastResult > & result, const  Ray & ray, float maxDistance){ self.Raycast(result, ray, maxDistance); } );
    type["RaycastSingle"] = sol::overload(
        static_cast<void (Urho3D::PhysicsWorld::*)(PhysicsRaycastResult &, const  Ray &, float, unsigned)>(&Urho3D::PhysicsWorld::RaycastSingle) ,
        [](Urho3D::PhysicsWorld& self, PhysicsRaycastResult & result, const  Ray & ray, float maxDistance){ self.RaycastSingle(result, ray, maxDistance); } );
    type["RaycastSingleSegmented"] = sol::overload(
        static_cast<void (Urho3D::PhysicsWorld::*)(PhysicsRaycastResult &, const  Ray &, float, float, unsigned, float)>(&Urho3D::PhysicsWorld::RaycastSingleSegmented) ,
        [](Urho3D::PhysicsWorld& self, PhysicsRaycastResult & result, const  Ray & ray, float maxDistance, float segmentDistance, unsigned collisionMask){ self.RaycastSingleSegmented(result, ray, maxDistance, segmentDistance, collisionMask); },
        [](Urho3D::PhysicsWorld& self, PhysicsRaycastResult & result, const  Ray & ray, float maxDistance, float segmentDistance){ self.RaycastSingleSegmented(result, ray, maxDistance, segmentDistance); } );
    type["SphereCast"] = sol::overload(
        static_cast<void (Urho3D::PhysicsWorld::*)(PhysicsRaycastResult &, const  Ray &, float, float, unsigned)>(&Urho3D::PhysicsWorld::SphereCast) ,
        [](Urho3D::PhysicsWorld& self, PhysicsRaycastResult & result, const  Ray & ray, float radius, float maxDistance){ self.SphereCast(result, ray, radius, maxDistance); } );
    type["ConvexCast"] = sol::overload(
        static_cast<void (Urho3D::PhysicsWorld::*)(PhysicsRaycastResult &, CollisionShape *, const  Vector3 &, const  Quaternion &, const  Vector3 &, const  Quaternion &, unsigned)>(&Urho3D::PhysicsWorld::ConvexCast) ,
        [](Urho3D::PhysicsWorld& self, PhysicsRaycastResult & result, CollisionShape * shape, const  Vector3 & startPos, const  Quaternion & startRot, const  Vector3 & endPos, const  Quaternion & endRot){ self.ConvexCast(result, shape, startPos, startRot, endPos, endRot); },
        static_cast<void (Urho3D::PhysicsWorld::*)(PhysicsRaycastResult &, btCollisionShape *, const  Vector3 &, const  Quaternion &, const  Vector3 &, const  Quaternion &, unsigned)>(&Urho3D::PhysicsWorld::ConvexCast) ,
        [](Urho3D::PhysicsWorld& self, PhysicsRaycastResult & result, btCollisionShape * shape, const  Vector3 & startPos, const  Quaternion & startRot, const  Vector3 & endPos, const  Quaternion & endRot){ self.ConvexCast(result, shape, startPos, startRot, endPos, endRot); } );
    type["GetRigidBodies"] = sol::overload(
        static_cast<void (Urho3D::PhysicsWorld::*)(PODVector<  RigidBody * > &, const  Sphere &, unsigned)>(&Urho3D::PhysicsWorld::GetRigidBodies) ,
        [](Urho3D::PhysicsWorld& self, PODVector<  RigidBody * > & result, const  Sphere & sphere){ self.GetRigidBodies(result, sphere); },
        static_cast<void (Urho3D::PhysicsWorld::*)(PODVector<  RigidBody * > &, const  BoundingBox &, unsigned)>(&Urho3D::PhysicsWorld::GetRigidBodies) ,
        [](Urho3D::PhysicsWorld& self, PODVector<  RigidBody * > & result, const  BoundingBox & box){ self.GetRigidBodies(result, box); },
        static_cast<void (Urho3D::PhysicsWorld::*)(PODVector<  RigidBody * > &, const  RigidBody *)>(&Urho3D::PhysicsWorld::GetRigidBodies)  );
    type["fps"] = sol::property(static_cast<int (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::GetFps) 
        , static_cast<void (Urho3D::PhysicsWorld::*)(int)>(&Urho3D::PhysicsWorld::SetFps) );
    type["gravity"] = sol::property(static_cast<Vector3 (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::GetGravity) 
        , static_cast<void (Urho3D::PhysicsWorld::*)(const  Vector3 &)>(&Urho3D::PhysicsWorld::SetGravity) );
    type["internalEdge"] = sol::property(static_cast<bool (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::GetInternalEdge) 
        , static_cast<void (Urho3D::PhysicsWorld::*)(bool)>(&Urho3D::PhysicsWorld::SetInternalEdge) );
    type["interpolation"] = sol::property(static_cast<bool (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::GetInterpolation) 
        , static_cast<void (Urho3D::PhysicsWorld::*)(bool)>(&Urho3D::PhysicsWorld::SetInterpolation) );
    type["maxSubSteps"] = sol::property(static_cast<int (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::GetMaxSubSteps) 
        , static_cast<void (Urho3D::PhysicsWorld::*)(int)>(&Urho3D::PhysicsWorld::SetMaxSubSteps) );
    type["numIterations"] = sol::property(static_cast<int (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::GetNumIterations) 
        , static_cast<void (Urho3D::PhysicsWorld::*)(int)>(&Urho3D::PhysicsWorld::SetNumIterations) );
    type["splitImpulse"] = sol::property(static_cast<bool (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::GetSplitImpulse) 
        , static_cast<void (Urho3D::PhysicsWorld::*)(bool)>(&Urho3D::PhysicsWorld::SetSplitImpulse) );
    type["updateEnabled"] = sol::property(static_cast<bool (Urho3D::PhysicsWorld::*)() const>(&Urho3D::PhysicsWorld::IsUpdateEnabled) 
        , static_cast<void (Urho3D::PhysicsWorld::*)(bool)>(&Urho3D::PhysicsWorld::SetUpdateEnabled) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics/PhysicsWorld.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics/PhysicsWorld.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Physics/RigidBody.h>
#include <BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h>
#include <BulletCollision/CollisionDispatch/btCollisionConfiguration.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_DelayedWorldTransform(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::DelayedWorldTransform>( "DelayedWorldTransform"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["rigidBody_"] = &Urho3D::DelayedWorldTransform::rigidBody_;
    type["parentRigidBody_"] = &Urho3D::DelayedWorldTransform::parentRigidBody_;
    type["worldPosition_"] = &Urho3D::DelayedWorldTransform::worldPosition_;
    type["worldRotation_"] = &Urho3D::DelayedWorldTransform::worldRotation_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics/PhysicsWorld.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics/PhysicsWorld.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Physics/PhysicsWorld.h>
#include <Urho3D/Physics/RigidBody.h>
#include <BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h>
#include <BulletCollision/CollisionDispatch/btCollisionConfiguration.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_PhysicsRaycastResult(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::PhysicsRaycastResult>( "PhysicsRaycastResult"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    /*Test for inequality, added to prevent GCC from complaining.*//*(const PhysicsRaycastResult &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::PhysicsRaycastResult::*)(const  PhysicsRaycastResult &) const>(&Urho3D::PhysicsRaycastResult::operator!=) ;
    type["position_"] = &Urho3D::PhysicsRaycastResult::position_;
    type["normal_"] = &Urho3D::PhysicsRaycastResult::normal_;
    type["distance_"] = &Urho3D::PhysicsRaycastResult::distance_;
    type["hitFraction_"] = &Urho3D::PhysicsRaycastResult::hitFraction_;
    type["body_"] = &Urho3D::PhysicsRaycastResult::body_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics/PhysicsWorld.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics/PhysicsWorld.h>
#include <BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h>
#include <BulletCollision/CollisionDispatch/btCollisionConfiguration.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ManifoldPair(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ManifoldPair>( "ManifoldPair"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::ManifoldPair()>();

// Members

    type["manifold_"] = &Urho3D::ManifoldPair::manifold_;
    type["flippedManifold_"] = &Urho3D::ManifoldPair::flippedManifold_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics/PhysicsWorld.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics/PhysicsWorld.h>
#include <BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h>
#include <BulletCollision/CollisionDispatch/btCollisionConfiguration.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_PhysicsWorldConfig(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::PhysicsWorldConfig>( "PhysicsWorldConfig"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::PhysicsWorldConfig()>();

// Members

    type["collisionConfig_"] = &Urho3D::PhysicsWorldConfig::collisionConfig_;

}

