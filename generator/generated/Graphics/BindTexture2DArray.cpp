
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Texture2DArray.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Texture2DArray.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/RenderSurface.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Resource/Image.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Texture2DArray(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Texture2DArray::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Texture2DArray::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Texture2DArray>((Urho3D::Texture2DArray*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Texture2DArray>( "Texture2DArray"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Texture,Urho3D::ResourceWithMetadata,Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted,Urho3D::GPUObject>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Texture2DArray>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::Texture2DArray::*)(Deserializer &)>(&Urho3D::Texture2DArray::BeginLoad) ;
    /*Finish resource loading. Always called from the main thread. Return true if successful.*//*() override*/
    type["EndLoad"] = static_cast<bool (Urho3D::Texture2DArray::*)()>(&Urho3D::Texture2DArray::EndLoad) ;
    /*Mark the GPU resource destroyed on context destruction.*//*() override*/
    type["OnDeviceLost"] = static_cast<void (Urho3D::Texture2DArray::*)()>(&Urho3D::Texture2DArray::OnDeviceLost) ;
    /*Recreate the GPU resource and restore data if applicable.*//*() override*/
    type["OnDeviceReset"] = static_cast<void (Urho3D::Texture2DArray::*)()>(&Urho3D::Texture2DArray::OnDeviceReset) ;
    /*Release the texture.*//*() override*/
    type["Release"] = static_cast<void (Urho3D::Texture2DArray::*)()>(&Urho3D::Texture2DArray::Release) ;
    /*Set the number of layers in the texture. To be used before SetData. BIND_AS_PROPERTY*//*(unsigned layers)*/
    type["SetLayers"] = static_cast<void (Urho3D::Texture2DArray::*)(unsigned)>(&Urho3D::Texture2DArray::SetLayers) ;
    /*Return number of layers in the texture. BIND_AS_PROPERTY*//*() const*/
    type["GetLayers"] = static_cast<unsigned (Urho3D::Texture2DArray::*)() const>(&Urho3D::Texture2DArray::GetLayers) ;
    /*Get data from a mip level. The destination buffer must be big enough. Return true if successful.*//*(unsigned layer, unsigned level, void *dest) const*/
    type["GetData"] = static_cast<bool (Urho3D::Texture2DArray::*)(unsigned, unsigned, void *) const>(&Urho3D::Texture2DArray::GetData) ;
    /*Return render surface. BIND_AS_PROPERTY*//*() const*/
    type["GetRenderSurface"] = [](Urho3D::Texture2DArray& self){ return SharedPtr(self.GetRenderSurface()); };
    type["SetSize"] = sol::overload(
        static_cast<bool (Urho3D::Texture2DArray::*)(unsigned, int, int, unsigned, TextureUsage)>(&Urho3D::Texture2DArray::SetSize) ,
        [](Urho3D::Texture2DArray& self, unsigned layers, int width, int height, unsigned format){ return self.SetSize(layers, width, height, format); } );
    type["SetData"] = sol::overload(
        static_cast<bool (Urho3D::Texture2DArray::*)(unsigned, unsigned, int, int, int, int, const void *)>(&Urho3D::Texture2DArray::SetData) ,
        static_cast<bool (Urho3D::Texture2DArray::*)(unsigned, Deserializer &)>(&Urho3D::Texture2DArray::SetData) ,
        static_cast<bool (Urho3D::Texture2DArray::*)(unsigned, Image *, bool)>(&Urho3D::Texture2DArray::SetData) ,
        [](Urho3D::Texture2DArray& self, unsigned layer, Image * image){ return self.SetData(layer, image); } );
    type["layers"] = sol::property(static_cast<unsigned (Urho3D::Texture2DArray::*)() const>(&Urho3D::Texture2DArray::GetLayers) 
        , static_cast<void (Urho3D::Texture2DArray::*)(unsigned)>(&Urho3D::Texture2DArray::SetLayers) );
    type["renderSurface"] = sol::property([](Urho3D::Texture2DArray& self){ return SharedPtr(self.GetRenderSurface()); });

}

