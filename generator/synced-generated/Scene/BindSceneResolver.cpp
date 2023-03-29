
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/SceneResolver.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/SceneResolver.h>
#include <Urho3D/Scene/Component.h>
#include <Urho3D/Scene/Node.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_SceneResolver(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::SceneResolver>( "SceneResolver"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::SceneResolver()>();

// Members

    /*Reset. Clear all remembered nodes and components.*//*()*/
    type["Reset"] = static_cast<void (Urho3D::SceneResolver::*)()>(&Urho3D::SceneResolver::Reset) ;
    /*Remember a created node.*//*(unsigned oldID, Node *node)*/
    type["AddNode"] = static_cast<void (Urho3D::SceneResolver::*)(unsigned, Node *)>(&Urho3D::SceneResolver::AddNode) ;
    /*Remember a created component.*//*(unsigned oldID, Component *component)*/
    type["AddComponent"] = static_cast<void (Urho3D::SceneResolver::*)(unsigned, Component *)>(&Urho3D::SceneResolver::AddComponent) ;
    /*Resolve component and node ID attributes and reset.*//*()*/
    type["Resolve"] = static_cast<void (Urho3D::SceneResolver::*)()>(&Urho3D::SceneResolver::Resolve) ;

}

