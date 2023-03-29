
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/RenderPath.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/RenderPath.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/RenderPath.h>
#include <Urho3D/Resource/XMLFile.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_RenderPath(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::RenderPath>( "RenderPath"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([]() { 
            return Urho3D::MakeShared<Urho3D::RenderPath>();
        });

// Members

    /*Clone the rendering path.*//*()*/
    type["Clone"] = static_cast<SharedPtr<RenderPath> (Urho3D::RenderPath::*)()>(&Urho3D::RenderPath::Clone) ;
    /*Clear existing data and load from an XML file. Return true if successful.*//*(XMLFile *file)*/
    type["Load"] = static_cast<bool (Urho3D::RenderPath::*)(XMLFile *)>(&Urho3D::RenderPath::Load) ;
    /*Append data from an XML file. Return true if successful.*//*(XMLFile *file)*/
    type["Append"] = static_cast<bool (Urho3D::RenderPath::*)(XMLFile *)>(&Urho3D::RenderPath::Append) ;
    /*Enable/disable commands and rendertargets by tag.*//*(const String &tag, bool active)*/
    type["SetEnabled"] = static_cast<void (Urho3D::RenderPath::*)(const  String &, bool)>(&Urho3D::RenderPath::SetEnabled) ;
    /*Return true of any of render targets or commands with specified tag are enabled. BIND_AS_PROPERTY*//*(const String &tag) const*/
    type["IsEnabled"] = static_cast<bool (Urho3D::RenderPath::*)(const  String &) const>(&Urho3D::RenderPath::IsEnabled) ;
    /*Return true if renderpath or command with given tag exists. BIND_AS_PROPERTY*//*(const String &tag) const*/
    type["IsAdded"] = static_cast<bool (Urho3D::RenderPath::*)(const  String &) const>(&Urho3D::RenderPath::IsAdded) ;
    /*Toggle enabled state of commands and rendertargets by tag.*//*(const String &tag)*/
    type["ToggleEnabled"] = static_cast<void (Urho3D::RenderPath::*)(const  String &)>(&Urho3D::RenderPath::ToggleEnabled) ;
    /*Assign rendertarget at index. BIND_AS_ALIAS_set_renderTargets*//*(unsigned index, const RenderTargetInfo &info)*/
    type["SetRenderTarget"] = static_cast<void (Urho3D::RenderPath::*)(unsigned, const  RenderTargetInfo &)>(&Urho3D::RenderPath::SetRenderTarget) ;
    /*Add a rendertarget.*//*(const RenderTargetInfo &info)*/
    type["AddRenderTarget"] = static_cast<void (Urho3D::RenderPath::*)(const  RenderTargetInfo &)>(&Urho3D::RenderPath::AddRenderTarget) ;
    /*Remove rendertargets by tag name.*//*(const String &tag)*/
    type["RemoveRenderTargets"] = static_cast<void (Urho3D::RenderPath::*)(const  String &)>(&Urho3D::RenderPath::RemoveRenderTargets) ;
    /*Assign command at index. BIND_AS_ALIAS_set_commands*//*(unsigned index, const RenderPathCommand &command)*/
    type["SetCommand"] = static_cast<void (Urho3D::RenderPath::*)(unsigned, const  RenderPathCommand &)>(&Urho3D::RenderPath::SetCommand) ;
    /*Add a command to the end of the list.*//*(const RenderPathCommand &command)*/
    type["AddCommand"] = static_cast<void (Urho3D::RenderPath::*)(const  RenderPathCommand &)>(&Urho3D::RenderPath::AddCommand) ;
    /*Insert a command at a position.*//*(unsigned index, const RenderPathCommand &command)*/
    type["InsertCommand"] = static_cast<void (Urho3D::RenderPath::*)(unsigned, const  RenderPathCommand &)>(&Urho3D::RenderPath::InsertCommand) ;
    /*Remove a command by index.*//*(unsigned index)*/
    type["RemoveCommand"] = static_cast<void (Urho3D::RenderPath::*)(unsigned)>(&Urho3D::RenderPath::RemoveCommand) ;
    /*Remove commands by tag name.*//*(const String &tag)*/
    type["RemoveCommands"] = static_cast<void (Urho3D::RenderPath::*)(const  String &)>(&Urho3D::RenderPath::RemoveCommands) ;
    /*Set a shader parameter in all commands that define it. BIND_AS_ALIAS_set_shaderParameters*//*(const String &name, const Variant &value)*/
    type["SetShaderParameter"] = static_cast<void (Urho3D::RenderPath::*)(const  String &, const  Variant &)>(&Urho3D::RenderPath::SetShaderParameter) ;
    /*Return number of rendertargets. BIND_AS_PROPERTY*//*() const*/
    type["GetNumRenderTargets"] = static_cast<unsigned (Urho3D::RenderPath::*)() const>(&Urho3D::RenderPath::GetNumRenderTargets) ;
    /*Return number of commands. BIND_AS_PROPERTY*//*() const*/
    type["GetNumCommands"] = static_cast<unsigned (Urho3D::RenderPath::*)() const>(&Urho3D::RenderPath::GetNumCommands) ;
    /*Return command at index, or null if does not exist.*//*(unsigned index)*/
    type["GetCommand"] = static_cast<RenderPathCommand* (Urho3D::RenderPath::*)(unsigned)>(&Urho3D::RenderPath::GetCommand) ;
    /*Return a shader parameter (first appearance in any command). BIND_AS_ALIAS_get_shaderParameters*//*(const String &name) const*/
    type["GetShaderParameter"] = static_cast<const Variant& (Urho3D::RenderPath::*)(const  String &) const>(&Urho3D::RenderPath::GetShaderParameter) ;
    type["RemoveRenderTarget"] = sol::overload(
        static_cast<void (Urho3D::RenderPath::*)(unsigned)>(&Urho3D::RenderPath::RemoveRenderTarget) ,
        static_cast<void (Urho3D::RenderPath::*)(const  String &)>(&Urho3D::RenderPath::RemoveRenderTarget)  );
    type["added"] = sol::property(static_cast<bool (Urho3D::RenderPath::*)(const  String &) const>(&Urho3D::RenderPath::IsAdded) );
    type["command"] = sol::property(static_cast<void (Urho3D::RenderPath::*)(unsigned, const  RenderPathCommand &)>(&Urho3D::RenderPath::SetCommand) );
    type["enabled"] = sol::property(static_cast<bool (Urho3D::RenderPath::*)(const  String &) const>(&Urho3D::RenderPath::IsEnabled) );
    type["numCommands"] = sol::property(static_cast<unsigned (Urho3D::RenderPath::*)() const>(&Urho3D::RenderPath::GetNumCommands) );
    type["numRenderTargets"] = sol::property(static_cast<unsigned (Urho3D::RenderPath::*)() const>(&Urho3D::RenderPath::GetNumRenderTargets) );
    type["renderTarget"] = sol::property(static_cast<void (Urho3D::RenderPath::*)(unsigned, const  RenderTargetInfo &)>(&Urho3D::RenderPath::SetRenderTarget) );
    type["shaderParameter"] = sol::property(static_cast<const Variant& (Urho3D::RenderPath::*)(const  String &) const>(&Urho3D::RenderPath::GetShaderParameter) 
        , static_cast<void (Urho3D::RenderPath::*)(const  String &, const  Variant &)>(&Urho3D::RenderPath::SetShaderParameter) );
    type["renderTargets_"] = &Urho3D::RenderPath::renderTargets_;
    type["commands_"] = &Urho3D::RenderPath::commands_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/RenderPath.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/RenderPath.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Pair.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/RefCounted.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector4.h>
#include <Urho3D/Resource/XMLElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_RenderPathCommand(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::RenderPathCommand>( "RenderPathCommand"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    /*Read from an XML element.*//*(const XMLElement &element)*/
    type["Load"] = static_cast<void (Urho3D::RenderPathCommand::*)(const  XMLElement &)>(&Urho3D::RenderPathCommand::Load) ;
    /*Set a texture resource name. Can also refer to a rendertarget defined in the rendering path. BIND_AS_ALIAS_set_textureNames*//*(TextureUnit unit, const String &name)*/
    type["SetTextureName"] = static_cast<void (Urho3D::RenderPathCommand::*)(TextureUnit, const  String &)>(&Urho3D::RenderPathCommand::SetTextureName) ;
    /*Set a shader parameter. BIND_AS_ALIAS_set_shaderParameters*//*(const String &name, const Variant &value)*/
    type["SetShaderParameter"] = static_cast<void (Urho3D::RenderPathCommand::*)(const  String &, const  Variant &)>(&Urho3D::RenderPathCommand::SetShaderParameter) ;
    /*Remove a shader parameter.*//*(const String &name)*/
    type["RemoveShaderParameter"] = static_cast<void (Urho3D::RenderPathCommand::*)(const  String &)>(&Urho3D::RenderPathCommand::RemoveShaderParameter) ;
    /*Set number of output rendertargets. BIND_AS_PROPERTY*//*(unsigned num)*/
    type["SetNumOutputs"] = static_cast<void (Urho3D::RenderPathCommand::*)(unsigned)>(&Urho3D::RenderPathCommand::SetNumOutputs) ;
    /*Set output rendertarget name. BIND_AS_ALIAS_set_outputNames*//*(unsigned index, const String &name)*/
    type["SetOutputName"] = static_cast<void (Urho3D::RenderPathCommand::*)(unsigned, const  String &)>(&Urho3D::RenderPathCommand::SetOutputName) ;
    /*Set output rendertarget face index for cube maps. BIND_AS_ALIAS_set_outputFaces*//*(unsigned index, CubeMapFace face)*/
    type["SetOutputFace"] = static_cast<void (Urho3D::RenderPathCommand::*)(unsigned, CubeMapFace)>(&Urho3D::RenderPathCommand::SetOutputFace) ;
    /*Set depth-stencil output name. When empty, will assign a depth-stencil buffer automatically. BIND_AS_PROPERTY*//*(const String &name)*/
    type["SetDepthStencilName"] = static_cast<void (Urho3D::RenderPathCommand::*)(const  String &)>(&Urho3D::RenderPathCommand::SetDepthStencilName) ;
    /*Return texture resource name. BIND_AS_ALIAS_get_textureNames*//*(TextureUnit unit) const*/
    type["GetTextureName"] = static_cast<const String& (Urho3D::RenderPathCommand::*)(TextureUnit) const>(&Urho3D::RenderPathCommand::GetTextureName) ;
    /*Return shader parameter. BIND_AS_ALIAS_get_shaderParameters*//*(const String &name) const*/
    type["GetShaderParameter"] = static_cast<const Variant& (Urho3D::RenderPathCommand::*)(const  String &) const>(&Urho3D::RenderPathCommand::GetShaderParameter) ;
    /*Return number of output rendertargets. BIND_AS_PROPERTY*//*() const*/
    type["GetNumOutputs"] = static_cast<unsigned (Urho3D::RenderPathCommand::*)() const>(&Urho3D::RenderPathCommand::GetNumOutputs) ;
    /*Return output rendertarget name. BIND_AS_ALIAS_get_outputNames*//*(unsigned index) const*/
    type["GetOutputName"] = static_cast<const String& (Urho3D::RenderPathCommand::*)(unsigned) const>(&Urho3D::RenderPathCommand::GetOutputName) ;
    /*Return output rendertarget face index. BIND_AS_ALIAS_get_outputFaces*//*(unsigned index) const*/
    type["GetOutputFace"] = static_cast<CubeMapFace (Urho3D::RenderPathCommand::*)(unsigned) const>(&Urho3D::RenderPathCommand::GetOutputFace) ;
    /*Return depth-stencil output name. BIND_AS_PROPERTY*//*() const*/
    type["GetDepthStencilName"] = static_cast<const String& (Urho3D::RenderPathCommand::*)() const>(&Urho3D::RenderPathCommand::GetDepthStencilName) ;
    type["SetOutput"] = sol::overload(
        static_cast<void (Urho3D::RenderPathCommand::*)(unsigned, const  String &, CubeMapFace)>(&Urho3D::RenderPathCommand::SetOutput) ,
        [](Urho3D::RenderPathCommand& self, unsigned index, const  String & name){ self.SetOutput(index, name); } );
    type["depthStencilName"] = sol::property(static_cast<const String& (Urho3D::RenderPathCommand::*)() const>(&Urho3D::RenderPathCommand::GetDepthStencilName) 
        , static_cast<void (Urho3D::RenderPathCommand::*)(const  String &)>(&Urho3D::RenderPathCommand::SetDepthStencilName) );
    type["numOutputs"] = sol::property(static_cast<unsigned (Urho3D::RenderPathCommand::*)() const>(&Urho3D::RenderPathCommand::GetNumOutputs) 
        , static_cast<void (Urho3D::RenderPathCommand::*)(unsigned)>(&Urho3D::RenderPathCommand::SetNumOutputs) );
    type["outputFace"] = sol::property(static_cast<CubeMapFace (Urho3D::RenderPathCommand::*)(unsigned) const>(&Urho3D::RenderPathCommand::GetOutputFace) 
        , static_cast<void (Urho3D::RenderPathCommand::*)(unsigned, CubeMapFace)>(&Urho3D::RenderPathCommand::SetOutputFace) );
    type["outputName"] = sol::property(static_cast<const String& (Urho3D::RenderPathCommand::*)(unsigned) const>(&Urho3D::RenderPathCommand::GetOutputName) 
        , static_cast<void (Urho3D::RenderPathCommand::*)(unsigned, const  String &)>(&Urho3D::RenderPathCommand::SetOutputName) );
    type["shaderParameter"] = sol::property(static_cast<const Variant& (Urho3D::RenderPathCommand::*)(const  String &) const>(&Urho3D::RenderPathCommand::GetShaderParameter) 
        , static_cast<void (Urho3D::RenderPathCommand::*)(const  String &, const  Variant &)>(&Urho3D::RenderPathCommand::SetShaderParameter) );
    type["textureName"] = sol::property(static_cast<const String& (Urho3D::RenderPathCommand::*)(TextureUnit) const>(&Urho3D::RenderPathCommand::GetTextureName) 
        , static_cast<void (Urho3D::RenderPathCommand::*)(TextureUnit, const  String &)>(&Urho3D::RenderPathCommand::SetTextureName) );
    type["tag_"] = &Urho3D::RenderPathCommand::tag_;
    type["type_"] = &Urho3D::RenderPathCommand::type_;
    type["sortMode_"] = &Urho3D::RenderPathCommand::sortMode_;
    type["pass_"] = &Urho3D::RenderPathCommand::pass_;
    type["passIndex_"] = &Urho3D::RenderPathCommand::passIndex_;
    type["metadata_"] = &Urho3D::RenderPathCommand::metadata_;
    type["vertexShaderName_"] = &Urho3D::RenderPathCommand::vertexShaderName_;
    type["pixelShaderName_"] = &Urho3D::RenderPathCommand::pixelShaderName_;
    type["vertexShaderDefines_"] = &Urho3D::RenderPathCommand::vertexShaderDefines_;
    type["pixelShaderDefines_"] = &Urho3D::RenderPathCommand::pixelShaderDefines_;
# if 0 // SKIPPED
    type["textureNames_"] = &Urho3D::RenderPathCommand::textureNames_;
# endif
//invalid literal for int() with base 10: 'MAX_TEXTURE_UNITS'
    type["shaderParameters_"] = &Urho3D::RenderPathCommand::shaderParameters_;
    type["outputs_"] = &Urho3D::RenderPathCommand::outputs_;
    type["depthStencilName_"] = &Urho3D::RenderPathCommand::depthStencilName_;
    type["clearFlags_"] = &Urho3D::RenderPathCommand::clearFlags_;
    type["clearColor_"] = &Urho3D::RenderPathCommand::clearColor_;
    type["clearDepth_"] = &Urho3D::RenderPathCommand::clearDepth_;
    type["clearStencil_"] = &Urho3D::RenderPathCommand::clearStencil_;
    type["blendMode_"] = &Urho3D::RenderPathCommand::blendMode_;
    type["enabled_"] = &Urho3D::RenderPathCommand::enabled_;
    type["useFogColor_"] = &Urho3D::RenderPathCommand::useFogColor_;
    type["markToStencil_"] = &Urho3D::RenderPathCommand::markToStencil_;
    type["useLitBase_"] = &Urho3D::RenderPathCommand::useLitBase_;
    type["vertexLights_"] = &Urho3D::RenderPathCommand::vertexLights_;
    type["eventName_"] = &Urho3D::RenderPathCommand::eventName_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/RenderPath.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/RenderPath.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/RefCounted.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector4.h>
#include <Urho3D/Resource/XMLElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_RenderTargetInfo(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::RenderTargetInfo>( "RenderTargetInfo"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    /*Read from an XML element.*//*(const XMLElement &element)*/
    type["Load"] = static_cast<void (Urho3D::RenderTargetInfo::*)(const  XMLElement &)>(&Urho3D::RenderTargetInfo::Load) ;
    type["name_"] = &Urho3D::RenderTargetInfo::name_;
    type["tag_"] = &Urho3D::RenderTargetInfo::tag_;
    type["format_"] = &Urho3D::RenderTargetInfo::format_;
    type["size_"] = &Urho3D::RenderTargetInfo::size_;
    type["sizeMode_"] = &Urho3D::RenderTargetInfo::sizeMode_;
    type["multiSample_"] = &Urho3D::RenderTargetInfo::multiSample_;
    type["autoResolve_"] = &Urho3D::RenderTargetInfo::autoResolve_;
    type["enabled_"] = &Urho3D::RenderTargetInfo::enabled_;
    type["cubemap_"] = &Urho3D::RenderTargetInfo::cubemap_;
    type["filtered_"] = &Urho3D::RenderTargetInfo::filtered_;
    type["sRGB_"] = &Urho3D::RenderTargetInfo::sRGB_;
    type["persistent_"] = &Urho3D::RenderTargetInfo::persistent_;

}

