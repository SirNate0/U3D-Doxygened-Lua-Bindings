
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/RibbonTrail.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/RibbonTrail.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Scene/Component.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_RibbonTrail(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::RibbonTrail::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::RibbonTrail::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::RibbonTrail>((Urho3D::RibbonTrail*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::RibbonTrail>( "RibbonTrail"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::RibbonTrail>(context);
        });

// Members

    /*Process octree raycast. May be called from a worker thread.*//*(const RayOctreeQuery &query, PODVector< RayQueryResult > &results) override*/
    type["ProcessRayQuery"] = static_cast<void (Urho3D::RibbonTrail::*)(const  RayOctreeQuery &, PODVector<  RayQueryResult > &)>(&Urho3D::RibbonTrail::ProcessRayQuery) ;
    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::RibbonTrail::*)()>(&Urho3D::RibbonTrail::OnSetEnabled) ;
    /*Update before octree reinsertion. Is called from a main thread.*//*(const FrameInfo &frame) override*/
    type["Update"] = static_cast<void (Urho3D::RibbonTrail::*)(const  FrameInfo &)>(&Urho3D::RibbonTrail::Update) ;
    /*Calculate distance and prepare batches for rendering. May be called from worker thread(s), possibly re-entrantly.*//*(const FrameInfo &frame) override*/
    type["UpdateBatches"] = static_cast<void (Urho3D::RibbonTrail::*)(const  FrameInfo &)>(&Urho3D::RibbonTrail::UpdateBatches) ;
    /*Prepare geometry for rendering. Called from a worker thread if possible (no GPU update).*//*(const FrameInfo &frame) override*/
    type["UpdateGeometry"] = static_cast<void (Urho3D::RibbonTrail::*)(const  FrameInfo &)>(&Urho3D::RibbonTrail::UpdateGeometry) ;
    /*Return whether a geometry update is necessary, and if it can happen in a worker thread.*//*() override*/
    type["GetUpdateGeometryType"] = static_cast<UpdateGeometryType (Urho3D::RibbonTrail::*)()>(&Urho3D::RibbonTrail::GetUpdateGeometryType) ;
    /*Set material. BIND_AS_PROPERTY*//*(Material *material)*/
    type["SetMaterial"] = static_cast<void (Urho3D::RibbonTrail::*)(Material *)>(&Urho3D::RibbonTrail::SetMaterial) ;
    /*Set material attribute.*//*(const ResourceRef &value)*/
    type["SetMaterialAttr"] = static_cast<void (Urho3D::RibbonTrail::*)(const  ResourceRef &)>(&Urho3D::RibbonTrail::SetMaterialAttr) ;
    /*Set distance between points. BIND_AS_PROPERTY*//*(float length)*/
    type["SetVertexDistance"] = static_cast<void (Urho3D::RibbonTrail::*)(float)>(&Urho3D::RibbonTrail::SetVertexDistance) ;
    /*Set width of the tail. Only works for face camera trail type. BIND_AS_PROPERTY*//*(float width)*/
    type["SetWidth"] = static_cast<void (Urho3D::RibbonTrail::*)(float)>(&Urho3D::RibbonTrail::SetWidth) ;
    /*Set vertex blended color for start of trail. BIND_AS_PROPERTY*//*(const Color &color)*/
    type["SetStartColor"] = static_cast<void (Urho3D::RibbonTrail::*)(const  Color &)>(&Urho3D::RibbonTrail::SetStartColor) ;
    /*Set vertex blended color for end of trail. BIND_AS_PROPERTY*//*(const Color &color)*/
    type["SetEndColor"] = static_cast<void (Urho3D::RibbonTrail::*)(const  Color &)>(&Urho3D::RibbonTrail::SetEndColor) ;
    /*Set vertex blended color for start of trail. BIND_AS_PROPERTY*//*(float startScale)*/
    type["SetStartScale"] = static_cast<void (Urho3D::RibbonTrail::*)(float)>(&Urho3D::RibbonTrail::SetStartScale) ;
    /*Set vertex blended scale for end of trail. BIND_AS_PROPERTY*//*(float endScale)*/
    type["SetEndScale"] = static_cast<void (Urho3D::RibbonTrail::*)(float)>(&Urho3D::RibbonTrail::SetEndScale) ;
    /*Set how the trail behave. BIND_AS_PROPERTY*//*(TrailType type)*/
    type["SetTrailType"] = static_cast<void (Urho3D::RibbonTrail::*)(TrailType)>(&Urho3D::RibbonTrail::SetTrailType) ;
    /*Set base velocity applied to the trail. BIND_AS_PROPERTY*//*(const Vector3 &baseVelocity)*/
    type["SetBaseVelocity"] = static_cast<void (Urho3D::RibbonTrail::*)(const  Vector3 &)>(&Urho3D::RibbonTrail::SetBaseVelocity) ;
    /*Set whether tails are sorted by distance. Default false. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetSorted"] = static_cast<void (Urho3D::RibbonTrail::*)(bool)>(&Urho3D::RibbonTrail::SetSorted) ;
    /*Set tail time to live. BIND_AS_PROPERTY*//*(float time)*/
    type["SetLifetime"] = static_cast<void (Urho3D::RibbonTrail::*)(float)>(&Urho3D::RibbonTrail::SetLifetime) ;
    /*Set whether trail should be emitting. BIND_AS_PROPERTY*//*(bool emitting)*/
    type["SetEmitting"] = static_cast<void (Urho3D::RibbonTrail::*)(bool)>(&Urho3D::RibbonTrail::SetEmitting) ;
    /*Set whether to update when trail emitter are not visible. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetUpdateInvisible"] = static_cast<void (Urho3D::RibbonTrail::*)(bool)>(&Urho3D::RibbonTrail::SetUpdateInvisible) ;
    /*Set number of column for every tails. Can be useful for fixing distortion at high angle. BIND_AS_PROPERTY*//*(unsigned tailColumn)*/
    type["SetTailColumn"] = static_cast<void (Urho3D::RibbonTrail::*)(unsigned)>(&Urho3D::RibbonTrail::SetTailColumn) ;
    /*Set animation LOD bias. BIND_AS_PROPERTY*//*(float bias)*/
    type["SetAnimationLodBias"] = static_cast<void (Urho3D::RibbonTrail::*)(float)>(&Urho3D::RibbonTrail::SetAnimationLodBias) ;
    /*Mark for bounding box and vertex buffer update. Call after modifying the trails.*//*()*/
    type["Commit"] = static_cast<void (Urho3D::RibbonTrail::*)()>(&Urho3D::RibbonTrail::Commit) ;
    /*Return material. BIND_AS_PROPERTY*//*() const*/
    type["GetMaterial"] = [](Urho3D::RibbonTrail& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return material attribute.*//*() const*/
    type["GetMaterialAttr"] = static_cast<ResourceRef (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetMaterialAttr) ;
    /*Get distance between points. BIND_AS_PROPERTY*//*() const*/
    type["GetVertexDistance"] = static_cast<float (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetVertexDistance) ;
    /*Get width of the trail. BIND_AS_PROPERTY*//*() const*/
    type["GetWidth"] = static_cast<float (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetWidth) ;
    /*Get vertex blended color for start of trail. BIND_AS_PROPERTY*//*() const*/
    type["GetStartColor"] = static_cast<const Color& (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetStartColor) ;
    /*Get vertex blended color for end of trail. BIND_AS_PROPERTY*//*() const*/
    type["GetEndColor"] = static_cast<const Color& (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetEndColor) ;
    /*Get vertex blended scale for start of trail. BIND_AS_PROPERTY*//*() const*/
    type["GetStartScale"] = static_cast<float (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetStartScale) ;
    /*Get vertex blended scale for end of trail. BIND_AS_PROPERTY*//*() const*/
    type["GetEndScale"] = static_cast<float (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetEndScale) ;
    /*Return whether tails are sorted. BIND_AS_PROPERTY*//*() const*/
    type["IsSorted"] = static_cast<bool (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::IsSorted) ;
    /*Return tail time to live. BIND_AS_PROPERTY*//*() const*/
    type["GetLifetime"] = static_cast<float (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetLifetime) ;
    /*Return animation LOD bias. BIND_AS_PROPERTY*//*() const*/
    type["GetAnimationLodBias"] = static_cast<float (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetAnimationLodBias) ;
    /*Return how the trail behave. BIND_AS_PROPERTY*//*() const*/
    type["GetTrailType"] = static_cast<TrailType (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetTrailType) ;
    /*Return base trail velocity. BIND_AS_PROPERTY*//*() const*/
    type["GetBaseVelocity"] = static_cast<const Vector3& (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetBaseVelocity) ;
    /*Return number of column for tails. BIND_AS_PROPERTY*//*() const*/
    type["GetTailColumn"] = static_cast<unsigned (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetTailColumn) ;
    /*Return whether is currently emitting. BIND_AS_PROPERTY*//*() const*/
    type["IsEmitting"] = static_cast<bool (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::IsEmitting) ;
    /*Return whether to update when trail emitter are not visible. BIND_AS_PROPERTY*//*() const*/
    type["GetUpdateInvisible"] = static_cast<bool (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetUpdateInvisible) ;
    type["animationLodBias"] = sol::property(static_cast<float (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetAnimationLodBias) 
        , static_cast<void (Urho3D::RibbonTrail::*)(float)>(&Urho3D::RibbonTrail::SetAnimationLodBias) );
    type["baseVelocity"] = sol::property(static_cast<const Vector3& (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetBaseVelocity) 
        , static_cast<void (Urho3D::RibbonTrail::*)(const  Vector3 &)>(&Urho3D::RibbonTrail::SetBaseVelocity) );
    type["emitting"] = sol::property(static_cast<bool (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::IsEmitting) 
        , static_cast<void (Urho3D::RibbonTrail::*)(bool)>(&Urho3D::RibbonTrail::SetEmitting) );
    type["endColor"] = sol::property(static_cast<const Color& (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetEndColor) 
        , static_cast<void (Urho3D::RibbonTrail::*)(const  Color &)>(&Urho3D::RibbonTrail::SetEndColor) );
    type["endScale"] = sol::property(static_cast<float (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetEndScale) 
        , static_cast<void (Urho3D::RibbonTrail::*)(float)>(&Urho3D::RibbonTrail::SetEndScale) );
    type["lifetime"] = sol::property(static_cast<float (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetLifetime) 
        , static_cast<void (Urho3D::RibbonTrail::*)(float)>(&Urho3D::RibbonTrail::SetLifetime) );
    type["material"] = sol::property([](Urho3D::RibbonTrail& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::RibbonTrail::*)(Material *)>(&Urho3D::RibbonTrail::SetMaterial) );
    type["sorted"] = sol::property(static_cast<bool (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::IsSorted) 
        , static_cast<void (Urho3D::RibbonTrail::*)(bool)>(&Urho3D::RibbonTrail::SetSorted) );
    type["startColor"] = sol::property(static_cast<const Color& (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetStartColor) 
        , static_cast<void (Urho3D::RibbonTrail::*)(const  Color &)>(&Urho3D::RibbonTrail::SetStartColor) );
    type["startScale"] = sol::property(static_cast<float (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetStartScale) 
        , static_cast<void (Urho3D::RibbonTrail::*)(float)>(&Urho3D::RibbonTrail::SetStartScale) );
    type["tailColumn"] = sol::property(static_cast<unsigned (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetTailColumn) 
        , static_cast<void (Urho3D::RibbonTrail::*)(unsigned)>(&Urho3D::RibbonTrail::SetTailColumn) );
    type["trailType"] = sol::property(static_cast<TrailType (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetTrailType) 
        , static_cast<void (Urho3D::RibbonTrail::*)(TrailType)>(&Urho3D::RibbonTrail::SetTrailType) );
    type["updateInvisible"] = sol::property(static_cast<bool (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetUpdateInvisible) 
        , static_cast<void (Urho3D::RibbonTrail::*)(bool)>(&Urho3D::RibbonTrail::SetUpdateInvisible) );
    type["vertexDistance"] = sol::property(static_cast<float (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetVertexDistance) 
        , static_cast<void (Urho3D::RibbonTrail::*)(float)>(&Urho3D::RibbonTrail::SetVertexDistance) );
    type["width"] = sol::property(static_cast<float (Urho3D::RibbonTrail::*)() const>(&Urho3D::RibbonTrail::GetWidth) 
        , static_cast<void (Urho3D::RibbonTrail::*)(float)>(&Urho3D::RibbonTrail::SetWidth) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/RibbonTrail.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/RibbonTrail.h>
#include <Urho3D/Graphics/RibbonTrail.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_TrailPoint(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::TrailPoint>( "TrailPoint"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::TrailPoint(),
        Urho3D::TrailPoint(const  Vector3 &, const  Vector3 &)>();

// Members

    type["position_"] = &Urho3D::TrailPoint::position_;
    type["forward_"] = &Urho3D::TrailPoint::forward_;
    type["parentPos_"] = &Urho3D::TrailPoint::parentPos_;
    type["elapsedLength_"] = &Urho3D::TrailPoint::elapsedLength_;
    type["next_"] = &Urho3D::TrailPoint::next_;
    type["lifetime_"] = &Urho3D::TrailPoint::lifetime_;
    type["sortDistance_"] = &Urho3D::TrailPoint::sortDistance_;

}

