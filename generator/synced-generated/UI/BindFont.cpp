
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/Font.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/Font.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Resource/Resource.h>
#include <Urho3D/UI/FontFace.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Font(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Font::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Font::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Font>((Urho3D::Font*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Font>( "Font"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Font>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::Font::*)(Deserializer &)>(&Urho3D::Font::BeginLoad) ;
    /*Set absolute (in pixels) position adjustment for glyphs. BIND_AS_PROPERTY*//*(const IntVector2 &offset)*/
    type["SetAbsoluteGlyphOffset"] = static_cast<void (Urho3D::Font::*)(const  IntVector2 &)>(&Urho3D::Font::SetAbsoluteGlyphOffset) ;
    /*Set point size scaled position adjustment for glyphs. BIND_AS_PROPERTY*//*(const Vector2 &offset)*/
    type["SetScaledGlyphOffset"] = static_cast<void (Urho3D::Font::*)(const  Vector2 &)>(&Urho3D::Font::SetScaledGlyphOffset) ;
    /*Return font face. Pack and render to a texture if not rendered yet. Return null on error.*//*(float pointSize)*/
    type["GetFace"] = [](Urho3D::Font& self, float pointSize){ return SharedPtr(self.GetFace(pointSize)); };
    /*Return font type. BIND_AS_PROPERTY*//*() const*/
    type["GetFontType"] = static_cast<FontType (Urho3D::Font::*)() const>(&Urho3D::Font::GetFontType) ;
    /*Is signed distance field font.*//*() const*/
    type["IsSDFFont"] = static_cast<bool (Urho3D::Font::*)() const>(&Urho3D::Font::IsSDFFont) ;
    /*Return absolute position adjustment for glyphs. BIND_AS_PROPERTY*//*() const*/
    type["GetAbsoluteGlyphOffset"] = static_cast<const IntVector2& (Urho3D::Font::*)() const>(&Urho3D::Font::GetAbsoluteGlyphOffset) ;
    /*Return point size scaled position adjustment for glyphs. BIND_AS_PROPERTY*//*() const*/
    type["GetScaledGlyphOffset"] = static_cast<const Vector2& (Urho3D::Font::*)() const>(&Urho3D::Font::GetScaledGlyphOffset) ;
    /*Return the total effective offset for a point size.*//*(float pointSize) const*/
    type["GetTotalGlyphOffset"] = static_cast<IntVector2 (Urho3D::Font::*)(float) const>(&Urho3D::Font::GetTotalGlyphOffset) ;
    /*Release font faces and recreate them next time when requested. Called when font textures lost or global font properties change.*//*()*/
    type["ReleaseFaces"] = static_cast<void (Urho3D::Font::*)()>(&Urho3D::Font::ReleaseFaces) ;
    type["SaveXML"] = sol::overload(
        static_cast<bool (Urho3D::Font::*)(Serializer &, int, bool, const  String &)>(&Urho3D::Font::SaveXML) ,
        [](Urho3D::Font& self, Serializer & dest, int pointSize, bool usedGlyphs){ return self.SaveXML(dest, pointSize, usedGlyphs); },
        [](Urho3D::Font& self, Serializer & dest, int pointSize){ return self.SaveXML(dest, pointSize); } );
    type["absoluteGlyphOffset"] = sol::property(static_cast<const IntVector2& (Urho3D::Font::*)() const>(&Urho3D::Font::GetAbsoluteGlyphOffset) 
        , static_cast<void (Urho3D::Font::*)(const  IntVector2 &)>(&Urho3D::Font::SetAbsoluteGlyphOffset) );
    type["fontType"] = sol::property(static_cast<FontType (Urho3D::Font::*)() const>(&Urho3D::Font::GetFontType) );
    type["scaledGlyphOffset"] = sol::property(static_cast<const Vector2& (Urho3D::Font::*)() const>(&Urho3D::Font::GetScaledGlyphOffset) 
        , static_cast<void (Urho3D::Font::*)(const  Vector2 &)>(&Urho3D::Font::SetScaledGlyphOffset) );

}

