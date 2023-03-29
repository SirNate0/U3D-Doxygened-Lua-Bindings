
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Vector3.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_IntVector3(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::IntVector3>( "IntVector3"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::IntVector3(),
        Urho3D::IntVector3(int, int, int),
        Urho3D::IntVector3(const int *),
        Urho3D::IntVector3(const  IntVector3 &)>();

// Members

    /*Assign from another vector.*//*(const IntVector3 &rhs) noexcept=default*/
    type["operator_assign"] = static_cast<IntVector3& (Urho3D::IntVector3::*)(const  IntVector3 &) noexcept>(&Urho3D::IntVector3::operator=) ;
    /*Test for equality with another vector.*//*(const IntVector3 &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::IntVector3::*)(const  IntVector3 &) const>(&Urho3D::IntVector3::operator==) ;
    /*Test for inequality with another vector.*//*(const IntVector3 &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::IntVector3::*)(const  IntVector3 &) const>(&Urho3D::IntVector3::operator!=) ;
    /*Add a vector.*//*(const IntVector3 &rhs) const*/
    type["__add"] = static_cast<IntVector3 (Urho3D::IntVector3::*)(const  IntVector3 &) const>(&Urho3D::IntVector3::operator+) ;
    /*Return negation.*//*() const*/
    type["__unm"] = static_cast<IntVector3 (Urho3D::IntVector3::*)() const>(&Urho3D::IntVector3::operator-) ;
    /*Subtract a vector.*//*(const IntVector3 &rhs) const*/
    type["__sub"] = static_cast<IntVector3 (Urho3D::IntVector3::*)(const  IntVector3 &) const>(&Urho3D::IntVector3::operator-) ;
    /*Add-assign a vector.*//*(const IntVector3 &rhs)*/
    type["operator_add_assign"] = static_cast<IntVector3& (Urho3D::IntVector3::*)(const  IntVector3 &)>(&Urho3D::IntVector3::operator+=) ;
    /*Subtract-assign a vector.*//*(const IntVector3 &rhs)*/
    type["operator_sub_assign"] = static_cast<IntVector3& (Urho3D::IntVector3::*)(const  IntVector3 &)>(&Urho3D::IntVector3::operator-=) ;
    /*Return integer data.*//*() const*/
    type["Data"] = static_cast<const int* (Urho3D::IntVector3::*)() const>(&Urho3D::IntVector3::Data) ;
    /*Return as string.*//*() const*/
    type["__tostring"] = static_cast<String (Urho3D::IntVector3::*)() const>(&Urho3D::IntVector3::ToString) ;
    /*Return hash value for  HashSet &  HashMap.*//*() const*/
    type["ToHash"] = static_cast<unsigned (Urho3D::IntVector3::*)() const>(&Urho3D::IntVector3::ToHash) ;
    /*Return length.*//*() const*/
    type["Length"] = static_cast<float (Urho3D::IntVector3::*)() const>(&Urho3D::IntVector3::Length) ;
    type["__mul"] = sol::overload(
        static_cast<IntVector3 (Urho3D::IntVector3::*)(int) const>(&Urho3D::IntVector3::operator*) ,
        static_cast<IntVector3 (Urho3D::IntVector3::*)(const  IntVector3 &) const>(&Urho3D::IntVector3::operator*)  );
    type["__div"] = sol::overload(
        static_cast<IntVector3 (Urho3D::IntVector3::*)(int) const>(&Urho3D::IntVector3::operator/) ,
        static_cast<IntVector3 (Urho3D::IntVector3::*)(const  IntVector3 &) const>(&Urho3D::IntVector3::operator/)  );
    type["operator_mul_assign"] = sol::overload(
        static_cast<IntVector3& (Urho3D::IntVector3::*)(int)>(&Urho3D::IntVector3::operator*=) ,
        static_cast<IntVector3& (Urho3D::IntVector3::*)(const  IntVector3 &)>(&Urho3D::IntVector3::operator*=)  );
    type["operator_div_assign"] = sol::overload(
        static_cast<IntVector3& (Urho3D::IntVector3::*)(int)>(&Urho3D::IntVector3::operator/=) ,
        static_cast<IntVector3& (Urho3D::IntVector3::*)(const  IntVector3 &)>(&Urho3D::IntVector3::operator/=)  );
    type["x_"] = &Urho3D::IntVector3::x_;
    type["y_"] = &Urho3D::IntVector3::y_;
    type["z_"] = &Urho3D::IntVector3::z_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Vector3.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Vector3(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Vector3>( "Vector3"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Vector3(),
        Urho3D::Vector3(const  Vector3 &),
        Urho3D::Vector3(const  Vector2 &, float),
        Urho3D::Vector3(const  Vector2 &),
        Urho3D::Vector3(const  IntVector3 &),
        Urho3D::Vector3(float, float, float),
        Urho3D::Vector3(float, float),
        Urho3D::Vector3(const float *)>();

// Members

    /*Assign from another vector.*//*(const Vector3 &rhs) noexcept=default*/
    type["operator_assign"] = static_cast<Vector3& (Urho3D::Vector3::*)(const  Vector3 &) noexcept>(&Urho3D::Vector3::operator=) ;
    /*Test for equality with another vector without epsilon.*//*(const Vector3 &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::Vector3::*)(const  Vector3 &) const>(&Urho3D::Vector3::operator==) ;
    /*Test for inequality with another vector without epsilon.*//*(const Vector3 &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::Vector3::*)(const  Vector3 &) const>(&Urho3D::Vector3::operator!=) ;
    /*Add a vector.*//*(const Vector3 &rhs) const*/
    type["__add"] = static_cast<Vector3 (Urho3D::Vector3::*)(const  Vector3 &) const>(&Urho3D::Vector3::operator+) ;
    /*Return negation.*//*() const*/
    type["__unm"] = static_cast<Vector3 (Urho3D::Vector3::*)() const>(&Urho3D::Vector3::operator-) ;
    /*Subtract a vector.*//*(const Vector3 &rhs) const*/
    type["__sub"] = static_cast<Vector3 (Urho3D::Vector3::*)(const  Vector3 &) const>(&Urho3D::Vector3::operator-) ;
    /*Add-assign a vector.*//*(const Vector3 &rhs)*/
    type["operator_add_assign"] = static_cast<Vector3& (Urho3D::Vector3::*)(const  Vector3 &)>(&Urho3D::Vector3::operator+=) ;
    /*Subtract-assign a vector.*//*(const Vector3 &rhs)*/
    type["operator_sub_assign"] = static_cast<Vector3& (Urho3D::Vector3::*)(const  Vector3 &)>(&Urho3D::Vector3::operator-=) ;
    /*Normalize to unit length.*//*()*/
    type["Normalize"] = static_cast<void (Urho3D::Vector3::*)()>(&Urho3D::Vector3::Normalize) ;
    /*Return length. BIND_AS_PROPERTY*//*() const*/
    type["Length"] = static_cast<float (Urho3D::Vector3::*)() const>(&Urho3D::Vector3::Length) ;
    /*Return squared length. BIND_AS_PROPERTY*//*() const*/
    type["LengthSquared"] = static_cast<float (Urho3D::Vector3::*)() const>(&Urho3D::Vector3::LengthSquared) ;
    /*Calculate dot product.*//*(const Vector3 &rhs) const*/
    type["DotProduct"] = static_cast<float (Urho3D::Vector3::*)(const  Vector3 &) const>(&Urho3D::Vector3::DotProduct) ;
    /*Calculate absolute dot product.*//*(const Vector3 &rhs) const*/
    type["AbsDotProduct"] = static_cast<float (Urho3D::Vector3::*)(const  Vector3 &) const>(&Urho3D::Vector3::AbsDotProduct) ;
    /*Project direction vector onto axis.*//*(const Vector3 &axis) const*/
    type["ProjectOntoAxis"] = static_cast<float (Urho3D::Vector3::*)(const  Vector3 &) const>(&Urho3D::Vector3::ProjectOntoAxis) ;
    /*Project position vector onto plane with given origin and normal.*//*(const Vector3 &origin, const Vector3 &normal) const*/
    type["ProjectOntoPlane"] = static_cast<Vector3 (Urho3D::Vector3::*)(const  Vector3 &, const  Vector3 &) const>(&Urho3D::Vector3::ProjectOntoPlane) ;
    /*Calculate distance to another position vector.*//*(const Vector3 &point) const*/
    type["DistanceToPoint"] = static_cast<float (Urho3D::Vector3::*)(const  Vector3 &) const>(&Urho3D::Vector3::DistanceToPoint) ;
    /*Calculate distance to the plane with given origin and normal.*//*(const Vector3 &origin, const Vector3 &normal) const*/
    type["DistanceToPlane"] = static_cast<float (Urho3D::Vector3::*)(const  Vector3 &, const  Vector3 &) const>(&Urho3D::Vector3::DistanceToPlane) ;
    /*Make vector orthogonal to the axis.*//*(const Vector3 &axis) const*/
    type["Orthogonalize"] = static_cast<Vector3 (Urho3D::Vector3::*)(const  Vector3 &) const>(&Urho3D::Vector3::Orthogonalize) ;
    /*Calculate cross product.*//*(const Vector3 &rhs) const*/
    type["CrossProduct"] = static_cast<Vector3 (Urho3D::Vector3::*)(const  Vector3 &) const>(&Urho3D::Vector3::CrossProduct) ;
    /*Return absolute vector.*//*() const*/
    type["Abs"] = static_cast<Vector3 (Urho3D::Vector3::*)() const>(&Urho3D::Vector3::Abs) ;
    /*Linear interpolation with another vector.*//*(const Vector3 &rhs, float t) const*/
    type["Lerp"] = static_cast<Vector3 (Urho3D::Vector3::*)(const  Vector3 &, float) const>(&Urho3D::Vector3::Lerp) ;
    /*Test for equality with another vector with epsilon.*//*(const Vector3 &rhs) const*/
    type["Equals"] = static_cast<bool (Urho3D::Vector3::*)(const  Vector3 &) const>(&Urho3D::Vector3::Equals) ;
    /*Returns the angle between this vector and another vector in degrees.*//*(const Vector3 &rhs) const*/
    type["Angle"] = static_cast<float (Urho3D::Vector3::*)(const  Vector3 &) const>(&Urho3D::Vector3::Angle) ;
    /*Return whether any component is NaN.*//*() const*/
    type["IsNaN"] = static_cast<bool (Urho3D::Vector3::*)() const>(&Urho3D::Vector3::IsNaN) ;
    /*Return whether any component is Inf.*//*() const*/
    type["IsInf"] = static_cast<bool (Urho3D::Vector3::*)() const>(&Urho3D::Vector3::IsInf) ;
    /*Return normalized to unit length.*//*() const*/
    type["Normalized"] = static_cast<Vector3 (Urho3D::Vector3::*)() const>(&Urho3D::Vector3::Normalized) ;
    /*Return float data.*//*() const*/
    type["Data"] = static_cast<const float* (Urho3D::Vector3::*)() const>(&Urho3D::Vector3::Data) ;
    /*Return as string.*//*() const*/
    type["__tostring"] = static_cast<String (Urho3D::Vector3::*)() const>(&Urho3D::Vector3::ToString) ;
    /*Return hash value for  HashSet &  HashMap.*//*() const*/
    type["ToHash"] = static_cast<unsigned (Urho3D::Vector3::*)() const>(&Urho3D::Vector3::ToHash) ;
    type["__mul"] = sol::overload(
        static_cast<Vector3 (Urho3D::Vector3::*)(float) const>(&Urho3D::Vector3::operator*) ,
        static_cast<Vector3 (Urho3D::Vector3::*)(const  Vector3 &) const>(&Urho3D::Vector3::operator*)  );
    type["__div"] = sol::overload(
        static_cast<Vector3 (Urho3D::Vector3::*)(float) const>(&Urho3D::Vector3::operator/) ,
        static_cast<Vector3 (Urho3D::Vector3::*)(const  Vector3 &) const>(&Urho3D::Vector3::operator/)  );
    type["operator_mul_assign"] = sol::overload(
        static_cast<Vector3& (Urho3D::Vector3::*)(float)>(&Urho3D::Vector3::operator*=) ,
        static_cast<Vector3& (Urho3D::Vector3::*)(const  Vector3 &)>(&Urho3D::Vector3::operator*=)  );
    type["operator_div_assign"] = sol::overload(
        static_cast<Vector3& (Urho3D::Vector3::*)(float)>(&Urho3D::Vector3::operator/=) ,
        static_cast<Vector3& (Urho3D::Vector3::*)(const  Vector3 &)>(&Urho3D::Vector3::operator/=)  );
    type["ProjectOntoLine"] = sol::overload(
        static_cast<Vector3 (Urho3D::Vector3::*)(const  Vector3 &, const  Vector3 &, bool) const>(&Urho3D::Vector3::ProjectOntoLine) ,
        [](Urho3D::Vector3& self, const  Vector3 & from, const  Vector3 & to){ return self.ProjectOntoLine(from, to); } );
    type["NormalizedOrDefault"] = sol::overload(
        static_cast<Vector3 (Urho3D::Vector3::*)(const  Vector3 &, float) const>(&Urho3D::Vector3::NormalizedOrDefault) ,
        [](Urho3D::Vector3& self, const  Vector3 & defaultValue){ return self.NormalizedOrDefault(defaultValue); },
        [](Urho3D::Vector3& self){ return self.NormalizedOrDefault(); } );
    type["ReNormalized"] = sol::overload(
        static_cast<Vector3 (Urho3D::Vector3::*)(float, float, const  Vector3 &, float) const>(&Urho3D::Vector3::ReNormalized) ,
        [](Urho3D::Vector3& self, float minLength, float maxLength, const  Vector3 & defaultValue){ return self.ReNormalized(minLength, maxLength, defaultValue); },
        [](Urho3D::Vector3& self, float minLength, float maxLength){ return self.ReNormalized(minLength, maxLength); } );
    type["length"] = sol::property(static_cast<float (Urho3D::Vector3::*)() const>(&Urho3D::Vector3::Length) );
    type["lengthSquared"] = sol::property(static_cast<float (Urho3D::Vector3::*)() const>(&Urho3D::Vector3::LengthSquared) );
    type["x_"] = &Urho3D::Vector3::x_;
    type["y_"] = &Urho3D::Vector3::y_;
    type["z_"] = &Urho3D::Vector3::z_;

}

