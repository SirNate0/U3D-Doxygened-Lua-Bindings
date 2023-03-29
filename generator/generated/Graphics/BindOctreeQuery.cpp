
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/OctreeQuery.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Random.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_OctreeQuery(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::OctreeQuery>( "OctreeQuery"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*ABSTRACT*/

// Members

#if 0 // INVALID: deleted!
    /*Prevent assignment.*//*(const OctreeQuery &rhs)=delete*/
    type["operator_assign"] = static_cast<OctreeQuery& (Urho3D::OctreeQuery::*)(const  OctreeQuery &)=delete>(&Urho3D::OctreeQuery::operator=) ;
#endif
        
    /*Intersection test for an octant.*//*(const BoundingBox &box, bool inside)=0*/
    type["TestOctant"] = static_cast<Intersection (Urho3D::OctreeQuery::*)(const  BoundingBox &, bool)>(&Urho3D::OctreeQuery::TestOctant) ;
    /*Intersection test for drawables.*//*(Drawable **start, Drawable **end, bool inside)=0*/
    type["TestDrawables"] = static_cast<void (Urho3D::OctreeQuery::*)(Drawable **, Drawable **, bool)>(&Urho3D::OctreeQuery::TestDrawables) ;
    type["result_"] = sol::property([](Urho3D::OctreeQuery& s) { return s.result_; }, [](Urho3D::OctreeQuery& s, const PODVector<  Drawable * > & v){ s.result_ = v; });
    type["drawableFlags_"] = &Urho3D::OctreeQuery::drawableFlags_;
    type["viewMask_"] = &Urho3D::OctreeQuery::viewMask_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/OctreeQuery.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Scene/Node.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_RayQueryResult(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::RayQueryResult>( "RayQueryResult"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::RayQueryResult()>();

// Members

    /*Test for inequality, added to prevent GCC from complaining.*//*(const RayQueryResult &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::RayQueryResult::*)(const  RayQueryResult &) const>(&Urho3D::RayQueryResult::operator!=) ;
    type["position_"] = &Urho3D::RayQueryResult::position_;
    type["normal_"] = &Urho3D::RayQueryResult::normal_;
    type["textureUV_"] = &Urho3D::RayQueryResult::textureUV_;
    type["distance_"] = &Urho3D::RayQueryResult::distance_;
    type["drawable_"] = &Urho3D::RayQueryResult::drawable_;
    type["node_"] = &Urho3D::RayQueryResult::node_;
    type["subObject_"] = &Urho3D::RayQueryResult::subObject_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/OctreeQuery.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Scene/Node.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_OctreeQueryResult(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::OctreeQueryResult>( "OctreeQueryResult"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::OctreeQueryResult()>();

// Members

    /*Test for inequality, added to prevent GCC from complaining.*//*(const OctreeQueryResult &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::OctreeQueryResult::*)(const  OctreeQueryResult &) const>(&Urho3D::OctreeQueryResult::operator!=) ;
    type["drawable_"] = &Urho3D::OctreeQueryResult::drawable_;
    type["node_"] = &Urho3D::OctreeQueryResult::node_;

}

