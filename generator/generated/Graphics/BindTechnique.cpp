
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Technique.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Technique.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Technique.h>
#include <Urho3D/IO/Deserializer.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Technique(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Technique::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Technique::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Technique>((Urho3D::Technique*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Technique>( "Technique"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Technique>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::Technique::*)(Deserializer &)>(&Urho3D::Technique::BeginLoad) ;
    /*Set whether requires desktop level hardware. BIND_AS_ALIAS_set_desktop*//*(bool enable)*/
    type["SetIsDesktop"] = static_cast<void (Urho3D::Technique::*)(bool)>(&Urho3D::Technique::SetIsDesktop) ;
    /*Create a new pass.*//*(const String &name)*/
    type["CreatePass"] = [](Urho3D::Technique& self, const String &name){ return SharedPtr(self.CreatePass(name)); };
    /*Remove a pass.*//*(const String &name)*/
    type["RemovePass"] = static_cast<void (Urho3D::Technique::*)(const  String &)>(&Urho3D::Technique::RemovePass) ;
    /*Reset shader pointers in all passes.*//*()*/
    type["ReleaseShaders"] = static_cast<void (Urho3D::Technique::*)()>(&Urho3D::Technique::ReleaseShaders) ;
    /*Return whether requires desktop level hardware. BIND_AS_PROPERTY*//*() const*/
    type["IsDesktop"] = static_cast<bool (Urho3D::Technique::*)() const>(&Urho3D::Technique::IsDesktop) ;
    /*Return whether technique is supported by the current hardware. BIND_AS_PROPERTY*//*() const*/
    type["IsSupported"] = static_cast<bool (Urho3D::Technique::*)() const>(&Urho3D::Technique::IsSupported) ;
    /*Return number of passes. BIND_AS_PROPERTY*//*() const*/
    type["GetNumPasses"] = static_cast<unsigned (Urho3D::Technique::*)() const>(&Urho3D::Technique::GetNumPasses) ;
    /*Return all pass names. BIND_AS_PROPERTY*//*() const*/
    type["GetPassNames"] = static_cast<Vector<String> (Urho3D::Technique::*)() const>(&Urho3D::Technique::GetPassNames) ;
    /*Return all passes. BIND_AS_PROPERTY*//*() const*/
    type["GetPasses"] = static_cast<PODVector<Pass*> (Urho3D::Technique::*)() const>(&Urho3D::Technique::GetPasses) ;
    /*Return a clone with added shader compilation defines. Called internally by  Material.*//*(const String &vsDefines, const String &psDefines)*/
    type["CloneWithDefines"] = static_cast<SharedPtr<Technique> (Urho3D::Technique::*)(const  String &, const  String &)>(&Urho3D::Technique::CloneWithDefines) ;
    type["Clone"] = sol::overload(
        static_cast<SharedPtr<Technique> (Urho3D::Technique::*)(const  String &) const>(&Urho3D::Technique::Clone) ,
        [](Urho3D::Technique& self){ return self.Clone(); } );
    type["HasPass"] = sol::overload(
        static_cast<bool (Urho3D::Technique::*)(unsigned) const>(&Urho3D::Technique::HasPass) ,
        static_cast<bool (Urho3D::Technique::*)(const  String &) const>(&Urho3D::Technique::HasPass)  );
    type["GetPass"] = sol::overload(
        [](Urho3D::Technique& self, unsigned passIndex){ return SharedPtr(self.GetPass(passIndex)); },
        [](Urho3D::Technique& self, const String &name){ return SharedPtr(self.GetPass(name)); } );
    type["GetSupportedPass"] = sol::overload(
        [](Urho3D::Technique& self, unsigned passIndex){ return SharedPtr(self.GetSupportedPass(passIndex)); },
        [](Urho3D::Technique& self, const String &name){ return SharedPtr(self.GetSupportedPass(name)); } );
    type["desktop"] = sol::property(static_cast<bool (Urho3D::Technique::*)() const>(&Urho3D::Technique::IsDesktop) );
    type["isDesktop"] = sol::property(static_cast<void (Urho3D::Technique::*)(bool)>(&Urho3D::Technique::SetIsDesktop) );
    type["numPasses"] = sol::property(static_cast<unsigned (Urho3D::Technique::*)() const>(&Urho3D::Technique::GetNumPasses) );
    type["passNames"] = sol::property(static_cast<Vector<String> (Urho3D::Technique::*)() const>(&Urho3D::Technique::GetPassNames) );
    type["passes"] = sol::property(static_cast<PODVector<Pass*> (Urho3D::Technique::*)() const>(&Urho3D::Technique::GetPasses) );
    type["supported"] = sol::property(static_cast<bool (Urho3D::Technique::*)() const>(&Urho3D::Technique::IsSupported) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Technique.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Technique.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Graphics/ShaderVariation.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Resource/Resource.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Pass(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Pass>( "Pass"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](const String &name) { 
            return Urho3D::MakeShared<Urho3D::Pass>(name);
        });

// Members

    /*Set blend mode. BIND_AS_PROPERTY*//*(BlendMode mode)*/
    type["SetBlendMode"] = static_cast<void (Urho3D::Pass::*)(BlendMode)>(&Urho3D::Pass::SetBlendMode) ;
    /*Set culling mode override. By default culling mode is read from the material instead. Set the illegal culling mode MAX_CULLMODES to disable override again. BIND_AS_PROPERTY*//*(CullMode mode)*/
    type["SetCullMode"] = static_cast<void (Urho3D::Pass::*)(CullMode)>(&Urho3D::Pass::SetCullMode) ;
    /*Set depth compare mode. BIND_AS_PROPERTY*//*(CompareMode mode)*/
    type["SetDepthTestMode"] = static_cast<void (Urho3D::Pass::*)(CompareMode)>(&Urho3D::Pass::SetDepthTestMode) ;
    /*Set pass lighting mode, affects what shader variations will be attempted to be loaded. BIND_AS_PROPERTY*//*(PassLightingMode mode)*/
    type["SetLightingMode"] = static_cast<void (Urho3D::Pass::*)(PassLightingMode)>(&Urho3D::Pass::SetLightingMode) ;
    /*Set depth write on/off. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetDepthWrite"] = static_cast<void (Urho3D::Pass::*)(bool)>(&Urho3D::Pass::SetDepthWrite) ;
    /*Set alpha-to-coverage on/off. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetAlphaToCoverage"] = static_cast<void (Urho3D::Pass::*)(bool)>(&Urho3D::Pass::SetAlphaToCoverage) ;
    /*Set whether requires desktop level hardware. BIND_AS_ALIAS_set_desktop*//*(bool enable)*/
    type["SetIsDesktop"] = static_cast<void (Urho3D::Pass::*)(bool)>(&Urho3D::Pass::SetIsDesktop) ;
    /*Set vertex shader name. BIND_AS_PROPERTY*//*(const String &name)*/
    type["SetVertexShader"] = static_cast<void (Urho3D::Pass::*)(const  String &)>(&Urho3D::Pass::SetVertexShader) ;
    /*Set pixel shader name. BIND_AS_PROPERTY*//*(const String &name)*/
    type["SetPixelShader"] = static_cast<void (Urho3D::Pass::*)(const  String &)>(&Urho3D::Pass::SetPixelShader) ;
    /*Set vertex shader defines. Separate multiple defines with spaces. BIND_AS_PROPERTY*//*(const String &defines)*/
    type["SetVertexShaderDefines"] = static_cast<void (Urho3D::Pass::*)(const  String &)>(&Urho3D::Pass::SetVertexShaderDefines) ;
    /*Set pixel shader defines. Separate multiple defines with spaces. BIND_AS_PROPERTY*//*(const String &defines)*/
    type["SetPixelShaderDefines"] = static_cast<void (Urho3D::Pass::*)(const  String &)>(&Urho3D::Pass::SetPixelShaderDefines) ;
    /*Set vertex shader define excludes. Use to mark defines that the shader code will not recognize, to prevent compiling redundant shader variations. BIND_AS_PROPERTY*//*(const String &excludes)*/
    type["SetVertexShaderDefineExcludes"] = static_cast<void (Urho3D::Pass::*)(const  String &)>(&Urho3D::Pass::SetVertexShaderDefineExcludes) ;
    /*Set pixel shader define excludes. Use to mark defines that the shader code will not recognize, to prevent compiling redundant shader variations. BIND_AS_PROPERTY*//*(const String &excludes)*/
    type["SetPixelShaderDefineExcludes"] = static_cast<void (Urho3D::Pass::*)(const  String &)>(&Urho3D::Pass::SetPixelShaderDefineExcludes) ;
    /*Reset shader pointers.*//*()*/
    type["ReleaseShaders"] = static_cast<void (Urho3D::Pass::*)()>(&Urho3D::Pass::ReleaseShaders) ;
    /*Mark shaders loaded this frame.*//*(unsigned frameNumber)*/
    type["MarkShadersLoaded"] = static_cast<void (Urho3D::Pass::*)(unsigned)>(&Urho3D::Pass::MarkShadersLoaded) ;
    /*Return pass name.*//*() const*/
    type["GetName"] = static_cast<const String& (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetName) ;
    /*Return pass index. This is used for optimal render-time pass queries that avoid map lookups.*//*() const*/
    type["GetIndex"] = static_cast<unsigned (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetIndex) ;
    /*Return blend mode. BIND_AS_PROPERTY*//*() const*/
    type["GetBlendMode"] = static_cast<BlendMode (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetBlendMode) ;
    /*Return culling mode override. If pass is not overriding culling mode (default), the illegal mode MAX_CULLMODES is returned. BIND_AS_PROPERTY*//*() const*/
    type["GetCullMode"] = static_cast<CullMode (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetCullMode) ;
    /*Return depth compare mode. BIND_AS_PROPERTY*//*() const*/
    type["GetDepthTestMode"] = static_cast<CompareMode (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetDepthTestMode) ;
    /*Return pass lighting mode. BIND_AS_PROPERTY*//*() const*/
    type["GetLightingMode"] = static_cast<PassLightingMode (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetLightingMode) ;
    /*Return last shaders loaded frame number.*//*() const*/
    type["GetShadersLoadedFrameNumber"] = static_cast<unsigned (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetShadersLoadedFrameNumber) ;
    /*Return depth write mode. BIND_AS_PROPERTY*//*() const*/
    type["GetDepthWrite"] = static_cast<bool (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetDepthWrite) ;
    /*Return alpha-to-coverage mode. BIND_AS_PROPERTY*//*() const*/
    type["GetAlphaToCoverage"] = static_cast<bool (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetAlphaToCoverage) ;
    /*Return whether requires desktop level hardware. BIND_AS_PROPERTY*//*() const*/
    type["IsDesktop"] = static_cast<bool (Urho3D::Pass::*)() const>(&Urho3D::Pass::IsDesktop) ;
    /*Return vertex shader name. BIND_AS_PROPERTY*//*() const*/
    type["GetVertexShader"] = static_cast<const String& (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetVertexShader) ;
    /*Return pixel shader name. BIND_AS_PROPERTY*//*() const*/
    type["GetPixelShader"] = static_cast<const String& (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetPixelShader) ;
    /*Return vertex shader defines. BIND_AS_PROPERTY*//*() const*/
    type["GetVertexShaderDefines"] = static_cast<const String& (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetVertexShaderDefines) ;
    /*Return pixel shader defines. BIND_AS_PROPERTY*//*() const*/
    type["GetPixelShaderDefines"] = static_cast<const String& (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetPixelShaderDefines) ;
    /*Return vertex shader define excludes. BIND_AS_PROPERTY*//*() const*/
    type["GetVertexShaderDefineExcludes"] = static_cast<const String& (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetVertexShaderDefineExcludes) ;
    /*Return pixel shader define excludes. BIND_AS_PROPERTY*//*() const*/
    type["GetPixelShaderDefineExcludes"] = static_cast<const String& (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetPixelShaderDefineExcludes) ;
    /*Return the effective vertex shader defines, accounting for excludes. Called internally by  Renderer.*//*() const*/
    type["GetEffectiveVertexShaderDefines"] = static_cast<String (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetEffectiveVertexShaderDefines) ;
    /*Return the effective pixel shader defines, accounting for excludes. Called internally by  Renderer.*//*() const*/
    type["GetEffectivePixelShaderDefines"] = static_cast<String (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetEffectivePixelShaderDefines) ;
    type["GetVertexShaders"] = sol::overload(
        static_cast<Vector<SharedPtr<ShaderVariation>>& (Urho3D::Pass::*)()>(&Urho3D::Pass::GetVertexShaders) ,
        static_cast<Vector<SharedPtr<ShaderVariation>>& (Urho3D::Pass::*)(const  StringHash &)>(&Urho3D::Pass::GetVertexShaders)  );
    type["GetPixelShaders"] = sol::overload(
        static_cast<Vector<SharedPtr<ShaderVariation>>& (Urho3D::Pass::*)()>(&Urho3D::Pass::GetPixelShaders) ,
        static_cast<Vector<SharedPtr<ShaderVariation>>& (Urho3D::Pass::*)(const  StringHash &)>(&Urho3D::Pass::GetPixelShaders)  );
    type["alphaToCoverage"] = sol::property(static_cast<bool (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetAlphaToCoverage) 
        , static_cast<void (Urho3D::Pass::*)(bool)>(&Urho3D::Pass::SetAlphaToCoverage) );
    type["blendMode"] = sol::property(static_cast<BlendMode (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetBlendMode) 
        , static_cast<void (Urho3D::Pass::*)(BlendMode)>(&Urho3D::Pass::SetBlendMode) );
    type["cullMode"] = sol::property(static_cast<CullMode (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetCullMode) 
        , static_cast<void (Urho3D::Pass::*)(CullMode)>(&Urho3D::Pass::SetCullMode) );
    type["depthTestMode"] = sol::property(static_cast<CompareMode (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetDepthTestMode) 
        , static_cast<void (Urho3D::Pass::*)(CompareMode)>(&Urho3D::Pass::SetDepthTestMode) );
    type["depthWrite"] = sol::property(static_cast<bool (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetDepthWrite) 
        , static_cast<void (Urho3D::Pass::*)(bool)>(&Urho3D::Pass::SetDepthWrite) );
    type["desktop"] = sol::property(static_cast<bool (Urho3D::Pass::*)() const>(&Urho3D::Pass::IsDesktop) );
    type["isDesktop"] = sol::property(static_cast<void (Urho3D::Pass::*)(bool)>(&Urho3D::Pass::SetIsDesktop) );
    type["lightingMode"] = sol::property(static_cast<PassLightingMode (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetLightingMode) 
        , static_cast<void (Urho3D::Pass::*)(PassLightingMode)>(&Urho3D::Pass::SetLightingMode) );
    type["pixelShader"] = sol::property(static_cast<const String& (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetPixelShader) 
        , static_cast<void (Urho3D::Pass::*)(const  String &)>(&Urho3D::Pass::SetPixelShader) );
    type["pixelShaderDefineExcludes"] = sol::property(static_cast<const String& (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetPixelShaderDefineExcludes) 
        , static_cast<void (Urho3D::Pass::*)(const  String &)>(&Urho3D::Pass::SetPixelShaderDefineExcludes) );
    type["pixelShaderDefines"] = sol::property(static_cast<const String& (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetPixelShaderDefines) 
        , static_cast<void (Urho3D::Pass::*)(const  String &)>(&Urho3D::Pass::SetPixelShaderDefines) );
    type["vertexShader"] = sol::property(static_cast<const String& (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetVertexShader) 
        , static_cast<void (Urho3D::Pass::*)(const  String &)>(&Urho3D::Pass::SetVertexShader) );
    type["vertexShaderDefineExcludes"] = sol::property(static_cast<const String& (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetVertexShaderDefineExcludes) 
        , static_cast<void (Urho3D::Pass::*)(const  String &)>(&Urho3D::Pass::SetVertexShaderDefineExcludes) );
    type["vertexShaderDefines"] = sol::property(static_cast<const String& (Urho3D::Pass::*)() const>(&Urho3D::Pass::GetVertexShaderDefines) 
        , static_cast<void (Urho3D::Pass::*)(const  String &)>(&Urho3D::Pass::SetVertexShaderDefines) );

}

