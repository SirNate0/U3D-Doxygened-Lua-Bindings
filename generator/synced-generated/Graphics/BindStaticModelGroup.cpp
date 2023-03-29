
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/StaticModelGroup.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/StaticModelGroup.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/OcclusionBuffer.h>
#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Scene/Node.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_StaticModelGroup(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::StaticModelGroup::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::StaticModelGroup::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::StaticModelGroup>((Urho3D::StaticModelGroup*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::StaticModelGroup>( "StaticModelGroup"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::StaticModel,Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::StaticModelGroup>(context);
        });

// Members

    /*Apply attribute changes that can not be applied immediately. Called after scene load or a network update.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::StaticModelGroup::*)()>(&Urho3D::StaticModelGroup::ApplyAttributes) ;
    /*Process octree raycast. May be called from a worker thread.*//*(const RayOctreeQuery &query, PODVector< RayQueryResult > &results) override*/
    type["ProcessRayQuery"] = static_cast<void (Urho3D::StaticModelGroup::*)(const  RayOctreeQuery &, PODVector<  RayQueryResult > &)>(&Urho3D::StaticModelGroup::ProcessRayQuery) ;
    /*Calculate distance and prepare batches for rendering. May be called from worker thread(s), possibly re-entrantly.*//*(const FrameInfo &frame) override*/
    type["UpdateBatches"] = static_cast<void (Urho3D::StaticModelGroup::*)(const  FrameInfo &)>(&Urho3D::StaticModelGroup::UpdateBatches) ;
    /*Return number of occlusion geometry triangles.*//*() override*/
    type["GetNumOccluderTriangles"] = static_cast<unsigned (Urho3D::StaticModelGroup::*)()>(&Urho3D::StaticModelGroup::GetNumOccluderTriangles) ;
    /*Draw to occlusion buffer. Return true if did not run out of triangles.*//*(OcclusionBuffer *buffer) override*/
    type["DrawOcclusion"] = static_cast<bool (Urho3D::StaticModelGroup::*)(OcclusionBuffer *)>(&Urho3D::StaticModelGroup::DrawOcclusion) ;
    /*Add an instance scene node. It does not need any drawable components of its own.*//*(Node *node)*/
    type["AddInstanceNode"] = static_cast<void (Urho3D::StaticModelGroup::*)(Node *)>(&Urho3D::StaticModelGroup::AddInstanceNode) ;
    /*Remove an instance scene node.*//*(Node *node)*/
    type["RemoveInstanceNode"] = static_cast<void (Urho3D::StaticModelGroup::*)(Node *)>(&Urho3D::StaticModelGroup::RemoveInstanceNode) ;
    /*Remove all instance scene nodes.*//*()*/
    type["RemoveAllInstanceNodes"] = static_cast<void (Urho3D::StaticModelGroup::*)()>(&Urho3D::StaticModelGroup::RemoveAllInstanceNodes) ;
    /*Return number of instance nodes. BIND_AS_PROPERTY*//*() const*/
    type["GetNumInstanceNodes"] = static_cast<unsigned (Urho3D::StaticModelGroup::*)() const>(&Urho3D::StaticModelGroup::GetNumInstanceNodes) ;
    /*Return instance node by index. BIND_AS_ALIAS_get_instanceNodes*//*(unsigned index) const*/
    type["GetInstanceNode"] = [](Urho3D::StaticModelGroup& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetInstanceNode(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Set node IDs attribute.*//*(const VariantVector &value)*/
    type["SetNodeIDsAttr"] = static_cast<void (Urho3D::StaticModelGroup::*)(const  VariantVector &)>(&Urho3D::StaticModelGroup::SetNodeIDsAttr) ;
    /*Return node IDs attribute.*//*() const*/
    type["GetNodeIDsAttr"] = static_cast<const VariantVector& (Urho3D::StaticModelGroup::*)() const>(&Urho3D::StaticModelGroup::GetNodeIDsAttr) ;
    type["instanceNode"] = sol::property([](Urho3D::StaticModelGroup& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetInstanceNode(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["numInstanceNodes"] = sol::property(static_cast<unsigned (Urho3D::StaticModelGroup::*)() const>(&Urho3D::StaticModelGroup::GetNumInstanceNodes) );

}

