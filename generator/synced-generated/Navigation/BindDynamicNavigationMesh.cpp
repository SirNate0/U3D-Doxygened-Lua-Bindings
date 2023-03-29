
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Navigation/DynamicNavigationMesh.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Navigation/DynamicNavigationMesh.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Navigation/Obstacle.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_DynamicNavigationMesh(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::DynamicNavigationMesh::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::DynamicNavigationMesh::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::DynamicNavigationMesh>((Urho3D::DynamicNavigationMesh*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::DynamicNavigationMesh>( "DynamicNavigationMesh"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::NavigationMesh,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::DynamicNavigationMesh>(context);
        });

// Members

    /*Allocate the navigation mesh without building any tiles. Bounding box is not padded. Return true if successful.*//*(const BoundingBox &boundingBox, unsigned maxTiles) override*/
    type["Allocate"] = static_cast<bool (Urho3D::DynamicNavigationMesh::*)(const  BoundingBox &, unsigned)>(&Urho3D::DynamicNavigationMesh::Allocate) ;
    /*Return tile data.*//*(const IntVector2 &tile) const override*/
    type["GetTileData"] = static_cast<PODVector<unsigned char> (Urho3D::DynamicNavigationMesh::*)(const  IntVector2 &) const>(&Urho3D::DynamicNavigationMesh::GetTileData) ;
    /*Return whether the  Obstacle is touching the given tile.*//*(Obstacle *obstacle, const IntVector2 &tile) const*/
    type["IsObstacleInTile"] = static_cast<bool (Urho3D::DynamicNavigationMesh::*)(Obstacle *, const  IntVector2 &) const>(&Urho3D::DynamicNavigationMesh::IsObstacleInTile) ;
    /*Add tile to navigation mesh.*//*(const PODVector< unsigned char > &tileData) override*/
    type["AddTile"] = static_cast<bool (Urho3D::DynamicNavigationMesh::*)(const  PODVector< unsigned char > &)>(&Urho3D::DynamicNavigationMesh::AddTile) ;
    /*Remove tile from navigation mesh.*//*(const IntVector2 &tile) override*/
    type["RemoveTile"] = static_cast<void (Urho3D::DynamicNavigationMesh::*)(const  IntVector2 &)>(&Urho3D::DynamicNavigationMesh::RemoveTile) ;
    /*Remove all tiles from navigation mesh.*//*() override*/
    type["RemoveAllTiles"] = static_cast<void (Urho3D::DynamicNavigationMesh::*)()>(&Urho3D::DynamicNavigationMesh::RemoveAllTiles) ;
    /*Set navigation data attribute.*//*(const PODVector< unsigned char > &value) override*/
    type["SetNavigationDataAttr"] = static_cast<void (Urho3D::DynamicNavigationMesh::*)(const  PODVector< unsigned char > &)>(&Urho3D::DynamicNavigationMesh::SetNavigationDataAttr) ;
    /*Return navigation data attribute.*//*() const override*/
    type["GetNavigationDataAttr"] = static_cast<PODVector<unsigned char> (Urho3D::DynamicNavigationMesh::*)() const>(&Urho3D::DynamicNavigationMesh::GetNavigationDataAttr) ;
    /*Set the maximum number of obstacles allowed. BIND_AS_PROPERTY*//*(unsigned maxObstacles)*/
    type["SetMaxObstacles"] = static_cast<void (Urho3D::DynamicNavigationMesh::*)(unsigned)>(&Urho3D::DynamicNavigationMesh::SetMaxObstacles) ;
    /*Set the maximum number of layers that navigation construction can create. BIND_AS_PROPERTY*//*(unsigned maxLayers)*/
    type["SetMaxLayers"] = static_cast<void (Urho3D::DynamicNavigationMesh::*)(unsigned)>(&Urho3D::DynamicNavigationMesh::SetMaxLayers) ;
    /*Return the maximum number of obstacles allowed. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxObstacles"] = static_cast<unsigned (Urho3D::DynamicNavigationMesh::*)() const>(&Urho3D::DynamicNavigationMesh::GetMaxObstacles) ;
    /*Return the maximum number of layers permitted to build. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxLayers"] = static_cast<unsigned (Urho3D::DynamicNavigationMesh::*)() const>(&Urho3D::DynamicNavigationMesh::GetMaxLayers) ;
    /*Draw debug geometry for Obstacles. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetDrawObstacles"] = static_cast<void (Urho3D::DynamicNavigationMesh::*)(bool)>(&Urho3D::DynamicNavigationMesh::SetDrawObstacles) ;
    /*Return whether to draw Obstacles. BIND_AS_PROPERTY*//*() const*/
    type["GetDrawObstacles"] = static_cast<bool (Urho3D::DynamicNavigationMesh::*)() const>(&Urho3D::DynamicNavigationMesh::GetDrawObstacles) ;
    type["Build"] = sol::overload(
        static_cast<bool (Urho3D::DynamicNavigationMesh::*)()>(&Urho3D::DynamicNavigationMesh::Build) ,
        static_cast<bool (Urho3D::DynamicNavigationMesh::*)(const  BoundingBox &)>(&Urho3D::DynamicNavigationMesh::Build) ,
        static_cast<bool (Urho3D::DynamicNavigationMesh::*)(const  IntVector2 &, const  IntVector2 &)>(&Urho3D::DynamicNavigationMesh::Build)  );
    type["DrawDebugGeometry"] = sol::overload(
        static_cast<void (Urho3D::DynamicNavigationMesh::*)(DebugRenderer *, bool)>(&Urho3D::DynamicNavigationMesh::DrawDebugGeometry) ,
        static_cast<void (Urho3D::DynamicNavigationMesh::*)(bool)>(&Urho3D::DynamicNavigationMesh::DrawDebugGeometry)  );
    type["drawObstacles"] = sol::property(static_cast<bool (Urho3D::DynamicNavigationMesh::*)() const>(&Urho3D::DynamicNavigationMesh::GetDrawObstacles) 
        , static_cast<void (Urho3D::DynamicNavigationMesh::*)(bool)>(&Urho3D::DynamicNavigationMesh::SetDrawObstacles) );
    type["maxLayers"] = sol::property(static_cast<unsigned (Urho3D::DynamicNavigationMesh::*)() const>(&Urho3D::DynamicNavigationMesh::GetMaxLayers) 
        , static_cast<void (Urho3D::DynamicNavigationMesh::*)(unsigned)>(&Urho3D::DynamicNavigationMesh::SetMaxLayers) );
    type["maxObstacles"] = sol::property(static_cast<unsigned (Urho3D::DynamicNavigationMesh::*)() const>(&Urho3D::DynamicNavigationMesh::GetMaxObstacles) 
        , static_cast<void (Urho3D::DynamicNavigationMesh::*)(unsigned)>(&Urho3D::DynamicNavigationMesh::SetMaxObstacles) );

}

