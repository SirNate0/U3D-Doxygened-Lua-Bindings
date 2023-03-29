
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/Component.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/Component.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Network/Connection.h>
#include <Urho3D/Resource/JSONValue.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Scene/Component.h>
#include <Urho3D/Scene/Node.h>
#include <Urho3D/Scene/ReplicationState.h>
#include <Urho3D/Scene/Scene.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Component(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Component::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Component::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Component>((Urho3D::Component*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Component>( "Component"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Component>(context);
        });

// Members

    /*Handle enabled/disabled state change.*//*()*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::Component::*)()>(&Urho3D::Component::OnSetEnabled) ;
    /*Save as binary data. Return true if successful.*//*(Serializer &dest) const override*/
    type["Save"] = static_cast<bool (Urho3D::Component::*)(Serializer &) const>(&Urho3D::Component::Save) ;
    /*Save as XML data. Return true if successful.*//*(XMLElement &dest) const override*/
    type["SaveXML"] = static_cast<bool (Urho3D::Component::*)(XMLElement &) const>(&Urho3D::Component::SaveXML) ;
    /*Save as JSON data. Return true if successful.*//*(JSONValue &dest) const override*/
    type["SaveJSON"] = static_cast<bool (Urho3D::Component::*)(JSONValue &) const>(&Urho3D::Component::SaveJSON) ;
    /*Mark for attribute check on the next network update.*//*() override*/
    type["MarkNetworkUpdate"] = static_cast<void (Urho3D::Component::*)()>(&Urho3D::Component::MarkNetworkUpdate) ;
    /*Return the depended on nodes to order network updates.*//*(PODVector< Node * > &dest)*/
    type["GetDependencyNodes"] = static_cast<void (Urho3D::Component::*)(PODVector<  Node * > &)>(&Urho3D::Component::GetDependencyNodes) ;
    /*Visualize the component as debug geometry.*//*(DebugRenderer *debug, bool depthTest)*/
    type["DrawDebugGeometry"] = static_cast<void (Urho3D::Component::*)(DebugRenderer *, bool)>(&Urho3D::Component::DrawDebugGeometry) ;
    /*Set enabled/disabled state. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetEnabled"] = static_cast<void (Urho3D::Component::*)(bool)>(&Urho3D::Component::SetEnabled) ;
    /*Remove from the scene node. If no other shared pointer references exist, causes immediate deletion.*//*()*/
    type["Remove"] = static_cast<void (Urho3D::Component::*)()>(&Urho3D::Component::Remove) ;
    /*Return ID. BIND_AS_ALIAS_get_id*//*() const*/
    type["GetID"] = static_cast<unsigned (Urho3D::Component::*)() const>(&Urho3D::Component::GetID) ;
    /*Return whether the component is replicated or local to a scene. BIND_AS_PROPERTY*//*() const*/
    type["IsReplicated"] = static_cast<bool (Urho3D::Component::*)() const>(&Urho3D::Component::IsReplicated) ;
    /*Return scene node. BIND_AS_PROPERTY*//*() const*/
    type["GetNode"] = [](Urho3D::Component& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetNode());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the scene the node belongs to.*//*() const*/
    type["GetScene"] = [](Urho3D::Component& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetScene());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return whether is enabled. BIND_AS_PROPERTY*//*() const*/
    type["IsEnabled"] = static_cast<bool (Urho3D::Component::*)() const>(&Urho3D::Component::IsEnabled) ;
    /*Return whether is effectively enabled (node is also enabled). BIND_AS_PROPERTY*//*() const*/
    type["IsEnabledEffective"] = static_cast<bool (Urho3D::Component::*)() const>(&Urho3D::Component::IsEnabledEffective) ;
    /*Add a replication state that is tracking this component.*//*(ComponentReplicationState *state)*/
    type["AddReplicationState"] = static_cast<void (Urho3D::Component::*)(ComponentReplicationState *)>(&Urho3D::Component::AddReplicationState) ;
    /*Prepare network update by comparing attributes and marking replication states dirty as necessary.*//*()*/
    type["PrepareNetworkUpdate"] = static_cast<void (Urho3D::Component::*)()>(&Urho3D::Component::PrepareNetworkUpdate) ;
    /*Clean up all references to a network connection that is about to be removed. MANUAL_BIND*//*(Connection *connection)*/
    type["CleanupConnection"] = static_cast<void (Urho3D::Component::*)(Connection *)>(&Urho3D::Component::CleanupConnection) ;
    /*Return component in the same scene node by type. If there are several, returns the first.*//*(StringHash type) const*/
    type["GetComponent"] = [](Urho3D::Component& self, StringHash type, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetComponent(type));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return components in the same scene node by type.*//*(PODVector< Component * > &dest, StringHash type) const*/
    type["GetComponents"] = static_cast<void (Urho3D::Component::*)(PODVector<  Component * > &, StringHash) const>(&Urho3D::Component::GetComponents) ;
    type["enabled"] = sol::property(static_cast<bool (Urho3D::Component::*)() const>(&Urho3D::Component::IsEnabled) 
        , static_cast<void (Urho3D::Component::*)(bool)>(&Urho3D::Component::SetEnabled) );
    type["enabledEffective"] = sol::property(static_cast<bool (Urho3D::Component::*)() const>(&Urho3D::Component::IsEnabledEffective) );
    type["id"] = sol::property(static_cast<unsigned (Urho3D::Component::*)() const>(&Urho3D::Component::GetID) );
    type["node"] = sol::property([](Urho3D::Component& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetNode());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["replicated"] = sol::property(static_cast<bool (Urho3D::Component::*)() const>(&Urho3D::Component::IsReplicated) );

}

