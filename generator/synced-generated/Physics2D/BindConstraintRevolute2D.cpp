
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/ConstraintRevolute2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/ConstraintRevolute2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ConstraintRevolute2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ConstraintRevolute2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ConstraintRevolute2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ConstraintRevolute2D>((Urho3D::ConstraintRevolute2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ConstraintRevolute2D>( "ConstraintRevolute2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Constraint2D,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ConstraintRevolute2D>(context);
        });

// Members

    /*Set anchor. BIND_AS_PROPERTY*//*(const Vector2 &anchor)*/
    type["SetAnchor"] = static_cast<void (Urho3D::ConstraintRevolute2D::*)(const  Vector2 &)>(&Urho3D::ConstraintRevolute2D::SetAnchor) ;
    /*Set enable limit. BIND_AS_PROPERTY*//*(bool enableLimit)*/
    type["SetEnableLimit"] = static_cast<void (Urho3D::ConstraintRevolute2D::*)(bool)>(&Urho3D::ConstraintRevolute2D::SetEnableLimit) ;
    /*Set lower angle. BIND_AS_PROPERTY*//*(float lowerAngle)*/
    type["SetLowerAngle"] = static_cast<void (Urho3D::ConstraintRevolute2D::*)(float)>(&Urho3D::ConstraintRevolute2D::SetLowerAngle) ;
    /*Set upper angle. BIND_AS_PROPERTY*//*(float upperAngle)*/
    type["SetUpperAngle"] = static_cast<void (Urho3D::ConstraintRevolute2D::*)(float)>(&Urho3D::ConstraintRevolute2D::SetUpperAngle) ;
    /*Set enable motor. BIND_AS_PROPERTY*//*(bool enableMotor)*/
    type["SetEnableMotor"] = static_cast<void (Urho3D::ConstraintRevolute2D::*)(bool)>(&Urho3D::ConstraintRevolute2D::SetEnableMotor) ;
    /*Set motor speed. BIND_AS_PROPERTY*//*(float motorSpeed)*/
    type["SetMotorSpeed"] = static_cast<void (Urho3D::ConstraintRevolute2D::*)(float)>(&Urho3D::ConstraintRevolute2D::SetMotorSpeed) ;
    /*Set max motor torque. BIND_AS_PROPERTY*//*(float maxMotorTorque)*/
    type["SetMaxMotorTorque"] = static_cast<void (Urho3D::ConstraintRevolute2D::*)(float)>(&Urho3D::ConstraintRevolute2D::SetMaxMotorTorque) ;
    /*Return anchor. BIND_AS_PROPERTY*//*() const*/
    type["GetAnchor"] = static_cast<const Vector2& (Urho3D::ConstraintRevolute2D::*)() const>(&Urho3D::ConstraintRevolute2D::GetAnchor) ;
    /*Return enable limit. BIND_AS_PROPERTY*//*() const*/
    type["GetEnableLimit"] = static_cast<bool (Urho3D::ConstraintRevolute2D::*)() const>(&Urho3D::ConstraintRevolute2D::GetEnableLimit) ;
    /*Return lower angle. BIND_AS_PROPERTY*//*() const*/
    type["GetLowerAngle"] = static_cast<float (Urho3D::ConstraintRevolute2D::*)() const>(&Urho3D::ConstraintRevolute2D::GetLowerAngle) ;
    /*Return upper angle. BIND_AS_PROPERTY*//*() const*/
    type["GetUpperAngle"] = static_cast<float (Urho3D::ConstraintRevolute2D::*)() const>(&Urho3D::ConstraintRevolute2D::GetUpperAngle) ;
    /*Return enable motor. BIND_AS_PROPERTY*//*() const*/
    type["GetEnableMotor"] = static_cast<bool (Urho3D::ConstraintRevolute2D::*)() const>(&Urho3D::ConstraintRevolute2D::GetEnableMotor) ;
    /*Return motor speed. BIND_AS_PROPERTY*//*() const*/
    type["GetMotorSpeed"] = static_cast<float (Urho3D::ConstraintRevolute2D::*)() const>(&Urho3D::ConstraintRevolute2D::GetMotorSpeed) ;
    /*Return max motor torque. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxMotorTorque"] = static_cast<float (Urho3D::ConstraintRevolute2D::*)() const>(&Urho3D::ConstraintRevolute2D::GetMaxMotorTorque) ;
    type["anchor"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintRevolute2D::*)() const>(&Urho3D::ConstraintRevolute2D::GetAnchor) 
        , static_cast<void (Urho3D::ConstraintRevolute2D::*)(const  Vector2 &)>(&Urho3D::ConstraintRevolute2D::SetAnchor) );
    type["enableLimit"] = sol::property(static_cast<bool (Urho3D::ConstraintRevolute2D::*)() const>(&Urho3D::ConstraintRevolute2D::GetEnableLimit) 
        , static_cast<void (Urho3D::ConstraintRevolute2D::*)(bool)>(&Urho3D::ConstraintRevolute2D::SetEnableLimit) );
    type["enableMotor"] = sol::property(static_cast<bool (Urho3D::ConstraintRevolute2D::*)() const>(&Urho3D::ConstraintRevolute2D::GetEnableMotor) 
        , static_cast<void (Urho3D::ConstraintRevolute2D::*)(bool)>(&Urho3D::ConstraintRevolute2D::SetEnableMotor) );
    type["lowerAngle"] = sol::property(static_cast<float (Urho3D::ConstraintRevolute2D::*)() const>(&Urho3D::ConstraintRevolute2D::GetLowerAngle) 
        , static_cast<void (Urho3D::ConstraintRevolute2D::*)(float)>(&Urho3D::ConstraintRevolute2D::SetLowerAngle) );
    type["maxMotorTorque"] = sol::property(static_cast<float (Urho3D::ConstraintRevolute2D::*)() const>(&Urho3D::ConstraintRevolute2D::GetMaxMotorTorque) 
        , static_cast<void (Urho3D::ConstraintRevolute2D::*)(float)>(&Urho3D::ConstraintRevolute2D::SetMaxMotorTorque) );
    type["motorSpeed"] = sol::property(static_cast<float (Urho3D::ConstraintRevolute2D::*)() const>(&Urho3D::ConstraintRevolute2D::GetMotorSpeed) 
        , static_cast<void (Urho3D::ConstraintRevolute2D::*)(float)>(&Urho3D::ConstraintRevolute2D::SetMotorSpeed) );
    type["upperAngle"] = sol::property(static_cast<float (Urho3D::ConstraintRevolute2D::*)() const>(&Urho3D::ConstraintRevolute2D::GetUpperAngle) 
        , static_cast<void (Urho3D::ConstraintRevolute2D::*)(float)>(&Urho3D::ConstraintRevolute2D::SetUpperAngle) );

}

