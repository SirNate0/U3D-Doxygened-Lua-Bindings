
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/CollisionChain2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/CollisionChain2D.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CollisionChain2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::CollisionChain2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::CollisionChain2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::CollisionChain2D>((Urho3D::CollisionChain2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::CollisionChain2D>( "CollisionChain2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::CollisionShape2D,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::CollisionChain2D>(context);
        });

// Members

    /*Set loop. BIND_AS_PROPERTY*//*(bool loop)*/
    type["SetLoop"] = static_cast<void (Urho3D::CollisionChain2D::*)(bool)>(&Urho3D::CollisionChain2D::SetLoop) ;
    /*Set vertex count. BIND_AS_PROPERTY*//*(unsigned count)*/
    type["SetVertexCount"] = static_cast<void (Urho3D::CollisionChain2D::*)(unsigned)>(&Urho3D::CollisionChain2D::SetVertexCount) ;
    /*Set vertex.*//*(unsigned index, const Vector2 &vertex)*/
    type["SetVertex"] = static_cast<void (Urho3D::CollisionChain2D::*)(unsigned, const  Vector2 &)>(&Urho3D::CollisionChain2D::SetVertex) ;
    /*Set vertices.*//*(const PODVector< Vector2 > &vertices)*/
    type["SetVertices"] = static_cast<void (Urho3D::CollisionChain2D::*)(const  PODVector<  Vector2 > &)>(&Urho3D::CollisionChain2D::SetVertices) ;
    /*Set vertices attribute.*//*(const PODVector< unsigned char > &value)*/
    type["SetVerticesAttr"] = static_cast<void (Urho3D::CollisionChain2D::*)(const  PODVector< unsigned char > &)>(&Urho3D::CollisionChain2D::SetVerticesAttr) ;
    /*Return loop. BIND_AS_PROPERTY*//*() const*/
    type["GetLoop"] = static_cast<bool (Urho3D::CollisionChain2D::*)() const>(&Urho3D::CollisionChain2D::GetLoop) ;
    /*Return vertex count. BIND_AS_PROPERTY*//*() const*/
    type["GetVertexCount"] = static_cast<unsigned (Urho3D::CollisionChain2D::*)() const>(&Urho3D::CollisionChain2D::GetVertexCount) ;
    /*Return vertex.*//*(unsigned index) const*/
    type["GetVertex"] = static_cast<const Vector2& (Urho3D::CollisionChain2D::*)(unsigned) const>(&Urho3D::CollisionChain2D::GetVertex) ;
    /*Return vertices.*//*() const*/
    type["GetVertices"] = static_cast<const PODVector<Vector2>& (Urho3D::CollisionChain2D::*)() const>(&Urho3D::CollisionChain2D::GetVertices) ;
    /*Return vertices attribute.*//*() const*/
    type["GetVerticesAttr"] = static_cast<PODVector<unsigned char> (Urho3D::CollisionChain2D::*)() const>(&Urho3D::CollisionChain2D::GetVerticesAttr) ;
    type["loop"] = sol::property(static_cast<bool (Urho3D::CollisionChain2D::*)() const>(&Urho3D::CollisionChain2D::GetLoop) 
        , static_cast<void (Urho3D::CollisionChain2D::*)(bool)>(&Urho3D::CollisionChain2D::SetLoop) );
    type["vertexCount"] = sol::property(static_cast<unsigned (Urho3D::CollisionChain2D::*)() const>(&Urho3D::CollisionChain2D::GetVertexCount) 
        , static_cast<void (Urho3D::CollisionChain2D::*)(unsigned)>(&Urho3D::CollisionChain2D::SetVertexCount) );

}

