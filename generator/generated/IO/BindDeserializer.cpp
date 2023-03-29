
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/IO/Deserializer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/IO/Deserializer.h>
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


void bindClass_Urho3D_Deserializer(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Deserializer>( "Deserializer"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*ABSTRACT*/

// Members

    /*Read bytes from the stream. Return number of bytes actually read.*//*(void *dest, unsigned size)=0*/
    type["Read"] = static_cast<unsigned (Urho3D::Deserializer::*)(void *, unsigned)>(&Urho3D::Deserializer::Read) ;
    /*Set position from the beginning of the stream. Return actual new position.*//*(unsigned position)=0*/
    type["Seek"] = static_cast<unsigned (Urho3D::Deserializer::*)(unsigned)>(&Urho3D::Deserializer::Seek) ;
    /*Return name of the stream. BIND_AS_PROPERTY*//*() const*/
    type["GetName"] = static_cast<const String& (Urho3D::Deserializer::*)() const>(&Urho3D::Deserializer::GetName) ;
    /*Return a checksum if applicable. BIND_AS_PROPERTY*//*()*/
    type["GetChecksum"] = static_cast<unsigned (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::GetChecksum) ;
    /*Return whether the end of stream has been reached. BIND_AS_PROPERTY*//*() const*/
    type["IsEof"] = static_cast<bool (Urho3D::Deserializer::*)() const>(&Urho3D::Deserializer::IsEof) ;
    /*Set position relative to current position. Return actual new position.*//*(int delta)*/
    type["SeekRelative"] = static_cast<unsigned (Urho3D::Deserializer::*)(int)>(&Urho3D::Deserializer::SeekRelative) ;
    /*Return current position. BIND_AS_PROPERTY*//*() const*/
    type["GetPosition"] = static_cast<unsigned (Urho3D::Deserializer::*)() const>(&Urho3D::Deserializer::GetPosition) ;
    /*Return current position.*//*() const*/
    type["Tell"] = static_cast<unsigned (Urho3D::Deserializer::*)() const>(&Urho3D::Deserializer::Tell) ;
    /*Return size. BIND_AS_PROPERTY*//*() const*/
    type["GetSize"] = static_cast<unsigned (Urho3D::Deserializer::*)() const>(&Urho3D::Deserializer::GetSize) ;
    /*Read a 64-bit integer.*//*()*/
    type["ReadInt64"] = static_cast<long long (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadInt64) ;
    /*Read a 32-bit integer.*//*()*/
    type["ReadInt"] = static_cast<int (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadInt) ;
    /*Read a 16-bit integer.*//*()*/
    type["ReadShort"] = static_cast<short (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadShort) ;
    /*Read an 8-bit integer.*//*()*/
    type["ReadByte"] = static_cast<signed char (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadByte) ;
    /*Read a 64-bit unsigned integer.*//*()*/
    type["ReadUInt64"] = static_cast<unsigned long long (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadUInt64) ;
    /*Read a 32-bit unsigned integer.*//*()*/
    type["ReadUInt"] = static_cast<unsigned (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadUInt) ;
    /*Read a 16-bit unsigned integer.*//*()*/
    type["ReadUShort"] = static_cast<unsigned short (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadUShort) ;
    /*Read an 8-bit unsigned integer.*//*()*/
    type["ReadUByte"] = static_cast<unsigned char (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadUByte) ;
    /*Read a bool.*//*()*/
    type["ReadBool"] = static_cast<bool (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadBool) ;
    /*Read a float.*//*()*/
    type["ReadFloat"] = static_cast<float (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadFloat) ;
    /*Read a double.*//*()*/
    type["ReadDouble"] = static_cast<double (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadDouble) ;
    /*Read an  IntRect.*//*()*/
    type["ReadIntRect"] = static_cast<IntRect (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadIntRect) ;
    /*Read an  IntVector2.*//*()*/
    type["ReadIntVector2"] = static_cast<IntVector2 (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadIntVector2) ;
    /*Read an  IntVector3.*//*()*/
    type["ReadIntVector3"] = static_cast<IntVector3 (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadIntVector3) ;
    /*Read a  Rect.*//*()*/
    type["ReadRect"] = static_cast<Rect (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadRect) ;
    /*Read a  Vector2.*//*()*/
    type["ReadVector2"] = static_cast<Vector2 (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadVector2) ;
    /*Read a  Vector3.*//*()*/
    type["ReadVector3"] = static_cast<Vector3 (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadVector3) ;
    /*Read a  Vector3 packed into 3 x 16 bits with the specified maximum absolute range.*//*(float maxAbsCoord)*/
    type["ReadPackedVector3"] = static_cast<Vector3 (Urho3D::Deserializer::*)(float)>(&Urho3D::Deserializer::ReadPackedVector3) ;
    /*Read a  Vector4.*//*()*/
    type["ReadVector4"] = static_cast<Vector4 (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadVector4) ;
    /*Read a quaternion.*//*()*/
    type["ReadQuaternion"] = static_cast<Quaternion (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadQuaternion) ;
    /*Read a quaternion with each component packed in 16 bits.*//*()*/
    type["ReadPackedQuaternion"] = static_cast<Quaternion (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadPackedQuaternion) ;
    /*Read a  Matrix3.*//*()*/
    type["ReadMatrix3"] = static_cast<Matrix3 (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadMatrix3) ;
    /*Read a  Matrix3x4.*//*()*/
    type["ReadMatrix3x4"] = static_cast<Matrix3x4 (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadMatrix3x4) ;
    /*Read a  Matrix4.*//*()*/
    type["ReadMatrix4"] = static_cast<Matrix4 (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadMatrix4) ;
    /*Read a color.*//*()*/
    type["ReadColor"] = static_cast<Color (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadColor) ;
    /*Read a bounding box.*//*()*/
    type["ReadBoundingBox"] = static_cast<BoundingBox (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadBoundingBox) ;
    /*Read a null-terminated string.*//*()*/
    type["ReadString"] = static_cast<String (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadString) ;
    /*Read a four-letter file ID.*//*()*/
    type["ReadFileID"] = static_cast<String (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadFileID) ;
    /*Read a 32-bit  StringHash.*//*()*/
    type["ReadStringHash"] = static_cast<StringHash (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadStringHash) ;
    /*Read a buffer with size encoded as VLE.*//*()*/
    type["ReadBuffer"] = static_cast<PODVector<unsigned char> (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadBuffer) ;
    /*Read a resource reference.*//*()*/
    type["ReadResourceRef"] = static_cast<ResourceRef (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadResourceRef) ;
    /*Read a resource reference list.*//*()*/
    type["ReadResourceRefList"] = static_cast<ResourceRefList (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadResourceRefList) ;
    /*Read a variant vector.*//*()*/
    type["ReadVariantVector"] = static_cast<VariantVector (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadVariantVector) ;
    /*Read a string vector.*//*()*/
    type["ReadStringVector"] = static_cast<StringVector (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadStringVector) ;
    /*Read a variant map.*//*()*/
    type["ReadVariantMap"] = static_cast<VariantMap (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadVariantMap) ;
    /*Read a variable-length encoded unsigned integer, which can use 29 bits maximum.*//*()*/
    type["ReadVLE"] = static_cast<unsigned (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadVLE) ;
    /*Read a 24-bit network object ID.*//*()*/
    type["ReadNetID"] = static_cast<unsigned (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadNetID) ;
    /*Read a text line.*//*()*/
    type["ReadLine"] = static_cast<String (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadLine) ;
    type["ReadVariant"] = sol::overload(
        static_cast<Variant (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::ReadVariant) ,
        static_cast<Variant (Urho3D::Deserializer::*)(VariantType)>(&Urho3D::Deserializer::ReadVariant)  );
    type["checksum"] = sol::property(static_cast<unsigned (Urho3D::Deserializer::*)()>(&Urho3D::Deserializer::GetChecksum) );
    type["eof"] = sol::property(static_cast<bool (Urho3D::Deserializer::*)() const>(&Urho3D::Deserializer::IsEof) );
    type["name"] = sol::property(static_cast<const String& (Urho3D::Deserializer::*)() const>(&Urho3D::Deserializer::GetName) );
    type["position"] = sol::property(static_cast<unsigned (Urho3D::Deserializer::*)() const>(&Urho3D::Deserializer::GetPosition) );
    type["size"] = sol::property(static_cast<unsigned (Urho3D::Deserializer::*)() const>(&Urho3D::Deserializer::GetSize) );

}

