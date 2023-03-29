
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Resource/BackgroundLoader.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Resource/BackgroundLoader.h>
#include <Urho3D/Container/HashSet.h>
#include <Urho3D/Container/Pair.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Resource/Resource.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_BackgroundLoadItem(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::BackgroundLoadItem>( "BackgroundLoadItem"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["resource_"] = &Urho3D::BackgroundLoadItem::resource_;
    type["dependencies_"] = &Urho3D::BackgroundLoadItem::dependencies_;
    type["dependents_"] = &Urho3D::BackgroundLoadItem::dependents_;
    type["sendEventOnFailure_"] = &Urho3D::BackgroundLoadItem::sendEventOnFailure_;

}

