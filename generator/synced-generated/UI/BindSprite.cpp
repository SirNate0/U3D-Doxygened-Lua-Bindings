
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/Sprite.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/Sprite.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Texture.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/UI/UIBatch.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Sprite(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Sprite::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Sprite::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Sprite>((Urho3D::Sprite*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Sprite>( "Sprite"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Sprite>(context);
        });

// Members

    /*Return whether is visible and inside a scissor rectangle and should be rendered.*//*(const IntRect &currentScissor) override*/
    type["IsWithinScissor"] = static_cast<bool (Urho3D::Sprite::*)(const  IntRect &)>(&Urho3D::Sprite::IsWithinScissor) ;
    /*Update and return screen position.*//*() const override*/
    type["GetScreenPosition"] = static_cast<const IntVector2& (Urho3D::Sprite::*)() const>(&Urho3D::Sprite::GetScreenPosition) ;
    /*Return  UI rendering batches.*//*(PODVector< UIBatch > &batches, PODVector< float > &vertexData, const IntRect &currentScissor) override*/
    type["GetBatches"] = static_cast<void (Urho3D::Sprite::*)(PODVector<  UIBatch > &, PODVector< float > &, const  IntRect &)>(&Urho3D::Sprite::GetBatches) ;
    /*React to position change.*//*(const IntVector2 &newPosition) override*/
    type["OnPositionSet"] = static_cast<void (Urho3D::Sprite::*)(const  IntVector2 &)>(&Urho3D::Sprite::OnPositionSet) ;
    /*Convert screen coordinates to element coordinates.*//*(const IntVector2 &screenPosition) override*/
    type["ScreenToElement"] = static_cast<IntVector2 (Urho3D::Sprite::*)(const  IntVector2 &)>(&Urho3D::Sprite::ScreenToElement) ;
    /*Convert element coordinates to screen coordinates.*//*(const IntVector2 &position) override*/
    type["ElementToScreen"] = static_cast<IntVector2 (Urho3D::Sprite::*)(const  IntVector2 &)>(&Urho3D::Sprite::ElementToScreen) ;
    /*Set rotation angle. BIND_AS_PROPERTY*//*(float angle)*/
    type["SetRotation"] = static_cast<void (Urho3D::Sprite::*)(float)>(&Urho3D::Sprite::SetRotation) ;
    /*Set texture. BIND_AS_PROPERTY*//*(Texture *texture)*/
    type["SetTexture"] = static_cast<void (Urho3D::Sprite::*)(Texture *)>(&Urho3D::Sprite::SetTexture) ;
    /*Set part of texture to use as the image. BIND_AS_PROPERTY*//*(const IntRect &rect)*/
    type["SetImageRect"] = static_cast<void (Urho3D::Sprite::*)(const  IntRect &)>(&Urho3D::Sprite::SetImageRect) ;
    /*Use whole texture as the image.*//*()*/
    type["SetFullImageRect"] = static_cast<void (Urho3D::Sprite::*)()>(&Urho3D::Sprite::SetFullImageRect) ;
    /*Set blend mode. BIND_AS_PROPERTY*//*(BlendMode mode)*/
    type["SetBlendMode"] = static_cast<void (Urho3D::Sprite::*)(BlendMode)>(&Urho3D::Sprite::SetBlendMode) ;
    /*Return floating point position. BIND_AS_PROPERTY*//*() const*/
    type["GetPosition"] = static_cast<const Vector2& (Urho3D::Sprite::*)() const>(&Urho3D::Sprite::GetPosition) ;
    /*Return hotspot. BIND_AS_PROPERTY*//*() const*/
    type["GetHotSpot"] = static_cast<const IntVector2& (Urho3D::Sprite::*)() const>(&Urho3D::Sprite::GetHotSpot) ;
    /*Return scale. BIND_AS_PROPERTY*//*() const*/
    type["GetScale"] = static_cast<const Vector2& (Urho3D::Sprite::*)() const>(&Urho3D::Sprite::GetScale) ;
    /*Return rotation angle. BIND_AS_PROPERTY*//*() const*/
    type["GetRotation"] = static_cast<float (Urho3D::Sprite::*)() const>(&Urho3D::Sprite::GetRotation) ;
    /*Return texture. BIND_AS_PROPERTY*//*() const*/
    type["GetTexture"] = [](Urho3D::Sprite& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return image rectangle. BIND_AS_PROPERTY*//*() const*/
    type["GetImageRect"] = static_cast<const IntRect& (Urho3D::Sprite::*)() const>(&Urho3D::Sprite::GetImageRect) ;
    /*Return blend mode. BIND_AS_PROPERTY*//*() const*/
    type["GetBlendMode"] = static_cast<BlendMode (Urho3D::Sprite::*)() const>(&Urho3D::Sprite::GetBlendMode) ;
    /*Set texture attribute.*//*(const ResourceRef &value)*/
    type["SetTextureAttr"] = static_cast<void (Urho3D::Sprite::*)(const  ResourceRef &)>(&Urho3D::Sprite::SetTextureAttr) ;
    /*Return texture attribute.*//*() const*/
    type["GetTextureAttr"] = static_cast<ResourceRef (Urho3D::Sprite::*)() const>(&Urho3D::Sprite::GetTextureAttr) ;
    /*Update and return rendering transform, also used to transform child sprites.*//*() const*/
    type["GetTransform"] = static_cast<const Matrix3x4& (Urho3D::Sprite::*)() const>(&Urho3D::Sprite::GetTransform) ;
    type["SetPosition"] = sol::overload(
        static_cast<void (Urho3D::Sprite::*)(const  Vector2 &)>(&Urho3D::Sprite::SetPosition) ,
        static_cast<void (Urho3D::Sprite::*)(float, float)>(&Urho3D::Sprite::SetPosition)  );
    type["SetHotSpot"] = sol::overload(
        static_cast<void (Urho3D::Sprite::*)(const  IntVector2 &)>(&Urho3D::Sprite::SetHotSpot) ,
        static_cast<void (Urho3D::Sprite::*)(int, int)>(&Urho3D::Sprite::SetHotSpot)  );
    type["SetScale"] = sol::overload(
        static_cast<void (Urho3D::Sprite::*)(const  Vector2 &)>(&Urho3D::Sprite::SetScale) ,
        static_cast<void (Urho3D::Sprite::*)(float, float)>(&Urho3D::Sprite::SetScale) ,
        static_cast<void (Urho3D::Sprite::*)(float)>(&Urho3D::Sprite::SetScale)  );
    type["blendMode"] = sol::property(static_cast<BlendMode (Urho3D::Sprite::*)() const>(&Urho3D::Sprite::GetBlendMode) 
        , static_cast<void (Urho3D::Sprite::*)(BlendMode)>(&Urho3D::Sprite::SetBlendMode) );
    type["hotSpot"] = sol::property(static_cast<const IntVector2& (Urho3D::Sprite::*)() const>(&Urho3D::Sprite::GetHotSpot) 
        , static_cast<void (Urho3D::Sprite::*)(const  IntVector2 &)>(&Urho3D::Sprite::SetHotSpot) );
    type["imageRect"] = sol::property(static_cast<const IntRect& (Urho3D::Sprite::*)() const>(&Urho3D::Sprite::GetImageRect) 
        , static_cast<void (Urho3D::Sprite::*)(const  IntRect &)>(&Urho3D::Sprite::SetImageRect) );
    type["position"] = sol::property(static_cast<const Vector2& (Urho3D::Sprite::*)() const>(&Urho3D::Sprite::GetPosition) 
        , static_cast<void (Urho3D::Sprite::*)(const  Vector2 &)>(&Urho3D::Sprite::SetPosition) );
    type["rotation"] = sol::property(static_cast<float (Urho3D::Sprite::*)() const>(&Urho3D::Sprite::GetRotation) 
        , static_cast<void (Urho3D::Sprite::*)(float)>(&Urho3D::Sprite::SetRotation) );
    type["scale"] = sol::property(static_cast<const Vector2& (Urho3D::Sprite::*)() const>(&Urho3D::Sprite::GetScale) 
        , static_cast<void (Urho3D::Sprite::*)(const  Vector2 &)>(&Urho3D::Sprite::SetScale) );
    type["texture"] = sol::property([](Urho3D::Sprite& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Sprite::*)(Texture *)>(&Urho3D::Sprite::SetTexture) );

}

