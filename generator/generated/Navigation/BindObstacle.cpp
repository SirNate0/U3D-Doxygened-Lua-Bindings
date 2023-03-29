
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Navigation/Obstacle.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Navigation/Obstacle.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Obstacle(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Obstacle::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Obstacle::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Obstacle>((Urho3D::Obstacle*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Obstacle>( "Obstacle"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Obstacle>(context);
        });

// Members

    /*Update the owning mesh when enabled status has changed.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::Obstacle::*)()>(&Urho3D::Obstacle::OnSetEnabled) ;
    /*Get the height of this obstacle. BIND_AS_PROPERTY*//*() const*/
    type["GetHeight"] = static_cast<float (Urho3D::Obstacle::*)() const>(&Urho3D::Obstacle::GetHeight) ;
    /*Set the height of this obstacle. BIND_AS_PROPERTY*//*(float newHeight)*/
    type["SetHeight"] = static_cast<void (Urho3D::Obstacle::*)(float)>(&Urho3D::Obstacle::SetHeight) ;
    /*Get the blocking radius of this obstacle. BIND_AS_PROPERTY*//*() const*/
    type["GetRadius"] = static_cast<float (Urho3D::Obstacle::*)() const>(&Urho3D::Obstacle::GetRadius) ;
    /*Set the blocking radius of this obstacle. BIND_AS_PROPERTY*//*(float newRadius)*/
    type["SetRadius"] = static_cast<void (Urho3D::Obstacle::*)(float)>(&Urho3D::Obstacle::SetRadius) ;
    /*Get the internal obstacle ID. BIND_AS_ALIAS_get_obstacleId*//*() const*/
    type["GetObstacleID"] = static_cast<unsigned (Urho3D::Obstacle::*)() const>(&Urho3D::Obstacle::GetObstacleID) ;
    type["DrawDebugGeometry"] = sol::overload(
        static_cast<void (Urho3D::Obstacle::*)(DebugRenderer *, bool)>(&Urho3D::Obstacle::DrawDebugGeometry) ,
        static_cast<void (Urho3D::Obstacle::*)(bool)>(&Urho3D::Obstacle::DrawDebugGeometry)  );
    type["height"] = sol::property(static_cast<float (Urho3D::Obstacle::*)() const>(&Urho3D::Obstacle::GetHeight) 
        , static_cast<void (Urho3D::Obstacle::*)(float)>(&Urho3D::Obstacle::SetHeight) );
    type["obstacleID"] = sol::property(static_cast<unsigned (Urho3D::Obstacle::*)() const>(&Urho3D::Obstacle::GetObstacleID) );
    type["radius"] = sol::property(static_cast<float (Urho3D::Obstacle::*)() const>(&Urho3D::Obstacle::GetRadius) 
        , static_cast<void (Urho3D::Obstacle::*)(float)>(&Urho3D::Obstacle::SetRadius) );

}

