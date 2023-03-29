
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Octree.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Octree.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Math/BoundingBox.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Octree(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Octree::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Octree::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Octree>((Urho3D::Octree*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Octree>( "Octree"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted,Urho3D::Octant>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Octree>(context);
        });

// Members

    /*Set size and maximum subdivision levels. If octree is not empty, drawable objects will be temporarily moved to the root.*//*(const BoundingBox &box, unsigned numLevels)*/
    type["SetSize"] = static_cast<void (Urho3D::Octree::*)(const  BoundingBox &, unsigned)>(&Urho3D::Octree::SetSize) ;
    /*Update and reinsert drawable objects.*//*(const FrameInfo &frame)*/
    type["Update"] = static_cast<void (Urho3D::Octree::*)(const  FrameInfo &)>(&Urho3D::Octree::Update) ;
    /*Add a drawable manually.*//*(Drawable *drawable)*/
    type["AddManualDrawable"] = static_cast<void (Urho3D::Octree::*)(Drawable *)>(&Urho3D::Octree::AddManualDrawable) ;
    /*Remove a manually added drawable.*//*(Drawable *drawable)*/
    type["RemoveManualDrawable"] = static_cast<void (Urho3D::Octree::*)(Drawable *)>(&Urho3D::Octree::RemoveManualDrawable) ;
#if 0 // INVALID: NoBind!
    /*Return drawable objects by a query. NO_BIND*//*(OctreeQuery &query) const*/
    type["GetDrawables"] = static_cast<void (Urho3D::Octree::*)(OctreeQuery &) const>(&Urho3D::Octree::GetDrawables) ;
#endif
        
    /*Return drawable objects by a ray query.*//*(RayOctreeQuery &query) const*/
    type["Raycast"] = static_cast<void (Urho3D::Octree::*)(RayOctreeQuery &) const>(&Urho3D::Octree::Raycast) ;
    /*Return the closest drawable object by a ray query.*//*(RayOctreeQuery &query) const*/
    type["RaycastSingle"] = static_cast<void (Urho3D::Octree::*)(RayOctreeQuery &) const>(&Urho3D::Octree::RaycastSingle) ;
    /*Return subdivision levels. BIND_AS_PROPERTY*//*() const*/
    type["GetNumLevels"] = static_cast<unsigned (Urho3D::Octree::*)() const>(&Urho3D::Octree::GetNumLevels) ;
    /*Mark drawable object as requiring an update and a reinsertion.*//*(Drawable *drawable)*/
    type["QueueUpdate"] = static_cast<void (Urho3D::Octree::*)(Drawable *)>(&Urho3D::Octree::QueueUpdate) ;
    /*Cancel drawable object's update.*//*(Drawable *drawable)*/
    type["CancelUpdate"] = static_cast<void (Urho3D::Octree::*)(Drawable *)>(&Urho3D::Octree::CancelUpdate) ;
    type["DrawDebugGeometry"] = sol::overload(
        static_cast<void (Urho3D::Octree::*)(DebugRenderer *, bool)>(&Urho3D::Octree::DrawDebugGeometry) ,
        static_cast<void (Urho3D::Octree::*)(bool)>(&Urho3D::Octree::DrawDebugGeometry)  );
    type["numLevels"] = sol::property(static_cast<unsigned (Urho3D::Octree::*)() const>(&Urho3D::Octree::GetNumLevels) );

}

