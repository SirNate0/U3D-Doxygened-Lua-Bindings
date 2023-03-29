
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/Constraint2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/Constraint2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Physics2D/Constraint2D.h>
#include <Urho3D/Physics2D/RigidBody2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Constraint2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Constraint2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Constraint2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Constraint2D>((Urho3D::Constraint2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Constraint2D>( "Constraint2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Constraint2D>(context);
        });

// Members

    /*Apply attribute changes that can not be applied immediately. Called after scene load or a network update.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::Constraint2D::*)()>(&Urho3D::Constraint2D::ApplyAttributes) ;
    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::Constraint2D::*)()>(&Urho3D::Constraint2D::OnSetEnabled) ;
    /*Create joint.*//*()*/
    type["CreateJoint"] = static_cast<void (Urho3D::Constraint2D::*)()>(&Urho3D::Constraint2D::CreateJoint) ;
    /*Release joint.*//*()*/
    type["ReleaseJoint"] = static_cast<void (Urho3D::Constraint2D::*)()>(&Urho3D::Constraint2D::ReleaseJoint) ;
    /*Set other rigid body. BIND_AS_PROPERTY*//*(RigidBody2D *body)*/
    type["SetOtherBody"] = static_cast<void (Urho3D::Constraint2D::*)(RigidBody2D *)>(&Urho3D::Constraint2D::SetOtherBody) ;
    /*Set collide connected. BIND_AS_PROPERTY*//*(bool collideConnected)*/
    type["SetCollideConnected"] = static_cast<void (Urho3D::Constraint2D::*)(bool)>(&Urho3D::Constraint2D::SetCollideConnected) ;
    /*Set attached constriant (for gear).*//*(Constraint2D *constraint)*/
    type["SetAttachedConstraint"] = static_cast<void (Urho3D::Constraint2D::*)(Constraint2D *)>(&Urho3D::Constraint2D::SetAttachedConstraint) ;
    /*Return owner body. BIND_AS_PROPERTY*//*() const*/
    type["GetOwnerBody"] = [](Urho3D::Constraint2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOwnerBody());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return other body. BIND_AS_PROPERTY*//*() const*/
    type["GetOtherBody"] = [](Urho3D::Constraint2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOtherBody());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return collide connected. BIND_AS_PROPERTY*//*() const*/
    type["GetCollideConnected"] = static_cast<bool (Urho3D::Constraint2D::*)() const>(&Urho3D::Constraint2D::GetCollideConnected) ;
    /*Return attached constraint (for gear).*//*() const*/
    type["GetAttachedConstraint"] = [](Urho3D::Constraint2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetAttachedConstraint());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return Box2D joint.*//*() const*/
    type["GetJoint"] = static_cast<b2Joint* (Urho3D::Constraint2D::*)() const>(&Urho3D::Constraint2D::GetJoint) ;
    type["collideConnected"] = sol::property(static_cast<bool (Urho3D::Constraint2D::*)() const>(&Urho3D::Constraint2D::GetCollideConnected) 
        , static_cast<void (Urho3D::Constraint2D::*)(bool)>(&Urho3D::Constraint2D::SetCollideConnected) );
    type["otherBody"] = sol::property([](Urho3D::Constraint2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOtherBody());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Constraint2D::*)(RigidBody2D *)>(&Urho3D::Constraint2D::SetOtherBody) );
    type["ownerBody"] = sol::property([](Urho3D::Constraint2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOwnerBody());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });

}

