
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/DecalSet.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/DecalSet.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Scene/Component.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_DecalSet(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::DecalSet::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::DecalSet::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::DecalSet>((Urho3D::DecalSet*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::DecalSet>( "DecalSet"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::DecalSet>(context);
        });

// Members

    /*Apply attribute changes that can not be applied immediately. Called after scene load or a network update.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::DecalSet::*)()>(&Urho3D::DecalSet::ApplyAttributes) ;
    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::DecalSet::*)()>(&Urho3D::DecalSet::OnSetEnabled) ;
    /*Process octree raycast. May be called from a worker thread.*//*(const RayOctreeQuery &query, PODVector< RayQueryResult > &results) override*/
    type["ProcessRayQuery"] = static_cast<void (Urho3D::DecalSet::*)(const  RayOctreeQuery &, PODVector<  RayQueryResult > &)>(&Urho3D::DecalSet::ProcessRayQuery) ;
    /*Calculate distance and prepare batches for rendering. May be called from worker thread(s), possibly re-entrantly.*//*(const FrameInfo &frame) override*/
    type["UpdateBatches"] = static_cast<void (Urho3D::DecalSet::*)(const  FrameInfo &)>(&Urho3D::DecalSet::UpdateBatches) ;
    /*Prepare geometry for rendering. Called from a worker thread if possible (no GPU update).*//*(const FrameInfo &frame) override*/
    type["UpdateGeometry"] = static_cast<void (Urho3D::DecalSet::*)(const  FrameInfo &)>(&Urho3D::DecalSet::UpdateGeometry) ;
    /*Return whether a geometry update is necessary, and if it can happen in a worker thread.*//*() override*/
    type["GetUpdateGeometryType"] = static_cast<UpdateGeometryType (Urho3D::DecalSet::*)()>(&Urho3D::DecalSet::GetUpdateGeometryType) ;
    /*Set material. The material should use a small negative depth bias to avoid Z-fighting. BIND_AS_PROPERTY*//*(Material *material)*/
    type["SetMaterial"] = static_cast<void (Urho3D::DecalSet::*)(Material *)>(&Urho3D::DecalSet::SetMaterial) ;
    /*Set maximum number of decal vertices. BIND_AS_PROPERTY*//*(unsigned num)*/
    type["SetMaxVertices"] = static_cast<void (Urho3D::DecalSet::*)(unsigned)>(&Urho3D::DecalSet::SetMaxVertices) ;
    /*Set maximum number of decal vertex indices. BIND_AS_PROPERTY*//*(unsigned num)*/
    type["SetMaxIndices"] = static_cast<void (Urho3D::DecalSet::*)(unsigned)>(&Urho3D::DecalSet::SetMaxIndices) ;
    /*Set whether to optimize GPU buffer sizes according to current amount of decals. Default false, which will size the buffers according to the maximum vertices/indices. When true, buffers will be reallocated whenever decals are added/removed, which can be worse for performance. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetOptimizeBufferSize"] = static_cast<void (Urho3D::DecalSet::*)(bool)>(&Urho3D::DecalSet::SetOptimizeBufferSize) ;
    /*Remove n oldest decals.*//*(unsigned num)*/
    type["RemoveDecals"] = static_cast<void (Urho3D::DecalSet::*)(unsigned)>(&Urho3D::DecalSet::RemoveDecals) ;
    /*Remove all decals.*//*()*/
    type["RemoveAllDecals"] = static_cast<void (Urho3D::DecalSet::*)()>(&Urho3D::DecalSet::RemoveAllDecals) ;
    /*Return material. BIND_AS_PROPERTY*//*() const*/
    type["GetMaterial"] = [](Urho3D::DecalSet& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return number of decals. BIND_AS_PROPERTY*//*() const*/
    type["GetNumDecals"] = static_cast<unsigned (Urho3D::DecalSet::*)() const>(&Urho3D::DecalSet::GetNumDecals) ;
    /*Retur number of vertices in the decals. BIND_AS_PROPERTY*//*() const*/
    type["GetNumVertices"] = static_cast<unsigned (Urho3D::DecalSet::*)() const>(&Urho3D::DecalSet::GetNumVertices) ;
    /*Retur number of vertex indices in the decals. BIND_AS_PROPERTY*//*() const*/
    type["GetNumIndices"] = static_cast<unsigned (Urho3D::DecalSet::*)() const>(&Urho3D::DecalSet::GetNumIndices) ;
    /*Return maximum number of decal vertices. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxVertices"] = static_cast<unsigned (Urho3D::DecalSet::*)() const>(&Urho3D::DecalSet::GetMaxVertices) ;
    /*Return maximum number of decal vertex indices. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxIndices"] = static_cast<unsigned (Urho3D::DecalSet::*)() const>(&Urho3D::DecalSet::GetMaxIndices) ;
    /*Return whether is optimizing GPU buffer sizes according to current amount of decals. BIND_AS_PROPERTY*//*() const*/
    type["GetOptimizeBufferSize"] = static_cast<bool (Urho3D::DecalSet::*)() const>(&Urho3D::DecalSet::GetOptimizeBufferSize) ;
    /*Set material attribute.*//*(const ResourceRef &value)*/
    type["SetMaterialAttr"] = static_cast<void (Urho3D::DecalSet::*)(const  ResourceRef &)>(&Urho3D::DecalSet::SetMaterialAttr) ;
    /*Set decals attribute.*//*(const PODVector< unsigned char > &value)*/
    type["SetDecalsAttr"] = static_cast<void (Urho3D::DecalSet::*)(const  PODVector< unsigned char > &)>(&Urho3D::DecalSet::SetDecalsAttr) ;
    /*Return material attribute.*//*() const*/
    type["GetMaterialAttr"] = static_cast<ResourceRef (Urho3D::DecalSet::*)() const>(&Urho3D::DecalSet::GetMaterialAttr) ;
    /*Return decals attribute.*//*() const*/
    type["GetDecalsAttr"] = static_cast<PODVector<unsigned char> (Urho3D::DecalSet::*)() const>(&Urho3D::DecalSet::GetDecalsAttr) ;
    type["AddDecal"] = sol::overload(
        static_cast<bool (Urho3D::DecalSet::*)(Drawable *, const  Vector3 &, const  Quaternion &, float, float, float, const  Vector2 &, const  Vector2 &, float, float, unsigned)>(&Urho3D::DecalSet::AddDecal) ,
        [](Urho3D::DecalSet& self, Drawable * target, const  Vector3 & worldPosition, const  Quaternion & worldRotation, float size, float aspectRatio, float depth, const  Vector2 & topLeftUV, const  Vector2 & bottomRightUV, float timeToLive, float normalCutoff){ return self.AddDecal(target, worldPosition, worldRotation, size, aspectRatio, depth, topLeftUV, bottomRightUV, timeToLive, normalCutoff); },
        [](Urho3D::DecalSet& self, Drawable * target, const  Vector3 & worldPosition, const  Quaternion & worldRotation, float size, float aspectRatio, float depth, const  Vector2 & topLeftUV, const  Vector2 & bottomRightUV, float timeToLive){ return self.AddDecal(target, worldPosition, worldRotation, size, aspectRatio, depth, topLeftUV, bottomRightUV, timeToLive); },
        [](Urho3D::DecalSet& self, Drawable * target, const  Vector3 & worldPosition, const  Quaternion & worldRotation, float size, float aspectRatio, float depth, const  Vector2 & topLeftUV, const  Vector2 & bottomRightUV){ return self.AddDecal(target, worldPosition, worldRotation, size, aspectRatio, depth, topLeftUV, bottomRightUV); } );
    type["material"] = sol::property([](Urho3D::DecalSet& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::DecalSet::*)(Material *)>(&Urho3D::DecalSet::SetMaterial) );
    type["maxIndices"] = sol::property(static_cast<unsigned (Urho3D::DecalSet::*)() const>(&Urho3D::DecalSet::GetMaxIndices) 
        , static_cast<void (Urho3D::DecalSet::*)(unsigned)>(&Urho3D::DecalSet::SetMaxIndices) );
    type["maxVertices"] = sol::property(static_cast<unsigned (Urho3D::DecalSet::*)() const>(&Urho3D::DecalSet::GetMaxVertices) 
        , static_cast<void (Urho3D::DecalSet::*)(unsigned)>(&Urho3D::DecalSet::SetMaxVertices) );
    type["numDecals"] = sol::property(static_cast<unsigned (Urho3D::DecalSet::*)() const>(&Urho3D::DecalSet::GetNumDecals) );
    type["numIndices"] = sol::property(static_cast<unsigned (Urho3D::DecalSet::*)() const>(&Urho3D::DecalSet::GetNumIndices) );
    type["numVertices"] = sol::property(static_cast<unsigned (Urho3D::DecalSet::*)() const>(&Urho3D::DecalSet::GetNumVertices) );
    type["optimizeBufferSize"] = sol::property(static_cast<bool (Urho3D::DecalSet::*)() const>(&Urho3D::DecalSet::GetOptimizeBufferSize) 
        , static_cast<void (Urho3D::DecalSet::*)(bool)>(&Urho3D::DecalSet::SetOptimizeBufferSize) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/DecalSet.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/DecalSet.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Math/Vector4.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_DecalVertex(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::DecalVertex>( "DecalVertex"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::DecalVertex(),
        Urho3D::DecalVertex(const  Vector3 &, const  Vector3 &),
        Urho3D::DecalVertex(const  Vector3 &, const  Vector3 &, const float *, const unsigned char *)>();

// Members

    type["position_"] = &Urho3D::DecalVertex::position_;
    type["normal_"] = &Urho3D::DecalVertex::normal_;
    type["texCoord_"] = &Urho3D::DecalVertex::texCoord_;
    type["tangent_"] = &Urho3D::DecalVertex::tangent_;
    type["blendWeights_0"] = sol::property([](Urho3D::DecalVertex& s) { return s.blendWeights_[0]; }, [](Urho3D::DecalVertex& s, float v){ s.blendWeights_[0] = v; });
    type["blendWeights_1"] = sol::property([](Urho3D::DecalVertex& s) { return s.blendWeights_[1]; }, [](Urho3D::DecalVertex& s, float v){ s.blendWeights_[1] = v; });
    type["blendWeights_2"] = sol::property([](Urho3D::DecalVertex& s) { return s.blendWeights_[2]; }, [](Urho3D::DecalVertex& s, float v){ s.blendWeights_[2] = v; });
    type["blendWeights_3"] = sol::property([](Urho3D::DecalVertex& s) { return s.blendWeights_[3]; }, [](Urho3D::DecalVertex& s, float v){ s.blendWeights_[3] = v; });
    type["blendIndices_0"] = sol::property([](Urho3D::DecalVertex& s) { return s.blendIndices_[0]; }, [](Urho3D::DecalVertex& s, unsigned char v){ s.blendIndices_[0] = v; });
    type["blendIndices_1"] = sol::property([](Urho3D::DecalVertex& s) { return s.blendIndices_[1]; }, [](Urho3D::DecalVertex& s, unsigned char v){ s.blendIndices_[1] = v; });
    type["blendIndices_2"] = sol::property([](Urho3D::DecalVertex& s) { return s.blendIndices_[2]; }, [](Urho3D::DecalVertex& s, unsigned char v){ s.blendIndices_[2] = v; });
    type["blendIndices_3"] = sol::property([](Urho3D::DecalVertex& s) { return s.blendIndices_[3]; }, [](Urho3D::DecalVertex& s, unsigned char v){ s.blendIndices_[3] = v; });

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/DecalSet.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/DecalSet.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/DecalSet.h>
#include <Urho3D/Math/BoundingBox.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Decal(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Decal>( "Decal"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Decal()>();

// Members

    /*Add a vertex.*//*(const DecalVertex &vertex)*/
    type["AddVertex"] = static_cast<void (Urho3D::Decal::*)(const  DecalVertex &)>(&Urho3D::Decal::AddVertex) ;
    /*Calculate local-space bounding box.*//*()*/
    type["CalculateBoundingBox"] = static_cast<void (Urho3D::Decal::*)()>(&Urho3D::Decal::CalculateBoundingBox) ;
    type["timer_"] = &Urho3D::Decal::timer_;
    type["timeToLive_"] = &Urho3D::Decal::timeToLive_;
    type["boundingBox_"] = &Urho3D::Decal::boundingBox_;
    type["vertices_"] = &Urho3D::Decal::vertices_;
    type["indices_"] = &Urho3D::Decal::indices_;

}

