
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Spline.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Spline.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Spline.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Math/Vector4.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spline(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Spline>( "Spline"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Spline(),
        Urho3D::Spline(InterpolationMode),
        Urho3D::Spline(const  Vector<  Variant > &, InterpolationMode),
        Urho3D::Spline(const  Vector<  Variant > &),
        Urho3D::Spline(const  Spline &)>();

// Members

    /*Copy operator.*//*(const Spline &rhs)=default*/
    type["operator_assign"] = static_cast<Spline& (Urho3D::Spline::*)(const  Spline &)>(&Urho3D::Spline::operator=) ;
    /*Equality operator.*//*(const Spline &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::Spline::*)(const  Spline &) const>(&Urho3D::Spline::operator==) ;
    /*Inequality operator.*//*(const Spline &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::Spline::*)(const  Spline &) const>(&Urho3D::Spline::operator!=) ;
    /*Return the interpolation mode. BIND_AS_PROPERTY*//*() const*/
    type["GetInterpolationMode"] = static_cast<InterpolationMode (Urho3D::Spline::*)() const>(&Urho3D::Spline::GetInterpolationMode) ;
    /*Return the knots of the spline.*//*() const*/
    type["GetKnots"] = static_cast<const VariantVector& (Urho3D::Spline::*)() const>(&Urho3D::Spline::GetKnots) ;
    /*Return the knot at the specific index. BIND_AS_PROPERTY*//*(unsigned index) const*/
    type["GetKnot"] = static_cast<Variant (Urho3D::Spline::*)(unsigned) const>(&Urho3D::Spline::GetKnot) ;
    /*Return the T of the point of the spline at f from 0.f - 1.f.*//*(float f) const*/
    type["GetPoint"] = static_cast<Variant (Urho3D::Spline::*)(float) const>(&Urho3D::Spline::GetPoint) ;
    /*Set the interpolation mode. BIND_AS_PROPERTY*//*(InterpolationMode interpolationMode)*/
    type["SetInterpolationMode"] = static_cast<void (Urho3D::Spline::*)(InterpolationMode)>(&Urho3D::Spline::SetInterpolationMode) ;
    /*Set the knots of the spline.*//*(const Vector< Variant > &knots)*/
    type["SetKnots"] = static_cast<void (Urho3D::Spline::*)(const  Vector<  Variant > &)>(&Urho3D::Spline::SetKnots) ;
    /*Set the value of an existing knot.*//*(const Variant &knot, unsigned index)*/
    type["SetKnot"] = static_cast<void (Urho3D::Spline::*)(const  Variant &, unsigned)>(&Urho3D::Spline::SetKnot) ;
    /*Clear the spline.*//*()*/
    type["Clear"] = static_cast<void (Urho3D::Spline::*)()>(&Urho3D::Spline::Clear) ;
    type["AddKnot"] = sol::overload(
        static_cast<void (Urho3D::Spline::*)(const  Variant &)>(&Urho3D::Spline::AddKnot) ,
        static_cast<void (Urho3D::Spline::*)(const  Variant &, unsigned)>(&Urho3D::Spline::AddKnot)  );
    type["RemoveKnot"] = sol::overload(
        static_cast<void (Urho3D::Spline::*)()>(&Urho3D::Spline::RemoveKnot) ,
        static_cast<void (Urho3D::Spline::*)(unsigned)>(&Urho3D::Spline::RemoveKnot)  );
    type["interpolationMode"] = sol::property(static_cast<InterpolationMode (Urho3D::Spline::*)() const>(&Urho3D::Spline::GetInterpolationMode) 
        , static_cast<void (Urho3D::Spline::*)(InterpolationMode)>(&Urho3D::Spline::SetInterpolationMode) );
    type["knot"] = sol::property(static_cast<Variant (Urho3D::Spline::*)(unsigned) const>(&Urho3D::Spline::GetKnot) );

}

