
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/ConstraintPrismatic2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/ConstraintPrismatic2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ConstraintPrismatic2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ConstraintPrismatic2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ConstraintPrismatic2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ConstraintPrismatic2D>((Urho3D::ConstraintPrismatic2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ConstraintPrismatic2D>( "ConstraintPrismatic2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Constraint2D,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ConstraintPrismatic2D>(context);
        });

// Members

    /*Set anchor. BIND_AS_PROPERTY*//*(const Vector2 &anchor)*/
    type["SetAnchor"] = static_cast<void (Urho3D::ConstraintPrismatic2D::*)(const  Vector2 &)>(&Urho3D::ConstraintPrismatic2D::SetAnchor) ;
    /*Set axis. BIND_AS_PROPERTY*//*(const Vector2 &axis)*/
    type["SetAxis"] = static_cast<void (Urho3D::ConstraintPrismatic2D::*)(const  Vector2 &)>(&Urho3D::ConstraintPrismatic2D::SetAxis) ;
    /*Set enable limit. BIND_AS_PROPERTY*//*(bool enableLimit)*/
    type["SetEnableLimit"] = static_cast<void (Urho3D::ConstraintPrismatic2D::*)(bool)>(&Urho3D::ConstraintPrismatic2D::SetEnableLimit) ;
    /*Set lower translation. BIND_AS_PROPERTY*//*(float lowerTranslation)*/
    type["SetLowerTranslation"] = static_cast<void (Urho3D::ConstraintPrismatic2D::*)(float)>(&Urho3D::ConstraintPrismatic2D::SetLowerTranslation) ;
    /*Set upper translation. BIND_AS_PROPERTY*//*(float upperTranslation)*/
    type["SetUpperTranslation"] = static_cast<void (Urho3D::ConstraintPrismatic2D::*)(float)>(&Urho3D::ConstraintPrismatic2D::SetUpperTranslation) ;
    /*Set enable motor. BIND_AS_PROPERTY*//*(bool enableMotor)*/
    type["SetEnableMotor"] = static_cast<void (Urho3D::ConstraintPrismatic2D::*)(bool)>(&Urho3D::ConstraintPrismatic2D::SetEnableMotor) ;
    /*Set maxmotor force. BIND_AS_PROPERTY*//*(float maxMotorForce)*/
    type["SetMaxMotorForce"] = static_cast<void (Urho3D::ConstraintPrismatic2D::*)(float)>(&Urho3D::ConstraintPrismatic2D::SetMaxMotorForce) ;
    /*Set motor speed. BIND_AS_PROPERTY*//*(float motorSpeed)*/
    type["SetMotorSpeed"] = static_cast<void (Urho3D::ConstraintPrismatic2D::*)(float)>(&Urho3D::ConstraintPrismatic2D::SetMotorSpeed) ;
    /*Return anchor. BIND_AS_PROPERTY*//*() const*/
    type["GetAnchor"] = static_cast<const Vector2& (Urho3D::ConstraintPrismatic2D::*)() const>(&Urho3D::ConstraintPrismatic2D::GetAnchor) ;
    /*Return axis. BIND_AS_PROPERTY*//*() const*/
    type["GetAxis"] = static_cast<const Vector2& (Urho3D::ConstraintPrismatic2D::*)() const>(&Urho3D::ConstraintPrismatic2D::GetAxis) ;
    /*Return enable limit. BIND_AS_PROPERTY*//*() const*/
    type["GetEnableLimit"] = static_cast<bool (Urho3D::ConstraintPrismatic2D::*)() const>(&Urho3D::ConstraintPrismatic2D::GetEnableLimit) ;
    /*Return lower translation. BIND_AS_PROPERTY*//*() const*/
    type["GetLowerTranslation"] = static_cast<float (Urho3D::ConstraintPrismatic2D::*)() const>(&Urho3D::ConstraintPrismatic2D::GetLowerTranslation) ;
    /*Return upper translation. BIND_AS_PROPERTY*//*() const*/
    type["GetUpperTranslation"] = static_cast<float (Urho3D::ConstraintPrismatic2D::*)() const>(&Urho3D::ConstraintPrismatic2D::GetUpperTranslation) ;
    /*Return enable motor. BIND_AS_PROPERTY*//*() const*/
    type["GetEnableMotor"] = static_cast<bool (Urho3D::ConstraintPrismatic2D::*)() const>(&Urho3D::ConstraintPrismatic2D::GetEnableMotor) ;
    /*Return maxmotor force. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxMotorForce"] = static_cast<float (Urho3D::ConstraintPrismatic2D::*)() const>(&Urho3D::ConstraintPrismatic2D::GetMaxMotorForce) ;
    /*Return motor speed. BIND_AS_PROPERTY*//*() const*/
    type["GetMotorSpeed"] = static_cast<float (Urho3D::ConstraintPrismatic2D::*)() const>(&Urho3D::ConstraintPrismatic2D::GetMotorSpeed) ;
    type["anchor"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintPrismatic2D::*)() const>(&Urho3D::ConstraintPrismatic2D::GetAnchor) 
        , static_cast<void (Urho3D::ConstraintPrismatic2D::*)(const  Vector2 &)>(&Urho3D::ConstraintPrismatic2D::SetAnchor) );
    type["axis"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintPrismatic2D::*)() const>(&Urho3D::ConstraintPrismatic2D::GetAxis) 
        , static_cast<void (Urho3D::ConstraintPrismatic2D::*)(const  Vector2 &)>(&Urho3D::ConstraintPrismatic2D::SetAxis) );
    type["enableLimit"] = sol::property(static_cast<bool (Urho3D::ConstraintPrismatic2D::*)() const>(&Urho3D::ConstraintPrismatic2D::GetEnableLimit) 
        , static_cast<void (Urho3D::ConstraintPrismatic2D::*)(bool)>(&Urho3D::ConstraintPrismatic2D::SetEnableLimit) );
    type["enableMotor"] = sol::property(static_cast<bool (Urho3D::ConstraintPrismatic2D::*)() const>(&Urho3D::ConstraintPrismatic2D::GetEnableMotor) 
        , static_cast<void (Urho3D::ConstraintPrismatic2D::*)(bool)>(&Urho3D::ConstraintPrismatic2D::SetEnableMotor) );
    type["lowerTranslation"] = sol::property(static_cast<float (Urho3D::ConstraintPrismatic2D::*)() const>(&Urho3D::ConstraintPrismatic2D::GetLowerTranslation) 
        , static_cast<void (Urho3D::ConstraintPrismatic2D::*)(float)>(&Urho3D::ConstraintPrismatic2D::SetLowerTranslation) );
    type["maxMotorForce"] = sol::property(static_cast<float (Urho3D::ConstraintPrismatic2D::*)() const>(&Urho3D::ConstraintPrismatic2D::GetMaxMotorForce) 
        , static_cast<void (Urho3D::ConstraintPrismatic2D::*)(float)>(&Urho3D::ConstraintPrismatic2D::SetMaxMotorForce) );
    type["motorSpeed"] = sol::property(static_cast<float (Urho3D::ConstraintPrismatic2D::*)() const>(&Urho3D::ConstraintPrismatic2D::GetMotorSpeed) 
        , static_cast<void (Urho3D::ConstraintPrismatic2D::*)(float)>(&Urho3D::ConstraintPrismatic2D::SetMotorSpeed) );
    type["upperTranslation"] = sol::property(static_cast<float (Urho3D::ConstraintPrismatic2D::*)() const>(&Urho3D::ConstraintPrismatic2D::GetUpperTranslation) 
        , static_cast<void (Urho3D::ConstraintPrismatic2D::*)(float)>(&Urho3D::ConstraintPrismatic2D::SetUpperTranslation) );

}

