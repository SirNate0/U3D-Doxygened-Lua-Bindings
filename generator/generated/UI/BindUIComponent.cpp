
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/UIComponent.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/UIComponent.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/Texture2D.h>
#include <Urho3D/UI/UIElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_UIComponent(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::UIComponent::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::UIComponent::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::UIComponent>((Urho3D::UIComponent*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::UIComponent>( "UIComponent"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::UIComponent>(context);
        });

// Members

    /*Return  UIElement. BIND_AS_PROPERTY*//*() const*/
    type["GetRoot"] = [](Urho3D::UIComponent& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRoot());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return material which will be used for rendering  UI texture. BIND_AS_PROPERTY*//*() const*/
    type["GetMaterial"] = [](Urho3D::UIComponent& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return texture which will be used for rendering  UI to. BIND_AS_PROPERTY*//*() const*/
    type["GetTexture"] = [](Urho3D::UIComponent& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Set index of viewport to be used for screen coordinate translation.*//*(unsigned index)*/
    type["SetViewportIndex"] = static_cast<void (Urho3D::UIComponent::*)(unsigned)>(&Urho3D::UIComponent::SetViewportIndex) ;
    type["material"] = sol::property([](Urho3D::UIComponent& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["root"] = sol::property([](Urho3D::UIComponent& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRoot());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["texture"] = sol::property([](Urho3D::UIComponent& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });

}

