
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/ConstraintFriction2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/ConstraintFriction2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ConstraintFriction2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ConstraintFriction2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ConstraintFriction2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ConstraintFriction2D>((Urho3D::ConstraintFriction2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ConstraintFriction2D>( "ConstraintFriction2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Constraint2D,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ConstraintFriction2D>(context);
        });

// Members

    /*Set anchor. BIND_AS_PROPERTY*//*(const Vector2 &anchor)*/
    type["SetAnchor"] = static_cast<void (Urho3D::ConstraintFriction2D::*)(const  Vector2 &)>(&Urho3D::ConstraintFriction2D::SetAnchor) ;
    /*Set max force. BIND_AS_PROPERTY*//*(float maxForce)*/
    type["SetMaxForce"] = static_cast<void (Urho3D::ConstraintFriction2D::*)(float)>(&Urho3D::ConstraintFriction2D::SetMaxForce) ;
    /*Set max torque. BIND_AS_PROPERTY*//*(float maxTorque)*/
    type["SetMaxTorque"] = static_cast<void (Urho3D::ConstraintFriction2D::*)(float)>(&Urho3D::ConstraintFriction2D::SetMaxTorque) ;
    /*Return anchor. BIND_AS_PROPERTY*//*() const*/
    type["GetAnchor"] = static_cast<const Vector2& (Urho3D::ConstraintFriction2D::*)() const>(&Urho3D::ConstraintFriction2D::GetAnchor) ;
    /*Set max force. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxForce"] = static_cast<float (Urho3D::ConstraintFriction2D::*)() const>(&Urho3D::ConstraintFriction2D::GetMaxForce) ;
    /*Set max torque. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxTorque"] = static_cast<float (Urho3D::ConstraintFriction2D::*)() const>(&Urho3D::ConstraintFriction2D::GetMaxTorque) ;
    type["anchor"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintFriction2D::*)() const>(&Urho3D::ConstraintFriction2D::GetAnchor) 
        , static_cast<void (Urho3D::ConstraintFriction2D::*)(const  Vector2 &)>(&Urho3D::ConstraintFriction2D::SetAnchor) );
    type["maxForce"] = sol::property(static_cast<float (Urho3D::ConstraintFriction2D::*)() const>(&Urho3D::ConstraintFriction2D::GetMaxForce) 
        , static_cast<void (Urho3D::ConstraintFriction2D::*)(float)>(&Urho3D::ConstraintFriction2D::SetMaxForce) );
    type["maxTorque"] = sol::property(static_cast<float (Urho3D::ConstraintFriction2D::*)() const>(&Urho3D::ConstraintFriction2D::GetMaxTorque) 
        , static_cast<void (Urho3D::ConstraintFriction2D::*)(float)>(&Urho3D::ConstraintFriction2D::SetMaxTorque) );

}

