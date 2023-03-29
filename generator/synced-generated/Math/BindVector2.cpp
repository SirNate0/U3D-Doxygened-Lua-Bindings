
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Vector2.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_IntVector2(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::IntVector2>( "IntVector2"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::IntVector2(),
        Urho3D::IntVector2(int, int),
        Urho3D::IntVector2(const int *),
        Urho3D::IntVector2(const float *),
        Urho3D::IntVector2(const  IntVector2 &)>();

// Members

    /*Assign from another vector.*//*(const IntVector2 &rhs) noexcept=default*/
    type["operator_assign"] = static_cast<IntVector2& (Urho3D::IntVector2::*)(const  IntVector2 &) noexcept>(&Urho3D::IntVector2::operator=) ;
    /*Test for equality with another vector.*//*(const IntVector2 &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::IntVector2::*)(const  IntVector2 &) const>(&Urho3D::IntVector2::operator==) ;
    /*Test for inequality with another vector.*//*(const IntVector2 &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::IntVector2::*)(const  IntVector2 &) const>(&Urho3D::IntVector2::operator!=) ;
    /*Add a vector.*//*(const IntVector2 &rhs) const*/
    type["__add"] = static_cast<IntVector2 (Urho3D::IntVector2::*)(const  IntVector2 &) const>(&Urho3D::IntVector2::operator+) ;
    /*Return negation.*//*() const*/
    type["__unm"] = static_cast<IntVector2 (Urho3D::IntVector2::*)() const>(&Urho3D::IntVector2::operator-) ;
    /*Subtract a vector.*//*(const IntVector2 &rhs) const*/
    type["__sub"] = static_cast<IntVector2 (Urho3D::IntVector2::*)(const  IntVector2 &) const>(&Urho3D::IntVector2::operator-) ;
    /*Add-assign a vector.*//*(const IntVector2 &rhs)*/
    type["operator_add_assign"] = static_cast<IntVector2& (Urho3D::IntVector2::*)(const  IntVector2 &)>(&Urho3D::IntVector2::operator+=) ;
    /*Subtract-assign a vector.*//*(const IntVector2 &rhs)*/
    type["operator_sub_assign"] = static_cast<IntVector2& (Urho3D::IntVector2::*)(const  IntVector2 &)>(&Urho3D::IntVector2::operator-=) ;
    /*Return integer data.*//*() const*/
    type["Data"] = static_cast<const int* (Urho3D::IntVector2::*)() const>(&Urho3D::IntVector2::Data) ;
    /*Return as string.*//*() const*/
    type["__tostring"] = static_cast<String (Urho3D::IntVector2::*)() const>(&Urho3D::IntVector2::ToString) ;
    /*Return hash value for  HashSet &  HashMap.*//*() const*/
    type["ToHash"] = static_cast<unsigned (Urho3D::IntVector2::*)() const>(&Urho3D::IntVector2::ToHash) ;
    /*Return length.*//*() const*/
    type["Length"] = static_cast<float (Urho3D::IntVector2::*)() const>(&Urho3D::IntVector2::Length) ;
    type["__mul"] = sol::overload(
        static_cast<IntVector2 (Urho3D::IntVector2::*)(int) const>(&Urho3D::IntVector2::operator*) ,
        static_cast<IntVector2 (Urho3D::IntVector2::*)(const  IntVector2 &) const>(&Urho3D::IntVector2::operator*)  );
    type["__div"] = sol::overload(
        static_cast<IntVector2 (Urho3D::IntVector2::*)(int) const>(&Urho3D::IntVector2::operator/) ,
        static_cast<IntVector2 (Urho3D::IntVector2::*)(const  IntVector2 &) const>(&Urho3D::IntVector2::operator/)  );
    type["operator_mul_assign"] = sol::overload(
        static_cast<IntVector2& (Urho3D::IntVector2::*)(int)>(&Urho3D::IntVector2::operator*=) ,
        static_cast<IntVector2& (Urho3D::IntVector2::*)(const  IntVector2 &)>(&Urho3D::IntVector2::operator*=)  );
    type["operator_div_assign"] = sol::overload(
        static_cast<IntVector2& (Urho3D::IntVector2::*)(int)>(&Urho3D::IntVector2::operator/=) ,
        static_cast<IntVector2& (Urho3D::IntVector2::*)(const  IntVector2 &)>(&Urho3D::IntVector2::operator/=)  );
    type["x_"] = &Urho3D::IntVector2::x_;
    type["y_"] = &Urho3D::IntVector2::y_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Vector2.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Vector2(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Vector2>( "Vector2"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Vector2(),
        Urho3D::Vector2(const  Vector2 &),
        Urho3D::Vector2(const  IntVector2 &),
        Urho3D::Vector2(float, float),
        Urho3D::Vector2(const float *)>();

// Members

    /*Assign from another vector.*//*(const Vector2 &rhs) noexcept=default*/
    type["operator_assign"] = static_cast<Vector2& (Urho3D::Vector2::*)(const  Vector2 &) noexcept>(&Urho3D::Vector2::operator=) ;
    /*Test for equality with another vector without epsilon.*//*(const Vector2 &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::Vector2::*)(const  Vector2 &) const>(&Urho3D::Vector2::operator==) ;
    /*Test for inequality with another vector without epsilon.*//*(const Vector2 &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::Vector2::*)(const  Vector2 &) const>(&Urho3D::Vector2::operator!=) ;
    /*Add a vector.*//*(const Vector2 &rhs) const*/
    type["__add"] = static_cast<Vector2 (Urho3D::Vector2::*)(const  Vector2 &) const>(&Urho3D::Vector2::operator+) ;
    /*Return negation.*//*() const*/
    type["__unm"] = static_cast<Vector2 (Urho3D::Vector2::*)() const>(&Urho3D::Vector2::operator-) ;
    /*Subtract a vector.*//*(const Vector2 &rhs) const*/
    type["__sub"] = static_cast<Vector2 (Urho3D::Vector2::*)(const  Vector2 &) const>(&Urho3D::Vector2::operator-) ;
    /*Add-assign a vector.*//*(const Vector2 &rhs)*/
    type["operator_add_assign"] = static_cast<Vector2& (Urho3D::Vector2::*)(const  Vector2 &)>(&Urho3D::Vector2::operator+=) ;
    /*Subtract-assign a vector.*//*(const Vector2 &rhs)*/
    type["operator_sub_assign"] = static_cast<Vector2& (Urho3D::Vector2::*)(const  Vector2 &)>(&Urho3D::Vector2::operator-=) ;
    /*Normalize to unit length.*//*()*/
    type["Normalize"] = static_cast<void (Urho3D::Vector2::*)()>(&Urho3D::Vector2::Normalize) ;
    /*Return length. BIND_AS_PROPERTY*//*() const*/
    type["Length"] = static_cast<float (Urho3D::Vector2::*)() const>(&Urho3D::Vector2::Length) ;
    /*Return squared length. BIND_AS_PROPERTY*//*() const*/
    type["LengthSquared"] = static_cast<float (Urho3D::Vector2::*)() const>(&Urho3D::Vector2::LengthSquared) ;
    /*Calculate dot product.*//*(const Vector2 &rhs) const*/
    type["DotProduct"] = static_cast<float (Urho3D::Vector2::*)(const  Vector2 &) const>(&Urho3D::Vector2::DotProduct) ;
    /*Calculate absolute dot product.*//*(const Vector2 &rhs) const*/
    type["AbsDotProduct"] = static_cast<float (Urho3D::Vector2::*)(const  Vector2 &) const>(&Urho3D::Vector2::AbsDotProduct) ;
    /*Project vector onto axis.*//*(const Vector2 &axis) const*/
    type["ProjectOntoAxis"] = static_cast<float (Urho3D::Vector2::*)(const  Vector2 &) const>(&Urho3D::Vector2::ProjectOntoAxis) ;
    /*Returns the angle between this vector and another vector in degrees.*//*(const Vector2 &rhs) const*/
    type["Angle"] = static_cast<float (Urho3D::Vector2::*)(const  Vector2 &) const>(&Urho3D::Vector2::Angle) ;
    /*Return absolute vector.*//*() const*/
    type["Abs"] = static_cast<Vector2 (Urho3D::Vector2::*)() const>(&Urho3D::Vector2::Abs) ;
    /*Linear interpolation with another vector.*//*(const Vector2 &rhs, float t) const*/
    type["Lerp"] = static_cast<Vector2 (Urho3D::Vector2::*)(const  Vector2 &, float) const>(&Urho3D::Vector2::Lerp) ;
    /*Test for equality with another vector with epsilon.*//*(const Vector2 &rhs) const*/
    type["Equals"] = static_cast<bool (Urho3D::Vector2::*)(const  Vector2 &) const>(&Urho3D::Vector2::Equals) ;
    /*Return whether any component is NaN.*//*() const*/
    type["IsNaN"] = static_cast<bool (Urho3D::Vector2::*)() const>(&Urho3D::Vector2::IsNaN) ;
    /*Return whether any component is Inf.*//*() const*/
    type["IsInf"] = static_cast<bool (Urho3D::Vector2::*)() const>(&Urho3D::Vector2::IsInf) ;
    /*Return normalized to unit length.*//*() const*/
    type["Normalized"] = static_cast<Vector2 (Urho3D::Vector2::*)() const>(&Urho3D::Vector2::Normalized) ;
    /*Return float data.*//*() const*/
    type["Data"] = static_cast<const float* (Urho3D::Vector2::*)() const>(&Urho3D::Vector2::Data) ;
    /*Return as string.*//*() const*/
    type["__tostring"] = static_cast<String (Urho3D::Vector2::*)() const>(&Urho3D::Vector2::ToString) ;
    type["__mul"] = sol::overload(
        static_cast<Vector2 (Urho3D::Vector2::*)(float) const>(&Urho3D::Vector2::operator*) ,
        static_cast<Vector2 (Urho3D::Vector2::*)(const  Vector2 &) const>(&Urho3D::Vector2::operator*)  );
    type["__div"] = sol::overload(
        static_cast<Vector2 (Urho3D::Vector2::*)(float) const>(&Urho3D::Vector2::operator/) ,
        static_cast<Vector2 (Urho3D::Vector2::*)(const  Vector2 &) const>(&Urho3D::Vector2::operator/)  );
    type["operator_mul_assign"] = sol::overload(
        static_cast<Vector2& (Urho3D::Vector2::*)(float)>(&Urho3D::Vector2::operator*=) ,
        static_cast<Vector2& (Urho3D::Vector2::*)(const  Vector2 &)>(&Urho3D::Vector2::operator*=)  );
    type["operator_div_assign"] = sol::overload(
        static_cast<Vector2& (Urho3D::Vector2::*)(float)>(&Urho3D::Vector2::operator/=) ,
        static_cast<Vector2& (Urho3D::Vector2::*)(const  Vector2 &)>(&Urho3D::Vector2::operator/=)  );
    type["NormalizedOrDefault"] = sol::overload(
        static_cast<Vector2 (Urho3D::Vector2::*)(const  Vector2 &, float) const>(&Urho3D::Vector2::NormalizedOrDefault) ,
        [](Urho3D::Vector2& self, const  Vector2 & defaultValue){ return self.NormalizedOrDefault(defaultValue); },
        [](Urho3D::Vector2& self){ return self.NormalizedOrDefault(); } );
    type["ReNormalized"] = sol::overload(
        static_cast<Vector2 (Urho3D::Vector2::*)(float, float, const  Vector2 &, float) const>(&Urho3D::Vector2::ReNormalized) ,
        [](Urho3D::Vector2& self, float minLength, float maxLength, const  Vector2 & defaultValue){ return self.ReNormalized(minLength, maxLength, defaultValue); },
        [](Urho3D::Vector2& self, float minLength, float maxLength){ return self.ReNormalized(minLength, maxLength); } );
    type["length"] = sol::property(static_cast<float (Urho3D::Vector2::*)() const>(&Urho3D::Vector2::Length) );
    type["lengthSquared"] = sol::property(static_cast<float (Urho3D::Vector2::*)() const>(&Urho3D::Vector2::LengthSquared) );
    type["x_"] = &Urho3D::Vector2::x_;
    type["y_"] = &Urho3D::Vector2::y_;

}

