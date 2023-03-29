

// Generated File
//!!Skipping Class Template!!'

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

void bindClass_Urho3D_RandomAccessConstIterator(sol::state_view& lua) { }

#if 0


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Base/Iter.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Base/Iter.h>
#include <Urho3D/Base/Iter.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_RandomAccessConstIterator(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::RandomAccessConstIterator>( "RandomAccessConstIterator"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::RandomAccessConstIterator(),
        Urho3D::RandomAccessConstIterator(const T *),
        Urho3D::RandomAccessConstIterator(const  RandomAccessIterator< T > &)>();

// Members

    /*Assign from a non-const iterator.*//*(constexpr) RandomAccessConstIterator< T > &operator*/
    type["URHO_CPP14"] = static_cast< (Urho3D::RandomAccessConstIterator<T>::*)(constexpr) RandomAccessConstIterator< T > &operator>(&Urho3D::RandomAccessConstIterator<T>::URHO_CPP14) ;

}



#endif

                

// Generated File
//!!Skipping Class Template!!'

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

void bindClass_Urho3D_RandomAccessIterator(sol::state_view& lua) { }

#if 0


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Base/Iter.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Base/Iter.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_RandomAccessIterator(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::RandomAccessIterator>( "RandomAccessIterator"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::RandomAccessIterator(),
        Urho3D::RandomAccessIterator(T *)>();

// Members

    /*Point to the object.*//*() const*/
    type["operator_sub_gt"] = static_cast<T* (Urho3D::RandomAccessIterator<T>::*)() const>(&Urho3D::RandomAccessIterator<T>::operator->) ;
    /*Dereference the object.*//*() const*/
    type["__mul"] = static_cast<T& (Urho3D::RandomAccessIterator<T>::*)() const>(&Urho3D::RandomAccessIterator<T>::operator*) ;
    type["URHO_CPP14"] = sol::overload(
        static_cast< (Urho3D::RandomAccessIterator<T>::*)(constexpr)>(&Urho3D::RandomAccessIterator<T>::URHO_CPP14) ,
        static_cast< (Urho3D::RandomAccessIterator<T>::*)(constexpr)>(&Urho3D::RandomAccessIterator<T>::URHO_CPP14) ,
        static_cast< (Urho3D::RandomAccessIterator<T>::*)(constexpr)>(&Urho3D::RandomAccessIterator<T>::URHO_CPP14) ,
        static_cast< (Urho3D::RandomAccessIterator<T>::*)(constexpr)>(&Urho3D::RandomAccessIterator<T>::URHO_CPP14) ,
        static_cast< (Urho3D::RandomAccessIterator<T>::*)(constexpr) RandomAccessIterator< T > &operator+>(&Urho3D::RandomAccessIterator<T>::URHO_CPP14)  );

}



#endif

                