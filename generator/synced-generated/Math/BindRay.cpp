
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Ray.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Ray.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Frustum.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Plane.h>
#include <Urho3D/Math/Ray.h>
#include <Urho3D/Math/Sphere.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Ray(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Ray>( "Ray"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Ray(),
        Urho3D::Ray(const  Vector3 &, const  Vector3 &),
        Urho3D::Ray(const  Ray &)>();

// Members

    /*Assign from another ray.*//*(const Ray &rhs) noexcept=default*/
    type["operator_assign"] = static_cast<Ray& (Urho3D::Ray::*)(const  Ray &) noexcept>(&Urho3D::Ray::operator=) ;
    /*Check for equality with another ray.*//*(const Ray &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::Ray::*)(const  Ray &) const>(&Urho3D::Ray::operator==) ;
    /*Check for inequality with another ray.*//*(const Ray &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::Ray::*)(const  Ray &) const>(&Urho3D::Ray::operator!=) ;
    /*Define from origin and direction. The direction will be normalized.*//*(const Vector3 &origin, const Vector3 &direction)*/
    type["Define"] = static_cast<void (Urho3D::Ray::*)(const  Vector3 &, const  Vector3 &)>(&Urho3D::Ray::Define) ;
    /*Project a point on the ray.*//*(const Vector3 &point) const*/
    type["Project"] = static_cast<Vector3 (Urho3D::Ray::*)(const  Vector3 &) const>(&Urho3D::Ray::Project) ;
    /*Return distance of a point from the ray.*//*(const Vector3 &point) const*/
    type["Distance"] = static_cast<float (Urho3D::Ray::*)(const  Vector3 &) const>(&Urho3D::Ray::Distance) ;
    /*Return closest point to another ray.*//*(const Ray &ray) const*/
    type["ClosestPoint"] = static_cast<Vector3 (Urho3D::Ray::*)(const  Ray &) const>(&Urho3D::Ray::ClosestPoint) ;
    /*Return transformed by a 3x4 matrix. This may result in a non-normalized direction.*//*(const Matrix3x4 &transform) const*/
    type["Transformed"] = static_cast<Ray (Urho3D::Ray::*)(const  Matrix3x4 &) const>(&Urho3D::Ray::Transformed) ;
    type["HitDistance"] = sol::overload(
        static_cast<float (Urho3D::Ray::*)(const  Plane &) const>(&Urho3D::Ray::HitDistance) ,
        static_cast<float (Urho3D::Ray::*)(const  BoundingBox &) const>(&Urho3D::Ray::HitDistance) ,
        static_cast<float (Urho3D::Ray::*)(const  Frustum &, bool) const>(&Urho3D::Ray::HitDistance) ,
        [](Urho3D::Ray& self, const  Frustum & frustum){ return self.HitDistance(frustum); },
        static_cast<float (Urho3D::Ray::*)(const  Sphere &) const>(&Urho3D::Ray::HitDistance) ,
        static_cast<float (Urho3D::Ray::*)(const  Vector3 &, const  Vector3 &, const  Vector3 &, Vector3 *, Vector3 *) const>(&Urho3D::Ray::HitDistance) ,
        [](Urho3D::Ray& self, const  Vector3 & v0, const  Vector3 & v1, const  Vector3 & v2, Vector3 * outNormal){ return self.HitDistance(v0, v1, v2, outNormal); },
        [](Urho3D::Ray& self, const  Vector3 & v0, const  Vector3 & v1, const  Vector3 & v2){ return self.HitDistance(v0, v1, v2); },
        static_cast<float (Urho3D::Ray::*)(const void *, unsigned, unsigned, unsigned, Vector3 *, Vector2 *, unsigned) const>(&Urho3D::Ray::HitDistance) ,
        [](Urho3D::Ray& self, const void * vertexData, unsigned vertexStride, unsigned vertexStart, unsigned vertexCount, Vector3 * outNormal, Vector2 * outUV){ return self.HitDistance(vertexData, vertexStride, vertexStart, vertexCount, outNormal, outUV); },
        [](Urho3D::Ray& self, const void * vertexData, unsigned vertexStride, unsigned vertexStart, unsigned vertexCount, Vector3 * outNormal){ return self.HitDistance(vertexData, vertexStride, vertexStart, vertexCount, outNormal); },
        [](Urho3D::Ray& self, const void * vertexData, unsigned vertexStride, unsigned vertexStart, unsigned vertexCount){ return self.HitDistance(vertexData, vertexStride, vertexStart, vertexCount); },
        static_cast<float (Urho3D::Ray::*)(const void *, unsigned, const void *, unsigned, unsigned, unsigned, Vector3 *, Vector2 *, unsigned) const>(&Urho3D::Ray::HitDistance) ,
        [](Urho3D::Ray& self, const void * vertexData, unsigned vertexStride, const void * indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount, Vector3 * outNormal, Vector2 * outUV){ return self.HitDistance(vertexData, vertexStride, indexData, indexSize, indexStart, indexCount, outNormal, outUV); },
        [](Urho3D::Ray& self, const void * vertexData, unsigned vertexStride, const void * indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount, Vector3 * outNormal){ return self.HitDistance(vertexData, vertexStride, indexData, indexSize, indexStart, indexCount, outNormal); },
        [](Urho3D::Ray& self, const void * vertexData, unsigned vertexStride, const void * indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount){ return self.HitDistance(vertexData, vertexStride, indexData, indexSize, indexStart, indexCount); } );
    type["InsideGeometry"] = sol::overload(
        static_cast<bool (Urho3D::Ray::*)(const void *, unsigned, unsigned, unsigned) const>(&Urho3D::Ray::InsideGeometry) ,
        static_cast<bool (Urho3D::Ray::*)(const void *, unsigned, const void *, unsigned, unsigned, unsigned) const>(&Urho3D::Ray::InsideGeometry)  );
    type["origin_"] = &Urho3D::Ray::origin_;
    type["direction_"] = &Urho3D::Ray::direction_;

}

