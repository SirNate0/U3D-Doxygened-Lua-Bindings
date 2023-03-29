
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Material.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Light.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/Technique.h>
#include <Urho3D/Graphics/Texture.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Resource/JSONValue.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Scene/Scene.h>
#include <Urho3D/Scene/ValueAnimation.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Material(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Material::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Material::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Material>((Urho3D::Material*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Material>( "Material"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Material>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::Material::*)(Deserializer &)>(&Urho3D::Material::BeginLoad) ;
    /*Finish resource loading. Always called from the main thread. Return true if successful.*//*() override*/
    type["EndLoad"] = static_cast<bool (Urho3D::Material::*)()>(&Urho3D::Material::EndLoad) ;
    /*Set number of techniques. BIND_AS_PROPERTY*//*(unsigned num)*/
    type["SetNumTechniques"] = static_cast<void (Urho3D::Material::*)(unsigned)>(&Urho3D::Material::SetNumTechniques) ;
    /*Set additional vertex shader defines. Separate multiple defines with spaces. Setting defines at the material level causes technique(s) to be cloned as necessary. BIND_AS_PROPERTY*//*(const String &defines)*/
    type["SetVertexShaderDefines"] = static_cast<void (Urho3D::Material::*)(const  String &)>(&Urho3D::Material::SetVertexShaderDefines) ;
    /*Set additional pixel shader defines. Separate multiple defines with spaces. Setting defines at the material level causes technique(s) to be cloned as necessary. BIND_AS_PROPERTY*//*(const String &defines)*/
    type["SetPixelShaderDefines"] = static_cast<void (Urho3D::Material::*)(const  String &)>(&Urho3D::Material::SetPixelShaderDefines) ;
    /*Set shader parameter. BIND_AS_ALIAS_set_shaderParameters*//*(const String &name, const Variant &value)*/
    type["SetShaderParameter"] = static_cast<void (Urho3D::Material::*)(const  String &, const  Variant &)>(&Urho3D::Material::SetShaderParameter) ;
    /*Set shader parameter animation wrap mode.*//*(const String &name, WrapMode wrapMode)*/
    type["SetShaderParameterAnimationWrapMode"] = static_cast<void (Urho3D::Material::*)(const  String &, WrapMode)>(&Urho3D::Material::SetShaderParameterAnimationWrapMode) ;
    /*Set shader parameter animation speed.*//*(const String &name, float speed)*/
    type["SetShaderParameterAnimationSpeed"] = static_cast<void (Urho3D::Material::*)(const  String &, float)>(&Urho3D::Material::SetShaderParameterAnimationSpeed) ;
    /*Set texture. BIND_AS_ALIAS_set_textures*//*(TextureUnit unit, Texture *texture)*/
    type["SetTexture"] = static_cast<void (Urho3D::Material::*)(TextureUnit, Texture *)>(&Urho3D::Material::SetTexture) ;
    /*Set culling mode. BIND_AS_PROPERTY*//*(CullMode mode)*/
    type["SetCullMode"] = static_cast<void (Urho3D::Material::*)(CullMode)>(&Urho3D::Material::SetCullMode) ;
    /*Set culling mode for shadows. BIND_AS_PROPERTY*//*(CullMode mode)*/
    type["SetShadowCullMode"] = static_cast<void (Urho3D::Material::*)(CullMode)>(&Urho3D::Material::SetShadowCullMode) ;
    /*Set polygon fill mode. Interacts with the camera's fill mode setting so that the "least filled" mode will be used. BIND_AS_PROPERTY*//*(FillMode mode)*/
    type["SetFillMode"] = static_cast<void (Urho3D::Material::*)(FillMode)>(&Urho3D::Material::SetFillMode) ;
    /*Set depth bias parameters for depth write and compare. Note that the normal offset parameter is not used and will not be saved, as it affects only shadow map sampling during light rendering. BIND_AS_PROPERTY*//*(const BiasParameters &parameters)*/
    type["SetDepthBias"] = static_cast<void (Urho3D::Material::*)(const  BiasParameters &)>(&Urho3D::Material::SetDepthBias) ;
    /*Set alpha-to-coverage mode on all passes. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetAlphaToCoverage"] = static_cast<void (Urho3D::Material::*)(bool)>(&Urho3D::Material::SetAlphaToCoverage) ;
    /*Set line antialiasing on/off. Has effect only on models that consist of line lists. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetLineAntiAlias"] = static_cast<void (Urho3D::Material::*)(bool)>(&Urho3D::Material::SetLineAntiAlias) ;
    /*Set 8-bit render order within pass. Default 128. Lower values will render earlier and higher values later, taking precedence over e.g. state and distance sorting. BIND_AS_PROPERTY*//*(unsigned char order)*/
    type["SetRenderOrder"] = static_cast<void (Urho3D::Material::*)(unsigned char)>(&Urho3D::Material::SetRenderOrder) ;
    /*Set whether to use in occlusion rendering. Default true. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetOcclusion"] = static_cast<void (Urho3D::Material::*)(bool)>(&Urho3D::Material::SetOcclusion) ;
    /*Associate the material with a scene to ensure that shader parameter animation happens in sync with scene update, respecting the scene time scale. If no scene is set, the global update events will be used. BIND_AS_PROPERTY*//*(Scene *scene)*/
    type["SetScene"] = static_cast<void (Urho3D::Material::*)(Scene *)>(&Urho3D::Material::SetScene) ;
    /*Remove shader parameter.*//*(const String &name)*/
    type["RemoveShaderParameter"] = static_cast<void (Urho3D::Material::*)(const  String &)>(&Urho3D::Material::RemoveShaderParameter) ;
    /*Reset all shader pointers.*//*()*/
    type["ReleaseShaders"] = static_cast<void (Urho3D::Material::*)()>(&Urho3D::Material::ReleaseShaders) ;
    /*Ensure that material techniques are listed in correct order.*//*()*/
    type["SortTechniques"] = static_cast<void (Urho3D::Material::*)()>(&Urho3D::Material::SortTechniques) ;
    /*Mark material for auxiliary view rendering.*//*(unsigned frameNumber)*/
    type["MarkForAuxView"] = static_cast<void (Urho3D::Material::*)(unsigned)>(&Urho3D::Material::MarkForAuxView) ;
    /*Return number of techniques. BIND_AS_PROPERTY*//*() const*/
    type["GetNumTechniques"] = static_cast<unsigned (Urho3D::Material::*)() const>(&Urho3D::Material::GetNumTechniques) ;
    /*Return all techniques.*//*() const*/
    type["GetTechniques"] = static_cast<const Vector<TechniqueEntry>& (Urho3D::Material::*)() const>(&Urho3D::Material::GetTechniques) ;
    /*Return technique entry by index.*//*(unsigned index) const*/
    type["GetTechniqueEntry"] = static_cast<const TechniqueEntry& (Urho3D::Material::*)(unsigned) const>(&Urho3D::Material::GetTechniqueEntry) ;
    /*Return technique by index. BIND_AS_ALIAS_get_techniques*//*(unsigned index) const*/
    type["GetTechnique"] = [](Urho3D::Material& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTechnique(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return pass by technique index and pass name.*//*(unsigned index, const String &passName) const*/
    type["GetPass"] = [](Urho3D::Material& self, unsigned index, const String &passName){ return SharedPtr(self.GetPass(index, passName)); };
    /*Return texture by unit. BIND_AS_ALIAS_get_textures*//*(TextureUnit unit) const*/
    type["GetTexture"] = [](Urho3D::Material& self, TextureUnit unit, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTexture(unit));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return all textures.*//*() const*/
    type["GetTextures"] = static_cast<const HashMap<TextureUnit,SharedPtr<Texture>>& (Urho3D::Material::*)() const>(&Urho3D::Material::GetTextures) ;
    /*Return additional vertex shader defines. BIND_AS_PROPERTY*//*() const*/
    type["GetVertexShaderDefines"] = static_cast<const String& (Urho3D::Material::*)() const>(&Urho3D::Material::GetVertexShaderDefines) ;
    /*Return additional pixel shader defines. BIND_AS_PROPERTY*//*() const*/
    type["GetPixelShaderDefines"] = static_cast<const String& (Urho3D::Material::*)() const>(&Urho3D::Material::GetPixelShaderDefines) ;
    /*Return shader parameter. BIND_AS_ALIAS_get_shaderParameters*//*(const String &name) const*/
    type["GetShaderParameter"] = static_cast<const Variant& (Urho3D::Material::*)(const  String &) const>(&Urho3D::Material::GetShaderParameter) ;
    /*Return shader parameter animation.*//*(const String &name) const*/
    type["GetShaderParameterAnimation"] = [](Urho3D::Material& self, const String &name, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetShaderParameterAnimation(name));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return shader parameter animation wrap mode.*//*(const String &name) const*/
    type["GetShaderParameterAnimationWrapMode"] = static_cast<WrapMode (Urho3D::Material::*)(const  String &) const>(&Urho3D::Material::GetShaderParameterAnimationWrapMode) ;
    /*Return shader parameter animation speed.*//*(const String &name) const*/
    type["GetShaderParameterAnimationSpeed"] = static_cast<float (Urho3D::Material::*)(const  String &) const>(&Urho3D::Material::GetShaderParameterAnimationSpeed) ;
    /*Return all shader parameters.*//*() const*/
    type["GetShaderParameters"] = static_cast<const HashMap<StringHash,MaterialShaderParameter>& (Urho3D::Material::*)() const>(&Urho3D::Material::GetShaderParameters) ;
    /*Return normal culling mode. BIND_AS_PROPERTY*//*() const*/
    type["GetCullMode"] = static_cast<CullMode (Urho3D::Material::*)() const>(&Urho3D::Material::GetCullMode) ;
    /*Return culling mode for shadows. BIND_AS_PROPERTY*//*() const*/
    type["GetShadowCullMode"] = static_cast<CullMode (Urho3D::Material::*)() const>(&Urho3D::Material::GetShadowCullMode) ;
    /*Return polygon fill mode. BIND_AS_PROPERTY*//*() const*/
    type["GetFillMode"] = static_cast<FillMode (Urho3D::Material::*)() const>(&Urho3D::Material::GetFillMode) ;
    /*Return depth bias. BIND_AS_PROPERTY*//*() const*/
    type["GetDepthBias"] = static_cast<const BiasParameters& (Urho3D::Material::*)() const>(&Urho3D::Material::GetDepthBias) ;
    /*Return alpha-to-coverage mode. BIND_AS_PROPERTY*//*() const*/
    type["GetAlphaToCoverage"] = static_cast<bool (Urho3D::Material::*)() const>(&Urho3D::Material::GetAlphaToCoverage) ;
    /*Return whether line antialiasing is enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetLineAntiAlias"] = static_cast<bool (Urho3D::Material::*)() const>(&Urho3D::Material::GetLineAntiAlias) ;
    /*Return render order. BIND_AS_PROPERTY*//*() const*/
    type["GetRenderOrder"] = static_cast<unsigned char (Urho3D::Material::*)() const>(&Urho3D::Material::GetRenderOrder) ;
    /*Return last auxiliary view rendered frame number.*//*() const*/
    type["GetAuxViewFrameNumber"] = static_cast<unsigned (Urho3D::Material::*)() const>(&Urho3D::Material::GetAuxViewFrameNumber) ;
    /*Return whether should render occlusion. BIND_AS_PROPERTY*//*() const*/
    type["GetOcclusion"] = static_cast<bool (Urho3D::Material::*)() const>(&Urho3D::Material::GetOcclusion) ;
    /*Return whether should render specular.*//*() const*/
    type["GetSpecular"] = static_cast<bool (Urho3D::Material::*)() const>(&Urho3D::Material::GetSpecular) ;
    /*Return the scene associated with the material for shader parameter animation updates. BIND_AS_PROPERTY*//*() const*/
    type["GetScene"] = [](Urho3D::Material& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetScene());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return shader parameter hash value. Used as an optimization to avoid setting shader parameters unnecessarily.*//*() const*/
    type["GetShaderParameterHash"] = static_cast<unsigned (Urho3D::Material::*)() const>(&Urho3D::Material::GetShaderParameterHash) ;
    type["Save"] = sol::overload(
        static_cast<bool (Urho3D::Material::*)(Serializer &) const>(&Urho3D::Material::Save) ,
        static_cast<bool (Urho3D::Material::*)(XMLElement &) const>(&Urho3D::Material::Save) ,
        static_cast<bool (Urho3D::Material::*)(JSONValue &) const>(&Urho3D::Material::Save)  );
    type["Load"] = sol::overload(
        static_cast<bool (Urho3D::Material::*)(const  XMLElement &)>(&Urho3D::Material::Load) ,
        static_cast<bool (Urho3D::Material::*)(const  JSONValue &)>(&Urho3D::Material::Load) ,
        static_cast<bool (Urho3D::Resource::*)(Deserializer &)>(&Urho3D::Resource::Load)  );
    type["SetTechnique"] = sol::overload(
        static_cast<void (Urho3D::Material::*)(unsigned, Technique *, MaterialQuality, float)>(&Urho3D::Material::SetTechnique) ,
        [](Urho3D::Material& self, unsigned index, Technique * tech, MaterialQuality qualityLevel){ self.SetTechnique(index, tech, qualityLevel); },
        [](Urho3D::Material& self, unsigned index, Technique * tech){ self.SetTechnique(index, tech); } );
    type["SetShaderParameterAnimation"] = sol::overload(
        static_cast<void (Urho3D::Material::*)(const  String &, ValueAnimation *, WrapMode, float)>(&Urho3D::Material::SetShaderParameterAnimation) ,
        [](Urho3D::Material& self, const  String & name, ValueAnimation * animation, WrapMode wrapMode){ self.SetShaderParameterAnimation(name, animation, wrapMode); },
        [](Urho3D::Material& self, const  String & name, ValueAnimation * animation){ self.SetShaderParameterAnimation(name, animation); } );
    type["SetUVTransform"] = sol::overload(
        static_cast<void (Urho3D::Material::*)(const  Vector2 &, float, const  Vector2 &)>(&Urho3D::Material::SetUVTransform) ,
        static_cast<void (Urho3D::Material::*)(const  Vector2 &, float, float)>(&Urho3D::Material::SetUVTransform)  );
    type["Clone"] = sol::overload(
        static_cast<SharedPtr<Material> (Urho3D::Material::*)(const  String &) const>(&Urho3D::Material::Clone) ,
        [](Urho3D::Material& self){ return self.Clone(); } );
    type["alphaToCoverage"] = sol::property(static_cast<bool (Urho3D::Material::*)() const>(&Urho3D::Material::GetAlphaToCoverage) 
        , static_cast<void (Urho3D::Material::*)(bool)>(&Urho3D::Material::SetAlphaToCoverage) );
    type["cullMode"] = sol::property(static_cast<CullMode (Urho3D::Material::*)() const>(&Urho3D::Material::GetCullMode) 
        , static_cast<void (Urho3D::Material::*)(CullMode)>(&Urho3D::Material::SetCullMode) );
    type["depthBias"] = sol::property(static_cast<const BiasParameters& (Urho3D::Material::*)() const>(&Urho3D::Material::GetDepthBias) 
        , static_cast<void (Urho3D::Material::*)(const  BiasParameters &)>(&Urho3D::Material::SetDepthBias) );
    type["fillMode"] = sol::property(static_cast<FillMode (Urho3D::Material::*)() const>(&Urho3D::Material::GetFillMode) 
        , static_cast<void (Urho3D::Material::*)(FillMode)>(&Urho3D::Material::SetFillMode) );
    type["lineAntiAlias"] = sol::property(static_cast<bool (Urho3D::Material::*)() const>(&Urho3D::Material::GetLineAntiAlias) 
        , static_cast<void (Urho3D::Material::*)(bool)>(&Urho3D::Material::SetLineAntiAlias) );
    type["numTechniques"] = sol::property(static_cast<unsigned (Urho3D::Material::*)() const>(&Urho3D::Material::GetNumTechniques) 
        , static_cast<void (Urho3D::Material::*)(unsigned)>(&Urho3D::Material::SetNumTechniques) );
    type["occlusion"] = sol::property(static_cast<bool (Urho3D::Material::*)() const>(&Urho3D::Material::GetOcclusion) 
        , static_cast<void (Urho3D::Material::*)(bool)>(&Urho3D::Material::SetOcclusion) );
    type["pixelShaderDefines"] = sol::property(static_cast<const String& (Urho3D::Material::*)() const>(&Urho3D::Material::GetPixelShaderDefines) 
        , static_cast<void (Urho3D::Material::*)(const  String &)>(&Urho3D::Material::SetPixelShaderDefines) );
    type["renderOrder"] = sol::property(static_cast<unsigned char (Urho3D::Material::*)() const>(&Urho3D::Material::GetRenderOrder) 
        , static_cast<void (Urho3D::Material::*)(unsigned char)>(&Urho3D::Material::SetRenderOrder) );
    type["scene"] = sol::property([](Urho3D::Material& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetScene());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Material::*)(Scene *)>(&Urho3D::Material::SetScene) );
    type["shaderParameter"] = sol::property(static_cast<const Variant& (Urho3D::Material::*)(const  String &) const>(&Urho3D::Material::GetShaderParameter) 
        , static_cast<void (Urho3D::Material::*)(const  String &, const  Variant &)>(&Urho3D::Material::SetShaderParameter) );
    type["shadowCullMode"] = sol::property(static_cast<CullMode (Urho3D::Material::*)() const>(&Urho3D::Material::GetShadowCullMode) 
        , static_cast<void (Urho3D::Material::*)(CullMode)>(&Urho3D::Material::SetShadowCullMode) );
    type["technique"] = sol::property([](Urho3D::Material& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTechnique(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["texture"] = sol::property([](Urho3D::Material& self, TextureUnit unit, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTexture(unit));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Material::*)(TextureUnit, Texture *)>(&Urho3D::Material::SetTexture) );
    type["vertexShaderDefines"] = sol::property(static_cast<const String& (Urho3D::Material::*)() const>(&Urho3D::Material::GetVertexShaderDefines) 
        , static_cast<void (Urho3D::Material::*)(const  String &)>(&Urho3D::Material::SetVertexShaderDefines) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Material.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Scene/ValueAnimation.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ShaderParameterAnimationInfo(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ShaderParameterAnimationInfo>( "ShaderParameterAnimationInfo"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::ValueAnimationInfo,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Material *material, const String &name, ValueAnimation *attributeAnimation, WrapMode wrapMode, float speed) { 
            return Urho3D::MakeShared<Urho3D::ShaderParameterAnimationInfo>(material, name, attributeAnimation, wrapMode, speed);
        },[](const ShaderParameterAnimationInfo &other) { 
            return Urho3D::MakeShared<Urho3D::ShaderParameterAnimationInfo>(other);
        });

// Members

    /*Return shader parameter name.*//*() const*/
    type["GetName"] = static_cast<const String& (Urho3D::ShaderParameterAnimationInfo::*)() const>(&Urho3D::ShaderParameterAnimationInfo::GetName) ;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Material.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Graphics/Technique.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_TechniqueEntry(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::TechniqueEntry>( "TechniqueEntry"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::TechniqueEntry(),
        Urho3D::TechniqueEntry(Technique *, MaterialQuality, float)>();

// Members

    type["technique_"] = &Urho3D::TechniqueEntry::technique_;
    type["original_"] = &Urho3D::TechniqueEntry::original_;
    type["qualityLevel_"] = &Urho3D::TechniqueEntry::qualityLevel_;
    type["lodDistance_"] = &Urho3D::TechniqueEntry::lodDistance_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Material.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Variant.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_MaterialShaderParameter(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::MaterialShaderParameter>( "MaterialShaderParameter"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["name_"] = &Urho3D::MaterialShaderParameter::name_;
    type["value_"] = &Urho3D::MaterialShaderParameter::value_;

}

