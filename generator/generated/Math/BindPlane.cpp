
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Plane.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Plane.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Matrix4.h>
#include <Urho3D/Math/Plane.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Math/Vector4.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Plane(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Plane>( "Plane"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Plane(),
        Urho3D::Plane(const  Plane &),
        Urho3D::Plane(const  Vector3 &, const  Vector3 &, const  Vector3 &),
        Urho3D::Plane(const  Vector3 &, const  Vector3 &),
        Urho3D::Plane(const  Vector4 &)>();

// Members

    /*Assign from another plane.*//*(const Plane &rhs) noexcept=default*/
    type["operator_assign"] = static_cast<Plane& (Urho3D::Plane::*)(const  Plane &) noexcept>(&Urho3D::Plane::operator=) ;
    /*Project a point on the plane.*//*(const Vector3 &point) const*/
    type["Project"] = static_cast<Vector3 (Urho3D::Plane::*)(const  Vector3 &) const>(&Urho3D::Plane::Project) ;
    /*Return signed distance to a point.*//*(const Vector3 &point) const*/
    type["Distance"] = static_cast<float (Urho3D::Plane::*)(const  Vector3 &) const>(&Urho3D::Plane::Distance) ;
    /*Reflect a normalized direction vector.*//*(const Vector3 &direction) const*/
    type["Reflect"] = static_cast<Vector3 (Urho3D::Plane::*)(const  Vector3 &) const>(&Urho3D::Plane::Reflect) ;
    /*Return a reflection matrix. BIND_AS_PROPERTY*//*() const*/
    type["ReflectionMatrix"] = static_cast<Matrix3x4 (Urho3D::Plane::*)() const>(&Urho3D::Plane::ReflectionMatrix) ;
    /*Return as a vector.*//*() const*/
    type["ToVector4"] = static_cast<Vector4 (Urho3D::Plane::*)() const>(&Urho3D::Plane::ToVector4) ;
    type["Define"] = sol::overload(
        static_cast<void (Urho3D::Plane::*)(const  Vector3 &, const  Vector3 &, const  Vector3 &)>(&Urho3D::Plane::Define) ,
        static_cast<void (Urho3D::Plane::*)(const  Vector3 &, const  Vector3 &)>(&Urho3D::Plane::Define) ,
        static_cast<void (Urho3D::Plane::*)(const  Vector4 &)>(&Urho3D::Plane::Define)  );
    type["Transform"] = sol::overload(
        static_cast<void (Urho3D::Plane::*)(const  Matrix3 &)>(&Urho3D::Plane::Transform) ,
        static_cast<void (Urho3D::Plane::*)(const  Matrix3x4 &)>(&Urho3D::Plane::Transform) ,
        static_cast<void (Urho3D::Plane::*)(const  Matrix4 &)>(&Urho3D::Plane::Transform)  );
    type["Transformed"] = sol::overload(
        static_cast<Plane (Urho3D::Plane::*)(const  Matrix3 &) const>(&Urho3D::Plane::Transformed) ,
        static_cast<Plane (Urho3D::Plane::*)(const  Matrix3x4 &) const>(&Urho3D::Plane::Transformed) ,
        static_cast<Plane (Urho3D::Plane::*)(const  Matrix4 &) const>(&Urho3D::Plane::Transformed)  );
    type["reflectionMatrix"] = sol::property(static_cast<Matrix3x4 (Urho3D::Plane::*)() const>(&Urho3D::Plane::ReflectionMatrix) );
    type["normal_"] = &Urho3D::Plane::normal_;
    type["absNormal_"] = &Urho3D::Plane::absNormal_;
    type["d_"] = &Urho3D::Plane::d_;

}

