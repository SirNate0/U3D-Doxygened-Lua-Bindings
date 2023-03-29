
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/ConstraintWheel2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/ConstraintWheel2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ConstraintWheel2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ConstraintWheel2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ConstraintWheel2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ConstraintWheel2D>((Urho3D::ConstraintWheel2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ConstraintWheel2D>( "ConstraintWheel2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Constraint2D,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ConstraintWheel2D>(context);
        });

// Members

    /*Set anchor. BIND_AS_PROPERTY*//*(const Vector2 &anchor)*/
    type["SetAnchor"] = static_cast<void (Urho3D::ConstraintWheel2D::*)(const  Vector2 &)>(&Urho3D::ConstraintWheel2D::SetAnchor) ;
    /*Set axis. BIND_AS_PROPERTY*//*(const Vector2 &axis)*/
    type["SetAxis"] = static_cast<void (Urho3D::ConstraintWheel2D::*)(const  Vector2 &)>(&Urho3D::ConstraintWheel2D::SetAxis) ;
    /*Set enable motor. BIND_AS_PROPERTY*//*(bool enableMotor)*/
    type["SetEnableMotor"] = static_cast<void (Urho3D::ConstraintWheel2D::*)(bool)>(&Urho3D::ConstraintWheel2D::SetEnableMotor) ;
    /*Set max motor torque. BIND_AS_PROPERTY*//*(float maxMotorTorque)*/
    type["SetMaxMotorTorque"] = static_cast<void (Urho3D::ConstraintWheel2D::*)(float)>(&Urho3D::ConstraintWheel2D::SetMaxMotorTorque) ;
    /*Set motor speed. BIND_AS_PROPERTY*//*(float motorSpeed)*/
    type["SetMotorSpeed"] = static_cast<void (Urho3D::ConstraintWheel2D::*)(float)>(&Urho3D::ConstraintWheel2D::SetMotorSpeed) ;
    /*Set frequency Hz. BIND_AS_PROPERTY*//*(float frequencyHz)*/
    type["SetFrequencyHz"] = static_cast<void (Urho3D::ConstraintWheel2D::*)(float)>(&Urho3D::ConstraintWheel2D::SetFrequencyHz) ;
    /*Set damping ratio. BIND_AS_PROPERTY*//*(float dampingRatio)*/
    type["SetDampingRatio"] = static_cast<void (Urho3D::ConstraintWheel2D::*)(float)>(&Urho3D::ConstraintWheel2D::SetDampingRatio) ;
    /*Return anchor. BIND_AS_PROPERTY*//*() const*/
    type["GetAnchor"] = static_cast<const Vector2& (Urho3D::ConstraintWheel2D::*)() const>(&Urho3D::ConstraintWheel2D::GetAnchor) ;
    /*Return axis. BIND_AS_PROPERTY*//*() const*/
    type["GetAxis"] = static_cast<const Vector2& (Urho3D::ConstraintWheel2D::*)() const>(&Urho3D::ConstraintWheel2D::GetAxis) ;
    /*Return enable motor. BIND_AS_PROPERTY*//*() const*/
    type["GetEnableMotor"] = static_cast<bool (Urho3D::ConstraintWheel2D::*)() const>(&Urho3D::ConstraintWheel2D::GetEnableMotor) ;
    /*Return maxMotor torque. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxMotorTorque"] = static_cast<float (Urho3D::ConstraintWheel2D::*)() const>(&Urho3D::ConstraintWheel2D::GetMaxMotorTorque) ;
    /*Return motor speed. BIND_AS_PROPERTY*//*() const*/
    type["GetMotorSpeed"] = static_cast<float (Urho3D::ConstraintWheel2D::*)() const>(&Urho3D::ConstraintWheel2D::GetMotorSpeed) ;
    /*Return frequency Hz. BIND_AS_PROPERTY*//*() const*/
    type["GetFrequencyHz"] = static_cast<float (Urho3D::ConstraintWheel2D::*)() const>(&Urho3D::ConstraintWheel2D::GetFrequencyHz) ;
    /*Return damping ratio. BIND_AS_PROPERTY*//*() const*/
    type["GetDampingRatio"] = static_cast<float (Urho3D::ConstraintWheel2D::*)() const>(&Urho3D::ConstraintWheel2D::GetDampingRatio) ;
    type["anchor"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintWheel2D::*)() const>(&Urho3D::ConstraintWheel2D::GetAnchor) 
        , static_cast<void (Urho3D::ConstraintWheel2D::*)(const  Vector2 &)>(&Urho3D::ConstraintWheel2D::SetAnchor) );
    type["axis"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintWheel2D::*)() const>(&Urho3D::ConstraintWheel2D::GetAxis) 
        , static_cast<void (Urho3D::ConstraintWheel2D::*)(const  Vector2 &)>(&Urho3D::ConstraintWheel2D::SetAxis) );
    type["dampingRatio"] = sol::property(static_cast<float (Urho3D::ConstraintWheel2D::*)() const>(&Urho3D::ConstraintWheel2D::GetDampingRatio) 
        , static_cast<void (Urho3D::ConstraintWheel2D::*)(float)>(&Urho3D::ConstraintWheel2D::SetDampingRatio) );
    type["enableMotor"] = sol::property(static_cast<bool (Urho3D::ConstraintWheel2D::*)() const>(&Urho3D::ConstraintWheel2D::GetEnableMotor) 
        , static_cast<void (Urho3D::ConstraintWheel2D::*)(bool)>(&Urho3D::ConstraintWheel2D::SetEnableMotor) );
    type["frequencyHz"] = sol::property(static_cast<float (Urho3D::ConstraintWheel2D::*)() const>(&Urho3D::ConstraintWheel2D::GetFrequencyHz) 
        , static_cast<void (Urho3D::ConstraintWheel2D::*)(float)>(&Urho3D::ConstraintWheel2D::SetFrequencyHz) );
    type["maxMotorTorque"] = sol::property(static_cast<float (Urho3D::ConstraintWheel2D::*)() const>(&Urho3D::ConstraintWheel2D::GetMaxMotorTorque) 
        , static_cast<void (Urho3D::ConstraintWheel2D::*)(float)>(&Urho3D::ConstraintWheel2D::SetMaxMotorTorque) );
    type["motorSpeed"] = sol::property(static_cast<float (Urho3D::ConstraintWheel2D::*)() const>(&Urho3D::ConstraintWheel2D::GetMotorSpeed) 
        , static_cast<void (Urho3D::ConstraintWheel2D::*)(float)>(&Urho3D::ConstraintWheel2D::SetMotorSpeed) );

}

