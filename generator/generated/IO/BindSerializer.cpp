
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/IO/Serializer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Math/BoundingBox.h>
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


void bindClass_Urho3D_Serializer(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Serializer>( "Serializer"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*ABSTRACT*/

// Members

    /*Write bytes to the stream. Return number of bytes actually written.*//*(const void *data, unsigned size)=0*/
    type["Write"] = static_cast<unsigned (Urho3D::Serializer::*)(const void *, unsigned)>(&Urho3D::Serializer::Write) ;
    /*Write a 64-bit integer.*//*(long long value)*/
    type["WriteInt64"] = static_cast<bool (Urho3D::Serializer::*)(long long)>(&Urho3D::Serializer::WriteInt64) ;
    /*Write a 32-bit integer.*//*(int value)*/
    type["WriteInt"] = static_cast<bool (Urho3D::Serializer::*)(int)>(&Urho3D::Serializer::WriteInt) ;
    /*Write a 16-bit integer.*//*(short value)*/
    type["WriteShort"] = static_cast<bool (Urho3D::Serializer::*)(short)>(&Urho3D::Serializer::WriteShort) ;
    /*Write an 8-bit integer.*//*(signed char value)*/
    type["WriteByte"] = static_cast<bool (Urho3D::Serializer::*)(signed char)>(&Urho3D::Serializer::WriteByte) ;
    /*Write a 64-bit unsigned integer.*//*(unsigned long long value)*/
    type["WriteUInt64"] = static_cast<bool (Urho3D::Serializer::*)(unsigned long long)>(&Urho3D::Serializer::WriteUInt64) ;
    /*Write a 32-bit unsigned integer.*//*(unsigned value)*/
    type["WriteUInt"] = static_cast<bool (Urho3D::Serializer::*)(unsigned)>(&Urho3D::Serializer::WriteUInt) ;
    /*Write a 16-bit unsigned integer.*//*(unsigned short value)*/
    type["WriteUShort"] = static_cast<bool (Urho3D::Serializer::*)(unsigned short)>(&Urho3D::Serializer::WriteUShort) ;
    /*Write an 8-bit unsigned integer.*//*(unsigned char value)*/
    type["WriteUByte"] = static_cast<bool (Urho3D::Serializer::*)(unsigned char)>(&Urho3D::Serializer::WriteUByte) ;
    /*Write a bool.*//*(bool value)*/
    type["WriteBool"] = static_cast<bool (Urho3D::Serializer::*)(bool)>(&Urho3D::Serializer::WriteBool) ;
    /*Write a float.*//*(float value)*/
    type["WriteFloat"] = static_cast<bool (Urho3D::Serializer::*)(float)>(&Urho3D::Serializer::WriteFloat) ;
    /*Write a double.*//*(double value)*/
    type["WriteDouble"] = static_cast<bool (Urho3D::Serializer::*)(double)>(&Urho3D::Serializer::WriteDouble) ;
    /*Write an  IntRect.*//*(const IntRect &value)*/
    type["WriteIntRect"] = static_cast<bool (Urho3D::Serializer::*)(const  IntRect &)>(&Urho3D::Serializer::WriteIntRect) ;
    /*Write an  IntVector2.*//*(const IntVector2 &value)*/
    type["WriteIntVector2"] = static_cast<bool (Urho3D::Serializer::*)(const  IntVector2 &)>(&Urho3D::Serializer::WriteIntVector2) ;
    /*Write an  IntVector3.*//*(const IntVector3 &value)*/
    type["WriteIntVector3"] = static_cast<bool (Urho3D::Serializer::*)(const  IntVector3 &)>(&Urho3D::Serializer::WriteIntVector3) ;
    /*Write a  Rect.*//*(const Rect &value)*/
    type["WriteRect"] = static_cast<bool (Urho3D::Serializer::*)(const  Rect &)>(&Urho3D::Serializer::WriteRect) ;
    /*Write a  Vector2.*//*(const Vector2 &value)*/
    type["WriteVector2"] = static_cast<bool (Urho3D::Serializer::*)(const  Vector2 &)>(&Urho3D::Serializer::WriteVector2) ;
    /*Write a  Vector3.*//*(const Vector3 &value)*/
    type["WriteVector3"] = static_cast<bool (Urho3D::Serializer::*)(const  Vector3 &)>(&Urho3D::Serializer::WriteVector3) ;
    /*Write a  Vector3 packed into 3 x 16 bits with the specified maximum absolute range.*//*(const Vector3 &value, float maxAbsCoord)*/
    type["WritePackedVector3"] = static_cast<bool (Urho3D::Serializer::*)(const  Vector3 &, float)>(&Urho3D::Serializer::WritePackedVector3) ;
    /*Write a  Vector4.*//*(const Vector4 &value)*/
    type["WriteVector4"] = static_cast<bool (Urho3D::Serializer::*)(const  Vector4 &)>(&Urho3D::Serializer::WriteVector4) ;
    /*Write a quaternion.*//*(const Quaternion &value)*/
    type["WriteQuaternion"] = static_cast<bool (Urho3D::Serializer::*)(const  Quaternion &)>(&Urho3D::Serializer::WriteQuaternion) ;
    /*Write a quaternion with each component packed in 16 bits.*//*(const Quaternion &value)*/
    type["WritePackedQuaternion"] = static_cast<bool (Urho3D::Serializer::*)(const  Quaternion &)>(&Urho3D::Serializer::WritePackedQuaternion) ;
    /*Write a  Matrix3.*//*(const Matrix3 &value)*/
    type["WriteMatrix3"] = static_cast<bool (Urho3D::Serializer::*)(const  Matrix3 &)>(&Urho3D::Serializer::WriteMatrix3) ;
    /*Write a  Matrix3x4.*//*(const Matrix3x4 &value)*/
    type["WriteMatrix3x4"] = static_cast<bool (Urho3D::Serializer::*)(const  Matrix3x4 &)>(&Urho3D::Serializer::WriteMatrix3x4) ;
    /*Write a  Matrix4.*//*(const Matrix4 &value)*/
    type["WriteMatrix4"] = static_cast<bool (Urho3D::Serializer::*)(const  Matrix4 &)>(&Urho3D::Serializer::WriteMatrix4) ;
    /*Write a color.*//*(const Color &value)*/
    type["WriteColor"] = static_cast<bool (Urho3D::Serializer::*)(const  Color &)>(&Urho3D::Serializer::WriteColor) ;
    /*Write a bounding box.*//*(const BoundingBox &value)*/
    type["WriteBoundingBox"] = static_cast<bool (Urho3D::Serializer::*)(const  BoundingBox &)>(&Urho3D::Serializer::WriteBoundingBox) ;
    /*Write a null-terminated string.*//*(const String &value)*/
    type["WriteString"] = static_cast<bool (Urho3D::Serializer::*)(const  String &)>(&Urho3D::Serializer::WriteString) ;
    /*Write a four-letter file ID. If the string is not long enough, spaces will be appended.*//*(const String &value)*/
    type["WriteFileID"] = static_cast<bool (Urho3D::Serializer::*)(const  String &)>(&Urho3D::Serializer::WriteFileID) ;
    /*Write a 32-bit  StringHash.*//*(const StringHash &value)*/
    type["WriteStringHash"] = static_cast<bool (Urho3D::Serializer::*)(const  StringHash &)>(&Urho3D::Serializer::WriteStringHash) ;
    /*Write a buffer, with size encoded as VLE.*//*(const PODVector< unsigned char > &value)*/
    type["WriteBuffer"] = static_cast<bool (Urho3D::Serializer::*)(const  PODVector< unsigned char > &)>(&Urho3D::Serializer::WriteBuffer) ;
    /*Write a resource reference.*//*(const ResourceRef &value)*/
    type["WriteResourceRef"] = static_cast<bool (Urho3D::Serializer::*)(const  ResourceRef &)>(&Urho3D::Serializer::WriteResourceRef) ;
    /*Write a resource reference list.*//*(const ResourceRefList &value)*/
    type["WriteResourceRefList"] = static_cast<bool (Urho3D::Serializer::*)(const  ResourceRefList &)>(&Urho3D::Serializer::WriteResourceRefList) ;
    /*Write a variant.*//*(const Variant &value)*/
    type["WriteVariant"] = static_cast<bool (Urho3D::Serializer::*)(const  Variant &)>(&Urho3D::Serializer::WriteVariant) ;
    /*Write a variant without the type information.*//*(const Variant &value)*/
    type["WriteVariantData"] = static_cast<bool (Urho3D::Serializer::*)(const  Variant &)>(&Urho3D::Serializer::WriteVariantData) ;
    /*Write a variant vector.*//*(const VariantVector &value)*/
    type["WriteVariantVector"] = static_cast<bool (Urho3D::Serializer::*)(const  VariantVector &)>(&Urho3D::Serializer::WriteVariantVector) ;
    /*Write a variant vector.*//*(const StringVector &value)*/
    type["WriteStringVector"] = static_cast<bool (Urho3D::Serializer::*)(const  StringVector &)>(&Urho3D::Serializer::WriteStringVector) ;
    /*Write a variant map.*//*(const VariantMap &value)*/
    type["WriteVariantMap"] = static_cast<bool (Urho3D::Serializer::*)(const  VariantMap &)>(&Urho3D::Serializer::WriteVariantMap) ;
    /*Write a variable-length encoded unsigned integer, which can use 29 bits maximum.*//*(unsigned value)*/
    type["WriteVLE"] = static_cast<bool (Urho3D::Serializer::*)(unsigned)>(&Urho3D::Serializer::WriteVLE) ;
    /*Write a 24-bit network object ID.*//*(unsigned value)*/
    type["WriteNetID"] = static_cast<bool (Urho3D::Serializer::*)(unsigned)>(&Urho3D::Serializer::WriteNetID) ;
    /*Write a text line. Char codes 13 & 10 will be automatically appended.*//*(const String &value)*/
    type["WriteLine"] = static_cast<bool (Urho3D::Serializer::*)(const  String &)>(&Urho3D::Serializer::WriteLine) ;

}

