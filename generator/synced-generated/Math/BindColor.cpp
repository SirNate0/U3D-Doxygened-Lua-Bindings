
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Color.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Color.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Math/Vector4.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Color(sol::state_view& lua)
{
    
using namespace Urho3D;
using ChannelMask = Color::ChannelMask;

auto type = lua.new_usertype<Urho3D::Color>( "Color"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Color(),
        Urho3D::Color(const  Color &),
        Urho3D::Color(const  Color &, float),
        Urho3D::Color(float, float, float),
        Urho3D::Color(float, float, float, float),
        Urho3D::Color(const float *),
        Urho3D::Color(unsigned, const  ChannelMask &),
        Urho3D::Color(unsigned),
        Urho3D::Color(const  Vector3 &),
        Urho3D::Color(const  Vector4 &)>();

// Members

    /*Assign from another color.*//*(const Color &rhs) noexcept=default*/
    type["operator_assign"] = static_cast<Color& (Urho3D::Color::*)(const  Color &) noexcept>(&Urho3D::Color::operator=) ;
    /*Test for equality with another color without epsilon.*//*(const Color &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::Color::*)(const  Color &) const>(&Urho3D::Color::operator==) ;
    /*Test for inequality with another color without epsilon.*//*(const Color &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::Color::*)(const  Color &) const>(&Urho3D::Color::operator!=) ;
    /*Multiply with a scalar.*//*(float rhs) const*/
    type["__mul"] = static_cast<Color (Urho3D::Color::*)(float) const>(&Urho3D::Color::operator*) ;
    /*Add a color.*//*(const Color &rhs) const*/
    type["__add"] = static_cast<Color (Urho3D::Color::*)(const  Color &) const>(&Urho3D::Color::operator+) ;
    /*Return negation.*//*() const*/
    type["__unm"] = static_cast<Color (Urho3D::Color::*)() const>(&Urho3D::Color::operator-) ;
    /*Subtract a color.*//*(const Color &rhs) const*/
    type["__sub"] = static_cast<Color (Urho3D::Color::*)(const  Color &) const>(&Urho3D::Color::operator-) ;
    /*Add-assign a color.*//*(const Color &rhs)*/
    type["operator_add_assign"] = static_cast<Color& (Urho3D::Color::*)(const  Color &)>(&Urho3D::Color::operator+=) ;
    /*Return float data.*//*() const*/
    type["Data"] = static_cast<const float* (Urho3D::Color::*)() const>(&Urho3D::Color::Data) ;
    /*Return color packed to a 32-bit integer, with R component in the lowest 8 bits. Components are clamped to [0, 1] range.*//*() const*/
    type["ToUInt"] = static_cast<unsigned (Urho3D::Color::*)() const>(&Urho3D::Color::ToUInt) ;
    /*Return color packed to a 32-bit integer with arbitrary channel mask. Components are clamped to [0, 1] range.*//*(const ChannelMask &mask) const*/
    type["ToUIntMask"] = static_cast<unsigned (Urho3D::Color::*)(const  ChannelMask &) const>(&Urho3D::Color::ToUIntMask) ;
    /*Return HSL color-space representation as a  Vector3; the RGB values are clipped before conversion but not changed in the process.*//*() const*/
    type["ToHSL"] = static_cast<Vector3 (Urho3D::Color::*)() const>(&Urho3D::Color::ToHSL) ;
    /*Return HSV color-space representation as a  Vector3; the RGB values are clipped before conversion but not changed in the process.*//*() const*/
    type["ToHSV"] = static_cast<Vector3 (Urho3D::Color::*)() const>(&Urho3D::Color::ToHSV) ;
    /*Set RGBA values from packed 32-bit integer, with R component in the lowest 8 bits (format 0xAABBGGRR).*//*(unsigned color)*/
    type["FromUInt"] = static_cast<void (Urho3D::Color::*)(unsigned)>(&Urho3D::Color::FromUInt) ;
    /*Set RGBA values from packed 32-bit integer with arbitrary channel mask.*//*(unsigned color, const ChannelMask &mask)*/
    type["FromUIntMask"] = static_cast<void (Urho3D::Color::*)(unsigned, const  ChannelMask &)>(&Urho3D::Color::FromUIntMask) ;
    /*Return RGB as a three-dimensional vector. BIND_AS_ALIAS_get_rgb*//*() const*/
    type["ToVector3"] = static_cast<Vector3 (Urho3D::Color::*)() const>(&Urho3D::Color::ToVector3) ;
    /*Return RGBA as a four-dimensional vector. BIND_AS_ALIAS_get_rgba*//*() const*/
    type["ToVector4"] = static_cast<Vector4 (Urho3D::Color::*)() const>(&Urho3D::Color::ToVector4) ;
    /*Return sum of RGB components.*//*() const*/
    type["SumRGB"] = static_cast<float (Urho3D::Color::*)() const>(&Urho3D::Color::SumRGB) ;
    /*Return average value of the RGB channels.*//*() const*/
    type["Average"] = static_cast<float (Urho3D::Color::*)() const>(&Urho3D::Color::Average) ;
    /*Return the 'grayscale' representation of RGB values, as used by JPEG and PAL/NTSC among others.*//*() const*/
    type["Luma"] = static_cast<float (Urho3D::Color::*)() const>(&Urho3D::Color::Luma) ;
    /*Return the colorfulness relative to the brightness of a similarly illuminated white.*//*() const*/
    type["Chroma"] = static_cast<float (Urho3D::Color::*)() const>(&Urho3D::Color::Chroma) ;
    /*Return hue mapped to range [0, 1.0).*//*() const*/
    type["Hue"] = static_cast<float (Urho3D::Color::*)() const>(&Urho3D::Color::Hue) ;
    /*Return saturation as defined for HSL.*//*() const*/
    type["SaturationHSL"] = static_cast<float (Urho3D::Color::*)() const>(&Urho3D::Color::SaturationHSL) ;
    /*Return saturation as defined for HSV.*//*() const*/
    type["SaturationHSV"] = static_cast<float (Urho3D::Color::*)() const>(&Urho3D::Color::SaturationHSV) ;
    /*Return value as defined for HSV: largest value of the RGB components. Equivalent to calling  MinRGB().*//*() const*/
    type["Value"] = static_cast<float (Urho3D::Color::*)() const>(&Urho3D::Color::Value) ;
    /*Convert color from gamma to linear space.*//*() const*/
    type["GammaToLinear"] = static_cast<Color (Urho3D::Color::*)() const>(&Urho3D::Color::GammaToLinear) ;
    /*Convert color from linear to gamma space.*//*() const*/
    type["LinearToGamma"] = static_cast<Color (Urho3D::Color::*)() const>(&Urho3D::Color::LinearToGamma) ;
    /*Return lightness as defined for HSL: average of the largest and smallest values of the RGB components.*//*() const*/
    type["Lightness"] = static_cast<float (Urho3D::Color::*)() const>(&Urho3D::Color::Lightness) ;
    /*Return the largest value of the RGB components.*//*() const*/
    type["MaxRGB"] = static_cast<float (Urho3D::Color::*)() const>(&Urho3D::Color::MaxRGB) ;
    /*Return the smallest value of the RGB components.*//*() const*/
    type["MinRGB"] = static_cast<float (Urho3D::Color::*)() const>(&Urho3D::Color::MinRGB) ;
    /*Return range, defined as the difference between the greatest and least RGB component.*//*() const*/
    type["Range"] = static_cast<float (Urho3D::Color::*)() const>(&Urho3D::Color::Range) ;
    /*Return linear interpolation of this color with another color.*//*(const Color &rhs, float t) const*/
    type["Lerp"] = static_cast<Color (Urho3D::Color::*)(const  Color &, float) const>(&Urho3D::Color::Lerp) ;
    /*Return color with absolute components.*//*() const*/
    type["Abs"] = static_cast<Color (Urho3D::Color::*)() const>(&Urho3D::Color::Abs) ;
    /*Test for equality with another color with epsilon.*//*(const Color &rhs) const*/
    type["Equals"] = static_cast<bool (Urho3D::Color::*)(const  Color &) const>(&Urho3D::Color::Equals) ;
    /*Return as string.*//*() const*/
    type["__tostring"] = static_cast<String (Urho3D::Color::*)() const>(&Urho3D::Color::ToString) ;
    /*Return color packed to a 32-bit integer, with B component in the lowest 8 bits. Components are clamped to [0, 1] range.*//*() const*/
    type["ToUIntArgb"] = static_cast<unsigned (Urho3D::Color::*)() const>(&Urho3D::Color::ToUIntArgb) ;
    /*Return hash value for  HashSet &  HashMap.*//*() const*/
    type["ToHash"] = static_cast<unsigned (Urho3D::Color::*)() const>(&Urho3D::Color::ToHash) ;
    type["FromHSL"] = sol::overload(
        static_cast<void (Urho3D::Color::*)(float, float, float, float)>(&Urho3D::Color::FromHSL) ,
        [](Urho3D::Color& self, float h, float s, float l){ self.FromHSL(h, s, l); } );
    type["FromHSV"] = sol::overload(
        static_cast<void (Urho3D::Color::*)(float, float, float, float)>(&Urho3D::Color::FromHSV) ,
        [](Urho3D::Color& self, float h, float s, float v){ self.FromHSV(h, s, v); } );
    type["Bounds"] = sol::overload(
        static_cast<void (Urho3D::Color::*)(float *, float *, bool) const>(&Urho3D::Color::Bounds) ,
        [](Urho3D::Color& self, float * min, float * max){ self.Bounds(min, max); } );
    type["Clip"] = sol::overload(
        static_cast<void (Urho3D::Color::*)(bool)>(&Urho3D::Color::Clip) ,
        [](Urho3D::Color& self){ self.Clip(); } );
    type["Invert"] = sol::overload(
        static_cast<void (Urho3D::Color::*)(bool)>(&Urho3D::Color::Invert) ,
        [](Urho3D::Color& self){ self.Invert(); } );
    type["toVector3"] = sol::property(static_cast<Vector3 (Urho3D::Color::*)() const>(&Urho3D::Color::ToVector3) );
    type["toVector4"] = sol::property(static_cast<Vector4 (Urho3D::Color::*)() const>(&Urho3D::Color::ToVector4) );
    type["r_"] = &Urho3D::Color::r_;
    type["g_"] = &Urho3D::Color::g_;
    type["b_"] = &Urho3D::Color::b_;
    type["a_"] = &Urho3D::Color::a_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Color.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Color.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Color_ChannelMask(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Color::ChannelMask>( "ChannelMask"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["r_"] = &Urho3D::Color::ChannelMask::r_;
    type["g_"] = &Urho3D::Color::ChannelMask::g_;
    type["b_"] = &Urho3D::Color::ChannelMask::b_;
    type["a_"] = &Urho3D::Color::ChannelMask::a_;

}

