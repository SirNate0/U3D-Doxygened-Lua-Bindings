
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/Renderer2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/Renderer2D.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Graphics/Texture2D.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Scene/Component.h>
#include <Urho3D/Urho2D/Drawable2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Renderer2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Renderer2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Renderer2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Renderer2D>((Urho3D::Renderer2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Renderer2D>( "Renderer2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Renderer2D>(context);
        });

// Members

    /*Process octree raycast. May be called from a worker thread.*//*(const RayOctreeQuery &query, PODVector< RayQueryResult > &results) override*/
    type["ProcessRayQuery"] = static_cast<void (Urho3D::Renderer2D::*)(const  RayOctreeQuery &, PODVector<  RayQueryResult > &)>(&Urho3D::Renderer2D::ProcessRayQuery) ;
    /*Calculate distance and prepare batches for rendering. May be called from worker thread(s), possibly re-entrantly.*//*(const FrameInfo &frame) override*/
    type["UpdateBatches"] = static_cast<void (Urho3D::Renderer2D::*)(const  FrameInfo &)>(&Urho3D::Renderer2D::UpdateBatches) ;
    /*Prepare geometry for rendering. Called from a worker thread if possible (no GPU update).*//*(const FrameInfo &frame) override*/
    type["UpdateGeometry"] = static_cast<void (Urho3D::Renderer2D::*)(const  FrameInfo &)>(&Urho3D::Renderer2D::UpdateGeometry) ;
    /*Return whether a geometry update is necessary, and if it can happen in a worker thread.*//*() override*/
    type["GetUpdateGeometryType"] = static_cast<UpdateGeometryType (Urho3D::Renderer2D::*)()>(&Urho3D::Renderer2D::GetUpdateGeometryType) ;
    /*Add  Drawable2D.*//*(Drawable2D *drawable)*/
    type["AddDrawable"] = static_cast<void (Urho3D::Renderer2D::*)(Drawable2D *)>(&Urho3D::Renderer2D::AddDrawable) ;
    /*Remove  Drawable2D.*//*(Drawable2D *drawable)*/
    type["RemoveDrawable"] = static_cast<void (Urho3D::Renderer2D::*)(Drawable2D *)>(&Urho3D::Renderer2D::RemoveDrawable) ;
    /*Return material by texture and blend mode.*//*(Texture2D *texture, BlendMode blendMode)*/
    type["GetMaterial"] = [](Urho3D::Renderer2D& self, Texture2D *texture, BlendMode blendMode, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial(texture, blendMode));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Check visibility.*//*(Drawable2D *drawable) const*/
    type["CheckVisibility"] = static_cast<bool (Urho3D::Renderer2D::*)(Drawable2D *) const>(&Urho3D::Renderer2D::CheckVisibility) ;

}

