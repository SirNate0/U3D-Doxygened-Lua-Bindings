
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Resource/Image.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Resource/Image.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Resource/Image.h>
#include <Urho3D/Resource/Resource.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Image(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Image::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Image::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Image>((Urho3D::Image*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Image>( "Image"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Image>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::Image::*)(Deserializer &)>(&Urho3D::Image::BeginLoad) ;
    /*Save the image to a stream. Regardless of original format, the image is saved as png. Compressed image data is not supported. Return true if successful.*//*(Serializer &dest) const override*/
    type["Save"] = static_cast<bool (Urho3D::Image::*)(Serializer &) const>(&Urho3D::Image::Save) ;
    /*Save the image to a file. Format of the image is determined by file extension. JPG is saved with maximum quality.*//*(const String &fileName) const override*/
    type["SaveFile"] = static_cast<bool (Urho3D::Image::*)(const  String &) const>(&Urho3D::Image::SaveFile) ;
    /*Set new image data.*//*(const unsigned char *pixelData)*/
    type["SetData"] = static_cast<void (Urho3D::Image::*)(const unsigned char *)>(&Urho3D::Image::SetData) ;
    /*Load as color LUT. Return true if successful.*//*(Deserializer &source)*/
    type["LoadColorLUT"] = static_cast<bool (Urho3D::Image::*)(Deserializer &)>(&Urho3D::Image::LoadColorLUT) ;
    /*Flip image horizontally. Return true if successful.*//*()*/
    type["FlipHorizontal"] = static_cast<bool (Urho3D::Image::*)()>(&Urho3D::Image::FlipHorizontal) ;
    /*Flip image vertically. Return true if successful.*//*()*/
    type["FlipVertical"] = static_cast<bool (Urho3D::Image::*)()>(&Urho3D::Image::FlipVertical) ;
    /*Resize image by bilinear resampling. Return true if successful.*//*(int width, int height)*/
    type["Resize"] = static_cast<bool (Urho3D::Image::*)(int, int)>(&Urho3D::Image::Resize) ;
    /*Clear the image with a color.*//*(const Color &color)*/
    type["Clear"] = static_cast<void (Urho3D::Image::*)(const  Color &)>(&Urho3D::Image::Clear) ;
    /*Clear the image with an integer color. R component is in the 8 lowest bits.*//*(unsigned uintColor)*/
    type["ClearInt"] = static_cast<void (Urho3D::Image::*)(unsigned)>(&Urho3D::Image::ClearInt) ;
    /*Save in BMP format. Return true if successful.*//*(const String &fileName) const*/
    type["SaveBMP"] = static_cast<bool (Urho3D::Image::*)(const  String &) const>(&Urho3D::Image::SaveBMP) ;
    /*Save in PNG format. Return true if successful.*//*(const String &fileName) const*/
    type["SavePNG"] = static_cast<bool (Urho3D::Image::*)(const  String &) const>(&Urho3D::Image::SavePNG) ;
    /*Save in TGA format. Return true if successful.*//*(const String &fileName) const*/
    type["SaveTGA"] = static_cast<bool (Urho3D::Image::*)(const  String &) const>(&Urho3D::Image::SaveTGA) ;
    /*Save in JPG format with specified quality. Return true if successful.*//*(const String &fileName, int quality) const*/
    type["SaveJPG"] = static_cast<bool (Urho3D::Image::*)(const  String &, int) const>(&Urho3D::Image::SaveJPG) ;
    /*Save in DDS format. Only uncompressed RGBA images are supported. Return true if successful.*//*(const String &fileName) const*/
    type["SaveDDS"] = static_cast<bool (Urho3D::Image::*)(const  String &) const>(&Urho3D::Image::SaveDDS) ;
    /*Whether this texture is detected as a cubemap, only relevant for DDS. BIND_AS_PROPERTY*//*() const*/
    type["IsCubemap"] = static_cast<bool (Urho3D::Image::*)() const>(&Urho3D::Image::IsCubemap) ;
    /*Whether this texture has been detected as a volume, only relevant for DDS. BIND_AS_PROPERTY*//*() const*/
    type["IsArray"] = static_cast<bool (Urho3D::Image::*)() const>(&Urho3D::Image::IsArray) ;
    /*Whether this texture is in sRGB, only relevant for DDS. BIND_AS_PROPERTY*//*() const*/
    type["IsSRGB"] = static_cast<bool (Urho3D::Image::*)() const>(&Urho3D::Image::IsSRGB) ;
    /*Return a bilinearly sampled 2D pixel color. X and Y have the range 0-1.*//*(float x, float y) const*/
    type["GetPixelBilinear"] = static_cast<Color (Urho3D::Image::*)(float, float) const>(&Urho3D::Image::GetPixelBilinear) ;
    /*Return a trilinearly sampled 3D pixel color. X, Y and Z have the range 0-1.*//*(float x, float y, float z) const*/
    type["GetPixelTrilinear"] = static_cast<Color (Urho3D::Image::*)(float, float, float) const>(&Urho3D::Image::GetPixelTrilinear) ;
    /*Return width. BIND_AS_PROPERTY*//*() const*/
    type["GetWidth"] = static_cast<int (Urho3D::Image::*)() const>(&Urho3D::Image::GetWidth) ;
    /*Return height. BIND_AS_PROPERTY*//*() const*/
    type["GetHeight"] = static_cast<int (Urho3D::Image::*)() const>(&Urho3D::Image::GetHeight) ;
    /*Return depth. BIND_AS_PROPERTY*//*() const*/
    type["GetDepth"] = static_cast<int (Urho3D::Image::*)() const>(&Urho3D::Image::GetDepth) ;
    /*Return number of color components. BIND_AS_PROPERTY*//*() const*/
    type["GetComponents"] = static_cast<unsigned (Urho3D::Image::*)() const>(&Urho3D::Image::GetComponents) ;
    /*Return pixel data.*//*() const*/
    type["GetData"] = static_cast<unsigned char* (Urho3D::Image::*)() const>(&Urho3D::Image::GetData) ;
    /*Return whether is compressed. BIND_AS_PROPERTY*//*() const*/
    type["IsCompressed"] = static_cast<bool (Urho3D::Image::*)() const>(&Urho3D::Image::IsCompressed) ;
    /*Return compressed format. BIND_AS_PROPERTY*//*() const*/
    type["GetCompressedFormat"] = static_cast<CompressedFormat (Urho3D::Image::*)() const>(&Urho3D::Image::GetCompressedFormat) ;
    /*Return number of compressed mip levels. Returns 0 if the image is has not been loaded from a source file containing multiple mip levels. BIND_AS_PROPERTY*//*() const*/
    type["GetNumCompressedLevels"] = static_cast<unsigned (Urho3D::Image::*)() const>(&Urho3D::Image::GetNumCompressedLevels) ;
    /*Return next mip level by bilinear filtering. Note that if the image is already 1x1x1, will keep returning an image of that size.*//*() const*/
    type["GetNextLevel"] = static_cast<SharedPtr<Image> (Urho3D::Image::*)() const>(&Urho3D::Image::GetNextLevel) ;
    /*Return the next sibling image of an array or cubemap.*//*() const*/
    type["GetNextSibling"] = static_cast<SharedPtr<Image> (Urho3D::Image::*)() const>(&Urho3D::Image::GetNextSibling) ;
    /*Return image converted to 4-component (RGBA) to circumvent modern rendering API's not supporting e.g. the luminance-alpha format.*//*() const*/
    type["ConvertToRGBA"] = static_cast<SharedPtr<Image> (Urho3D::Image::*)() const>(&Urho3D::Image::ConvertToRGBA) ;
    /*Return a compressed mip level.*//*(unsigned index) const*/
    type["GetCompressedLevel"] = static_cast<CompressedLevel (Urho3D::Image::*)(unsigned) const>(&Urho3D::Image::GetCompressedLevel) ;
    /*Return decompressed image data in RGBA format.*//*() const*/
    type["GetDecompressedImage"] = static_cast<SharedPtr<Image> (Urho3D::Image::*)() const>(&Urho3D::Image::GetDecompressedImage) ;
    /*Return subimage from the image by the defined rect or null if failed. 3D images are not supported. You must free the subimage yourself.*//*(const IntRect &rect) const*/
    type["GetSubimage"] = [](Urho3D::Image& self, const IntRect &rect, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSubimage(rect));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Precalculate the mip levels. Used by asynchronous texture loading.*//*()*/
    type["PrecalculateLevels"] = static_cast<void (Urho3D::Image::*)()>(&Urho3D::Image::PrecalculateLevels) ;
    /*Whether this texture has an alpha channel. BIND_AS_PROPERTY*//*() const*/
    type["HasAlphaChannel"] = static_cast<bool (Urho3D::Image::*)() const>(&Urho3D::Image::HasAlphaChannel) ;
    /*Copy contents of the image into the defined rect, scaling if necessary. This image should already be large enough to include the rect. Compressed and 3D images are not supported.*//*(const Image *image, const IntRect &rect)*/
    type["SetSubimage"] = static_cast<bool (Urho3D::Image::*)(const  Image *, const  IntRect &)>(&Urho3D::Image::SetSubimage) ;
    /*Clean up the mip levels.*//*()*/
    type["CleanupLevels"] = static_cast<void (Urho3D::Image::*)()>(&Urho3D::Image::CleanupLevels) ;
    type["SetSize"] = sol::overload(
        static_cast<bool (Urho3D::Image::*)(int, int, unsigned)>(&Urho3D::Image::SetSize) ,
        static_cast<bool (Urho3D::Image::*)(int, int, int, unsigned)>(&Urho3D::Image::SetSize)  );
    type["SetPixel"] = sol::overload(
        static_cast<void (Urho3D::Image::*)(int, int, const  Color &)>(&Urho3D::Image::SetPixel) ,
        static_cast<void (Urho3D::Image::*)(int, int, int, const  Color &)>(&Urho3D::Image::SetPixel)  );
    type["SetPixelInt"] = sol::overload(
        static_cast<void (Urho3D::Image::*)(int, int, unsigned)>(&Urho3D::Image::SetPixelInt) ,
        static_cast<void (Urho3D::Image::*)(int, int, int, unsigned)>(&Urho3D::Image::SetPixelInt)  );
    type["SaveWEBP"] = sol::overload(
        static_cast<bool (Urho3D::Image::*)(const  String &, float) const>(&Urho3D::Image::SaveWEBP) ,
        [](Urho3D::Image& self, const  String & fileName){ return self.SaveWEBP(fileName); } );
    type["GetPixel"] = sol::overload(
        static_cast<Color (Urho3D::Image::*)(int, int) const>(&Urho3D::Image::GetPixel) ,
        static_cast<Color (Urho3D::Image::*)(int, int, int) const>(&Urho3D::Image::GetPixel)  );
    type["GetPixelInt"] = sol::overload(
        static_cast<unsigned (Urho3D::Image::*)(int, int) const>(&Urho3D::Image::GetPixelInt) ,
        static_cast<unsigned (Urho3D::Image::*)(int, int, int) const>(&Urho3D::Image::GetPixelInt)  );
# if 0 // SKIPPED
    type["GetSDLSurface"] = sol::overload(
        static_cast<SDL_Surface* (Urho3D::Image::*)(const  IntRect &) const>(&Urho3D::Image::GetSDLSurface) ,
        [](Urho3D::Image& self){ return self.GetSDLSurface(); } );
# endif
    type["GetLevels"] = sol::overload(
        static_cast<void (Urho3D::Image::*)(PODVector<  Image * > &)>(&Urho3D::Image::GetLevels) ,
        static_cast<void (Urho3D::Image::*)(PODVector< const  Image * > &) const>(&Urho3D::Image::GetLevels)  );
    type["array"] = sol::property(static_cast<bool (Urho3D::Image::*)() const>(&Urho3D::Image::IsArray) );
    type["components"] = sol::property(static_cast<unsigned (Urho3D::Image::*)() const>(&Urho3D::Image::GetComponents) );
    type["compressed"] = sol::property(static_cast<bool (Urho3D::Image::*)() const>(&Urho3D::Image::IsCompressed) );
    type["compressedFormat"] = sol::property(static_cast<CompressedFormat (Urho3D::Image::*)() const>(&Urho3D::Image::GetCompressedFormat) );
    type["cubemap"] = sol::property(static_cast<bool (Urho3D::Image::*)() const>(&Urho3D::Image::IsCubemap) );
    type["depth"] = sol::property(static_cast<int (Urho3D::Image::*)() const>(&Urho3D::Image::GetDepth) );
    type["hasAlphaChannel"] = sol::property(static_cast<bool (Urho3D::Image::*)() const>(&Urho3D::Image::HasAlphaChannel) );
    type["height"] = sol::property(static_cast<int (Urho3D::Image::*)() const>(&Urho3D::Image::GetHeight) );
    type["numCompressedLevels"] = sol::property(static_cast<unsigned (Urho3D::Image::*)() const>(&Urho3D::Image::GetNumCompressedLevels) );
    type["srgb"] = sol::property(static_cast<bool (Urho3D::Image::*)() const>(&Urho3D::Image::IsSRGB) );
    type["width"] = sol::property(static_cast<int (Urho3D::Image::*)() const>(&Urho3D::Image::GetWidth) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Resource/Image.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Resource/Image.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Resource/Resource.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CompressedLevel(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::CompressedLevel>( "CompressedLevel"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    /*Decompress to RGBA. The destination buffer required is width * height * 4 bytes. Return true if successful.*//*(unsigned char *dest) const*/
    type["Decompress"] = static_cast<bool (Urho3D::CompressedLevel::*)(unsigned char *) const>(&Urho3D::CompressedLevel::Decompress) ;
    type["data_"] = &Urho3D::CompressedLevel::data_;
    type["format_"] = &Urho3D::CompressedLevel::format_;
    type["width_"] = &Urho3D::CompressedLevel::width_;
    type["height_"] = &Urho3D::CompressedLevel::height_;
    type["depth_"] = &Urho3D::CompressedLevel::depth_;
    type["blockSize_"] = &Urho3D::CompressedLevel::blockSize_;
    type["dataSize_"] = &Urho3D::CompressedLevel::dataSize_;
    type["rowSize_"] = &Urho3D::CompressedLevel::rowSize_;
    type["rows_"] = &Urho3D::CompressedLevel::rows_;

}

