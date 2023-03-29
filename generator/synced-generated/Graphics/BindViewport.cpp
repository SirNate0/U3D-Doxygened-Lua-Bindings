
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Viewport.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Viewport.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Graphics/RenderPath.h>
#include <Urho3D/Graphics/View.h>
#include <Urho3D/Math/Ray.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/Scene/Scene.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Viewport(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Viewport::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Viewport::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Viewport>((Urho3D::Viewport*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Viewport>( "Viewport"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Viewport>(context);
        },[](Context *context, Scene *scene, Camera *camera, RenderPath *renderPath=nullptr) { 
            return Urho3D::MakeShared<Urho3D::Viewport>(context, scene, camera, renderPath);
        },[](Context * context, Scene * scene, Camera * camera) { 
            return Urho3D::MakeShared<Urho3D::Viewport>(context, scene, camera);
        },[](Context *context, Scene *scene, Camera *camera, const IntRect &rect, RenderPath *renderPath=nullptr) { 
            return Urho3D::MakeShared<Urho3D::Viewport>(context, scene, camera, rect, renderPath);
        },[](Context * context, Scene * scene, Camera * camera, const  IntRect & rect) { 
            return Urho3D::MakeShared<Urho3D::Viewport>(context, scene, camera, rect);
        });

// Members

    /*Set scene. BIND_AS_PROPERTY*//*(Scene *scene)*/
    type["SetScene"] = static_cast<void (Urho3D::Viewport::*)(Scene *)>(&Urho3D::Viewport::SetScene) ;
    /*Set viewport camera. BIND_AS_PROPERTY*//*(Camera *camera)*/
    type["SetCamera"] = static_cast<void (Urho3D::Viewport::*)(Camera *)>(&Urho3D::Viewport::SetCamera) ;
    /*Set view rectangle. A zero rectangle (0 0 0 0) means to use the rendertarget's full dimensions. BIND_AS_PROPERTY*//*(const IntRect &rect)*/
    type["SetRect"] = static_cast<void (Urho3D::Viewport::*)(const  IntRect &)>(&Urho3D::Viewport::SetRect) ;
    /*Set whether to render debug geometry. Default true. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetDrawDebug"] = static_cast<void (Urho3D::Viewport::*)(bool)>(&Urho3D::Viewport::SetDrawDebug) ;
    /*Set separate camera to use for culling. Sharing a culling camera between several viewports allows to prepare the view only once, saving in CPU use. The culling camera's frustum should cover all the viewport cameras' frusta or else objects may be missing from the rendered view. BIND_AS_PROPERTY*//*(Camera *camera)*/
    type["SetCullCamera"] = static_cast<void (Urho3D::Viewport::*)(Camera *)>(&Urho3D::Viewport::SetCullCamera) ;
    /*Return scene. BIND_AS_PROPERTY*//*() const*/
    type["GetScene"] = [](Urho3D::Viewport& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetScene());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return viewport camera. BIND_AS_PROPERTY*//*() const*/
    type["GetCamera"] = [](Urho3D::Viewport& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCamera());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the internal rendering structure. May be null if the viewport has not been rendered yet.*//*() const*/
    type["GetView"] = [](Urho3D::Viewport& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetView());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return view rectangle. A zero rectangle (0 0 0 0) means to use the rendertarget's full dimensions. In this case you could fetch the actual view rectangle from  View object, though it will be valid only after the first frame. BIND_AS_PROPERTY*//*() const*/
    type["GetRect"] = static_cast<const IntRect& (Urho3D::Viewport::*)() const>(&Urho3D::Viewport::GetRect) ;
    /*Return rendering path. BIND_AS_PROPERTY*//*() const*/
    type["GetRenderPath"] = [](Urho3D::Viewport& self){ return SharedPtr(self.GetRenderPath()); };
    /*Return whether to draw debug geometry. BIND_AS_PROPERTY*//*() const*/
    type["GetDrawDebug"] = static_cast<bool (Urho3D::Viewport::*)() const>(&Urho3D::Viewport::GetDrawDebug) ;
    /*Return the culling camera. If null, the viewport camera will be used for culling (normal case). BIND_AS_PROPERTY*//*() const*/
    type["GetCullCamera"] = [](Urho3D::Viewport& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCullCamera());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return ray corresponding to normalized screen coordinates.*//*(int x, int y) const*/
    type["GetScreenRay"] = static_cast<Ray (Urho3D::Viewport::*)(int, int) const>(&Urho3D::Viewport::GetScreenRay) ;
    /*Convert a world space point to normalized screen coordinates.*//*(const Vector3 &worldPos) const*/
    type["WorldToScreenPoint"] = static_cast<IntVector2 (Urho3D::Viewport::*)(const  Vector3 &) const>(&Urho3D::Viewport::WorldToScreenPoint) ;
    /*Convert screen coordinates and depth to a world space point.*//*(int x, int y, float depth) const*/
    type["ScreenToWorldPoint"] = static_cast<Vector3 (Urho3D::Viewport::*)(int, int, float) const>(&Urho3D::Viewport::ScreenToWorldPoint) ;
    /*Allocate the view structure. Called by  Renderer.*//*()*/
    type["AllocateView"] = static_cast<void (Urho3D::Viewport::*)()>(&Urho3D::Viewport::AllocateView) ;
    type["SetRenderPath"] = sol::overload(
        static_cast<void (Urho3D::Viewport::*)(RenderPath *)>(&Urho3D::Viewport::SetRenderPath) ,
        static_cast<bool (Urho3D::Viewport::*)(XMLFile *)>(&Urho3D::Viewport::SetRenderPath)  );
    type["camera"] = sol::property([](Urho3D::Viewport& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCamera());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Viewport::*)(Camera *)>(&Urho3D::Viewport::SetCamera) );
    type["cullCamera"] = sol::property([](Urho3D::Viewport& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCullCamera());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Viewport::*)(Camera *)>(&Urho3D::Viewport::SetCullCamera) );
    type["drawDebug"] = sol::property(static_cast<bool (Urho3D::Viewport::*)() const>(&Urho3D::Viewport::GetDrawDebug) 
        , static_cast<void (Urho3D::Viewport::*)(bool)>(&Urho3D::Viewport::SetDrawDebug) );
    type["rect"] = sol::property(static_cast<const IntRect& (Urho3D::Viewport::*)() const>(&Urho3D::Viewport::GetRect) 
        , static_cast<void (Urho3D::Viewport::*)(const  IntRect &)>(&Urho3D::Viewport::SetRect) );
    type["renderPath"] = sol::property([](Urho3D::Viewport& self){ return SharedPtr(self.GetRenderPath()); }
        , static_cast<void (Urho3D::Viewport::*)(RenderPath *)>(&Urho3D::Viewport::SetRenderPath) );
    type["scene"] = sol::property([](Urho3D::Viewport& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetScene());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Viewport::*)(Scene *)>(&Urho3D::Viewport::SetScene) );

}

