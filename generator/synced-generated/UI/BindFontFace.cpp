
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/FontFace.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/FontFace.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/Texture2D.h>
#include <Urho3D/UI/Font.h>
#include <Urho3D/UI/FontFace.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_FontFace(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::FontFace>( "FontFace"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    /*ABSTRACT*/

// Members

    /*Load font face.*//*(const unsigned char *fontData, unsigned fontDataSize, float pointSize)=0*/
    type["Load"] = static_cast<bool (Urho3D::FontFace::*)(const unsigned char *, unsigned, float)>(&Urho3D::FontFace::Load) ;
    /*Return pointer to the glyph structure corresponding to a character. Return null if glyph not found.*//*(unsigned c)*/
    type["GetGlyph"] = static_cast<const FontGlyph* (Urho3D::FontFace::*)(unsigned)>(&Urho3D::FontFace::GetGlyph) ;
    /*Return if font face uses mutable glyphs.*//*() const*/
    type["HasMutableGlyphs"] = static_cast<bool (Urho3D::FontFace::*)() const>(&Urho3D::FontFace::HasMutableGlyphs) ;
    /*Return the kerning for a character and the next character.*//*(unsigned c, unsigned d) const*/
    type["GetKerning"] = static_cast<float (Urho3D::FontFace::*)(unsigned, unsigned) const>(&Urho3D::FontFace::GetKerning) ;
    /*Return true when one of the texture has a data loss.*//*() const*/
    type["IsDataLost"] = static_cast<bool (Urho3D::FontFace::*)() const>(&Urho3D::FontFace::IsDataLost) ;
    /*Return point size.*//*() const*/
    type["GetPointSize"] = static_cast<float (Urho3D::FontFace::*)() const>(&Urho3D::FontFace::GetPointSize) ;
    /*Return row height.*//*() const*/
    type["GetRowHeight"] = static_cast<float (Urho3D::FontFace::*)() const>(&Urho3D::FontFace::GetRowHeight) ;
    /*Return textures.*//*() const*/
    type["GetTextures"] = static_cast<const Vector<SharedPtr<Texture2D>>& (Urho3D::FontFace::*)() const>(&Urho3D::FontFace::GetTextures) ;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/FontFace.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/FontFace.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_FontGlyph(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::FontGlyph>( "FontGlyph"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["x_"] = &Urho3D::FontGlyph::x_;
    type["y_"] = &Urho3D::FontGlyph::y_;
    type["texWidth_"] = &Urho3D::FontGlyph::texWidth_;
    type["texHeight_"] = &Urho3D::FontGlyph::texHeight_;
    type["width_"] = &Urho3D::FontGlyph::width_;
    type["height_"] = &Urho3D::FontGlyph::height_;
    type["offsetX_"] = &Urho3D::FontGlyph::offsetX_;
    type["offsetY_"] = &Urho3D::FontGlyph::offsetY_;
    type["advanceX_"] = &Urho3D::FontGlyph::advanceX_;
    type["page_"] = &Urho3D::FontGlyph::page_;
    type["used_"] = &Urho3D::FontGlyph::used_;

}

