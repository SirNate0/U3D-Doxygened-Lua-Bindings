
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Navigation/NavBuildData.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Navigation/NavBuildData.h>
#include <Urho3D/ThirdParty/Recast/Recast.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_SimpleNavBuildData(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::SimpleNavBuildData>( "SimpleNavBuildData"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::NavBuildData>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::SimpleNavBuildData()>();

// Members

    type["contourSet_"] = &Urho3D::SimpleNavBuildData::contourSet_;
    type["polyMesh_"] = &Urho3D::SimpleNavBuildData::polyMesh_;
    type["polyMeshDetail_"] = &Urho3D::SimpleNavBuildData::polyMeshDetail_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Navigation/NavBuildData.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Navigation/NavBuildData.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Navigation/NavBuildData.h>
#include <Urho3D/ThirdParty/Recast/Recast.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_NavBuildData(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::NavBuildData>( "NavBuildData"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::NavBuildData()>();

// Members

    type["worldBoundingBox_"] = &Urho3D::NavBuildData::worldBoundingBox_;
    type["vertices_"] = &Urho3D::NavBuildData::vertices_;
    type["indices_"] = &Urho3D::NavBuildData::indices_;
    type["offMeshVertices_"] = &Urho3D::NavBuildData::offMeshVertices_;
    type["offMeshRadii_"] = &Urho3D::NavBuildData::offMeshRadii_;
    type["offMeshFlags_"] = &Urho3D::NavBuildData::offMeshFlags_;
    type["offMeshAreas_"] = &Urho3D::NavBuildData::offMeshAreas_;
    type["offMeshDir_"] = &Urho3D::NavBuildData::offMeshDir_;
    type["ctx_"] = &Urho3D::NavBuildData::ctx_;
    type["heightField_"] = &Urho3D::NavBuildData::heightField_;
    type["compactHeightField_"] = &Urho3D::NavBuildData::compactHeightField_;
    type["navAreas_"] = &Urho3D::NavBuildData::navAreas_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Navigation/NavBuildData.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Navigation/NavBuildData.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/ThirdParty/Recast/Recast.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_NavAreaStub(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::NavAreaStub>( "NavAreaStub"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["bounds_"] = &Urho3D::NavAreaStub::bounds_;
    type["areaID_"] = &Urho3D::NavAreaStub::areaID_;

}

