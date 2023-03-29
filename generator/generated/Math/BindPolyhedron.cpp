
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Polyhedron.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Polyhedron.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Frustum.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Plane.h>
#include <Urho3D/Math/Polyhedron.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Polyhedron(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Polyhedron>( "Polyhedron"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Polyhedron(),
        Urho3D::Polyhedron(const  Polyhedron &),
        Urho3D::Polyhedron(const  Vector<  PODVector<  Vector3 > > &),
        Urho3D::Polyhedron(const  BoundingBox &),
        Urho3D::Polyhedron(const  Frustum &)>();

// Members

    /*Assign from another polyhedron.*//*(const Polyhedron &rhs)*/
    type["operator_assign"] = static_cast<Polyhedron& (Urho3D::Polyhedron::*)(const  Polyhedron &)>(&Urho3D::Polyhedron::operator=) ;
    /*Clear all faces.*//*()*/
    type["Clear"] = static_cast<void (Urho3D::Polyhedron::*)()>(&Urho3D::Polyhedron::Clear) ;
    /*Return whether is empty.*//*() const*/
    type["Empty"] = static_cast<bool (Urho3D::Polyhedron::*)() const>(&Urho3D::Polyhedron::Empty) ;
    type["Define"] = sol::overload(
        static_cast<void (Urho3D::Polyhedron::*)(const  BoundingBox &)>(&Urho3D::Polyhedron::Define) ,
        static_cast<void (Urho3D::Polyhedron::*)(const  Frustum &)>(&Urho3D::Polyhedron::Define)  );
    type["AddFace"] = sol::overload(
        static_cast<void (Urho3D::Polyhedron::*)(const  Vector3 &, const  Vector3 &, const  Vector3 &)>(&Urho3D::Polyhedron::AddFace) ,
        static_cast<void (Urho3D::Polyhedron::*)(const  Vector3 &, const  Vector3 &, const  Vector3 &, const  Vector3 &)>(&Urho3D::Polyhedron::AddFace) ,
        static_cast<void (Urho3D::Polyhedron::*)(const  PODVector<  Vector3 > &)>(&Urho3D::Polyhedron::AddFace)  );
    type["Clip"] = sol::overload(
        static_cast<void (Urho3D::Polyhedron::*)(const  Plane &)>(&Urho3D::Polyhedron::Clip) ,
        static_cast<void (Urho3D::Polyhedron::*)(const  BoundingBox &)>(&Urho3D::Polyhedron::Clip) ,
        static_cast<void (Urho3D::Polyhedron::*)(const  Frustum &)>(&Urho3D::Polyhedron::Clip)  );
    type["Transform"] = sol::overload(
        static_cast<void (Urho3D::Polyhedron::*)(const  Matrix3 &)>(&Urho3D::Polyhedron::Transform) ,
        static_cast<void (Urho3D::Polyhedron::*)(const  Matrix3x4 &)>(&Urho3D::Polyhedron::Transform)  );
    type["Transformed"] = sol::overload(
        static_cast<Polyhedron (Urho3D::Polyhedron::*)(const  Matrix3 &) const>(&Urho3D::Polyhedron::Transformed) ,
        static_cast<Polyhedron (Urho3D::Polyhedron::*)(const  Matrix3x4 &) const>(&Urho3D::Polyhedron::Transformed)  );
    type["faces_"] = &Urho3D::Polyhedron::faces_;

}

