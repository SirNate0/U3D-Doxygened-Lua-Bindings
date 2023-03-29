
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Quaternion.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Quaternion(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Quaternion>( "Quaternion"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Quaternion(),
        Urho3D::Quaternion(const  Quaternion &),
        Urho3D::Quaternion(float, float, float, float),
        Urho3D::Quaternion(const float *),
        Urho3D::Quaternion(float, const  Vector3 &),
        Urho3D::Quaternion(float),
        Urho3D::Quaternion(float, float, float),
        Urho3D::Quaternion(const  Vector3 &),
        Urho3D::Quaternion(const  Vector3 &, const  Vector3 &),
        Urho3D::Quaternion(const  Vector3 &, const  Vector3 &, const  Vector3 &),
        Urho3D::Quaternion(const  Matrix3 &)>();

// Members

    /*Assign from another quaternion.*//*(const Quaternion &rhs) noexcept*/
    type["operator_assign"] = static_cast<Quaternion& (Urho3D::Quaternion::*)(const  Quaternion &) noexcept>(&Urho3D::Quaternion::operator=) ;
    /*Add-assign a quaternion.*//*(const Quaternion &rhs)*/
    type["operator_add_assign"] = static_cast<Quaternion& (Urho3D::Quaternion::*)(const  Quaternion &)>(&Urho3D::Quaternion::operator+=) ;
    /*Multiply-assign a scalar.*//*(float rhs)*/
    type["operator_mul_assign"] = static_cast<Quaternion& (Urho3D::Quaternion::*)(float)>(&Urho3D::Quaternion::operator*=) ;
    /*Test for equality with another quaternion without epsilon.*//*(const Quaternion &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::Quaternion::*)(const  Quaternion &) const>(&Urho3D::Quaternion::operator==) ;
    /*Test for inequality with another quaternion without epsilon.*//*(const Quaternion &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::Quaternion::*)(const  Quaternion &) const>(&Urho3D::Quaternion::operator!=) ;
    /*Return negation.*//*() const*/
    type["__unm"] = static_cast<Quaternion (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::operator-) ;
    /*Add a quaternion.*//*(const Quaternion &rhs) const*/
    type["__add"] = static_cast<Quaternion (Urho3D::Quaternion::*)(const  Quaternion &) const>(&Urho3D::Quaternion::operator+) ;
    /*Subtract a quaternion.*//*(const Quaternion &rhs) const*/
    type["__sub"] = static_cast<Quaternion (Urho3D::Quaternion::*)(const  Quaternion &) const>(&Urho3D::Quaternion::operator-) ;
    /*Define from an angle (in degrees) and axis.*//*(float angle, const Vector3 &axis)*/
    type["FromAngleAxis"] = static_cast<void (Urho3D::Quaternion::*)(float, const  Vector3 &)>(&Urho3D::Quaternion::FromAngleAxis) ;
    /*Define from Euler angles (in degrees). Equivalent to Y*X*Z.*//*(float x, float y, float z)*/
    type["FromEulerAngles"] = static_cast<void (Urho3D::Quaternion::*)(float, float, float)>(&Urho3D::Quaternion::FromEulerAngles) ;
    /*Define from the rotation difference between two direction vectors.*//*(const Vector3 &start, const Vector3 &end)*/
    type["FromRotationTo"] = static_cast<void (Urho3D::Quaternion::*)(const  Vector3 &, const  Vector3 &)>(&Urho3D::Quaternion::FromRotationTo) ;
    /*Define from orthonormal axes.*//*(const Vector3 &xAxis, const Vector3 &yAxis, const Vector3 &zAxis)*/
    type["FromAxes"] = static_cast<void (Urho3D::Quaternion::*)(const  Vector3 &, const  Vector3 &, const  Vector3 &)>(&Urho3D::Quaternion::FromAxes) ;
    /*Define from a rotation matrix.*//*(const Matrix3 &matrix)*/
    type["FromRotationMatrix"] = static_cast<void (Urho3D::Quaternion::*)(const  Matrix3 &)>(&Urho3D::Quaternion::FromRotationMatrix) ;
    /*Normalize to unit length.*//*()*/
    type["Normalize"] = static_cast<void (Urho3D::Quaternion::*)()>(&Urho3D::Quaternion::Normalize) ;
    /*Return normalized to unit length.*//*() const*/
    type["Normalized"] = static_cast<Quaternion (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::Normalized) ;
    /*Return inverse.*//*() const*/
    type["Inverse"] = static_cast<Quaternion (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::Inverse) ;
    /*Return squared length.*//*() const*/
    type["LengthSquared"] = static_cast<float (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::LengthSquared) ;
    /*Calculate dot product.*//*(const Quaternion &rhs) const*/
    type["DotProduct"] = static_cast<float (Urho3D::Quaternion::*)(const  Quaternion &) const>(&Urho3D::Quaternion::DotProduct) ;
    /*Test for equality with another quaternion with epsilon.*//*(const Quaternion &rhs) const*/
    type["Equals"] = static_cast<bool (Urho3D::Quaternion::*)(const  Quaternion &) const>(&Urho3D::Quaternion::Equals) ;
    /*Return whether any element is NaN.*//*() const*/
    type["IsNaN"] = static_cast<bool (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::IsNaN) ;
    /*Return whether any element is Inf.*//*() const*/
    type["IsInf"] = static_cast<bool (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::IsInf) ;
    /*Return conjugate.*//*() const*/
    type["Conjugate"] = static_cast<Quaternion (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::Conjugate) ;
    /*Return Euler angles in degrees. BIND_AS_PROPERTY*//*() const*/
    type["EulerAngles"] = static_cast<Vector3 (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::EulerAngles) ;
    /*Return yaw angle in degrees. BIND_AS_ALIAS_get_yaw*//*() const*/
    type["YawAngle"] = static_cast<float (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::YawAngle) ;
    /*Return pitch angle in degrees. BIND_AS_ALIAS_get_pitch*//*() const*/
    type["PitchAngle"] = static_cast<float (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::PitchAngle) ;
    /*Return roll angle in degrees. BIND_AS_ALIAS_get_roll*//*() const*/
    type["RollAngle"] = static_cast<float (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::RollAngle) ;
    /*Return rotation axis. BIND_AS_PROPERTY*//*() const*/
    type["Axis"] = static_cast<Vector3 (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::Axis) ;
    /*Return rotation angle. BIND_AS_PROPERTY*//*() const*/
    type["Angle"] = static_cast<float (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::Angle) ;
    /*Return the rotation matrix that corresponds to this quaternion. BIND_AS_PROPERTY*//*() const*/
    type["RotationMatrix"] = static_cast<Matrix3 (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::RotationMatrix) ;
    /*Spherical interpolation with another quaternion.*//*(const Quaternion &rhs, float t) const*/
    type["Slerp"] = static_cast<Quaternion (Urho3D::Quaternion::*)(const  Quaternion &, float) const>(&Urho3D::Quaternion::Slerp) ;
    /*Return float data.*//*() const*/
    type["Data"] = static_cast<const float* (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::Data) ;
    /*Return as string.*//*() const*/
    type["__tostring"] = static_cast<String (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::ToString) ;
    type["__mul"] = sol::overload(
        static_cast<Quaternion (Urho3D::Quaternion::*)(float) const>(&Urho3D::Quaternion::operator*) ,
        static_cast<Quaternion (Urho3D::Quaternion::*)(const  Quaternion &) const>(&Urho3D::Quaternion::operator*) ,
        static_cast<Vector3 (Urho3D::Quaternion::*)(const  Vector3 &) const>(&Urho3D::Quaternion::operator*)  );
    type["FromLookRotation"] = sol::overload(
        static_cast<bool (Urho3D::Quaternion::*)(const  Vector3 &, const  Vector3 &)>(&Urho3D::Quaternion::FromLookRotation) ,
        [](Urho3D::Quaternion& self, const  Vector3 & direction){ return self.FromLookRotation(direction); } );
    type["Nlerp"] = sol::overload(
        static_cast<Quaternion (Urho3D::Quaternion::*)(const  Quaternion &, float, bool) const>(&Urho3D::Quaternion::Nlerp) ,
        [](Urho3D::Quaternion& self, const  Quaternion & rhs, float t){ return self.Nlerp(rhs, t); } );
    type["angle"] = sol::property(static_cast<float (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::Angle) );
    type["axis"] = sol::property(static_cast<Vector3 (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::Axis) );
    type["eulerAngles"] = sol::property(static_cast<Vector3 (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::EulerAngles) );
    type["pitchAngle"] = sol::property(static_cast<float (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::PitchAngle) );
    type["rollAngle"] = sol::property(static_cast<float (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::RollAngle) );
    type["rotationMatrix"] = sol::property(static_cast<Matrix3 (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::RotationMatrix) );
    type["yawAngle"] = sol::property(static_cast<float (Urho3D::Quaternion::*)() const>(&Urho3D::Quaternion::YawAngle) );
    type["w_"] = &Urho3D::Quaternion::w_;
    type["x_"] = &Urho3D::Quaternion::x_;
    type["y_"] = &Urho3D::Quaternion::y_;
    type["z_"] = &Urho3D::Quaternion::z_;

}

