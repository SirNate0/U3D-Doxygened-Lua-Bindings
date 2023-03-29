
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Rect.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Rect.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/Random.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector4.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Rect(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Rect>( "Rect"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Rect(),
        Urho3D::Rect(const  Vector2 &, const  Vector2 &),
        Urho3D::Rect(float, float, float, float),
        Urho3D::Rect(const  Vector4 &),
        Urho3D::Rect(const float *),
        Urho3D::Rect(const  Rect &)>();

// Members

    /*Assign from another rect.*//*(const Rect &rhs) noexcept=default*/
    type["operator_assign"] = static_cast<Rect& (Urho3D::Rect::*)(const  Rect &) noexcept>(&Urho3D::Rect::operator=) ;
    /*Test for equality with another rect.*//*(const Rect &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::Rect::*)(const  Rect &) const>(&Urho3D::Rect::operator==) ;
    /*Test for inequality with another rect.*//*(const Rect &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::Rect::*)(const  Rect &) const>(&Urho3D::Rect::operator!=) ;
    /*Add another rect to this one inplace.*//*(const Rect &rhs)*/
    type["operator_add_assign"] = static_cast<Rect& (Urho3D::Rect::*)(const  Rect &)>(&Urho3D::Rect::operator+=) ;
    /*Subtract another rect from this one inplace.*//*(const Rect &rhs)*/
    type["operator_sub_assign"] = static_cast<Rect& (Urho3D::Rect::*)(const  Rect &)>(&Urho3D::Rect::operator-=) ;
    /*Divide by scalar inplace.*//*(float value)*/
    type["operator_div_assign"] = static_cast<Rect& (Urho3D::Rect::*)(float)>(&Urho3D::Rect::operator/=) ;
    /*Multiply by scalar inplace.*//*(float value)*/
    type["operator_mul_assign"] = static_cast<Rect& (Urho3D::Rect::*)(float)>(&Urho3D::Rect::operator*=) ;
    /*Divide by scalar.*//*(float value) const*/
    type["__div"] = static_cast<Rect (Urho3D::Rect::*)(float) const>(&Urho3D::Rect::operator/) ;
    /*Multiply by scalar.*//*(float value) const*/
    type["__mul"] = static_cast<Rect (Urho3D::Rect::*)(float) const>(&Urho3D::Rect::operator*) ;
    /*Add another rect.*//*(const Rect &rhs) const*/
    type["__add"] = static_cast<Rect (Urho3D::Rect::*)(const  Rect &) const>(&Urho3D::Rect::operator+) ;
    /*Subtract another rect.*//*(const Rect &rhs) const*/
    type["__sub"] = static_cast<Rect (Urho3D::Rect::*)(const  Rect &) const>(&Urho3D::Rect::operator-) ;
    /*Clear to undefined state.*//*()*/
    type["Clear"] = static_cast<void (Urho3D::Rect::*)()>(&Urho3D::Rect::Clear) ;
    /*Clip with another rect.*//*(const Rect &rect)*/
    type["Clip"] = static_cast<void (Urho3D::Rect::*)(const  Rect &)>(&Urho3D::Rect::Clip) ;
    /*Return true if this rect is defined via a previous call to  Define() or  Merge().*//*() const*/
    type["Defined"] = static_cast<bool (Urho3D::Rect::*)() const>(&Urho3D::Rect::Defined) ;
    /*Return center. BIND_AS_PROPERTY*//*() const*/
    type["Center"] = static_cast<Vector2 (Urho3D::Rect::*)() const>(&Urho3D::Rect::Center) ;
    /*Return size. BIND_AS_PROPERTY*//*() const*/
    type["Size"] = static_cast<Vector2 (Urho3D::Rect::*)() const>(&Urho3D::Rect::Size) ;
    /*Return half-size. BIND_AS_PROPERTY*//*() const*/
    type["HalfSize"] = static_cast<Vector2 (Urho3D::Rect::*)() const>(&Urho3D::Rect::HalfSize) ;
    /*Test for equality with another rect with epsilon.*//*(const Rect &rhs) const*/
    type["Equals"] = static_cast<bool (Urho3D::Rect::*)(const  Rect &) const>(&Urho3D::Rect::Equals) ;
    /*Return float data.*//*() const*/
    type["Data"] = static_cast<const float* (Urho3D::Rect::*)() const>(&Urho3D::Rect::Data) ;
    /*Return as a vector.*//*() const*/
    type["ToVector4"] = static_cast<Vector4 (Urho3D::Rect::*)() const>(&Urho3D::Rect::ToVector4) ;
    /*Return as string.*//*() const*/
    type["__tostring"] = static_cast<String (Urho3D::Rect::*)() const>(&Urho3D::Rect::ToString) ;
    /*Return left-top corner position.*//*() const*/
    type["Min"] = static_cast<Vector2 (Urho3D::Rect::*)() const>(&Urho3D::Rect::Min) ;
    /*Return right-bottom corner position.*//*() const*/
    type["Max"] = static_cast<Vector2 (Urho3D::Rect::*)() const>(&Urho3D::Rect::Max) ;
    /*Return left coordinate. BIND_AS_PROPERTY*//*() const*/
    type["Left"] = static_cast<float (Urho3D::Rect::*)() const>(&Urho3D::Rect::Left) ;
    /*Return top coordinate. BIND_AS_PROPERTY*//*() const*/
    type["Top"] = static_cast<float (Urho3D::Rect::*)() const>(&Urho3D::Rect::Top) ;
    /*Return right coordinate. BIND_AS_PROPERTY*//*() const*/
    type["Right"] = static_cast<float (Urho3D::Rect::*)() const>(&Urho3D::Rect::Right) ;
    /*Return bottom coordinate. BIND_AS_PROPERTY*//*() const*/
    type["Bottom"] = static_cast<float (Urho3D::Rect::*)() const>(&Urho3D::Rect::Bottom) ;
    type["Define"] = sol::overload(
        static_cast<void (Urho3D::Rect::*)(const  Rect &)>(&Urho3D::Rect::Define) ,
        static_cast<void (Urho3D::Rect::*)(const  Vector2 &, const  Vector2 &)>(&Urho3D::Rect::Define) ,
        static_cast<void (Urho3D::Rect::*)(const  Vector2 &)>(&Urho3D::Rect::Define)  );
    type["Merge"] = sol::overload(
        static_cast<void (Urho3D::Rect::*)(const  Vector2 &)>(&Urho3D::Rect::Merge) ,
        static_cast<void (Urho3D::Rect::*)(const  Rect &)>(&Urho3D::Rect::Merge)  );
    type["IsInside"] = sol::overload(
        static_cast<Intersection (Urho3D::Rect::*)(const  Vector2 &) const>(&Urho3D::Rect::IsInside) ,
        static_cast<Intersection (Urho3D::Rect::*)(const  Rect &) const>(&Urho3D::Rect::IsInside)  );
    type["bottom"] = sol::property(static_cast<float (Urho3D::Rect::*)() const>(&Urho3D::Rect::Bottom) );
    type["center"] = sol::property(static_cast<Vector2 (Urho3D::Rect::*)() const>(&Urho3D::Rect::Center) );
    type["halfSize"] = sol::property(static_cast<Vector2 (Urho3D::Rect::*)() const>(&Urho3D::Rect::HalfSize) );
    type["left"] = sol::property(static_cast<float (Urho3D::Rect::*)() const>(&Urho3D::Rect::Left) );
    type["right"] = sol::property(static_cast<float (Urho3D::Rect::*)() const>(&Urho3D::Rect::Right) );
    type["size"] = sol::property(static_cast<Vector2 (Urho3D::Rect::*)() const>(&Urho3D::Rect::Size) );
    type["top"] = sol::property(static_cast<float (Urho3D::Rect::*)() const>(&Urho3D::Rect::Top) );
    type["min_"] = &Urho3D::Rect::min_;
    type["max_"] = &Urho3D::Rect::max_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/Rect.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/Rect.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/Random.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_IntRect(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::IntRect>( "IntRect"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::IntRect(),
        Urho3D::IntRect(const  IntVector2 &, const  IntVector2 &),
        Urho3D::IntRect(int, int, int, int),
        Urho3D::IntRect(const int *)>();

// Members

    /*Test for equality with another rect.*//*(const IntRect &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::IntRect::*)(const  IntRect &) const>(&Urho3D::IntRect::operator==) ;
    /*Test for inequality with another rect.*//*(const IntRect &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::IntRect::*)(const  IntRect &) const>(&Urho3D::IntRect::operator!=) ;
    /*Add another rect to this one inplace.*//*(const IntRect &rhs)*/
    type["operator_add_assign"] = static_cast<IntRect& (Urho3D::IntRect::*)(const  IntRect &)>(&Urho3D::IntRect::operator+=) ;
    /*Subtract another rect from this one inplace.*//*(const IntRect &rhs)*/
    type["operator_sub_assign"] = static_cast<IntRect& (Urho3D::IntRect::*)(const  IntRect &)>(&Urho3D::IntRect::operator-=) ;
    /*Divide by scalar inplace.*//*(float value)*/
    type["operator_div_assign"] = static_cast<IntRect& (Urho3D::IntRect::*)(float)>(&Urho3D::IntRect::operator/=) ;
    /*Multiply by scalar inplace.*//*(float value)*/
    type["operator_mul_assign"] = static_cast<IntRect& (Urho3D::IntRect::*)(float)>(&Urho3D::IntRect::operator*=) ;
    /*Divide by scalar.*//*(float value) const*/
    type["__div"] = static_cast<IntRect (Urho3D::IntRect::*)(float) const>(&Urho3D::IntRect::operator/) ;
    /*Multiply by scalar.*//*(float value) const*/
    type["__mul"] = static_cast<IntRect (Urho3D::IntRect::*)(float) const>(&Urho3D::IntRect::operator*) ;
    /*Add another rect.*//*(const IntRect &rhs) const*/
    type["__add"] = static_cast<IntRect (Urho3D::IntRect::*)(const  IntRect &) const>(&Urho3D::IntRect::operator+) ;
    /*Subtract another rect.*//*(const IntRect &rhs) const*/
    type["__sub"] = static_cast<IntRect (Urho3D::IntRect::*)(const  IntRect &) const>(&Urho3D::IntRect::operator-) ;
    /*Return size. BIND_AS_PROPERTY*//*() const*/
    type["Size"] = static_cast<IntVector2 (Urho3D::IntRect::*)() const>(&Urho3D::IntRect::Size) ;
    /*Return width. BIND_AS_PROPERTY*//*() const*/
    type["Width"] = static_cast<int (Urho3D::IntRect::*)() const>(&Urho3D::IntRect::Width) ;
    /*Return height. BIND_AS_PROPERTY*//*() const*/
    type["Height"] = static_cast<int (Urho3D::IntRect::*)() const>(&Urho3D::IntRect::Height) ;
    /*Clip with another rect. Since  IntRect does not have an undefined state like  Rect, return (0, 0, 0, 0) if the result is empty.*//*(const IntRect &rect)*/
    type["Clip"] = static_cast<void (Urho3D::IntRect::*)(const  IntRect &)>(&Urho3D::IntRect::Clip) ;
    /*Merge a rect. If this rect was empty, become the other rect. If the other rect is empty, do nothing.*//*(const IntRect &rect)*/
    type["Merge"] = static_cast<void (Urho3D::IntRect::*)(const  IntRect &)>(&Urho3D::IntRect::Merge) ;
    /*Return integer data.*//*() const*/
    type["Data"] = static_cast<const int* (Urho3D::IntRect::*)() const>(&Urho3D::IntRect::Data) ;
    /*Return as string.*//*() const*/
    type["__tostring"] = static_cast<String (Urho3D::IntRect::*)() const>(&Urho3D::IntRect::ToString) ;
    /*Return left-top corner position.*//*() const*/
    type["Min"] = static_cast<IntVector2 (Urho3D::IntRect::*)() const>(&Urho3D::IntRect::Min) ;
    /*Return right-bottom corner position.*//*() const*/
    type["Max"] = static_cast<IntVector2 (Urho3D::IntRect::*)() const>(&Urho3D::IntRect::Max) ;
    /*Return left coordinate.*//*() const*/
    type["Left"] = static_cast<int (Urho3D::IntRect::*)() const>(&Urho3D::IntRect::Left) ;
    /*Return top coordinate.*//*() const*/
    type["Top"] = static_cast<int (Urho3D::IntRect::*)() const>(&Urho3D::IntRect::Top) ;
    /*Return right coordinate.*//*() const*/
    type["Right"] = static_cast<int (Urho3D::IntRect::*)() const>(&Urho3D::IntRect::Right) ;
    /*Return bottom coordinate.*//*() const*/
    type["Bottom"] = static_cast<int (Urho3D::IntRect::*)() const>(&Urho3D::IntRect::Bottom) ;
    type["IsInside"] = sol::overload(
        static_cast<Intersection (Urho3D::IntRect::*)(const  IntVector2 &) const>(&Urho3D::IntRect::IsInside) ,
        static_cast<Intersection (Urho3D::IntRect::*)(const  IntRect &) const>(&Urho3D::IntRect::IsInside)  );
    type["height"] = sol::property(static_cast<int (Urho3D::IntRect::*)() const>(&Urho3D::IntRect::Height) );
    type["size"] = sol::property(static_cast<IntVector2 (Urho3D::IntRect::*)() const>(&Urho3D::IntRect::Size) );
    type["width"] = sol::property(static_cast<int (Urho3D::IntRect::*)() const>(&Urho3D::IntRect::Width) );
    type["left_"] = &Urho3D::IntRect::left_;
    type["top_"] = &Urho3D::IntRect::top_;
    type["right_"] = &Urho3D::IntRect::right_;
    type["bottom_"] = &Urho3D::IntRect::bottom_;

}

