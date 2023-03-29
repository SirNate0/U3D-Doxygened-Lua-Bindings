
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/ShaderPrecache.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/ShaderPrecache.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Graphics.h>
#include <Urho3D/Graphics/ShaderVariation.h>
#include <Urho3D/IO/Deserializer.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ShaderPrecache(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ShaderPrecache::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ShaderPrecache::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ShaderPrecache>((Urho3D::ShaderPrecache*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ShaderPrecache>( "ShaderPrecache"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context, const String &fileName) { 
            return Urho3D::MakeShared<Urho3D::ShaderPrecache>(context, fileName);
        });

// Members

    /*Collect a shader combination. Called by  Graphics when shaders have been set.*//*(ShaderVariation *vs, ShaderVariation *ps)*/
    type["StoreShaders"] = static_cast<void (Urho3D::ShaderPrecache::*)(ShaderVariation *, ShaderVariation *)>(&Urho3D::ShaderPrecache::StoreShaders) ;

}

