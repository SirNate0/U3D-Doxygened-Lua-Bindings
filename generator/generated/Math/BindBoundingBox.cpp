
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/BoundingBox.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Frustum.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Matrix4.h>
#include <Urho3D/Math/Polyhedron.h>
#include <Urho3D/Math/Random.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/Sphere.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_BoundingBox(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::BoundingBox>( "BoundingBox"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::BoundingBox(),
        Urho3D::BoundingBox(const  BoundingBox &),
        Urho3D::BoundingBox(const  Rect &),
        Urho3D::BoundingBox(const  Vector3 &, const  Vector3 &),
        Urho3D::BoundingBox(float, float),
        Urho3D::BoundingBox(const  Vector3 *, unsigned),
        Urho3D::BoundingBox(const  Frustum &),
        Urho3D::BoundingBox(const  Polyhedron &),
        Urho3D::BoundingBox(const  Sphere &)>();

// Members

    /*Test for equality with another bounding box.*//*(const BoundingBox &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::BoundingBox::*)(const  BoundingBox &) const>(&Urho3D::BoundingBox::operator==) ;
    /*Test for inequality with another bounding box.*//*(const BoundingBox &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::BoundingBox::*)(const  BoundingBox &) const>(&Urho3D::BoundingBox::operator!=) ;
    /*Clip with another bounding box. The box can become degenerate (undefined) as a result.*//*(const BoundingBox &box)*/
    type["Clip"] = static_cast<void (Urho3D::BoundingBox::*)(const  BoundingBox &)>(&Urho3D::BoundingBox::Clip) ;
    /*Clear to undefined state.*//*()*/
    type["Clear"] = static_cast<void (Urho3D::BoundingBox::*)()>(&Urho3D::BoundingBox::Clear) ;
    /*Return true if this bounding box is defined via a previous call to  Define() or  Merge().*//*() const*/
    type["Defined"] = static_cast<bool (Urho3D::BoundingBox::*)() const>(&Urho3D::BoundingBox::Defined) ;
    /*Return center. BIND_AS_PROPERTY*//*() const*/
    type["Center"] = static_cast<Vector3 (Urho3D::BoundingBox::*)() const>(&Urho3D::BoundingBox::Center) ;
    /*Return size. BIND_AS_PROPERTY*//*() const*/
    type["Size"] = static_cast<Vector3 (Urho3D::BoundingBox::*)() const>(&Urho3D::BoundingBox::Size) ;
    /*Return half-size. BIND_AS_PROPERTY*//*() const*/
    type["HalfSize"] = static_cast<Vector3 (Urho3D::BoundingBox::*)() const>(&Urho3D::BoundingBox::HalfSize) ;
    /*Return projected by a 4x4 projection matrix.*//*(const Matrix4 &projection) const*/
    type["Projected"] = static_cast<Rect (Urho3D::BoundingBox::*)(const  Matrix4 &) const>(&Urho3D::BoundingBox::Projected) ;
    /*Return distance to point.*//*(const Vector3 &point) const*/
    type["DistanceToPoint"] = static_cast<float (Urho3D::BoundingBox::*)(const  Vector3 &) const>(&Urho3D::BoundingBox::DistanceToPoint) ;
    /*Return as string.*//*() const*/
    type["__tostring"] = static_cast<String (Urho3D::BoundingBox::*)() const>(&Urho3D::BoundingBox::ToString) ;
    type["operator_assign"] = sol::overload(
        static_cast<BoundingBox& (Urho3D::BoundingBox::*)(const  BoundingBox &) noexcept>(&Urho3D::BoundingBox::operator=) ,
        static_cast<BoundingBox& (Urho3D::BoundingBox::*)(const  Rect &) noexcept>(&Urho3D::BoundingBox::operator=)  );
    type["Define"] = sol::overload(
        static_cast<void (Urho3D::BoundingBox::*)(const  BoundingBox &)>(&Urho3D::BoundingBox::Define) ,
        static_cast<void (Urho3D::BoundingBox::*)(const  Rect &)>(&Urho3D::BoundingBox::Define) ,
        static_cast<void (Urho3D::BoundingBox::*)(const  Vector3 &, const  Vector3 &)>(&Urho3D::BoundingBox::Define) ,
        static_cast<void (Urho3D::BoundingBox::*)(float, float)>(&Urho3D::BoundingBox::Define) ,
        static_cast<void (Urho3D::BoundingBox::*)(const  Vector3 &)>(&Urho3D::BoundingBox::Define) ,
        static_cast<void (Urho3D::BoundingBox::*)(const  Vector3 *, unsigned)>(&Urho3D::BoundingBox::Define) ,
        static_cast<void (Urho3D::BoundingBox::*)(const  Frustum &)>(&Urho3D::BoundingBox::Define) ,
        static_cast<void (Urho3D::BoundingBox::*)(const  Polyhedron &)>(&Urho3D::BoundingBox::Define) ,
        static_cast<void (Urho3D::BoundingBox::*)(const  Sphere &)>(&Urho3D::BoundingBox::Define)  );
    type["Merge"] = sol::overload(
        static_cast<void (Urho3D::BoundingBox::*)(const  Vector3 &)>(&Urho3D::BoundingBox::Merge) ,
        static_cast<void (Urho3D::BoundingBox::*)(const  BoundingBox &)>(&Urho3D::BoundingBox::Merge) ,
        static_cast<void (Urho3D::BoundingBox::*)(const  Vector3 *, unsigned)>(&Urho3D::BoundingBox::Merge) ,
        static_cast<void (Urho3D::BoundingBox::*)(const  Frustum &)>(&Urho3D::BoundingBox::Merge) ,
        static_cast<void (Urho3D::BoundingBox::*)(const  Polyhedron &)>(&Urho3D::BoundingBox::Merge) ,
        static_cast<void (Urho3D::BoundingBox::*)(const  Sphere &)>(&Urho3D::BoundingBox::Merge)  );
    type["Transform"] = sol::overload(
        static_cast<void (Urho3D::BoundingBox::*)(const  Matrix3 &)>(&Urho3D::BoundingBox::Transform) ,
        static_cast<void (Urho3D::BoundingBox::*)(const  Matrix3x4 &)>(&Urho3D::BoundingBox::Transform)  );
    type["Transformed"] = sol::overload(
        static_cast<BoundingBox (Urho3D::BoundingBox::*)(const  Matrix3 &) const>(&Urho3D::BoundingBox::Transformed) ,
        static_cast<BoundingBox (Urho3D::BoundingBox::*)(const  Matrix3x4 &) const>(&Urho3D::BoundingBox::Transformed)  );
    type["IsInside"] = sol::overload(
        static_cast<Intersection (Urho3D::BoundingBox::*)(const  Vector3 &) const>(&Urho3D::BoundingBox::IsInside) ,
        static_cast<Intersection (Urho3D::BoundingBox::*)(const  BoundingBox &) const>(&Urho3D::BoundingBox::IsInside) ,
        static_cast<Intersection (Urho3D::BoundingBox::*)(const  Sphere &) const>(&Urho3D::BoundingBox::IsInside)  );
    type["IsInsideFast"] = sol::overload(
        static_cast<Intersection (Urho3D::BoundingBox::*)(const  BoundingBox &) const>(&Urho3D::BoundingBox::IsInsideFast) ,
        static_cast<Intersection (Urho3D::BoundingBox::*)(const  Sphere &) const>(&Urho3D::BoundingBox::IsInsideFast)  );
    type["center"] = sol::property(static_cast<Vector3 (Urho3D::BoundingBox::*)() const>(&Urho3D::BoundingBox::Center) );
    type["halfSize"] = sol::property(static_cast<Vector3 (Urho3D::BoundingBox::*)() const>(&Urho3D::BoundingBox::HalfSize) );
    type["size"] = sol::property(static_cast<Vector3 (Urho3D::BoundingBox::*)() const>(&Urho3D::BoundingBox::Size) );
    type["min_"] = &Urho3D::BoundingBox::min_;
    type["dummyMin_"] = &Urho3D::BoundingBox::dummyMin_;
    type["max_"] = &Urho3D::BoundingBox::max_;
    type["dummyMax_"] = &Urho3D::BoundingBox::dummyMax_;

}

