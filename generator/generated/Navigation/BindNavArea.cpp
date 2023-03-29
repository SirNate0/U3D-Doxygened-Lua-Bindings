
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Navigation/NavArea.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Navigation/NavArea.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Math/BoundingBox.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_NavArea(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::NavArea::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::NavArea::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::NavArea>((Urho3D::NavArea*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::NavArea>( "NavArea"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::NavArea>(context);
        });

// Members

    /*Render debug geometry for the bounds.*//*(DebugRenderer *debug, bool depthTest) override*/
    type["DrawDebugGeometry"] = static_cast<void (Urho3D::NavArea::*)(DebugRenderer *, bool)>(&Urho3D::NavArea::DrawDebugGeometry) ;
    /*Get the area id for this volume. BIND_AS_PROPERTY*//*() const*/
    type["GetAreaID"] = static_cast<unsigned (Urho3D::NavArea::*)() const>(&Urho3D::NavArea::GetAreaID) ;
    /*Set the area id for this volume. BIND_AS_PROPERTY*//*(unsigned newID)*/
    type["SetAreaID"] = static_cast<void (Urho3D::NavArea::*)(unsigned)>(&Urho3D::NavArea::SetAreaID) ;
    /*Get the bounding box of this navigation area, in local space. BIND_AS_PROPERTY*//*() const*/
    type["GetBoundingBox"] = static_cast<BoundingBox (Urho3D::NavArea::*)() const>(&Urho3D::NavArea::GetBoundingBox) ;
    /*Set the bounding box of this area, in local space. BIND_AS_PROPERTY*//*(const BoundingBox &bnds)*/
    type["SetBoundingBox"] = static_cast<void (Urho3D::NavArea::*)(const  BoundingBox &)>(&Urho3D::NavArea::SetBoundingBox) ;
    /*Get the bounds of this navigation area in world space. BIND_AS_PROPERTY*//*() const*/
    type["GetWorldBoundingBox"] = static_cast<BoundingBox (Urho3D::NavArea::*)() const>(&Urho3D::NavArea::GetWorldBoundingBox) ;
    type["areaID"] = sol::property(static_cast<unsigned (Urho3D::NavArea::*)() const>(&Urho3D::NavArea::GetAreaID) 
        , static_cast<void (Urho3D::NavArea::*)(unsigned)>(&Urho3D::NavArea::SetAreaID) );
    type["boundingBox"] = sol::property(static_cast<BoundingBox (Urho3D::NavArea::*)() const>(&Urho3D::NavArea::GetBoundingBox) 
        , static_cast<void (Urho3D::NavArea::*)(const  BoundingBox &)>(&Urho3D::NavArea::SetBoundingBox) );
    type["worldBoundingBox"] = sol::property(static_cast<BoundingBox (Urho3D::NavArea::*)() const>(&Urho3D::NavArea::GetWorldBoundingBox) );

}

