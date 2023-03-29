
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Navigation/NavigationMesh.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Navigation/NavigationMesh.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_NavigationMesh(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::NavigationMesh::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::NavigationMesh::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::NavigationMesh>((Urho3D::NavigationMesh*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::NavigationMesh>( "NavigationMesh"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::NavigationMesh>(context);
        });

// Members

    /*Set tile size. BIND_AS_PROPERTY*//*(int size)*/
    type["SetTileSize"] = static_cast<void (Urho3D::NavigationMesh::*)(int)>(&Urho3D::NavigationMesh::SetTileSize) ;
    /*Set cell size. BIND_AS_PROPERTY*//*(float size)*/
    type["SetCellSize"] = static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetCellSize) ;
    /*Set cell height. BIND_AS_PROPERTY*//*(float height)*/
    type["SetCellHeight"] = static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetCellHeight) ;
    /*Set navigation agent height. BIND_AS_PROPERTY*//*(float height)*/
    type["SetAgentHeight"] = static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetAgentHeight) ;
    /*Set navigation agent radius. BIND_AS_PROPERTY*//*(float radius)*/
    type["SetAgentRadius"] = static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetAgentRadius) ;
    /*Set navigation agent max vertical climb. BIND_AS_PROPERTY*//*(float maxClimb)*/
    type["SetAgentMaxClimb"] = static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetAgentMaxClimb) ;
    /*Set navigation agent max slope. BIND_AS_PROPERTY*//*(float maxSlope)*/
    type["SetAgentMaxSlope"] = static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetAgentMaxSlope) ;
    /*Set region minimum size. BIND_AS_PROPERTY*//*(float size)*/
    type["SetRegionMinSize"] = static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetRegionMinSize) ;
    /*Set region merge size. BIND_AS_PROPERTY*//*(float size)*/
    type["SetRegionMergeSize"] = static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetRegionMergeSize) ;
    /*Set edge max length. BIND_AS_PROPERTY*//*(float length)*/
    type["SetEdgeMaxLength"] = static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetEdgeMaxLength) ;
    /*Set edge max error. BIND_AS_PROPERTY*//*(float error)*/
    type["SetEdgeMaxError"] = static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetEdgeMaxError) ;
    /*Set detail sampling distance. BIND_AS_PROPERTY*//*(float distance)*/
    type["SetDetailSampleDistance"] = static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetDetailSampleDistance) ;
    /*Set detail sampling maximum error. BIND_AS_PROPERTY*//*(float error)*/
    type["SetDetailSampleMaxError"] = static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetDetailSampleMaxError) ;
    /*Set padding of the navigation mesh bounding box. Having enough padding allows to add geometry on the extremities of the navigation mesh when doing partial rebuilds. BIND_AS_PROPERTY*//*(const Vector3 &padding)*/
    type["SetPadding"] = static_cast<void (Urho3D::NavigationMesh::*)(const  Vector3 &)>(&Urho3D::NavigationMesh::SetPadding) ;
    /*Set the cost of an area.*//*(unsigned areaID, float cost)*/
    type["SetAreaCost"] = static_cast<void (Urho3D::NavigationMesh::*)(unsigned, float)>(&Urho3D::NavigationMesh::SetAreaCost) ;
    /*Allocate the navigation mesh without building any tiles. Bounding box is not padded. Return true if successful.*//*(const BoundingBox &boundingBox, unsigned maxTiles)*/
    type["Allocate"] = static_cast<bool (Urho3D::NavigationMesh::*)(const  BoundingBox &, unsigned)>(&Urho3D::NavigationMesh::Allocate) ;
    /*Return tile data.*//*(const IntVector2 &tile) const*/
    type["GetTileData"] = static_cast<PODVector<unsigned char> (Urho3D::NavigationMesh::*)(const  IntVector2 &) const>(&Urho3D::NavigationMesh::GetTileData) ;
    /*Add tile to navigation mesh.*//*(const PODVector< unsigned char > &tileData)*/
    type["AddTile"] = static_cast<bool (Urho3D::NavigationMesh::*)(const  PODVector< unsigned char > &)>(&Urho3D::NavigationMesh::AddTile) ;
    /*Remove tile from navigation mesh.*//*(const IntVector2 &tile)*/
    type["RemoveTile"] = static_cast<void (Urho3D::NavigationMesh::*)(const  IntVector2 &)>(&Urho3D::NavigationMesh::RemoveTile) ;
    /*Remove all tiles from navigation mesh.*//*()*/
    type["RemoveAllTiles"] = static_cast<void (Urho3D::NavigationMesh::*)()>(&Urho3D::NavigationMesh::RemoveAllTiles) ;
    /*Return whether the navigation mesh has tile.*//*(const IntVector2 &tile) const*/
    type["HasTile"] = static_cast<bool (Urho3D::NavigationMesh::*)(const  IntVector2 &) const>(&Urho3D::NavigationMesh::HasTile) ;
    /*Return bounding box of the tile in the node space.*//*(const IntVector2 &tile) const*/
    type["GetTileBoundingBox"] = static_cast<BoundingBox (Urho3D::NavigationMesh::*)(const  IntVector2 &) const>(&Urho3D::NavigationMesh::GetTileBoundingBox) ;
    /*Return index of the tile at the position.*//*(const Vector3 &position) const*/
    type["GetTileIndex"] = static_cast<IntVector2 (Urho3D::NavigationMesh::*)(const  Vector3 &) const>(&Urho3D::NavigationMesh::GetTileIndex) ;
    /*Return the given name of this navigation mesh.*//*() const*/
    type["GetMeshName"] = static_cast<String (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetMeshName) ;
    /*Set the name of this navigation mesh.*//*(const String &newName)*/
    type["SetMeshName"] = static_cast<void (Urho3D::NavigationMesh::*)(const  String &)>(&Urho3D::NavigationMesh::SetMeshName) ;
    /*Return tile size. BIND_AS_PROPERTY*//*() const*/
    type["GetTileSize"] = static_cast<int (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetTileSize) ;
    /*Return cell size. BIND_AS_PROPERTY*//*() const*/
    type["GetCellSize"] = static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetCellSize) ;
    /*Return cell height. BIND_AS_PROPERTY*//*() const*/
    type["GetCellHeight"] = static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetCellHeight) ;
    /*Return navigation agent height. BIND_AS_PROPERTY*//*() const*/
    type["GetAgentHeight"] = static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetAgentHeight) ;
    /*Return navigation agent radius. BIND_AS_PROPERTY*//*() const*/
    type["GetAgentRadius"] = static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetAgentRadius) ;
    /*Return navigation agent max vertical climb. BIND_AS_PROPERTY*//*() const*/
    type["GetAgentMaxClimb"] = static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetAgentMaxClimb) ;
    /*Return navigation agent max slope. BIND_AS_PROPERTY*//*() const*/
    type["GetAgentMaxSlope"] = static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetAgentMaxSlope) ;
    /*Return region minimum size. BIND_AS_PROPERTY*//*() const*/
    type["GetRegionMinSize"] = static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetRegionMinSize) ;
    /*Return region merge size. BIND_AS_PROPERTY*//*() const*/
    type["GetRegionMergeSize"] = static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetRegionMergeSize) ;
    /*Return edge max length. BIND_AS_PROPERTY*//*() const*/
    type["GetEdgeMaxLength"] = static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetEdgeMaxLength) ;
    /*Return edge max error. BIND_AS_PROPERTY*//*() const*/
    type["GetEdgeMaxError"] = static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetEdgeMaxError) ;
    /*Return detail sampling distance. BIND_AS_PROPERTY*//*() const*/
    type["GetDetailSampleDistance"] = static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetDetailSampleDistance) ;
    /*Return detail sampling maximum error. BIND_AS_PROPERTY*//*() const*/
    type["GetDetailSampleMaxError"] = static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetDetailSampleMaxError) ;
    /*Return navigation mesh bounding box padding. BIND_AS_PROPERTY*//*() const*/
    type["GetPadding"] = static_cast<const Vector3& (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetPadding) ;
    /*Get the current cost of an area.*//*(unsigned areaID) const*/
    type["GetAreaCost"] = static_cast<float (Urho3D::NavigationMesh::*)(unsigned) const>(&Urho3D::NavigationMesh::GetAreaCost) ;
    /*Return whether has been initialized with valid navigation data. BIND_AS_PROPERTY*//*() const*/
    type["IsInitialized"] = static_cast<bool (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::IsInitialized) ;
    /*Return local space bounding box of the navigation mesh. BIND_AS_PROPERTY*//*() const*/
    type["GetBoundingBox"] = static_cast<const BoundingBox& (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetBoundingBox) ;
    /*Return world space bounding box of the navigation mesh. BIND_AS_PROPERTY*//*() const*/
    type["GetWorldBoundingBox"] = static_cast<BoundingBox (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetWorldBoundingBox) ;
    /*Return number of tiles. BIND_AS_PROPERTY*//*() const*/
    type["GetNumTiles"] = static_cast<IntVector2 (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetNumTiles) ;
    /*Set the partition type used for polygon generation. BIND_AS_PROPERTY*//*(NavmeshPartitionType partitionType)*/
    type["SetPartitionType"] = static_cast<void (Urho3D::NavigationMesh::*)(NavmeshPartitionType)>(&Urho3D::NavigationMesh::SetPartitionType) ;
    /*Return Partition Type. BIND_AS_PROPERTY*//*() const*/
    type["GetPartitionType"] = static_cast<NavmeshPartitionType (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetPartitionType) ;
    /*Set navigation data attribute.*//*(const PODVector< unsigned char > &value)*/
    type["SetNavigationDataAttr"] = static_cast<void (Urho3D::NavigationMesh::*)(const  PODVector< unsigned char > &)>(&Urho3D::NavigationMesh::SetNavigationDataAttr) ;
    /*Return navigation data attribute.*//*() const*/
    type["GetNavigationDataAttr"] = static_cast<PODVector<unsigned char> (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetNavigationDataAttr) ;
    /*Draw debug geometry for  OffMeshConnection components. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetDrawOffMeshConnections"] = static_cast<void (Urho3D::NavigationMesh::*)(bool)>(&Urho3D::NavigationMesh::SetDrawOffMeshConnections) ;
    /*Return whether to draw  OffMeshConnection components. BIND_AS_PROPERTY*//*() const*/
    type["GetDrawOffMeshConnections"] = static_cast<bool (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetDrawOffMeshConnections) ;
    /*Draw debug geometry for  NavArea components. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetDrawNavAreas"] = static_cast<void (Urho3D::NavigationMesh::*)(bool)>(&Urho3D::NavigationMesh::SetDrawNavAreas) ;
    /*Return whether to draw  NavArea components. BIND_AS_PROPERTY*//*() const*/
    type["GetDrawNavAreas"] = static_cast<bool (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetDrawNavAreas) ;
    type["DrawDebugGeometry"] = sol::overload(
        static_cast<void (Urho3D::NavigationMesh::*)(DebugRenderer *, bool)>(&Urho3D::NavigationMesh::DrawDebugGeometry) ,
        static_cast<void (Urho3D::NavigationMesh::*)(bool)>(&Urho3D::NavigationMesh::DrawDebugGeometry)  );
    type["Build"] = sol::overload(
        static_cast<bool (Urho3D::NavigationMesh::*)()>(&Urho3D::NavigationMesh::Build) ,
        static_cast<bool (Urho3D::NavigationMesh::*)(const  BoundingBox &)>(&Urho3D::NavigationMesh::Build) ,
        static_cast<bool (Urho3D::NavigationMesh::*)(const  IntVector2 &, const  IntVector2 &)>(&Urho3D::NavigationMesh::Build)  );
    type["FindNearestPoint"] = sol::overload(
        static_cast<Vector3 (Urho3D::NavigationMesh::*)(const  Vector3 &, const  Vector3 &, const dtQueryFilter *, dtPolyRef *)>(&Urho3D::NavigationMesh::FindNearestPoint) ,
        [](Urho3D::NavigationMesh& self, const  Vector3 & point, const  Vector3 & extents, const dtQueryFilter * filter){ return self.FindNearestPoint(point, extents, filter); },
        [](Urho3D::NavigationMesh& self, const  Vector3 & point, const  Vector3 & extents){ return self.FindNearestPoint(point, extents); },
        [](Urho3D::NavigationMesh& self, const  Vector3 & point){ return self.FindNearestPoint(point); } );
    type["MoveAlongSurface"] = sol::overload(
        static_cast<Vector3 (Urho3D::NavigationMesh::*)(const  Vector3 &, const  Vector3 &, const  Vector3 &, int, const dtQueryFilter *)>(&Urho3D::NavigationMesh::MoveAlongSurface) ,
        [](Urho3D::NavigationMesh& self, const  Vector3 & start, const  Vector3 & end, const  Vector3 & extents, int maxVisited){ return self.MoveAlongSurface(start, end, extents, maxVisited); },
        [](Urho3D::NavigationMesh& self, const  Vector3 & start, const  Vector3 & end, const  Vector3 & extents){ return self.MoveAlongSurface(start, end, extents); },
        [](Urho3D::NavigationMesh& self, const  Vector3 & start, const  Vector3 & end){ return self.MoveAlongSurface(start, end); } );
    type["FindPath"] = sol::overload(
        static_cast<void (Urho3D::NavigationMesh::*)(PODVector<  Vector3 > &, const  Vector3 &, const  Vector3 &, const  Vector3 &, const dtQueryFilter *)>(&Urho3D::NavigationMesh::FindPath) ,
        [](Urho3D::NavigationMesh& self, PODVector<  Vector3 > & dest, const  Vector3 & start, const  Vector3 & end, const  Vector3 & extents){ self.FindPath(dest, start, end, extents); },
        [](Urho3D::NavigationMesh& self, PODVector<  Vector3 > & dest, const  Vector3 & start, const  Vector3 & end){ self.FindPath(dest, start, end); },
        static_cast<void (Urho3D::NavigationMesh::*)(PODVector<  NavigationPathPoint > &, const  Vector3 &, const  Vector3 &, const  Vector3 &, const dtQueryFilter *)>(&Urho3D::NavigationMesh::FindPath) ,
        [](Urho3D::NavigationMesh& self, PODVector<  NavigationPathPoint > & dest, const  Vector3 & start, const  Vector3 & end, const  Vector3 & extents){ self.FindPath(dest, start, end, extents); },
        [](Urho3D::NavigationMesh& self, PODVector<  NavigationPathPoint > & dest, const  Vector3 & start, const  Vector3 & end){ self.FindPath(dest, start, end); } );
    type["GetRandomPoint"] = sol::overload(
        static_cast<Vector3 (Urho3D::NavigationMesh::*)(const dtQueryFilter *, dtPolyRef *)>(&Urho3D::NavigationMesh::GetRandomPoint) ,
        [](Urho3D::NavigationMesh& self, const dtQueryFilter * filter){ return self.GetRandomPoint(filter); },
        [](Urho3D::NavigationMesh& self){ return self.GetRandomPoint(); } );
    type["GetRandomPointInCircle"] = sol::overload(
        static_cast<Vector3 (Urho3D::NavigationMesh::*)(const  Vector3 &, float, const  Vector3 &, const dtQueryFilter *, dtPolyRef *)>(&Urho3D::NavigationMesh::GetRandomPointInCircle) ,
        [](Urho3D::NavigationMesh& self, const  Vector3 & center, float radius, const  Vector3 & extents, const dtQueryFilter * filter){ return self.GetRandomPointInCircle(center, radius, extents, filter); },
        [](Urho3D::NavigationMesh& self, const  Vector3 & center, float radius, const  Vector3 & extents){ return self.GetRandomPointInCircle(center, radius, extents); },
        [](Urho3D::NavigationMesh& self, const  Vector3 & center, float radius){ return self.GetRandomPointInCircle(center, radius); } );
    type["GetDistanceToWall"] = sol::overload(
        static_cast<float (Urho3D::NavigationMesh::*)(const  Vector3 &, float, const  Vector3 &, const dtQueryFilter *, Vector3 *, Vector3 *)>(&Urho3D::NavigationMesh::GetDistanceToWall) ,
        [](Urho3D::NavigationMesh& self, const  Vector3 & point, float radius, const  Vector3 & extents, const dtQueryFilter * filter, Vector3 * hitPos){ return self.GetDistanceToWall(point, radius, extents, filter, hitPos); },
        [](Urho3D::NavigationMesh& self, const  Vector3 & point, float radius, const  Vector3 & extents, const dtQueryFilter * filter){ return self.GetDistanceToWall(point, radius, extents, filter); },
        [](Urho3D::NavigationMesh& self, const  Vector3 & point, float radius, const  Vector3 & extents){ return self.GetDistanceToWall(point, radius, extents); },
        [](Urho3D::NavigationMesh& self, const  Vector3 & point, float radius){ return self.GetDistanceToWall(point, radius); } );
    type["Raycast"] = sol::overload(
        static_cast<Vector3 (Urho3D::NavigationMesh::*)(const  Vector3 &, const  Vector3 &, const  Vector3 &, const dtQueryFilter *, Vector3 *)>(&Urho3D::NavigationMesh::Raycast) ,
        [](Urho3D::NavigationMesh& self, const  Vector3 & start, const  Vector3 & end, const  Vector3 & extents, const dtQueryFilter * filter){ return self.Raycast(start, end, extents, filter); },
        [](Urho3D::NavigationMesh& self, const  Vector3 & start, const  Vector3 & end, const  Vector3 & extents){ return self.Raycast(start, end, extents); },
        [](Urho3D::NavigationMesh& self, const  Vector3 & start, const  Vector3 & end){ return self.Raycast(start, end); } );
    type["agentHeight"] = sol::property(static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetAgentHeight) 
        , static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetAgentHeight) );
    type["agentMaxClimb"] = sol::property(static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetAgentMaxClimb) 
        , static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetAgentMaxClimb) );
    type["agentMaxSlope"] = sol::property(static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetAgentMaxSlope) 
        , static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetAgentMaxSlope) );
    type["agentRadius"] = sol::property(static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetAgentRadius) 
        , static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetAgentRadius) );
    type["boundingBox"] = sol::property(static_cast<const BoundingBox& (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetBoundingBox) );
    type["cellHeight"] = sol::property(static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetCellHeight) 
        , static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetCellHeight) );
    type["cellSize"] = sol::property(static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetCellSize) 
        , static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetCellSize) );
    type["detailSampleDistance"] = sol::property(static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetDetailSampleDistance) 
        , static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetDetailSampleDistance) );
    type["detailSampleMaxError"] = sol::property(static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetDetailSampleMaxError) 
        , static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetDetailSampleMaxError) );
    type["drawNavAreas"] = sol::property(static_cast<bool (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetDrawNavAreas) 
        , static_cast<void (Urho3D::NavigationMesh::*)(bool)>(&Urho3D::NavigationMesh::SetDrawNavAreas) );
    type["drawOffMeshConnections"] = sol::property(static_cast<bool (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetDrawOffMeshConnections) 
        , static_cast<void (Urho3D::NavigationMesh::*)(bool)>(&Urho3D::NavigationMesh::SetDrawOffMeshConnections) );
    type["edgeMaxError"] = sol::property(static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetEdgeMaxError) 
        , static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetEdgeMaxError) );
    type["edgeMaxLength"] = sol::property(static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetEdgeMaxLength) 
        , static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetEdgeMaxLength) );
    type["initialized"] = sol::property(static_cast<bool (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::IsInitialized) );
    type["numTiles"] = sol::property(static_cast<IntVector2 (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetNumTiles) );
    type["padding"] = sol::property(static_cast<const Vector3& (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetPadding) 
        , static_cast<void (Urho3D::NavigationMesh::*)(const  Vector3 &)>(&Urho3D::NavigationMesh::SetPadding) );
    type["partitionType"] = sol::property(static_cast<NavmeshPartitionType (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetPartitionType) 
        , static_cast<void (Urho3D::NavigationMesh::*)(NavmeshPartitionType)>(&Urho3D::NavigationMesh::SetPartitionType) );
    type["regionMergeSize"] = sol::property(static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetRegionMergeSize) 
        , static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetRegionMergeSize) );
    type["regionMinSize"] = sol::property(static_cast<float (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetRegionMinSize) 
        , static_cast<void (Urho3D::NavigationMesh::*)(float)>(&Urho3D::NavigationMesh::SetRegionMinSize) );
    type["tileSize"] = sol::property(static_cast<int (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetTileSize) 
        , static_cast<void (Urho3D::NavigationMesh::*)(int)>(&Urho3D::NavigationMesh::SetTileSize) );
    type["worldBoundingBox"] = sol::property(static_cast<BoundingBox (Urho3D::NavigationMesh::*)() const>(&Urho3D::NavigationMesh::GetWorldBoundingBox) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Navigation/NavigationMesh.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Navigation/NavigationMesh.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Scene/Component.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_NavigationGeometryInfo(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::NavigationGeometryInfo>( "NavigationGeometryInfo"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["component_"] = &Urho3D::NavigationGeometryInfo::component_;
    type["lodLevel_"] = &Urho3D::NavigationGeometryInfo::lodLevel_;
    type["transform_"] = &Urho3D::NavigationGeometryInfo::transform_;
    type["boundingBox_"] = &Urho3D::NavigationGeometryInfo::boundingBox_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Navigation/NavigationMesh.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Navigation/NavigationMesh.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Container/HashSet.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Scene/Component.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_NavigationPathPoint(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::NavigationPathPoint>( "NavigationPathPoint"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["position_"] = &Urho3D::NavigationPathPoint::position_;
    type["flag_"] = &Urho3D::NavigationPathPoint::flag_;
    type["areaID_"] = &Urho3D::NavigationPathPoint::areaID_;

}

