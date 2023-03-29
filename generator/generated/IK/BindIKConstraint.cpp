
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/IK/IKConstraint.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/IK/IKConstraint.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_IKConstraint(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::IKConstraint::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::IKConstraint::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::IKConstraint>((Urho3D::IKConstraint*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::IKConstraint>( "IKConstraint"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::IKConstraint>(context);
        });

// Members

    /**//*() const*/
    type["GetStiffness"] = static_cast<float (Urho3D::IKConstraint::*)() const>(&Urho3D::IKConstraint::GetStiffness) ;
    /**//*(float stiffness)*/
    type["SetStiffness"] = static_cast<void (Urho3D::IKConstraint::*)(float)>(&Urho3D::IKConstraint::SetStiffness) ;
    /**//*() const*/
    type["GetStretchiness"] = static_cast<float (Urho3D::IKConstraint::*)() const>(&Urho3D::IKConstraint::GetStretchiness) ;
    /**//*(float stretchiness)*/
    type["SetStretchiness"] = static_cast<void (Urho3D::IKConstraint::*)(float)>(&Urho3D::IKConstraint::SetStretchiness) ;
    /**//*() const*/
    type["GetLengthConstraints"] = static_cast<const Vector2& (Urho3D::IKConstraint::*)() const>(&Urho3D::IKConstraint::GetLengthConstraints) ;
    /**//*(const Vector2 &lengthConstraints)*/
    type["SetLengthConstraints"] = static_cast<void (Urho3D::IKConstraint::*)(const  Vector2 &)>(&Urho3D::IKConstraint::SetLengthConstraints) ;

}

