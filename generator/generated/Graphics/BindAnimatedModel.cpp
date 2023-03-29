
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/AnimatedModel.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/AnimatedModel.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Animation.h>
#include <Urho3D/Graphics/AnimationState.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Graphics/Model.h>
#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Graphics/Skeleton.h>
#include <Urho3D/Graphics/VertexBuffer.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Resource/JSONValue.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Scene/Component.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_AnimatedModel(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::AnimatedModel::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::AnimatedModel::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::AnimatedModel>((Urho3D::AnimatedModel*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::AnimatedModel>( "AnimatedModel"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::StaticModel,Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::AnimatedModel>(context);
        });

// Members

    /*Load from binary data. Return true if successful.*//*(Deserializer &source) override*/
    type["Load"] = static_cast<bool (Urho3D::AnimatedModel::*)(Deserializer &)>(&Urho3D::AnimatedModel::Load) ;
    /*Load from XML data. Return true if successful.*//*(const XMLElement &source) override*/
    type["LoadXML"] = static_cast<bool (Urho3D::AnimatedModel::*)(const  XMLElement &)>(&Urho3D::AnimatedModel::LoadXML) ;
    /*Load from JSON data. Return true if successful.*//*(const JSONValue &source) override*/
    type["LoadJSON"] = static_cast<bool (Urho3D::AnimatedModel::*)(const  JSONValue &)>(&Urho3D::AnimatedModel::LoadJSON) ;
    /*Apply attribute changes that can not be applied immediately. Called after scene load or a network update.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::AnimatedModel::*)()>(&Urho3D::AnimatedModel::ApplyAttributes) ;
    /*Process octree raycast. May be called from a worker thread.*//*(const RayOctreeQuery &query, PODVector< RayQueryResult > &results) override*/
    type["ProcessRayQuery"] = static_cast<void (Urho3D::AnimatedModel::*)(const  RayOctreeQuery &, PODVector<  RayQueryResult > &)>(&Urho3D::AnimatedModel::ProcessRayQuery) ;
    /*Update before octree reinsertion. Is called from a worker thread.*//*(const FrameInfo &frame) override*/
    type["Update"] = static_cast<void (Urho3D::AnimatedModel::*)(const  FrameInfo &)>(&Urho3D::AnimatedModel::Update) ;
    /*Calculate distance and prepare batches for rendering. May be called from worker thread(s), possibly re-entrantly.*//*(const FrameInfo &frame) override*/
    type["UpdateBatches"] = static_cast<void (Urho3D::AnimatedModel::*)(const  FrameInfo &)>(&Urho3D::AnimatedModel::UpdateBatches) ;
    /*Prepare geometry for rendering. Called from a worker thread if possible (no GPU update).*//*(const FrameInfo &frame) override*/
    type["UpdateGeometry"] = static_cast<void (Urho3D::AnimatedModel::*)(const  FrameInfo &)>(&Urho3D::AnimatedModel::UpdateGeometry) ;
    /*Return whether a geometry update is necessary, and if it can happen in a worker thread.*//*() override*/
    type["GetUpdateGeometryType"] = static_cast<UpdateGeometryType (Urho3D::AnimatedModel::*)()>(&Urho3D::AnimatedModel::GetUpdateGeometryType) ;
    /*Visualize the component as debug geometry.*//*(DebugRenderer *debug, bool depthTest) override*/
    type["DrawDebugGeometry"] = static_cast<void (Urho3D::AnimatedModel::*)(DebugRenderer *, bool)>(&Urho3D::AnimatedModel::DrawDebugGeometry) ;
    /*Add an animation.*//*(Animation *animation)*/
    type["AddAnimationState"] = [](Urho3D::AnimatedModel& self, Animation *animation){ return SharedPtr(self.AddAnimationState(animation)); };
    /*Remove all animations.*//*()*/
    type["RemoveAllAnimationStates"] = static_cast<void (Urho3D::AnimatedModel::*)()>(&Urho3D::AnimatedModel::RemoveAllAnimationStates) ;
    /*Set animation LOD bias. BIND_AS_PROPERTY*//*(float bias)*/
    type["SetAnimationLodBias"] = static_cast<void (Urho3D::AnimatedModel::*)(float)>(&Urho3D::AnimatedModel::SetAnimationLodBias) ;
    /*Set whether to update animation and the bounding box when not visible. Recommended to enable for physically controlled models like ragdolls. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetUpdateInvisible"] = static_cast<void (Urho3D::AnimatedModel::*)(bool)>(&Urho3D::AnimatedModel::SetUpdateInvisible) ;
    /*Reset all vertex morphs to zero.*//*()*/
    type["ResetMorphWeights"] = static_cast<void (Urho3D::AnimatedModel::*)()>(&Urho3D::AnimatedModel::ResetMorphWeights) ;
    /*Apply all animation states to nodes.*//*()*/
    type["ApplyAnimation"] = static_cast<void (Urho3D::AnimatedModel::*)()>(&Urho3D::AnimatedModel::ApplyAnimation) ;
    /*Return skeleton. BIND_AS_PROPERTY*//*()*/
    type["GetSkeleton"] = static_cast<Skeleton& (Urho3D::AnimatedModel::*)()>(&Urho3D::AnimatedModel::GetSkeleton) ;
    /*Return all animation states.*//*() const*/
    type["GetAnimationStates"] = static_cast<const Vector<SharedPtr<AnimationState>>& (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetAnimationStates) ;
    /*Return number of animation states. BIND_AS_PROPERTY*//*() const*/
    type["GetNumAnimationStates"] = static_cast<unsigned (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetNumAnimationStates) ;
    /*Return animation LOD bias. BIND_AS_PROPERTY*//*() const*/
    type["GetAnimationLodBias"] = static_cast<float (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetAnimationLodBias) ;
    /*Return whether to update animation when not visible. BIND_AS_PROPERTY*//*() const*/
    type["GetUpdateInvisible"] = static_cast<bool (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetUpdateInvisible) ;
    /*Return all vertex morphs.*//*() const*/
    type["GetMorphs"] = static_cast<const Vector<ModelMorph>& (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetMorphs) ;
    /*Return all morph vertex buffers.*//*() const*/
    type["GetMorphVertexBuffers"] = static_cast<const Vector<SharedPtr<VertexBuffer>>& (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetMorphVertexBuffers) ;
    /*Return number of vertex morphs. BIND_AS_PROPERTY*//*() const*/
    type["GetNumMorphs"] = static_cast<unsigned (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetNumMorphs) ;
    /*Return whether is the master (first) animated model.*//*() const*/
    type["IsMaster"] = static_cast<bool (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::IsMaster) ;
    /*Set model attribute.*//*(const ResourceRef &value)*/
    type["SetModelAttr"] = static_cast<void (Urho3D::AnimatedModel::*)(const  ResourceRef &)>(&Urho3D::AnimatedModel::SetModelAttr) ;
    /*Set bones' animation enabled attribute.*//*(const VariantVector &value)*/
    type["SetBonesEnabledAttr"] = static_cast<void (Urho3D::AnimatedModel::*)(const  VariantVector &)>(&Urho3D::AnimatedModel::SetBonesEnabledAttr) ;
    /*Set animation states attribute.*//*(const VariantVector &value)*/
    type["SetAnimationStatesAttr"] = static_cast<void (Urho3D::AnimatedModel::*)(const  VariantVector &)>(&Urho3D::AnimatedModel::SetAnimationStatesAttr) ;
    /*Set morphs attribute.*//*(const PODVector< unsigned char > &value)*/
    type["SetMorphsAttr"] = static_cast<void (Urho3D::AnimatedModel::*)(const  PODVector< unsigned char > &)>(&Urho3D::AnimatedModel::SetMorphsAttr) ;
    /*Return model attribute.*//*() const*/
    type["GetModelAttr"] = static_cast<ResourceRef (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetModelAttr) ;
    /*Return bones' animation enabled attribute.*//*() const*/
    type["GetBonesEnabledAttr"] = static_cast<VariantVector (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetBonesEnabledAttr) ;
    /*Return animation states attribute.*//*() const*/
    type["GetAnimationStatesAttr"] = static_cast<VariantVector (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetAnimationStatesAttr) ;
    /*Return morphs attribute.*//*() const*/
    type["GetMorphsAttr"] = static_cast<const PODVector<unsigned char>& (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetMorphsAttr) ;
    /*Return per-geometry bone mappings.*//*() const*/
    type["GetGeometryBoneMappings"] = static_cast<const Vector<PODVector<unsigned>>& (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetGeometryBoneMappings) ;
    /*Return per-geometry skin matrices. If empty, uses global skinning.*//*() const*/
    type["GetGeometrySkinMatrices"] = static_cast<const Vector<PODVector<Matrix3x4>>& (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetGeometrySkinMatrices) ;
    /*Recalculate the bone bounding box. Normally called internally, but can also be manually called if up-to-date information before rendering is necessary.*//*()*/
    type["UpdateBoneBoundingBox"] = static_cast<void (Urho3D::AnimatedModel::*)()>(&Urho3D::AnimatedModel::UpdateBoneBoundingBox) ;
    type["SetModel"] = sol::overload(
        static_cast<void (Urho3D::AnimatedModel::*)(Model *, bool)>(&Urho3D::AnimatedModel::SetModel) ,
        [](Urho3D::AnimatedModel& self, Model * model){ self.SetModel(model); } );
    type["RemoveAnimationState"] = sol::overload(
        static_cast<void (Urho3D::AnimatedModel::*)(Animation *)>(&Urho3D::AnimatedModel::RemoveAnimationState) ,
        static_cast<void (Urho3D::AnimatedModel::*)(const  String &)>(&Urho3D::AnimatedModel::RemoveAnimationState) ,
        static_cast<void (Urho3D::AnimatedModel::*)(StringHash)>(&Urho3D::AnimatedModel::RemoveAnimationState) ,
        static_cast<void (Urho3D::AnimatedModel::*)(AnimationState *)>(&Urho3D::AnimatedModel::RemoveAnimationState) ,
        static_cast<void (Urho3D::AnimatedModel::*)(unsigned)>(&Urho3D::AnimatedModel::RemoveAnimationState)  );
    type["SetMorphWeight"] = sol::overload(
        static_cast<void (Urho3D::AnimatedModel::*)(unsigned, float)>(&Urho3D::AnimatedModel::SetMorphWeight) ,
        static_cast<void (Urho3D::AnimatedModel::*)(const  String &, float)>(&Urho3D::AnimatedModel::SetMorphWeight) ,
        static_cast<void (Urho3D::AnimatedModel::*)(StringHash, float)>(&Urho3D::AnimatedModel::SetMorphWeight)  );
    type["GetAnimationState"] = sol::overload(
        [](Urho3D::AnimatedModel& self, Animation *animation){ return SharedPtr(self.GetAnimationState(animation)); },
        [](Urho3D::AnimatedModel& self, const String &animationName){ return SharedPtr(self.GetAnimationState(animationName)); },
        [](Urho3D::AnimatedModel& self, StringHash animationNameHash){ return SharedPtr(self.GetAnimationState(animationNameHash)); },
        [](Urho3D::AnimatedModel& self, unsigned index){ return SharedPtr(self.GetAnimationState(index)); } );
    type["GetMorphWeight"] = sol::overload(
        static_cast<float (Urho3D::AnimatedModel::*)(unsigned) const>(&Urho3D::AnimatedModel::GetMorphWeight) ,
        static_cast<float (Urho3D::AnimatedModel::*)(const  String &) const>(&Urho3D::AnimatedModel::GetMorphWeight) ,
        static_cast<float (Urho3D::AnimatedModel::*)(StringHash) const>(&Urho3D::AnimatedModel::GetMorphWeight)  );
    type["animationLodBias"] = sol::property(static_cast<float (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetAnimationLodBias) 
        , static_cast<void (Urho3D::AnimatedModel::*)(float)>(&Urho3D::AnimatedModel::SetAnimationLodBias) );
    type["animationState"] = sol::property([](Urho3D::AnimatedModel& self, const String &animationName){ return SharedPtr(self.GetAnimationState(animationName)); });
    type["morphWeight"] = sol::property(static_cast<float (Urho3D::AnimatedModel::*)(const  String &) const>(&Urho3D::AnimatedModel::GetMorphWeight) 
        , static_cast<void (Urho3D::AnimatedModel::*)(const  String &, float)>(&Urho3D::AnimatedModel::SetMorphWeight) );
    type["numAnimationStates"] = sol::property(static_cast<unsigned (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetNumAnimationStates) );
    type["numMorphs"] = sol::property(static_cast<unsigned (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetNumMorphs) );
    type["skeleton"] = sol::property(static_cast<Skeleton& (Urho3D::AnimatedModel::*)()>(&Urho3D::AnimatedModel::GetSkeleton) );
    type["updateInvisible"] = sol::property(static_cast<bool (Urho3D::AnimatedModel::*)() const>(&Urho3D::AnimatedModel::GetUpdateInvisible) 
        , static_cast<void (Urho3D::AnimatedModel::*)(bool)>(&Urho3D::AnimatedModel::SetUpdateInvisible) );

}

