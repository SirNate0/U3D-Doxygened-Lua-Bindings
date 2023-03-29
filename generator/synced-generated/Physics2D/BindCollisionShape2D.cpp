
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/CollisionShape2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/CollisionShape2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CollisionShape2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::CollisionShape2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::CollisionShape2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::CollisionShape2D>((Urho3D::CollisionShape2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::CollisionShape2D>( "CollisionShape2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    /*ABSTRACT*/

// Members

    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::CollisionShape2D::*)()>(&Urho3D::CollisionShape2D::OnSetEnabled) ;
    /*Set trigger. BIND_AS_PROPERTY*//*(bool trigger)*/
    type["SetTrigger"] = static_cast<void (Urho3D::CollisionShape2D::*)(bool)>(&Urho3D::CollisionShape2D::SetTrigger) ;
    /*Set filter category bits. BIND_AS_PROPERTY*//*(int categoryBits)*/
    type["SetCategoryBits"] = static_cast<void (Urho3D::CollisionShape2D::*)(int)>(&Urho3D::CollisionShape2D::SetCategoryBits) ;
    /*Set filter mask bits. BIND_AS_PROPERTY*//*(int maskBits)*/
    type["SetMaskBits"] = static_cast<void (Urho3D::CollisionShape2D::*)(int)>(&Urho3D::CollisionShape2D::SetMaskBits) ;
    /*Set filter group index. BIND_AS_PROPERTY*//*(int groupIndex)*/
    type["SetGroupIndex"] = static_cast<void (Urho3D::CollisionShape2D::*)(int)>(&Urho3D::CollisionShape2D::SetGroupIndex) ;
    /*Set density. BIND_AS_PROPERTY*//*(float density)*/
    type["SetDensity"] = static_cast<void (Urho3D::CollisionShape2D::*)(float)>(&Urho3D::CollisionShape2D::SetDensity) ;
    /*Set friction. BIND_AS_PROPERTY*//*(float friction)*/
    type["SetFriction"] = static_cast<void (Urho3D::CollisionShape2D::*)(float)>(&Urho3D::CollisionShape2D::SetFriction) ;
    /*Set restitution. BIND_AS_PROPERTY*//*(float restitution)*/
    type["SetRestitution"] = static_cast<void (Urho3D::CollisionShape2D::*)(float)>(&Urho3D::CollisionShape2D::SetRestitution) ;
    /*Create fixture.*//*()*/
    type["CreateFixture"] = static_cast<void (Urho3D::CollisionShape2D::*)()>(&Urho3D::CollisionShape2D::CreateFixture) ;
    /*Release fixture.*//*()*/
    type["ReleaseFixture"] = static_cast<void (Urho3D::CollisionShape2D::*)()>(&Urho3D::CollisionShape2D::ReleaseFixture) ;
    /*Return trigger. BIND_AS_PROPERTY*//*() const*/
    type["IsTrigger"] = static_cast<bool (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::IsTrigger) ;
    /*Return filter category bits. BIND_AS_PROPERTY*//*() const*/
    type["GetCategoryBits"] = static_cast<int (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetCategoryBits) ;
    /*Return filter mask bits. BIND_AS_PROPERTY*//*() const*/
    type["GetMaskBits"] = static_cast<int (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetMaskBits) ;
    /*Return filter group index. BIND_AS_PROPERTY*//*() const*/
    type["GetGroupIndex"] = static_cast<int (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetGroupIndex) ;
    /*Return density. BIND_AS_PROPERTY*//*() const*/
    type["GetDensity"] = static_cast<float (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetDensity) ;
    /*Return friction. BIND_AS_PROPERTY*//*() const*/
    type["GetFriction"] = static_cast<float (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetFriction) ;
    /*Return restitution. BIND_AS_PROPERTY*//*() const*/
    type["GetRestitution"] = static_cast<float (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetRestitution) ;
    /*Return mass. BIND_AS_PROPERTY*//*() const*/
    type["GetMass"] = static_cast<float (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetMass) ;
    /*Return inertia. BIND_AS_PROPERTY*//*() const*/
    type["GetInertia"] = static_cast<float (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetInertia) ;
    /*Return mass center. BIND_AS_PROPERTY*//*() const*/
    type["GetMassCenter"] = static_cast<Vector2 (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetMassCenter) ;
    /*Return fixture.*//*() const*/
    type["GetFixture"] = static_cast<b2Fixture* (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetFixture) ;
    type["categoryBits"] = sol::property(static_cast<int (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetCategoryBits) 
        , static_cast<void (Urho3D::CollisionShape2D::*)(int)>(&Urho3D::CollisionShape2D::SetCategoryBits) );
    type["density"] = sol::property(static_cast<float (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetDensity) 
        , static_cast<void (Urho3D::CollisionShape2D::*)(float)>(&Urho3D::CollisionShape2D::SetDensity) );
    type["friction"] = sol::property(static_cast<float (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetFriction) 
        , static_cast<void (Urho3D::CollisionShape2D::*)(float)>(&Urho3D::CollisionShape2D::SetFriction) );
    type["groupIndex"] = sol::property(static_cast<int (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetGroupIndex) 
        , static_cast<void (Urho3D::CollisionShape2D::*)(int)>(&Urho3D::CollisionShape2D::SetGroupIndex) );
    type["inertia"] = sol::property(static_cast<float (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetInertia) );
    type["maskBits"] = sol::property(static_cast<int (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetMaskBits) 
        , static_cast<void (Urho3D::CollisionShape2D::*)(int)>(&Urho3D::CollisionShape2D::SetMaskBits) );
    type["mass"] = sol::property(static_cast<float (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetMass) );
    type["massCenter"] = sol::property(static_cast<Vector2 (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetMassCenter) );
    type["restitution"] = sol::property(static_cast<float (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::GetRestitution) 
        , static_cast<void (Urho3D::CollisionShape2D::*)(float)>(&Urho3D::CollisionShape2D::SetRestitution) );
    type["trigger"] = sol::property(static_cast<bool (Urho3D::CollisionShape2D::*)() const>(&Urho3D::CollisionShape2D::IsTrigger) 
        , static_cast<void (Urho3D::CollisionShape2D::*)(bool)>(&Urho3D::CollisionShape2D::SetTrigger) );

}

