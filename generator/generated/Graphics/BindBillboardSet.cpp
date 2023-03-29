
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/BillboardSet.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/BillboardSet.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/BillboardSet.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Scene/Component.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_BillboardSet(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::BillboardSet::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::BillboardSet::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::BillboardSet>((Urho3D::BillboardSet*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::BillboardSet>( "BillboardSet"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::BillboardSet>(context);
        });

// Members

    /*Process octree raycast. May be called from a worker thread.*//*(const RayOctreeQuery &query, PODVector< RayQueryResult > &results) override*/
    type["ProcessRayQuery"] = static_cast<void (Urho3D::BillboardSet::*)(const  RayOctreeQuery &, PODVector<  RayQueryResult > &)>(&Urho3D::BillboardSet::ProcessRayQuery) ;
    /*Calculate distance and prepare batches for rendering. May be called from worker thread(s), possibly re-entrantly.*//*(const FrameInfo &frame) override*/
    type["UpdateBatches"] = static_cast<void (Urho3D::BillboardSet::*)(const  FrameInfo &)>(&Urho3D::BillboardSet::UpdateBatches) ;
    /*Prepare geometry for rendering. Called from a worker thread if possible (no GPU update).*//*(const FrameInfo &frame) override*/
    type["UpdateGeometry"] = static_cast<void (Urho3D::BillboardSet::*)(const  FrameInfo &)>(&Urho3D::BillboardSet::UpdateGeometry) ;
    /*Return whether a geometry update is necessary, and if it can happen in a worker thread.*//*() override*/
    type["GetUpdateGeometryType"] = static_cast<UpdateGeometryType (Urho3D::BillboardSet::*)()>(&Urho3D::BillboardSet::GetUpdateGeometryType) ;
    /*Set material. BIND_AS_PROPERTY*//*(Material *material)*/
    type["SetMaterial"] = static_cast<void (Urho3D::BillboardSet::*)(Material *)>(&Urho3D::BillboardSet::SetMaterial) ;
    /*Set number of billboards. BIND_AS_PROPERTY*//*(unsigned num)*/
    type["SetNumBillboards"] = static_cast<void (Urho3D::BillboardSet::*)(unsigned)>(&Urho3D::BillboardSet::SetNumBillboards) ;
    /*Set whether billboards are relative to the scene node. Default true. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetRelative"] = static_cast<void (Urho3D::BillboardSet::*)(bool)>(&Urho3D::BillboardSet::SetRelative) ;
    /*Set whether scene node scale affects billboards' size. Default true. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetScaled"] = static_cast<void (Urho3D::BillboardSet::*)(bool)>(&Urho3D::BillboardSet::SetScaled) ;
    /*Set whether billboards are sorted by distance. Default false. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetSorted"] = static_cast<void (Urho3D::BillboardSet::*)(bool)>(&Urho3D::BillboardSet::SetSorted) ;
    /*Set whether billboards have fixed size on screen (measured in pixels) regardless of distance to camera. Default false. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetFixedScreenSize"] = static_cast<void (Urho3D::BillboardSet::*)(bool)>(&Urho3D::BillboardSet::SetFixedScreenSize) ;
    /*Set how the billboards should rotate in relation to the camera. Default is to follow camera rotation on all axes (FC_ROTATE_XYZ). BIND_AS_PROPERTY*//*(FaceCameraMode mode)*/
    type["SetFaceCameraMode"] = static_cast<void (Urho3D::BillboardSet::*)(FaceCameraMode)>(&Urho3D::BillboardSet::SetFaceCameraMode) ;
    /*Set minimal angle between billboard normal and look-at direction. BIND_AS_PROPERTY*//*(float angle)*/
    type["SetMinAngle"] = static_cast<void (Urho3D::BillboardSet::*)(float)>(&Urho3D::BillboardSet::SetMinAngle) ;
    /*Set animation LOD bias. BIND_AS_PROPERTY*//*(float bias)*/
    type["SetAnimationLodBias"] = static_cast<void (Urho3D::BillboardSet::*)(float)>(&Urho3D::BillboardSet::SetAnimationLodBias) ;
    /*Mark for bounding box and vertex buffer update. Call after modifying the billboards.*//*()*/
    type["Commit"] = static_cast<void (Urho3D::BillboardSet::*)()>(&Urho3D::BillboardSet::Commit) ;
    /*Return material. BIND_AS_PROPERTY*//*() const*/
    type["GetMaterial"] = [](Urho3D::BillboardSet& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return number of billboards. BIND_AS_PROPERTY*//*() const*/
    type["GetNumBillboards"] = static_cast<unsigned (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::GetNumBillboards) ;
    /*Return all billboards.*//*()*/
    type["GetBillboards"] = static_cast<PODVector<Billboard>& (Urho3D::BillboardSet::*)()>(&Urho3D::BillboardSet::GetBillboards) ;
    /*Return billboard by index. BIND_AS_ALIAS_get_billboards*//*(unsigned index)*/
    type["GetBillboard"] = static_cast<Billboard* (Urho3D::BillboardSet::*)(unsigned)>(&Urho3D::BillboardSet::GetBillboard) ;
    /*Return whether billboards are relative to the scene node. BIND_AS_PROPERTY*//*() const*/
    type["IsRelative"] = static_cast<bool (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::IsRelative) ;
    /*Return whether scene node scale affects billboards' size. BIND_AS_PROPERTY*//*() const*/
    type["IsScaled"] = static_cast<bool (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::IsScaled) ;
    /*Return whether billboards are sorted. BIND_AS_PROPERTY*//*() const*/
    type["IsSorted"] = static_cast<bool (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::IsSorted) ;
    /*Return whether billboards are fixed screen size. BIND_AS_PROPERTY*//*() const*/
    type["IsFixedScreenSize"] = static_cast<bool (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::IsFixedScreenSize) ;
    /*Return how the billboards rotate in relation to the camera. BIND_AS_PROPERTY*//*() const*/
    type["GetFaceCameraMode"] = static_cast<FaceCameraMode (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::GetFaceCameraMode) ;
    /*Return minimal angle between billboard normal and look-at direction. BIND_AS_PROPERTY*//*() const*/
    type["GetMinAngle"] = static_cast<float (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::GetMinAngle) ;
    /*Return animation LOD bias. BIND_AS_PROPERTY*//*() const*/
    type["GetAnimationLodBias"] = static_cast<float (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::GetAnimationLodBias) ;
    /*Set material attribute.*//*(const ResourceRef &value)*/
    type["SetMaterialAttr"] = static_cast<void (Urho3D::BillboardSet::*)(const  ResourceRef &)>(&Urho3D::BillboardSet::SetMaterialAttr) ;
    /*Set billboards attribute.*//*(const VariantVector &value)*/
    type["SetBillboardsAttr"] = static_cast<void (Urho3D::BillboardSet::*)(const  VariantVector &)>(&Urho3D::BillboardSet::SetBillboardsAttr) ;
    /*Set billboards attribute for network replication.*//*(const PODVector< unsigned char > &value)*/
    type["SetNetBillboardsAttr"] = static_cast<void (Urho3D::BillboardSet::*)(const  PODVector< unsigned char > &)>(&Urho3D::BillboardSet::SetNetBillboardsAttr) ;
    /*Return material attribute.*//*() const*/
    type["GetMaterialAttr"] = static_cast<ResourceRef (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::GetMaterialAttr) ;
    /*Return billboards attribute.*//*() const*/
    type["GetBillboardsAttr"] = static_cast<VariantVector (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::GetBillboardsAttr) ;
    /*Return billboards attribute for network replication.*//*() const*/
    type["GetNetBillboardsAttr"] = static_cast<const PODVector<unsigned char>& (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::GetNetBillboardsAttr) ;
    type["animationLodBias"] = sol::property(static_cast<float (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::GetAnimationLodBias) 
        , static_cast<void (Urho3D::BillboardSet::*)(float)>(&Urho3D::BillboardSet::SetAnimationLodBias) );
    type["billboard"] = sol::property(static_cast<Billboard* (Urho3D::BillboardSet::*)(unsigned)>(&Urho3D::BillboardSet::GetBillboard) );
    type["faceCameraMode"] = sol::property(static_cast<FaceCameraMode (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::GetFaceCameraMode) 
        , static_cast<void (Urho3D::BillboardSet::*)(FaceCameraMode)>(&Urho3D::BillboardSet::SetFaceCameraMode) );
    type["fixedScreenSize"] = sol::property(static_cast<bool (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::IsFixedScreenSize) 
        , static_cast<void (Urho3D::BillboardSet::*)(bool)>(&Urho3D::BillboardSet::SetFixedScreenSize) );
    type["material"] = sol::property([](Urho3D::BillboardSet& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::BillboardSet::*)(Material *)>(&Urho3D::BillboardSet::SetMaterial) );
    type["minAngle"] = sol::property(static_cast<float (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::GetMinAngle) 
        , static_cast<void (Urho3D::BillboardSet::*)(float)>(&Urho3D::BillboardSet::SetMinAngle) );
    type["numBillboards"] = sol::property(static_cast<unsigned (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::GetNumBillboards) 
        , static_cast<void (Urho3D::BillboardSet::*)(unsigned)>(&Urho3D::BillboardSet::SetNumBillboards) );
    type["relative"] = sol::property(static_cast<bool (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::IsRelative) 
        , static_cast<void (Urho3D::BillboardSet::*)(bool)>(&Urho3D::BillboardSet::SetRelative) );
    type["scaled"] = sol::property(static_cast<bool (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::IsScaled) 
        , static_cast<void (Urho3D::BillboardSet::*)(bool)>(&Urho3D::BillboardSet::SetScaled) );
    type["sorted"] = sol::property(static_cast<bool (Urho3D::BillboardSet::*)() const>(&Urho3D::BillboardSet::IsSorted) 
        , static_cast<void (Urho3D::BillboardSet::*)(bool)>(&Urho3D::BillboardSet::SetSorted) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/BillboardSet.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/BillboardSet.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Billboard(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Billboard>( "Billboard"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["position_"] = &Urho3D::Billboard::position_;
    type["size_"] = &Urho3D::Billboard::size_;
    type["uv_"] = &Urho3D::Billboard::uv_;
    type["color_"] = &Urho3D::Billboard::color_;
    type["rotation_"] = &Urho3D::Billboard::rotation_;
    type["direction_"] = &Urho3D::Billboard::direction_;
    type["enabled_"] = &Urho3D::Billboard::enabled_;
    type["sortDistance_"] = &Urho3D::Billboard::sortDistance_;
    type["screenScaleFactor_"] = &Urho3D::Billboard::screenScaleFactor_;

}

