
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Matrix3x4.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Matrix4.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Math/Vector4.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Matrix3x4(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Matrix3x4>( "Matrix3x4"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Matrix3x4(),
        Urho3D::Matrix3x4(const  Matrix3x4 &),
        Urho3D::Matrix3x4(const  Matrix3 &),
        Urho3D::Matrix3x4(const  Matrix4 &),
        Urho3D::Matrix3x4(float, float, float, float, float, float, float, float, float, float, float, float),
        Urho3D::Matrix3x4(const float *),
        Urho3D::Matrix3x4(const  Vector3 &, const  Quaternion &, float),
        Urho3D::Matrix3x4(const  Vector3 &, const  Quaternion &, const  Vector3 &)>();

// Members

    /*Test for equality with another matrix without epsilon.*//*(const Matrix3x4 &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::Matrix3x4::*)(const  Matrix3x4 &) const>(&Urho3D::Matrix3x4::operator==) ;
    /*Test for inequality with another matrix without epsilon.*//*(const Matrix3x4 &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::Matrix3x4::*)(const  Matrix3x4 &) const>(&Urho3D::Matrix3x4::operator!=) ;
    /*Add a matrix.*//*(const Matrix3x4 &rhs) const*/
    type["__add"] = static_cast<Matrix3x4 (Urho3D::Matrix3x4::*)(const  Matrix3x4 &) const>(&Urho3D::Matrix3x4::operator+) ;
    /*Subtract a matrix.*//*(const Matrix3x4 &rhs) const*/
    type["__sub"] = static_cast<Matrix3x4 (Urho3D::Matrix3x4::*)(const  Matrix3x4 &) const>(&Urho3D::Matrix3x4::operator-) ;
    /*Set translation elements.*//*(const Vector3 &translation)*/
    type["SetTranslation"] = static_cast<void (Urho3D::Matrix3x4::*)(const  Vector3 &)>(&Urho3D::Matrix3x4::SetTranslation) ;
    /*Set rotation elements from a 3x3 matrix.*//*(const Matrix3 &rotation)*/
    type["SetRotation"] = static_cast<void (Urho3D::Matrix3x4::*)(const  Matrix3 &)>(&Urho3D::Matrix3x4::SetRotation) ;
    /*Return the combined rotation and scaling matrix.*//*() const*/
    type["ToMatrix3"] = static_cast<Matrix3 (Urho3D::Matrix3x4::*)() const>(&Urho3D::Matrix3x4::ToMatrix3) ;
    /*Convert to a 4x4 matrix by filling in an identity last row.*//*() const*/
    type["ToMatrix4"] = static_cast<Matrix4 (Urho3D::Matrix3x4::*)() const>(&Urho3D::Matrix3x4::ToMatrix4) ;
    /*Return the rotation matrix with scaling removed.*//*() const*/
    type["RotationMatrix"] = static_cast<Matrix3 (Urho3D::Matrix3x4::*)() const>(&Urho3D::Matrix3x4::RotationMatrix) ;
    /*Return the translation part.*//*() const*/
    type["Translation"] = static_cast<Vector3 (Urho3D::Matrix3x4::*)() const>(&Urho3D::Matrix3x4::Translation) ;
    /*Return the rotation part.*//*() const*/
    type["Rotation"] = static_cast<Quaternion (Urho3D::Matrix3x4::*)() const>(&Urho3D::Matrix3x4::Rotation) ;
    /*Return the scaling part.*//*() const*/
    type["Scale"] = static_cast<Vector3 (Urho3D::Matrix3x4::*)() const>(&Urho3D::Matrix3x4::Scale) ;
    /*Return the scaling part with the sign. Reference rotation matrix is required to avoid ambiguity.*//*(const Matrix3 &rotation) const*/
    type["SignedScale"] = static_cast<Vector3 (Urho3D::Matrix3x4::*)(const  Matrix3 &) const>(&Urho3D::Matrix3x4::SignedScale) ;
    /*Test for equality with another matrix with epsilon.*//*(const Matrix3x4 &rhs) const*/
    type["Equals"] = static_cast<bool (Urho3D::Matrix3x4::*)(const  Matrix3x4 &) const>(&Urho3D::Matrix3x4::Equals) ;
    /*Return decomposition to translation, rotation and scale.*//*(Vector3 &translation, Quaternion &rotation, Vector3 &scale) const*/
    type["Decompose"] = static_cast<void (Urho3D::Matrix3x4::*)(Vector3 &, Quaternion &, Vector3 &) const>(&Urho3D::Matrix3x4::Decompose) ;
    /*Return inverse.*//*() const*/
    type["Inverse"] = static_cast<Matrix3x4 (Urho3D::Matrix3x4::*)() const>(&Urho3D::Matrix3x4::Inverse) ;
    /*Return float data.*//*() const*/
    type["Data"] = static_cast<const float* (Urho3D::Matrix3x4::*)() const>(&Urho3D::Matrix3x4::Data) ;
    /*Return matrix element.*//*(unsigned i, unsigned j) const*/
    type["Element"] = static_cast<float (Urho3D::Matrix3x4::*)(unsigned, unsigned) const>(&Urho3D::Matrix3x4::Element) ;
    /*Return matrix row.*//*(unsigned i) const*/
    type["Row"] = static_cast<Vector4 (Urho3D::Matrix3x4::*)(unsigned) const>(&Urho3D::Matrix3x4::Row) ;
    /*Return matrix column.*//*(unsigned j) const*/
    type["Column"] = static_cast<Vector3 (Urho3D::Matrix3x4::*)(unsigned) const>(&Urho3D::Matrix3x4::Column) ;
    /*Return whether any element is NaN.*//*() const*/
    type["IsNaN"] = static_cast<bool (Urho3D::Matrix3x4::*)() const>(&Urho3D::Matrix3x4::IsNaN) ;
    /*Return whether any element is Inf.*//*() const*/
    type["IsInf"] = static_cast<bool (Urho3D::Matrix3x4::*)() const>(&Urho3D::Matrix3x4::IsInf) ;
    /*Return as string.*//*() const*/
    type["__tostring"] = static_cast<String (Urho3D::Matrix3x4::*)() const>(&Urho3D::Matrix3x4::ToString) ;
    type["operator_assign"] = sol::overload(
        static_cast<Matrix3x4& (Urho3D::Matrix3x4::*)(const  Matrix3x4 &) noexcept>(&Urho3D::Matrix3x4::operator=) ,
        static_cast<Matrix3x4& (Urho3D::Matrix3x4::*)(const  Matrix3 &) noexcept>(&Urho3D::Matrix3x4::operator=) ,
        static_cast<Matrix3x4& (Urho3D::Matrix3x4::*)(const  Matrix4 &) noexcept>(&Urho3D::Matrix3x4::operator=)  );
    type["__mul"] = sol::overload(
        static_cast<Vector3 (Urho3D::Matrix3x4::*)(const  Vector3 &) const>(&Urho3D::Matrix3x4::operator*) ,
        static_cast<Vector3 (Urho3D::Matrix3x4::*)(const  Vector4 &) const>(&Urho3D::Matrix3x4::operator*) ,
        static_cast<Matrix3x4 (Urho3D::Matrix3x4::*)(float) const>(&Urho3D::Matrix3x4::operator*) ,
        static_cast<Matrix3x4 (Urho3D::Matrix3x4::*)(const  Matrix3x4 &) const>(&Urho3D::Matrix3x4::operator*) ,
        static_cast<Matrix4 (Urho3D::Matrix3x4::*)(const  Matrix4 &) const>(&Urho3D::Matrix3x4::operator*)  );
    type["SetScale"] = sol::overload(
        static_cast<void (Urho3D::Matrix3x4::*)(const  Vector3 &)>(&Urho3D::Matrix3x4::SetScale) ,
        static_cast<void (Urho3D::Matrix3x4::*)(float)>(&Urho3D::Matrix3x4::SetScale)  );
    type["m00_"] = &Urho3D::Matrix3x4::m00_;
    type["m01_"] = &Urho3D::Matrix3x4::m01_;
    type["m02_"] = &Urho3D::Matrix3x4::m02_;
    type["m03_"] = &Urho3D::Matrix3x4::m03_;
    type["m10_"] = &Urho3D::Matrix3x4::m10_;
    type["m11_"] = &Urho3D::Matrix3x4::m11_;
    type["m12_"] = &Urho3D::Matrix3x4::m12_;
    type["m13_"] = &Urho3D::Matrix3x4::m13_;
    type["m20_"] = &Urho3D::Matrix3x4::m20_;
    type["m21_"] = &Urho3D::Matrix3x4::m21_;
    type["m22_"] = &Urho3D::Matrix3x4::m22_;
    type["m23_"] = &Urho3D::Matrix3x4::m23_;

}

