
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Renderer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Renderer.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Object.h>
#include <Urho3D/Graphics/Batch.h>
#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/Geometry.h>
#include <Urho3D/Graphics/Light.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/OcclusionBuffer.h>
#include <Urho3D/Graphics/RenderPath.h>
#include <Urho3D/Graphics/RenderSurface.h>
#include <Urho3D/Graphics/Technique.h>
#include <Urho3D/Graphics/Texture.h>
#include <Urho3D/Graphics/Texture2D.h>
#include <Urho3D/Graphics/TextureCube.h>
#include <Urho3D/Graphics/VertexBuffer.h>
#include <Urho3D/Graphics/View.h>
#include <Urho3D/Graphics/Viewport.h>
#include <Urho3D/Graphics/Zone.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/Scene/Scene.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Renderer(sol::state_view& lua)
{
    
using namespace Urho3D;
using ShadowMapFilter = Renderer::ShadowMapFilter;


    casters[Urho3D::Renderer::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Renderer::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Renderer>((Urho3D::Renderer*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Renderer>( "Renderer"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Renderer>(context);
        });

// Members

    /*Set number of backbuffer viewports to render. BIND_AS_PROPERTY*//*(unsigned num)*/
    type["SetNumViewports"] = static_cast<void (Urho3D::Renderer::*)(unsigned)>(&Urho3D::Renderer::SetNumViewports) ;
    /*Set a backbuffer viewport. BIND_AS_ALIAS_set_viewports*//*(unsigned index, Viewport *viewport)*/
    type["SetViewport"] = static_cast<void (Urho3D::Renderer::*)(unsigned, Viewport *)>(&Urho3D::Renderer::SetViewport) ;
    /*Set default non-textured material technique. BIND_AS_PROPERTY*//*(Technique *technique)*/
    type["SetDefaultTechnique"] = static_cast<void (Urho3D::Renderer::*)(Technique *)>(&Urho3D::Renderer::SetDefaultTechnique) ;
    /*Set HDR rendering on/off. BIND_AS_ALIAS_set_hdrRendering*//*(bool enable)*/
    type["SetHDRRendering"] = static_cast<void (Urho3D::Renderer::*)(bool)>(&Urho3D::Renderer::SetHDRRendering) ;
    /*Set specular lighting on/off. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetSpecularLighting"] = static_cast<void (Urho3D::Renderer::*)(bool)>(&Urho3D::Renderer::SetSpecularLighting) ;
    /*Set default texture max anisotropy level. BIND_AS_PROPERTY*//*(int level)*/
    type["SetTextureAnisotropy"] = static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetTextureAnisotropy) ;
    /*Set default texture filtering. BIND_AS_PROPERTY*//*(TextureFilterMode mode)*/
    type["SetTextureFilterMode"] = static_cast<void (Urho3D::Renderer::*)(TextureFilterMode)>(&Urho3D::Renderer::SetTextureFilterMode) ;
    /*Set texture quality level. See the QUALITY constants in  GraphicsDefs.h. BIND_AS_PROPERTY*//*(MaterialQuality quality)*/
    type["SetTextureQuality"] = static_cast<void (Urho3D::Renderer::*)(MaterialQuality)>(&Urho3D::Renderer::SetTextureQuality) ;
    /*Set material quality level. See the QUALITY constants in  GraphicsDefs.h. BIND_AS_PROPERTY*//*(MaterialQuality quality)*/
    type["SetMaterialQuality"] = static_cast<void (Urho3D::Renderer::*)(MaterialQuality)>(&Urho3D::Renderer::SetMaterialQuality) ;
    /*Set shadows on/off. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetDrawShadows"] = static_cast<void (Urho3D::Renderer::*)(bool)>(&Urho3D::Renderer::SetDrawShadows) ;
    /*Set shadow map resolution. BIND_AS_PROPERTY*//*(int size)*/
    type["SetShadowMapSize"] = static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetShadowMapSize) ;
    /*Set shadow quality mode. See the SHADOWQUALITY enum in  GraphicsDefs.h. BIND_AS_PROPERTY*//*(ShadowQuality quality)*/
    type["SetShadowQuality"] = static_cast<void (Urho3D::Renderer::*)(ShadowQuality)>(&Urho3D::Renderer::SetShadowQuality) ;
    /*Set shadow softness, only works when SHADOWQUALITY_BLUR_VSM is used. BIND_AS_PROPERTY*//*(float shadowSoftness)*/
    type["SetShadowSoftness"] = static_cast<void (Urho3D::Renderer::*)(float)>(&Urho3D::Renderer::SetShadowSoftness) ;
    /*Set shadow parameters when VSM is used, they help to reduce light bleeding. LightBleeding must be in [0, 1].*//*(float minVariance, float lightBleedingReduction)*/
    type["SetVSMShadowParameters"] = static_cast<void (Urho3D::Renderer::*)(float, float)>(&Urho3D::Renderer::SetVSMShadowParameters) ;
    /*Set VSM shadow map multisampling level. Default 1 (no multisampling). BIND_AS_ALIAS_set_vsmMultiSample*//*(int multiSample)*/
    type["SetVSMMultiSample"] = static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetVSMMultiSample) ;
#if 0 // INVALID: NoBind!
    /*Set post processing filter to the shadow map. NO_BIND*//*(Object *instance, ShadowMapFilter functionPtr)*/
    type["SetShadowMapFilter"] = static_cast<void (Urho3D::Renderer::*)(Object *, ShadowMapFilter)>(&Urho3D::Renderer::SetShadowMapFilter) ;
#endif
        
    /*Set reuse of shadow maps. Default is true. If disabled, also transparent geometry can be shadowed. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetReuseShadowMaps"] = static_cast<void (Urho3D::Renderer::*)(bool)>(&Urho3D::Renderer::SetReuseShadowMaps) ;
    /*Set maximum number of shadow maps created for one resolution. Only has effect if reuse of shadow maps is disabled. BIND_AS_PROPERTY*//*(int shadowMaps)*/
    type["SetMaxShadowMaps"] = static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetMaxShadowMaps) ;
    /*Set dynamic instancing on/off. When on (default), drawables using the same static-type geometry and material will be automatically combined to an instanced draw call. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetDynamicInstancing"] = static_cast<void (Urho3D::Renderer::*)(bool)>(&Urho3D::Renderer::SetDynamicInstancing) ;
    /*Set number of extra instancing buffer elements. Default is 0. Extra 4-vectors are available through TEXCOORD7 and further. BIND_AS_PROPERTY*//*(int elements)*/
    type["SetNumExtraInstancingBufferElements"] = static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetNumExtraInstancingBufferElements) ;
    /*Set minimum number of instances required in a batch group to render as instanced. BIND_AS_PROPERTY*//*(int instances)*/
    type["SetMinInstances"] = static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetMinInstances) ;
    /*Set maximum number of sorted instances per batch group. If exceeded, instances are rendered unsorted. BIND_AS_PROPERTY*//*(int instances)*/
    type["SetMaxSortedInstances"] = static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetMaxSortedInstances) ;
    /*Set maximum number of occluder triangles. BIND_AS_PROPERTY*//*(int triangles)*/
    type["SetMaxOccluderTriangles"] = static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetMaxOccluderTriangles) ;
    /*Set occluder buffer width. BIND_AS_PROPERTY*//*(int size)*/
    type["SetOcclusionBufferSize"] = static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetOcclusionBufferSize) ;
    /*Set required screen size (1.0 = full screen) for occluders. BIND_AS_PROPERTY*//*(float screenSize)*/
    type["SetOccluderSizeThreshold"] = static_cast<void (Urho3D::Renderer::*)(float)>(&Urho3D::Renderer::SetOccluderSizeThreshold) ;
    /*Set whether to thread occluder rendering. Default false. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetThreadedOcclusion"] = static_cast<void (Urho3D::Renderer::*)(bool)>(&Urho3D::Renderer::SetThreadedOcclusion) ;
    /*Set shadow depth bias multiplier for mobile platforms to counteract possible worse shadow map precision. Default 1.0 (no effect). BIND_AS_PROPERTY*//*(float mul)*/
    type["SetMobileShadowBiasMul"] = static_cast<void (Urho3D::Renderer::*)(float)>(&Urho3D::Renderer::SetMobileShadowBiasMul) ;
    /*Set shadow depth bias addition for mobile platforms to counteract possible worse shadow map precision. Default 0.0 (no effect). BIND_AS_PROPERTY*//*(float add)*/
    type["SetMobileShadowBiasAdd"] = static_cast<void (Urho3D::Renderer::*)(float)>(&Urho3D::Renderer::SetMobileShadowBiasAdd) ;
    /*Set shadow normal offset multiplier for mobile platforms to counteract possible worse shadow map precision. Default 1.0 (no effect). BIND_AS_PROPERTY*//*(float mul)*/
    type["SetMobileNormalOffsetMul"] = static_cast<void (Urho3D::Renderer::*)(float)>(&Urho3D::Renderer::SetMobileNormalOffsetMul) ;
    /*Force reload of shaders.*//*()*/
    type["ReloadShaders"] = static_cast<void (Urho3D::Renderer::*)()>(&Urho3D::Renderer::ReloadShaders) ;
    /*Apply post processing filter to the shadow map. Called by  View.*//*(View *view, Texture2D *shadowMap, float blurScale)*/
    type["ApplyShadowMapFilter"] = static_cast<void (Urho3D::Renderer::*)(View *, Texture2D *, float)>(&Urho3D::Renderer::ApplyShadowMapFilter) ;
    /*Return number of backbuffer viewports. BIND_AS_PROPERTY*//*() const*/
    type["GetNumViewports"] = static_cast<unsigned (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetNumViewports) ;
    /*Return backbuffer viewport by index. BIND_AS_ALIAS_get_viewports*//*(unsigned index) const*/
    type["GetViewport"] = [](Urho3D::Renderer& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetViewport(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return nth backbuffer viewport associated to a scene. Index 0 returns the first.*//*(Scene *scene, unsigned index) const*/
    type["GetViewportForScene"] = [](Urho3D::Renderer& self, Scene *scene, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetViewportForScene(scene, index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return default renderpath. BIND_AS_PROPERTY*//*() const*/
    type["GetDefaultRenderPath"] = [](Urho3D::Renderer& self){ return SharedPtr(self.GetDefaultRenderPath()); };
    /*Return default non-textured material technique. BIND_AS_PROPERTY*//*() const*/
    type["GetDefaultTechnique"] = [](Urho3D::Renderer& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultTechnique());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return whether HDR rendering is enabled. BIND_AS_ALIAS_get_hdrRendering*//*() const*/
    type["GetHDRRendering"] = static_cast<bool (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetHDRRendering) ;
    /*Return whether specular lighting is enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetSpecularLighting"] = static_cast<bool (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetSpecularLighting) ;
    /*Return whether drawing shadows is enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetDrawShadows"] = static_cast<bool (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetDrawShadows) ;
    /*Return default texture max. anisotropy level. BIND_AS_PROPERTY*//*() const*/
    type["GetTextureAnisotropy"] = static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetTextureAnisotropy) ;
    /*Return default texture filtering mode. BIND_AS_PROPERTY*//*() const*/
    type["GetTextureFilterMode"] = static_cast<TextureFilterMode (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetTextureFilterMode) ;
    /*Return texture quality level. BIND_AS_PROPERTY*//*() const*/
    type["GetTextureQuality"] = static_cast<MaterialQuality (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetTextureQuality) ;
    /*Return material quality level. BIND_AS_PROPERTY*//*() const*/
    type["GetMaterialQuality"] = static_cast<MaterialQuality (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetMaterialQuality) ;
    /*Return shadow map resolution. BIND_AS_PROPERTY*//*() const*/
    type["GetShadowMapSize"] = static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetShadowMapSize) ;
    /*Return shadow quality. BIND_AS_PROPERTY*//*() const*/
    type["GetShadowQuality"] = static_cast<ShadowQuality (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetShadowQuality) ;
    /*Return shadow softness. BIND_AS_PROPERTY*//*() const*/
    type["GetShadowSoftness"] = static_cast<float (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetShadowSoftness) ;
    /*Return VSM shadow parameters. BIND_AS_ALIAS_get_vsmShadowParameters*//*() const*/
    type["GetVSMShadowParameters"] = static_cast<Vector2 (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetVSMShadowParameters) ;
    /*Return VSM shadow multisample level. BIND_AS_ALIAS_get_vsmMultiSample*//*() const*/
    type["GetVSMMultiSample"] = static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetVSMMultiSample) ;
    /*Return whether shadow maps are reused. BIND_AS_PROPERTY*//*() const*/
    type["GetReuseShadowMaps"] = static_cast<bool (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetReuseShadowMaps) ;
    /*Return maximum number of shadow maps per resolution. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxShadowMaps"] = static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetMaxShadowMaps) ;
    /*Return whether dynamic instancing is in use. BIND_AS_PROPERTY*//*() const*/
    type["GetDynamicInstancing"] = static_cast<bool (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetDynamicInstancing) ;
    /*Return number of extra instancing buffer elements. BIND_AS_PROPERTY*//*() const*/
    type["GetNumExtraInstancingBufferElements"] = static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetNumExtraInstancingBufferElements) ;
    /*Return minimum number of instances required in a batch group to render as instanced. BIND_AS_PROPERTY*//*() const*/
    type["GetMinInstances"] = static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetMinInstances) ;
    /*Return maximum number of sorted instances per batch group. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxSortedInstances"] = static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetMaxSortedInstances) ;
    /*Return maximum number of occluder triangles. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxOccluderTriangles"] = static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetMaxOccluderTriangles) ;
    /*Return occlusion buffer width. BIND_AS_PROPERTY*//*() const*/
    type["GetOcclusionBufferSize"] = static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetOcclusionBufferSize) ;
    /*Return occluder screen size threshold. BIND_AS_PROPERTY*//*() const*/
    type["GetOccluderSizeThreshold"] = static_cast<float (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetOccluderSizeThreshold) ;
    /*Return whether occlusion rendering is threaded. BIND_AS_PROPERTY*//*() const*/
    type["GetThreadedOcclusion"] = static_cast<bool (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetThreadedOcclusion) ;
    /*Return shadow depth bias multiplier for mobile platforms. BIND_AS_PROPERTY*//*() const*/
    type["GetMobileShadowBiasMul"] = static_cast<float (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetMobileShadowBiasMul) ;
    /*Return shadow depth bias addition for mobile platforms. BIND_AS_PROPERTY*//*() const*/
    type["GetMobileShadowBiasAdd"] = static_cast<float (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetMobileShadowBiasAdd) ;
    /*Return shadow normal offset multiplier for mobile platforms. BIND_AS_PROPERTY*//*() const*/
    type["GetMobileNormalOffsetMul"] = static_cast<float (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetMobileNormalOffsetMul) ;
    /*Return number of views rendered. BIND_AS_PROPERTY*//*() const*/
    type["GetNumViews"] = static_cast<unsigned (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetNumViews) ;
    /*Return number of primitives rendered. BIND_AS_PROPERTY*//*() const*/
    type["GetNumPrimitives"] = static_cast<unsigned (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetNumPrimitives) ;
    /*Return number of batches rendered. BIND_AS_PROPERTY*//*() const*/
    type["GetNumBatches"] = static_cast<unsigned (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetNumBatches) ;
    /*Return the default zone. BIND_AS_PROPERTY*//*() const*/
    type["GetDefaultZone"] = [](Urho3D::Renderer& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultZone());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the default material. BIND_AS_PROPERTY*//*() const*/
    type["GetDefaultMaterial"] = [](Urho3D::Renderer& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the default range attenuation texture. BIND_AS_PROPERTY*//*() const*/
    type["GetDefaultLightRamp"] = [](Urho3D::Renderer& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultLightRamp());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the default spotlight attenuation texture. BIND_AS_PROPERTY*//*() const*/
    type["GetDefaultLightSpot"] = [](Urho3D::Renderer& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultLightSpot());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the shadowed pointlight face selection cube map.*//*() const*/
    type["GetFaceSelectCubeMap"] = [](Urho3D::Renderer& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFaceSelectCubeMap());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the shadowed pointlight indirection cube map.*//*() const*/
    type["GetIndirectionCubeMap"] = [](Urho3D::Renderer& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetIndirectionCubeMap());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the instancing vertex buffer.*//*() const*/
    type["GetInstancingBuffer"] = [](Urho3D::Renderer& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetInstancingBuffer());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the frame update parameters.*//*() const*/
    type["GetFrameInfo"] = static_cast<const FrameInfo& (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetFrameInfo) ;
    /*Update for rendering. Called by HandleRenderUpdate().*//*(float timeStep)*/
    type["Update"] = static_cast<void (Urho3D::Renderer::*)(float)>(&Urho3D::Renderer::Update) ;
    /*Render. Called by  Engine.*//*()*/
    type["Render"] = static_cast<void (Urho3D::Renderer::*)()>(&Urho3D::Renderer::Render) ;
    /*Add debug geometry to the debug renderer.*//*(bool depthTest)*/
    type["DrawDebugGeometry"] = static_cast<void (Urho3D::Renderer::*)(bool)>(&Urho3D::Renderer::DrawDebugGeometry) ;
    /*Queue a render surface's viewports for rendering. Called by the surface, or by  View.*//*(RenderSurface *renderTarget)*/
    type["QueueRenderSurface"] = static_cast<void (Urho3D::Renderer::*)(RenderSurface *)>(&Urho3D::Renderer::QueueRenderSurface) ;
    /*Queue a viewport for rendering. Null surface means backbuffer.*//*(RenderSurface *renderTarget, Viewport *viewport)*/
    type["QueueViewport"] = static_cast<void (Urho3D::Renderer::*)(RenderSurface *, Viewport *)>(&Urho3D::Renderer::QueueViewport) ;
    /*Return volume geometry for a light.*//*(Light *light)*/
    type["GetLightGeometry"] = [](Urho3D::Renderer& self, Light *light, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetLightGeometry(light));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return quad geometry used in postprocessing.*//*()*/
    type["GetQuadGeometry"] = [](Urho3D::Renderer& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetQuadGeometry());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Allocate a shadow map. If shadow map reuse is disabled, a different map is returned each time.*//*(Light *light, Camera *camera, unsigned viewWidth, unsigned viewHeight)*/
    type["GetShadowMap"] = [](Urho3D::Renderer& self, Light *light, Camera *camera, unsigned viewWidth, unsigned viewHeight, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetShadowMap(light, camera, viewWidth, viewHeight));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Allocate a depth-stencil surface that does not need to be readable. Should only be called during actual rendering, not before.*//*(int width, int height, int multiSample, bool autoResolve)*/
    type["GetDepthStencil"] = [](Urho3D::Renderer& self, int width, int height, int multiSample, bool autoResolve){ return SharedPtr(self.GetDepthStencil(width, height, multiSample, autoResolve)); };
    /*Allocate an occlusion buffer.*//*(Camera *camera)*/
    type["GetOcclusionBuffer"] = [](Urho3D::Renderer& self, Camera *camera, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOcclusionBuffer(camera));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Allocate a temporary shadow camera and a scene node for it. Is thread-safe.*//*()*/
    type["GetShadowCamera"] = [](Urho3D::Renderer& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetShadowCamera());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Mark a view as prepared by the specified culling camera.*//*(View *view, Camera *camera)*/
    type["StorePreparedView"] = static_cast<void (Urho3D::Renderer::*)(View *, Camera *)>(&Urho3D::Renderer::StorePreparedView) ;
    /*Return a prepared view if exists for the specified camera. Used to avoid duplicate view preparation CPU work.*//*(Camera *camera)*/
    type["GetPreparedView"] = [](Urho3D::Renderer& self, Camera *camera, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetPreparedView(camera));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Choose shaders for a forward rendering batch. The related batch queue is provided in case it has extra shader compilation defines.*//*(Batch &batch, Technique *tech, bool allowShadows, const BatchQueue &queue)*/
    type["SetBatchShaders"] = static_cast<void (Urho3D::Renderer::*)(Batch &, Technique *, bool, const  BatchQueue &)>(&Urho3D::Renderer::SetBatchShaders) ;
    /*Choose shaders for a deferred light volume batch.*//*(Batch &batch, Camera *camera, const String &vsName, const String &psName, const String &vsDefines, const String &psDefines)*/
    type["SetLightVolumeBatchShaders"] = static_cast<void (Urho3D::Renderer::*)(Batch &, Camera *, const  String &, const  String &, const  String &, const  String &)>(&Urho3D::Renderer::SetLightVolumeBatchShaders) ;
    /*Set cull mode while taking possible projection flipping into account.*//*(CullMode mode, Camera *camera)*/
    type["SetCullMode"] = static_cast<void (Urho3D::Renderer::*)(CullMode, Camera *)>(&Urho3D::Renderer::SetCullMode) ;
    /*Ensure sufficient size of the instancing vertex buffer. Return true if successful.*//*(unsigned numInstances)*/
    type["ResizeInstancingBuffer"] = static_cast<bool (Urho3D::Renderer::*)(unsigned)>(&Urho3D::Renderer::ResizeInstancingBuffer) ;
    /*Optimize a light by scissor rectangle.*//*(Light *light, Camera *camera)*/
    type["OptimizeLightByScissor"] = static_cast<void (Urho3D::Renderer::*)(Light *, Camera *)>(&Urho3D::Renderer::OptimizeLightByScissor) ;
    /*Optimize a light by marking it to the stencil buffer and setting a stencil test.*//*(Light *light, Camera *camera)*/
    type["OptimizeLightByStencil"] = static_cast<void (Urho3D::Renderer::*)(Light *, Camera *)>(&Urho3D::Renderer::OptimizeLightByStencil) ;
    /*Return a scissor rectangle for a light.*//*(Light *light, Camera *camera)*/
    type["GetLightScissor"] = static_cast<const Rect& (Urho3D::Renderer::*)(Light *, Camera *)>(&Urho3D::Renderer::GetLightScissor) ;
    type["SetDefaultRenderPath"] = sol::overload(
        static_cast<void (Urho3D::Renderer::*)(RenderPath *)>(&Urho3D::Renderer::SetDefaultRenderPath) ,
        static_cast<void (Urho3D::Renderer::*)(XMLFile *)>(&Urho3D::Renderer::SetDefaultRenderPath)  );
    type["GetNumGeometries"] = sol::overload(
        static_cast<unsigned (Urho3D::Renderer::*)(bool) const>(&Urho3D::Renderer::GetNumGeometries) ,
        [](Urho3D::Renderer& self){ return self.GetNumGeometries(); } );
    type["GetNumLights"] = sol::overload(
        static_cast<unsigned (Urho3D::Renderer::*)(bool) const>(&Urho3D::Renderer::GetNumLights) ,
        [](Urho3D::Renderer& self){ return self.GetNumLights(); } );
    type["GetNumShadowMaps"] = sol::overload(
        static_cast<unsigned (Urho3D::Renderer::*)(bool) const>(&Urho3D::Renderer::GetNumShadowMaps) ,
        [](Urho3D::Renderer& self){ return self.GetNumShadowMaps(); } );
    type["GetNumOccluders"] = sol::overload(
        static_cast<unsigned (Urho3D::Renderer::*)(bool) const>(&Urho3D::Renderer::GetNumOccluders) ,
        [](Urho3D::Renderer& self){ return self.GetNumOccluders(); } );
    type["GetScreenBuffer"] = sol::overload(
        [](Urho3D::Renderer& self, int width, int height, unsigned format, int multiSample, bool autoResolve, bool cubemap, bool filtered, bool srgb, unsigned persistentKey=0, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetScreenBuffer(width, height, format, multiSample, autoResolve, cubemap, filtered, srgb, persistentKey));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Renderer& self, int width, int height, unsigned format, int multiSample, bool autoResolve, bool cubemap, bool filtered, bool srgb, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetScreenBuffer(width, height, format, multiSample, autoResolve, cubemap, filtered, srgb));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["defaultLightRamp"] = sol::property([](Urho3D::Renderer& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultLightRamp());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["defaultLightSpot"] = sol::property([](Urho3D::Renderer& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultLightSpot());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["defaultMaterial"] = sol::property([](Urho3D::Renderer& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["defaultRenderPath"] = sol::property([](Urho3D::Renderer& self){ return SharedPtr(self.GetDefaultRenderPath()); }
        , static_cast<void (Urho3D::Renderer::*)(RenderPath *)>(&Urho3D::Renderer::SetDefaultRenderPath) );
    type["defaultTechnique"] = sol::property([](Urho3D::Renderer& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultTechnique());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Renderer::*)(Technique *)>(&Urho3D::Renderer::SetDefaultTechnique) );
    type["defaultZone"] = sol::property([](Urho3D::Renderer& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultZone());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["drawShadows"] = sol::property(static_cast<bool (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetDrawShadows) 
        , static_cast<void (Urho3D::Renderer::*)(bool)>(&Urho3D::Renderer::SetDrawShadows) );
    type["dynamicInstancing"] = sol::property(static_cast<bool (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetDynamicInstancing) 
        , static_cast<void (Urho3D::Renderer::*)(bool)>(&Urho3D::Renderer::SetDynamicInstancing) );
    type["hdrRendering"] = sol::property(static_cast<bool (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetHDRRendering) 
        , static_cast<void (Urho3D::Renderer::*)(bool)>(&Urho3D::Renderer::SetHDRRendering) );
    type["materialQuality"] = sol::property(static_cast<MaterialQuality (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetMaterialQuality) 
        , static_cast<void (Urho3D::Renderer::*)(MaterialQuality)>(&Urho3D::Renderer::SetMaterialQuality) );
    type["maxOccluderTriangles"] = sol::property(static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetMaxOccluderTriangles) 
        , static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetMaxOccluderTriangles) );
    type["maxShadowMaps"] = sol::property(static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetMaxShadowMaps) 
        , static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetMaxShadowMaps) );
    type["maxSortedInstances"] = sol::property(static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetMaxSortedInstances) 
        , static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetMaxSortedInstances) );
    type["minInstances"] = sol::property(static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetMinInstances) 
        , static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetMinInstances) );
    type["mobileNormalOffsetMul"] = sol::property(static_cast<float (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetMobileNormalOffsetMul) 
        , static_cast<void (Urho3D::Renderer::*)(float)>(&Urho3D::Renderer::SetMobileNormalOffsetMul) );
    type["mobileShadowBiasAdd"] = sol::property(static_cast<float (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetMobileShadowBiasAdd) 
        , static_cast<void (Urho3D::Renderer::*)(float)>(&Urho3D::Renderer::SetMobileShadowBiasAdd) );
    type["mobileShadowBiasMul"] = sol::property(static_cast<float (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetMobileShadowBiasMul) 
        , static_cast<void (Urho3D::Renderer::*)(float)>(&Urho3D::Renderer::SetMobileShadowBiasMul) );
    type["numBatches"] = sol::property(static_cast<unsigned (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetNumBatches) );
    type["numExtraInstancingBufferElements"] = sol::property(static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetNumExtraInstancingBufferElements) 
        , static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetNumExtraInstancingBufferElements) );
    type["numGeometries"] = sol::property([](Urho3D::Renderer& self){ return self.GetNumGeometries(); });
    type["numLights"] = sol::property([](Urho3D::Renderer& self){ return self.GetNumLights(); });
    type["numOccluders"] = sol::property([](Urho3D::Renderer& self){ return self.GetNumOccluders(); });
    type["numPrimitives"] = sol::property(static_cast<unsigned (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetNumPrimitives) );
    type["numShadowMaps"] = sol::property([](Urho3D::Renderer& self){ return self.GetNumShadowMaps(); });
    type["numViewports"] = sol::property(static_cast<unsigned (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetNumViewports) 
        , static_cast<void (Urho3D::Renderer::*)(unsigned)>(&Urho3D::Renderer::SetNumViewports) );
    type["numViews"] = sol::property(static_cast<unsigned (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetNumViews) );
    type["occluderSizeThreshold"] = sol::property(static_cast<float (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetOccluderSizeThreshold) 
        , static_cast<void (Urho3D::Renderer::*)(float)>(&Urho3D::Renderer::SetOccluderSizeThreshold) );
    type["occlusionBufferSize"] = sol::property(static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetOcclusionBufferSize) 
        , static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetOcclusionBufferSize) );
    type["reuseShadowMaps"] = sol::property(static_cast<bool (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetReuseShadowMaps) 
        , static_cast<void (Urho3D::Renderer::*)(bool)>(&Urho3D::Renderer::SetReuseShadowMaps) );
    type["shadowMapSize"] = sol::property(static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetShadowMapSize) 
        , static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetShadowMapSize) );
    type["shadowQuality"] = sol::property(static_cast<ShadowQuality (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetShadowQuality) 
        , static_cast<void (Urho3D::Renderer::*)(ShadowQuality)>(&Urho3D::Renderer::SetShadowQuality) );
    type["shadowSoftness"] = sol::property(static_cast<float (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetShadowSoftness) 
        , static_cast<void (Urho3D::Renderer::*)(float)>(&Urho3D::Renderer::SetShadowSoftness) );
    type["specularLighting"] = sol::property(static_cast<bool (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetSpecularLighting) 
        , static_cast<void (Urho3D::Renderer::*)(bool)>(&Urho3D::Renderer::SetSpecularLighting) );
    type["textureAnisotropy"] = sol::property(static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetTextureAnisotropy) 
        , static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetTextureAnisotropy) );
    type["textureFilterMode"] = sol::property(static_cast<TextureFilterMode (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetTextureFilterMode) 
        , static_cast<void (Urho3D::Renderer::*)(TextureFilterMode)>(&Urho3D::Renderer::SetTextureFilterMode) );
    type["textureQuality"] = sol::property(static_cast<MaterialQuality (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetTextureQuality) 
        , static_cast<void (Urho3D::Renderer::*)(MaterialQuality)>(&Urho3D::Renderer::SetTextureQuality) );
    type["threadedOcclusion"] = sol::property(static_cast<bool (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetThreadedOcclusion) 
        , static_cast<void (Urho3D::Renderer::*)(bool)>(&Urho3D::Renderer::SetThreadedOcclusion) );
    type["viewport"] = sol::property([](Urho3D::Renderer& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetViewport(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Renderer::*)(unsigned, Viewport *)>(&Urho3D::Renderer::SetViewport) );
    type["vsmMultiSample"] = sol::property(static_cast<int (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetVSMMultiSample) 
        , static_cast<void (Urho3D::Renderer::*)(int)>(&Urho3D::Renderer::SetVSMMultiSample) );
    type["vsmShadowParameters"] = sol::property(static_cast<Vector2 (Urho3D::Renderer::*)() const>(&Urho3D::Renderer::GetVSMShadowParameters) );

}

