
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/ConstraintWeld2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/ConstraintWeld2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ConstraintWeld2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ConstraintWeld2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ConstraintWeld2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ConstraintWeld2D>((Urho3D::ConstraintWeld2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ConstraintWeld2D>( "ConstraintWeld2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Constraint2D,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ConstraintWeld2D>(context);
        });

// Members

    /*Set anchor. BIND_AS_PROPERTY*//*(const Vector2 &anchor)*/
    type["SetAnchor"] = static_cast<void (Urho3D::ConstraintWeld2D::*)(const  Vector2 &)>(&Urho3D::ConstraintWeld2D::SetAnchor) ;
    /*Set frequency Hz. BIND_AS_PROPERTY*//*(float frequencyHz)*/
    type["SetFrequencyHz"] = static_cast<void (Urho3D::ConstraintWeld2D::*)(float)>(&Urho3D::ConstraintWeld2D::SetFrequencyHz) ;
    /*Set damping ratio. BIND_AS_PROPERTY*//*(float dampingRatio)*/
    type["SetDampingRatio"] = static_cast<void (Urho3D::ConstraintWeld2D::*)(float)>(&Urho3D::ConstraintWeld2D::SetDampingRatio) ;
    /*Return anchor. BIND_AS_PROPERTY*//*() const*/
    type["GetAnchor"] = static_cast<const Vector2& (Urho3D::ConstraintWeld2D::*)() const>(&Urho3D::ConstraintWeld2D::GetAnchor) ;
    /*Return frequency Hz. BIND_AS_PROPERTY*//*() const*/
    type["GetFrequencyHz"] = static_cast<float (Urho3D::ConstraintWeld2D::*)() const>(&Urho3D::ConstraintWeld2D::GetFrequencyHz) ;
    /*Return damping ratio. BIND_AS_PROPERTY*//*() const*/
    type["GetDampingRatio"] = static_cast<float (Urho3D::ConstraintWeld2D::*)() const>(&Urho3D::ConstraintWeld2D::GetDampingRatio) ;
    type["anchor"] = sol::property(static_cast<const Vector2& (Urho3D::ConstraintWeld2D::*)() const>(&Urho3D::ConstraintWeld2D::GetAnchor) 
        , static_cast<void (Urho3D::ConstraintWeld2D::*)(const  Vector2 &)>(&Urho3D::ConstraintWeld2D::SetAnchor) );
    type["dampingRatio"] = sol::property(static_cast<float (Urho3D::ConstraintWeld2D::*)() const>(&Urho3D::ConstraintWeld2D::GetDampingRatio) 
        , static_cast<void (Urho3D::ConstraintWeld2D::*)(float)>(&Urho3D::ConstraintWeld2D::SetDampingRatio) );
    type["frequencyHz"] = sol::property(static_cast<float (Urho3D::ConstraintWeld2D::*)() const>(&Urho3D::ConstraintWeld2D::GetFrequencyHz) 
        , static_cast<void (Urho3D::ConstraintWeld2D::*)(float)>(&Urho3D::ConstraintWeld2D::SetFrequencyHz) );

}

