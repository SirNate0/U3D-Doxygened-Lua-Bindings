
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Graphics.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Graphics.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/ConstantBuffer.h>
#include <Urho3D/Graphics/GPUObject.h>
#include <Urho3D/Graphics/Graphics.h>
#include <Urho3D/Graphics/IndexBuffer.h>
#include <Urho3D/Graphics/RenderSurface.h>
#include <Urho3D/Graphics/ShaderVariation.h>
#include <Urho3D/Graphics/Texture.h>
#include <Urho3D/Graphics/Texture2D.h>
#include <Urho3D/Graphics/TextureCube.h>
#include <Urho3D/Graphics/VertexBuffer.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Matrix4.h>
#include <Urho3D/Math/Plane.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Math/Vector4.h>
#include <Urho3D/Resource/Image.h>
#include <Urho3D/Resource/Resource.h>
#include <SDL/SDL_video.h>
#include <Urho3D/Graphics/GraphicsImpl.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Graphics(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Graphics::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Graphics::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Graphics>((Urho3D::Graphics*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Graphics>( "Graphics"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Graphics>(context);
        });

// Members

    /*Set external window handle. Only effective before setting the initial screen mode.*//*(void *window)*/
    type["SetExternalWindow"] = static_cast<void (Urho3D::Graphics::*)(void *)>(&Urho3D::Graphics::SetExternalWindow) ;
    /*Set window title. BIND_AS_PROPERTY*//*(const String &windowTitle)*/
    type["SetWindowTitle"] = static_cast<void (Urho3D::Graphics::*)(const  String &)>(&Urho3D::Graphics::SetWindowTitle) ;
    /*Set window icon. BIND_AS_PROPERTY*//*(Image *windowIcon)*/
    type["SetWindowIcon"] = static_cast<void (Urho3D::Graphics::*)(Image *)>(&Urho3D::Graphics::SetWindowIcon) ;
    /*Set default window modes. Return true if successful.*//*(int width, int height, const ScreenModeParams &params)*/
    type["SetDefaultWindowModes"] = static_cast<bool (Urho3D::Graphics::*)(int, int, const  ScreenModeParams &)>(&Urho3D::Graphics::SetDefaultWindowModes) ;
    /*Set whether the main window uses sRGB conversion on write. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetSRGB"] = static_cast<void (Urho3D::Graphics::*)(bool)>(&Urho3D::Graphics::SetSRGB) ;
    /*Set whether rendering output is dithered. Default true on OpenGL. No effect on Direct3D. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetDither"] = static_cast<void (Urho3D::Graphics::*)(bool)>(&Urho3D::Graphics::SetDither) ;
    /*Set whether to flush the GPU command buffer to prevent multiple frames being queued and uneven frame timesteps. Default off, may decrease performance if enabled. Not currently implemented on OpenGL. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetFlushGPU"] = static_cast<void (Urho3D::Graphics::*)(bool)>(&Urho3D::Graphics::SetFlushGPU) ;
    /*Set forced use of OpenGL 2 even if OpenGL 3 is available. Must be called before setting the screen mode for the first time. Default false. No effect on Direct3D9 & 11.*//*(bool enable)*/
    type["SetForceGL2"] = static_cast<void (Urho3D::Graphics::*)(bool)>(&Urho3D::Graphics::SetForceGL2) ;
    /*Set allowed screen orientations as a space-separated list of "LandscapeLeft", "LandscapeRight", "Portrait" and "PortraitUpsideDown". Affects currently only iOS platform. BIND_AS_PROPERTY*//*(const String &orientations)*/
    type["SetOrientations"] = static_cast<void (Urho3D::Graphics::*)(const  String &)>(&Urho3D::Graphics::SetOrientations) ;
    /*Toggle between full screen and windowed mode. Return true if successful.*//*()*/
    type["ToggleFullscreen"] = static_cast<bool (Urho3D::Graphics::*)()>(&Urho3D::Graphics::ToggleFullscreen) ;
    /*Close the window.*//*()*/
    type["Close"] = static_cast<void (Urho3D::Graphics::*)()>(&Urho3D::Graphics::Close) ;
    /*Take a screenshot. Return true if successful.*//*(Image &destImage)*/
    type["TakeScreenShot"] = static_cast<bool (Urho3D::Graphics::*)(Image &)>(&Urho3D::Graphics::TakeScreenShot) ;
    /*Begin frame rendering. Return true if device available and can render.*//*()*/
    type["BeginFrame"] = static_cast<bool (Urho3D::Graphics::*)()>(&Urho3D::Graphics::BeginFrame) ;
    /*End frame rendering and swap buffers.*//*()*/
    type["EndFrame"] = static_cast<void (Urho3D::Graphics::*)()>(&Urho3D::Graphics::EndFrame) ;
    /*Set vertex buffer.*//*(VertexBuffer *buffer)*/
    type["SetVertexBuffer"] = static_cast<void (Urho3D::Graphics::*)(VertexBuffer *)>(&Urho3D::Graphics::SetVertexBuffer) ;
    /*Set index buffer.*//*(IndexBuffer *buffer)*/
    type["SetIndexBuffer"] = static_cast<void (Urho3D::Graphics::*)(IndexBuffer *)>(&Urho3D::Graphics::SetIndexBuffer) ;
    /*Set shaders.*//*(ShaderVariation *vs, ShaderVariation *ps)*/
    type["SetShaders"] = static_cast<void (Urho3D::Graphics::*)(ShaderVariation *, ShaderVariation *)>(&Urho3D::Graphics::SetShaders) ;
    /*Check whether a shader parameter group needs update. Does not actually check whether parameters exist in the shaders.*//*(ShaderParameterGroup group, const void *source)*/
    type["NeedParameterUpdate"] = static_cast<bool (Urho3D::Graphics::*)(ShaderParameterGroup, const void *)>(&Urho3D::Graphics::NeedParameterUpdate) ;
    /*Check whether a shader parameter exists on the currently set shaders.*//*(StringHash param)*/
    type["HasShaderParameter"] = static_cast<bool (Urho3D::Graphics::*)(StringHash)>(&Urho3D::Graphics::HasShaderParameter) ;
    /*Check whether the current vertex or pixel shader uses a texture unit.*//*(TextureUnit unit)*/
    type["HasTextureUnit"] = static_cast<bool (Urho3D::Graphics::*)(TextureUnit)>(&Urho3D::Graphics::HasTextureUnit) ;
    /*Clear remembered shader parameter source group.*//*(ShaderParameterGroup group)*/
    type["ClearParameterSource"] = static_cast<void (Urho3D::Graphics::*)(ShaderParameterGroup)>(&Urho3D::Graphics::ClearParameterSource) ;
    /*Clear remembered shader parameter sources.*//*()*/
    type["ClearParameterSources"] = static_cast<void (Urho3D::Graphics::*)()>(&Urho3D::Graphics::ClearParameterSources) ;
    /*Clear remembered transform shader parameter sources.*//*()*/
    type["ClearTransformSources"] = static_cast<void (Urho3D::Graphics::*)()>(&Urho3D::Graphics::ClearTransformSources) ;
    /*Set texture.*//*(unsigned index, Texture *texture)*/
    type["SetTexture"] = static_cast<void (Urho3D::Graphics::*)(unsigned, Texture *)>(&Urho3D::Graphics::SetTexture) ;
#if 0 // INVALID: NoBind!
    /*Bind texture unit 0 for update. Called by  Texture. Used only on OpenGL. NO_BIND*//*(Texture *texture)*/
    type["SetTextureForUpdate"] = static_cast<void (Urho3D::Graphics::*)(Texture *)>(&Urho3D::Graphics::SetTextureForUpdate) ;
#endif
        
#if 0 // INVALID: NoBind!
    /*Dirty texture parameters of all textures (when global settings change.) NO_BIND*//*()*/
    type["SetTextureParametersDirty"] = static_cast<void (Urho3D::Graphics::*)()>(&Urho3D::Graphics::SetTextureParametersDirty) ;
#endif
        
    /*Set default texture filtering mode. Called by  Renderer before rendering.*//*(TextureFilterMode mode)*/
    type["SetDefaultTextureFilterMode"] = static_cast<void (Urho3D::Graphics::*)(TextureFilterMode)>(&Urho3D::Graphics::SetDefaultTextureFilterMode) ;
    /*Set default texture anisotropy level. Called by  Renderer before rendering.*//*(unsigned level)*/
    type["SetDefaultTextureAnisotropy"] = static_cast<void (Urho3D::Graphics::*)(unsigned)>(&Urho3D::Graphics::SetDefaultTextureAnisotropy) ;
    /*Reset all rendertargets, depth-stencil surface and viewport.*//*()*/
    type["ResetRenderTargets"] = static_cast<void (Urho3D::Graphics::*)()>(&Urho3D::Graphics::ResetRenderTargets) ;
    /*Reset specific rendertarget.*//*(unsigned index)*/
    type["ResetRenderTarget"] = static_cast<void (Urho3D::Graphics::*)(unsigned)>(&Urho3D::Graphics::ResetRenderTarget) ;
    /*Reset depth-stencil surface.*//*()*/
    type["ResetDepthStencil"] = static_cast<void (Urho3D::Graphics::*)()>(&Urho3D::Graphics::ResetDepthStencil) ;
    /*Set viewport.*//*(const IntRect &rect)*/
    type["SetViewport"] = static_cast<void (Urho3D::Graphics::*)(const  IntRect &)>(&Urho3D::Graphics::SetViewport) ;
    /*Set color write on/off.*//*(bool enable)*/
    type["SetColorWrite"] = static_cast<void (Urho3D::Graphics::*)(bool)>(&Urho3D::Graphics::SetColorWrite) ;
    /*Set hardware culling mode.*//*(CullMode mode)*/
    type["SetCullMode"] = static_cast<void (Urho3D::Graphics::*)(CullMode)>(&Urho3D::Graphics::SetCullMode) ;
    /*Set depth bias.*//*(float constantBias, float slopeScaledBias)*/
    type["SetDepthBias"] = static_cast<void (Urho3D::Graphics::*)(float, float)>(&Urho3D::Graphics::SetDepthBias) ;
    /*Set depth compare.*//*(CompareMode mode)*/
    type["SetDepthTest"] = static_cast<void (Urho3D::Graphics::*)(CompareMode)>(&Urho3D::Graphics::SetDepthTest) ;
    /*Set depth write on/off.*//*(bool enable)*/
    type["SetDepthWrite"] = static_cast<void (Urho3D::Graphics::*)(bool)>(&Urho3D::Graphics::SetDepthWrite) ;
    /*Set polygon fill mode.*//*(FillMode mode)*/
    type["SetFillMode"] = static_cast<void (Urho3D::Graphics::*)(FillMode)>(&Urho3D::Graphics::SetFillMode) ;
    /*Set line antialiasing on/off.*//*(bool enable)*/
    type["SetLineAntiAlias"] = static_cast<void (Urho3D::Graphics::*)(bool)>(&Urho3D::Graphics::SetLineAntiAlias) ;
    /*Begin dumping shader variation names to an XML file for precaching.*//*(const String &fileName)*/
    type["BeginDumpShaders"] = static_cast<void (Urho3D::Graphics::*)(const  String &)>(&Urho3D::Graphics::BeginDumpShaders) ;
    /*End dumping shader variations names.*//*()*/
    type["EndDumpShaders"] = static_cast<void (Urho3D::Graphics::*)()>(&Urho3D::Graphics::EndDumpShaders) ;
    /*Precache shader variations from an XML file generated with  BeginDumpShaders().*//*(Deserializer &source)*/
    type["PrecacheShaders"] = static_cast<void (Urho3D::Graphics::*)(Deserializer &)>(&Urho3D::Graphics::PrecacheShaders) ;
    /*Set shader cache directory, Direct3D only. This can either be an absolute path or a path within the resource system. BIND_AS_PROPERTY*//*(const String &path)*/
    type["SetShaderCacheDir"] = static_cast<void (Urho3D::Graphics::*)(const  String &)>(&Urho3D::Graphics::SetShaderCacheDir) ;
    /*Return whether rendering initialized. BIND_AS_PROPERTY*//*() const*/
    type["IsInitialized"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::IsInitialized) ;
    /*Return graphics implementation, which holds the actual API-specific resources.*//*() const*/
    type["GetImpl"] = static_cast<GraphicsImpl* (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetImpl) ;
    /*Return OS-specific external window handle. Null if not in use.*//*() const*/
    type["GetExternalWindow"] = static_cast<void* (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetExternalWindow) ;
    /*Return SDL window.*//*() const*/
# if 0 // SKIPPED
    type["GetWindow"] = static_cast<SDL_Window* (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetWindow) ;
# endif
    /*Return window title. BIND_AS_PROPERTY*//*() const*/
    type["GetWindowTitle"] = static_cast<const String& (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetWindowTitle) ;
    /*Return graphics API name. BIND_AS_PROPERTY*//*() const*/
    type["GetApiName"] = static_cast<const String& (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetApiName) ;
    /*Return window position. BIND_AS_PROPERTY*//*() const*/
    type["GetWindowPosition"] = static_cast<IntVector2 (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetWindowPosition) ;
    /*Return window width in pixels. BIND_AS_PROPERTY*//*() const*/
    type["GetWidth"] = static_cast<int (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetWidth) ;
    /*Return window height in pixels. BIND_AS_PROPERTY*//*() const*/
    type["GetHeight"] = static_cast<int (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetHeight) ;
    /*Return screen mode parameters.*//*() const*/
    type["GetScreenModeParams"] = static_cast<const ScreenModeParams& (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetScreenModeParams) ;
    /*Return multisample mode (1 = no multisampling). BIND_AS_PROPERTY*//*() const*/
    type["GetMultiSample"] = static_cast<int (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetMultiSample) ;
    /*Return window size in pixels. BIND_AS_PROPERTY*//*() const*/
    type["GetSize"] = static_cast<IntVector2 (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetSize) ;
    /*Return whether window is fullscreen. BIND_AS_PROPERTY*//*() const*/
    type["GetFullscreen"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetFullscreen) ;
    /*Return whether window is borderless. BIND_AS_PROPERTY*//*() const*/
    type["GetBorderless"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetBorderless) ;
    /*Return whether window is resizable. BIND_AS_PROPERTY*//*() const*/
    type["GetResizable"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetResizable) ;
    /*Return whether window is high DPI.*//*() const*/
    type["GetHighDPI"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetHighDPI) ;
    /*Return whether vertical sync is on. BIND_AS_PROPERTY*//*() const*/
    type["GetVSync"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetVSync) ;
    /*Return refresh rate when using vsync in fullscreen.*//*() const*/
    type["GetRefreshRate"] = static_cast<int (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetRefreshRate) ;
    /*Return the current monitor index. Effective on in fullscreen.*//*() const*/
    type["GetMonitor"] = static_cast<int (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetMonitor) ;
    /*Return whether triple buffering is enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetTripleBuffer"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetTripleBuffer) ;
    /*Return whether the main window is using sRGB conversion on write. BIND_AS_PROPERTY*//*() const*/
    type["GetSRGB"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetSRGB) ;
    /*Return whether rendering output is dithered. BIND_AS_PROPERTY*//*() const*/
    type["GetDither"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetDither) ;
    /*Return whether the GPU command buffer is flushed each frame. BIND_AS_PROPERTY*//*() const*/
    type["GetFlushGPU"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetFlushGPU) ;
    /*Return whether OpenGL 2 use is forced. Effective only on OpenGL.*//*() const*/
    type["GetForceGL2"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetForceGL2) ;
    /*Return allowed screen orientations. BIND_AS_PROPERTY*//*() const*/
    type["GetOrientations"] = static_cast<const String& (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetOrientations) ;
    /*Return whether graphics context is lost and can not render or load GPU resources. BIND_AS_PROPERTY*//*() const*/
    type["IsDeviceLost"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::IsDeviceLost) ;
    /*Return number of primitives drawn this frame. BIND_AS_PROPERTY*//*() const*/
    type["GetNumPrimitives"] = static_cast<unsigned (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetNumPrimitives) ;
    /*Return number of batches drawn this frame. BIND_AS_PROPERTY*//*() const*/
    type["GetNumBatches"] = static_cast<unsigned (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetNumBatches) ;
    /*Return dummy color texture format for shadow maps. Is "NULL" (consume no video memory) if supported.*//*() const*/
    type["GetDummyColorFormat"] = static_cast<unsigned (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetDummyColorFormat) ;
    /*Return shadow map depth texture format, or 0 if not supported.*//*() const*/
    type["GetShadowMapFormat"] = static_cast<unsigned (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetShadowMapFormat) ;
    /*Return 24-bit shadow map depth texture format, or 0 if not supported.*//*() const*/
    type["GetHiresShadowMapFormat"] = static_cast<unsigned (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetHiresShadowMapFormat) ;
    /*Return whether hardware instancing is supported. BIND_AS_PROPERTY*//*() const*/
    type["GetInstancingSupport"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetInstancingSupport) ;
    /*Return whether light pre-pass rendering is supported. BIND_AS_PROPERTY*//*() const*/
    type["GetLightPrepassSupport"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetLightPrepassSupport) ;
    /*Return whether deferred rendering is supported. BIND_AS_PROPERTY*//*() const*/
    type["GetDeferredSupport"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetDeferredSupport) ;
    /*Return whether anisotropic texture filtering is supported.*//*() const*/
    type["GetAnisotropySupport"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetAnisotropySupport) ;
    /*Return whether shadow map depth compare is done in hardware. BIND_AS_PROPERTY*//*() const*/
    type["GetHardwareShadowSupport"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetHardwareShadowSupport) ;
    /*Return whether a readable hardware depth format is available. BIND_AS_PROPERTY*//*() const*/
    type["GetReadableDepthSupport"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetReadableDepthSupport) ;
    /*Return whether sRGB conversion on texture sampling is supported. BIND_AS_PROPERTY*//*() const*/
    type["GetSRGBSupport"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetSRGBSupport) ;
    /*Return whether sRGB conversion on rendertarget writing is supported. BIND_AS_PROPERTY*//*() const*/
    type["GetSRGBWriteSupport"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetSRGBWriteSupport) ;
    /*Return supported fullscreen resolutions (third component is refreshRate). Will be empty if listing the resolutions is not supported on the platform (e.g. Web). BIND_AS_PROPERTY*//*(int monitor) const*/
    type["GetResolutions"] = static_cast<PODVector<IntVector3> (Urho3D::Graphics::*)(int) const>(&Urho3D::Graphics::GetResolutions) ;
    /*Return index of the best resolution for requested width, height and refresh rate.*//*(int monitor, int width, int height, int refreshRate) const*/
    type["FindBestResolutionIndex"] = static_cast<unsigned (Urho3D::Graphics::*)(int, int, int, int) const>(&Urho3D::Graphics::FindBestResolutionIndex) ;
    /*Return supported multisampling levels. BIND_AS_PROPERTY*//*() const*/
    type["GetMultiSampleLevels"] = static_cast<PODVector<int> (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetMultiSampleLevels) ;
    /*Return the desktop resolution. BIND_AS_PROPERTY*//*(int monitor) const*/
    type["GetDesktopResolution"] = static_cast<IntVector2 (Urho3D::Graphics::*)(int) const>(&Urho3D::Graphics::GetDesktopResolution) ;
    /*Return the number of currently connected monitors. BIND_AS_PROPERTY*//*() const*/
    type["GetMonitorCount"] = static_cast<int (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetMonitorCount) ;
    /*Returns the index of the display containing the center of the window on success or a negative error code on failure. BIND_AS_PROPERTY*//*() const*/
    type["GetCurrentMonitor"] = static_cast<int (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetCurrentMonitor) ;
    /*Returns true if window is maximized or runs in full screen mode. BIND_AS_PROPERTY*//*() const*/
    type["GetMaximized"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetMaximized) ;
    /*Return hardware format for a compressed image format, or 0 if unsupported.*//*(CompressedFormat format) const*/
    type["GetFormat"] = static_cast<unsigned (Urho3D::Graphics::*)(CompressedFormat) const>(&Urho3D::Graphics::GetFormat) ;
    /*Return current vertex buffer by index.*//*(unsigned index) const*/
    type["GetVertexBuffer"] = [](Urho3D::Graphics& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetVertexBuffer(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return current index buffer.*//*() const*/
    type["GetIndexBuffer"] = [](Urho3D::Graphics& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetIndexBuffer());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return current vertex shader.*//*() const*/
    type["GetVertexShader"] = [](Urho3D::Graphics& self){ return SharedPtr(self.GetVertexShader()); };
    /*Return current pixel shader.*//*() const*/
    type["GetPixelShader"] = [](Urho3D::Graphics& self){ return SharedPtr(self.GetPixelShader()); };
#if 0 // INVALID: NoBind!
    /*Return shader program. This is an API-specific class and should not be used by applications. NO_BIND*//*() const*/
    type["GetShaderProgram"] = static_cast<ShaderProgram* (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetShaderProgram) ;
#endif
        
    /*Return texture unit index by name.*//*(const String &name)*/
    type["GetTextureUnit"] = static_cast<TextureUnit (Urho3D::Graphics::*)(const  String &)>(&Urho3D::Graphics::GetTextureUnit) ;
    /*Return texture unit name by index.*//*(TextureUnit unit)*/
    type["GetTextureUnitName"] = static_cast<const String& (Urho3D::Graphics::*)(TextureUnit)>(&Urho3D::Graphics::GetTextureUnitName) ;
    /*Return current texture by texture unit index.*//*(unsigned index) const*/
    type["GetTexture"] = [](Urho3D::Graphics& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTexture(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return default texture filtering mode.*//*() const*/
    type["GetDefaultTextureFilterMode"] = static_cast<TextureFilterMode (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetDefaultTextureFilterMode) ;
    /*Return default texture max. anisotropy level.*//*() const*/
    type["GetDefaultTextureAnisotropy"] = static_cast<unsigned (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetDefaultTextureAnisotropy) ;
    /*Return current rendertarget by index.*//*(unsigned index) const*/
    type["GetRenderTarget"] = [](Urho3D::Graphics& self, unsigned index){ return SharedPtr(self.GetRenderTarget(index)); };
    /*Return current depth-stencil surface.*//*() const*/
    type["GetDepthStencil"] = [](Urho3D::Graphics& self){ return SharedPtr(self.GetDepthStencil()); };
    /*Return the viewport coordinates.*//*() const*/
    type["GetViewport"] = static_cast<IntRect (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetViewport) ;
    /*Return blending mode.*//*() const*/
    type["GetBlendMode"] = static_cast<BlendMode (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetBlendMode) ;
    /*Return whether alpha-to-coverage is enabled.*//*() const*/
    type["GetAlphaToCoverage"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetAlphaToCoverage) ;
    /*Return whether color write is enabled.*//*() const*/
    type["GetColorWrite"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetColorWrite) ;
    /*Return hardware culling mode.*//*() const*/
    type["GetCullMode"] = static_cast<CullMode (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetCullMode) ;
    /*Return depth constant bias.*//*() const*/
    type["GetDepthConstantBias"] = static_cast<float (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetDepthConstantBias) ;
    /*Return depth slope scaled bias.*//*() const*/
    type["GetDepthSlopeScaledBias"] = static_cast<float (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetDepthSlopeScaledBias) ;
    /*Return depth compare mode.*//*() const*/
    type["GetDepthTest"] = static_cast<CompareMode (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetDepthTest) ;
    /*Return whether depth write is enabled.*//*() const*/
    type["GetDepthWrite"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetDepthWrite) ;
    /*Return polygon fill mode.*//*() const*/
    type["GetFillMode"] = static_cast<FillMode (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetFillMode) ;
    /*Return whether line antialiasing is enabled.*//*() const*/
    type["GetLineAntiAlias"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetLineAntiAlias) ;
    /*Return whether stencil test is enabled.*//*() const*/
    type["GetStencilTest"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetStencilTest) ;
    /*Return whether scissor test is enabled.*//*() const*/
    type["GetScissorTest"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetScissorTest) ;
    /*Return scissor rectangle coordinates.*//*() const*/
    type["GetScissorRect"] = static_cast<const IntRect& (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetScissorRect) ;
    /*Return stencil compare mode.*//*() const*/
    type["GetStencilTestMode"] = static_cast<CompareMode (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetStencilTestMode) ;
    /*Return stencil operation to do if stencil test passes.*//*() const*/
    type["GetStencilPass"] = static_cast<StencilOp (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetStencilPass) ;
    /*Return stencil operation to do if stencil test fails.*//*() const*/
    type["GetStencilFail"] = static_cast<StencilOp (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetStencilFail) ;
    /*Return stencil operation to do if depth compare fails.*//*() const*/
    type["GetStencilZFail"] = static_cast<StencilOp (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetStencilZFail) ;
    /*Return stencil reference value.*//*() const*/
    type["GetStencilRef"] = static_cast<unsigned (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetStencilRef) ;
    /*Return stencil compare bitmask.*//*() const*/
    type["GetStencilCompareMask"] = static_cast<unsigned (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetStencilCompareMask) ;
    /*Return stencil write bitmask.*//*() const*/
    type["GetStencilWriteMask"] = static_cast<unsigned (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetStencilWriteMask) ;
    /*Return whether a custom clipping plane is in use.*//*() const*/
    type["GetUseClipPlane"] = static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetUseClipPlane) ;
    /*Return shader cache directory, Direct3D only. BIND_AS_PROPERTY*//*() const*/
    type["GetShaderCacheDir"] = static_cast<const String& (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetShaderCacheDir) ;
    /*Return current rendertarget width and height.*//*() const*/
    type["GetRenderTargetDimensions"] = static_cast<IntVector2 (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetRenderTargetDimensions) ;
    /*Window was resized through user interaction. Called by  Input subsystem.*//*()*/
    type["OnWindowResized"] = static_cast<void (Urho3D::Graphics::*)()>(&Urho3D::Graphics::OnWindowResized) ;
    /*Window was moved through user interaction. Called by  Input subsystem.*//*()*/
    type["OnWindowMoved"] = static_cast<void (Urho3D::Graphics::*)()>(&Urho3D::Graphics::OnWindowMoved) ;
#if 0 // INVALID: NoBind!
    /*Restore GPU objects and reinitialize state. Requires an open window. Used only on OpenGL. NO_BIND*//*()*/
    type["Restore"] = static_cast<void (Urho3D::Graphics::*)()>(&Urho3D::Graphics::Restore) ;
#endif
        
    /*Maximize the window.*//*()*/
    type["Maximize"] = static_cast<void (Urho3D::Graphics::*)()>(&Urho3D::Graphics::Maximize) ;
    /*Minimize the window.*//*()*/
    type["Minimize"] = static_cast<void (Urho3D::Graphics::*)()>(&Urho3D::Graphics::Minimize) ;
    /*Raises window if it was minimized.*//*() const*/
    type["Raise"] = static_cast<void (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::Raise) ;
    /*Add a GPU object to keep track of. Called by  GPUObject.*//*(GPUObject *object)*/
    type["AddGPUObject"] = static_cast<void (Urho3D::Graphics::*)(GPUObject *)>(&Urho3D::Graphics::AddGPUObject) ;
    /*Remove a GPU object. Called by  GPUObject.*//*(GPUObject *object)*/
    type["RemoveGPUObject"] = static_cast<void (Urho3D::Graphics::*)(GPUObject *)>(&Urho3D::Graphics::RemoveGPUObject) ;
    /*Reserve a CPU-side scratch buffer.*//*(unsigned size)*/
    type["ReserveScratchBuffer"] = static_cast<void* (Urho3D::Graphics::*)(unsigned)>(&Urho3D::Graphics::ReserveScratchBuffer) ;
    /*Free a CPU-side scratch buffer.*//*(void *buffer)*/
    type["FreeScratchBuffer"] = static_cast<void (Urho3D::Graphics::*)(void *)>(&Urho3D::Graphics::FreeScratchBuffer) ;
    /*Clean up too large scratch buffers.*//*()*/
    type["CleanupScratchBuffers"] = static_cast<void (Urho3D::Graphics::*)()>(&Urho3D::Graphics::CleanupScratchBuffers) ;
    /*Clean up shader parameters when a shader variation is released or destroyed.*//*(ShaderVariation *variation)*/
    type["CleanupShaderPrograms"] = static_cast<void (Urho3D::Graphics::*)(ShaderVariation *)>(&Urho3D::Graphics::CleanupShaderPrograms) ;
#if 0 // INVALID: NoBind!
    /*Clean up a render surface from all FBOs. Used only on OpenGL. NO_BIND*//*(RenderSurface *surface)*/
    type["CleanupRenderSurface"] = static_cast<void (Urho3D::Graphics::*)(RenderSurface *)>(&Urho3D::Graphics::CleanupRenderSurface) ;
#endif
        
#if 0 // INVALID: NoBind!
    /*Get or create a constant buffer. Will be shared between shaders if possible. NO_BIND*//*(ShaderType type, unsigned index, unsigned size)*/
    type["GetOrCreateConstantBuffer"] = [](Urho3D::Graphics& self, ShaderType type, unsigned index, unsigned size, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOrCreateConstantBuffer(type, index, size));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
#endif
        
#if 0 // INVALID: NoBind!
    /*Mark the FBO needing an update. Used only on OpenGL. NO_BIND*//*()*/
    type["MarkFBODirty"] = static_cast<void (Urho3D::Graphics::*)()>(&Urho3D::Graphics::MarkFBODirty) ;
#endif
        
#if 0 // INVALID: NoBind!
    /*Bind a VBO, avoiding redundant operation. Used only on OpenGL. NO_BIND*//*(unsigned object)*/
    type["SetVBO"] = static_cast<void (Urho3D::Graphics::*)(unsigned)>(&Urho3D::Graphics::SetVBO) ;
#endif
        
#if 0 // INVALID: NoBind!
    /*Bind a UBO, avoiding redundant operation. Used only on OpenGL. NO_BIND*//*(unsigned object)*/
    type["SetUBO"] = static_cast<void (Urho3D::Graphics::*)(unsigned)>(&Urho3D::Graphics::SetUBO) ;
#endif
        
    type["SetWindowPosition"] = sol::overload(
        static_cast<void (Urho3D::Graphics::*)(const  IntVector2 &)>(&Urho3D::Graphics::SetWindowPosition) ,
        static_cast<void (Urho3D::Graphics::*)(int, int)>(&Urho3D::Graphics::SetWindowPosition)  );
    type["SetScreenMode"] = sol::overload(
        static_cast<bool (Urho3D::Graphics::*)(int, int, const  ScreenModeParams &, bool)>(&Urho3D::Graphics::SetScreenMode) ,
        [](Urho3D::Graphics& self, int width, int height, const  ScreenModeParams & params){ return self.SetScreenMode(width, height, params); },
        static_cast<bool (Urho3D::Graphics::*)(int, int)>(&Urho3D::Graphics::SetScreenMode)  );
    type["SetWindowModes"] = sol::overload(
        static_cast<bool (Urho3D::Graphics::*)(const  WindowModeParams &, const  WindowModeParams &, bool)>(&Urho3D::Graphics::SetWindowModes) ,
        [](Urho3D::Graphics& self, const  WindowModeParams & windowMode, const  WindowModeParams & secondaryWindowMode){ return self.SetWindowModes(windowMode, secondaryWindowMode); } );
    type["SetMode"] = sol::overload(
        static_cast<bool (Urho3D::Graphics::*)(int, int, bool, bool, bool, bool, bool, bool, int, int, int)>(&Urho3D::Graphics::SetMode) ,
        static_cast<bool (Urho3D::Graphics::*)(int, int)>(&Urho3D::Graphics::SetMode)  );
    type["Clear"] = sol::overload(
        static_cast<void (Urho3D::Graphics::*)(ClearTargetFlags, const  Color &, float, unsigned)>(&Urho3D::Graphics::Clear) ,
        [](Urho3D::Graphics& self, ClearTargetFlags flags, const  Color & color, float depth){ self.Clear(flags, color, depth); },
        [](Urho3D::Graphics& self, ClearTargetFlags flags, const  Color & color){ self.Clear(flags, color); },
        [](Urho3D::Graphics& self, ClearTargetFlags flags){ self.Clear(flags); } );
    type["ResolveToTexture"] = sol::overload(
        static_cast<bool (Urho3D::Graphics::*)(Texture2D *, const  IntRect &)>(&Urho3D::Graphics::ResolveToTexture) ,
        static_cast<bool (Urho3D::Graphics::*)(Texture2D *)>(&Urho3D::Graphics::ResolveToTexture) ,
        static_cast<bool (Urho3D::Graphics::*)(TextureCube *)>(&Urho3D::Graphics::ResolveToTexture)  );
    type["Draw"] = sol::overload(
        static_cast<void (Urho3D::Graphics::*)(PrimitiveType, unsigned, unsigned)>(&Urho3D::Graphics::Draw) ,
        static_cast<void (Urho3D::Graphics::*)(PrimitiveType, unsigned, unsigned, unsigned, unsigned)>(&Urho3D::Graphics::Draw) ,
        static_cast<void (Urho3D::Graphics::*)(PrimitiveType, unsigned, unsigned, unsigned, unsigned, unsigned)>(&Urho3D::Graphics::Draw)  );
    type["DrawInstanced"] = sol::overload(
        static_cast<void (Urho3D::Graphics::*)(PrimitiveType, unsigned, unsigned, unsigned, unsigned, unsigned)>(&Urho3D::Graphics::DrawInstanced) ,
        static_cast<void (Urho3D::Graphics::*)(PrimitiveType, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned)>(&Urho3D::Graphics::DrawInstanced)  );
    type["SetVertexBuffers"] = sol::overload(
        static_cast<bool (Urho3D::Graphics::*)(const  PODVector<  VertexBuffer * > &, unsigned)>(&Urho3D::Graphics::SetVertexBuffers) ,
        [](Urho3D::Graphics& self, const  PODVector<  VertexBuffer * > & buffers){ return self.SetVertexBuffers(buffers); },
        static_cast<bool (Urho3D::Graphics::*)(const  Vector<  SharedPtr<  VertexBuffer > > &, unsigned)>(&Urho3D::Graphics::SetVertexBuffers) ,
        [](Urho3D::Graphics& self, const  Vector<  SharedPtr<  VertexBuffer > > & buffers){ return self.SetVertexBuffers(buffers); } );
    type["SetShaderParameter"] = sol::overload(
        static_cast<void (Urho3D::Graphics::*)(StringHash, const float *, unsigned)>(&Urho3D::Graphics::SetShaderParameter) ,
        static_cast<void (Urho3D::Graphics::*)(StringHash, float)>(&Urho3D::Graphics::SetShaderParameter) ,
        static_cast<void (Urho3D::Graphics::*)(StringHash, int)>(&Urho3D::Graphics::SetShaderParameter) ,
        static_cast<void (Urho3D::Graphics::*)(StringHash, bool)>(&Urho3D::Graphics::SetShaderParameter) ,
        static_cast<void (Urho3D::Graphics::*)(StringHash, const  Color &)>(&Urho3D::Graphics::SetShaderParameter) ,
        static_cast<void (Urho3D::Graphics::*)(StringHash, const  Vector2 &)>(&Urho3D::Graphics::SetShaderParameter) ,
        static_cast<void (Urho3D::Graphics::*)(StringHash, const  Matrix3 &)>(&Urho3D::Graphics::SetShaderParameter) ,
        static_cast<void (Urho3D::Graphics::*)(StringHash, const  Vector3 &)>(&Urho3D::Graphics::SetShaderParameter) ,
        static_cast<void (Urho3D::Graphics::*)(StringHash, const  Matrix4 &)>(&Urho3D::Graphics::SetShaderParameter) ,
        static_cast<void (Urho3D::Graphics::*)(StringHash, const  Vector4 &)>(&Urho3D::Graphics::SetShaderParameter) ,
        static_cast<void (Urho3D::Graphics::*)(StringHash, const  Matrix3x4 &)>(&Urho3D::Graphics::SetShaderParameter) ,
        static_cast<void (Urho3D::Graphics::*)(StringHash, const  Variant &)>(&Urho3D::Graphics::SetShaderParameter)  );
    type["SetRenderTarget"] = sol::overload(
        static_cast<void (Urho3D::Graphics::*)(unsigned, RenderSurface *)>(&Urho3D::Graphics::SetRenderTarget) ,
        static_cast<void (Urho3D::Graphics::*)(unsigned, Texture2D *)>(&Urho3D::Graphics::SetRenderTarget)  );
    type["SetDepthStencil"] = sol::overload(
        static_cast<void (Urho3D::Graphics::*)(RenderSurface *)>(&Urho3D::Graphics::SetDepthStencil) ,
        static_cast<void (Urho3D::Graphics::*)(Texture2D *)>(&Urho3D::Graphics::SetDepthStencil)  );
    type["SetBlendMode"] = sol::overload(
        static_cast<void (Urho3D::Graphics::*)(BlendMode, bool)>(&Urho3D::Graphics::SetBlendMode) ,
        [](Urho3D::Graphics& self, BlendMode mode){ self.SetBlendMode(mode); } );
    type["SetScissorTest"] = sol::overload(
        static_cast<void (Urho3D::Graphics::*)(bool, const  Rect &, bool)>(&Urho3D::Graphics::SetScissorTest) ,
        [](Urho3D::Graphics& self, bool enable, const  Rect & rect){ self.SetScissorTest(enable, rect); },
        [](Urho3D::Graphics& self, bool enable){ self.SetScissorTest(enable); },
        static_cast<void (Urho3D::Graphics::*)(bool, const  IntRect &)>(&Urho3D::Graphics::SetScissorTest)  );
    type["SetStencilTest"] = sol::overload(
        static_cast<void (Urho3D::Graphics::*)(bool, CompareMode, StencilOp, StencilOp, StencilOp, unsigned, unsigned, unsigned)>(&Urho3D::Graphics::SetStencilTest) ,
        [](Urho3D::Graphics& self, bool enable, CompareMode mode, StencilOp pass, StencilOp fail, StencilOp zFail, unsigned stencilRef, unsigned compareMask){ self.SetStencilTest(enable, mode, pass, fail, zFail, stencilRef, compareMask); },
        [](Urho3D::Graphics& self, bool enable, CompareMode mode, StencilOp pass, StencilOp fail, StencilOp zFail, unsigned stencilRef){ self.SetStencilTest(enable, mode, pass, fail, zFail, stencilRef); },
        [](Urho3D::Graphics& self, bool enable, CompareMode mode, StencilOp pass, StencilOp fail, StencilOp zFail){ self.SetStencilTest(enable, mode, pass, fail, zFail); },
        [](Urho3D::Graphics& self, bool enable, CompareMode mode, StencilOp pass, StencilOp fail){ self.SetStencilTest(enable, mode, pass, fail); },
        [](Urho3D::Graphics& self, bool enable, CompareMode mode, StencilOp pass){ self.SetStencilTest(enable, mode, pass); },
        [](Urho3D::Graphics& self, bool enable, CompareMode mode){ self.SetStencilTest(enable, mode); },
        [](Urho3D::Graphics& self, bool enable){ self.SetStencilTest(enable); } );
    type["SetClipPlane"] = sol::overload(
        static_cast<void (Urho3D::Graphics::*)(bool, const  Plane &, const  Matrix3x4 &, const  Matrix4 &)>(&Urho3D::Graphics::SetClipPlane) ,
        [](Urho3D::Graphics& self, bool enable, const  Plane & clipPlane, const  Matrix3x4 & view){ self.SetClipPlane(enable, clipPlane, view); },
        [](Urho3D::Graphics& self, bool enable, const  Plane & clipPlane){ self.SetClipPlane(enable, clipPlane); },
        [](Urho3D::Graphics& self, bool enable){ self.SetClipPlane(enable); } );
    type["GetDisplayDPI"] = sol::overload(
        static_cast<Vector3 (Urho3D::Graphics::*)(int) const>(&Urho3D::Graphics::GetDisplayDPI) ,
        [](Urho3D::Graphics& self){ return self.GetDisplayDPI(); } );
    type["GetShader"] = sol::overload(
        [](Urho3D::Graphics& self, ShaderType type, const String &name, const String &defines=String::EMPTY){ return SharedPtr(self.GetShader(type, name, defines)); },
        [](Urho3D::Graphics& self, ShaderType type, const  String & name){ return SharedPtr(self.GetShader(type, name)); },
        [](Urho3D::Graphics& self, ShaderType type, const char *name, const char *defines){ return SharedPtr(self.GetShader(type, name, defines)); } );
    type["apiName"] = sol::property(static_cast<const String& (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetApiName) );
    type["borderless"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetBorderless) );
    type["currentMonitor"] = sol::property(static_cast<int (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetCurrentMonitor) );
    type["deferredSupport"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetDeferredSupport) );
    type["desktopResolution"] = sol::property(static_cast<IntVector2 (Urho3D::Graphics::*)(int) const>(&Urho3D::Graphics::GetDesktopResolution) );
    type["deviceLost"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::IsDeviceLost) );
    type["displayDPI"] = sol::property([](Urho3D::Graphics& self){ return self.GetDisplayDPI(); });
    type["dither"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetDither) 
        , static_cast<void (Urho3D::Graphics::*)(bool)>(&Urho3D::Graphics::SetDither) );
    type["flushGPU"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetFlushGPU) 
        , static_cast<void (Urho3D::Graphics::*)(bool)>(&Urho3D::Graphics::SetFlushGPU) );
    type["fullscreen"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetFullscreen) );
    type["hardwareShadowSupport"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetHardwareShadowSupport) );
    type["height"] = sol::property(static_cast<int (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetHeight) );
    type["initialized"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::IsInitialized) );
    type["instancingSupport"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetInstancingSupport) );
    type["lightPrepassSupport"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetLightPrepassSupport) );
    type["maximized"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetMaximized) );
    type["monitorCount"] = sol::property(static_cast<int (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetMonitorCount) );
    type["multiSample"] = sol::property(static_cast<int (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetMultiSample) );
    type["multiSampleLevels"] = sol::property(static_cast<PODVector<int> (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetMultiSampleLevels) );
    type["numBatches"] = sol::property(static_cast<unsigned (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetNumBatches) );
    type["numPrimitives"] = sol::property(static_cast<unsigned (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetNumPrimitives) );
    type["orientations"] = sol::property(static_cast<const String& (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetOrientations) 
        , static_cast<void (Urho3D::Graphics::*)(const  String &)>(&Urho3D::Graphics::SetOrientations) );
    type["readableDepthSupport"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetReadableDepthSupport) );
    type["resizable"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetResizable) );
    type["resolutions"] = sol::property(static_cast<PODVector<IntVector3> (Urho3D::Graphics::*)(int) const>(&Urho3D::Graphics::GetResolutions) );
    type["shaderCacheDir"] = sol::property(static_cast<const String& (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetShaderCacheDir) 
        , static_cast<void (Urho3D::Graphics::*)(const  String &)>(&Urho3D::Graphics::SetShaderCacheDir) );
    type["size"] = sol::property(static_cast<IntVector2 (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetSize) );
    type["srgb"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetSRGB) 
        , static_cast<void (Urho3D::Graphics::*)(bool)>(&Urho3D::Graphics::SetSRGB) );
    type["srgbSupport"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetSRGBSupport) );
    type["srgbWriteSupport"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetSRGBWriteSupport) );
    type["tripleBuffer"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetTripleBuffer) );
    type["vSync"] = sol::property(static_cast<bool (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetVSync) );
    type["width"] = sol::property(static_cast<int (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetWidth) );
    type["windowIcon"] = sol::property(static_cast<void (Urho3D::Graphics::*)(Image *)>(&Urho3D::Graphics::SetWindowIcon) );
    type["windowPosition"] = sol::property(static_cast<IntVector2 (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetWindowPosition) 
        , static_cast<void (Urho3D::Graphics::*)(const  IntVector2 &)>(&Urho3D::Graphics::SetWindowPosition) );
    type["windowTitle"] = sol::property(static_cast<const String& (Urho3D::Graphics::*)() const>(&Urho3D::Graphics::GetWindowTitle) 
        , static_cast<void (Urho3D::Graphics::*)(const  String &)>(&Urho3D::Graphics::SetWindowTitle) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Graphics.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Graphics.h>
#include <Urho3D/Graphics/Graphics.h>
#include <SDL/SDL_video.h>
#include <Urho3D/Graphics/GraphicsImpl.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ScreenModeParams(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ScreenModeParams>( "ScreenModeParams"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    /*Compare contents except vsync flag.*//*(const ScreenModeParams &rhs) const*/
    type["EqualsExceptVSync"] = static_cast<bool (Urho3D::ScreenModeParams::*)(const  ScreenModeParams &) const>(&Urho3D::ScreenModeParams::EqualsExceptVSync) ;
    /*Compare for equality with another parameter set.*//*(const ScreenModeParams &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::ScreenModeParams::*)(const  ScreenModeParams &) const>(&Urho3D::ScreenModeParams::operator==) ;
    /*Compare for inequality with another parameter set.*//*(const ScreenModeParams &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::ScreenModeParams::*)(const  ScreenModeParams &) const>(&Urho3D::ScreenModeParams::operator!=) ;
    type["fullscreen_"] = &Urho3D::ScreenModeParams::fullscreen_;
    type["borderless_"] = &Urho3D::ScreenModeParams::borderless_;
    type["resizable_"] = &Urho3D::ScreenModeParams::resizable_;
    type["highDPI_"] = &Urho3D::ScreenModeParams::highDPI_;
    type["vsync_"] = &Urho3D::ScreenModeParams::vsync_;
    type["tripleBuffer_"] = &Urho3D::ScreenModeParams::tripleBuffer_;
    type["multiSample_"] = &Urho3D::ScreenModeParams::multiSample_;
    type["monitor_"] = &Urho3D::ScreenModeParams::monitor_;
    type["refreshRate_"] = &Urho3D::ScreenModeParams::refreshRate_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Graphics.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Graphics.h>
#include <Urho3D/Graphics/Graphics.h>
#include <SDL/SDL_video.h>
#include <Urho3D/Graphics/GraphicsImpl.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_WindowModeParams(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::WindowModeParams>( "WindowModeParams"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["width_"] = &Urho3D::WindowModeParams::width_;
    type["height_"] = &Urho3D::WindowModeParams::height_;
    type["screenParams_"] = &Urho3D::WindowModeParams::screenParams_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Graphics.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Graphics.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <SDL/SDL_video.h>
#include <Urho3D/Graphics/GraphicsImpl.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ScratchBuffer(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ScratchBuffer>( "ScratchBuffer"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::ScratchBuffer()>();

// Members

    type["data_"] = &Urho3D::ScratchBuffer::data_;
    type["size_"] = &Urho3D::ScratchBuffer::size_;
    type["reserved_"] = &Urho3D::ScratchBuffer::reserved_;

}

