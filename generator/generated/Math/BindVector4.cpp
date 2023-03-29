
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Vector4.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Vector4.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Math/Vector4.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Vector4(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Vector4>( "Vector4"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Vector4(),
        Urho3D::Vector4(const  Vector4 &),
        Urho3D::Vector4(const  Vector3 &, float),
        Urho3D::Vector4(float, float, float, float),
        Urho3D::Vector4(const float *)>();

// Members

    /*Assign from another vector.*//*(const Vector4 &rhs) noexcept=default*/
    type["operator_assign"] = static_cast<Vector4& (Urho3D::Vector4::*)(const  Vector4 &) noexcept>(&Urho3D::Vector4::operator=) ;
    /*Test for equality with another vector without epsilon.*//*(const Vector4 &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::Vector4::*)(const  Vector4 &) const>(&Urho3D::Vector4::operator==) ;
    /*Test for inequality with another vector without epsilon.*//*(const Vector4 &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::Vector4::*)(const  Vector4 &) const>(&Urho3D::Vector4::operator!=) ;
    /*Add a vector.*//*(const Vector4 &rhs) const*/
    type["__add"] = static_cast<Vector4 (Urho3D::Vector4::*)(const  Vector4 &) const>(&Urho3D::Vector4::operator+) ;
    /*Return negation.*//*() const*/
    type["__unm"] = static_cast<Vector4 (Urho3D::Vector4::*)() const>(&Urho3D::Vector4::operator-) ;
    /*Subtract a vector.*//*(const Vector4 &rhs) const*/
    type["__sub"] = static_cast<Vector4 (Urho3D::Vector4::*)(const  Vector4 &) const>(&Urho3D::Vector4::operator-) ;
    /*Add-assign a vector.*//*(const Vector4 &rhs)*/
    type["operator_add_assign"] = static_cast<Vector4& (Urho3D::Vector4::*)(const  Vector4 &)>(&Urho3D::Vector4::operator+=) ;
    /*Subtract-assign a vector.*//*(const Vector4 &rhs)*/
    type["operator_sub_assign"] = static_cast<Vector4& (Urho3D::Vector4::*)(const  Vector4 &)>(&Urho3D::Vector4::operator-=) ;
    /*Return const value by index.*//*(unsigned index) const*/
    type["op__index"] = static_cast<float (Urho3D::Vector4::*)(unsigned) const>(&Urho3D::Vector4::operator[]) ;
    /*Return mutable value by index.*//*(unsigned index)*/
    type["op__newindex"] = static_cast<float& (Urho3D::Vector4::*)(unsigned)>(&Urho3D::Vector4::operator[]) ;
    /*Calculate dot product.*//*(const Vector4 &rhs) const*/
    type["DotProduct"] = static_cast<float (Urho3D::Vector4::*)(const  Vector4 &) const>(&Urho3D::Vector4::DotProduct) ;
    /*Calculate absolute dot product.*//*(const Vector4 &rhs) const*/
    type["AbsDotProduct"] = static_cast<float (Urho3D::Vector4::*)(const  Vector4 &) const>(&Urho3D::Vector4::AbsDotProduct) ;
    /*Project vector onto axis.*//*(const Vector3 &axis) const*/
    type["ProjectOntoAxis"] = static_cast<float (Urho3D::Vector4::*)(const  Vector3 &) const>(&Urho3D::Vector4::ProjectOntoAxis) ;
    /*Return absolute vector.*//*() const*/
    type["Abs"] = static_cast<Vector4 (Urho3D::Vector4::*)() const>(&Urho3D::Vector4::Abs) ;
    /*Linear interpolation with another vector.*//*(const Vector4 &rhs, float t) const*/
    type["Lerp"] = static_cast<Vector4 (Urho3D::Vector4::*)(const  Vector4 &, float) const>(&Urho3D::Vector4::Lerp) ;
    /*Test for equality with another vector with epsilon.*//*(const Vector4 &rhs) const*/
    type["Equals"] = static_cast<bool (Urho3D::Vector4::*)(const  Vector4 &) const>(&Urho3D::Vector4::Equals) ;
    /*Return whether any component is NaN.*//*() const*/
    type["IsNaN"] = static_cast<bool (Urho3D::Vector4::*)() const>(&Urho3D::Vector4::IsNaN) ;
    /*Return whether any component is Inf.*//*() const*/
    type["IsInf"] = static_cast<bool (Urho3D::Vector4::*)() const>(&Urho3D::Vector4::IsInf) ;
    /*Convert to  Vector2.*//*() const*/
    type["operator Vector2"] = static_cast<Vector2 (Urho3D::Vector4::*)() const>(&Urho3D::Vector4::operator Vector2) ;
    /*Convert to  Vector3.*//*() const*/
    type["operator Vector3"] = static_cast<Vector3 (Urho3D::Vector4::*)() const>(&Urho3D::Vector4::operator Vector3) ;
    /*Return float data.*//*() const*/
    type["Data"] = static_cast<const float* (Urho3D::Vector4::*)() const>(&Urho3D::Vector4::Data) ;
    /*Return as string.*//*() const*/
    type["__tostring"] = static_cast<String (Urho3D::Vector4::*)() const>(&Urho3D::Vector4::ToString) ;
    /*Return hash value for  HashSet &  HashMap.*//*() const*/
    type["ToHash"] = static_cast<unsigned (Urho3D::Vector4::*)() const>(&Urho3D::Vector4::ToHash) ;
    type["__mul"] = sol::overload(
        static_cast<Vector4 (Urho3D::Vector4::*)(float) const>(&Urho3D::Vector4::operator*) ,
        static_cast<Vector4 (Urho3D::Vector4::*)(const  Vector4 &) const>(&Urho3D::Vector4::operator*)  );
    type["__div"] = sol::overload(
        static_cast<Vector4 (Urho3D::Vector4::*)(float) const>(&Urho3D::Vector4::operator/) ,
        static_cast<Vector4 (Urho3D::Vector4::*)(const  Vector4 &) const>(&Urho3D::Vector4::operator/)  );
    type["operator_mul_assign"] = sol::overload(
        static_cast<Vector4& (Urho3D::Vector4::*)(float)>(&Urho3D::Vector4::operator*=) ,
        static_cast<Vector4& (Urho3D::Vector4::*)(const  Vector4 &)>(&Urho3D::Vector4::operator*=)  );
    type["operator_div_assign"] = sol::overload(
        static_cast<Vector4& (Urho3D::Vector4::*)(float)>(&Urho3D::Vector4::operator/=) ,
        static_cast<Vector4& (Urho3D::Vector4::*)(const  Vector4 &)>(&Urho3D::Vector4::operator/=)  );
    type["x_"] = &Urho3D::Vector4::x_;
    type["y_"] = &Urho3D::Vector4::y_;
    type["z_"] = &Urho3D::Vector4::z_;
    type["w_"] = &Urho3D::Vector4::w_;

}

