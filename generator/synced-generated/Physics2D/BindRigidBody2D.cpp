
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/RigidBody2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/RigidBody2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Physics2D/CollisionShape2D.h>
#include <Urho3D/Physics2D/Constraint2D.h>
#include <Urho3D/Scene/Component.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_RigidBody2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::RigidBody2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::RigidBody2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::RigidBody2D>((Urho3D::RigidBody2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::RigidBody2D>( "RigidBody2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::RigidBody2D>(context);
        });

// Members

    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::RigidBody2D::*)()>(&Urho3D::RigidBody2D::OnSetEnabled) ;
    /*Set body type. BIND_AS_PROPERTY*//*(BodyType2D type)*/
    type["SetBodyType"] = static_cast<void (Urho3D::RigidBody2D::*)(BodyType2D)>(&Urho3D::RigidBody2D::SetBodyType) ;
    /*Set mass. BIND_AS_PROPERTY*//*(float mass)*/
    type["SetMass"] = static_cast<void (Urho3D::RigidBody2D::*)(float)>(&Urho3D::RigidBody2D::SetMass) ;
    /*Set inertia. BIND_AS_PROPERTY*//*(float inertia)*/
    type["SetInertia"] = static_cast<void (Urho3D::RigidBody2D::*)(float)>(&Urho3D::RigidBody2D::SetInertia) ;
    /*Set mass center. BIND_AS_PROPERTY*//*(const Vector2 &center)*/
    type["SetMassCenter"] = static_cast<void (Urho3D::RigidBody2D::*)(const  Vector2 &)>(&Urho3D::RigidBody2D::SetMassCenter) ;
    /*Set whether to automatically calculate mass and inertia from collision shapes. Default true. BIND_AS_PROPERTY*//*(bool useFixtureMass)*/
    type["SetUseFixtureMass"] = static_cast<void (Urho3D::RigidBody2D::*)(bool)>(&Urho3D::RigidBody2D::SetUseFixtureMass) ;
    /*Set linear damping. BIND_AS_PROPERTY*//*(float linearDamping)*/
    type["SetLinearDamping"] = static_cast<void (Urho3D::RigidBody2D::*)(float)>(&Urho3D::RigidBody2D::SetLinearDamping) ;
    /*Set angular damping. BIND_AS_PROPERTY*//*(float angularDamping)*/
    type["SetAngularDamping"] = static_cast<void (Urho3D::RigidBody2D::*)(float)>(&Urho3D::RigidBody2D::SetAngularDamping) ;
    /*Set allow sleep. BIND_AS_PROPERTY*//*(bool allowSleep)*/
    type["SetAllowSleep"] = static_cast<void (Urho3D::RigidBody2D::*)(bool)>(&Urho3D::RigidBody2D::SetAllowSleep) ;
    /*Set fixed rotation. BIND_AS_PROPERTY*//*(bool fixedRotation)*/
    type["SetFixedRotation"] = static_cast<void (Urho3D::RigidBody2D::*)(bool)>(&Urho3D::RigidBody2D::SetFixedRotation) ;
    /*Set bullet mode. BIND_AS_PROPERTY*//*(bool bullet)*/
    type["SetBullet"] = static_cast<void (Urho3D::RigidBody2D::*)(bool)>(&Urho3D::RigidBody2D::SetBullet) ;
    /*Set gravity scale. BIND_AS_PROPERTY*//*(float gravityScale)*/
    type["SetGravityScale"] = static_cast<void (Urho3D::RigidBody2D::*)(float)>(&Urho3D::RigidBody2D::SetGravityScale) ;
    /*Set awake. BIND_AS_PROPERTY*//*(bool awake)*/
    type["SetAwake"] = static_cast<void (Urho3D::RigidBody2D::*)(bool)>(&Urho3D::RigidBody2D::SetAwake) ;
    /*Set linear velocity. BIND_AS_PROPERTY*//*(const Vector2 &linearVelocity)*/
    type["SetLinearVelocity"] = static_cast<void (Urho3D::RigidBody2D::*)(const  Vector2 &)>(&Urho3D::RigidBody2D::SetLinearVelocity) ;
    /*Set angular velocity.*//*(float angularVelocity)*/
    type["SetAngularVelocity"] = static_cast<void (Urho3D::RigidBody2D::*)(float)>(&Urho3D::RigidBody2D::SetAngularVelocity) ;
    /*Apply force.*//*(const Vector2 &force, const Vector2 &point, bool wake)*/
    type["ApplyForce"] = static_cast<void (Urho3D::RigidBody2D::*)(const  Vector2 &, const  Vector2 &, bool)>(&Urho3D::RigidBody2D::ApplyForce) ;
    /*Apply force to center.*//*(const Vector2 &force, bool wake)*/
    type["ApplyForceToCenter"] = static_cast<void (Urho3D::RigidBody2D::*)(const  Vector2 &, bool)>(&Urho3D::RigidBody2D::ApplyForceToCenter) ;
    /*Apply Torque.*//*(float torque, bool wake)*/
    type["ApplyTorque"] = static_cast<void (Urho3D::RigidBody2D::*)(float, bool)>(&Urho3D::RigidBody2D::ApplyTorque) ;
    /*Apply linear impulse.*//*(const Vector2 &impulse, const Vector2 &point, bool wake)*/
    type["ApplyLinearImpulse"] = static_cast<void (Urho3D::RigidBody2D::*)(const  Vector2 &, const  Vector2 &, bool)>(&Urho3D::RigidBody2D::ApplyLinearImpulse) ;
    /*Apply linear impulse to center.*//*(const Vector2 &impulse, bool wake)*/
    type["ApplyLinearImpulseToCenter"] = static_cast<void (Urho3D::RigidBody2D::*)(const  Vector2 &, bool)>(&Urho3D::RigidBody2D::ApplyLinearImpulseToCenter) ;
    /*Apply angular impulse.*//*(float impulse, bool wake)*/
    type["ApplyAngularImpulse"] = static_cast<void (Urho3D::RigidBody2D::*)(float, bool)>(&Urho3D::RigidBody2D::ApplyAngularImpulse) ;
    /*Create body.*//*()*/
    type["CreateBody"] = static_cast<void (Urho3D::RigidBody2D::*)()>(&Urho3D::RigidBody2D::CreateBody) ;
    /*Release body.*//*()*/
    type["ReleaseBody"] = static_cast<void (Urho3D::RigidBody2D::*)()>(&Urho3D::RigidBody2D::ReleaseBody) ;
    /*Add collision shape.*//*(CollisionShape2D *collisionShape)*/
    type["AddCollisionShape2D"] = static_cast<void (Urho3D::RigidBody2D::*)(CollisionShape2D *)>(&Urho3D::RigidBody2D::AddCollisionShape2D) ;
    /*Remove collision shape.*//*(CollisionShape2D *collisionShape)*/
    type["RemoveCollisionShape2D"] = static_cast<void (Urho3D::RigidBody2D::*)(CollisionShape2D *)>(&Urho3D::RigidBody2D::RemoveCollisionShape2D) ;
    /*Add constraint.*//*(Constraint2D *constraint)*/
    type["AddConstraint2D"] = static_cast<void (Urho3D::RigidBody2D::*)(Constraint2D *)>(&Urho3D::RigidBody2D::AddConstraint2D) ;
    /*Remove constraint.*//*(Constraint2D *constraint)*/
    type["RemoveConstraint2D"] = static_cast<void (Urho3D::RigidBody2D::*)(Constraint2D *)>(&Urho3D::RigidBody2D::RemoveConstraint2D) ;
    /*Return body type. BIND_AS_PROPERTY*//*() const*/
    type["GetBodyType"] = static_cast<BodyType2D (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetBodyType) ;
    /*Return mass. BIND_AS_PROPERTY*//*() const*/
    type["GetMass"] = static_cast<float (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetMass) ;
    /*Return inertia. BIND_AS_PROPERTY*//*() const*/
    type["GetInertia"] = static_cast<float (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetInertia) ;
    /*Return mass center. BIND_AS_PROPERTY*//*() const*/
    type["GetMassCenter"] = static_cast<Vector2 (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetMassCenter) ;
    /*Return whether to calculate mass and inertia from collision shapes automatically. BIND_AS_PROPERTY*//*() const*/
    type["GetUseFixtureMass"] = static_cast<bool (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetUseFixtureMass) ;
    /*Return linear damping. BIND_AS_PROPERTY*//*() const*/
    type["GetLinearDamping"] = static_cast<float (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetLinearDamping) ;
    /*Return angular damping. BIND_AS_PROPERTY*//*() const*/
    type["GetAngularDamping"] = static_cast<float (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetAngularDamping) ;
    /*Return allow sleep. BIND_AS_PROPERTY*//*() const*/
    type["IsAllowSleep"] = static_cast<bool (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::IsAllowSleep) ;
    /*Return fixed rotation. BIND_AS_PROPERTY*//*() const*/
    type["IsFixedRotation"] = static_cast<bool (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::IsFixedRotation) ;
    /*Return bullet mode. BIND_AS_PROPERTY*//*() const*/
    type["IsBullet"] = static_cast<bool (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::IsBullet) ;
    /*Return gravity scale. BIND_AS_PROPERTY*//*() const*/
    type["GetGravityScale"] = static_cast<float (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetGravityScale) ;
    /*Return awake. BIND_AS_PROPERTY*//*() const*/
    type["IsAwake"] = static_cast<bool (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::IsAwake) ;
    /*Return linear velocity. BIND_AS_PROPERTY*//*() const*/
    type["GetLinearVelocity"] = static_cast<Vector2 (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetLinearVelocity) ;
    /*Return angular velocity.*//*() const*/
    type["GetAngularVelocity"] = static_cast<float (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetAngularVelocity) ;
    /*Return Box2D body.*//*() const*/
    type["GetBody"] = static_cast<b2Body* (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetBody) ;
    type["ApplyWorldTransform"] = sol::overload(
        static_cast<void (Urho3D::RigidBody2D::*)()>(&Urho3D::RigidBody2D::ApplyWorldTransform) ,
        static_cast<void (Urho3D::RigidBody2D::*)(const  Vector3 &, const  Quaternion &)>(&Urho3D::RigidBody2D::ApplyWorldTransform)  );
    type["allowSleep"] = sol::property(static_cast<bool (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::IsAllowSleep) 
        , static_cast<void (Urho3D::RigidBody2D::*)(bool)>(&Urho3D::RigidBody2D::SetAllowSleep) );
    type["angularDamping"] = sol::property(static_cast<float (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetAngularDamping) 
        , static_cast<void (Urho3D::RigidBody2D::*)(float)>(&Urho3D::RigidBody2D::SetAngularDamping) );
    type["awake"] = sol::property(static_cast<bool (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::IsAwake) 
        , static_cast<void (Urho3D::RigidBody2D::*)(bool)>(&Urho3D::RigidBody2D::SetAwake) );
    type["bodyType"] = sol::property(static_cast<BodyType2D (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetBodyType) 
        , static_cast<void (Urho3D::RigidBody2D::*)(BodyType2D)>(&Urho3D::RigidBody2D::SetBodyType) );
    type["bullet"] = sol::property(static_cast<bool (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::IsBullet) 
        , static_cast<void (Urho3D::RigidBody2D::*)(bool)>(&Urho3D::RigidBody2D::SetBullet) );
    type["fixedRotation"] = sol::property(static_cast<bool (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::IsFixedRotation) 
        , static_cast<void (Urho3D::RigidBody2D::*)(bool)>(&Urho3D::RigidBody2D::SetFixedRotation) );
    type["gravityScale"] = sol::property(static_cast<float (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetGravityScale) 
        , static_cast<void (Urho3D::RigidBody2D::*)(float)>(&Urho3D::RigidBody2D::SetGravityScale) );
    type["inertia"] = sol::property(static_cast<float (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetInertia) 
        , static_cast<void (Urho3D::RigidBody2D::*)(float)>(&Urho3D::RigidBody2D::SetInertia) );
    type["linearDamping"] = sol::property(static_cast<float (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetLinearDamping) 
        , static_cast<void (Urho3D::RigidBody2D::*)(float)>(&Urho3D::RigidBody2D::SetLinearDamping) );
    type["linearVelocity"] = sol::property(static_cast<Vector2 (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetLinearVelocity) 
        , static_cast<void (Urho3D::RigidBody2D::*)(const  Vector2 &)>(&Urho3D::RigidBody2D::SetLinearVelocity) );
    type["mass"] = sol::property(static_cast<float (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetMass) 
        , static_cast<void (Urho3D::RigidBody2D::*)(float)>(&Urho3D::RigidBody2D::SetMass) );
    type["massCenter"] = sol::property(static_cast<Vector2 (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetMassCenter) 
        , static_cast<void (Urho3D::RigidBody2D::*)(const  Vector2 &)>(&Urho3D::RigidBody2D::SetMassCenter) );
    type["useFixtureMass"] = sol::property(static_cast<bool (Urho3D::RigidBody2D::*)() const>(&Urho3D::RigidBody2D::GetUseFixtureMass) 
        , static_cast<void (Urho3D::RigidBody2D::*)(bool)>(&Urho3D::RigidBody2D::SetUseFixtureMass) );

}

