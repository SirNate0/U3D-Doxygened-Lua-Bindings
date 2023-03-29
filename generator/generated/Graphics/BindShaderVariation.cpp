
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/ShaderVariation.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/ShaderVariation.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/Shader.h>
#include <Urho3D/Graphics/ShaderVariation.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ShaderVariation(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ShaderVariation>( "ShaderVariation"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted,Urho3D::GPUObject>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Shader *owner, ShaderType type) { 
            return Urho3D::MakeShared<Urho3D::ShaderVariation>(owner, type);
        });

// Members

    /*Mark the GPU resource destroyed on graphics context destruction.*//*() override*/
    type["OnDeviceLost"] = static_cast<void (Urho3D::ShaderVariation::*)()>(&Urho3D::ShaderVariation::OnDeviceLost) ;
    /*Release the shader.*//*() override*/
    type["Release"] = static_cast<void (Urho3D::ShaderVariation::*)()>(&Urho3D::ShaderVariation::Release) ;
    /*Compile the shader. Return true if successful.*//*()*/
    type["Create"] = static_cast<bool (Urho3D::ShaderVariation::*)()>(&Urho3D::ShaderVariation::Create) ;
    /*Set name.*//*(const String &name)*/
    type["SetName"] = static_cast<void (Urho3D::ShaderVariation::*)(const  String &)>(&Urho3D::ShaderVariation::SetName) ;
    /*Set defines.*//*(const String &defines)*/
    type["SetDefines"] = static_cast<void (Urho3D::ShaderVariation::*)(const  String &)>(&Urho3D::ShaderVariation::SetDefines) ;
    /*Return the owner resource.*//*() const*/
    type["GetOwner"] = [](Urho3D::ShaderVariation& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOwner());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return shader type.*//*() const*/
    type["GetShaderType"] = static_cast<ShaderType (Urho3D::ShaderVariation::*)() const>(&Urho3D::ShaderVariation::GetShaderType) ;
    /*Return shader name.*//*() const*/
    type["GetName"] = static_cast<const String& (Urho3D::ShaderVariation::*)() const>(&Urho3D::ShaderVariation::GetName) ;
    /*Return full shader name.*//*() const*/
    type["GetFullName"] = static_cast<String (Urho3D::ShaderVariation::*)() const>(&Urho3D::ShaderVariation::GetFullName) ;
    /*Return whether uses a parameter. Not applicable on OpenGL, where this information is contained in ShaderProgram instead.*//*(StringHash param) const*/
    type["HasParameter"] = static_cast<bool (Urho3D::ShaderVariation::*)(StringHash) const>(&Urho3D::ShaderVariation::HasParameter) ;
    /*Return whether uses a texture unit (only for pixel shaders). Not applicable on OpenGL, where this information is contained in ShaderProgram instead.*//*(TextureUnit unit) const*/
    type["HasTextureUnit"] = static_cast<bool (Urho3D::ShaderVariation::*)(TextureUnit) const>(&Urho3D::ShaderVariation::HasTextureUnit) ;
    /*Return all parameter definitions. Not applicable on OpenGL, where this information is contained in ShaderProgram instead.*//*() const*/
    type["GetParameters"] = static_cast<const HashMap<StringHash,ShaderParameter>& (Urho3D::ShaderVariation::*)() const>(&Urho3D::ShaderVariation::GetParameters) ;
    /*Return vertex element hash.*//*() const*/
    type["GetElementHash"] = static_cast<unsigned long long (Urho3D::ShaderVariation::*)() const>(&Urho3D::ShaderVariation::GetElementHash) ;
    /*Return shader bytecode. Stored persistently on Direct3D11 only.*//*() const*/
    type["GetByteCode"] = static_cast<const PODVector<unsigned char>& (Urho3D::ShaderVariation::*)() const>(&Urho3D::ShaderVariation::GetByteCode) ;
    /*Return defines.*//*() const*/
    type["GetDefines"] = static_cast<const String& (Urho3D::ShaderVariation::*)() const>(&Urho3D::ShaderVariation::GetDefines) ;
    /*Return compile error/warning string.*//*() const*/
    type["GetCompilerOutput"] = static_cast<const String& (Urho3D::ShaderVariation::*)() const>(&Urho3D::ShaderVariation::GetCompilerOutput) ;
    /*Return constant buffer data sizes.*//*() const*/
    type["GetConstantBufferSizes"] = static_cast<const unsigned* (Urho3D::ShaderVariation::*)() const>(&Urho3D::ShaderVariation::GetConstantBufferSizes) ;
    /*Return defines with the CLIPPLANE define appended. Used internally on Direct3D11 only, will be empty on other APIs.*//*()*/
    type["GetDefinesClipPlane"] = static_cast<const String& (Urho3D::ShaderVariation::*)()>(&Urho3D::ShaderVariation::GetDefinesClipPlane) ;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/ShaderVariation.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/ShaderVariation.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Graphics/ConstantBuffer.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ShaderParameter(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ShaderParameter>( "ShaderParameter"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::ShaderParameter(),
        Urho3D::ShaderParameter(const  String &, unsigned, int),
        Urho3D::ShaderParameter(ShaderType, const  String &, unsigned, unsigned, unsigned),
        Urho3D::ShaderParameter(ShaderType, const  String &, unsigned, unsigned)>();

// Members

    type["type_"] = &Urho3D::ShaderParameter::type_;
    type["name_"] = &Urho3D::ShaderParameter::name_;
    type["offset_"] = &Urho3D::ShaderParameter::offset_;
    type["location_"] = &Urho3D::ShaderParameter::location_;
    type["register_"] = &Urho3D::ShaderParameter::register_;
//    type["@5"] = &Urho3D::ShaderParameter::@5;
    type["size_"] = &Urho3D::ShaderParameter::size_;
    type["glType_"] = &Urho3D::ShaderParameter::glType_;
    type["regCount_"] = &Urho3D::ShaderParameter::regCount_;
//    type["@7"] = &Urho3D::ShaderParameter::@7;
    type["buffer_"] = &Urho3D::ShaderParameter::buffer_;
    type["bufferPtr_"] = &Urho3D::ShaderParameter::bufferPtr_;

}

