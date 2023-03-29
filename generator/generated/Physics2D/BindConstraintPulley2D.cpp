
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/ConstraintPulley2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/ConstraintPulley2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ConstraintPulley2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ConstraintPulley2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ConstraintPulley2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ConstraintPulley2D>((Urho3D::ConstraintPulley2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ConstraintPulley2D>( "ConstraintPulley2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Constraint2D,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ConstraintPulley2D>(context);
        });

// Members

    /*Set other body ground anchor point. BIND_AS_PROPERTY*//*(const Vector2 &groundAnchor)*/
    type["SetOwnerBodyGroundAnchor"] = static_cast<void (Urho3D::ConstraintPulley2D::*)(const  Vector2 &)>(&Urho3D::ConstraintPulley2D::SetOwnerBodyGroundAnchor) ;
    /*Set other body ground anchor point. BIND_AS_PROPERTY*//*(const Vector2 &groundAnchor)*/
    type["SetOtherBodyGroundAnchor"] = static_cast<void (Urho3D::ConstraintPulley2D::*)(const  Vector2 &)>(&Urho3D::ConstraintPulley2D::SetOtherBodyGroundAnchor) ;
    /*Set owner body anchor point. BIND_AS_PROPERTY*//*(const Vector2 &anchor)*/
    type["SetOwnerBodyAnchor"] = static_cast<void (Urho3D::ConstraintPulley2D::*)(const  Vector2 &)>(&Urho3D::ConstraintPulley2D::SetOwnerBodyAnchor) ;
    /*Set other body anchor point. BIND_AS_PROPERTY*//*(const Vector2 &anchor)*/
    type["SetOtherBodyAnchor"] = static_cast<void (Urho3D::ConstraintPulley2D::*)(const  Vector2 &)>(&Urho3D::ConstraintPulley2D::SetOtherBodyAnchor) ;
    /*Set ratio. BIND_AS_PROPERTY*//*(float ratio)*/
    type["SetRatio"] = static_cast<void (Urho3D::ConstraintPulley2D::*)(float)>(&Urho3D::ConstraintPulley2D::SetRatio) ;
    /*Return owner body ground anchor. BIND_AS_PROPERTY*//*() const*/
    type["GetOwnerBodyGroundAnchor"] = static_cast<const Vector2& (Urho3D::ConstraintPulley2D::*)() const>(&Urho3D::ConstraintPulley2D::GetOwnerBodyGroundAnchor) ;
    /*return other body ground anchor. BIND_AS_PROPERTY*//*() const*/
    type["GetOtherBodyGroundAnchor"] = static_cast<const Vector2& (Urho3D::ConstraintPulley2D::*)() const>(&Urho3D::ConstraintPulley2D::GetOtherBodyGroundAnchor) ;
    /*Return owner body anchor. BIND_AS_PROPERTY*//*() const*/
    type["GetOwnerBodyAnchor"] = static_cast<const Vector2& (Urho3D::ConstraintPulley2D::*)() const>(&Urho3D::ConstraintPulley2D::GetOwnerBodyAnchor) ;
    /*Return other body anchor. BIND_AS_PROPERTY*//*() const*/
    type["GetOtherBodyAnchor"] = static_cast<const Vector2& (Urho3D::ConstraintPulley2D::*)() const>(&Urho3D::ConstraintPulley2D::GetOtherBodyAnchor) ;
    /*Return ratio. BIND_AS_PROPERTY*//*() const*/
    type["GetRatio"] = static_cast<float (Urho3D::ConstraintPulley2D::*)() const>(&Urho3D::ConstraintPulley2D::GetRatio) ;
    type["otherBodyAnchor"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintPulley2D::*)() const>(&Urho3D::ConstraintPulley2D::GetOtherBodyAnchor) 
        , static_cast<void (Urho3D::ConstraintPulley2D::*)(const  Vector2 &)>(&Urho3D::ConstraintPulley2D::SetOtherBodyAnchor) );
    type["otherBodyGroundAnchor"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintPulley2D::*)() const>(&Urho3D::ConstraintPulley2D::GetOtherBodyGroundAnchor) 
        , static_cast<void (Urho3D::ConstraintPulley2D::*)(const  Vector2 &)>(&Urho3D::ConstraintPulley2D::SetOtherBodyGroundAnchor) );
    type["ownerBodyAnchor"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintPulley2D::*)() const>(&Urho3D::ConstraintPulley2D::GetOwnerBodyAnchor) 
        , static_cast<void (Urho3D::ConstraintPulley2D::*)(const  Vector2 &)>(&Urho3D::ConstraintPulley2D::SetOwnerBodyAnchor) );
    type["ownerBodyGroundAnchor"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintPulley2D::*)() const>(&Urho3D::ConstraintPulley2D::GetOwnerBodyGroundAnchor) 
        , static_cast<void (Urho3D::ConstraintPulley2D::*)(const  Vector2 &)>(&Urho3D::ConstraintPulley2D::SetOwnerBodyGroundAnchor) );
    type["ratio"] = sol::property(static_cast<float (Urho3D::ConstraintPulley2D::*)() const>(&Urho3D::ConstraintPulley2D::GetRatio) 
        , static_cast<void (Urho3D::ConstraintPulley2D::*)(float)>(&Urho3D::ConstraintPulley2D::SetRatio) );

}

