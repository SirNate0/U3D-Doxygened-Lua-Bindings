
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/FontFaceFreeType.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/FontFaceFreeType.h>
#include <Urho3D/UI/Font.h>
#include <Urho3D/UI/FontFace.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_FontFaceFreeType(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::FontFaceFreeType>( "FontFaceFreeType"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::FontFace,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Font *font) { 
            return Urho3D::MakeShared<Urho3D::FontFaceFreeType>(font);
        });

// Members

    /*Load font face.*//*(const unsigned char *fontData, unsigned fontDataSize, float pointSize) override*/
    type["Load"] = static_cast<bool (Urho3D::FontFaceFreeType::*)(const unsigned char *, unsigned, float)>(&Urho3D::FontFaceFreeType::Load) ;
    /*Return pointer to the glyph structure corresponding to a character. Return null if glyph not found.*//*(unsigned c) override*/
    type["GetGlyph"] = static_cast<const FontGlyph* (Urho3D::FontFaceFreeType::*)(unsigned)>(&Urho3D::FontFaceFreeType::GetGlyph) ;
    /*Return if font face uses mutable glyphs.*//*() const override*/
    type["HasMutableGlyphs"] = static_cast<bool (Urho3D::FontFaceFreeType::*)() const>(&Urho3D::FontFaceFreeType::HasMutableGlyphs) ;

}

