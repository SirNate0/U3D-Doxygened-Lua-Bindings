
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/RenderSurface.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/RenderSurface.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Graphics/RenderSurface.h>
#include <Urho3D/Graphics/Texture.h>
#include <Urho3D/Graphics/Viewport.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_RenderSurface(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::RenderSurface>( "RenderSurface"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Texture *parentTexture) { 
            return Urho3D::MakeShared<Urho3D::RenderSurface>(parentTexture);
        });

// Members

    /*Set number of viewports. BIND_AS_PROPERTY*//*(unsigned num)*/
    type["SetNumViewports"] = static_cast<void (Urho3D::RenderSurface::*)(unsigned)>(&Urho3D::RenderSurface::SetNumViewports) ;
    /*Set viewport. BIND_AS_ALIAS_set_viewports*//*(unsigned index, Viewport *viewport)*/
    type["SetViewport"] = static_cast<void (Urho3D::RenderSurface::*)(unsigned, Viewport *)>(&Urho3D::RenderSurface::SetViewport) ;
    /*Set viewport update mode. Default is to update when visible. BIND_AS_PROPERTY*//*(RenderSurfaceUpdateMode mode)*/
    type["SetUpdateMode"] = static_cast<void (Urho3D::RenderSurface::*)(RenderSurfaceUpdateMode)>(&Urho3D::RenderSurface::SetUpdateMode) ;
    /*Set linked color rendertarget. BIND_AS_PROPERTY*//*(RenderSurface *renderTarget)*/
    type["SetLinkedRenderTarget"] = static_cast<void (Urho3D::RenderSurface::*)(RenderSurface *)>(&Urho3D::RenderSurface::SetLinkedRenderTarget) ;
    /*Set linked depth-stencil surface. BIND_AS_PROPERTY*//*(RenderSurface *depthStencil)*/
    type["SetLinkedDepthStencil"] = static_cast<void (Urho3D::RenderSurface::*)(RenderSurface *)>(&Urho3D::RenderSurface::SetLinkedDepthStencil) ;
    /*Queue manual update of the viewport(s).*//*()*/
    type["QueueUpdate"] = static_cast<void (Urho3D::RenderSurface::*)()>(&Urho3D::RenderSurface::QueueUpdate) ;
    /*Release surface.*//*()*/
    type["Release"] = static_cast<void (Urho3D::RenderSurface::*)()>(&Urho3D::RenderSurface::Release) ;
    /*Mark the GPU resource destroyed on graphics context destruction. Only used on OpenGL.*//*()*/
    type["OnDeviceLost"] = static_cast<void (Urho3D::RenderSurface::*)()>(&Urho3D::RenderSurface::OnDeviceLost) ;
    /*Create renderbuffer that cannot be sampled as a texture. Only used on OpenGL.*//*(unsigned width, unsigned height, unsigned format, int multiSample)*/
    type["CreateRenderBuffer"] = static_cast<bool (Urho3D::RenderSurface::*)(unsigned, unsigned, unsigned, int)>(&Urho3D::RenderSurface::CreateRenderBuffer) ;
    /*Return width. BIND_AS_PROPERTY*//*() const*/
    type["GetWidth"] = static_cast<int (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetWidth) ;
    /*Return height. BIND_AS_PROPERTY*//*() const*/
    type["GetHeight"] = static_cast<int (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetHeight) ;
    /*Return usage. BIND_AS_PROPERTY*//*() const*/
    type["GetUsage"] = static_cast<TextureUsage (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetUsage) ;
    /*Return multisampling level.*//*() const*/
    type["GetMultiSample"] = static_cast<int (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetMultiSample) ;
    /*Return multisampling autoresolve mode.*//*() const*/
    type["GetAutoResolve"] = static_cast<bool (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetAutoResolve) ;
    /*Return number of viewports. BIND_AS_PROPERTY*//*() const*/
    type["GetNumViewports"] = static_cast<unsigned (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetNumViewports) ;
    /*Return viewport by index. BIND_AS_ALIAS_get_viewports*//*(unsigned index) const*/
    type["GetViewport"] = [](Urho3D::RenderSurface& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetViewport(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return viewport update mode. BIND_AS_PROPERTY*//*() const*/
    type["GetUpdateMode"] = static_cast<RenderSurfaceUpdateMode (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetUpdateMode) ;
    /*Return linked color rendertarget. BIND_AS_PROPERTY*//*() const*/
    type["GetLinkedRenderTarget"] = [](Urho3D::RenderSurface& self){ return SharedPtr(self.GetLinkedRenderTarget()); };
    /*Return linked depth-stencil surface. BIND_AS_PROPERTY*//*() const*/
    type["GetLinkedDepthStencil"] = [](Urho3D::RenderSurface& self){ return SharedPtr(self.GetLinkedDepthStencil()); };
    /*Return whether manual update queued. Called internally.*//*() const*/
    type["IsUpdateQueued"] = static_cast<bool (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::IsUpdateQueued) ;
    /*Reset update queued flag. Called internally.*//*()*/
    type["ResetUpdateQueued"] = static_cast<void (Urho3D::RenderSurface::*)()>(&Urho3D::RenderSurface::ResetUpdateQueued) ;
    /*Return parent texture. BIND_AS_PROPERTY*//*() const*/
    type["GetParentTexture"] = [](Urho3D::RenderSurface& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetParentTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return Direct3D9 surface.*//*() const*/
    type["GetSurface"] = static_cast<void* (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetSurface) ;
    /*Return Direct3D11 rendertarget or depth-stencil view. Not valid on OpenGL.*//*() const*/
    type["GetRenderTargetView"] = static_cast<void* (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetRenderTargetView) ;
    /*Return Direct3D11 read-only depth-stencil view. May be null if not applicable. Not valid on OpenGL.*//*() const*/
    type["GetReadOnlyView"] = static_cast<void* (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetReadOnlyView) ;
    /*Return surface's OpenGL target.*//*() const*/
    type["GetTarget"] = static_cast<unsigned (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetTarget) ;
    /*Return OpenGL renderbuffer if created.*//*() const*/
    type["GetRenderBuffer"] = static_cast<unsigned (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetRenderBuffer) ;
    /*Return whether multisampled rendertarget needs resolve. BIND_AS_PROPERTY*//*() const*/
    type["IsResolveDirty"] = static_cast<bool (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::IsResolveDirty) ;
    /*Set or clear the need resolve flag. Called internally by  Graphics.*//*(bool enable)*/
    type["SetResolveDirty"] = static_cast<void (Urho3D::RenderSurface::*)(bool)>(&Urho3D::RenderSurface::SetResolveDirty) ;
    type["height"] = sol::property(static_cast<int (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetHeight) );
    type["linkedDepthStencil"] = sol::property([](Urho3D::RenderSurface& self){ return SharedPtr(self.GetLinkedDepthStencil()); }
        , static_cast<void (Urho3D::RenderSurface::*)(RenderSurface *)>(&Urho3D::RenderSurface::SetLinkedDepthStencil) );
    type["linkedRenderTarget"] = sol::property([](Urho3D::RenderSurface& self){ return SharedPtr(self.GetLinkedRenderTarget()); }
        , static_cast<void (Urho3D::RenderSurface::*)(RenderSurface *)>(&Urho3D::RenderSurface::SetLinkedRenderTarget) );
    type["numViewports"] = sol::property(static_cast<unsigned (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetNumViewports) 
        , static_cast<void (Urho3D::RenderSurface::*)(unsigned)>(&Urho3D::RenderSurface::SetNumViewports) );
    type["parentTexture"] = sol::property([](Urho3D::RenderSurface& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetParentTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["resolveDirty"] = sol::property(static_cast<bool (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::IsResolveDirty) );
    type["updateMode"] = sol::property(static_cast<RenderSurfaceUpdateMode (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetUpdateMode) 
        , static_cast<void (Urho3D::RenderSurface::*)(RenderSurfaceUpdateMode)>(&Urho3D::RenderSurface::SetUpdateMode) );
    type["usage"] = sol::property(static_cast<TextureUsage (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetUsage) );
    type["viewport"] = sol::property([](Urho3D::RenderSurface& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetViewport(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::RenderSurface::*)(unsigned, Viewport *)>(&Urho3D::RenderSurface::SetViewport) );
    type["width"] = sol::property(static_cast<int (Urho3D::RenderSurface::*)() const>(&Urho3D::RenderSurface::GetWidth) );
//    type["surface_"] = &Urho3D::RenderSurface::surface_;
//    type["renderTargetView_"] = &Urho3D::RenderSurface::renderTargetView_;
//    type["renderBuffer_"] = &Urho3D::RenderSurface::renderBuffer_;
//    type["readOnlyView_"] = &Urho3D::RenderSurface::readOnlyView_;
//    type["target_"] = &Urho3D::RenderSurface::target_;

}

