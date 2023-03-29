
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/TextureCube.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/TextureCube.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/RenderSurface.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Resource/Image.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_TextureCube(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::TextureCube::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::TextureCube::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::TextureCube>((Urho3D::TextureCube*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::TextureCube>( "TextureCube"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Texture,Urho3D::ResourceWithMetadata,Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted,Urho3D::GPUObject>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::TextureCube>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::TextureCube::*)(Deserializer &)>(&Urho3D::TextureCube::BeginLoad) ;
    /*Finish resource loading. Always called from the main thread. Return true if successful.*//*() override*/
    type["EndLoad"] = static_cast<bool (Urho3D::TextureCube::*)()>(&Urho3D::TextureCube::EndLoad) ;
    /*Mark the GPU resource destroyed on context destruction.*//*() override*/
    type["OnDeviceLost"] = static_cast<void (Urho3D::TextureCube::*)()>(&Urho3D::TextureCube::OnDeviceLost) ;
    /*Recreate the GPU resource and restore data if applicable.*//*() override*/
    type["OnDeviceReset"] = static_cast<void (Urho3D::TextureCube::*)()>(&Urho3D::TextureCube::OnDeviceReset) ;
    /*Release the texture.*//*() override*/
    type["Release"] = static_cast<void (Urho3D::TextureCube::*)()>(&Urho3D::TextureCube::Release) ;
    /*Get data from a face's mip level. The destination buffer must be big enough. Return true if successful.*//*(CubeMapFace face, unsigned level, void *dest) const*/
    type["GetData"] = static_cast<bool (Urho3D::TextureCube::*)(CubeMapFace, unsigned, void *) const>(&Urho3D::TextureCube::GetData) ;
    /*Get image data from a face's zero mip level. Only RGB and RGBA textures are supported.*//*(CubeMapFace face) const*/
    type["GetImage"] = static_cast<SharedPtr<Image> (Urho3D::TextureCube::*)(CubeMapFace) const>(&Urho3D::TextureCube::GetImage) ;
    /*Return render surface for one face. BIND_AS_ALIAS_get_renderSurfaces*//*(CubeMapFace face) const*/
    type["GetRenderSurface"] = [](Urho3D::TextureCube& self, CubeMapFace face){ return SharedPtr(self.GetRenderSurface(face)); };
    type["SetSize"] = sol::overload(
        static_cast<bool (Urho3D::TextureCube::*)(int, unsigned, TextureUsage, int)>(&Urho3D::TextureCube::SetSize) ,
        [](Urho3D::TextureCube& self, int size, unsigned format, TextureUsage usage){ return self.SetSize(size, format, usage); },
        [](Urho3D::TextureCube& self, int size, unsigned format){ return self.SetSize(size, format); } );
    type["SetData"] = sol::overload(
        static_cast<bool (Urho3D::TextureCube::*)(CubeMapFace, unsigned, int, int, int, int, const void *)>(&Urho3D::TextureCube::SetData) ,
        static_cast<bool (Urho3D::TextureCube::*)(CubeMapFace, Deserializer &)>(&Urho3D::TextureCube::SetData) ,
        static_cast<bool (Urho3D::TextureCube::*)(CubeMapFace, Image *, bool)>(&Urho3D::TextureCube::SetData) ,
        [](Urho3D::TextureCube& self, CubeMapFace face, Image * image){ return self.SetData(face, image); } );
    type["renderSurface"] = sol::property([](Urho3D::TextureCube& self, CubeMapFace face){ return SharedPtr(self.GetRenderSurface(face)); });

}

