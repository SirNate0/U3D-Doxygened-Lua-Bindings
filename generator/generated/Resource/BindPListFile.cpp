
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Resource/PListFile.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Resource/PListFile.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/Resource/Resource.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_PListFile(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::PListFile::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::PListFile::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::PListFile>((Urho3D::PListFile*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::PListFile>( "PListFile"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::PListFile>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::PListFile::*)(Deserializer &)>(&Urho3D::PListFile::BeginLoad) ;
    /*Return root.*//*() const*/
    type["GetRoot"] = static_cast<const PListValueMap& (Urho3D::PListFile::*)() const>(&Urho3D::PListFile::GetRoot) ;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Resource/PListFile.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Resource/PListFile.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Resource/PListFile.h>
#include <Urho3D/Resource/Resource.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_PListValue(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::PListValue>( "PListValue"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::PListValue(),
        Urho3D::PListValue(int),
        Urho3D::PListValue(bool),
        Urho3D::PListValue(float),
        Urho3D::PListValue(const  String &),
        Urho3D::PListValue(PListValueMap &),
        Urho3D::PListValue(PListValueVector &),
        Urho3D::PListValue(const  PListValue &)>();

// Members

    /*Assign operator.*//*(const PListValue &rhs)*/
    type["operator_assign"] = static_cast<PListValue& (Urho3D::PListValue::*)(const  PListValue &)>(&Urho3D::PListValue::operator=) ;
    /*Return true if is valid.*//*() const*/
    type["operator bool"] = static_cast<bool (Urho3D::PListValue::*)() const>(&Urho3D::PListValue::operator bool) ;
    /*Set int.*//*(int value)*/
    type["SetInt"] = static_cast<void (Urho3D::PListValue::*)(int)>(&Urho3D::PListValue::SetInt) ;
    /*Set boolean.*//*(bool value)*/
    type["SetBool"] = static_cast<void (Urho3D::PListValue::*)(bool)>(&Urho3D::PListValue::SetBool) ;
    /*Set float.*//*(float value)*/
    type["SetFloat"] = static_cast<void (Urho3D::PListValue::*)(float)>(&Urho3D::PListValue::SetFloat) ;
    /*Set string.*//*(const String &value)*/
    type["SetString"] = static_cast<void (Urho3D::PListValue::*)(const  String &)>(&Urho3D::PListValue::SetString) ;
    /*Set value map.*//*(const PListValueMap &valueMap)*/
    type["SetValueMap"] = static_cast<void (Urho3D::PListValue::*)(const  PListValueMap &)>(&Urho3D::PListValue::SetValueMap) ;
    /*Set value vector.*//*(const PListValueVector &valueVector)*/
    type["SetValueVector"] = static_cast<void (Urho3D::PListValue::*)(const  PListValueVector &)>(&Urho3D::PListValue::SetValueVector) ;
    /*Return type.*//*() const*/
    type["GetType"] = static_cast<PListValueType (Urho3D::PListValue::*)() const>(&Urho3D::PListValue::GetType) ;
    /*Return int.*//*() const*/
    type["GetInt"] = static_cast<int (Urho3D::PListValue::*)() const>(&Urho3D::PListValue::GetInt) ;
    /*Return boolean.*//*() const*/
    type["GetBool"] = static_cast<bool (Urho3D::PListValue::*)() const>(&Urho3D::PListValue::GetBool) ;
    /*Return float.*//*() const*/
    type["GetFloat"] = static_cast<float (Urho3D::PListValue::*)() const>(&Urho3D::PListValue::GetFloat) ;
    /*Return string.*//*() const*/
    type["GetString"] = static_cast<const String& (Urho3D::PListValue::*)() const>(&Urho3D::PListValue::GetString) ;
    /*Return  IntRect, for string type.*//*() const*/
    type["GetIntRect"] = static_cast<IntRect (Urho3D::PListValue::*)() const>(&Urho3D::PListValue::GetIntRect) ;
    /*Return  IntVector2, for string type.*//*() const*/
    type["GetIntVector2"] = static_cast<IntVector2 (Urho3D::PListValue::*)() const>(&Urho3D::PListValue::GetIntVector2) ;
    /*Return  IntVector3, for string type.*//*() const*/
    type["GetIntVector3"] = static_cast<IntVector3 (Urho3D::PListValue::*)() const>(&Urho3D::PListValue::GetIntVector3) ;
    /*Return value map.*//*() const*/
    type["GetValueMap"] = static_cast<const PListValueMap& (Urho3D::PListValue::*)() const>(&Urho3D::PListValue::GetValueMap) ;
    /*Return value vector.*//*() const*/
    type["GetValueVector"] = static_cast<const PListValueVector& (Urho3D::PListValue::*)() const>(&Urho3D::PListValue::GetValueVector) ;
    /*Convert to value map (internal use only).*//*()*/
    type["ConvertToValueMap"] = static_cast<PListValueMap& (Urho3D::PListValue::*)()>(&Urho3D::PListValue::ConvertToValueMap) ;
    /*Convert to value vector (internal use only).*//*()*/
    type["ConvertToValueVector"] = static_cast<PListValueVector& (Urho3D::PListValue::*)()>(&Urho3D::PListValue::ConvertToValueVector) ;
# if 0 // SKIPPED
    type["int_"] = &Urho3D::PListValue::int_;
# endif
# if 0 // SKIPPED
    type["bool_"] = &Urho3D::PListValue::bool_;
# endif
# if 0 // SKIPPED
    type["float_"] = &Urho3D::PListValue::float_;
# endif
# if 0 // SKIPPED
    type["string_"] = &Urho3D::PListValue::string_;
# endif
# if 0 // SKIPPED
    type["valueMap_"] = &Urho3D::PListValue::valueMap_;
# endif
# if 0 // SKIPPED
    type["valueVector_"] = &Urho3D::PListValue::valueVector_;
# endif

}

