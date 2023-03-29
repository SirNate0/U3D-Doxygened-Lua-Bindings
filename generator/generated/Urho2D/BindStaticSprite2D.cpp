
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/StaticSprite2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/StaticSprite2D.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Urho2D/Sprite2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_StaticSprite2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::StaticSprite2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::StaticSprite2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::StaticSprite2D>((Urho3D::StaticSprite2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::StaticSprite2D>( "StaticSprite2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Drawable2D,Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::StaticSprite2D>(context);
        });

// Members

    /*Set sprite. BIND_AS_PROPERTY*//*(Sprite2D *sprite)*/
    type["SetSprite"] = static_cast<void (Urho3D::StaticSprite2D::*)(Sprite2D *)>(&Urho3D::StaticSprite2D::SetSprite) ;
    /*Set draw rectangle. BIND_AS_PROPERTY*//*(const Rect &rect)*/
    type["SetDrawRect"] = static_cast<void (Urho3D::StaticSprite2D::*)(const  Rect &)>(&Urho3D::StaticSprite2D::SetDrawRect) ;
    /*Set texture rectangle. BIND_AS_PROPERTY*//*(const Rect &rect)*/
    type["SetTextureRect"] = static_cast<void (Urho3D::StaticSprite2D::*)(const  Rect &)>(&Urho3D::StaticSprite2D::SetTextureRect) ;
    /*Set blend mode. BIND_AS_PROPERTY*//*(BlendMode blendMode)*/
    type["SetBlendMode"] = static_cast<void (Urho3D::StaticSprite2D::*)(BlendMode)>(&Urho3D::StaticSprite2D::SetBlendMode) ;
    /*Set flip X. BIND_AS_PROPERTY*//*(bool flipX)*/
    type["SetFlipX"] = static_cast<void (Urho3D::StaticSprite2D::*)(bool)>(&Urho3D::StaticSprite2D::SetFlipX) ;
    /*Set flip Y. BIND_AS_PROPERTY*//*(bool flipY)*/
    type["SetFlipY"] = static_cast<void (Urho3D::StaticSprite2D::*)(bool)>(&Urho3D::StaticSprite2D::SetFlipY) ;
    /*Set swap X and Y. BIND_AS_PROPERTY*//*(bool swapXY)*/
    type["SetSwapXY"] = static_cast<void (Urho3D::StaticSprite2D::*)(bool)>(&Urho3D::StaticSprite2D::SetSwapXY) ;
    /*Set color. BIND_AS_PROPERTY*//*(const Color &color)*/
    type["SetColor"] = static_cast<void (Urho3D::StaticSprite2D::*)(const  Color &)>(&Urho3D::StaticSprite2D::SetColor) ;
    /*Set alpha. BIND_AS_PROPERTY*//*(float alpha)*/
    type["SetAlpha"] = static_cast<void (Urho3D::StaticSprite2D::*)(float)>(&Urho3D::StaticSprite2D::SetAlpha) ;
    /*Set whether to use custom-defined hot spot. BIND_AS_PROPERTY*//*(bool useHotSpot)*/
    type["SetUseHotSpot"] = static_cast<void (Urho3D::StaticSprite2D::*)(bool)>(&Urho3D::StaticSprite2D::SetUseHotSpot) ;
    /*Set whether to use custom-defined draw rectangle. BIND_AS_PROPERTY*//*(bool useDrawRect)*/
    type["SetUseDrawRect"] = static_cast<void (Urho3D::StaticSprite2D::*)(bool)>(&Urho3D::StaticSprite2D::SetUseDrawRect) ;
    /*Set whether to use custom-defined texture rectangle. BIND_AS_PROPERTY*//*(bool useTextureRect)*/
    type["SetUseTextureRect"] = static_cast<void (Urho3D::StaticSprite2D::*)(bool)>(&Urho3D::StaticSprite2D::SetUseTextureRect) ;
    /*Set hot spot. BIND_AS_PROPERTY*//*(const Vector2 &hotspot)*/
    type["SetHotSpot"] = static_cast<void (Urho3D::StaticSprite2D::*)(const  Vector2 &)>(&Urho3D::StaticSprite2D::SetHotSpot) ;
    /*Set custom material. BIND_AS_PROPERTY*//*(Material *customMaterial)*/
    type["SetCustomMaterial"] = static_cast<void (Urho3D::StaticSprite2D::*)(Material *)>(&Urho3D::StaticSprite2D::SetCustomMaterial) ;
    /*Return sprite. BIND_AS_PROPERTY*//*() const*/
    type["GetSprite"] = [](Urho3D::StaticSprite2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSprite());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return draw rect. BIND_AS_PROPERTY*//*() const*/
    type["GetDrawRect"] = static_cast<const Rect& (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetDrawRect) ;
    /*Return texture rect. BIND_AS_PROPERTY*//*() const*/
    type["GetTextureRect"] = static_cast<const Rect& (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetTextureRect) ;
    /*Return blend mode. BIND_AS_PROPERTY*//*() const*/
    type["GetBlendMode"] = static_cast<BlendMode (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetBlendMode) ;
    /*Return flip X. BIND_AS_PROPERTY*//*() const*/
    type["GetFlipX"] = static_cast<bool (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetFlipX) ;
    /*Return flip Y. BIND_AS_PROPERTY*//*() const*/
    type["GetFlipY"] = static_cast<bool (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetFlipY) ;
    /*Return swap X and Y. BIND_AS_PROPERTY*//*() const*/
    type["GetSwapXY"] = static_cast<bool (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetSwapXY) ;
    /*Return color. BIND_AS_PROPERTY*//*() const*/
    type["GetColor"] = static_cast<const Color& (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetColor) ;
    /*Return alpha. BIND_AS_PROPERTY*//*() const*/
    type["GetAlpha"] = static_cast<float (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetAlpha) ;
    /*Return whether to use custom-defined hot spot. BIND_AS_PROPERTY*//*() const*/
    type["GetUseHotSpot"] = static_cast<bool (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetUseHotSpot) ;
    /*Return whether to use custom-defined draw rectangle. BIND_AS_PROPERTY*//*() const*/
    type["GetUseDrawRect"] = static_cast<bool (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetUseDrawRect) ;
    /*Return whether to use custom-defined texture rectangle. BIND_AS_PROPERTY*//*() const*/
    type["GetUseTextureRect"] = static_cast<bool (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetUseTextureRect) ;
    /*Return hot spot. BIND_AS_PROPERTY*//*() const*/
    type["GetHotSpot"] = static_cast<const Vector2& (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetHotSpot) ;
    /*Return custom material. BIND_AS_PROPERTY*//*() const*/
    type["GetCustomMaterial"] = [](Urho3D::StaticSprite2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCustomMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Set sprite attribute.*//*(const ResourceRef &value)*/
    type["SetSpriteAttr"] = static_cast<void (Urho3D::StaticSprite2D::*)(const  ResourceRef &)>(&Urho3D::StaticSprite2D::SetSpriteAttr) ;
    /*Return sprite attribute.*//*() const*/
    type["GetSpriteAttr"] = static_cast<ResourceRef (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetSpriteAttr) ;
    /*Set custom material attribute.*//*(const ResourceRef &value)*/
    type["SetCustomMaterialAttr"] = static_cast<void (Urho3D::StaticSprite2D::*)(const  ResourceRef &)>(&Urho3D::StaticSprite2D::SetCustomMaterialAttr) ;
    /*Return custom material attribute.*//*() const*/
    type["GetCustomMaterialAttr"] = static_cast<ResourceRef (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetCustomMaterialAttr) ;
    type["SetFlip"] = sol::overload(
        static_cast<void (Urho3D::StaticSprite2D::*)(bool, bool, bool)>(&Urho3D::StaticSprite2D::SetFlip) ,
        [](Urho3D::StaticSprite2D& self, bool flipX, bool flipY){ self.SetFlip(flipX, flipY); } );
    type["alpha"] = sol::property(static_cast<float (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetAlpha) 
        , static_cast<void (Urho3D::StaticSprite2D::*)(float)>(&Urho3D::StaticSprite2D::SetAlpha) );
    type["blendMode"] = sol::property(static_cast<BlendMode (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetBlendMode) 
        , static_cast<void (Urho3D::StaticSprite2D::*)(BlendMode)>(&Urho3D::StaticSprite2D::SetBlendMode) );
    type["color"] = sol::property(static_cast<const Color& (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetColor) 
        , static_cast<void (Urho3D::StaticSprite2D::*)(const  Color &)>(&Urho3D::StaticSprite2D::SetColor) );
    type["customMaterial"] = sol::property([](Urho3D::StaticSprite2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCustomMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::StaticSprite2D::*)(Material *)>(&Urho3D::StaticSprite2D::SetCustomMaterial) );
    type["drawRect"] = sol::property(static_cast<const Rect& (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetDrawRect) 
        , static_cast<void (Urho3D::StaticSprite2D::*)(const  Rect &)>(&Urho3D::StaticSprite2D::SetDrawRect) );
    type["flipX"] = sol::property(static_cast<bool (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetFlipX) 
        , static_cast<void (Urho3D::StaticSprite2D::*)(bool)>(&Urho3D::StaticSprite2D::SetFlipX) );
    type["flipY"] = sol::property(static_cast<bool (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetFlipY) 
        , static_cast<void (Urho3D::StaticSprite2D::*)(bool)>(&Urho3D::StaticSprite2D::SetFlipY) );
    type["hotSpot"] = sol::property(static_cast<const Vector2& (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetHotSpot) 
        , static_cast<void (Urho3D::StaticSprite2D::*)(const  Vector2 &)>(&Urho3D::StaticSprite2D::SetHotSpot) );
    type["sprite"] = sol::property([](Urho3D::StaticSprite2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSprite());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::StaticSprite2D::*)(Sprite2D *)>(&Urho3D::StaticSprite2D::SetSprite) );
    type["swapXY"] = sol::property(static_cast<bool (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetSwapXY) 
        , static_cast<void (Urho3D::StaticSprite2D::*)(bool)>(&Urho3D::StaticSprite2D::SetSwapXY) );
    type["textureRect"] = sol::property(static_cast<const Rect& (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetTextureRect) 
        , static_cast<void (Urho3D::StaticSprite2D::*)(const  Rect &)>(&Urho3D::StaticSprite2D::SetTextureRect) );
    type["useDrawRect"] = sol::property(static_cast<bool (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetUseDrawRect) 
        , static_cast<void (Urho3D::StaticSprite2D::*)(bool)>(&Urho3D::StaticSprite2D::SetUseDrawRect) );
    type["useHotSpot"] = sol::property(static_cast<bool (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetUseHotSpot) 
        , static_cast<void (Urho3D::StaticSprite2D::*)(bool)>(&Urho3D::StaticSprite2D::SetUseHotSpot) );
    type["useTextureRect"] = sol::property(static_cast<bool (Urho3D::StaticSprite2D::*)() const>(&Urho3D::StaticSprite2D::GetUseTextureRect) 
        , static_cast<void (Urho3D::StaticSprite2D::*)(bool)>(&Urho3D::StaticSprite2D::SetUseTextureRect) );

}

