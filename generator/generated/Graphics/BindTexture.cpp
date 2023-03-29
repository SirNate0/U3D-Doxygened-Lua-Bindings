
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Texture.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Texture.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Texture.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Resource/XMLFile.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Texture(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Texture::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Texture::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Texture>((Urho3D::Texture*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Texture>( "Texture"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::ResourceWithMetadata,Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted,Urho3D::GPUObject>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Texture>(context);
        });

// Members

    /*Set number of requested mip levels. Needs to be called before setting size.The default value (0) allocates as many mip levels as necessary to reach 1x1 size. Set value 1 to disable mipmapping. Note that rendertargets need to regenerate mips dynamically after rendering, which may cost performance. Screen buffers and shadow maps allocated by  Renderer will have mipmaps disabled.*//*(unsigned levels)*/
    type["SetNumLevels"] = static_cast<void (Urho3D::Texture::*)(unsigned)>(&Urho3D::Texture::SetNumLevels) ;
    /*Set filtering mode. BIND_AS_PROPERTY*//*(TextureFilterMode mode)*/
    type["SetFilterMode"] = static_cast<void (Urho3D::Texture::*)(TextureFilterMode)>(&Urho3D::Texture::SetFilterMode) ;
    /*Set addressing mode by texture coordinate. BIND_AS_PROPERTY*//*(TextureCoordinate coord, TextureAddressMode mode)*/
    type["SetAddressMode"] = static_cast<void (Urho3D::Texture::*)(TextureCoordinate, TextureAddressMode)>(&Urho3D::Texture::SetAddressMode) ;
    /*Set texture max. anisotropy level. No effect if not using anisotropic filtering. Value 0 (default) uses the default setting from  Renderer. BIND_AS_PROPERTY*//*(unsigned level)*/
    type["SetAnisotropy"] = static_cast<void (Urho3D::Texture::*)(unsigned)>(&Urho3D::Texture::SetAnisotropy) ;
    /*Set shadow compare mode. Not used on Direct3D9.*//*(bool enable)*/
    type["SetShadowCompare"] = static_cast<void (Urho3D::Texture::*)(bool)>(&Urho3D::Texture::SetShadowCompare) ;
    /*Set border color for border addressing mode. BIND_AS_PROPERTY*//*(const Color &color)*/
    type["SetBorderColor"] = static_cast<void (Urho3D::Texture::*)(const  Color &)>(&Urho3D::Texture::SetBorderColor) ;
    /*Set sRGB sampling and writing mode. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetSRGB"] = static_cast<void (Urho3D::Texture::*)(bool)>(&Urho3D::Texture::SetSRGB) ;
    /*Set backup texture to use when rendering to this texture. BIND_AS_PROPERTY*//*(Texture *texture)*/
    type["SetBackupTexture"] = static_cast<void (Urho3D::Texture::*)(Texture *)>(&Urho3D::Texture::SetBackupTexture) ;
    /*Set mip levels to skip on a quality setting when loading. Ensures higher quality levels do not skip more. BIND_AS_PROPERTY*//*(MaterialQuality quality, int toSkip)*/
    type["SetMipsToSkip"] = static_cast<void (Urho3D::Texture::*)(MaterialQuality, int)>(&Urho3D::Texture::SetMipsToSkip) ;
    /*Return API-specific texture format. BIND_AS_PROPERTY*//*() const*/
    type["GetFormat"] = static_cast<unsigned (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetFormat) ;
    /*Return whether the texture format is compressed. BIND_AS_PROPERTY*//*() const*/
    type["IsCompressed"] = static_cast<bool (Urho3D::Texture::*)() const>(&Urho3D::Texture::IsCompressed) ;
    /*Return number of mip levels. BIND_AS_PROPERTY*//*() const*/
    type["GetLevels"] = static_cast<unsigned (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetLevels) ;
    /*Return width. BIND_AS_PROPERTY*//*() const*/
    type["GetWidth"] = static_cast<int (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetWidth) ;
    /*Return height. BIND_AS_PROPERTY*//*() const*/
    type["GetHeight"] = static_cast<int (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetHeight) ;
    /*Return depth.*//*() const*/
    type["GetDepth"] = static_cast<int (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetDepth) ;
    /*Return filtering mode. BIND_AS_PROPERTY*//*() const*/
    type["GetFilterMode"] = static_cast<TextureFilterMode (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetFilterMode) ;
    /*Return addressing mode by texture coordinate. BIND_AS_PROPERTY*//*(TextureCoordinate coord) const*/
    type["GetAddressMode"] = static_cast<TextureAddressMode (Urho3D::Texture::*)(TextureCoordinate) const>(&Urho3D::Texture::GetAddressMode) ;
    /*Return texture max. anisotropy level. Value 0 means to use the default value from  Renderer. BIND_AS_PROPERTY*//*() const*/
    type["GetAnisotropy"] = static_cast<unsigned (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetAnisotropy) ;
    /*Return whether shadow compare is enabled. Not used on Direct3D9.*//*() const*/
    type["GetShadowCompare"] = static_cast<bool (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetShadowCompare) ;
    /*Return border color. BIND_AS_PROPERTY*//*() const*/
    type["GetBorderColor"] = static_cast<const Color& (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetBorderColor) ;
    /*Return whether is using sRGB sampling and writing. BIND_AS_PROPERTY*//*() const*/
    type["GetSRGB"] = static_cast<bool (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetSRGB) ;
    /*Return texture multisampling level (1 = no multisampling). BIND_AS_PROPERTY*//*() const*/
    type["GetMultiSample"] = static_cast<int (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetMultiSample) ;
    /*Return texture multisampling autoresolve mode. When true, the texture is resolved before being sampled on SetTexture(). When false, the texture will not be resolved and must be read as individual samples in the shader. BIND_AS_PROPERTY*//*() const*/
    type["GetAutoResolve"] = static_cast<bool (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetAutoResolve) ;
    /*Return whether multisampled texture needs resolve. BIND_AS_PROPERTY*//*() const*/
    type["IsResolveDirty"] = static_cast<bool (Urho3D::Texture::*)() const>(&Urho3D::Texture::IsResolveDirty) ;
    /*Return whether rendertarget mipmap levels need regenration. BIND_AS_PROPERTY*//*() const*/
    type["GetLevelsDirty"] = static_cast<bool (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetLevelsDirty) ;
    /*Return backup texture. BIND_AS_PROPERTY*//*() const*/
    type["GetBackupTexture"] = [](Urho3D::Texture& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetBackupTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return mip levels to skip on a quality setting when loading. BIND_AS_PROPERTY*//*(MaterialQuality quality) const*/
    type["GetMipsToSkip"] = static_cast<int (Urho3D::Texture::*)(MaterialQuality) const>(&Urho3D::Texture::GetMipsToSkip) ;
    /*Return mip level width, or 0 if level does not exist. BIND_AS_PROPERTY*//*(unsigned level) const*/
    type["GetLevelWidth"] = static_cast<int (Urho3D::Texture::*)(unsigned) const>(&Urho3D::Texture::GetLevelWidth) ;
    /*Return mip level width, or 0 if level does not exist. BIND_AS_PROPERTY*//*(unsigned level) const*/
    type["GetLevelHeight"] = static_cast<int (Urho3D::Texture::*)(unsigned) const>(&Urho3D::Texture::GetLevelHeight) ;
    /*Return mip level depth, or 0 if level does not exist.*//*(unsigned level) const*/
    type["GetLevelDepth"] = static_cast<int (Urho3D::Texture::*)(unsigned) const>(&Urho3D::Texture::GetLevelDepth) ;
    /*Return texture usage type. BIND_AS_PROPERTY*//*() const*/
    type["GetUsage"] = static_cast<TextureUsage (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetUsage) ;
    /*Return data size in bytes for a pixel or block row.*//*(int width) const*/
    type["GetRowDataSize"] = static_cast<unsigned (Urho3D::Texture::*)(int) const>(&Urho3D::Texture::GetRowDataSize) ;
    /*Return number of image components required to receive pixel data from GetData(), or 0 for compressed images. BIND_AS_PROPERTY*//*() const*/
    type["GetComponents"] = static_cast<unsigned (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetComponents) ;
    /*Return whether the parameters are dirty.*//*() const*/
    type["GetParametersDirty"] = static_cast<bool (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetParametersDirty) ;
    /*Mark parameters dirty. Called by  Graphics.*//*()*/
    type["SetParametersDirty"] = static_cast<void (Urho3D::Texture::*)()>(&Urho3D::Texture::SetParametersDirty) ;
    /*Update dirty parameters to the texture object. Called by  Graphics when assigning the texture.*//*()*/
    type["UpdateParameters"] = static_cast<void (Urho3D::Texture::*)()>(&Urho3D::Texture::UpdateParameters) ;
    /*Return shader resource view. Only used on Direct3D11.*//*() const*/
    type["GetShaderResourceView"] = static_cast<void* (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetShaderResourceView) ;
    /*Return sampler state object. Only used on Direct3D11.*//*() const*/
    type["GetSampler"] = static_cast<void* (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetSampler) ;
    /*Return resolve texture. Only used on Direct3D11.*//*() const*/
    type["GetResolveTexture"] = static_cast<void* (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetResolveTexture) ;
    /*Return texture's target. Only used on OpenGL.*//*() const*/
    type["GetTarget"] = static_cast<unsigned (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetTarget) ;
#if 0 // INVALID: NoBind!
    /*Convert format to sRGB. Not used on Direct3D9. NO_BIND*//*(unsigned format)*/
    type["GetSRGBFormat"] = static_cast<unsigned (Urho3D::Texture::*)(unsigned)>(&Urho3D::Texture::GetSRGBFormat) ;
#endif
        
    /*Set or clear the need resolve flag. Called internally by  Graphics.*//*(bool enable)*/
    type["SetResolveDirty"] = static_cast<void (Urho3D::Texture::*)(bool)>(&Urho3D::Texture::SetResolveDirty) ;
    /*Set the mipmap levels dirty flag. Called internally by  Graphics.*//*()*/
    type["SetLevelsDirty"] = static_cast<void (Urho3D::Texture::*)()>(&Urho3D::Texture::SetLevelsDirty) ;
    /*Regenerate mipmap levels for a rendertarget after rendering and before sampling. Called internally by  Graphics. No-op on Direct3D9. On OpenGL the texture must have been bound to work properly.*//*()*/
    type["RegenerateLevels"] = static_cast<void (Urho3D::Texture::*)()>(&Urho3D::Texture::RegenerateLevels) ;
    type["GetDataSize"] = sol::overload(
        static_cast<unsigned (Urho3D::Texture::*)(int, int) const>(&Urho3D::Texture::GetDataSize) ,
        static_cast<unsigned (Urho3D::Texture::*)(int, int, int) const>(&Urho3D::Texture::GetDataSize)  );
    type["SetParameters"] = sol::overload(
        static_cast<void (Urho3D::Texture::*)(XMLFile *)>(&Urho3D::Texture::SetParameters) ,
        static_cast<void (Urho3D::Texture::*)(const  XMLElement &)>(&Urho3D::Texture::SetParameters)  );
    type["addressMode"] = sol::property(static_cast<TextureAddressMode (Urho3D::Texture::*)(TextureCoordinate) const>(&Urho3D::Texture::GetAddressMode) 
        , static_cast<void (Urho3D::Texture::*)(TextureCoordinate, TextureAddressMode)>(&Urho3D::Texture::SetAddressMode) );
    type["anisotropy"] = sol::property(static_cast<unsigned (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetAnisotropy) 
        , static_cast<void (Urho3D::Texture::*)(unsigned)>(&Urho3D::Texture::SetAnisotropy) );
    type["autoResolve"] = sol::property(static_cast<bool (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetAutoResolve) );
    type["backupTexture"] = sol::property([](Urho3D::Texture& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetBackupTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Texture::*)(Texture *)>(&Urho3D::Texture::SetBackupTexture) );
    type["borderColor"] = sol::property(static_cast<const Color& (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetBorderColor) 
        , static_cast<void (Urho3D::Texture::*)(const  Color &)>(&Urho3D::Texture::SetBorderColor) );
    type["components"] = sol::property(static_cast<unsigned (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetComponents) );
    type["compressed"] = sol::property(static_cast<bool (Urho3D::Texture::*)() const>(&Urho3D::Texture::IsCompressed) );
    type["filterMode"] = sol::property(static_cast<TextureFilterMode (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetFilterMode) 
        , static_cast<void (Urho3D::Texture::*)(TextureFilterMode)>(&Urho3D::Texture::SetFilterMode) );
    type["format"] = sol::property(static_cast<unsigned (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetFormat) );
    type["height"] = sol::property(static_cast<int (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetHeight) );
    type["levelHeight"] = sol::property(static_cast<int (Urho3D::Texture::*)(unsigned) const>(&Urho3D::Texture::GetLevelHeight) );
    type["levelWidth"] = sol::property(static_cast<int (Urho3D::Texture::*)(unsigned) const>(&Urho3D::Texture::GetLevelWidth) );
    type["levels"] = sol::property(static_cast<unsigned (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetLevels) );
    type["levelsDirty"] = sol::property(static_cast<bool (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetLevelsDirty) );
    type["mipsToSkip"] = sol::property(static_cast<int (Urho3D::Texture::*)(MaterialQuality) const>(&Urho3D::Texture::GetMipsToSkip) 
        , static_cast<void (Urho3D::Texture::*)(MaterialQuality, int)>(&Urho3D::Texture::SetMipsToSkip) );
    type["multiSample"] = sol::property(static_cast<int (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetMultiSample) );
    type["resolveDirty"] = sol::property(static_cast<bool (Urho3D::Texture::*)() const>(&Urho3D::Texture::IsResolveDirty) );
    type["srgb"] = sol::property(static_cast<bool (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetSRGB) 
        , static_cast<void (Urho3D::Texture::*)(bool)>(&Urho3D::Texture::SetSRGB) );
    type["usage"] = sol::property(static_cast<TextureUsage (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetUsage) );
    type["width"] = sol::property(static_cast<int (Urho3D::Texture::*)() const>(&Urho3D::Texture::GetWidth) );

}

