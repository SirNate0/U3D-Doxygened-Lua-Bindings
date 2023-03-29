
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/CollisionCircle2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/CollisionCircle2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CollisionCircle2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::CollisionCircle2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::CollisionCircle2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::CollisionCircle2D>((Urho3D::CollisionCircle2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::CollisionCircle2D>( "CollisionCircle2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::CollisionShape2D,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::CollisionCircle2D>(context);
        });

// Members

    /*Set radius. BIND_AS_PROPERTY*//*(float radius)*/
    type["SetRadius"] = static_cast<void (Urho3D::CollisionCircle2D::*)(float)>(&Urho3D::CollisionCircle2D::SetRadius) ;
    /*Return radius. BIND_AS_PROPERTY*//*() const*/
    type["GetRadius"] = static_cast<float (Urho3D::CollisionCircle2D::*)() const>(&Urho3D::CollisionCircle2D::GetRadius) ;
    /*Return center. BIND_AS_PROPERTY*//*() const*/
    type["GetCenter"] = static_cast<const Vector2& (Urho3D::CollisionCircle2D::*)() const>(&Urho3D::CollisionCircle2D::GetCenter) ;
    type["SetCenter"] = sol::overload(
        static_cast<void (Urho3D::CollisionCircle2D::*)(const  Vector2 &)>(&Urho3D::CollisionCircle2D::SetCenter) ,
        static_cast<void (Urho3D::CollisionCircle2D::*)(float, float)>(&Urho3D::CollisionCircle2D::SetCenter)  );
    type["center"] = sol::property(static_cast<const Vector2& (Urho3D::CollisionCircle2D::*)() const>(&Urho3D::CollisionCircle2D::GetCenter) 
        , static_cast<void (Urho3D::CollisionCircle2D::*)(const  Vector2 &)>(&Urho3D::CollisionCircle2D::SetCenter) );
    type["radius"] = sol::property(static_cast<float (Urho3D::CollisionCircle2D::*)() const>(&Urho3D::CollisionCircle2D::GetRadius) 
        , static_cast<void (Urho3D::CollisionCircle2D::*)(float)>(&Urho3D::CollisionCircle2D::SetRadius) );

}

