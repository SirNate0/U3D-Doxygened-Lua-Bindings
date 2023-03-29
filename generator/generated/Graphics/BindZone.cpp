
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Zone.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Zone.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Graphics/Texture.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Zone(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Zone::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Zone::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Zone>((Urho3D::Zone*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Zone>( "Zone"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Zone>(context);
        });

// Members

    /*Visualize the component as debug geometry.*//*(DebugRenderer *debug, bool depthTest) override*/
    type["DrawDebugGeometry"] = static_cast<void (Urho3D::Zone::*)(DebugRenderer *, bool)>(&Urho3D::Zone::DrawDebugGeometry) ;
    /*Set local-space bounding box. Will be used as an oriented bounding box to test whether objects or the camera are inside. BIND_AS_PROPERTY*//*(const BoundingBox &box)*/
    type["SetBoundingBox"] = static_cast<void (Urho3D::Zone::*)(const  BoundingBox &)>(&Urho3D::Zone::SetBoundingBox) ;
    /*Set ambient color. BIND_AS_PROPERTY*//*(const Color &color)*/
    type["SetAmbientColor"] = static_cast<void (Urho3D::Zone::*)(const  Color &)>(&Urho3D::Zone::SetAmbientColor) ;
    /*Set fog color. BIND_AS_PROPERTY*//*(const Color &color)*/
    type["SetFogColor"] = static_cast<void (Urho3D::Zone::*)(const  Color &)>(&Urho3D::Zone::SetFogColor) ;
    /*Set fog start distance. BIND_AS_PROPERTY*//*(float start)*/
    type["SetFogStart"] = static_cast<void (Urho3D::Zone::*)(float)>(&Urho3D::Zone::SetFogStart) ;
    /*Set fog end distance. BIND_AS_PROPERTY*//*(float end)*/
    type["SetFogEnd"] = static_cast<void (Urho3D::Zone::*)(float)>(&Urho3D::Zone::SetFogEnd) ;
    /*Set fog height distance relative to the scene node's world position. Effective only in height fog mode. BIND_AS_PROPERTY*//*(float height)*/
    type["SetFogHeight"] = static_cast<void (Urho3D::Zone::*)(float)>(&Urho3D::Zone::SetFogHeight) ;
    /*Set fog height scale. Effective only in height fog mode. BIND_AS_PROPERTY*//*(float scale)*/
    type["SetFogHeightScale"] = static_cast<void (Urho3D::Zone::*)(float)>(&Urho3D::Zone::SetFogHeightScale) ;
    /*Set zone priority. If an object or camera is inside several zones, the one with highest priority is used. BIND_AS_PROPERTY*//*(int priority)*/
    type["SetPriority"] = static_cast<void (Urho3D::Zone::*)(int)>(&Urho3D::Zone::SetPriority) ;
    /*Set height fog mode. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetHeightFog"] = static_cast<void (Urho3D::Zone::*)(bool)>(&Urho3D::Zone::SetHeightFog) ;
    /*Set override mode. If camera is inside an override zone, that zone will be used for all rendered objects instead of their own zone. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetOverride"] = static_cast<void (Urho3D::Zone::*)(bool)>(&Urho3D::Zone::SetOverride) ;
    /*Set ambient gradient mode. In gradient mode ambient color is interpolated from neighbor zones. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetAmbientGradient"] = static_cast<void (Urho3D::Zone::*)(bool)>(&Urho3D::Zone::SetAmbientGradient) ;
    /*Set zone texture. This will be bound to the zone texture unit when rendering objects inside the zone. Note that the default shaders do not use it. BIND_AS_PROPERTY*//*(Texture *texture)*/
    type["SetZoneTexture"] = static_cast<void (Urho3D::Zone::*)(Texture *)>(&Urho3D::Zone::SetZoneTexture) ;
    /*Return inverse world transform. BIND_AS_PROPERTY*//*() const*/
    type["GetInverseWorldTransform"] = static_cast<const Matrix3x4& (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetInverseWorldTransform) ;
    /*Return zone's own ambient color, disregarding gradient mode. BIND_AS_PROPERTY*//*() const*/
    type["GetAmbientColor"] = static_cast<const Color& (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetAmbientColor) ;
    /*Return ambient start color. Not safe to call from worker threads due to possible octree query. BIND_AS_PROPERTY*//*()*/
    type["GetAmbientStartColor"] = static_cast<const Color& (Urho3D::Zone::*)()>(&Urho3D::Zone::GetAmbientStartColor) ;
    /*Return ambient end color. Not safe to call from worker threads due to possible octree query. BIND_AS_PROPERTY*//*()*/
    type["GetAmbientEndColor"] = static_cast<const Color& (Urho3D::Zone::*)()>(&Urho3D::Zone::GetAmbientEndColor) ;
    /*Return fog color. BIND_AS_PROPERTY*//*() const*/
    type["GetFogColor"] = static_cast<const Color& (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetFogColor) ;
    /*Return fog start distance. BIND_AS_PROPERTY*//*() const*/
    type["GetFogStart"] = static_cast<float (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetFogStart) ;
    /*Return fog end distance. BIND_AS_PROPERTY*//*() const*/
    type["GetFogEnd"] = static_cast<float (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetFogEnd) ;
    /*Return fog height distance relative to the scene node's world position. BIND_AS_PROPERTY*//*() const*/
    type["GetFogHeight"] = static_cast<float (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetFogHeight) ;
    /*Return fog height scale. BIND_AS_PROPERTY*//*() const*/
    type["GetFogHeightScale"] = static_cast<float (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetFogHeightScale) ;
    /*Return zone priority. BIND_AS_PROPERTY*//*() const*/
    type["GetPriority"] = static_cast<int (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetPriority) ;
    /*Return whether height fog mode is enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetHeightFog"] = static_cast<bool (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetHeightFog) ;
    /*Return whether override mode is enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetOverride"] = static_cast<bool (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetOverride) ;
    /*Return whether ambient gradient mode is enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetAmbientGradient"] = static_cast<bool (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetAmbientGradient) ;
    /*Return zone texture. BIND_AS_PROPERTY*//*() const*/
    type["GetZoneTexture"] = [](Urho3D::Zone& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetZoneTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Check whether a point is inside.*//*(const Vector3 &point) const*/
    type["IsInside"] = static_cast<bool (Urho3D::Zone::*)(const  Vector3 &) const>(&Urho3D::Zone::IsInside) ;
    /*Set zone texture attribute.*//*(const ResourceRef &value)*/
    type["SetZoneTextureAttr"] = static_cast<void (Urho3D::Zone::*)(const  ResourceRef &)>(&Urho3D::Zone::SetZoneTextureAttr) ;
    /*Return zone texture attribute.*//*() const*/
    type["GetZoneTextureAttr"] = static_cast<ResourceRef (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetZoneTextureAttr) ;
    type["ambientColor"] = sol::property(static_cast<const Color& (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetAmbientColor) 
        , static_cast<void (Urho3D::Zone::*)(const  Color &)>(&Urho3D::Zone::SetAmbientColor) );
    type["ambientEndColor"] = sol::property(static_cast<const Color& (Urho3D::Zone::*)()>(&Urho3D::Zone::GetAmbientEndColor) );
    type["ambientGradient"] = sol::property(static_cast<bool (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetAmbientGradient) 
        , static_cast<void (Urho3D::Zone::*)(bool)>(&Urho3D::Zone::SetAmbientGradient) );
    type["ambientStartColor"] = sol::property(static_cast<const Color& (Urho3D::Zone::*)()>(&Urho3D::Zone::GetAmbientStartColor) );
    type["boundingBox"] = sol::property(static_cast<void (Urho3D::Zone::*)(const  BoundingBox &)>(&Urho3D::Zone::SetBoundingBox) );
    type["fogColor"] = sol::property(static_cast<const Color& (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetFogColor) 
        , static_cast<void (Urho3D::Zone::*)(const  Color &)>(&Urho3D::Zone::SetFogColor) );
    type["fogEnd"] = sol::property(static_cast<float (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetFogEnd) 
        , static_cast<void (Urho3D::Zone::*)(float)>(&Urho3D::Zone::SetFogEnd) );
    type["fogHeight"] = sol::property(static_cast<float (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetFogHeight) 
        , static_cast<void (Urho3D::Zone::*)(float)>(&Urho3D::Zone::SetFogHeight) );
    type["fogHeightScale"] = sol::property(static_cast<float (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetFogHeightScale) 
        , static_cast<void (Urho3D::Zone::*)(float)>(&Urho3D::Zone::SetFogHeightScale) );
    type["fogStart"] = sol::property(static_cast<float (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetFogStart) 
        , static_cast<void (Urho3D::Zone::*)(float)>(&Urho3D::Zone::SetFogStart) );
    type["heightFog"] = sol::property(static_cast<bool (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetHeightFog) 
        , static_cast<void (Urho3D::Zone::*)(bool)>(&Urho3D::Zone::SetHeightFog) );
    type["inverseWorldTransform"] = sol::property(static_cast<const Matrix3x4& (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetInverseWorldTransform) );
    type["override"] = sol::property(static_cast<bool (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetOverride) 
        , static_cast<void (Urho3D::Zone::*)(bool)>(&Urho3D::Zone::SetOverride) );
    type["priority"] = sol::property(static_cast<int (Urho3D::Zone::*)() const>(&Urho3D::Zone::GetPriority) 
        , static_cast<void (Urho3D::Zone::*)(int)>(&Urho3D::Zone::SetPriority) );
    type["zoneTexture"] = sol::property([](Urho3D::Zone& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetZoneTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Zone::*)(Texture *)>(&Urho3D::Zone::SetZoneTexture) );

}

