
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Texture2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Texture2D.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/RenderSurface.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Resource/Image.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Texture2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Texture2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Texture2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Texture2D>((Urho3D::Texture2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Texture2D>( "Texture2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Texture,Urho3D::ResourceWithMetadata,Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted,Urho3D::GPUObject>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Texture2D>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::Texture2D::*)(Deserializer &)>(&Urho3D::Texture2D::BeginLoad) ;
    /*Finish resource loading. Always called from the main thread. Return true if successful.*//*() override*/
    type["EndLoad"] = static_cast<bool (Urho3D::Texture2D::*)()>(&Urho3D::Texture2D::EndLoad) ;
    /*Mark the GPU resource destroyed on context destruction.*//*() override*/
    type["OnDeviceLost"] = static_cast<void (Urho3D::Texture2D::*)()>(&Urho3D::Texture2D::OnDeviceLost) ;
    /*Recreate the GPU resource and restore data if applicable.*//*() override*/
    type["OnDeviceReset"] = static_cast<void (Urho3D::Texture2D::*)()>(&Urho3D::Texture2D::OnDeviceReset) ;
    /*Release the texture.*//*() override*/
    type["Release"] = static_cast<void (Urho3D::Texture2D::*)()>(&Urho3D::Texture2D::Release) ;
    /*Get data from a mip level. The destination buffer must be big enough. Return true if successful.*//*(unsigned level, void *dest) const*/
    type["GetData"] = static_cast<bool (Urho3D::Texture2D::*)(unsigned, void *) const>(&Urho3D::Texture2D::GetData) ;
    /*Return render surface. BIND_AS_PROPERTY*//*() const*/
    type["GetRenderSurface"] = [](Urho3D::Texture2D& self){ return SharedPtr(self.GetRenderSurface()); };
    type["SetSize"] = sol::overload(
        static_cast<bool (Urho3D::Texture2D::*)(int, int, unsigned, TextureUsage, int, bool)>(&Urho3D::Texture2D::SetSize) ,
        [](Urho3D::Texture2D& self, int width, int height, unsigned format, TextureUsage usage, int multiSample){ return self.SetSize(width, height, format, usage, multiSample); },
        [](Urho3D::Texture2D& self, int width, int height, unsigned format, TextureUsage usage){ return self.SetSize(width, height, format, usage); },
        [](Urho3D::Texture2D& self, int width, int height, unsigned format){ return self.SetSize(width, height, format); } );
    type["SetData"] = sol::overload(
        static_cast<bool (Urho3D::Texture2D::*)(unsigned, int, int, int, int, const void *)>(&Urho3D::Texture2D::SetData) ,
        static_cast<bool (Urho3D::Texture2D::*)(Image *, bool)>(&Urho3D::Texture2D::SetData) ,
        [](Urho3D::Texture2D& self, Image * image){ return self.SetData(image); } );
    type["GetImage"] = sol::overload(
        static_cast<bool (Urho3D::Texture2D::*)(Image &) const>(&Urho3D::Texture2D::GetImage) ,
        static_cast<SharedPtr<Image> (Urho3D::Texture2D::*)() const>(&Urho3D::Texture2D::GetImage)  );
    type["renderSurface"] = sol::property([](Urho3D::Texture2D& self){ return SharedPtr(self.GetRenderSurface()); });

}

