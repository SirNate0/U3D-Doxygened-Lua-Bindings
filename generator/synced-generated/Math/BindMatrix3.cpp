
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Matrix3.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Matrix3(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Matrix3>( "Matrix3"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Matrix3(),
        Urho3D::Matrix3(const  Matrix3 &),
        Urho3D::Matrix3(float, float, float, float, float, float, float, float, float),
        Urho3D::Matrix3(const float *)>();

// Members

    /*Assign from another matrix.*//*(const Matrix3 &rhs) noexcept=default*/
    type["operator_assign"] = static_cast<Matrix3& (Urho3D::Matrix3::*)(const  Matrix3 &) noexcept>(&Urho3D::Matrix3::operator=) ;
    /*Test for equality with another matrix without epsilon.*//*(const Matrix3 &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::Matrix3::*)(const  Matrix3 &) const>(&Urho3D::Matrix3::operator==) ;
    /*Test for inequality with another matrix without epsilon.*//*(const Matrix3 &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::Matrix3::*)(const  Matrix3 &) const>(&Urho3D::Matrix3::operator!=) ;
    /*Add a matrix.*//*(const Matrix3 &rhs) const*/
    type["__add"] = static_cast<Matrix3 (Urho3D::Matrix3::*)(const  Matrix3 &) const>(&Urho3D::Matrix3::operator+) ;
    /*Subtract a matrix.*//*(const Matrix3 &rhs) const*/
    type["__sub"] = static_cast<Matrix3 (Urho3D::Matrix3::*)(const  Matrix3 &) const>(&Urho3D::Matrix3::operator-) ;
    /*Return the scaling part.*//*() const*/
    type["Scale"] = static_cast<Vector3 (Urho3D::Matrix3::*)() const>(&Urho3D::Matrix3::Scale) ;
    /*Return the scaling part with the sign. Reference rotation matrix is required to avoid ambiguity.*//*(const Matrix3 &rotation) const*/
    type["SignedScale"] = static_cast<Vector3 (Urho3D::Matrix3::*)(const  Matrix3 &) const>(&Urho3D::Matrix3::SignedScale) ;
    /*Return transposed.*//*() const*/
    type["Transpose"] = static_cast<Matrix3 (Urho3D::Matrix3::*)() const>(&Urho3D::Matrix3::Transpose) ;
    /*Return scaled by a vector.*//*(const Vector3 &scale) const*/
    type["Scaled"] = static_cast<Matrix3 (Urho3D::Matrix3::*)(const  Vector3 &) const>(&Urho3D::Matrix3::Scaled) ;
    /*Test for equality with another matrix with epsilon.*//*(const Matrix3 &rhs) const*/
    type["Equals"] = static_cast<bool (Urho3D::Matrix3::*)(const  Matrix3 &) const>(&Urho3D::Matrix3::Equals) ;
    /*Return inverse.*//*() const*/
    type["Inverse"] = static_cast<Matrix3 (Urho3D::Matrix3::*)() const>(&Urho3D::Matrix3::Inverse) ;
    /*Return float data.*//*() const*/
    type["Data"] = static_cast<const float* (Urho3D::Matrix3::*)() const>(&Urho3D::Matrix3::Data) ;
    /*Return matrix element.*//*(unsigned i, unsigned j) const*/
    type["Element"] = static_cast<float (Urho3D::Matrix3::*)(unsigned, unsigned) const>(&Urho3D::Matrix3::Element) ;
    /*Return matrix row.*//*(unsigned i) const*/
    type["Row"] = static_cast<Vector3 (Urho3D::Matrix3::*)(unsigned) const>(&Urho3D::Matrix3::Row) ;
    /*Return matrix column.*//*(unsigned j) const*/
    type["Column"] = static_cast<Vector3 (Urho3D::Matrix3::*)(unsigned) const>(&Urho3D::Matrix3::Column) ;
    /*Return whether any element is NaN.*//*() const*/
    type["IsNaN"] = static_cast<bool (Urho3D::Matrix3::*)() const>(&Urho3D::Matrix3::IsNaN) ;
    /*Return whether any element is Inf.*//*() const*/
    type["IsInf"] = static_cast<bool (Urho3D::Matrix3::*)() const>(&Urho3D::Matrix3::IsInf) ;
    /*Return as string.*//*() const*/
    type["__tostring"] = static_cast<String (Urho3D::Matrix3::*)() const>(&Urho3D::Matrix3::ToString) ;
    type["__mul"] = sol::overload(
        static_cast<Vector3 (Urho3D::Matrix3::*)(const  Vector3 &) const>(&Urho3D::Matrix3::operator*) ,
        static_cast<Matrix3 (Urho3D::Matrix3::*)(float) const>(&Urho3D::Matrix3::operator*) ,
        static_cast<Matrix3 (Urho3D::Matrix3::*)(const  Matrix3 &) const>(&Urho3D::Matrix3::operator*)  );
    type["SetScale"] = sol::overload(
        static_cast<void (Urho3D::Matrix3::*)(const  Vector3 &)>(&Urho3D::Matrix3::SetScale) ,
        static_cast<void (Urho3D::Matrix3::*)(float)>(&Urho3D::Matrix3::SetScale)  );
    type["m00_"] = &Urho3D::Matrix3::m00_;
    type["m01_"] = &Urho3D::Matrix3::m01_;
    type["m02_"] = &Urho3D::Matrix3::m02_;
    type["m10_"] = &Urho3D::Matrix3::m10_;
    type["m11_"] = &Urho3D::Matrix3::m11_;
    type["m12_"] = &Urho3D::Matrix3::m12_;
    type["m20_"] = &Urho3D::Matrix3::m20_;
    type["m21_"] = &Urho3D::Matrix3::m21_;
    type["m22_"] = &Urho3D::Matrix3::m22_;

}

