
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/CollisionBox2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/CollisionBox2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CollisionBox2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::CollisionBox2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::CollisionBox2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::CollisionBox2D>((Urho3D::CollisionBox2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::CollisionBox2D>( "CollisionBox2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::CollisionShape2D,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::CollisionBox2D>(context);
        });

// Members

    /*Set angle. BIND_AS_PROPERTY*//*(float angle)*/
    type["SetAngle"] = static_cast<void (Urho3D::CollisionBox2D::*)(float)>(&Urho3D::CollisionBox2D::SetAngle) ;
    /*Return size. BIND_AS_PROPERTY*//*() const*/
    type["GetSize"] = static_cast<const Vector2& (Urho3D::CollisionBox2D::*)() const>(&Urho3D::CollisionBox2D::GetSize) ;
    /*Return center. BIND_AS_PROPERTY*//*() const*/
    type["GetCenter"] = static_cast<const Vector2& (Urho3D::CollisionBox2D::*)() const>(&Urho3D::CollisionBox2D::GetCenter) ;
    /*Return angle. BIND_AS_PROPERTY*//*() const*/
    type["GetAngle"] = static_cast<float (Urho3D::CollisionBox2D::*)() const>(&Urho3D::CollisionBox2D::GetAngle) ;
    type["SetSize"] = sol::overload(
        static_cast<void (Urho3D::CollisionBox2D::*)(const  Vector2 &)>(&Urho3D::CollisionBox2D::SetSize) ,
        static_cast<void (Urho3D::CollisionBox2D::*)(float, float)>(&Urho3D::CollisionBox2D::SetSize)  );
    type["SetCenter"] = sol::overload(
        static_cast<void (Urho3D::CollisionBox2D::*)(const  Vector2 &)>(&Urho3D::CollisionBox2D::SetCenter) ,
        static_cast<void (Urho3D::CollisionBox2D::*)(float, float)>(&Urho3D::CollisionBox2D::SetCenter)  );
    type["angle"] = sol::property(static_cast<float (Urho3D::CollisionBox2D::*)() const>(&Urho3D::CollisionBox2D::GetAngle) 
        , static_cast<void (Urho3D::CollisionBox2D::*)(float)>(&Urho3D::CollisionBox2D::SetAngle) );
    type["center"] = sol::property(static_cast<const Vector2& (Urho3D::CollisionBox2D::*)() const>(&Urho3D::CollisionBox2D::GetCenter) 
        , static_cast<void (Urho3D::CollisionBox2D::*)(const  Vector2 &)>(&Urho3D::CollisionBox2D::SetCenter) );
    type["size"] = sol::property(static_cast<const Vector2& (Urho3D::CollisionBox2D::*)() const>(&Urho3D::CollisionBox2D::GetSize) 
        , static_cast<void (Urho3D::CollisionBox2D::*)(const  Vector2 &)>(&Urho3D::CollisionBox2D::SetSize) );

}

