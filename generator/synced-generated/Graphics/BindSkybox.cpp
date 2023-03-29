
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Skybox.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Skybox.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/OctreeQuery.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Skybox(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Skybox::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Skybox::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Skybox>((Urho3D::Skybox*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Skybox>( "Skybox"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::StaticModel,Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Skybox>(context);
        });

// Members

    /*Process octree raycast. May be called from a worker thread.*//*(const RayOctreeQuery &query, PODVector< RayQueryResult > &results) override*/
    type["ProcessRayQuery"] = static_cast<void (Urho3D::Skybox::*)(const  RayOctreeQuery &, PODVector<  RayQueryResult > &)>(&Urho3D::Skybox::ProcessRayQuery) ;
    /*Calculate distance and prepare batches for rendering. May be called from worker thread(s), possibly re-entrantly.*//*(const FrameInfo &frame) override*/
    type["UpdateBatches"] = static_cast<void (Urho3D::Skybox::*)(const  FrameInfo &)>(&Urho3D::Skybox::UpdateBatches) ;

}

