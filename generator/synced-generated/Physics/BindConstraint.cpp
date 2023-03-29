
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics/Constraint.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics/Constraint.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Physics/PhysicsWorld.h>
#include <Urho3D/Physics/RigidBody.h>
#include <Urho3D/Scene/Component.h>
#include <Urho3D/Scene/Node.h>
#include <BulletDynamics/ConstraintSolver/btTypedConstraint.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Constraint(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Constraint::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Constraint::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Constraint>((Urho3D::Constraint*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Constraint>( "Constraint"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Constraint>(context);
        });

// Members

    /*Apply attribute changes that can not be applied immediately. Called after scene load or a network update.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::Constraint::*)()>(&Urho3D::Constraint::ApplyAttributes) ;
    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::Constraint::*)()>(&Urho3D::Constraint::OnSetEnabled) ;
    /*Return the depended on nodes to order network updates.*//*(PODVector< Node * > &dest) override*/
    type["GetDependencyNodes"] = static_cast<void (Urho3D::Constraint::*)(PODVector<  Node * > &)>(&Urho3D::Constraint::GetDependencyNodes) ;
    /*Visualize the component as debug geometry.*//*(DebugRenderer *debug, bool depthTest) override*/
    type["DrawDebugGeometry"] = static_cast<void (Urho3D::Constraint::*)(DebugRenderer *, bool)>(&Urho3D::Constraint::DrawDebugGeometry) ;
    /*Set constraint type and recreate the constraint. BIND_AS_PROPERTY*//*(ConstraintType type)*/
    type["SetConstraintType"] = static_cast<void (Urho3D::Constraint::*)(ConstraintType)>(&Urho3D::Constraint::SetConstraintType) ;
    /*Set other body to connect to. Set to null to connect to the static world. BIND_AS_PROPERTY*//*(RigidBody *body)*/
    type["SetOtherBody"] = static_cast<void (Urho3D::Constraint::*)(RigidBody *)>(&Urho3D::Constraint::SetOtherBody) ;
    /*Set constraint position relative to own body. BIND_AS_PROPERTY*//*(const Vector3 &position)*/
    type["SetPosition"] = static_cast<void (Urho3D::Constraint::*)(const  Vector3 &)>(&Urho3D::Constraint::SetPosition) ;
    /*Set constraint rotation relative to own body. BIND_AS_PROPERTY*//*(const Quaternion &rotation)*/
    type["SetRotation"] = static_cast<void (Urho3D::Constraint::*)(const  Quaternion &)>(&Urho3D::Constraint::SetRotation) ;
    /*Set constraint rotation relative to own body by specifying the axis. BIND_AS_PROPERTY*//*(const Vector3 &axis)*/
    type["SetAxis"] = static_cast<void (Urho3D::Constraint::*)(const  Vector3 &)>(&Urho3D::Constraint::SetAxis) ;
    /*Set constraint position relative to the other body. If connected to the static world, is a world space position. BIND_AS_PROPERTY*//*(const Vector3 &position)*/
    type["SetOtherPosition"] = static_cast<void (Urho3D::Constraint::*)(const  Vector3 &)>(&Urho3D::Constraint::SetOtherPosition) ;
    /*Set constraint rotation relative to the other body. If connected to the static world, is a world space rotation. BIND_AS_PROPERTY*//*(const Quaternion &rotation)*/
    type["SetOtherRotation"] = static_cast<void (Urho3D::Constraint::*)(const  Quaternion &)>(&Urho3D::Constraint::SetOtherRotation) ;
    /*Set constraint rotation relative to the other body by specifying the axis. BIND_AS_PROPERTY*//*(const Vector3 &axis)*/
    type["SetOtherAxis"] = static_cast<void (Urho3D::Constraint::*)(const  Vector3 &)>(&Urho3D::Constraint::SetOtherAxis) ;
    /*Set constraint world space position. Resets both own and other body relative position, ie. zeroes the constraint error. BIND_AS_PROPERTY*//*(const Vector3 &position)*/
    type["SetWorldPosition"] = static_cast<void (Urho3D::Constraint::*)(const  Vector3 &)>(&Urho3D::Constraint::SetWorldPosition) ;
    /*Set high limit. Interpretation is constraint type specific. BIND_AS_PROPERTY*//*(const Vector2 &limit)*/
    type["SetHighLimit"] = static_cast<void (Urho3D::Constraint::*)(const  Vector2 &)>(&Urho3D::Constraint::SetHighLimit) ;
    /*Set low limit. Interpretation is constraint type specific. BIND_AS_PROPERTY*//*(const Vector2 &limit)*/
    type["SetLowLimit"] = static_cast<void (Urho3D::Constraint::*)(const  Vector2 &)>(&Urho3D::Constraint::SetLowLimit) ;
    /*Set constraint error reduction parameter. Zero = leave to default. BIND_AS_ALIAS_set_erp*//*(float erp)*/
    type["SetERP"] = static_cast<void (Urho3D::Constraint::*)(float)>(&Urho3D::Constraint::SetERP) ;
    /*Set constraint force mixing parameter. Zero = leave to default. BIND_AS_ALIAS_set_cfm*//*(float cfm)*/
    type["SetCFM"] = static_cast<void (Urho3D::Constraint::*)(float)>(&Urho3D::Constraint::SetCFM) ;
    /*Set whether to disable collisions between connected bodies. BIND_AS_PROPERTY*//*(bool disable)*/
    type["SetDisableCollision"] = static_cast<void (Urho3D::Constraint::*)(bool)>(&Urho3D::Constraint::SetDisableCollision) ;
    /*Return physics world.*//*() const*/
    type["GetPhysicsWorld"] = [](Urho3D::Constraint& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetPhysicsWorld());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return Bullet constraint.*//*() const*/
    type["GetConstraint"] = static_cast<btTypedConstraint* (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetConstraint) ;
    /*Return constraint type. BIND_AS_PROPERTY*//*() const*/
    type["GetConstraintType"] = static_cast<ConstraintType (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetConstraintType) ;
    /*Return rigid body in own scene node. BIND_AS_PROPERTY*//*() const*/
    type["GetOwnBody"] = [](Urho3D::Constraint& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOwnBody());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the other rigid body. May be null if connected to the static world. BIND_AS_PROPERTY*//*() const*/
    type["GetOtherBody"] = [](Urho3D::Constraint& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOtherBody());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return constraint position relative to own body. BIND_AS_PROPERTY*//*() const*/
    type["GetPosition"] = static_cast<const Vector3& (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetPosition) ;
    /*Return constraint rotation relative to own body. BIND_AS_PROPERTY*//*() const*/
    type["GetRotation"] = static_cast<const Quaternion& (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetRotation) ;
    /*Return constraint position relative to other body. BIND_AS_PROPERTY*//*() const*/
    type["GetOtherPosition"] = static_cast<const Vector3& (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetOtherPosition) ;
    /*Return constraint rotation relative to other body. BIND_AS_PROPERTY*//*() const*/
    type["GetOtherRotation"] = static_cast<const Quaternion& (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetOtherRotation) ;
    /*Return constraint world position, calculated from own body. BIND_AS_PROPERTY*//*() const*/
    type["GetWorldPosition"] = static_cast<Vector3 (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetWorldPosition) ;
    /*Return high limit. BIND_AS_PROPERTY*//*() const*/
    type["GetHighLimit"] = static_cast<const Vector2& (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetHighLimit) ;
    /*Return low limit. BIND_AS_PROPERTY*//*() const*/
    type["GetLowLimit"] = static_cast<const Vector2& (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetLowLimit) ;
    /*Return constraint error reduction parameter. BIND_AS_ALIAS_get_erp*//*() const*/
    type["GetERP"] = static_cast<float (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetERP) ;
    /*Return constraint force mixing parameter. BIND_AS_ALIAS_get_cfm*//*() const*/
    type["GetCFM"] = static_cast<float (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetCFM) ;
    /*Return whether collisions between connected bodies are disabled. BIND_AS_PROPERTY*//*() const*/
    type["GetDisableCollision"] = static_cast<bool (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetDisableCollision) ;
    /*Release the constraint.*//*()*/
    type["ReleaseConstraint"] = static_cast<void (Urho3D::Constraint::*)()>(&Urho3D::Constraint::ReleaseConstraint) ;
    /*Apply constraint frames.*//*()*/
    type["ApplyFrames"] = static_cast<void (Urho3D::Constraint::*)()>(&Urho3D::Constraint::ApplyFrames) ;
    type["axis"] = sol::property(static_cast<void (Urho3D::Constraint::*)(const  Vector3 &)>(&Urho3D::Constraint::SetAxis) );
    type["cfm"] = sol::property(static_cast<float (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetCFM) 
        , static_cast<void (Urho3D::Constraint::*)(float)>(&Urho3D::Constraint::SetCFM) );
    type["constraintType"] = sol::property(static_cast<ConstraintType (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetConstraintType) 
        , static_cast<void (Urho3D::Constraint::*)(ConstraintType)>(&Urho3D::Constraint::SetConstraintType) );
    type["disableCollision"] = sol::property(static_cast<bool (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetDisableCollision) 
        , static_cast<void (Urho3D::Constraint::*)(bool)>(&Urho3D::Constraint::SetDisableCollision) );
    type["erp"] = sol::property(static_cast<float (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetERP) 
        , static_cast<void (Urho3D::Constraint::*)(float)>(&Urho3D::Constraint::SetERP) );
    type["highLimit"] = sol::property(static_cast<const Vector2& (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetHighLimit) 
        , static_cast<void (Urho3D::Constraint::*)(const  Vector2 &)>(&Urho3D::Constraint::SetHighLimit) );
    type["lowLimit"] = sol::property(static_cast<const Vector2& (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetLowLimit) 
        , static_cast<void (Urho3D::Constraint::*)(const  Vector2 &)>(&Urho3D::Constraint::SetLowLimit) );
    type["otherAxis"] = sol::property(static_cast<void (Urho3D::Constraint::*)(const  Vector3 &)>(&Urho3D::Constraint::SetOtherAxis) );
    type["otherBody"] = sol::property([](Urho3D::Constraint& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOtherBody());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Constraint::*)(RigidBody *)>(&Urho3D::Constraint::SetOtherBody) );
    type["otherPosition"] = sol::property(static_cast<const Vector3& (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetOtherPosition) 
        , static_cast<void (Urho3D::Constraint::*)(const  Vector3 &)>(&Urho3D::Constraint::SetOtherPosition) );
    type["otherRotation"] = sol::property(static_cast<const Quaternion& (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetOtherRotation) 
        , static_cast<void (Urho3D::Constraint::*)(const  Quaternion &)>(&Urho3D::Constraint::SetOtherRotation) );
    type["ownBody"] = sol::property([](Urho3D::Constraint& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOwnBody());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["position"] = sol::property(static_cast<const Vector3& (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetPosition) 
        , static_cast<void (Urho3D::Constraint::*)(const  Vector3 &)>(&Urho3D::Constraint::SetPosition) );
    type["rotation"] = sol::property(static_cast<const Quaternion& (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetRotation) 
        , static_cast<void (Urho3D::Constraint::*)(const  Quaternion &)>(&Urho3D::Constraint::SetRotation) );
    type["worldPosition"] = sol::property(static_cast<Vector3 (Urho3D::Constraint::*)() const>(&Urho3D::Constraint::GetWorldPosition) 
        , static_cast<void (Urho3D::Constraint::*)(const  Vector3 &)>(&Urho3D::Constraint::SetWorldPosition) );

}

