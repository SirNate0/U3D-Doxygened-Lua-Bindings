
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/ConstraintDistance2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/ConstraintDistance2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ConstraintDistance2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ConstraintDistance2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ConstraintDistance2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ConstraintDistance2D>((Urho3D::ConstraintDistance2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ConstraintDistance2D>( "ConstraintDistance2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Constraint2D,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ConstraintDistance2D>(context);
        });

// Members

    /*Set owner body anchor. BIND_AS_PROPERTY*//*(const Vector2 &anchor)*/
    type["SetOwnerBodyAnchor"] = static_cast<void (Urho3D::ConstraintDistance2D::*)(const  Vector2 &)>(&Urho3D::ConstraintDistance2D::SetOwnerBodyAnchor) ;
    /*Set other body anchor. BIND_AS_PROPERTY*//*(const Vector2 &anchor)*/
    type["SetOtherBodyAnchor"] = static_cast<void (Urho3D::ConstraintDistance2D::*)(const  Vector2 &)>(&Urho3D::ConstraintDistance2D::SetOtherBodyAnchor) ;
    /*Set frequency Hz. BIND_AS_PROPERTY*//*(float frequencyHz)*/
    type["SetFrequencyHz"] = static_cast<void (Urho3D::ConstraintDistance2D::*)(float)>(&Urho3D::ConstraintDistance2D::SetFrequencyHz) ;
    /*Set damping ratio. BIND_AS_PROPERTY*//*(float dampingRatio)*/
    type["SetDampingRatio"] = static_cast<void (Urho3D::ConstraintDistance2D::*)(float)>(&Urho3D::ConstraintDistance2D::SetDampingRatio) ;
    /*Set length. BIND_AS_PROPERTY*//*(float length)*/
    type["SetLength"] = static_cast<void (Urho3D::ConstraintDistance2D::*)(float)>(&Urho3D::ConstraintDistance2D::SetLength) ;
    /*Return owner body anchor. BIND_AS_PROPERTY*//*() const*/
    type["GetOwnerBodyAnchor"] = static_cast<const Vector2& (Urho3D::ConstraintDistance2D::*)() const>(&Urho3D::ConstraintDistance2D::GetOwnerBodyAnchor) ;
    /*Return other body anchor. BIND_AS_PROPERTY*//*() const*/
    type["GetOtherBodyAnchor"] = static_cast<const Vector2& (Urho3D::ConstraintDistance2D::*)() const>(&Urho3D::ConstraintDistance2D::GetOtherBodyAnchor) ;
    /*Return frequency Hz. BIND_AS_PROPERTY*//*() const*/
    type["GetFrequencyHz"] = static_cast<float (Urho3D::ConstraintDistance2D::*)() const>(&Urho3D::ConstraintDistance2D::GetFrequencyHz) ;
    /*Return damping ratio. BIND_AS_PROPERTY*//*() const*/
    type["GetDampingRatio"] = static_cast<float (Urho3D::ConstraintDistance2D::*)() const>(&Urho3D::ConstraintDistance2D::GetDampingRatio) ;
    /*Return length. BIND_AS_PROPERTY*//*() const*/
    type["GetLength"] = static_cast<float (Urho3D::ConstraintDistance2D::*)() const>(&Urho3D::ConstraintDistance2D::GetLength) ;
    type["dampingRatio"] = sol::property(static_cast<float (Urho3D::ConstraintDistance2D::*)() const>(&Urho3D::ConstraintDistance2D::GetDampingRatio) 
        , static_cast<void (Urho3D::ConstraintDistance2D::*)(float)>(&Urho3D::ConstraintDistance2D::SetDampingRatio) );
    type["frequencyHz"] = sol::property(static_cast<float (Urho3D::ConstraintDistance2D::*)() const>(&Urho3D::ConstraintDistance2D::GetFrequencyHz) 
        , static_cast<void (Urho3D::ConstraintDistance2D::*)(float)>(&Urho3D::ConstraintDistance2D::SetFrequencyHz) );
    type["length"] = sol::property(static_cast<float (Urho3D::ConstraintDistance2D::*)() const>(&Urho3D::ConstraintDistance2D::GetLength) 
        , static_cast<void (Urho3D::ConstraintDistance2D::*)(float)>(&Urho3D::ConstraintDistance2D::SetLength) );
    type["otherBodyAnchor"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintDistance2D::*)() const>(&Urho3D::ConstraintDistance2D::GetOtherBodyAnchor) 
        , static_cast<void (Urho3D::ConstraintDistance2D::*)(const  Vector2 &)>(&Urho3D::ConstraintDistance2D::SetOtherBodyAnchor) );
    type["ownerBodyAnchor"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintDistance2D::*)() const>(&Urho3D::ConstraintDistance2D::GetOwnerBodyAnchor) 
        , static_cast<void (Urho3D::ConstraintDistance2D::*)(const  Vector2 &)>(&Urho3D::ConstraintDistance2D::SetOwnerBodyAnchor) );

}

