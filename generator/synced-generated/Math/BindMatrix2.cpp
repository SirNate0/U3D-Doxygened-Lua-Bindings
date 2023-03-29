
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Matrix2.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Matrix2.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/Matrix2.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Matrix2(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Matrix2>( "Matrix2"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Matrix2(),
        Urho3D::Matrix2(const  Matrix2 &),
        Urho3D::Matrix2(float, float, float, float),
        Urho3D::Matrix2(const float *)>();

// Members

    /*Assign from another matrix.*//*(const Matrix2 &rhs) noexcept=default*/
    type["operator_assign"] = static_cast<Matrix2& (Urho3D::Matrix2::*)(const  Matrix2 &) noexcept>(&Urho3D::Matrix2::operator=) ;
    /*Test for equality with another matrix without epsilon.*//*(const Matrix2 &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::Matrix2::*)(const  Matrix2 &) const>(&Urho3D::Matrix2::operator==) ;
    /*Test for inequality with another matrix without epsilon.*//*(const Matrix2 &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::Matrix2::*)(const  Matrix2 &) const>(&Urho3D::Matrix2::operator!=) ;
    /*Add a matrix.*//*(const Matrix2 &rhs) const*/
    type["__add"] = static_cast<Matrix2 (Urho3D::Matrix2::*)(const  Matrix2 &) const>(&Urho3D::Matrix2::operator+) ;
    /*Subtract a matrix.*//*(const Matrix2 &rhs) const*/
    type["__sub"] = static_cast<Matrix2 (Urho3D::Matrix2::*)(const  Matrix2 &) const>(&Urho3D::Matrix2::operator-) ;
    /*Return the scaling part.*//*() const*/
    type["Scale"] = static_cast<Vector2 (Urho3D::Matrix2::*)() const>(&Urho3D::Matrix2::Scale) ;
    /*Return transpose.*//*() const*/
    type["Transpose"] = static_cast<Matrix2 (Urho3D::Matrix2::*)() const>(&Urho3D::Matrix2::Transpose) ;
    /*Return scaled by a vector.*//*(const Vector2 &scale) const*/
    type["Scaled"] = static_cast<Matrix2 (Urho3D::Matrix2::*)(const  Vector2 &) const>(&Urho3D::Matrix2::Scaled) ;
    /*Test for equality with another matrix with epsilon.*//*(const Matrix2 &rhs) const*/
    type["Equals"] = static_cast<bool (Urho3D::Matrix2::*)(const  Matrix2 &) const>(&Urho3D::Matrix2::Equals) ;
    /*Return inverse.*//*() const*/
    type["Inverse"] = static_cast<Matrix2 (Urho3D::Matrix2::*)() const>(&Urho3D::Matrix2::Inverse) ;
    /*Return float data.*//*() const*/
    type["Data"] = static_cast<const float* (Urho3D::Matrix2::*)() const>(&Urho3D::Matrix2::Data) ;
    /*Return whether any element is NaN.*//*() const*/
    type["IsNaN"] = static_cast<bool (Urho3D::Matrix2::*)() const>(&Urho3D::Matrix2::IsNaN) ;
    /*Return whether any element is Inf.*//*() const*/
    type["IsInf"] = static_cast<bool (Urho3D::Matrix2::*)() const>(&Urho3D::Matrix2::IsInf) ;
    /*Return as string.*//*() const*/
    type["__tostring"] = static_cast<String (Urho3D::Matrix2::*)() const>(&Urho3D::Matrix2::ToString) ;
    type["__mul"] = sol::overload(
        static_cast<Vector2 (Urho3D::Matrix2::*)(const  Vector2 &) const>(&Urho3D::Matrix2::operator*) ,
        static_cast<Matrix2 (Urho3D::Matrix2::*)(float) const>(&Urho3D::Matrix2::operator*) ,
        static_cast<Matrix2 (Urho3D::Matrix2::*)(const  Matrix2 &) const>(&Urho3D::Matrix2::operator*)  );
    type["SetScale"] = sol::overload(
        static_cast<void (Urho3D::Matrix2::*)(const  Vector2 &)>(&Urho3D::Matrix2::SetScale) ,
        static_cast<void (Urho3D::Matrix2::*)(float)>(&Urho3D::Matrix2::SetScale)  );
    type["m00_"] = &Urho3D::Matrix2::m00_;
    type["m01_"] = &Urho3D::Matrix2::m01_;
    type["m10_"] = &Urho3D::Matrix2::m10_;
    type["m11_"] = &Urho3D::Matrix2::m11_;

}

