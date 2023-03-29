
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/ConstraintRope2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/ConstraintRope2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ConstraintRope2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ConstraintRope2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ConstraintRope2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ConstraintRope2D>((Urho3D::ConstraintRope2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ConstraintRope2D>( "ConstraintRope2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Constraint2D,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ConstraintRope2D>(context);
        });

// Members

    /*Set owner body anchor. BIND_AS_PROPERTY*//*(const Vector2 &anchor)*/
    type["SetOwnerBodyAnchor"] = static_cast<void (Urho3D::ConstraintRope2D::*)(const  Vector2 &)>(&Urho3D::ConstraintRope2D::SetOwnerBodyAnchor) ;
    /*Set other body anchor. BIND_AS_PROPERTY*//*(const Vector2 &anchor)*/
    type["SetOtherBodyAnchor"] = static_cast<void (Urho3D::ConstraintRope2D::*)(const  Vector2 &)>(&Urho3D::ConstraintRope2D::SetOtherBodyAnchor) ;
    /*Set max length. BIND_AS_PROPERTY*//*(float maxLength)*/
    type["SetMaxLength"] = static_cast<void (Urho3D::ConstraintRope2D::*)(float)>(&Urho3D::ConstraintRope2D::SetMaxLength) ;
    /*Return owner body anchor. BIND_AS_PROPERTY*//*() const*/
    type["GetOwnerBodyAnchor"] = static_cast<const Vector2& (Urho3D::ConstraintRope2D::*)() const>(&Urho3D::ConstraintRope2D::GetOwnerBodyAnchor) ;
    /*Return other body anchor. BIND_AS_PROPERTY*//*() const*/
    type["GetOtherBodyAnchor"] = static_cast<const Vector2& (Urho3D::ConstraintRope2D::*)() const>(&Urho3D::ConstraintRope2D::GetOtherBodyAnchor) ;
    /*Return max length. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxLength"] = static_cast<float (Urho3D::ConstraintRope2D::*)() const>(&Urho3D::ConstraintRope2D::GetMaxLength) ;
    type["maxLength"] = sol::property(static_cast<float (Urho3D::ConstraintRope2D::*)() const>(&Urho3D::ConstraintRope2D::GetMaxLength) 
        , static_cast<void (Urho3D::ConstraintRope2D::*)(float)>(&Urho3D::ConstraintRope2D::SetMaxLength) );
    type["otherBodyAnchor"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintRope2D::*)() const>(&Urho3D::ConstraintRope2D::GetOtherBodyAnchor) 
        , static_cast<void (Urho3D::ConstraintRope2D::*)(const  Vector2 &)>(&Urho3D::ConstraintRope2D::SetOtherBodyAnchor) );
    type["ownerBodyAnchor"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintRope2D::*)() const>(&Urho3D::ConstraintRope2D::GetOwnerBodyAnchor) 
        , static_cast<void (Urho3D::ConstraintRope2D::*)(const  Vector2 &)>(&Urho3D::ConstraintRope2D::SetOwnerBodyAnchor) );

}

