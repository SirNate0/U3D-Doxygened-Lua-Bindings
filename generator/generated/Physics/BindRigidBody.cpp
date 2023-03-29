
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics/RigidBody.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics/RigidBody.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/IO/VectorBuffer.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Physics/Constraint.h>
#include <Urho3D/Physics/PhysicsWorld.h>
#include <Urho3D/Physics/RigidBody.h>
#include <Urho3D/Scene/Component.h>
#include <BulletDynamics/Dynamics/btRigidBody.h>
#include <BulletCollision/CollisionShapes/btCompoundShape.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_RigidBody(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::RigidBody::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::RigidBody::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::RigidBody>((Urho3D::RigidBody*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::RigidBody>( "RigidBody"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted,btMotionState>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::RigidBody>(context);
        });

// Members

    /*Apply attribute changes that can not be applied immediately. Called after scene load or a network update.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::RigidBody::*)()>(&Urho3D::RigidBody::ApplyAttributes) ;
    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::RigidBody::*)()>(&Urho3D::RigidBody::OnSetEnabled) ;
#if 0 // INVALID: NoBind!
    /*Return initial world transform to Bullet. NO_BIND*//*(btTransform &worldTrans) const override*/
    type["getWorldTransform"] = static_cast<void (Urho3D::RigidBody::*)(btTransform &) const>(&Urho3D::RigidBody::getWorldTransform) ;
#endif
        
#if 0 // INVALID: NoBind!
    /*Update world transform from Bullet. NO_BIND*//*(const btTransform &worldTrans) override*/
    type["setWorldTransform"] = static_cast<void (Urho3D::RigidBody::*)(const btTransform &)>(&Urho3D::RigidBody::setWorldTransform) ;
#endif
        
    /*Visualize the component as debug geometry.*//*(DebugRenderer *debug, bool depthTest) override*/
    type["DrawDebugGeometry"] = static_cast<void (Urho3D::RigidBody::*)(DebugRenderer *, bool)>(&Urho3D::RigidBody::DrawDebugGeometry) ;
    /*Set mass. Zero mass makes the body static. BIND_AS_PROPERTY*//*(float mass)*/
    type["SetMass"] = static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetMass) ;
    /*Set rigid body position in world space. BIND_AS_PROPERTY*//*(const Vector3 &position)*/
    type["SetPosition"] = static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::SetPosition) ;
    /*Set rigid body rotation in world space. BIND_AS_PROPERTY*//*(const Quaternion &rotation)*/
    type["SetRotation"] = static_cast<void (Urho3D::RigidBody::*)(const  Quaternion &)>(&Urho3D::RigidBody::SetRotation) ;
    /*Set rigid body position and rotation in world space as an atomic operation.*//*(const Vector3 &position, const Quaternion &rotation)*/
    type["SetTransform"] = static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &, const  Quaternion &)>(&Urho3D::RigidBody::SetTransform) ;
    /*Set linear velocity. BIND_AS_PROPERTY*//*(const Vector3 &velocity)*/
    type["SetLinearVelocity"] = static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::SetLinearVelocity) ;
    /*Set linear degrees of freedom. Use 1 to enable an axis or 0 to disable. Default is all axes enabled (1, 1, 1). BIND_AS_PROPERTY*//*(const Vector3 &factor)*/
    type["SetLinearFactor"] = static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::SetLinearFactor) ;
    /*Set linear velocity deactivation threshold. BIND_AS_PROPERTY*//*(float threshold)*/
    type["SetLinearRestThreshold"] = static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetLinearRestThreshold) ;
    /*Set linear velocity damping factor. BIND_AS_PROPERTY*//*(float damping)*/
    type["SetLinearDamping"] = static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetLinearDamping) ;
    /*Set angular velocity. BIND_AS_PROPERTY*//*(const Vector3 &velocity)*/
    type["SetAngularVelocity"] = static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::SetAngularVelocity) ;
    /*Set angular degrees of freedom. Use 1 to enable an axis or 0 to disable. Default is all axes enabled (1, 1, 1). BIND_AS_PROPERTY*//*(const Vector3 &factor)*/
    type["SetAngularFactor"] = static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::SetAngularFactor) ;
    /*Set angular velocity deactivation threshold. BIND_AS_PROPERTY*//*(float threshold)*/
    type["SetAngularRestThreshold"] = static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetAngularRestThreshold) ;
    /*Set angular velocity damping factor. BIND_AS_PROPERTY*//*(float damping)*/
    type["SetAngularDamping"] = static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetAngularDamping) ;
    /*Set friction coefficient. BIND_AS_PROPERTY*//*(float friction)*/
    type["SetFriction"] = static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetFriction) ;
    /*Set anisotropic friction. BIND_AS_PROPERTY*//*(const Vector3 &friction)*/
    type["SetAnisotropicFriction"] = static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::SetAnisotropicFriction) ;
    /*Set rolling friction coefficient. BIND_AS_PROPERTY*//*(float friction)*/
    type["SetRollingFriction"] = static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetRollingFriction) ;
    /*Set restitution coefficient. BIND_AS_PROPERTY*//*(float restitution)*/
    type["SetRestitution"] = static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetRestitution) ;
    /*Set contact processing threshold. BIND_AS_PROPERTY*//*(float threshold)*/
    type["SetContactProcessingThreshold"] = static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetContactProcessingThreshold) ;
    /*Set continuous collision detection swept sphere radius. BIND_AS_PROPERTY*//*(float radius)*/
    type["SetCcdRadius"] = static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetCcdRadius) ;
    /*Set continuous collision detection motion-per-simulation-step threshold. 0 disables, which is the default. BIND_AS_PROPERTY*//*(float threshold)*/
    type["SetCcdMotionThreshold"] = static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetCcdMotionThreshold) ;
    /*Set whether gravity is applied to rigid body. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetUseGravity"] = static_cast<void (Urho3D::RigidBody::*)(bool)>(&Urho3D::RigidBody::SetUseGravity) ;
    /*Set gravity override. If zero, uses physics world's gravity. BIND_AS_PROPERTY*//*(const Vector3 &gravity)*/
    type["SetGravityOverride"] = static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::SetGravityOverride) ;
    /*Set rigid body kinematic mode. In kinematic mode forces are not applied to the rigid body. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetKinematic"] = static_cast<void (Urho3D::RigidBody::*)(bool)>(&Urho3D::RigidBody::SetKinematic) ;
    /*Set rigid body trigger mode. In trigger mode collisions are reported but do not apply forces. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetTrigger"] = static_cast<void (Urho3D::RigidBody::*)(bool)>(&Urho3D::RigidBody::SetTrigger) ;
    /*Set collision layer. BIND_AS_PROPERTY*//*(unsigned layer)*/
    type["SetCollisionLayer"] = static_cast<void (Urho3D::RigidBody::*)(unsigned)>(&Urho3D::RigidBody::SetCollisionLayer) ;
    /*Set collision mask. BIND_AS_PROPERTY*//*(unsigned mask)*/
    type["SetCollisionMask"] = static_cast<void (Urho3D::RigidBody::*)(unsigned)>(&Urho3D::RigidBody::SetCollisionMask) ;
    /*Set collision group and mask.*//*(unsigned layer, unsigned mask)*/
    type["SetCollisionLayerAndMask"] = static_cast<void (Urho3D::RigidBody::*)(unsigned, unsigned)>(&Urho3D::RigidBody::SetCollisionLayerAndMask) ;
    /*Set collision event signaling mode. Default is to signal when rigid bodies are active. BIND_AS_PROPERTY*//*(CollisionEventMode mode)*/
    type["SetCollisionEventMode"] = static_cast<void (Urho3D::RigidBody::*)(CollisionEventMode)>(&Urho3D::RigidBody::SetCollisionEventMode) ;
    /*Apply torque.*//*(const Vector3 &torque)*/
    type["ApplyTorque"] = static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::ApplyTorque) ;
    /*Apply torque impulse.*//*(const Vector3 &torque)*/
    type["ApplyTorqueImpulse"] = static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::ApplyTorqueImpulse) ;
    /*Reset accumulated forces.*//*()*/
    type["ResetForces"] = static_cast<void (Urho3D::RigidBody::*)()>(&Urho3D::RigidBody::ResetForces) ;
    /*Activate rigid body if it was resting.*//*()*/
    type["Activate"] = static_cast<void (Urho3D::RigidBody::*)()>(&Urho3D::RigidBody::Activate) ;
    /*Readd rigid body to the physics world to clean up internal state like stale contacts.*//*()*/
    type["ReAddBodyToWorld"] = static_cast<void (Urho3D::RigidBody::*)()>(&Urho3D::RigidBody::ReAddBodyToWorld) ;
    /*Disable mass update. Call this to optimize performance when adding or editing multiple collision shapes in the same node.*//*()*/
    type["DisableMassUpdate"] = static_cast<void (Urho3D::RigidBody::*)()>(&Urho3D::RigidBody::DisableMassUpdate) ;
    /*Re-enable mass update and recalculate the mass/inertia by calling  UpdateMass(). Call when collision shape changes are finished.*//*()*/
    type["EnableMassUpdate"] = static_cast<void (Urho3D::RigidBody::*)()>(&Urho3D::RigidBody::EnableMassUpdate) ;
    /*Return physics world.*//*() const*/
    type["GetPhysicsWorld"] = [](Urho3D::RigidBody& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetPhysicsWorld());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return Bullet rigid body.*//*() const*/
    type["GetBody"] = static_cast<btRigidBody* (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetBody) ;
    /*Return Bullet compound collision shape.*//*() const*/
    type["GetCompoundShape"] = static_cast<btCompoundShape* (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetCompoundShape) ;
    /*Return mass. BIND_AS_PROPERTY*//*() const*/
    type["GetMass"] = static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetMass) ;
    /*Return rigid body position in world space. BIND_AS_PROPERTY*//*() const*/
    type["GetPosition"] = static_cast<Vector3 (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetPosition) ;
    /*Return rigid body rotation in world space. BIND_AS_PROPERTY*//*() const*/
    type["GetRotation"] = static_cast<Quaternion (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetRotation) ;
    /*Return linear velocity. BIND_AS_PROPERTY*//*() const*/
    type["GetLinearVelocity"] = static_cast<Vector3 (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetLinearVelocity) ;
    /*Return linear degrees of freedom. BIND_AS_PROPERTY*//*() const*/
    type["GetLinearFactor"] = static_cast<Vector3 (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetLinearFactor) ;
    /*Return linear velocity at local point.*//*(const Vector3 &position) const*/
    type["GetVelocityAtPoint"] = static_cast<Vector3 (Urho3D::RigidBody::*)(const  Vector3 &) const>(&Urho3D::RigidBody::GetVelocityAtPoint) ;
    /*Return linear velocity deactivation threshold. BIND_AS_PROPERTY*//*() const*/
    type["GetLinearRestThreshold"] = static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetLinearRestThreshold) ;
    /*Return linear velocity damping factor. BIND_AS_PROPERTY*//*() const*/
    type["GetLinearDamping"] = static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetLinearDamping) ;
    /*Return angular velocity. BIND_AS_PROPERTY*//*() const*/
    type["GetAngularVelocity"] = static_cast<Vector3 (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetAngularVelocity) ;
    /*Return angular degrees of freedom. BIND_AS_PROPERTY*//*() const*/
    type["GetAngularFactor"] = static_cast<Vector3 (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetAngularFactor) ;
    /*Return angular velocity deactivation threshold. BIND_AS_PROPERTY*//*() const*/
    type["GetAngularRestThreshold"] = static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetAngularRestThreshold) ;
    /*Return angular velocity damping factor. BIND_AS_PROPERTY*//*() const*/
    type["GetAngularDamping"] = static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetAngularDamping) ;
    /*Return friction coefficient. BIND_AS_PROPERTY*//*() const*/
    type["GetFriction"] = static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetFriction) ;
    /*Return anisotropic friction. BIND_AS_PROPERTY*//*() const*/
    type["GetAnisotropicFriction"] = static_cast<Vector3 (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetAnisotropicFriction) ;
    /*Return rolling friction coefficient. BIND_AS_PROPERTY*//*() const*/
    type["GetRollingFriction"] = static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetRollingFriction) ;
    /*Return restitution coefficient. BIND_AS_PROPERTY*//*() const*/
    type["GetRestitution"] = static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetRestitution) ;
    /*Return contact processing threshold. BIND_AS_PROPERTY*//*() const*/
    type["GetContactProcessingThreshold"] = static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetContactProcessingThreshold) ;
    /*Return continuous collision detection swept sphere radius. BIND_AS_PROPERTY*//*() const*/
    type["GetCcdRadius"] = static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetCcdRadius) ;
    /*Return continuous collision detection motion-per-simulation-step threshold. BIND_AS_PROPERTY*//*() const*/
    type["GetCcdMotionThreshold"] = static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetCcdMotionThreshold) ;
    /*Return whether rigid body uses gravity. BIND_AS_PROPERTY*//*() const*/
    type["GetUseGravity"] = static_cast<bool (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetUseGravity) ;
    /*Return gravity override. If zero (default), uses the physics world's gravity. BIND_AS_PROPERTY*//*() const*/
    type["GetGravityOverride"] = static_cast<const Vector3& (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetGravityOverride) ;
    /*Return center of mass offset. BIND_AS_PROPERTY*//*() const*/
    type["GetCenterOfMass"] = static_cast<const Vector3& (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetCenterOfMass) ;
    /*Return kinematic mode flag. BIND_AS_PROPERTY*//*() const*/
    type["IsKinematic"] = static_cast<bool (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::IsKinematic) ;
    /*Return whether this  RigidBody is acting as a trigger. BIND_AS_PROPERTY*//*() const*/
    type["IsTrigger"] = static_cast<bool (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::IsTrigger) ;
    /*Return whether rigid body is active (not sleeping). BIND_AS_PROPERTY*//*() const*/
    type["IsActive"] = static_cast<bool (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::IsActive) ;
    /*Return collision layer. BIND_AS_PROPERTY*//*() const*/
    type["GetCollisionLayer"] = static_cast<unsigned (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetCollisionLayer) ;
    /*Return collision mask. BIND_AS_PROPERTY*//*() const*/
    type["GetCollisionMask"] = static_cast<unsigned (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetCollisionMask) ;
    /*Return collision event signaling mode. BIND_AS_PROPERTY*//*() const*/
    type["GetCollisionEventMode"] = static_cast<CollisionEventMode (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetCollisionEventMode) ;
    /*Return colliding rigid bodies from the last simulation step. Only returns collisions that were sent as events (depends on collision event mode) and excludes e.g. static-static collisions.*//*(PODVector< RigidBody * > &result) const*/
    type["GetCollidingBodies"] = static_cast<void (Urho3D::RigidBody::*)(PODVector<  RigidBody * > &) const>(&Urho3D::RigidBody::GetCollidingBodies) ;
    /*Apply new world transform after a simulation step. Called internally.*//*(const Vector3 &newWorldPosition, const Quaternion &newWorldRotation)*/
    type["ApplyWorldTransform"] = static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &, const  Quaternion &)>(&Urho3D::RigidBody::ApplyWorldTransform) ;
    /*Update mass and inertia to the Bullet rigid body. Readd body to world if necessary: if was in world and the Bullet collision shape to use changed.*//*()*/
    type["UpdateMass"] = static_cast<void (Urho3D::RigidBody::*)()>(&Urho3D::RigidBody::UpdateMass) ;
    /*Update gravity parameters to the Bullet rigid body.*//*()*/
    type["UpdateGravity"] = static_cast<void (Urho3D::RigidBody::*)()>(&Urho3D::RigidBody::UpdateGravity) ;
    /*Set network angular velocity attribute.*//*(const PODVector< unsigned char > &value)*/
    type["SetNetAngularVelocityAttr"] = static_cast<void (Urho3D::RigidBody::*)(const  PODVector< unsigned char > &)>(&Urho3D::RigidBody::SetNetAngularVelocityAttr) ;
    /*Return network angular velocity attribute.*//*() const*/
    type["GetNetAngularVelocityAttr"] = static_cast<const PODVector<unsigned char>& (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetNetAngularVelocityAttr) ;
    /*Add a constraint that refers to this rigid body.*//*(Constraint *constraint)*/
    type["AddConstraint"] = static_cast<void (Urho3D::RigidBody::*)(Constraint *)>(&Urho3D::RigidBody::AddConstraint) ;
    /*Remove a constraint that refers to this rigid body.*//*(Constraint *constraint)*/
    type["RemoveConstraint"] = static_cast<void (Urho3D::RigidBody::*)(Constraint *)>(&Urho3D::RigidBody::RemoveConstraint) ;
    /*Remove the rigid body.*//*()*/
    type["ReleaseBody"] = static_cast<void (Urho3D::RigidBody::*)()>(&Urho3D::RigidBody::ReleaseBody) ;
    type["ApplyForce"] = sol::overload(
        static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::ApplyForce) ,
        static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &, const  Vector3 &)>(&Urho3D::RigidBody::ApplyForce)  );
    type["ApplyImpulse"] = sol::overload(
        static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::ApplyImpulse) ,
        static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &, const  Vector3 &)>(&Urho3D::RigidBody::ApplyImpulse)  );
    type["active"] = sol::property(static_cast<bool (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::IsActive) );
    type["angularDamping"] = sol::property(static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetAngularDamping) 
        , static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetAngularDamping) );
    type["angularFactor"] = sol::property(static_cast<Vector3 (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetAngularFactor) 
        , static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::SetAngularFactor) );
    type["angularRestThreshold"] = sol::property(static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetAngularRestThreshold) 
        , static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetAngularRestThreshold) );
    type["angularVelocity"] = sol::property(static_cast<Vector3 (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetAngularVelocity) 
        , static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::SetAngularVelocity) );
    type["anisotropicFriction"] = sol::property(static_cast<Vector3 (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetAnisotropicFriction) 
        , static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::SetAnisotropicFriction) );
    type["ccdMotionThreshold"] = sol::property(static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetCcdMotionThreshold) 
        , static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetCcdMotionThreshold) );
    type["ccdRadius"] = sol::property(static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetCcdRadius) 
        , static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetCcdRadius) );
    type["centerOfMass"] = sol::property(static_cast<const Vector3& (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetCenterOfMass) );
    type["collisionEventMode"] = sol::property(static_cast<CollisionEventMode (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetCollisionEventMode) 
        , static_cast<void (Urho3D::RigidBody::*)(CollisionEventMode)>(&Urho3D::RigidBody::SetCollisionEventMode) );
    type["collisionLayer"] = sol::property(static_cast<unsigned (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetCollisionLayer) 
        , static_cast<void (Urho3D::RigidBody::*)(unsigned)>(&Urho3D::RigidBody::SetCollisionLayer) );
    type["collisionMask"] = sol::property(static_cast<unsigned (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetCollisionMask) 
        , static_cast<void (Urho3D::RigidBody::*)(unsigned)>(&Urho3D::RigidBody::SetCollisionMask) );
    type["contactProcessingThreshold"] = sol::property(static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetContactProcessingThreshold) 
        , static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetContactProcessingThreshold) );
    type["friction"] = sol::property(static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetFriction) 
        , static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetFriction) );
    type["gravityOverride"] = sol::property(static_cast<const Vector3& (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetGravityOverride) 
        , static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::SetGravityOverride) );
    type["kinematic"] = sol::property(static_cast<bool (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::IsKinematic) 
        , static_cast<void (Urho3D::RigidBody::*)(bool)>(&Urho3D::RigidBody::SetKinematic) );
    type["linearDamping"] = sol::property(static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetLinearDamping) 
        , static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetLinearDamping) );
    type["linearFactor"] = sol::property(static_cast<Vector3 (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetLinearFactor) 
        , static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::SetLinearFactor) );
    type["linearRestThreshold"] = sol::property(static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetLinearRestThreshold) 
        , static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetLinearRestThreshold) );
    type["linearVelocity"] = sol::property(static_cast<Vector3 (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetLinearVelocity) 
        , static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::SetLinearVelocity) );
    type["mass"] = sol::property(static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetMass) 
        , static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetMass) );
    type["position"] = sol::property(static_cast<Vector3 (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetPosition) 
        , static_cast<void (Urho3D::RigidBody::*)(const  Vector3 &)>(&Urho3D::RigidBody::SetPosition) );
    type["restitution"] = sol::property(static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetRestitution) 
        , static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetRestitution) );
    type["rollingFriction"] = sol::property(static_cast<float (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetRollingFriction) 
        , static_cast<void (Urho3D::RigidBody::*)(float)>(&Urho3D::RigidBody::SetRollingFriction) );
    type["rotation"] = sol::property(static_cast<Quaternion (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetRotation) 
        , static_cast<void (Urho3D::RigidBody::*)(const  Quaternion &)>(&Urho3D::RigidBody::SetRotation) );
    type["trigger"] = sol::property(static_cast<bool (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::IsTrigger) 
        , static_cast<void (Urho3D::RigidBody::*)(bool)>(&Urho3D::RigidBody::SetTrigger) );
    type["useGravity"] = sol::property(static_cast<bool (Urho3D::RigidBody::*)() const>(&Urho3D::RigidBody::GetUseGravity) 
        , static_cast<void (Urho3D::RigidBody::*)(bool)>(&Urho3D::RigidBody::SetUseGravity) );

}

