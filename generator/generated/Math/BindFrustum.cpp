
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Frustum.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Frustum.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Frustum.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Matrix4.h>
#include <Urho3D/Math/Plane.h>
#include <Urho3D/Math/Random.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/Sphere.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Frustum(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Frustum>( "Frustum"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Frustum(),
        Urho3D::Frustum(const  Frustum &)>();

// Members

    /*Assign from another frustum.*//*(const Frustum &rhs) noexcept*/
    type["operator_assign"] = static_cast<Frustum& (Urho3D::Frustum::*)(const  Frustum &) noexcept>(&Urho3D::Frustum::operator=) ;
    /*Define a split (limited) frustum from a projection matrix, with near & far distances specified.*//*(const Matrix4 &projection, float near, float far)*/
    type["DefineSplit"] = static_cast<void (Urho3D::Frustum::*)(const  Matrix4 &, float, float)>(&Urho3D::Frustum::DefineSplit) ;
    /*Return distance of a point to the frustum, or 0 if inside.*//*(const Vector3 &point) const*/
    type["Distance"] = static_cast<float (Urho3D::Frustum::*)(const  Vector3 &) const>(&Urho3D::Frustum::Distance) ;
    /*Return projected by a 4x4 projection matrix.*//*(const Matrix4 &projection) const*/
    type["Projected"] = static_cast<Rect (Urho3D::Frustum::*)(const  Matrix4 &) const>(&Urho3D::Frustum::Projected) ;
    /*Update the planes. Called internally.*//*()*/
    type["UpdatePlanes"] = static_cast<void (Urho3D::Frustum::*)()>(&Urho3D::Frustum::UpdatePlanes) ;
    type["Define"] = sol::overload(
        static_cast<void (Urho3D::Frustum::*)(float, float, float, float, float, const  Matrix3x4 &)>(&Urho3D::Frustum::Define) ,
        [](Urho3D::Frustum& self, float fov, float aspectRatio, float zoom, float nearZ, float farZ){ self.Define(fov, aspectRatio, zoom, nearZ, farZ); },
        static_cast<void (Urho3D::Frustum::*)(const  Vector3 &, const  Vector3 &, const  Matrix3x4 &)>(&Urho3D::Frustum::Define) ,
        [](Urho3D::Frustum& self, const  Vector3 & near, const  Vector3 & far){ self.Define(near, far); },
        static_cast<void (Urho3D::Frustum::*)(const  BoundingBox &, const  Matrix3x4 &)>(&Urho3D::Frustum::Define) ,
        [](Urho3D::Frustum& self, const  BoundingBox & box){ self.Define(box); },
        static_cast<void (Urho3D::Frustum::*)(const  Matrix4 &)>(&Urho3D::Frustum::Define)  );
    type["DefineOrtho"] = sol::overload(
        static_cast<void (Urho3D::Frustum::*)(float, float, float, float, float, const  Matrix3x4 &)>(&Urho3D::Frustum::DefineOrtho) ,
        [](Urho3D::Frustum& self, float orthoSize, float aspectRatio, float zoom, float nearZ, float farZ){ self.DefineOrtho(orthoSize, aspectRatio, zoom, nearZ, farZ); } );
    type["Transform"] = sol::overload(
        static_cast<void (Urho3D::Frustum::*)(const  Matrix3 &)>(&Urho3D::Frustum::Transform) ,
        static_cast<void (Urho3D::Frustum::*)(const  Matrix3x4 &)>(&Urho3D::Frustum::Transform)  );
    type["IsInside"] = sol::overload(
        static_cast<Intersection (Urho3D::Frustum::*)(const  Vector3 &) const>(&Urho3D::Frustum::IsInside) ,
        static_cast<Intersection (Urho3D::Frustum::*)(const  Sphere &) const>(&Urho3D::Frustum::IsInside) ,
        static_cast<Intersection (Urho3D::Frustum::*)(const  BoundingBox &) const>(&Urho3D::Frustum::IsInside)  );
    type["IsInsideFast"] = sol::overload(
        static_cast<Intersection (Urho3D::Frustum::*)(const  Sphere &) const>(&Urho3D::Frustum::IsInsideFast) ,
        static_cast<Intersection (Urho3D::Frustum::*)(const  BoundingBox &) const>(&Urho3D::Frustum::IsInsideFast)  );
    type["Transformed"] = sol::overload(
        static_cast<Frustum (Urho3D::Frustum::*)(const  Matrix3 &) const>(&Urho3D::Frustum::Transformed) ,
        static_cast<Frustum (Urho3D::Frustum::*)(const  Matrix3x4 &) const>(&Urho3D::Frustum::Transformed)  );
# if 0 // SKIPPED
    type["planes_"] = &Urho3D::Frustum::planes_;
# endif
//invalid literal for int() with base 10: 'NUM_FRUSTUM_PLANES'
# if 0 // SKIPPED
    type["vertices_"] = &Urho3D::Frustum::vertices_;
# endif
//invalid literal for int() with base 10: 'NUM_FRUSTUM_VERTICES'

}

