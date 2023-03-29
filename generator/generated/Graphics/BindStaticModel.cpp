
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/StaticModel.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/StaticModel.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/Geometry.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/Model.h>
#include <Urho3D/Graphics/OcclusionBuffer.h>
#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_StaticModel(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::StaticModel::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::StaticModel::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::StaticModel>((Urho3D::StaticModel*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::StaticModel>( "StaticModel"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::StaticModel>(context);
        });

// Members

    /*Process octree raycast. May be called from a worker thread.*//*(const RayOctreeQuery &query, PODVector< RayQueryResult > &results) override*/
    type["ProcessRayQuery"] = static_cast<void (Urho3D::StaticModel::*)(const  RayOctreeQuery &, PODVector<  RayQueryResult > &)>(&Urho3D::StaticModel::ProcessRayQuery) ;
    /*Calculate distance and prepare batches for rendering. May be called from worker thread(s), possibly re-entrantly.*//*(const FrameInfo &frame) override*/
    type["UpdateBatches"] = static_cast<void (Urho3D::StaticModel::*)(const  FrameInfo &)>(&Urho3D::StaticModel::UpdateBatches) ;
    /*Return the geometry for a specific LOD level.*//*(unsigned batchIndex, unsigned level) override*/
    type["GetLodGeometry"] = [](Urho3D::StaticModel& self, unsigned batchIndex, unsigned level, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetLodGeometry(batchIndex, level));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return number of occlusion geometry triangles.*//*() override*/
    type["GetNumOccluderTriangles"] = static_cast<unsigned (Urho3D::StaticModel::*)()>(&Urho3D::StaticModel::GetNumOccluderTriangles) ;
    /*Draw to occlusion buffer. Return true if did not run out of triangles.*//*(OcclusionBuffer *buffer) override*/
    type["DrawOcclusion"] = static_cast<bool (Urho3D::StaticModel::*)(OcclusionBuffer *)>(&Urho3D::StaticModel::DrawOcclusion) ;
    /*Set model. BIND_AS_PROPERTY Formely: manualbind*//*(Model *model)*/
    type["SetModel"] = static_cast<void (Urho3D::StaticModel::*)(Model *)>(&Urho3D::StaticModel::SetModel) ;
    /*Set occlusion LOD level. By default (M_MAX_UNSIGNED) same as visible. BIND_AS_PROPERTY*//*(unsigned level)*/
    type["SetOcclusionLodLevel"] = static_cast<void (Urho3D::StaticModel::*)(unsigned)>(&Urho3D::StaticModel::SetOcclusionLodLevel) ;
    /*Return model. BIND_AS_PROPERTY*//*() const*/
    type["GetModel"] = [](Urho3D::StaticModel& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetModel());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return number of geometries. BIND_AS_PROPERTY*//*() const*/
    type["GetNumGeometries"] = static_cast<unsigned (Urho3D::StaticModel::*)() const>(&Urho3D::StaticModel::GetNumGeometries) ;
    /*Return occlusion LOD level. BIND_AS_PROPERTY*//*() const*/
    type["GetOcclusionLodLevel"] = static_cast<unsigned (Urho3D::StaticModel::*)() const>(&Urho3D::StaticModel::GetOcclusionLodLevel) ;
    /*Determines if the given world space point is within the model geometry.*//*(const Vector3 &point) const*/
    type["IsInside"] = static_cast<bool (Urho3D::StaticModel::*)(const  Vector3 &) const>(&Urho3D::StaticModel::IsInside) ;
    /*Determines if the given local space point is within the model geometry.*//*(const Vector3 &point) const*/
    type["IsInsideLocal"] = static_cast<bool (Urho3D::StaticModel::*)(const  Vector3 &) const>(&Urho3D::StaticModel::IsInsideLocal) ;
    /*Set model attribute.*//*(const ResourceRef &value)*/
    type["SetModelAttr"] = static_cast<void (Urho3D::StaticModel::*)(const  ResourceRef &)>(&Urho3D::StaticModel::SetModelAttr) ;
    /*Set materials attribute.*//*(const ResourceRefList &value)*/
    type["SetMaterialsAttr"] = static_cast<void (Urho3D::StaticModel::*)(const  ResourceRefList &)>(&Urho3D::StaticModel::SetMaterialsAttr) ;
    /*Return model attribute.*//*() const*/
    type["GetModelAttr"] = static_cast<ResourceRef (Urho3D::StaticModel::*)() const>(&Urho3D::StaticModel::GetModelAttr) ;
    /*Return materials attribute.*//*() const*/
    type["GetMaterialsAttr"] = static_cast<const ResourceRefList& (Urho3D::StaticModel::*)() const>(&Urho3D::StaticModel::GetMaterialsAttr) ;
    type["SetMaterial"] = sol::overload(
        static_cast<void (Urho3D::StaticModel::*)(Material *)>(&Urho3D::StaticModel::SetMaterial) ,
        static_cast<bool (Urho3D::StaticModel::*)(unsigned, Material *)>(&Urho3D::StaticModel::SetMaterial)  );
    type["ApplyMaterialList"] = sol::overload(
        static_cast<void (Urho3D::StaticModel::*)(const  String &)>(&Urho3D::StaticModel::ApplyMaterialList) ,
        [](Urho3D::StaticModel& self){ self.ApplyMaterialList(); } );
    type["GetMaterial"] = sol::overload(
        [](Urho3D::StaticModel& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::StaticModel& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["material"] = sol::property([](Urho3D::StaticModel& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<bool (Urho3D::StaticModel::*)(unsigned, Material *)>(&Urho3D::StaticModel::SetMaterial) );
    type["model"] = sol::property([](Urho3D::StaticModel& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetModel());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::StaticModel::*)(Model *)>(&Urho3D::StaticModel::SetModel) );
    type["numGeometries"] = sol::property(static_cast<unsigned (Urho3D::StaticModel::*)() const>(&Urho3D::StaticModel::GetNumGeometries) );
    type["occlusionLodLevel"] = sol::property(static_cast<unsigned (Urho3D::StaticModel::*)() const>(&Urho3D::StaticModel::GetOcclusionLodLevel) 
        , static_cast<void (Urho3D::StaticModel::*)(unsigned)>(&Urho3D::StaticModel::SetOcclusionLodLevel) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/StaticModel.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/StaticModel.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_StaticModelGeometryData(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::StaticModelGeometryData>( "StaticModelGeometryData"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["center_"] = &Urho3D::StaticModelGeometryData::center_;
    type["lodLevel_"] = &Urho3D::StaticModelGeometryData::lodLevel_;

}

