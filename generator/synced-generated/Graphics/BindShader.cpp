
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Shader.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Shader.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/ShaderVariation.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Shader(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Shader::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Shader::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Shader>((Urho3D::Shader*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Shader>( "Shader"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Shader>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::Shader::*)(Deserializer &)>(&Urho3D::Shader::BeginLoad) ;
    /*Finish resource loading. Always called from the main thread. Return true if successful.*//*() override*/
    type["EndLoad"] = static_cast<bool (Urho3D::Shader::*)()>(&Urho3D::Shader::EndLoad) ;
    /*Return either vertex or pixel shader source code.*//*(ShaderType type) const*/
    type["GetSourceCode"] = static_cast<const String& (Urho3D::Shader::*)(ShaderType) const>(&Urho3D::Shader::GetSourceCode) ;
    /*Return the latest timestamp of the shader code and its includes.*//*() const*/
    type["GetTimeStamp"] = static_cast<unsigned (Urho3D::Shader::*)() const>(&Urho3D::Shader::GetTimeStamp) ;
    type["GetVariation"] = sol::overload(
        [](Urho3D::Shader& self, ShaderType type, const String &defines){ return SharedPtr(self.GetVariation(type, defines)); },
        [](Urho3D::Shader& self, ShaderType type, const char *defines){ return SharedPtr(self.GetVariation(type, defines)); } );

}

