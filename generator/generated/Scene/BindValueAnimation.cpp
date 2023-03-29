
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/ValueAnimation.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/ValueAnimation.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Resource/JSONValue.h>
#include <Urho3D/Resource/Resource.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Scene/ValueAnimation.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ValueAnimation(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ValueAnimation::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ValueAnimation::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ValueAnimation>((Urho3D::ValueAnimation*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ValueAnimation>( "ValueAnimation"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ValueAnimation>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::ValueAnimation::*)(Deserializer &)>(&Urho3D::ValueAnimation::BeginLoad) ;
    /*Save resource. Return true if successful.*//*(Serializer &dest) const override*/
    type["Save"] = static_cast<bool (Urho3D::ValueAnimation::*)(Serializer &) const>(&Urho3D::ValueAnimation::Save) ;
    /*Load from XML data. Return true if successful.*//*(const XMLElement &source)*/
    type["LoadXML"] = static_cast<bool (Urho3D::ValueAnimation::*)(const  XMLElement &)>(&Urho3D::ValueAnimation::LoadXML) ;
    /*Save as XML data. Return true if successful.*//*(XMLElement &dest) const*/
    type["SaveXML"] = static_cast<bool (Urho3D::ValueAnimation::*)(XMLElement &) const>(&Urho3D::ValueAnimation::SaveXML) ;
    /*Load from JSON data. Return true if successful.*//*(const JSONValue &source)*/
    type["LoadJSON"] = static_cast<bool (Urho3D::ValueAnimation::*)(const  JSONValue &)>(&Urho3D::ValueAnimation::LoadJSON) ;
    /*Save as XML data. Return true if successful.*//*(JSONValue &dest) const*/
    type["SaveJSON"] = static_cast<bool (Urho3D::ValueAnimation::*)(JSONValue &) const>(&Urho3D::ValueAnimation::SaveJSON) ;
    /*Set owner.*//*(void *owner)*/
    type["SetOwner"] = static_cast<void (Urho3D::ValueAnimation::*)(void *)>(&Urho3D::ValueAnimation::SetOwner) ;
    /*Set interpolation method. BIND_AS_PROPERTY*//*(InterpMethod method)*/
    type["SetInterpolationMethod"] = static_cast<void (Urho3D::ValueAnimation::*)(InterpMethod)>(&Urho3D::ValueAnimation::SetInterpolationMethod) ;
    /*Set spline tension, should be between 0.0f and 1.0f, but this is not a must. BIND_AS_PROPERTY*//*(float tension)*/
    type["SetSplineTension"] = static_cast<void (Urho3D::ValueAnimation::*)(float)>(&Urho3D::ValueAnimation::SetSplineTension) ;
    /*Set value type. BIND_AS_PROPERTY*//*(VariantType valueType)*/
    type["SetValueType"] = static_cast<void (Urho3D::ValueAnimation::*)(VariantType)>(&Urho3D::ValueAnimation::SetValueType) ;
    /*Set key frame.*//*(float time, const Variant &value)*/
    type["SetKeyFrame"] = static_cast<bool (Urho3D::ValueAnimation::*)(float, const  Variant &)>(&Urho3D::ValueAnimation::SetKeyFrame) ;
    /*Return animation is valid.*//*() const*/
    type["IsValid"] = static_cast<bool (Urho3D::ValueAnimation::*)() const>(&Urho3D::ValueAnimation::IsValid) ;
    /*Return owner.*//*() const*/
    type["GetOwner"] = static_cast<void* (Urho3D::ValueAnimation::*)() const>(&Urho3D::ValueAnimation::GetOwner) ;
    /*Return interpolation method. BIND_AS_PROPERTY*//*() const*/
    type["GetInterpolationMethod"] = static_cast<InterpMethod (Urho3D::ValueAnimation::*)() const>(&Urho3D::ValueAnimation::GetInterpolationMethod) ;
    /*Return spline tension. BIND_AS_PROPERTY*//*() const*/
    type["GetSplineTension"] = static_cast<float (Urho3D::ValueAnimation::*)() const>(&Urho3D::ValueAnimation::GetSplineTension) ;
    /*Return value type. BIND_AS_PROPERTY*//*() const*/
    type["GetValueType"] = static_cast<VariantType (Urho3D::ValueAnimation::*)() const>(&Urho3D::ValueAnimation::GetValueType) ;
    /*Return begin time.*//*() const*/
    type["GetBeginTime"] = static_cast<float (Urho3D::ValueAnimation::*)() const>(&Urho3D::ValueAnimation::GetBeginTime) ;
    /*Return end time.*//*() const*/
    type["GetEndTime"] = static_cast<float (Urho3D::ValueAnimation::*)() const>(&Urho3D::ValueAnimation::GetEndTime) ;
    /*Return animation value.*//*(float scaledTime) const*/
    type["GetAnimationValue"] = static_cast<Variant (Urho3D::ValueAnimation::*)(float) const>(&Urho3D::ValueAnimation::GetAnimationValue) ;
    /*Return all key frames.*//*() const*/
    type["GetKeyFrames"] = static_cast<const Vector<VAnimKeyFrame>& (Urho3D::ValueAnimation::*)() const>(&Urho3D::ValueAnimation::GetKeyFrames) ;
    /*Has event frames.*//*() const*/
    type["HasEventFrames"] = static_cast<bool (Urho3D::ValueAnimation::*)() const>(&Urho3D::ValueAnimation::HasEventFrames) ;
    /*Return all event frames between time.*//*(float beginTime, float endTime, PODVector< const VAnimEventFrame * > &eventFrames) const*/
    type["GetEventFrames"] = static_cast<void (Urho3D::ValueAnimation::*)(float, float, PODVector< const  VAnimEventFrame * > &) const>(&Urho3D::ValueAnimation::GetEventFrames) ;
    type["SetEventFrame"] = sol::overload(
        static_cast<void (Urho3D::ValueAnimation::*)(float, const  StringHash &, const  VariantMap &)>(&Urho3D::ValueAnimation::SetEventFrame) ,
        [](Urho3D::ValueAnimation& self, float time, const  StringHash & eventType){ self.SetEventFrame(time, eventType); } );
    type["interpolationMethod"] = sol::property(static_cast<InterpMethod (Urho3D::ValueAnimation::*)() const>(&Urho3D::ValueAnimation::GetInterpolationMethod) 
        , static_cast<void (Urho3D::ValueAnimation::*)(InterpMethod)>(&Urho3D::ValueAnimation::SetInterpolationMethod) );
    type["splineTension"] = sol::property(static_cast<float (Urho3D::ValueAnimation::*)() const>(&Urho3D::ValueAnimation::GetSplineTension) 
        , static_cast<void (Urho3D::ValueAnimation::*)(float)>(&Urho3D::ValueAnimation::SetSplineTension) );
    type["valueType"] = sol::property(static_cast<VariantType (Urho3D::ValueAnimation::*)() const>(&Urho3D::ValueAnimation::GetValueType) 
        , static_cast<void (Urho3D::ValueAnimation::*)(VariantType)>(&Urho3D::ValueAnimation::SetValueType) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/ValueAnimation.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/ValueAnimation.h>
#include <Urho3D/Core/Variant.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_VAnimKeyFrame(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::VAnimKeyFrame>( "VAnimKeyFrame"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["time_"] = &Urho3D::VAnimKeyFrame::time_;
    type["value_"] = &Urho3D::VAnimKeyFrame::value_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/ValueAnimation.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/ValueAnimation.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_VAnimEventFrame(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::VAnimEventFrame>( "VAnimEventFrame"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["time_"] = &Urho3D::VAnimEventFrame::time_;
    type["eventType_"] = &Urho3D::VAnimEventFrame::eventType_;
    type["eventData_"] = &Urho3D::VAnimEventFrame::eventData_;

}

