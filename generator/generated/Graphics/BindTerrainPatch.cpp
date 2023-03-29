
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/TerrainPatch.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/TerrainPatch.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/Geometry.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/OcclusionBuffer.h>
#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Graphics/Terrain.h>
#include <Urho3D/Graphics/TerrainPatch.h>
#include <Urho3D/Graphics/VertexBuffer.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Scene/Component.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_TerrainPatch(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::TerrainPatch::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::TerrainPatch::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::TerrainPatch>((Urho3D::TerrainPatch*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::TerrainPatch>( "TerrainPatch"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::TerrainPatch>(context);
        });

// Members

    /*Process octree raycast. May be called from a worker thread.*//*(const RayOctreeQuery &query, PODVector< RayQueryResult > &results) override*/
    type["ProcessRayQuery"] = static_cast<void (Urho3D::TerrainPatch::*)(const  RayOctreeQuery &, PODVector<  RayQueryResult > &)>(&Urho3D::TerrainPatch::ProcessRayQuery) ;
    /*Calculate distance and prepare batches for rendering. May be called from worker thread(s), possibly re-entrantly.*//*(const FrameInfo &frame) override*/
    type["UpdateBatches"] = static_cast<void (Urho3D::TerrainPatch::*)(const  FrameInfo &)>(&Urho3D::TerrainPatch::UpdateBatches) ;
    /*Prepare geometry for rendering. Called from a worker thread if possible (no GPU update).*//*(const FrameInfo &frame) override*/
    type["UpdateGeometry"] = static_cast<void (Urho3D::TerrainPatch::*)(const  FrameInfo &)>(&Urho3D::TerrainPatch::UpdateGeometry) ;
    /*Return whether a geometry update is necessary, and if it can happen in a worker thread.*//*() override*/
    type["GetUpdateGeometryType"] = static_cast<UpdateGeometryType (Urho3D::TerrainPatch::*)()>(&Urho3D::TerrainPatch::GetUpdateGeometryType) ;
    /*Return the geometry for a specific LOD level.*//*(unsigned batchIndex, unsigned level) override*/
    type["GetLodGeometry"] = [](Urho3D::TerrainPatch& self, unsigned batchIndex, unsigned level, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetLodGeometry(batchIndex, level));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return number of occlusion geometry triangles.*//*() override*/
    type["GetNumOccluderTriangles"] = static_cast<unsigned (Urho3D::TerrainPatch::*)()>(&Urho3D::TerrainPatch::GetNumOccluderTriangles) ;
    /*Draw to occlusion buffer. Return true if did not run out of triangles.*//*(OcclusionBuffer *buffer) override*/
    type["DrawOcclusion"] = static_cast<bool (Urho3D::TerrainPatch::*)(OcclusionBuffer *)>(&Urho3D::TerrainPatch::DrawOcclusion) ;
    /*Visualize the component as debug geometry.*//*(DebugRenderer *debug, bool depthTest) override*/
    type["DrawDebugGeometry"] = static_cast<void (Urho3D::TerrainPatch::*)(DebugRenderer *, bool)>(&Urho3D::TerrainPatch::DrawDebugGeometry) ;
    /*Set owner terrain.*//*(Terrain *terrain)*/
    type["SetOwner"] = static_cast<void (Urho3D::TerrainPatch::*)(Terrain *)>(&Urho3D::TerrainPatch::SetOwner) ;
    /*Set neighbor patches.*//*(TerrainPatch *north, TerrainPatch *south, TerrainPatch *west, TerrainPatch *east)*/
    type["SetNeighbors"] = static_cast<void (Urho3D::TerrainPatch::*)(TerrainPatch *, TerrainPatch *, TerrainPatch *, TerrainPatch *)>(&Urho3D::TerrainPatch::SetNeighbors) ;
    /*Set material.*//*(Material *material)*/
    type["SetMaterial"] = static_cast<void (Urho3D::TerrainPatch::*)(Material *)>(&Urho3D::TerrainPatch::SetMaterial) ;
    /*Set local-space bounding box.*//*(const BoundingBox &box)*/
    type["SetBoundingBox"] = static_cast<void (Urho3D::TerrainPatch::*)(const  BoundingBox &)>(&Urho3D::TerrainPatch::SetBoundingBox) ;
    /*Set patch coordinates.*//*(const IntVector2 &coordinates)*/
    type["SetCoordinates"] = static_cast<void (Urho3D::TerrainPatch::*)(const  IntVector2 &)>(&Urho3D::TerrainPatch::SetCoordinates) ;
    /*Reset to LOD level 0.*//*()*/
    type["ResetLod"] = static_cast<void (Urho3D::TerrainPatch::*)()>(&Urho3D::TerrainPatch::ResetLod) ;
    /*Return visible geometry.*//*() const*/
    type["GetGeometry"] = [](Urho3D::TerrainPatch& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetGeometry());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return max LOD geometry. Used for decals.*//*() const*/
    type["GetMaxLodGeometry"] = [](Urho3D::TerrainPatch& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaxLodGeometry());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return geometry used for occlusion.*//*() const*/
    type["GetOcclusionGeometry"] = [](Urho3D::TerrainPatch& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOcclusionGeometry());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return vertex buffer.*//*() const*/
    type["GetVertexBuffer"] = [](Urho3D::TerrainPatch& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetVertexBuffer());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return owner terrain.*//*() const*/
    type["GetOwner"] = [](Urho3D::TerrainPatch& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOwner());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return north neighbor patch.*//*() const*/
    type["GetNorthPatch"] = [](Urho3D::TerrainPatch& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetNorthPatch());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return south neighbor patch.*//*() const*/
    type["GetSouthPatch"] = [](Urho3D::TerrainPatch& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSouthPatch());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return west neighbor patch.*//*() const*/
    type["GetWestPatch"] = [](Urho3D::TerrainPatch& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetWestPatch());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return east neighbor patch.*//*() const*/
    type["GetEastPatch"] = [](Urho3D::TerrainPatch& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetEastPatch());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return geometrical error array.*//*()*/
    type["GetLodErrors"] = static_cast<PODVector<float>& (Urho3D::TerrainPatch::*)()>(&Urho3D::TerrainPatch::GetLodErrors) ;
    /*Return patch coordinates.*//*() const*/
    type["GetCoordinates"] = static_cast<const IntVector2& (Urho3D::TerrainPatch::*)() const>(&Urho3D::TerrainPatch::GetCoordinates) ;
    /*Return current LOD level.*//*() const*/
    type["GetLodLevel"] = static_cast<unsigned (Urho3D::TerrainPatch::*)() const>(&Urho3D::TerrainPatch::GetLodLevel) ;

}

