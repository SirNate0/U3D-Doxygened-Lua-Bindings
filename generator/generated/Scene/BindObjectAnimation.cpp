
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/ObjectAnimation.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/ObjectAnimation.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Resource/JSONValue.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Scene/ValueAnimation.h>
#include <Urho3D/Scene/ValueAnimationInfo.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ObjectAnimation(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ObjectAnimation::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ObjectAnimation::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ObjectAnimation>((Urho3D::ObjectAnimation*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ObjectAnimation>( "ObjectAnimation"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ObjectAnimation>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::ObjectAnimation::*)(Deserializer &)>(&Urho3D::ObjectAnimation::BeginLoad) ;
    /*Save resource. Return true if successful.*//*(Serializer &dest) const override*/
    type["Save"] = static_cast<bool (Urho3D::ObjectAnimation::*)(Serializer &) const>(&Urho3D::ObjectAnimation::Save) ;
    /*Load from XML data. Return true if successful.*//*(const XMLElement &source)*/
    type["LoadXML"] = static_cast<bool (Urho3D::ObjectAnimation::*)(const  XMLElement &)>(&Urho3D::ObjectAnimation::LoadXML) ;
    /*Save as XML data. Return true if successful.*//*(XMLElement &dest) const*/
    type["SaveXML"] = static_cast<bool (Urho3D::ObjectAnimation::*)(XMLElement &) const>(&Urho3D::ObjectAnimation::SaveXML) ;
    /*Load from JSON data. Return true if successful.*//*(const JSONValue &source)*/
    type["LoadJSON"] = static_cast<bool (Urho3D::ObjectAnimation::*)(const  JSONValue &)>(&Urho3D::ObjectAnimation::LoadJSON) ;
    /*Save as JSON data. Return true if successful.*//*(JSONValue &dest) const*/
    type["SaveJSON"] = static_cast<bool (Urho3D::ObjectAnimation::*)(JSONValue &) const>(&Urho3D::ObjectAnimation::SaveJSON) ;
    /*Return attribute animation by name. BIND_AS_ALIAS_get_attributeAnimations*//*(const String &name) const*/
    type["GetAttributeAnimation"] = [](Urho3D::ObjectAnimation& self, const String &name, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetAttributeAnimation(name));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return attribute animation wrap mode by name. BIND_AS_ALIAS_get_wrapModes*//*(const String &name) const*/
    type["GetAttributeAnimationWrapMode"] = static_cast<WrapMode (Urho3D::ObjectAnimation::*)(const  String &) const>(&Urho3D::ObjectAnimation::GetAttributeAnimationWrapMode) ;
    /*Return attribute animation speed by name. BIND_AS_ALIAS_get_speeds*//*(const String &name) const*/
    type["GetAttributeAnimationSpeed"] = static_cast<float (Urho3D::ObjectAnimation::*)(const  String &) const>(&Urho3D::ObjectAnimation::GetAttributeAnimationSpeed) ;
    /*Return all attribute animations infos.*//*() const*/
    type["GetAttributeAnimationInfos"] = static_cast<const HashMap<String,SharedPtr<ValueAnimationInfo>>& (Urho3D::ObjectAnimation::*)() const>(&Urho3D::ObjectAnimation::GetAttributeAnimationInfos) ;
    /*Return attribute animation info by name.*//*(const String &name) const*/
    type["GetAttributeAnimationInfo"] = [](Urho3D::ObjectAnimation& self, const String &name){ return SharedPtr(self.GetAttributeAnimationInfo(name)); };
    type["AddAttributeAnimation"] = sol::overload(
        static_cast<void (Urho3D::ObjectAnimation::*)(const  String &, ValueAnimation *, WrapMode, float)>(&Urho3D::ObjectAnimation::AddAttributeAnimation) ,
        [](Urho3D::ObjectAnimation& self, const  String & name, ValueAnimation * attributeAnimation, WrapMode wrapMode){ self.AddAttributeAnimation(name, attributeAnimation, wrapMode); },
        [](Urho3D::ObjectAnimation& self, const  String & name, ValueAnimation * attributeAnimation){ self.AddAttributeAnimation(name, attributeAnimation); } );
    type["RemoveAttributeAnimation"] = sol::overload(
        static_cast<void (Urho3D::ObjectAnimation::*)(const  String &)>(&Urho3D::ObjectAnimation::RemoveAttributeAnimation) ,
        static_cast<void (Urho3D::ObjectAnimation::*)(ValueAnimation *)>(&Urho3D::ObjectAnimation::RemoveAttributeAnimation)  );
    type["attributeAnimation"] = sol::property([](Urho3D::ObjectAnimation& self, const String &name, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetAttributeAnimation(name));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["attributeAnimationSpeed"] = sol::property(static_cast<float (Urho3D::ObjectAnimation::*)(const  String &) const>(&Urho3D::ObjectAnimation::GetAttributeAnimationSpeed) );
    type["attributeAnimationWrapMode"] = sol::property(static_cast<WrapMode (Urho3D::ObjectAnimation::*)(const  String &) const>(&Urho3D::ObjectAnimation::GetAttributeAnimationWrapMode) );

}

