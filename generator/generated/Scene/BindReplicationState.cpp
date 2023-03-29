
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/ReplicationState.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/ReplicationState.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/HashSet.h>
#include <Urho3D/Scene/ReplicationState.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_SceneReplicationState(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::SceneReplicationState>( "SceneReplicationState"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::ReplicationState>()

);

// Constructors

    /*NONE*/

// Members

    /**//*()*/
    type["Clear"] = static_cast<void (Urho3D::SceneReplicationState::*)()>(&Urho3D::SceneReplicationState::Clear) ;
    type["nodeStates_"] = &Urho3D::SceneReplicationState::nodeStates_;
    type["dirtyNodes_"] = &Urho3D::SceneReplicationState::dirtyNodes_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/ReplicationState.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/ReplicationState.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Scene/Component.h>
#include <Urho3D/Scene/ReplicationState.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ComponentReplicationState(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ComponentReplicationState>( "ComponentReplicationState"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::ReplicationState>()

);

// Constructors

    /*NONE*/

// Members

    type["nodeState_"] = &Urho3D::ComponentReplicationState::nodeState_;
    type["component_"] = &Urho3D::ComponentReplicationState::component_;
    type["dirtyAttributes_"] = &Urho3D::ComponentReplicationState::dirtyAttributes_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/ReplicationState.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/ReplicationState.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Attribute.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Scene/ReplicationState.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_NetworkState(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::NetworkState>( "NetworkState"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["attributes_"] = &Urho3D::NetworkState::attributes_;
    type["currentValues_"] = &Urho3D::NetworkState::currentValues_;
    type["previousValues_"] = &Urho3D::NetworkState::previousValues_;
    type["replicationStates_"] = &Urho3D::NetworkState::replicationStates_;
    type["previousVars_"] = &Urho3D::NetworkState::previousVars_;
    type["interceptMask_"] = &Urho3D::NetworkState::interceptMask_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/ReplicationState.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/ReplicationState.h>
#include <Urho3D/Network/Connection.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ReplicationState(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ReplicationState>( "ReplicationState"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["connection_"] = &Urho3D::ReplicationState::connection_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/ReplicationState.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/ReplicationState.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/HashSet.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Scene/Node.h>
#include <Urho3D/Scene/ReplicationState.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_NodeReplicationState(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::NodeReplicationState>( "NodeReplicationState"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::ReplicationState>()

);

// Constructors

    /*NONE*/

// Members

    type["sceneState_"] = &Urho3D::NodeReplicationState::sceneState_;
    type["node_"] = &Urho3D::NodeReplicationState::node_;
    type["dirtyAttributes_"] = &Urho3D::NodeReplicationState::dirtyAttributes_;
    type["dirtyVars_"] = &Urho3D::NodeReplicationState::dirtyVars_;
    type["componentStates_"] = &Urho3D::NodeReplicationState::componentStates_;
    type["priorityAcc_"] = &Urho3D::NodeReplicationState::priorityAcc_;
    type["markedDirty_"] = &Urho3D::NodeReplicationState::markedDirty_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/ReplicationState.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/ReplicationState.h>
#include <Urho3D/Scene/ReplicationState.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_DirtyBits(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::DirtyBits>( "DirtyBits"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::DirtyBits(),
        Urho3D::DirtyBits(const  DirtyBits &)>();

// Members

    /*Set a bit.*//*(unsigned index)*/
    type["Set"] = static_cast<void (Urho3D::DirtyBits::*)(unsigned)>(&Urho3D::DirtyBits::Set) ;
    /*Clear a bit.*//*(unsigned index)*/
    type["Clear"] = static_cast<void (Urho3D::DirtyBits::*)(unsigned)>(&Urho3D::DirtyBits::Clear) ;
    /*Clear all bits.*//*()*/
    type["ClearAll"] = static_cast<void (Urho3D::DirtyBits::*)()>(&Urho3D::DirtyBits::ClearAll) ;
    /*Return if bit is set.*//*(unsigned index) const*/
    type["IsSet"] = static_cast<bool (Urho3D::DirtyBits::*)(unsigned) const>(&Urho3D::DirtyBits::IsSet) ;
    /*Return number of set bits.*//*() const*/
    type["Count"] = static_cast<unsigned (Urho3D::DirtyBits::*)() const>(&Urho3D::DirtyBits::Count) ;
# if 0 // SKIPPED
    type["data_"] = &Urho3D::DirtyBits::data_;
# endif
//invalid literal for int() with base 10: 'MAX_NETWORK_ATTRIBUTES/8'
    type["count_"] = &Urho3D::DirtyBits::count_;

}

