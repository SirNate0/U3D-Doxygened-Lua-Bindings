
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Attribute.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Attribute.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Scene/Serializable.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_AttributeAccessor(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::AttributeAccessor>( "AttributeAccessor"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    /*ABSTRACT*/

// Members

    /*Get the attribute.*//*(const Serializable *ptr, Variant &dest) const =0*/
    type["Get"] = static_cast<void (Urho3D::AttributeAccessor::*)(const  Serializable *, Variant &) const >(&Urho3D::AttributeAccessor::Get) ;
    /*Set the attribute.*//*(Serializable *ptr, const Variant &src)=0*/
    type["Set"] = static_cast<void (Urho3D::AttributeAccessor::*)(Serializable *, const  Variant &)>(&Urho3D::AttributeAccessor::Set) ;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Attribute.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Attribute.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Attribute.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_AttributeInfo(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::AttributeInfo>( "AttributeInfo"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::AttributeInfo(),
        Urho3D::AttributeInfo(VariantType, const char *, const  SharedPtr<  AttributeAccessor > &, const char **, const  Variant &, AttributeModeFlags)>();

// Members

    /*Get attribute metadata.*//*(const StringHash &key) const*/
    type["GetMetadata"] = static_cast<const Variant& (Urho3D::AttributeInfo::*)(const  StringHash &) const>(&Urho3D::AttributeInfo::GetMetadata) ;
    type["type_"] = &Urho3D::AttributeInfo::type_;
    type["name_"] = &Urho3D::AttributeInfo::name_;
    type["enumNames_"] = &Urho3D::AttributeInfo::enumNames_;
    type["accessor_"] = &Urho3D::AttributeInfo::accessor_;
    type["defaultValue_"] = &Urho3D::AttributeInfo::defaultValue_;
    type["mode_"] = &Urho3D::AttributeInfo::mode_;
    type["metadata_"] = &Urho3D::AttributeInfo::metadata_;
    type["ptr_"] = &Urho3D::AttributeInfo::ptr_;

}

