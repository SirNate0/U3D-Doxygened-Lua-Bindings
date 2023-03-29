

// Generated File
//!!Skipping Class Template!!'

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

void bindClass_Urho3D_CustomVariantValueImpl(sol::state_view& lua) { }

#if 0


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Variant.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Variant.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Variant.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CustomVariantValueImpl(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::CustomVariantValueImpl>( "CustomVariantValueImpl"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::CustomVariantValueImpl(const T &)>();

// Members

    /*Set value.*//*(const T &value)*/
    type["SetValue"] = static_cast<void (Urho3D::CustomVariantValueImpl<T>::*)(const T &)>(&Urho3D::CustomVariantValueImpl<T>::SetValue) ;
    /*Assign value.*//*(const CustomVariantValue &rhs) override*/
    type["Assign"] = static_cast<bool (Urho3D::CustomVariantValueImpl<T>::*)(const  CustomVariantValue &)>(&Urho3D::CustomVariantValueImpl<T>::Assign) ;
    /*Get size.*//*() const override*/
    type["GetSize"] = static_cast<unsigned (Urho3D::CustomVariantValueImpl<T>::*)() const>(&Urho3D::CustomVariantValueImpl<T>::GetSize) ;
    /*Compare to another custom value.*//*(const CustomVariantValue &rhs) const override*/
    type["Compare"] = static_cast<bool (Urho3D::CustomVariantValueImpl<T>::*)(const  CustomVariantValue &) const>(&Urho3D::CustomVariantValueImpl<T>::Compare) ;
    /*Compare to zero.*//*() const override*/
    type["IsZero"] = static_cast<bool (Urho3D::CustomVariantValueImpl<T>::*)() const>(&Urho3D::CustomVariantValueImpl<T>::IsZero) ;
    /*Convert custom value to string.*//*() const override*/
    type["__tostring"] = static_cast<String (Urho3D::CustomVariantValueImpl<T>::*)() const>(&Urho3D::CustomVariantValueImpl<T>::ToString) ;
    type["GetValue"] = sol::overload(
        static_cast<T& (Urho3D::CustomVariantValueImpl<T>::*)()>(&Urho3D::CustomVariantValueImpl<T>::GetValue) ,
        static_cast<const T& (Urho3D::CustomVariantValueImpl<T>::*)() const>(&Urho3D::CustomVariantValueImpl<T>::GetValue)  );
    type["Clone"] = sol::overload(
        static_cast<CustomVariantValue* (Urho3D::CustomVariantValueImpl<T>::*)() const>(&Urho3D::CustomVariantValueImpl<T>::Clone) ,
        static_cast<void (Urho3D::CustomVariantValueImpl<T>::*)(void *) const>(&Urho3D::CustomVariantValueImpl<T>::Clone)  );

}



#endif

                
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Variant.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Variant.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/RefCounted.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/IO/VectorBuffer.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Matrix4.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Math/Vector4.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Variant(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Variant>( "Variant"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Variant(),
        Urho3D::Variant(int),
        Urho3D::Variant(long long),
        Urho3D::Variant(unsigned),
        Urho3D::Variant(unsigned long long),
        Urho3D::Variant(const  StringHash &),
        Urho3D::Variant(bool),
        Urho3D::Variant(float),
        Urho3D::Variant(double),
        Urho3D::Variant(const  Vector2 &),
        Urho3D::Variant(const  Vector3 &),
        Urho3D::Variant(const  Vector4 &),
        Urho3D::Variant(const  Quaternion &),
        Urho3D::Variant(const  Color &),
        Urho3D::Variant(const  String &),
        Urho3D::Variant(const char *),
        Urho3D::Variant(const  PODVector< unsigned char > &),
        Urho3D::Variant(const  VectorBuffer &),
        Urho3D::Variant(void *),
        Urho3D::Variant(const  ResourceRef &),
        Urho3D::Variant(const  ResourceRefList &),
        Urho3D::Variant(const  VariantVector &),
        Urho3D::Variant(const  VariantMap &),
        Urho3D::Variant(const  StringVector &),
        Urho3D::Variant(const  Rect &),
        Urho3D::Variant(const  IntRect &),
        Urho3D::Variant(const  IntVector2 &),
        Urho3D::Variant(const  IntVector3 &),
        Urho3D::Variant(RefCounted *),
        Urho3D::Variant(const  Matrix3 &),
        Urho3D::Variant(const  Matrix3x4 &),
        Urho3D::Variant(const  Matrix4 &),
        // Urho3D::Variant(const  CustomVariantValueImpl< T > &),
        Urho3D::Variant(const  String &, const  String &),
        Urho3D::Variant(VariantType, const  String &),
        Urho3D::Variant(const char *, const char *),
        Urho3D::Variant(VariantType, const char *),
        Urho3D::Variant(const  Variant &)>();

// Members

    /*Reset to empty.*//*()*/
    type["Clear"] = static_cast<void (Urho3D::Variant::*)()>(&Urho3D::Variant::Clear) ;
    /*Set buffer type from a memory area.*//*(const void *data, unsigned size)*/
    type["SetBuffer"] = static_cast<void (Urho3D::Variant::*)(const void *, unsigned)>(&Urho3D::Variant::SetBuffer) ;
    /*Set custom value.*//*(const CustomVariantValue &value)*/
    type["SetCustomVariantValue"] = static_cast<void (Urho3D::Variant::*)(const  CustomVariantValue &)>(&Urho3D::Variant::SetCustomVariantValue) ;
    /*Return int or zero on type mismatch. Floats and doubles are converted.*//*() const*/
    type["GetInt"] = static_cast<int (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetInt) ;
    /*Return 64 bit int or zero on type mismatch. Floats and doubles are converted.*//*() const*/
    type["GetInt64"] = static_cast<long long (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetInt64) ;
    /*Return unsigned 64 bit int or zero on type mismatch. Floats and doubles are converted.*//*() const*/
    type["GetUInt64"] = static_cast<unsigned long long (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetUInt64) ;
    /*Return unsigned int or zero on type mismatch. Floats and doubles are converted.*//*() const*/
    type["GetUInt"] = static_cast<unsigned (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetUInt) ;
    /*Return  StringHash or zero on type mismatch.*//*() const*/
    type["GetStringHash"] = static_cast<StringHash (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetStringHash) ;
    /*Return bool or false on type mismatch.*//*() const*/
    type["GetBool"] = static_cast<bool (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetBool) ;
    /*Return float or zero on type mismatch. Ints and doubles are converted.*//*() const*/
    type["GetFloat"] = static_cast<float (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetFloat) ;
    /*Return double or zero on type mismatch. Ints and floats are converted.*//*() const*/
    type["GetDouble"] = static_cast<double (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetDouble) ;
    /*Return  Vector2 or zero on type mismatch.*//*() const*/
    type["GetVector2"] = static_cast<const Vector2& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetVector2) ;
    /*Return  Vector3 or zero on type mismatch.*//*() const*/
    type["GetVector3"] = static_cast<const Vector3& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetVector3) ;
    /*Return  Vector4 or zero on type mismatch.*//*() const*/
    type["GetVector4"] = static_cast<const Vector4& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetVector4) ;
    /*Return quaternion or identity on type mismatch.*//*() const*/
    type["GetQuaternion"] = static_cast<const Quaternion& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetQuaternion) ;
    /*Return color or default on type mismatch.  Vector4 is aliased to  Color if necessary.*//*() const*/
    type["GetColor"] = static_cast<const Color& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetColor) ;
    /*Return string or empty on type mismatch.*//*() const*/
    type["GetString"] = static_cast<const String& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetString) ;
    /*Return buffer or empty on type mismatch.*//*() const*/
    type["GetBuffer"] = static_cast<const PODVector<unsigned char>& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetBuffer) ;
    /*Return VectorBuffer containing the buffer or empty on type mismatch.*//*() const*/
    type["GetVectorBuffer"] = static_cast<VectorBuffer (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetVectorBuffer) ;
    /*Return void pointer or null on type mismatch.  RefCounted pointer will be converted.*//*() const*/
    type["GetVoidPtr"] = static_cast<void* (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetVoidPtr) ;
    /*Return a resource reference or empty on type mismatch.*//*() const*/
    type["GetResourceRef"] = static_cast<const ResourceRef& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetResourceRef) ;
    /*Return a resource reference list or empty on type mismatch.*//*() const*/
    type["GetResourceRefList"] = static_cast<const ResourceRefList& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetResourceRefList) ;
    /*Return a variant vector or empty on type mismatch.*//*() const*/
    type["GetVariantVector"] = static_cast<const VariantVector& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetVariantVector) ;
    /*Return a string vector or empty on type mismatch.*//*() const*/
    type["GetStringVector"] = static_cast<const StringVector& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetStringVector) ;
    /*Return a variant map or empty on type mismatch.*//*() const*/
    type["GetVariantMap"] = static_cast<const VariantMap& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetVariantMap) ;
    /*Return a rect or empty on type mismatch.*//*() const*/
    type["GetRect"] = static_cast<const Rect& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetRect) ;
    /*Return an integer rect or empty on type mismatch.*//*() const*/
    type["GetIntRect"] = static_cast<const IntRect& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetIntRect) ;
    /*Return an  IntVector2 or empty on type mismatch.*//*() const*/
    type["GetIntVector2"] = static_cast<const IntVector2& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetIntVector2) ;
    /*Return an  IntVector3 or empty on type mismatch.*//*() const*/
    type["GetIntVector3"] = static_cast<const IntVector3& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetIntVector3) ;
    /*Return a  RefCounted pointer or null on type mismatch. Will return null if holding a void pointer, as it can not be safely verified that the object is a  RefCounted.*//*() const*/
    type["GetPtr"] = static_cast<RefCounted* (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetPtr) ;
    /*Return a  Matrix3 or identity on type mismatch.*//*() const*/
    type["GetMatrix3"] = static_cast<const Matrix3& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetMatrix3) ;
    /*Return a  Matrix3x4 or identity on type mismatch.*//*() const*/
    type["GetMatrix3x4"] = static_cast<const Matrix3x4& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetMatrix3x4) ;
    /*Return a  Matrix4 or identity on type mismatch.*//*() const*/
    type["GetMatrix4"] = static_cast<const Matrix4& (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetMatrix4) ;
    /*Return value's type. BIND_AS_PROPERTY*//*() const*/
    type["GetType"] = static_cast<VariantType (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetType) ;
    /*Return value's type name. BIND_AS_PROPERTY*//*() const*/
    type["GetTypeName"] = static_cast<String (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetTypeName) ;
    /*Convert value to string. Pointers are returned as null, and VariantBuffer or VariantMap are not supported and return empty.*//*() const*/
    type["__tostring"] = static_cast<String (Urho3D::Variant::*)() const>(&Urho3D::Variant::ToString) ;
    /*Return true when the variant value is considered zero according to its actual type. BIND_AS_PROPERTY*//*() const*/
    type["IsZero"] = static_cast<bool (Urho3D::Variant::*)() const>(&Urho3D::Variant::IsZero) ;
    /*Return true when the variant is empty (i.e. not initialized yet). BIND_AS_PROPERTY*//*() const*/
    type["IsEmpty"] = static_cast<bool (Urho3D::Variant::*)() const>(&Urho3D::Variant::IsEmpty) ;
    /*Return true when the variant stores custom type.*//*() const*/
    type["IsCustom"] = static_cast<bool (Urho3D::Variant::*)() const>(&Urho3D::Variant::IsCustom) ;
    /*Return a pointer to a modifiable buffer or null on type mismatch.*//*()*/
    type["GetBufferPtr"] = static_cast<PODVector<unsigned char>* (Urho3D::Variant::*)()>(&Urho3D::Variant::GetBufferPtr) ;
    /*Return a pointer to a modifiable variant vector or null on type mismatch.*//*()*/
    type["GetVariantVectorPtr"] = static_cast<VariantVector* (Urho3D::Variant::*)()>(&Urho3D::Variant::GetVariantVectorPtr) ;
    /*Return a pointer to a modifiable string vector or null on type mismatch.*//*()*/
    type["GetStringVectorPtr"] = static_cast<StringVector* (Urho3D::Variant::*)()>(&Urho3D::Variant::GetStringVectorPtr) ;
    /*Return a pointer to a modifiable variant map or null on type mismatch.*//*()*/
    type["GetVariantMapPtr"] = static_cast<VariantMap* (Urho3D::Variant::*)()>(&Urho3D::Variant::GetVariantMapPtr) ;
    type["operator_assign"] = sol::overload(
        static_cast<Variant& (Urho3D::Variant::*)(const  Variant &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(int)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(long long)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(unsigned long long)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(unsigned)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  StringHash &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(bool)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(float)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(double)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  Vector2 &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  Vector3 &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  Vector4 &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  Quaternion &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  Color &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  String &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const char *)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  PODVector< unsigned char > &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  VectorBuffer &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(void *)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  ResourceRef &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  ResourceRefList &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  VariantVector &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  StringVector &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  VariantMap &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  Rect &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  IntRect &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  IntVector2 &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  IntVector3 &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(RefCounted *)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  Matrix3 &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  Matrix3x4 &)>(&Urho3D::Variant::operator=) ,
        static_cast<Variant& (Urho3D::Variant::*)(const  Matrix4 &)>(&Urho3D::Variant::operator=)  );
    type["__eq"] = sol::overload(
        static_cast<bool (Urho3D::Variant::*)(const  Variant &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(int) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(unsigned) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(long long) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(unsigned long long) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(bool) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(float) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(double) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  Vector2 &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  Vector3 &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  Vector4 &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  Quaternion &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  Color &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  String &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  PODVector< unsigned char > &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  VectorBuffer &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(void *) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  ResourceRef &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  ResourceRefList &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  VariantVector &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  StringVector &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  VariantMap &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  Rect &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  IntRect &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  IntVector2 &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  IntVector3 &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  StringHash &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(RefCounted *) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  Matrix3 &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  Matrix3x4 &) const>(&Urho3D::Variant::operator==) ,
        static_cast<bool (Urho3D::Variant::*)(const  Matrix4 &) const>(&Urho3D::Variant::operator==)  );
    type["operator_neq"] = sol::overload(
        static_cast<bool (Urho3D::Variant::*)(const  Variant &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(int) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(unsigned) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(long long) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(unsigned long long) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(bool) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(float) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(double) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  Vector2 &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  Vector3 &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  Vector4 &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  Quaternion &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  String &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  PODVector< unsigned char > &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  VectorBuffer &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(void *) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  ResourceRef &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  ResourceRefList &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  VariantVector &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  StringVector &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  VariantMap &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  Rect &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  IntRect &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  IntVector2 &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  IntVector3 &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  StringHash &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(RefCounted *) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  Matrix3 &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  Matrix3x4 &) const>(&Urho3D::Variant::operator!=) ,
        static_cast<bool (Urho3D::Variant::*)(const  Matrix4 &) const>(&Urho3D::Variant::operator!=)  );
    type["FromString"] = sol::overload(
        static_cast<void (Urho3D::Variant::*)(const  String &, const  String &)>(&Urho3D::Variant::FromString) ,
        static_cast<void (Urho3D::Variant::*)(const char *, const char *)>(&Urho3D::Variant::FromString) ,
        static_cast<void (Urho3D::Variant::*)(VariantType, const  String &)>(&Urho3D::Variant::FromString) ,
        static_cast<void (Urho3D::Variant::*)(VariantType, const char *)>(&Urho3D::Variant::FromString)  );
    type["GetCustomVariantValuePtr"] = sol::overload(
        static_cast<CustomVariantValue* (Urho3D::Variant::*)()>(&Urho3D::Variant::GetCustomVariantValuePtr) ,
        static_cast<const CustomVariantValue* (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetCustomVariantValuePtr)  );
    type["empty"] = sol::property(static_cast<bool (Urho3D::Variant::*)() const>(&Urho3D::Variant::IsEmpty) );
    type["type"] = sol::property(static_cast<VariantType (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetType) );
    type["typeName"] = sol::property(static_cast<String (Urho3D::Variant::*)() const>(&Urho3D::Variant::GetTypeName) );
    type["zero"] = sol::property(static_cast<bool (Urho3D::Variant::*)() const>(&Urho3D::Variant::IsZero) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Variant.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Variant.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ResourceRefList(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ResourceRefList>( "ResourceRefList"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::ResourceRefList(),
        Urho3D::ResourceRefList(StringHash),
        Urho3D::ResourceRefList(StringHash, const  StringVector &)>();

// Members

    /*Test for equality with another reference list.*//*(const ResourceRefList &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::ResourceRefList::*)(const  ResourceRefList &) const>(&Urho3D::ResourceRefList::operator==) ;
    /*Test for inequality with another reference list.*//*(const ResourceRefList &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::ResourceRefList::*)(const  ResourceRefList &) const>(&Urho3D::ResourceRefList::operator!=) ;
    type["type_"] = &Urho3D::ResourceRefList::type_;
    type["names_"] = &Urho3D::ResourceRefList::names_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Variant.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Variant.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ResourceRef(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ResourceRef>( "ResourceRef"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::ResourceRef(),
        Urho3D::ResourceRef(StringHash),
        Urho3D::ResourceRef(StringHash, const  String &),
        Urho3D::ResourceRef(const  String &, const  String &),
        Urho3D::ResourceRef(const char *, const char *),
        Urho3D::ResourceRef(const  ResourceRef &)>();

// Members

    /*Test for equality with another reference.*//*(const ResourceRef &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::ResourceRef::*)(const  ResourceRef &) const>(&Urho3D::ResourceRef::operator==) ;
    /*Test for inequality with another reference.*//*(const ResourceRef &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::ResourceRef::*)(const  ResourceRef &) const>(&Urho3D::ResourceRef::operator!=) ;
    type["type_"] = &Urho3D::ResourceRef::type_;
    type["name_"] = &Urho3D::ResourceRef::name_;

}



// Generated File
//!!Skipping Class Template!!'

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

void bindClass_Urho3D_CustomVariantValueTraits(sol::state_view& lua) { }

#if 0


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Variant.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Variant.h>
#include <Urho3D/Container/Str.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CustomVariantValueTraits(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::CustomVariantValueTraits>( "CustomVariantValueTraits"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members


}



#endif

                