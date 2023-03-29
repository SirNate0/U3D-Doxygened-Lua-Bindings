
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/ConstraintMouse2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/ConstraintMouse2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ConstraintMouse2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ConstraintMouse2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ConstraintMouse2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ConstraintMouse2D>((Urho3D::ConstraintMouse2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ConstraintMouse2D>( "ConstraintMouse2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Constraint2D,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ConstraintMouse2D>(context);
        });

// Members

    /*Set target. BIND_AS_PROPERTY*//*(const Vector2 &target)*/
    type["SetTarget"] = static_cast<void (Urho3D::ConstraintMouse2D::*)(const  Vector2 &)>(&Urho3D::ConstraintMouse2D::SetTarget) ;
    /*Set max force. BIND_AS_PROPERTY*//*(float maxForce)*/
    type["SetMaxForce"] = static_cast<void (Urho3D::ConstraintMouse2D::*)(float)>(&Urho3D::ConstraintMouse2D::SetMaxForce) ;
    /*Set frequency Hz. BIND_AS_PROPERTY*//*(float frequencyHz)*/
    type["SetFrequencyHz"] = static_cast<void (Urho3D::ConstraintMouse2D::*)(float)>(&Urho3D::ConstraintMouse2D::SetFrequencyHz) ;
    /*Set damping ratio. BIND_AS_PROPERTY*//*(float dampingRatio)*/
    type["SetDampingRatio"] = static_cast<void (Urho3D::ConstraintMouse2D::*)(float)>(&Urho3D::ConstraintMouse2D::SetDampingRatio) ;
    /*Return target. BIND_AS_PROPERTY*//*() const*/
    type["GetTarget"] = static_cast<const Vector2& (Urho3D::ConstraintMouse2D::*)() const>(&Urho3D::ConstraintMouse2D::GetTarget) ;
    /*Return max force. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxForce"] = static_cast<float (Urho3D::ConstraintMouse2D::*)() const>(&Urho3D::ConstraintMouse2D::GetMaxForce) ;
    /*Return frequency Hz. BIND_AS_PROPERTY*//*() const*/
    type["GetFrequencyHz"] = static_cast<float (Urho3D::ConstraintMouse2D::*)() const>(&Urho3D::ConstraintMouse2D::GetFrequencyHz) ;
    /*Return damping ratio. BIND_AS_PROPERTY*//*() const*/
    type["GetDampingRatio"] = static_cast<float (Urho3D::ConstraintMouse2D::*)() const>(&Urho3D::ConstraintMouse2D::GetDampingRatio) ;
    type["dampingRatio"] = sol::property(static_cast<float (Urho3D::ConstraintMouse2D::*)() const>(&Urho3D::ConstraintMouse2D::GetDampingRatio) 
        , static_cast<void (Urho3D::ConstraintMouse2D::*)(float)>(&Urho3D::ConstraintMouse2D::SetDampingRatio) );
    type["frequencyHz"] = sol::property(static_cast<float (Urho3D::ConstraintMouse2D::*)() const>(&Urho3D::ConstraintMouse2D::GetFrequencyHz) 
        , static_cast<void (Urho3D::ConstraintMouse2D::*)(float)>(&Urho3D::ConstraintMouse2D::SetFrequencyHz) );
    type["maxForce"] = sol::property(static_cast<float (Urho3D::ConstraintMouse2D::*)() const>(&Urho3D::ConstraintMouse2D::GetMaxForce) 
        , static_cast<void (Urho3D::ConstraintMouse2D::*)(float)>(&Urho3D::ConstraintMouse2D::SetMaxForce) );
    type["target"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintMouse2D::*)() const>(&Urho3D::ConstraintMouse2D::GetTarget) 
        , static_cast<void (Urho3D::ConstraintMouse2D::*)(const  Vector2 &)>(&Urho3D::ConstraintMouse2D::SetTarget) );

}

