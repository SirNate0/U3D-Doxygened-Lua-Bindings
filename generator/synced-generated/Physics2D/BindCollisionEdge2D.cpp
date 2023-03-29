
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/CollisionEdge2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/CollisionEdge2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CollisionEdge2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::CollisionEdge2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::CollisionEdge2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::CollisionEdge2D>((Urho3D::CollisionEdge2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::CollisionEdge2D>( "CollisionEdge2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::CollisionShape2D,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::CollisionEdge2D>(context);
        });

// Members

    /*Set vertex 1. BIND_AS_PROPERTY*//*(const Vector2 &vertex)*/
    type["SetVertex1"] = static_cast<void (Urho3D::CollisionEdge2D::*)(const  Vector2 &)>(&Urho3D::CollisionEdge2D::SetVertex1) ;
    /*Set vertex 2. BIND_AS_PROPERTY*//*(const Vector2 &vertex)*/
    type["SetVertex2"] = static_cast<void (Urho3D::CollisionEdge2D::*)(const  Vector2 &)>(&Urho3D::CollisionEdge2D::SetVertex2) ;
    /*Set vertices.*//*(const Vector2 &vertex1, const Vector2 &vertex2)*/
    type["SetVertices"] = static_cast<void (Urho3D::CollisionEdge2D::*)(const  Vector2 &, const  Vector2 &)>(&Urho3D::CollisionEdge2D::SetVertices) ;
    /*Return vertex 1. BIND_AS_PROPERTY*//*() const*/
    type["GetVertex1"] = static_cast<const Vector2& (Urho3D::CollisionEdge2D::*)() const>(&Urho3D::CollisionEdge2D::GetVertex1) ;
    /*Return vertex 2. BIND_AS_PROPERTY*//*() const*/
    type["GetVertex2"] = static_cast<const Vector2& (Urho3D::CollisionEdge2D::*)() const>(&Urho3D::CollisionEdge2D::GetVertex2) ;
    type["vertex1"] = sol::property(static_cast<const Vector2& (Urho3D::CollisionEdge2D::*)() const>(&Urho3D::CollisionEdge2D::GetVertex1) 
        , static_cast<void (Urho3D::CollisionEdge2D::*)(const  Vector2 &)>(&Urho3D::CollisionEdge2D::SetVertex1) );
    type["vertex2"] = sol::property(static_cast<const Vector2& (Urho3D::CollisionEdge2D::*)() const>(&Urho3D::CollisionEdge2D::GetVertex2) 
        , static_cast<void (Urho3D::CollisionEdge2D::*)(const  Vector2 &)>(&Urho3D::CollisionEdge2D::SetVertex2) );

}

