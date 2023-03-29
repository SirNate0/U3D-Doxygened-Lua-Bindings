
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriteSheet2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriteSheet2D.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Texture2D.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Urho2D/Sprite2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_SpriteSheet2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::SpriteSheet2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::SpriteSheet2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::SpriteSheet2D>((Urho3D::SpriteSheet2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::SpriteSheet2D>( "SpriteSheet2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::SpriteSheet2D>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::SpriteSheet2D::*)(Deserializer &)>(&Urho3D::SpriteSheet2D::BeginLoad) ;
    /*Finish resource loading. Always called from the main thread. Return true if successful.*//*() override*/
    type["EndLoad"] = static_cast<bool (Urho3D::SpriteSheet2D::*)()>(&Urho3D::SpriteSheet2D::EndLoad) ;
    /*Set texture. BIND_AS_PROPERTY*//*(Texture2D *texture)*/
    type["SetTexture"] = static_cast<void (Urho3D::SpriteSheet2D::*)(Texture2D *)>(&Urho3D::SpriteSheet2D::SetTexture) ;
    /*Return texture. BIND_AS_PROPERTY*//*() const*/
    type["GetTexture"] = [](Urho3D::SpriteSheet2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return sprite.*//*(const String &name) const*/
    type["GetSprite"] = [](Urho3D::SpriteSheet2D& self, const String &name, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSprite(name));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return sprite mapping.*//*() const*/
    type["GetSpriteMapping"] = static_cast<const HashMap<String,SharedPtr<Sprite2D>>& (Urho3D::SpriteSheet2D::*)() const>(&Urho3D::SpriteSheet2D::GetSpriteMapping) ;
    type["DefineSprite"] = sol::overload(
        static_cast<void (Urho3D::SpriteSheet2D::*)(const  String &, const  IntRect &, const  Vector2 &, const  IntVector2 &)>(&Urho3D::SpriteSheet2D::DefineSprite) ,
        [](Urho3D::SpriteSheet2D& self, const  String & name, const  IntRect & rectangle, const  Vector2 & hotSpot){ self.DefineSprite(name, rectangle, hotSpot); },
        [](Urho3D::SpriteSheet2D& self, const  String & name, const  IntRect & rectangle){ self.DefineSprite(name, rectangle); } );
    type["texture"] = sol::property([](Urho3D::SpriteSheet2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::SpriteSheet2D::*)(Texture2D *)>(&Urho3D::SpriteSheet2D::SetTexture) );

}

