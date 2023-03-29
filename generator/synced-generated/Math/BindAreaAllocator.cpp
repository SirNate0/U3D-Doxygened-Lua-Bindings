
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Math/AreaAllocator.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Math/AreaAllocator.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_AreaAllocator(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::AreaAllocator>( "AreaAllocator"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::AreaAllocator(),
        Urho3D::AreaAllocator(int, int, bool),
        Urho3D::AreaAllocator(int, int),
        Urho3D::AreaAllocator(int, int, int, int, bool),
        Urho3D::AreaAllocator(int, int, int, int)>();

// Members

#if 0 // INVALID: NeedsWrap(int &)NeedsWrap(int &)
    /*Try to allocate an area. Return true if successful, with x & y coordinates filled.*//*(int width, int height, int &x, int &y)*/
    type["Allocate"] = static_cast<bool (Urho3D::AreaAllocator::*)(int, int, int &, int &)>(&Urho3D::AreaAllocator::Allocate) ;
#endif
        
    /*Return the current width.*//*() const*/
    type["GetWidth"] = static_cast<int (Urho3D::AreaAllocator::*)() const>(&Urho3D::AreaAllocator::GetWidth) ;
    /*Return the current height.*//*() const*/
    type["GetHeight"] = static_cast<int (Urho3D::AreaAllocator::*)() const>(&Urho3D::AreaAllocator::GetHeight) ;
    /*Return whether uses fast mode. Fast mode uses a simpler allocation scheme which may waste free space, but is OK for eg. fonts.*//*() const*/
    type["GetFastMode"] = static_cast<bool (Urho3D::AreaAllocator::*)() const>(&Urho3D::AreaAllocator::GetFastMode) ;
    type["Reset"] = sol::overload(
        static_cast<void (Urho3D::AreaAllocator::*)(int, int, int, int, bool)>(&Urho3D::AreaAllocator::Reset) ,
        [](Urho3D::AreaAllocator& self, int width, int height, int maxWidth, int maxHeight){ self.Reset(width, height, maxWidth, maxHeight); },
        [](Urho3D::AreaAllocator& self, int width, int height, int maxWidth){ self.Reset(width, height, maxWidth); },
        [](Urho3D::AreaAllocator& self, int width, int height){ self.Reset(width, height); } );

}

