
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Sphere.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Sphere.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Frustum.h>
#include <Urho3D/Math/Polyhedron.h>
#include <Urho3D/Math/Random.h>
#include <Urho3D/Math/Sphere.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Sphere(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Sphere>( "Sphere"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Sphere(),
        Urho3D::Sphere(const  Sphere &),
        Urho3D::Sphere(const  Vector3 &, float),
        Urho3D::Sphere(const  Vector3 *, unsigned),
        Urho3D::Sphere(const  BoundingBox &),
        Urho3D::Sphere(const  Frustum &),
        Urho3D::Sphere(const  Polyhedron &)>();

// Members

    /*Assign from another sphere.*//*(const Sphere &rhs) noexcept=default*/
    type["operator_assign"] = static_cast<Sphere& (Urho3D::Sphere::*)(const  Sphere &) noexcept>(&Urho3D::Sphere::operator=) ;
    /*Test for equality with another sphere.*//*(const Sphere &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::Sphere::*)(const  Sphere &) const>(&Urho3D::Sphere::operator==) ;
    /*Test for inequality with another sphere.*//*(const Sphere &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::Sphere::*)(const  Sphere &) const>(&Urho3D::Sphere::operator!=) ;
    /*Clear to undefined state.*//*()*/
    type["Clear"] = static_cast<void (Urho3D::Sphere::*)()>(&Urho3D::Sphere::Clear) ;
    /*Return true if this sphere is defined via a previous call to  Define() or  Merge().*//*() const*/
    type["Defined"] = static_cast<bool (Urho3D::Sphere::*)() const>(&Urho3D::Sphere::Defined) ;
    /*Return distance of a point to the surface, or 0 if inside.*//*(const Vector3 &point) const*/
    type["Distance"] = static_cast<float (Urho3D::Sphere::*)(const  Vector3 &) const>(&Urho3D::Sphere::Distance) ;
    /*Return point on the sphere relative to sphere position.*//*(float theta, float phi) const*/
    type["GetLocalPoint"] = static_cast<Vector3 (Urho3D::Sphere::*)(float, float) const>(&Urho3D::Sphere::GetLocalPoint) ;
    /*Return point on the sphere.*//*(float theta, float phi) const*/
    type["GetPoint"] = static_cast<Vector3 (Urho3D::Sphere::*)(float, float) const>(&Urho3D::Sphere::GetPoint) ;
    type["Define"] = sol::overload(
        static_cast<void (Urho3D::Sphere::*)(const  Sphere &)>(&Urho3D::Sphere::Define) ,
        static_cast<void (Urho3D::Sphere::*)(const  Vector3 &, float)>(&Urho3D::Sphere::Define) ,
        static_cast<void (Urho3D::Sphere::*)(const  Vector3 *, unsigned)>(&Urho3D::Sphere::Define) ,
        static_cast<void (Urho3D::Sphere::*)(const  BoundingBox &)>(&Urho3D::Sphere::Define) ,
        static_cast<void (Urho3D::Sphere::*)(const  Frustum &)>(&Urho3D::Sphere::Define) ,
        static_cast<void (Urho3D::Sphere::*)(const  Polyhedron &)>(&Urho3D::Sphere::Define)  );
    type["Merge"] = sol::overload(
        static_cast<void (Urho3D::Sphere::*)(const  Vector3 &)>(&Urho3D::Sphere::Merge) ,
        static_cast<void (Urho3D::Sphere::*)(const  Vector3 *, unsigned)>(&Urho3D::Sphere::Merge) ,
        static_cast<void (Urho3D::Sphere::*)(const  BoundingBox &)>(&Urho3D::Sphere::Merge) ,
        static_cast<void (Urho3D::Sphere::*)(const  Frustum &)>(&Urho3D::Sphere::Merge) ,
        static_cast<void (Urho3D::Sphere::*)(const  Polyhedron &)>(&Urho3D::Sphere::Merge) ,
        static_cast<void (Urho3D::Sphere::*)(const  Sphere &)>(&Urho3D::Sphere::Merge)  );
    type["IsInside"] = sol::overload(
        static_cast<Intersection (Urho3D::Sphere::*)(const  Vector3 &) const>(&Urho3D::Sphere::IsInside) ,
        static_cast<Intersection (Urho3D::Sphere::*)(const  Sphere &) const>(&Urho3D::Sphere::IsInside) ,
        static_cast<Intersection (Urho3D::Sphere::*)(const  BoundingBox &) const>(&Urho3D::Sphere::IsInside)  );
    type["IsInsideFast"] = sol::overload(
        static_cast<Intersection (Urho3D::Sphere::*)(const  Sphere &) const>(&Urho3D::Sphere::IsInsideFast) ,
        static_cast<Intersection (Urho3D::Sphere::*)(const  BoundingBox &) const>(&Urho3D::Sphere::IsInsideFast)  );
    type["center_"] = &Urho3D::Sphere::center_;
    type["radius_"] = &Urho3D::Sphere::radius_;

}

