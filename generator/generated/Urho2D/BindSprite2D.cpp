
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/Sprite2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/Sprite2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Object.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Texture2D.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Urho2D/Sprite2D.h>
#include <Urho3D/Urho2D/SpriteSheet2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Sprite2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Sprite2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Sprite2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Sprite2D>((Urho3D::Sprite2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Sprite2D>( "Sprite2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Sprite2D>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::Sprite2D::*)(Deserializer &)>(&Urho3D::Sprite2D::BeginLoad) ;
    /*Finish resource loading. Always called from the main thread. Return true if successful.*//*() override*/
    type["EndLoad"] = static_cast<bool (Urho3D::Sprite2D::*)()>(&Urho3D::Sprite2D::EndLoad) ;
    /*Set texture. BIND_AS_PROPERTY*//*(Texture2D *texture)*/
    type["SetTexture"] = static_cast<void (Urho3D::Sprite2D::*)(Texture2D *)>(&Urho3D::Sprite2D::SetTexture) ;
    /*Set rectangle. BIND_AS_PROPERTY*//*(const IntRect &rectangle)*/
    type["SetRectangle"] = static_cast<void (Urho3D::Sprite2D::*)(const  IntRect &)>(&Urho3D::Sprite2D::SetRectangle) ;
    /*Set hot spot. BIND_AS_PROPERTY*//*(const Vector2 &hotSpot)*/
    type["SetHotSpot"] = static_cast<void (Urho3D::Sprite2D::*)(const  Vector2 &)>(&Urho3D::Sprite2D::SetHotSpot) ;
    /*Set offset. BIND_AS_PROPERTY*//*(const IntVector2 &offset)*/
    type["SetOffset"] = static_cast<void (Urho3D::Sprite2D::*)(const  IntVector2 &)>(&Urho3D::Sprite2D::SetOffset) ;
    /*Set texture edge offset in pixels. This affects the left/right and top/bottom edges equally to prevent edge sampling artifacts. Default 0. BIND_AS_PROPERTY*//*(float offset)*/
    type["SetTextureEdgeOffset"] = static_cast<void (Urho3D::Sprite2D::*)(float)>(&Urho3D::Sprite2D::SetTextureEdgeOffset) ;
    /*Set sprite sheet.*//*(SpriteSheet2D *spriteSheet)*/
    type["SetSpriteSheet"] = static_cast<void (Urho3D::Sprite2D::*)(SpriteSheet2D *)>(&Urho3D::Sprite2D::SetSpriteSheet) ;
    /*Return texture. BIND_AS_PROPERTY*//*() const*/
    type["GetTexture"] = [](Urho3D::Sprite2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return rectangle. BIND_AS_PROPERTY*//*() const*/
    type["GetRectangle"] = static_cast<const IntRect& (Urho3D::Sprite2D::*)() const>(&Urho3D::Sprite2D::GetRectangle) ;
    /*Return hot spot. BIND_AS_PROPERTY*//*() const*/
    type["GetHotSpot"] = static_cast<const Vector2& (Urho3D::Sprite2D::*)() const>(&Urho3D::Sprite2D::GetHotSpot) ;
    /*Return offset. BIND_AS_PROPERTY*//*() const*/
    type["GetOffset"] = static_cast<const IntVector2& (Urho3D::Sprite2D::*)() const>(&Urho3D::Sprite2D::GetOffset) ;
    /*Return texture edge offset. BIND_AS_PROPERTY*//*() const*/
    type["GetTextureEdgeOffset"] = static_cast<float (Urho3D::Sprite2D::*)() const>(&Urho3D::Sprite2D::GetTextureEdgeOffset) ;
    /*Return sprite sheet.*//*() const*/
    type["GetSpriteSheet"] = [](Urho3D::Sprite2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSpriteSheet());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    type["GetDrawRectangle"] = sol::overload(
        static_cast<bool (Urho3D::Sprite2D::*)(Rect &, bool, bool) const>(&Urho3D::Sprite2D::GetDrawRectangle) ,
        [](Urho3D::Sprite2D& self, Rect & rect, bool flipX){ return self.GetDrawRectangle(rect, flipX); },
        [](Urho3D::Sprite2D& self, Rect & rect){ return self.GetDrawRectangle(rect); },
        static_cast<bool (Urho3D::Sprite2D::*)(Rect &, const  Vector2 &, bool, bool) const>(&Urho3D::Sprite2D::GetDrawRectangle) ,
        [](Urho3D::Sprite2D& self, Rect & rect, const  Vector2 & hotSpot, bool flipX){ return self.GetDrawRectangle(rect, hotSpot, flipX); },
        [](Urho3D::Sprite2D& self, Rect & rect, const  Vector2 & hotSpot){ return self.GetDrawRectangle(rect, hotSpot); } );
    type["GetTextureRectangle"] = sol::overload(
        static_cast<bool (Urho3D::Sprite2D::*)(Rect &, bool, bool) const>(&Urho3D::Sprite2D::GetTextureRectangle) ,
        [](Urho3D::Sprite2D& self, Rect & rect, bool flipX){ return self.GetTextureRectangle(rect, flipX); },
        [](Urho3D::Sprite2D& self, Rect & rect){ return self.GetTextureRectangle(rect); } );
    type["hotSpot"] = sol::property(static_cast<const Vector2& (Urho3D::Sprite2D::*)() const>(&Urho3D::Sprite2D::GetHotSpot) 
        , static_cast<void (Urho3D::Sprite2D::*)(const  Vector2 &)>(&Urho3D::Sprite2D::SetHotSpot) );
    type["offset"] = sol::property(static_cast<const IntVector2& (Urho3D::Sprite2D::*)() const>(&Urho3D::Sprite2D::GetOffset) 
        , static_cast<void (Urho3D::Sprite2D::*)(const  IntVector2 &)>(&Urho3D::Sprite2D::SetOffset) );
    type["rectangle"] = sol::property(static_cast<const IntRect& (Urho3D::Sprite2D::*)() const>(&Urho3D::Sprite2D::GetRectangle) 
        , static_cast<void (Urho3D::Sprite2D::*)(const  IntRect &)>(&Urho3D::Sprite2D::SetRectangle) );
    type["texture"] = sol::property([](Urho3D::Sprite2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Sprite2D::*)(Texture2D *)>(&Urho3D::Sprite2D::SetTexture) );
    type["textureEdgeOffset"] = sol::property(static_cast<float (Urho3D::Sprite2D::*)() const>(&Urho3D::Sprite2D::GetTextureEdgeOffset) 
        , static_cast<void (Urho3D::Sprite2D::*)(float)>(&Urho3D::Sprite2D::SetTextureEdgeOffset) );

}

