
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Drawable.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/Geometry.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Graphics/Light.h>
#include <Urho3D/Graphics/OcclusionBuffer.h>
#include <Urho3D/Graphics/Octree.h>
#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Graphics/Zone.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Scene/Component.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Drawable(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Drawable::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Drawable::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Drawable>((Urho3D::Drawable*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Drawable>( "Drawable"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    /*ABSTRACT*/

// Members

    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::Drawable::*)()>(&Urho3D::Drawable::OnSetEnabled) ;
    /*Process octree raycast. May be called from a worker thread.*//*(const RayOctreeQuery &query, PODVector< RayQueryResult > &results)*/
    type["ProcessRayQuery"] = static_cast<void (Urho3D::Drawable::*)(const  RayOctreeQuery &, PODVector<  RayQueryResult > &)>(&Urho3D::Drawable::ProcessRayQuery) ;
    /*Update before octree reinsertion. Is called from a worker thread.*//*(const FrameInfo &frame)*/
    type["Update"] = static_cast<void (Urho3D::Drawable::*)(const  FrameInfo &)>(&Urho3D::Drawable::Update) ;
    /*Calculate distance and prepare batches for rendering. May be called from worker thread(s), possibly re-entrantly.*//*(const FrameInfo &frame)*/
    type["UpdateBatches"] = static_cast<void (Urho3D::Drawable::*)(const  FrameInfo &)>(&Urho3D::Drawable::UpdateBatches) ;
    /*Prepare geometry for rendering.*//*(const FrameInfo &frame)*/
    type["UpdateGeometry"] = static_cast<void (Urho3D::Drawable::*)(const  FrameInfo &)>(&Urho3D::Drawable::UpdateGeometry) ;
    /*Return whether a geometry update is necessary, and if it can happen in a worker thread.*//*()*/
    type["GetUpdateGeometryType"] = static_cast<UpdateGeometryType (Urho3D::Drawable::*)()>(&Urho3D::Drawable::GetUpdateGeometryType) ;
    /*Return the geometry for a specific LOD level.*//*(unsigned batchIndex, unsigned level)*/
    type["GetLodGeometry"] = [](Urho3D::Drawable& self, unsigned batchIndex, unsigned level, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetLodGeometry(batchIndex, level));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return number of occlusion geometry triangles.*//*()*/
    type["GetNumOccluderTriangles"] = static_cast<unsigned (Urho3D::Drawable::*)()>(&Urho3D::Drawable::GetNumOccluderTriangles) ;
    /*Draw to occlusion buffer. Return true if did not run out of triangles.*//*(OcclusionBuffer *buffer)*/
    type["DrawOcclusion"] = static_cast<bool (Urho3D::Drawable::*)(OcclusionBuffer *)>(&Urho3D::Drawable::DrawOcclusion) ;
    /*Visualize the component as debug geometry.*//*(DebugRenderer *debug, bool depthTest) override*/
    type["DrawDebugGeometry"] = static_cast<void (Urho3D::Drawable::*)(DebugRenderer *, bool)>(&Urho3D::Drawable::DrawDebugGeometry) ;
    /*Set draw distance. BIND_AS_PROPERTY*//*(float distance)*/
    type["SetDrawDistance"] = static_cast<void (Urho3D::Drawable::*)(float)>(&Urho3D::Drawable::SetDrawDistance) ;
    /*Set shadow draw distance. BIND_AS_PROPERTY*//*(float distance)*/
    type["SetShadowDistance"] = static_cast<void (Urho3D::Drawable::*)(float)>(&Urho3D::Drawable::SetShadowDistance) ;
    /*Set LOD bias. BIND_AS_PROPERTY*//*(float bias)*/
    type["SetLodBias"] = static_cast<void (Urho3D::Drawable::*)(float)>(&Urho3D::Drawable::SetLodBias) ;
    /*Set view mask. Is and'ed with camera's view mask to see if the object should be rendered. BIND_AS_PROPERTY*//*(unsigned mask)*/
    type["SetViewMask"] = static_cast<void (Urho3D::Drawable::*)(unsigned)>(&Urho3D::Drawable::SetViewMask) ;
    /*Set light mask. Is and'ed with light's and zone's light mask to see if the object should be lit. BIND_AS_PROPERTY*//*(unsigned mask)*/
    type["SetLightMask"] = static_cast<void (Urho3D::Drawable::*)(unsigned)>(&Urho3D::Drawable::SetLightMask) ;
    /*Set shadow mask. Is and'ed with light's light mask and zone's shadow mask to see if the object should be rendered to a shadow map. BIND_AS_PROPERTY*//*(unsigned mask)*/
    type["SetShadowMask"] = static_cast<void (Urho3D::Drawable::*)(unsigned)>(&Urho3D::Drawable::SetShadowMask) ;
    /*Set zone mask. Is and'ed with zone's zone mask to see if the object should belong to the zone. BIND_AS_PROPERTY*//*(unsigned mask)*/
    type["SetZoneMask"] = static_cast<void (Urho3D::Drawable::*)(unsigned)>(&Urho3D::Drawable::SetZoneMask) ;
    /*Set maximum number of per-pixel lights. Default 0 is unlimited. BIND_AS_PROPERTY*//*(unsigned num)*/
    type["SetMaxLights"] = static_cast<void (Urho3D::Drawable::*)(unsigned)>(&Urho3D::Drawable::SetMaxLights) ;
    /*Set shadowcaster flag. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetCastShadows"] = static_cast<void (Urho3D::Drawable::*)(bool)>(&Urho3D::Drawable::SetCastShadows) ;
    /*Set occlusion flag. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetOccluder"] = static_cast<void (Urho3D::Drawable::*)(bool)>(&Urho3D::Drawable::SetOccluder) ;
    /*Set occludee flag. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetOccludee"] = static_cast<void (Urho3D::Drawable::*)(bool)>(&Urho3D::Drawable::SetOccludee) ;
    /*Mark for update and octree reinsertion. Update is automatically queued when the drawable's scene node moves or changes scale.*//*()*/
    type["MarkForUpdate"] = static_cast<void (Urho3D::Drawable::*)()>(&Urho3D::Drawable::MarkForUpdate) ;
    /*Return local space bounding box. May not be applicable or properly updated on all drawables. BIND_AS_PROPERTY*//*() const*/
    type["GetBoundingBox"] = static_cast<const BoundingBox& (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetBoundingBox) ;
    /*Return world-space bounding box. BIND_AS_PROPERTY*//*()*/
    type["GetWorldBoundingBox"] = static_cast<const BoundingBox& (Urho3D::Drawable::*)()>(&Urho3D::Drawable::GetWorldBoundingBox) ;
    /*Return drawable flags.*//*() const*/
    type["GetDrawableFlags"] = static_cast<unsigned char (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetDrawableFlags) ;
    /*Return draw distance. BIND_AS_PROPERTY*//*() const*/
    type["GetDrawDistance"] = static_cast<float (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetDrawDistance) ;
    /*Return shadow draw distance. BIND_AS_PROPERTY*//*() const*/
    type["GetShadowDistance"] = static_cast<float (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetShadowDistance) ;
    /*Return LOD bias. BIND_AS_PROPERTY*//*() const*/
    type["GetLodBias"] = static_cast<float (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetLodBias) ;
    /*Return view mask. BIND_AS_PROPERTY*//*() const*/
    type["GetViewMask"] = static_cast<unsigned (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetViewMask) ;
    /*Return light mask. BIND_AS_PROPERTY*//*() const*/
    type["GetLightMask"] = static_cast<unsigned (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetLightMask) ;
    /*Return shadow mask. BIND_AS_PROPERTY*//*() const*/
    type["GetShadowMask"] = static_cast<unsigned (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetShadowMask) ;
    /*Return zone mask. BIND_AS_PROPERTY*//*() const*/
    type["GetZoneMask"] = static_cast<unsigned (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetZoneMask) ;
    /*Return maximum number of per-pixel lights. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxLights"] = static_cast<unsigned (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetMaxLights) ;
    /*Return shadowcaster flag. BIND_AS_PROPERTY*//*() const*/
    type["GetCastShadows"] = static_cast<bool (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetCastShadows) ;
    /*Return occluder flag. BIND_AS_PROPERTY*//*() const*/
    type["IsOccluder"] = static_cast<bool (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::IsOccluder) ;
    /*Return occludee flag. BIND_AS_PROPERTY*//*() const*/
    type["IsOccludee"] = static_cast<bool (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::IsOccludee) ;
    /*Return draw call source data.*//*() const*/
    type["GetBatches"] = static_cast<const Vector<SourceBatch>& (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetBatches) ;
    /*Set sorting value.*//*(float value)*/
    type["SetSortValue"] = static_cast<void (Urho3D::Drawable::*)(float)>(&Urho3D::Drawable::SetSortValue) ;
    /*Set view-space depth bounds.*//*(float minZ, float maxZ)*/
    type["SetMinMaxZ"] = static_cast<void (Urho3D::Drawable::*)(float, float)>(&Urho3D::Drawable::SetMinMaxZ) ;
    /*Sort and limit per-pixel lights to maximum allowed. Convert extra lights into vertex lights.*//*()*/
    type["LimitLights"] = static_cast<void (Urho3D::Drawable::*)()>(&Urho3D::Drawable::LimitLights) ;
    /*Sort and limit per-vertex lights to maximum allowed.*//*(bool removeConvertedLights)*/
    type["LimitVertexLights"] = static_cast<void (Urho3D::Drawable::*)(bool)>(&Urho3D::Drawable::LimitVertexLights) ;
    /*Set base pass flag for a batch.*//*(unsigned batchIndex)*/
    type["SetBasePass"] = static_cast<void (Urho3D::Drawable::*)(unsigned)>(&Urho3D::Drawable::SetBasePass) ;
    /*Return octree octant.*//*() const*/
    type["GetOctant"] = static_cast<Octant* (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetOctant) ;
    /*Return current zone. BIND_AS_PROPERTY*//*() const*/
    type["GetZone"] = [](Urho3D::Drawable& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetZone());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return whether current zone is inconclusive or dirty due to the drawable moving.*//*() const*/
    type["IsZoneDirty"] = static_cast<bool (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::IsZoneDirty) ;
    /*Return distance from camera.*//*() const*/
    type["GetDistance"] = static_cast<float (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetDistance) ;
    /*Return LOD scaled distance from camera.*//*() const*/
    type["GetLodDistance"] = static_cast<float (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetLodDistance) ;
    /*Return sorting value.*//*() const*/
    type["GetSortValue"] = static_cast<float (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetSortValue) ;
    /*Return whether has a base pass.*//*(unsigned batchIndex) const*/
    type["HasBasePass"] = static_cast<bool (Urho3D::Drawable::*)(unsigned) const>(&Urho3D::Drawable::HasBasePass) ;
    /*Return per-pixel lights.*//*() const*/
    type["GetLights"] = static_cast<const PODVector<Light*>& (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetLights) ;
    /*Return per-vertex lights.*//*() const*/
    type["GetVertexLights"] = static_cast<const PODVector<Light*>& (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetVertexLights) ;
    /*Return the first added per-pixel light.*//*() const*/
    type["GetFirstLight"] = [](Urho3D::Drawable& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFirstLight());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the minimum view-space depth.*//*() const*/
    type["GetMinZ"] = static_cast<float (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetMinZ) ;
    /*Return the maximum view-space depth.*//*() const*/
    type["GetMaxZ"] = static_cast<float (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetMaxZ) ;
    /*Add a per-pixel light affecting the object this frame.*//*(Light *light)*/
    type["AddLight"] = static_cast<void (Urho3D::Drawable::*)(Light *)>(&Urho3D::Drawable::AddLight) ;
    /*Add a per-vertex light affecting the object this frame.*//*(Light *light)*/
    type["AddVertexLight"] = static_cast<void (Urho3D::Drawable::*)(Light *)>(&Urho3D::Drawable::AddVertexLight) ;
    type["IsInView"] = sol::overload(
        static_cast<bool (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::IsInView) ,
        static_cast<bool (Urho3D::Drawable::*)(Camera *) const>(&Urho3D::Drawable::IsInView) ,
        static_cast<bool (Urho3D::Drawable::*)(const  FrameInfo &, bool) const>(&Urho3D::Drawable::IsInView) ,
        [](Urho3D::Drawable& self, const  FrameInfo & frame){ return self.IsInView(frame); } );
    type["SetZone"] = sol::overload(
        static_cast<void (Urho3D::Drawable::*)(Zone *, bool)>(&Urho3D::Drawable::SetZone) ,
        [](Urho3D::Drawable& self, Zone * zone){ self.SetZone(zone); } );
    type["MarkInView"] = sol::overload(
        static_cast<void (Urho3D::Drawable::*)(const  FrameInfo &)>(&Urho3D::Drawable::MarkInView) ,
        static_cast<void (Urho3D::Drawable::*)(unsigned)>(&Urho3D::Drawable::MarkInView)  );
    type["boundingBox"] = sol::property(static_cast<const BoundingBox& (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetBoundingBox) );
    type["castShadows"] = sol::property(static_cast<bool (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetCastShadows) 
        , static_cast<void (Urho3D::Drawable::*)(bool)>(&Urho3D::Drawable::SetCastShadows) );
    type["drawDistance"] = sol::property(static_cast<float (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetDrawDistance) 
        , static_cast<void (Urho3D::Drawable::*)(float)>(&Urho3D::Drawable::SetDrawDistance) );
    type["inView"] = sol::property(static_cast<bool (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::IsInView) );
    type["lightMask"] = sol::property(static_cast<unsigned (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetLightMask) 
        , static_cast<void (Urho3D::Drawable::*)(unsigned)>(&Urho3D::Drawable::SetLightMask) );
    type["lodBias"] = sol::property(static_cast<float (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetLodBias) 
        , static_cast<void (Urho3D::Drawable::*)(float)>(&Urho3D::Drawable::SetLodBias) );
    type["maxLights"] = sol::property(static_cast<unsigned (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetMaxLights) 
        , static_cast<void (Urho3D::Drawable::*)(unsigned)>(&Urho3D::Drawable::SetMaxLights) );
    type["occludee"] = sol::property(static_cast<bool (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::IsOccludee) 
        , static_cast<void (Urho3D::Drawable::*)(bool)>(&Urho3D::Drawable::SetOccludee) );
    type["occluder"] = sol::property(static_cast<bool (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::IsOccluder) 
        , static_cast<void (Urho3D::Drawable::*)(bool)>(&Urho3D::Drawable::SetOccluder) );
    type["shadowDistance"] = sol::property(static_cast<float (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetShadowDistance) 
        , static_cast<void (Urho3D::Drawable::*)(float)>(&Urho3D::Drawable::SetShadowDistance) );
    type["shadowMask"] = sol::property(static_cast<unsigned (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetShadowMask) 
        , static_cast<void (Urho3D::Drawable::*)(unsigned)>(&Urho3D::Drawable::SetShadowMask) );
    type["viewMask"] = sol::property(static_cast<unsigned (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetViewMask) 
        , static_cast<void (Urho3D::Drawable::*)(unsigned)>(&Urho3D::Drawable::SetViewMask) );
    type["worldBoundingBox"] = sol::property(static_cast<const BoundingBox& (Urho3D::Drawable::*)()>(&Urho3D::Drawable::GetWorldBoundingBox) );
    type["zone"] = sol::property([](Urho3D::Drawable& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetZone());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["zoneMask"] = sol::property(static_cast<unsigned (Urho3D::Drawable::*)() const>(&Urho3D::Drawable::GetZoneMask) 
        , static_cast<void (Urho3D::Drawable::*)(unsigned)>(&Urho3D::Drawable::SetZoneMask) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Drawable.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_FrameInfo(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::FrameInfo>( "FrameInfo"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["frameNumber_"] = &Urho3D::FrameInfo::frameNumber_;
    type["timeStep_"] = &Urho3D::FrameInfo::timeStep_;
    type["viewSize_"] = &Urho3D::FrameInfo::viewSize_;
    type["camera_"] = &Urho3D::FrameInfo::camera_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Drawable.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/Geometry.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_SourceBatch(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::SourceBatch>( "SourceBatch"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::SourceBatch(),
        Urho3D::SourceBatch(const  SourceBatch &)>();

// Members

    /*Assignment operator.*//*(const SourceBatch &rhs)*/
    type["operator_assign"] = static_cast<SourceBatch& (Urho3D::SourceBatch::*)(const  SourceBatch &)>(&Urho3D::SourceBatch::operator=) ;
    type["distance_"] = &Urho3D::SourceBatch::distance_;
    type["geometry_"] = &Urho3D::SourceBatch::geometry_;
    type["material_"] = &Urho3D::SourceBatch::material_;
    type["worldTransform_"] = &Urho3D::SourceBatch::worldTransform_;
    type["numWorldTransforms_"] = &Urho3D::SourceBatch::numWorldTransforms_;
    type["instancingData_"] = &Urho3D::SourceBatch::instancingData_;
    type["geometryType_"] = &Urho3D::SourceBatch::geometryType_;

}

