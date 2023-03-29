
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/ConstraintMotor2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/ConstraintMotor2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ConstraintMotor2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ConstraintMotor2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ConstraintMotor2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ConstraintMotor2D>((Urho3D::ConstraintMotor2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ConstraintMotor2D>( "ConstraintMotor2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Constraint2D,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ConstraintMotor2D>(context);
        });

// Members

    /*Set linear offset. BIND_AS_PROPERTY*//*(const Vector2 &linearOffset)*/
    type["SetLinearOffset"] = static_cast<void (Urho3D::ConstraintMotor2D::*)(const  Vector2 &)>(&Urho3D::ConstraintMotor2D::SetLinearOffset) ;
    /*Set angular offset. BIND_AS_PROPERTY*//*(float angularOffset)*/
    type["SetAngularOffset"] = static_cast<void (Urho3D::ConstraintMotor2D::*)(float)>(&Urho3D::ConstraintMotor2D::SetAngularOffset) ;
    /*Set max force. BIND_AS_PROPERTY*//*(float maxForce)*/
    type["SetMaxForce"] = static_cast<void (Urho3D::ConstraintMotor2D::*)(float)>(&Urho3D::ConstraintMotor2D::SetMaxForce) ;
    /*Set max torque. BIND_AS_PROPERTY*//*(float maxTorque)*/
    type["SetMaxTorque"] = static_cast<void (Urho3D::ConstraintMotor2D::*)(float)>(&Urho3D::ConstraintMotor2D::SetMaxTorque) ;
    /*Set correction factor. BIND_AS_PROPERTY*//*(float correctionFactor)*/
    type["SetCorrectionFactor"] = static_cast<void (Urho3D::ConstraintMotor2D::*)(float)>(&Urho3D::ConstraintMotor2D::SetCorrectionFactor) ;
    /*Return linear offset. BIND_AS_PROPERTY*//*() const*/
    type["GetLinearOffset"] = static_cast<const Vector2& (Urho3D::ConstraintMotor2D::*)() const>(&Urho3D::ConstraintMotor2D::GetLinearOffset) ;
    /*Return angular offset. BIND_AS_PROPERTY*//*() const*/
    type["GetAngularOffset"] = static_cast<float (Urho3D::ConstraintMotor2D::*)() const>(&Urho3D::ConstraintMotor2D::GetAngularOffset) ;
    /*Return max force. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxForce"] = static_cast<float (Urho3D::ConstraintMotor2D::*)() const>(&Urho3D::ConstraintMotor2D::GetMaxForce) ;
    /*Return max torque. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxTorque"] = static_cast<float (Urho3D::ConstraintMotor2D::*)() const>(&Urho3D::ConstraintMotor2D::GetMaxTorque) ;
    /*Return correction factor. BIND_AS_PROPERTY*//*() const*/
    type["GetCorrectionFactor"] = static_cast<float (Urho3D::ConstraintMotor2D::*)() const>(&Urho3D::ConstraintMotor2D::GetCorrectionFactor) ;
    type["angularOffset"] = sol::property(static_cast<float (Urho3D::ConstraintMotor2D::*)() const>(&Urho3D::ConstraintMotor2D::GetAngularOffset) 
        , static_cast<void (Urho3D::ConstraintMotor2D::*)(float)>(&Urho3D::ConstraintMotor2D::SetAngularOffset) );
    type["correctionFactor"] = sol::property(static_cast<float (Urho3D::ConstraintMotor2D::*)() const>(&Urho3D::ConstraintMotor2D::GetCorrectionFactor) 
        , static_cast<void (Urho3D::ConstraintMotor2D::*)(float)>(&Urho3D::ConstraintMotor2D::SetCorrectionFactor) );
    type["linearOffset"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintMotor2D::*)() const>(&Urho3D::ConstraintMotor2D::GetLinearOffset) 
        , static_cast<void (Urho3D::ConstraintMotor2D::*)(const  Vector2 &)>(&Urho3D::ConstraintMotor2D::SetLinearOffset) );
    type["maxForce"] = sol::property(static_cast<float (Urho3D::ConstraintMotor2D::*)() const>(&Urho3D::ConstraintMotor2D::GetMaxForce) 
        , static_cast<void (Urho3D::ConstraintMotor2D::*)(float)>(&Urho3D::ConstraintMotor2D::SetMaxForce) );
    type["maxTorque"] = sol::property(static_cast<float (Urho3D::ConstraintMotor2D::*)() const>(&Urho3D::ConstraintMotor2D::GetMaxTorque) 
        , static_cast<void (Urho3D::ConstraintMotor2D::*)(float)>(&Urho3D::ConstraintMotor2D::SetMaxTorque) );

}

