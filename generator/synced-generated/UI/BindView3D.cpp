
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/View3D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/View3D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Graphics/Texture2D.h>
#include <Urho3D/Graphics/Viewport.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Scene/Node.h>
#include <Urho3D/Scene/Scene.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_View3D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::View3D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::View3D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::View3D>((Urho3D::View3D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::View3D>( "View3D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Window,Urho3D::BorderImage,Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::View3D>(context);
        });

// Members

    /*React to resize.*//*(const IntVector2 &newSize, const IntVector2 &delta) override*/
    type["OnResize"] = static_cast<void (Urho3D::View3D::*)(const  IntVector2 &, const  IntVector2 &)>(&Urho3D::View3D::OnResize) ;
    /*Set render texture pixel format. Default is RGB. BIND_AS_PROPERTY*//*(unsigned format)*/
    type["SetFormat"] = static_cast<void (Urho3D::View3D::*)(unsigned)>(&Urho3D::View3D::SetFormat) ;
    /*Set render target auto update mode. Default is true. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetAutoUpdate"] = static_cast<void (Urho3D::View3D::*)(bool)>(&Urho3D::View3D::SetAutoUpdate) ;
    /*Queue manual update on the render texture.*//*()*/
    type["QueueUpdate"] = static_cast<void (Urho3D::View3D::*)()>(&Urho3D::View3D::QueueUpdate) ;
    /*Return render texture pixel format. BIND_AS_PROPERTY*//*() const*/
    type["GetFormat"] = static_cast<unsigned (Urho3D::View3D::*)() const>(&Urho3D::View3D::GetFormat) ;
    /*Return whether render target updates automatically. BIND_AS_PROPERTY*//*() const*/
    type["GetAutoUpdate"] = static_cast<bool (Urho3D::View3D::*)() const>(&Urho3D::View3D::GetAutoUpdate) ;
    /*Return scene. BIND_AS_PROPERTY*//*() const*/
    type["GetScene"] = [](Urho3D::View3D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetScene());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return camera scene node. BIND_AS_PROPERTY*//*() const*/
    type["GetCameraNode"] = [](Urho3D::View3D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCameraNode());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return render texture. BIND_AS_PROPERTY*//*() const*/
    type["GetRenderTexture"] = [](Urho3D::View3D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRenderTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return depth stencil texture. BIND_AS_PROPERTY*//*() const*/
    type["GetDepthTexture"] = [](Urho3D::View3D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDepthTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return viewport. BIND_AS_PROPERTY*//*() const*/
    type["GetViewport"] = [](Urho3D::View3D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetViewport());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    type["SetView"] = sol::overload(
        static_cast<void (Urho3D::View3D::*)(Scene *, Camera *, bool)>(&Urho3D::View3D::SetView) ,
        [](Urho3D::View3D& self, Scene * scene, Camera * camera){ self.SetView(scene, camera); } );
    type["autoUpdate"] = sol::property(static_cast<bool (Urho3D::View3D::*)() const>(&Urho3D::View3D::GetAutoUpdate) 
        , static_cast<void (Urho3D::View3D::*)(bool)>(&Urho3D::View3D::SetAutoUpdate) );
    type["cameraNode"] = sol::property([](Urho3D::View3D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCameraNode());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["depthTexture"] = sol::property([](Urho3D::View3D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDepthTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["format"] = sol::property(static_cast<unsigned (Urho3D::View3D::*)() const>(&Urho3D::View3D::GetFormat) 
        , static_cast<void (Urho3D::View3D::*)(unsigned)>(&Urho3D::View3D::SetFormat) );
    type["renderTexture"] = sol::property([](Urho3D::View3D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRenderTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["scene"] = sol::property([](Urho3D::View3D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetScene());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["viewport"] = sol::property([](Urho3D::View3D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetViewport());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });

}

