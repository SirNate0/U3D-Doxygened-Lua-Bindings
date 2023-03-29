
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/View.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/View.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Batch.h>
#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/Graphics.h>
#include <Urho3D/Graphics/Light.h>
#include <Urho3D/Graphics/OcclusionBuffer.h>
#include <Urho3D/Graphics/Octree.h>
#include <Urho3D/Graphics/RenderPath.h>
#include <Urho3D/Graphics/RenderSurface.h>
#include <Urho3D/Graphics/Renderer.h>
#include <Urho3D/Graphics/Texture.h>
#include <Urho3D/Graphics/View.h>
#include <Urho3D/Graphics/Viewport.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Scene/Scene.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_View(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::View::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::View::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::View>((Urho3D::View*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::View>( "View"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::View>(context);
        });

// Members

    /*Define with rendertarget and viewport. Return true if successful.*//*(RenderSurface *renderTarget, Viewport *viewport)*/
    type["Define"] = static_cast<bool (Urho3D::View::*)(RenderSurface *, Viewport *)>(&Urho3D::View::Define) ;
    /*Update and cull objects and construct rendering batches.*//*(const FrameInfo &frame)*/
    type["Update"] = static_cast<void (Urho3D::View::*)(const  FrameInfo &)>(&Urho3D::View::Update) ;
    /*Render batches.*//*()*/
    type["Render"] = static_cast<void (Urho3D::View::*)()>(&Urho3D::View::Render) ;
    /*Return graphics subsystem.*//*() const*/
    type["GetGraphics"] = [](Urho3D::View& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetGraphics());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return renderer subsystem.*//*() const*/
    type["GetRenderer"] = [](Urho3D::View& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRenderer());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return scene.*//*() const*/
    type["GetScene"] = [](Urho3D::View& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetScene());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return octree.*//*() const*/
    type["GetOctree"] = [](Urho3D::View& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOctree());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return viewport camera.*//*() const*/
    type["GetCamera"] = [](Urho3D::View& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCamera());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return culling camera. Normally same as the viewport camera.*//*() const*/
    type["GetCullCamera"] = [](Urho3D::View& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCullCamera());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return information of the frame being rendered.*//*() const*/
    type["GetFrameInfo"] = static_cast<const FrameInfo& (Urho3D::View::*)() const>(&Urho3D::View::GetFrameInfo) ;
    /*Return the rendertarget. 0 if using the backbuffer.*//*() const*/
    type["GetRenderTarget"] = [](Urho3D::View& self){ return SharedPtr(self.GetRenderTarget()); };
    /*Return whether should draw debug geometry.*//*() const*/
    type["GetDrawDebug"] = static_cast<bool (Urho3D::View::*)() const>(&Urho3D::View::GetDrawDebug) ;
    /*Return view rectangle.*//*() const*/
    type["GetViewRect"] = static_cast<const IntRect& (Urho3D::View::*)() const>(&Urho3D::View::GetViewRect) ;
    /*Return view dimensions.*//*() const*/
    type["GetViewSize"] = static_cast<const IntVector2& (Urho3D::View::*)() const>(&Urho3D::View::GetViewSize) ;
    /*Return geometry objects.*//*() const*/
    type["GetGeometries"] = static_cast<const PODVector<Drawable*>& (Urho3D::View::*)() const>(&Urho3D::View::GetGeometries) ;
    /*Return occluder objects.*//*() const*/
    type["GetOccluders"] = static_cast<const PODVector<Drawable*>& (Urho3D::View::*)() const>(&Urho3D::View::GetOccluders) ;
    /*Return lights.*//*() const*/
    type["GetLights"] = static_cast<const PODVector<Light*>& (Urho3D::View::*)() const>(&Urho3D::View::GetLights) ;
    /*Return light batch queues.*//*() const*/
    type["GetLightQueues"] = static_cast<const Vector<LightBatchQueue>& (Urho3D::View::*)() const>(&Urho3D::View::GetLightQueues) ;
    /*Return the last used software occlusion buffer.*//*() const*/
    type["GetOcclusionBuffer"] = [](Urho3D::View& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOcclusionBuffer());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return number of occluders that were actually rendered. Occluders may be rejected if running out of triangles or if behind other occluders.*//*() const*/
    type["GetNumActiveOccluders"] = static_cast<unsigned (Urho3D::View::*)() const>(&Urho3D::View::GetNumActiveOccluders) ;
    /*Return the source view that was already prepared. Used when viewports specify the same culling camera.*//*() const*/
    type["GetSourceView"] = [](Urho3D::View& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSourceView());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Set global (per-frame) shader parameters. Called by  Batch and internally by  View.*//*()*/
    type["SetGlobalShaderParameters"] = static_cast<void (Urho3D::View::*)()>(&Urho3D::View::SetGlobalShaderParameters) ;
    /*Set camera-specific shader parameters. Called by  Batch and internally by  View.*//*(Camera *camera)*/
    type["SetCameraShaderParameters"] = static_cast<void (Urho3D::View::*)(Camera *)>(&Urho3D::View::SetCameraShaderParameters) ;
    /*Set command's shader parameters if any. Called internally by  View.*//*(const RenderPathCommand &command)*/
    type["SetCommandShaderParameters"] = static_cast<void (Urho3D::View::*)(const  RenderPathCommand &)>(&Urho3D::View::SetCommandShaderParameters) ;
    /*Set G-buffer offset and inverse size shader parameters. Called by  Batch and internally by  View.*//*(const IntVector2 &texSize, const IntRect &viewRect)*/
    type["SetGBufferShaderParameters"] = static_cast<void (Urho3D::View::*)(const  IntVector2 &, const  IntRect &)>(&Urho3D::View::SetGBufferShaderParameters) ;
    type["DrawFullscreenQuad"] = sol::overload(
        static_cast<void (Urho3D::View::*)(bool)>(&Urho3D::View::DrawFullscreenQuad) ,
        [](Urho3D::View& self){ self.DrawFullscreenQuad(); } );
    type["FindNamedTexture"] = sol::overload(
        [](Urho3D::View& self, const String &name, bool isRenderTarget, bool isVolumeMap=false, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.FindNamedTexture(name, isRenderTarget, isVolumeMap));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::View& self, const  String & name, bool isRenderTarget, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.FindNamedTexture(name, isRenderTarget));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/View.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/View.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/Light.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_PerThreadSceneResult(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::PerThreadSceneResult>( "PerThreadSceneResult"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["geometries_"] = &Urho3D::PerThreadSceneResult::geometries_;
    type["lights_"] = &Urho3D::PerThreadSceneResult::lights_;
    type["minZ_"] = &Urho3D::PerThreadSceneResult::minZ_;
    type["maxZ_"] = &Urho3D::PerThreadSceneResult::maxZ_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/View.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/View.h>
#include <Urho3D/Graphics/Batch.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ScenePassInfo(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ScenePassInfo>( "ScenePassInfo"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["passIndex_"] = &Urho3D::ScenePassInfo::passIndex_;
    type["allowInstancing_"] = &Urho3D::ScenePassInfo::allowInstancing_;
    type["markToStencil_"] = &Urho3D::ScenePassInfo::markToStencil_;
    type["vertexLights_"] = &Urho3D::ScenePassInfo::vertexLights_;
    type["batchQueue_"] = &Urho3D::ScenePassInfo::batchQueue_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/View.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/View.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/Light.h>
#include <Urho3D/Math/BoundingBox.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_LightQueryResult(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::LightQueryResult>( "LightQueryResult"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["light_"] = &Urho3D::LightQueryResult::light_;
    type["litGeometries_"] = &Urho3D::LightQueryResult::litGeometries_;
    type["shadowCasters_"] = &Urho3D::LightQueryResult::shadowCasters_;
# if 0 // SKIPPED
    type["shadowCameras_"] = &Urho3D::LightQueryResult::shadowCameras_;
# endif
//invalid literal for int() with base 10: 'MAX_LIGHT_SPLITS'
# if 0 // SKIPPED
    type["shadowCasterBegin_"] = &Urho3D::LightQueryResult::shadowCasterBegin_;
# endif
//invalid literal for int() with base 10: 'MAX_LIGHT_SPLITS'
# if 0 // SKIPPED
    type["shadowCasterEnd_"] = &Urho3D::LightQueryResult::shadowCasterEnd_;
# endif
//invalid literal for int() with base 10: 'MAX_LIGHT_SPLITS'
# if 0 // SKIPPED
    type["shadowCasterBox_"] = &Urho3D::LightQueryResult::shadowCasterBox_;
# endif
//invalid literal for int() with base 10: 'MAX_LIGHT_SPLITS'
# if 0 // SKIPPED
    type["shadowNearSplits_"] = &Urho3D::LightQueryResult::shadowNearSplits_;
# endif
//invalid literal for int() with base 10: 'MAX_LIGHT_SPLITS'
# if 0 // SKIPPED
    type["shadowFarSplits_"] = &Urho3D::LightQueryResult::shadowFarSplits_;
# endif
//invalid literal for int() with base 10: 'MAX_LIGHT_SPLITS'
    type["numSplits_"] = &Urho3D::LightQueryResult::numSplits_;

}

