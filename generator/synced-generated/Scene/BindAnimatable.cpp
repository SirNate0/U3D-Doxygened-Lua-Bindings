
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/Animatable.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/Animatable.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Resource/JSONValue.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Scene/ObjectAnimation.h>
#include <Urho3D/Scene/ValueAnimation.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Animatable(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Animatable::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Animatable::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Animatable>((Urho3D::Animatable*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Animatable>( "Animatable"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    /*ABSTRACT*/

// Members

    /*Load from XML data. Return true if successful.*//*(const XMLElement &source) override*/
    type["LoadXML"] = static_cast<bool (Urho3D::Animatable::*)(const  XMLElement &)>(&Urho3D::Animatable::LoadXML) ;
    /*Save as XML data. Return true if successful.*//*(XMLElement &dest) const override*/
    type["SaveXML"] = static_cast<bool (Urho3D::Animatable::*)(XMLElement &) const>(&Urho3D::Animatable::SaveXML) ;
    /*Load from JSON data. Return true if successful.*//*(const JSONValue &source) override*/
    type["LoadJSON"] = static_cast<bool (Urho3D::Animatable::*)(const  JSONValue &)>(&Urho3D::Animatable::LoadJSON) ;
    /*Save as JSON data. Return true if successful.*//*(JSONValue &dest) const override*/
    type["SaveJSON"] = static_cast<bool (Urho3D::Animatable::*)(JSONValue &) const>(&Urho3D::Animatable::SaveJSON) ;
    /*Set automatic update of animation, default true. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetAnimationEnabled"] = static_cast<void (Urho3D::Animatable::*)(bool)>(&Urho3D::Animatable::SetAnimationEnabled) ;
    /*Set time position of all attribute animations or an object animation manually. Automatic update should be disabled in this case.*//*(float time)*/
    type["SetAnimationTime"] = static_cast<void (Urho3D::Animatable::*)(float)>(&Urho3D::Animatable::SetAnimationTime) ;
    /*Set object animation. BIND_AS_PROPERTY*//*(ObjectAnimation *objectAnimation)*/
    type["SetObjectAnimation"] = static_cast<void (Urho3D::Animatable::*)(ObjectAnimation *)>(&Urho3D::Animatable::SetObjectAnimation) ;
    /*Set attribute animation wrap mode.*//*(const String &name, WrapMode wrapMode)*/
    type["SetAttributeAnimationWrapMode"] = static_cast<void (Urho3D::Animatable::*)(const  String &, WrapMode)>(&Urho3D::Animatable::SetAttributeAnimationWrapMode) ;
    /*Set attribute animation speed.*//*(const String &name, float speed)*/
    type["SetAttributeAnimationSpeed"] = static_cast<void (Urho3D::Animatable::*)(const  String &, float)>(&Urho3D::Animatable::SetAttributeAnimationSpeed) ;
    /*Set attribute animation time position manually. Automatic update should be disabled in this case.*//*(const String &name, float time)*/
    type["SetAttributeAnimationTime"] = static_cast<void (Urho3D::Animatable::*)(const  String &, float)>(&Urho3D::Animatable::SetAttributeAnimationTime) ;
    /*Remove object animation. Same as calling SetObjectAnimation with a null pointer.*//*()*/
    type["RemoveObjectAnimation"] = static_cast<void (Urho3D::Animatable::*)()>(&Urho3D::Animatable::RemoveObjectAnimation) ;
    /*Remove attribute animation. Same as calling SetAttributeAnimation with a null pointer.*//*(const String &name)*/
    type["RemoveAttributeAnimation"] = static_cast<void (Urho3D::Animatable::*)(const  String &)>(&Urho3D::Animatable::RemoveAttributeAnimation) ;
    /*Return animation enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetAnimationEnabled"] = static_cast<bool (Urho3D::Animatable::*)() const>(&Urho3D::Animatable::GetAnimationEnabled) ;
    /*Return object animation. BIND_AS_PROPERTY*//*() const*/
    type["GetObjectAnimation"] = [](Urho3D::Animatable& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetObjectAnimation());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return attribute animation.*//*(const String &name) const*/
    type["GetAttributeAnimation"] = [](Urho3D::Animatable& self, const String &name, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetAttributeAnimation(name));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return attribute animation wrap mode.*//*(const String &name) const*/
    type["GetAttributeAnimationWrapMode"] = static_cast<WrapMode (Urho3D::Animatable::*)(const  String &) const>(&Urho3D::Animatable::GetAttributeAnimationWrapMode) ;
    /*Return attribute animation speed.*//*(const String &name) const*/
    type["GetAttributeAnimationSpeed"] = static_cast<float (Urho3D::Animatable::*)(const  String &) const>(&Urho3D::Animatable::GetAttributeAnimationSpeed) ;
    /*Return attribute animation time position.*//*(const String &name) const*/
    type["GetAttributeAnimationTime"] = static_cast<float (Urho3D::Animatable::*)(const  String &) const>(&Urho3D::Animatable::GetAttributeAnimationTime) ;
    /*Set object animation attribute.*//*(const ResourceRef &value)*/
    type["SetObjectAnimationAttr"] = static_cast<void (Urho3D::Animatable::*)(const  ResourceRef &)>(&Urho3D::Animatable::SetObjectAnimationAttr) ;
    /*Return object animation attribute.*//*() const*/
    type["GetObjectAnimationAttr"] = static_cast<ResourceRef (Urho3D::Animatable::*)() const>(&Urho3D::Animatable::GetObjectAnimationAttr) ;
    type["SetAttributeAnimation"] = sol::overload(
        static_cast<void (Urho3D::Animatable::*)(const  String &, ValueAnimation *, WrapMode, float)>(&Urho3D::Animatable::SetAttributeAnimation) ,
        [](Urho3D::Animatable& self, const  String & name, ValueAnimation * attributeAnimation, WrapMode wrapMode){ self.SetAttributeAnimation(name, attributeAnimation, wrapMode); },
        [](Urho3D::Animatable& self, const  String & name, ValueAnimation * attributeAnimation){ self.SetAttributeAnimation(name, attributeAnimation); } );
    type["animationEnabled"] = sol::property(static_cast<bool (Urho3D::Animatable::*)() const>(&Urho3D::Animatable::GetAnimationEnabled) 
        , static_cast<void (Urho3D::Animatable::*)(bool)>(&Urho3D::Animatable::SetAnimationEnabled) );
    type["objectAnimation"] = sol::property([](Urho3D::Animatable& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetObjectAnimation());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Animatable::*)(ObjectAnimation *)>(&Urho3D::Animatable::SetObjectAnimation) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/Animatable.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/Animatable.h>
#include <Urho3D/Core/Attribute.h>
#include <Urho3D/Scene/Animatable.h>
#include <Urho3D/Scene/ValueAnimation.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_AttributeAnimationInfo(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::AttributeAnimationInfo>( "AttributeAnimationInfo"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::ValueAnimationInfo,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Animatable *animatable, const AttributeInfo &attributeInfo, ValueAnimation *attributeAnimation, WrapMode wrapMode, float speed) { 
            return Urho3D::MakeShared<Urho3D::AttributeAnimationInfo>(animatable, attributeInfo, attributeAnimation, wrapMode, speed);
        },[](const AttributeAnimationInfo &other) { 
            return Urho3D::MakeShared<Urho3D::AttributeAnimationInfo>(other);
        });

// Members

    /*Return attribute information.*//*() const*/
    type["GetAttributeInfo"] = static_cast<const AttributeInfo& (Urho3D::AttributeAnimationInfo::*)() const>(&Urho3D::AttributeAnimationInfo::GetAttributeInfo) ;

}

