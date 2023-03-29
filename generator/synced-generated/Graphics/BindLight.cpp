
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Light.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Light.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Batch.h>
#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/Light.h>
#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Graphics/Texture.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Frustum.h>
#include <Urho3D/Math/Matrix3x4.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Light(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Light::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Light::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Light>((Urho3D::Light*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Light>( "Light"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Light>(context);
        });

// Members

    /*Process octree raycast. May be called from a worker thread.*//*(const RayOctreeQuery &query, PODVector< RayQueryResult > &results) override*/
    type["ProcessRayQuery"] = static_cast<void (Urho3D::Light::*)(const  RayOctreeQuery &, PODVector<  RayQueryResult > &)>(&Urho3D::Light::ProcessRayQuery) ;
    /*Calculate distance and prepare batches for rendering. May be called from worker thread(s), possibly re-entrantly.*//*(const FrameInfo &frame) override*/
    type["UpdateBatches"] = static_cast<void (Urho3D::Light::*)(const  FrameInfo &)>(&Urho3D::Light::UpdateBatches) ;
    /*Visualize the component as debug geometry.*//*(DebugRenderer *debug, bool depthTest) override*/
    type["DrawDebugGeometry"] = static_cast<void (Urho3D::Light::*)(DebugRenderer *, bool)>(&Urho3D::Light::DrawDebugGeometry) ;
    /*Set light type. BIND_AS_PROPERTY*//*(LightType type)*/
    type["SetLightType"] = static_cast<void (Urho3D::Light::*)(LightType)>(&Urho3D::Light::SetLightType) ;
    /*Set vertex lighting mode. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetPerVertex"] = static_cast<void (Urho3D::Light::*)(bool)>(&Urho3D::Light::SetPerVertex) ;
    /*Set color. BIND_AS_PROPERTY*//*(const Color &color)*/
    type["SetColor"] = static_cast<void (Urho3D::Light::*)(const  Color &)>(&Urho3D::Light::SetColor) ;
    /*Set temperature of the light in Kelvin. Modulates the light color when "use physical values" is enabled. BIND_AS_PROPERTY*//*(float temperature)*/
    type["SetTemperature"] = static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetTemperature) ;
    /*Set area light radius. Greater than zero activates area light mode. Works only with PBR shaders. BIND_AS_PROPERTY*//*(float radius)*/
    type["SetRadius"] = static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetRadius) ;
    /*Set tube area light length. Works only with PBR shaders. BIND_AS_PROPERTY*//*(float length)*/
    type["SetLength"] = static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetLength) ;
    /*Set use physical light values. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetUsePhysicalValues"] = static_cast<void (Urho3D::Light::*)(bool)>(&Urho3D::Light::SetUsePhysicalValues) ;
    /*Set specular intensity. Zero disables specular calculations. BIND_AS_PROPERTY*//*(float intensity)*/
    type["SetSpecularIntensity"] = static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetSpecularIntensity) ;
    /*Set light brightness multiplier. Both the color and specular intensity are multiplied with this. When "use physical values" is enabled, the value is specified in lumens. BIND_AS_PROPERTY*//*(float brightness)*/
    type["SetBrightness"] = static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetBrightness) ;
    /*Set range. BIND_AS_PROPERTY*//*(float range)*/
    type["SetRange"] = static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetRange) ;
    /*Set spotlight field of view. BIND_AS_PROPERTY*//*(float fov)*/
    type["SetFov"] = static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetFov) ;
    /*Set spotlight aspect ratio. BIND_AS_PROPERTY*//*(float aspectRatio)*/
    type["SetAspectRatio"] = static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetAspectRatio) ;
    /*Set fade out start distance. BIND_AS_PROPERTY*//*(float distance)*/
    type["SetFadeDistance"] = static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetFadeDistance) ;
    /*Set shadow fade out start distance. Only has effect if shadow distance is also non-zero. BIND_AS_PROPERTY*//*(float distance)*/
    type["SetShadowFadeDistance"] = static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetShadowFadeDistance) ;
    /*Set shadow depth bias parameters. BIND_AS_PROPERTY*//*(const BiasParameters &parameters)*/
    type["SetShadowBias"] = static_cast<void (Urho3D::Light::*)(const  BiasParameters &)>(&Urho3D::Light::SetShadowBias) ;
    /*Set directional light cascaded shadow parameters. BIND_AS_PROPERTY*//*(const CascadeParameters &parameters)*/
    type["SetShadowCascade"] = static_cast<void (Urho3D::Light::*)(const  CascadeParameters &)>(&Urho3D::Light::SetShadowCascade) ;
    /*Set shadow map focusing parameters. BIND_AS_PROPERTY*//*(const FocusParameters &parameters)*/
    type["SetShadowFocus"] = static_cast<void (Urho3D::Light::*)(const  FocusParameters &)>(&Urho3D::Light::SetShadowFocus) ;
    /*Set light intensity in shadow between 0.0 - 1.0. 0.0 (the default) gives fully dark shadows. BIND_AS_PROPERTY*//*(float intensity)*/
    type["SetShadowIntensity"] = static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetShadowIntensity) ;
    /*Set shadow resolution between 0.25 - 1.0. Determines the shadow map to use. BIND_AS_PROPERTY*//*(float resolution)*/
    type["SetShadowResolution"] = static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetShadowResolution) ;
    /*Set shadow camera near/far clip distance ratio for spot and point lights. Does not affect directional lights, since they are orthographic and have near clip 0. BIND_AS_PROPERTY*//*(float nearFarRatio)*/
    type["SetShadowNearFarRatio"] = static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetShadowNearFarRatio) ;
    /*Set maximum shadow extrusion for directional lights. The actual extrusion will be the smaller of this and camera far clip. Default 1000. BIND_AS_PROPERTY*//*(float extrusion)*/
    type["SetShadowMaxExtrusion"] = static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetShadowMaxExtrusion) ;
    /*Set range attenuation texture. BIND_AS_PROPERTY*//*(Texture *texture)*/
    type["SetRampTexture"] = static_cast<void (Urho3D::Light::*)(Texture *)>(&Urho3D::Light::SetRampTexture) ;
    /*Set spotlight attenuation texture. BIND_AS_PROPERTY*//*(Texture *texture)*/
    type["SetShapeTexture"] = static_cast<void (Urho3D::Light::*)(Texture *)>(&Urho3D::Light::SetShapeTexture) ;
    /*Return light type. BIND_AS_PROPERTY*//*() const*/
    type["GetLightType"] = static_cast<LightType (Urho3D::Light::*)() const>(&Urho3D::Light::GetLightType) ;
    /*Return vertex lighting mode. BIND_AS_PROPERTY*//*() const*/
    type["GetPerVertex"] = static_cast<bool (Urho3D::Light::*)() const>(&Urho3D::Light::GetPerVertex) ;
    /*Return color. BIND_AS_PROPERTY*//*() const*/
    type["GetColor"] = static_cast<const Color& (Urho3D::Light::*)() const>(&Urho3D::Light::GetColor) ;
    /*Return the temperature of the light in Kelvin. BIND_AS_PROPERTY*//*() const*/
    type["GetTemperature"] = static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetTemperature) ;
    /*Return area light mode radius. Works only with PBR shaders. BIND_AS_PROPERTY*//*() const*/
    type["GetRadius"] = static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetRadius) ;
    /*Return area tube light length. Works only with PBR shaders. BIND_AS_PROPERTY*//*() const*/
    type["GetLength"] = static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetLength) ;
    /*Return if light uses temperature and brightness in lumens. BIND_AS_PROPERTY*//*() const*/
    type["GetUsePhysicalValues"] = static_cast<bool (Urho3D::Light::*)() const>(&Urho3D::Light::GetUsePhysicalValues) ;
    /*Return the color value of the temperature in Kelvin. BIND_AS_PROPERTY*//*() const*/
    type["GetColorFromTemperature"] = static_cast<Color (Urho3D::Light::*)() const>(&Urho3D::Light::GetColorFromTemperature) ;
    /*Return specular intensity. BIND_AS_PROPERTY*//*() const*/
    type["GetSpecularIntensity"] = static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetSpecularIntensity) ;
    /*Return brightness multiplier. Specified in lumens when "use physical values" is enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetBrightness"] = static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetBrightness) ;
    /*Return effective color, multiplied by brightness and affected by temperature when "use physical values" is enabled. Alpha is always 1 so that can compare against the default black color to detect a light with no effect. BIND_AS_PROPERTY*//*() const*/
    type["GetEffectiveColor"] = static_cast<Color (Urho3D::Light::*)() const>(&Urho3D::Light::GetEffectiveColor) ;
    /*Return effective specular intensity, multiplied by absolute value of brightness. BIND_AS_PROPERTY*//*() const*/
    type["GetEffectiveSpecularIntensity"] = static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetEffectiveSpecularIntensity) ;
    /*Return range. BIND_AS_PROPERTY*//*() const*/
    type["GetRange"] = static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetRange) ;
    /*Return spotlight field of view. BIND_AS_PROPERTY*//*() const*/
    type["GetFov"] = static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetFov) ;
    /*Return spotlight aspect ratio. BIND_AS_PROPERTY*//*() const*/
    type["GetAspectRatio"] = static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetAspectRatio) ;
    /*Return fade start distance. BIND_AS_PROPERTY*//*() const*/
    type["GetFadeDistance"] = static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetFadeDistance) ;
    /*Return shadow fade start distance. BIND_AS_PROPERTY*//*() const*/
    type["GetShadowFadeDistance"] = static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetShadowFadeDistance) ;
    /*Return shadow depth bias parameters. BIND_AS_PROPERTY*//*() const*/
    type["GetShadowBias"] = static_cast<const BiasParameters& (Urho3D::Light::*)() const>(&Urho3D::Light::GetShadowBias) ;
    /*Return directional light cascaded shadow parameters. BIND_AS_PROPERTY*//*() const*/
    type["GetShadowCascade"] = static_cast<const CascadeParameters& (Urho3D::Light::*)() const>(&Urho3D::Light::GetShadowCascade) ;
    /*Return shadow map focus parameters. BIND_AS_PROPERTY*//*() const*/
    type["GetShadowFocus"] = static_cast<const FocusParameters& (Urho3D::Light::*)() const>(&Urho3D::Light::GetShadowFocus) ;
    /*Return light intensity in shadow. BIND_AS_PROPERTY*//*() const*/
    type["GetShadowIntensity"] = static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetShadowIntensity) ;
    /*Return shadow resolution. BIND_AS_PROPERTY*//*() const*/
    type["GetShadowResolution"] = static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetShadowResolution) ;
    /*Return shadow camera near/far clip distance ratio. BIND_AS_PROPERTY*//*() const*/
    type["GetShadowNearFarRatio"] = static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetShadowNearFarRatio) ;
    /*Return maximum shadow extrusion distance for directional lights. BIND_AS_PROPERTY*//*() const*/
    type["GetShadowMaxExtrusion"] = static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetShadowMaxExtrusion) ;
    /*Return range attenuation texture. BIND_AS_PROPERTY*//*() const*/
    type["GetRampTexture"] = [](Urho3D::Light& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRampTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return spotlight attenuation texture. BIND_AS_PROPERTY*//*() const*/
    type["GetShapeTexture"] = [](Urho3D::Light& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetShapeTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return spotlight frustum. BIND_AS_PROPERTY*//*() const*/
    type["GetFrustum"] = static_cast<Frustum (Urho3D::Light::*)() const>(&Urho3D::Light::GetFrustum) ;
    /*Return spotlight frustum in the specified view space.*//*(const Matrix3x4 &view) const*/
    type["GetViewSpaceFrustum"] = static_cast<Frustum (Urho3D::Light::*)(const  Matrix3x4 &) const>(&Urho3D::Light::GetViewSpaceFrustum) ;
    /*Return number of shadow map cascade splits for a directional light, considering also graphics API limitations. BIND_AS_PROPERTY*//*() const*/
    type["GetNumShadowSplits"] = static_cast<int (Urho3D::Light::*)() const>(&Urho3D::Light::GetNumShadowSplits) ;
    /*Return whether light has negative (darkening) color. BIND_AS_PROPERTY*//*() const*/
    type["IsNegative"] = static_cast<bool (Urho3D::Light::*)() const>(&Urho3D::Light::IsNegative) ;
    /*Set light queue used for this light. Called by  View.*//*(LightBatchQueue *queue)*/
    type["SetLightQueue"] = static_cast<void (Urho3D::Light::*)(LightBatchQueue *)>(&Urho3D::Light::SetLightQueue) ;
    /*Return light volume model transform.*//*(Camera *camera)*/
    type["GetVolumeTransform"] = static_cast<const Matrix3x4& (Urho3D::Light::*)(Camera *)>(&Urho3D::Light::GetVolumeTransform) ;
    /*Return light queue. Called by  View.*//*() const*/
    type["GetLightQueue"] = static_cast<LightBatchQueue* (Urho3D::Light::*)() const>(&Urho3D::Light::GetLightQueue) ;
    /*Set ramp texture attribute.*//*(const ResourceRef &value)*/
    type["SetRampTextureAttr"] = static_cast<void (Urho3D::Light::*)(const  ResourceRef &)>(&Urho3D::Light::SetRampTextureAttr) ;
    /*Set shape texture attribute.*//*(const ResourceRef &value)*/
    type["SetShapeTextureAttr"] = static_cast<void (Urho3D::Light::*)(const  ResourceRef &)>(&Urho3D::Light::SetShapeTextureAttr) ;
    /*Return ramp texture attribute.*//*() const*/
    type["GetRampTextureAttr"] = static_cast<ResourceRef (Urho3D::Light::*)() const>(&Urho3D::Light::GetRampTextureAttr) ;
    /*Return shape texture attribute.*//*() const*/
    type["GetShapeTextureAttr"] = static_cast<ResourceRef (Urho3D::Light::*)() const>(&Urho3D::Light::GetShapeTextureAttr) ;
    type["SetIntensitySortValue"] = sol::overload(
        static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetIntensitySortValue) ,
        static_cast<void (Urho3D::Light::*)(const  BoundingBox &)>(&Urho3D::Light::SetIntensitySortValue)  );
    type["GetIntensityDivisor"] = sol::overload(
        static_cast<float (Urho3D::Light::*)(float) const>(&Urho3D::Light::GetIntensityDivisor) ,
        [](Urho3D::Light& self){ return self.GetIntensityDivisor(); } );
    type["aspectRatio"] = sol::property(static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetAspectRatio) 
        , static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetAspectRatio) );
    type["brightness"] = sol::property(static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetBrightness) 
        , static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetBrightness) );
    type["color"] = sol::property(static_cast<const Color& (Urho3D::Light::*)() const>(&Urho3D::Light::GetColor) 
        , static_cast<void (Urho3D::Light::*)(const  Color &)>(&Urho3D::Light::SetColor) );
    type["colorFromTemperature"] = sol::property(static_cast<Color (Urho3D::Light::*)() const>(&Urho3D::Light::GetColorFromTemperature) );
    type["effectiveColor"] = sol::property(static_cast<Color (Urho3D::Light::*)() const>(&Urho3D::Light::GetEffectiveColor) );
    type["effectiveSpecularIntensity"] = sol::property(static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetEffectiveSpecularIntensity) );
    type["fadeDistance"] = sol::property(static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetFadeDistance) 
        , static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetFadeDistance) );
    type["fov"] = sol::property(static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetFov) 
        , static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetFov) );
    type["frustum"] = sol::property(static_cast<Frustum (Urho3D::Light::*)() const>(&Urho3D::Light::GetFrustum) );
    type["length"] = sol::property(static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetLength) 
        , static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetLength) );
    type["lightType"] = sol::property(static_cast<LightType (Urho3D::Light::*)() const>(&Urho3D::Light::GetLightType) 
        , static_cast<void (Urho3D::Light::*)(LightType)>(&Urho3D::Light::SetLightType) );
    type["negative"] = sol::property(static_cast<bool (Urho3D::Light::*)() const>(&Urho3D::Light::IsNegative) );
    type["numShadowSplits"] = sol::property(static_cast<int (Urho3D::Light::*)() const>(&Urho3D::Light::GetNumShadowSplits) );
    type["perVertex"] = sol::property(static_cast<bool (Urho3D::Light::*)() const>(&Urho3D::Light::GetPerVertex) 
        , static_cast<void (Urho3D::Light::*)(bool)>(&Urho3D::Light::SetPerVertex) );
    type["radius"] = sol::property(static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetRadius) 
        , static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetRadius) );
    type["rampTexture"] = sol::property([](Urho3D::Light& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRampTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Light::*)(Texture *)>(&Urho3D::Light::SetRampTexture) );
    type["range"] = sol::property(static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetRange) 
        , static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetRange) );
    type["shadowBias"] = sol::property(static_cast<const BiasParameters& (Urho3D::Light::*)() const>(&Urho3D::Light::GetShadowBias) 
        , static_cast<void (Urho3D::Light::*)(const  BiasParameters &)>(&Urho3D::Light::SetShadowBias) );
    type["shadowCascade"] = sol::property(static_cast<const CascadeParameters& (Urho3D::Light::*)() const>(&Urho3D::Light::GetShadowCascade) 
        , static_cast<void (Urho3D::Light::*)(const  CascadeParameters &)>(&Urho3D::Light::SetShadowCascade) );
    type["shadowFadeDistance"] = sol::property(static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetShadowFadeDistance) 
        , static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetShadowFadeDistance) );
    type["shadowFocus"] = sol::property(static_cast<const FocusParameters& (Urho3D::Light::*)() const>(&Urho3D::Light::GetShadowFocus) 
        , static_cast<void (Urho3D::Light::*)(const  FocusParameters &)>(&Urho3D::Light::SetShadowFocus) );
    type["shadowIntensity"] = sol::property(static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetShadowIntensity) 
        , static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetShadowIntensity) );
    type["shadowMaxExtrusion"] = sol::property(static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetShadowMaxExtrusion) 
        , static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetShadowMaxExtrusion) );
    type["shadowNearFarRatio"] = sol::property(static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetShadowNearFarRatio) 
        , static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetShadowNearFarRatio) );
    type["shadowResolution"] = sol::property(static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetShadowResolution) 
        , static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetShadowResolution) );
    type["shapeTexture"] = sol::property([](Urho3D::Light& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetShapeTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Light::*)(Texture *)>(&Urho3D::Light::SetShapeTexture) );
    type["specularIntensity"] = sol::property(static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetSpecularIntensity) 
        , static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetSpecularIntensity) );
    type["temperature"] = sol::property(static_cast<float (Urho3D::Light::*)() const>(&Urho3D::Light::GetTemperature) 
        , static_cast<void (Urho3D::Light::*)(float)>(&Urho3D::Light::SetTemperature) );
    type["usePhysicalValues"] = sol::property(static_cast<bool (Urho3D::Light::*)() const>(&Urho3D::Light::GetUsePhysicalValues) 
        , static_cast<void (Urho3D::Light::*)(bool)>(&Urho3D::Light::SetUsePhysicalValues) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Light.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Light.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_FocusParameters(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::FocusParameters>( "FocusParameters"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::FocusParameters(),
        Urho3D::FocusParameters(bool, bool, bool, float, float)>();

// Members

    /*Validate parameters.*//*()*/
    type["Validate"] = static_cast<void (Urho3D::FocusParameters::*)()>(&Urho3D::FocusParameters::Validate) ;
    type["focus_"] = &Urho3D::FocusParameters::focus_;
    type["nonUniform_"] = &Urho3D::FocusParameters::nonUniform_;
    type["autoSize_"] = &Urho3D::FocusParameters::autoSize_;
    type["quantize_"] = &Urho3D::FocusParameters::quantize_;
    type["minView_"] = &Urho3D::FocusParameters::minView_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Light.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Light.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_BiasParameters(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::BiasParameters>( "BiasParameters"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::BiasParameters(),
        Urho3D::BiasParameters(float, float, float),
        Urho3D::BiasParameters(float, float)>();

// Members

    /*Validate parameters.*//*()*/
    type["Validate"] = static_cast<void (Urho3D::BiasParameters::*)()>(&Urho3D::BiasParameters::Validate) ;
    type["constantBias_"] = &Urho3D::BiasParameters::constantBias_;
    type["slopeScaledBias_"] = &Urho3D::BiasParameters::slopeScaledBias_;
    type["normalOffset_"] = &Urho3D::BiasParameters::normalOffset_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Light.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Light.h>
#include <Urho3D/Math/Vector4.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CascadeParameters(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::CascadeParameters>( "CascadeParameters"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::CascadeParameters(),
        Urho3D::CascadeParameters(float, float, float, float, float, float),
        Urho3D::CascadeParameters(float, float, float, float, float)>();

// Members

    /*Validate parameters.*//*()*/
    type["Validate"] = static_cast<void (Urho3D::CascadeParameters::*)()>(&Urho3D::CascadeParameters::Validate) ;
    /*Return shadow maximum range.*//*() const*/
    type["GetShadowRange"] = static_cast<float (Urho3D::CascadeParameters::*)() const>(&Urho3D::CascadeParameters::GetShadowRange) ;
    type["splits_"] = &Urho3D::CascadeParameters::splits_;
    type["fadeStart_"] = &Urho3D::CascadeParameters::fadeStart_;
    type["biasAutoAdjust_"] = &Urho3D::CascadeParameters::biasAutoAdjust_;

}

