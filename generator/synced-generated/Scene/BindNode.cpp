
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/Node.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/Node.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/IO/VectorBuffer.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Math/Vector4.h>
#include <Urho3D/Network/Connection.h>
#include <Urho3D/Resource/JSONValue.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Scene/Animatable.h>
#include <Urho3D/Scene/Component.h>
#include <Urho3D/Scene/Node.h>
#include <Urho3D/Scene/ReplicationState.h>
#include <Urho3D/Scene/Scene.h>
#include <Urho3D/Scene/SceneResolver.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Node(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Node::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Node::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Node>((Urho3D::Node*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Node>( "Node"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Node>(context);
        });

// Members

    /*Save as binary data. Return true if successful.*//*(Serializer &dest) const override*/
    type["Save"] = static_cast<bool (Urho3D::Node::*)(Serializer &) const>(&Urho3D::Node::Save) ;
    /*Apply attribute changes that can not be applied immediately recursively to child nodes and components.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::Node::*)()>(&Urho3D::Node::ApplyAttributes) ;
    /*Return whether should save default-valued attributes into XML. Always save node transforms for readability, even if identity.*//*() const override*/
    type["SaveDefaultAttributes"] = static_cast<bool (Urho3D::Node::*)() const>(&Urho3D::Node::SaveDefaultAttributes) ;
    /*Mark for attribute check on the next network update.*//*() override*/
    type["MarkNetworkUpdate"] = static_cast<void (Urho3D::Node::*)()>(&Urho3D::Node::MarkNetworkUpdate) ;
    /*Add a replication state that is tracking this node.*//*(NodeReplicationState *state)*/
    type["AddReplicationState"] = static_cast<void (Urho3D::Node::*)(NodeReplicationState *)>(&Urho3D::Node::AddReplicationState) ;
    /*Set name of the scene node. Names are not required to be unique. BIND_AS_PROPERTY*//*(const String &name)*/
    type["SetName"] = static_cast<void (Urho3D::Node::*)(const  String &)>(&Urho3D::Node::SetName) ;
    /*Set tags. Old tags are overwritten.*//*(const StringVector &tags)*/
    type["SetTags"] = static_cast<void (Urho3D::Node::*)(const  StringVector &)>(&Urho3D::Node::SetTags) ;
    /*Add a tag.*//*(const String &tag)*/
    type["AddTag"] = static_cast<void (Urho3D::Node::*)(const  String &)>(&Urho3D::Node::AddTag) ;
    /*Remove tag. Return true if existed.*//*(const String &tag)*/
    type["RemoveTag"] = static_cast<bool (Urho3D::Node::*)(const  String &)>(&Urho3D::Node::RemoveTag) ;
    /*Remove all tags.*//*()*/
    type["RemoveAllTags"] = static_cast<void (Urho3D::Node::*)()>(&Urho3D::Node::RemoveAllTags) ;
    /*Set position in parent space. If the scene node is on the root level (is child of the scene itself), this is same as world space. BIND_AS_PROPERTY*//*(const Vector3 &position)*/
    type["SetPosition"] = static_cast<void (Urho3D::Node::*)(const  Vector3 &)>(&Urho3D::Node::SetPosition) ;
    /*Set rotation in parent space. BIND_AS_PROPERTY*//*(const Quaternion &rotation)*/
    type["SetRotation"] = static_cast<void (Urho3D::Node::*)(const  Quaternion &)>(&Urho3D::Node::SetRotation) ;
    /*Set rotation in parent space (for Urho2D). BIND_AS_PROPERTY*//*(float rotation)*/
    type["SetRotation2D"] = static_cast<void (Urho3D::Node::*)(float)>(&Urho3D::Node::SetRotation2D) ;
    /*Set forward direction in parent space. Positive Z axis equals identity rotation. BIND_AS_PROPERTY*//*(const Vector3 &direction)*/
    type["SetDirection"] = static_cast<void (Urho3D::Node::*)(const  Vector3 &)>(&Urho3D::Node::SetDirection) ;
    /*Set position in world space. BIND_AS_PROPERTY*//*(const Vector3 &position)*/
    type["SetWorldPosition"] = static_cast<void (Urho3D::Node::*)(const  Vector3 &)>(&Urho3D::Node::SetWorldPosition) ;
    /*Set rotation in world space. BIND_AS_PROPERTY*//*(const Quaternion &rotation)*/
    type["SetWorldRotation"] = static_cast<void (Urho3D::Node::*)(const  Quaternion &)>(&Urho3D::Node::SetWorldRotation) ;
    /*Set rotation in world space (for Urho2D). BIND_AS_PROPERTY*//*(float rotation)*/
    type["SetWorldRotation2D"] = static_cast<void (Urho3D::Node::*)(float)>(&Urho3D::Node::SetWorldRotation2D) ;
    /*Set forward direction in world space. BIND_AS_PROPERTY*//*(const Vector3 &direction)*/
    type["SetWorldDirection"] = static_cast<void (Urho3D::Node::*)(const  Vector3 &)>(&Urho3D::Node::SetWorldDirection) ;
    /*Modify scale in parent space (for Urho2D).*//*(const Vector2 &scale)*/
    type["Scale2D"] = static_cast<void (Urho3D::Node::*)(const  Vector2 &)>(&Urho3D::Node::Scale2D) ;
    /*Set enabled/disabled state without recursion. Components in a disabled node become effectively disabled regardless of their own enable/disable state. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetEnabled"] = static_cast<void (Urho3D::Node::*)(bool)>(&Urho3D::Node::SetEnabled) ;
    /*Set enabled state on self and child nodes. Nodes' own enabled state is remembered (IsEnabledSelf) and can be restored.*//*(bool enable)*/
    type["SetDeepEnabled"] = static_cast<void (Urho3D::Node::*)(bool)>(&Urho3D::Node::SetDeepEnabled) ;
    /*Reset enabled state to the node's remembered state prior to calling SetDeepEnabled.*//*()*/
    type["ResetDeepEnabled"] = static_cast<void (Urho3D::Node::*)()>(&Urho3D::Node::ResetDeepEnabled) ;
    /*Set enabled state on self and child nodes. Unlike SetDeepEnabled this does not remember the nodes' own enabled state, but overwrites it.*//*(bool enable)*/
    type["SetEnabledRecursive"] = static_cast<void (Urho3D::Node::*)(bool)>(&Urho3D::Node::SetEnabledRecursive) ;
    /*Set owner connection for networking. MANUAL_BIND*//*(Connection *owner)*/
    type["SetOwner"] = static_cast<void (Urho3D::Node::*)(Connection *)>(&Urho3D::Node::SetOwner) ;
    /*Mark node and child nodes to need world transform recalculation. Notify listener components.*//*()*/
    type["MarkDirty"] = static_cast<void (Urho3D::Node::*)()>(&Urho3D::Node::MarkDirty) ;
    /*Remove a child scene node.*//*(Node *node)*/
    type["RemoveChild"] = static_cast<void (Urho3D::Node::*)(Node *)>(&Urho3D::Node::RemoveChild) ;
    /*Remove all child scene nodes.*//*()*/
    type["RemoveAllChildren"] = static_cast<void (Urho3D::Node::*)()>(&Urho3D::Node::RemoveAllChildren) ;
    /*Remove child scene nodes that match criteria.*//*(bool removeReplicated, bool removeLocal, bool recursive)*/
    type["RemoveChildren"] = static_cast<void (Urho3D::Node::*)(bool, bool, bool)>(&Urho3D::Node::RemoveChildren) ;
    /*Remove all components from this node.*//*()*/
    type["RemoveAllComponents"] = static_cast<void (Urho3D::Node::*)()>(&Urho3D::Node::RemoveAllComponents) ;
    /*Adjust index order of an existing component in this node.*//*(Component *component, unsigned index)*/
    type["ReorderComponent"] = static_cast<void (Urho3D::Node::*)(Component *, unsigned)>(&Urho3D::Node::ReorderComponent) ;
    /*Remove from the parent node. If no other shared pointer references exist, causes immediate deletion.*//*()*/
    type["Remove"] = static_cast<void (Urho3D::Node::*)()>(&Urho3D::Node::Remove) ;
    /*Assign to a new parent scene node. Retains the world transform. BIND_AS_PROPERTY*//*(Node *parent)*/
    type["SetParent"] = static_cast<void (Urho3D::Node::*)(Node *)>(&Urho3D::Node::SetParent) ;
    /*Set a user variable.*//*(StringHash key, const Variant &value)*/
    type["SetVar"] = static_cast<void (Urho3D::Node::*)(StringHash, const  Variant &)>(&Urho3D::Node::SetVar) ;
    /*Add listener component that is notified of node being dirtied. Can either be in the same node or another.*//*(Component *component)*/
    type["AddListener"] = static_cast<void (Urho3D::Node::*)(Component *)>(&Urho3D::Node::AddListener) ;
    /*Remove listener component.*//*(Component *component)*/
    type["RemoveListener"] = static_cast<void (Urho3D::Node::*)(Component *)>(&Urho3D::Node::RemoveListener) ;
    /*Return ID. BIND_AS_ALIAS_get_id*//*() const*/
    type["GetID"] = static_cast<unsigned (Urho3D::Node::*)() const>(&Urho3D::Node::GetID) ;
    /*Return whether the node is replicated or local to a scene. BIND_AS_PROPERTY*//*() const*/
    type["IsReplicated"] = static_cast<bool (Urho3D::Node::*)() const>(&Urho3D::Node::IsReplicated) ;
    /*Return name. BIND_AS_PROPERTY*//*() const*/
    type["GetName"] = static_cast<const String& (Urho3D::Node::*)() const>(&Urho3D::Node::GetName) ;
    /*Return name hash.*//*() const*/
    type["GetNameHash"] = static_cast<StringHash (Urho3D::Node::*)() const>(&Urho3D::Node::GetNameHash) ;
    /*Return all tags. BIND_AS_PROPERTY*//*() const*/
    type["GetTags"] = static_cast<const StringVector& (Urho3D::Node::*)() const>(&Urho3D::Node::GetTags) ;
    /*Return whether has a specific tag.*//*(const String &tag) const*/
    type["HasTag"] = static_cast<bool (Urho3D::Node::*)(const  String &) const>(&Urho3D::Node::HasTag) ;
    /*Return parent scene node. BIND_AS_PROPERTY*//*() const*/
    type["GetParent"] = [](Urho3D::Node& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetParent());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return scene. BIND_AS_PROPERTY*//*() const*/
    type["GetScene"] = [](Urho3D::Node& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetScene());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return whether is a direct or indirect child of specified node.*//*(Node *node) const*/
    type["IsChildOf"] = static_cast<bool (Urho3D::Node::*)(Node *) const>(&Urho3D::Node::IsChildOf) ;
    /*Return whether is enabled. Disables nodes effectively disable all their components. BIND_AS_PROPERTY*//*() const*/
    type["IsEnabled"] = static_cast<bool (Urho3D::Node::*)() const>(&Urho3D::Node::IsEnabled) ;
    /*Return the node's last own enabled state. May be different than the value returned by IsEnabled when SetDeepEnabled has been used. BIND_AS_PROPERTY*//*() const*/
    type["IsEnabledSelf"] = static_cast<bool (Urho3D::Node::*)() const>(&Urho3D::Node::IsEnabledSelf) ;
    /*Return owner connection in networking. MANUAL_BIND*//*() const*/
    type["GetOwner"] = [](Urho3D::Node& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOwner());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return position in parent space. BIND_AS_PROPERTY*//*() const*/
    type["GetPosition"] = static_cast<const Vector3& (Urho3D::Node::*)() const>(&Urho3D::Node::GetPosition) ;
    /*Return position in parent space (for Urho2D). BIND_AS_PROPERTY*//*() const*/
    type["GetPosition2D"] = static_cast<Vector2 (Urho3D::Node::*)() const>(&Urho3D::Node::GetPosition2D) ;
    /*Return rotation in parent space. BIND_AS_PROPERTY*//*() const*/
    type["GetRotation"] = static_cast<const Quaternion& (Urho3D::Node::*)() const>(&Urho3D::Node::GetRotation) ;
    /*Return rotation in parent space (for Urho2D). BIND_AS_PROPERTY*//*() const*/
    type["GetRotation2D"] = static_cast<float (Urho3D::Node::*)() const>(&Urho3D::Node::GetRotation2D) ;
    /*Return forward direction in parent space. Positive Z axis equals identity rotation. BIND_AS_PROPERTY*//*() const*/
    type["GetDirection"] = static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetDirection) ;
    /*Return up direction in parent space. Positive Y axis equals identity rotation. BIND_AS_PROPERTY*//*() const*/
    type["GetUp"] = static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetUp) ;
    /*Return right direction in parent space. Positive X axis equals identity rotation. BIND_AS_PROPERTY*//*() const*/
    type["GetRight"] = static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetRight) ;
    /*Return scale in parent space. BIND_AS_PROPERTY*//*() const*/
    type["GetScale"] = static_cast<const Vector3& (Urho3D::Node::*)() const>(&Urho3D::Node::GetScale) ;
    /*Return scale in parent space (for Urho2D). BIND_AS_PROPERTY*//*() const*/
    type["GetScale2D"] = static_cast<Vector2 (Urho3D::Node::*)() const>(&Urho3D::Node::GetScale2D) ;
    /*Return parent space transform matrix. BIND_AS_PROPERTY*//*() const*/
    type["GetTransform"] = static_cast<Matrix3x4 (Urho3D::Node::*)() const>(&Urho3D::Node::GetTransform) ;
    /*Return position in world space. BIND_AS_PROPERTY*//*() const*/
    type["GetWorldPosition"] = static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldPosition) ;
    /*Return position in world space (for Urho2D). BIND_AS_PROPERTY*//*() const*/
    type["GetWorldPosition2D"] = static_cast<Vector2 (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldPosition2D) ;
    /*Return rotation in world space. BIND_AS_PROPERTY*//*() const*/
    type["GetWorldRotation"] = static_cast<Quaternion (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldRotation) ;
    /*Return rotation in world space (for Urho2D). BIND_AS_PROPERTY*//*() const*/
    type["GetWorldRotation2D"] = static_cast<float (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldRotation2D) ;
    /*Return direction in world space. BIND_AS_PROPERTY*//*() const*/
    type["GetWorldDirection"] = static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldDirection) ;
    /*Return node's up vector in world space. BIND_AS_PROPERTY*//*() const*/
    type["GetWorldUp"] = static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldUp) ;
    /*Return node's right vector in world space. BIND_AS_PROPERTY*//*() const*/
    type["GetWorldRight"] = static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldRight) ;
    /*Return scale in world space. BIND_AS_PROPERTY*//*() const*/
    type["GetWorldScale"] = static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldScale) ;
    /*Return signed scale in world space. Utilized for Urho2D physics. BIND_AS_PROPERTY*//*() const*/
    type["GetSignedWorldScale"] = static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetSignedWorldScale) ;
    /*Return scale in world space (for Urho2D). BIND_AS_PROPERTY*//*() const*/
    type["GetWorldScale2D"] = static_cast<Vector2 (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldScale2D) ;
    /*Return world space transform matrix. BIND_AS_PROPERTY*//*() const*/
    type["GetWorldTransform"] = static_cast<const Matrix3x4& (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldTransform) ;
    /*Convert a local space position or rotation to world space (for Urho2D).*//*(const Vector2 &vector) const*/
    type["LocalToWorld2D"] = static_cast<Vector2 (Urho3D::Node::*)(const  Vector2 &) const>(&Urho3D::Node::LocalToWorld2D) ;
    /*Convert a world space position or rotation to local space (for Urho2D).*//*(const Vector2 &vector) const*/
    type["WorldToLocal2D"] = static_cast<Vector2 (Urho3D::Node::*)(const  Vector2 &) const>(&Urho3D::Node::WorldToLocal2D) ;
    /*Return whether transform has changed and world transform needs recalculation.*//*() const*/
    type["IsDirty"] = static_cast<bool (Urho3D::Node::*)() const>(&Urho3D::Node::IsDirty) ;
    /*Return number of components. BIND_AS_PROPERTY*//*() const*/
    type["GetNumComponents"] = static_cast<unsigned (Urho3D::Node::*)() const>(&Urho3D::Node::GetNumComponents) ;
    /*Return number of non-local components.*//*() const*/
    type["GetNumNetworkComponents"] = static_cast<unsigned (Urho3D::Node::*)() const>(&Urho3D::Node::GetNumNetworkComponents) ;
    /*Return listener components.*//*() const*/
    type["GetListeners"] = static_cast<const Vector<WeakPtr<Component>> (Urho3D::Node::*)() const>(&Urho3D::Node::GetListeners) ;
    /*Return a user variable.*//*(StringHash key) const*/
    type["GetVar"] = static_cast<const Variant& (Urho3D::Node::*)(StringHash) const>(&Urho3D::Node::GetVar) ;
    /*Return all user variables.*//*() const*/
    type["GetVars"] = static_cast<const VariantMap& (Urho3D::Node::*)() const>(&Urho3D::Node::GetVars) ;
    /*Set ID. Called by  Scene. BIND_AS_ALIAS_set_id*//*(unsigned id)*/
    type["SetID"] = static_cast<void (Urho3D::Node::*)(unsigned)>(&Urho3D::Node::SetID) ;
    /*Set scene. Called by  Scene.*//*(Scene *scene)*/
    type["SetScene"] = static_cast<void (Urho3D::Node::*)(Scene *)>(&Urho3D::Node::SetScene) ;
    /*Reset scene, ID and owner. Called by  Scene.*//*()*/
    type["ResetScene"] = static_cast<void (Urho3D::Node::*)()>(&Urho3D::Node::ResetScene) ;
    /*Set network position attribute.*//*(const Vector3 &value)*/
    type["SetNetPositionAttr"] = static_cast<void (Urho3D::Node::*)(const  Vector3 &)>(&Urho3D::Node::SetNetPositionAttr) ;
    /*Set network rotation attribute.*//*(const PODVector< unsigned char > &value)*/
    type["SetNetRotationAttr"] = static_cast<void (Urho3D::Node::*)(const  PODVector< unsigned char > &)>(&Urho3D::Node::SetNetRotationAttr) ;
    /*Set network parent attribute.*//*(const PODVector< unsigned char > &value)*/
    type["SetNetParentAttr"] = static_cast<void (Urho3D::Node::*)(const  PODVector< unsigned char > &)>(&Urho3D::Node::SetNetParentAttr) ;
    /*Return network position attribute.*//*() const*/
    type["GetNetPositionAttr"] = static_cast<const Vector3& (Urho3D::Node::*)() const>(&Urho3D::Node::GetNetPositionAttr) ;
    /*Return network rotation attribute.*//*() const*/
    type["GetNetRotationAttr"] = static_cast<const PODVector<unsigned char>& (Urho3D::Node::*)() const>(&Urho3D::Node::GetNetRotationAttr) ;
    /*Return network parent attribute.*//*() const*/
    type["GetNetParentAttr"] = static_cast<const PODVector<unsigned char>& (Urho3D::Node::*)() const>(&Urho3D::Node::GetNetParentAttr) ;
    /*Return the depended on nodes to order network updates.*//*() const*/
    type["GetDependencyNodes"] = static_cast<const PODVector<Node*>& (Urho3D::Node::*)() const>(&Urho3D::Node::GetDependencyNodes) ;
    /*Prepare network update by comparing attributes and marking replication states dirty as necessary.*//*()*/
    type["PrepareNetworkUpdate"] = static_cast<void (Urho3D::Node::*)()>(&Urho3D::Node::PrepareNetworkUpdate) ;
    /*Clean up all references to a network connection that is about to be removed. MANUAL_BIND*//*(Connection *connection)*/
    type["CleanupConnection"] = static_cast<void (Urho3D::Node::*)(Connection *)>(&Urho3D::Node::CleanupConnection) ;
    /*Mark node dirty in scene replication states.*//*()*/
    type["MarkReplicationDirty"] = static_cast<void (Urho3D::Node::*)()>(&Urho3D::Node::MarkReplicationDirty) ;
    /*Add a pre-created component. Using this function from application code is discouraged, as component operation without an owner node may not be well-defined in all cases. Prefer  CreateComponent() instead.*//*(Component *component, unsigned id, CreateMode mode)*/
    type["AddComponent"] = static_cast<void (Urho3D::Node::*)(Component *, unsigned, CreateMode)>(&Urho3D::Node::AddComponent) ;
    /*Calculate number of non-temporary child nodes.*//*() const*/
    type["GetNumPersistentChildren"] = static_cast<unsigned (Urho3D::Node::*)() const>(&Urho3D::Node::GetNumPersistentChildren) ;
    /*Calculate number of non-temporary components.*//*() const*/
    type["GetNumPersistentComponents"] = static_cast<unsigned (Urho3D::Node::*)() const>(&Urho3D::Node::GetNumPersistentComponents) ;
    /*Set position in parent space silently without marking the node & child nodes dirty. Used by animation code.*//*(const Vector3 &position)*/
    type["SetPositionSilent"] = static_cast<void (Urho3D::Node::*)(const  Vector3 &)>(&Urho3D::Node::SetPositionSilent) ;
    /*Set position in parent space silently without marking the node & child nodes dirty. Used by animation code.*//*(const Quaternion &rotation)*/
    type["SetRotationSilent"] = static_cast<void (Urho3D::Node::*)(const  Quaternion &)>(&Urho3D::Node::SetRotationSilent) ;
    /*Set scale in parent space silently without marking the node & child nodes dirty. Used by animation code.*//*(const Vector3 &scale)*/
    type["SetScaleSilent"] = static_cast<void (Urho3D::Node::*)(const  Vector3 &)>(&Urho3D::Node::SetScaleSilent) ;
    /*Set local transform silently without marking the node & child nodes dirty. Used by animation code.*//*(const Vector3 &position, const Quaternion &rotation, const Vector3 &scale)*/
    type["SetTransformSilent"] = static_cast<void (Urho3D::Node::*)(const  Vector3 &, const  Quaternion &, const  Vector3 &)>(&Urho3D::Node::SetTransformSilent) ;
    /*Return whether has a specific component.*//*(StringHash type) const*/
    type["HasComponent"] = static_cast<bool (Urho3D::Node::*)(StringHash) const>(&Urho3D::Node::HasComponent) ;
    type["Load"] = sol::overload(
        static_cast<bool (Urho3D::Node::*)(Deserializer &)>(&Urho3D::Node::Load) ,
        static_cast<bool (Urho3D::Node::*)(Deserializer &, SceneResolver &, bool, bool, CreateMode)>(&Urho3D::Node::Load) ,
        [](Urho3D::Node& self, Deserializer & source, SceneResolver & resolver, bool loadChildren, bool rewriteIDs){ return self.Load(source, resolver, loadChildren, rewriteIDs); },
        [](Urho3D::Node& self, Deserializer & source, SceneResolver & resolver, bool loadChildren){ return self.Load(source, resolver, loadChildren); },
        [](Urho3D::Node& self, Deserializer & source, SceneResolver & resolver){ return self.Load(source, resolver); } );
    type["LoadXML"] = sol::overload(
        static_cast<bool (Urho3D::Node::*)(const  XMLElement &)>(&Urho3D::Node::LoadXML) ,
        static_cast<bool (Urho3D::Node::*)(const  XMLElement &, SceneResolver &, bool, bool, CreateMode)>(&Urho3D::Node::LoadXML) ,
        [](Urho3D::Node& self, const  XMLElement & source, SceneResolver & resolver, bool loadChildren, bool rewriteIDs){ return self.LoadXML(source, resolver, loadChildren, rewriteIDs); },
        [](Urho3D::Node& self, const  XMLElement & source, SceneResolver & resolver, bool loadChildren){ return self.LoadXML(source, resolver, loadChildren); },
        [](Urho3D::Node& self, const  XMLElement & source, SceneResolver & resolver){ return self.LoadXML(source, resolver); } );
    type["LoadJSON"] = sol::overload(
        static_cast<bool (Urho3D::Node::*)(const  JSONValue &)>(&Urho3D::Node::LoadJSON) ,
        static_cast<bool (Urho3D::Node::*)(const  JSONValue &, SceneResolver &, bool, bool, CreateMode)>(&Urho3D::Node::LoadJSON) ,
        [](Urho3D::Node& self, const  JSONValue & source, SceneResolver & resolver, bool loadChildren, bool rewriteIDs){ return self.LoadJSON(source, resolver, loadChildren, rewriteIDs); },
        [](Urho3D::Node& self, const  JSONValue & source, SceneResolver & resolver, bool loadChildren){ return self.LoadJSON(source, resolver, loadChildren); },
        [](Urho3D::Node& self, const  JSONValue & source, SceneResolver & resolver){ return self.LoadJSON(source, resolver); } );
    type["SaveXML"] = sol::overload(
        static_cast<bool (Urho3D::Node::*)(XMLElement &) const>(&Urho3D::Node::SaveXML) ,
        static_cast<bool (Urho3D::Node::*)(Serializer &, const  String &) const>(&Urho3D::Node::SaveXML) ,
        [](Urho3D::Node& self, Serializer & dest){ return self.SaveXML(dest); } );
    type["SaveJSON"] = sol::overload(
        static_cast<bool (Urho3D::Node::*)(JSONValue &) const>(&Urho3D::Node::SaveJSON) ,
        static_cast<bool (Urho3D::Node::*)(Serializer &, const  String &) const>(&Urho3D::Node::SaveJSON) ,
        [](Urho3D::Node& self, Serializer & dest){ return self.SaveJSON(dest); } );
    type["AddTags"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(const  String &, char)>(&Urho3D::Node::AddTags) ,
        [](Urho3D::Node& self, const  String & tags){ self.AddTags(tags); },
        static_cast<void (Urho3D::Node::*)(const  StringVector &)>(&Urho3D::Node::AddTags)  );
    type["SetPosition2D"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(const  Vector2 &)>(&Urho3D::Node::SetPosition2D) ,
        static_cast<void (Urho3D::Node::*)(float, float)>(&Urho3D::Node::SetPosition2D)  );
    type["SetScale"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(float)>(&Urho3D::Node::SetScale) ,
        static_cast<void (Urho3D::Node::*)(const  Vector3 &)>(&Urho3D::Node::SetScale)  );
    type["SetScale2D"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(const  Vector2 &)>(&Urho3D::Node::SetScale2D) ,
        static_cast<void (Urho3D::Node::*)(float, float)>(&Urho3D::Node::SetScale2D)  );
    type["SetTransform"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(const  Vector3 &, const  Quaternion &)>(&Urho3D::Node::SetTransform) ,
        static_cast<void (Urho3D::Node::*)(const  Vector3 &, const  Quaternion &, float)>(&Urho3D::Node::SetTransform) ,
        static_cast<void (Urho3D::Node::*)(const  Vector3 &, const  Quaternion &, const  Vector3 &)>(&Urho3D::Node::SetTransform) ,
        static_cast<void (Urho3D::Node::*)(const  Matrix3x4 &)>(&Urho3D::Node::SetTransform)  );
    type["SetTransform2D"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(const  Vector2 &, float)>(&Urho3D::Node::SetTransform2D) ,
        static_cast<void (Urho3D::Node::*)(const  Vector2 &, float, float)>(&Urho3D::Node::SetTransform2D) ,
        static_cast<void (Urho3D::Node::*)(const  Vector2 &, float, const  Vector2 &)>(&Urho3D::Node::SetTransform2D)  );
    type["SetWorldPosition2D"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(const  Vector2 &)>(&Urho3D::Node::SetWorldPosition2D) ,
        static_cast<void (Urho3D::Node::*)(float, float)>(&Urho3D::Node::SetWorldPosition2D)  );
    type["SetWorldScale"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(float)>(&Urho3D::Node::SetWorldScale) ,
        static_cast<void (Urho3D::Node::*)(const  Vector3 &)>(&Urho3D::Node::SetWorldScale)  );
    type["SetWorldScale2D"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(const  Vector2 &)>(&Urho3D::Node::SetWorldScale2D) ,
        static_cast<void (Urho3D::Node::*)(float, float)>(&Urho3D::Node::SetWorldScale2D)  );
    type["SetWorldTransform"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(const  Vector3 &, const  Quaternion &)>(&Urho3D::Node::SetWorldTransform) ,
        static_cast<void (Urho3D::Node::*)(const  Vector3 &, const  Quaternion &, float)>(&Urho3D::Node::SetWorldTransform) ,
        static_cast<void (Urho3D::Node::*)(const  Vector3 &, const  Quaternion &, const  Vector3 &)>(&Urho3D::Node::SetWorldTransform) ,
        static_cast<void (Urho3D::Node::*)(const  Matrix3x4 &)>(&Urho3D::Node::SetWorldTransform)  );
    type["SetWorldTransform2D"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(const  Vector2 &, float)>(&Urho3D::Node::SetWorldTransform2D) ,
        static_cast<void (Urho3D::Node::*)(const  Vector2 &, float, float)>(&Urho3D::Node::SetWorldTransform2D) ,
        static_cast<void (Urho3D::Node::*)(const  Vector2 &, float, const  Vector2 &)>(&Urho3D::Node::SetWorldTransform2D)  );
    type["Translate"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(const  Vector3 &, TransformSpace)>(&Urho3D::Node::Translate) ,
        [](Urho3D::Node& self, const  Vector3 & delta){ self.Translate(delta); } );
    type["Translate2D"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(const  Vector2 &, TransformSpace)>(&Urho3D::Node::Translate2D) ,
        [](Urho3D::Node& self, const  Vector2 & delta){ self.Translate2D(delta); } );
    type["Rotate"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(const  Quaternion &, TransformSpace)>(&Urho3D::Node::Rotate) ,
        [](Urho3D::Node& self, const  Quaternion & delta){ self.Rotate(delta); } );
    type["Rotate2D"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(float, TransformSpace)>(&Urho3D::Node::Rotate2D) ,
        [](Urho3D::Node& self, float delta){ self.Rotate2D(delta); } );
    type["RotateAround"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(const  Vector3 &, const  Quaternion &, TransformSpace)>(&Urho3D::Node::RotateAround) ,
        [](Urho3D::Node& self, const  Vector3 & point, const  Quaternion & delta){ self.RotateAround(point, delta); } );
    type["RotateAround2D"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(const  Vector2 &, float, TransformSpace)>(&Urho3D::Node::RotateAround2D) ,
        [](Urho3D::Node& self, const  Vector2 & point, float delta){ self.RotateAround2D(point, delta); } );
    type["Pitch"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(float, TransformSpace)>(&Urho3D::Node::Pitch) ,
        [](Urho3D::Node& self, float angle){ self.Pitch(angle); } );
    type["Yaw"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(float, TransformSpace)>(&Urho3D::Node::Yaw) ,
        [](Urho3D::Node& self, float angle){ self.Yaw(angle); } );
    type["Roll"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(float, TransformSpace)>(&Urho3D::Node::Roll) ,
        [](Urho3D::Node& self, float angle){ self.Roll(angle); } );
    type["LookAt"] = sol::overload(
        static_cast<bool (Urho3D::Node::*)(const  Vector3 &, const  Vector3 &, TransformSpace)>(&Urho3D::Node::LookAt) ,
        [](Urho3D::Node& self, const  Vector3 & target, const  Vector3 & up){ return self.LookAt(target, up); },
        [](Urho3D::Node& self, const  Vector3 & target){ return self.LookAt(target); } );
    type["Scale"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(float)>(&Urho3D::Node::Scale) ,
        static_cast<void (Urho3D::Node::*)(const  Vector3 &)>(&Urho3D::Node::Scale)  );
    type["CreateChild"] = sol::overload(
        [](Urho3D::Node& self, const String &name=String::EMPTY, CreateMode mode=REPLICATED, unsigned id=0, bool temporary=false, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateChild(name, mode, id, temporary));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, const  String & name, CreateMode mode, unsigned id, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateChild(name, mode, id));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, const  String & name, CreateMode mode, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateChild(name, mode));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, const  String & name, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateChild(name));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateChild());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, unsigned id, CreateMode mode, bool temporary=false, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateChild(id, mode, temporary));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, unsigned id, CreateMode mode, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateChild(id, mode));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["CreateTemporaryChild"] = sol::overload(
        [](Urho3D::Node& self, const String &name=String::EMPTY, CreateMode mode=REPLICATED, unsigned id=0, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateTemporaryChild(name, mode, id));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, const  String & name, CreateMode mode, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateTemporaryChild(name, mode));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, const  String & name, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateTemporaryChild(name));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateTemporaryChild());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["AddChild"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(Node *, unsigned)>(&Urho3D::Node::AddChild) ,
        [](Urho3D::Node& self, Node * node){ self.AddChild(node); } );
    type["CreateComponent"] = sol::overload(
        [](Urho3D::Node& self, StringHash type, CreateMode mode=REPLICATED, unsigned id=0, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateComponent(type, mode, id));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, StringHash type, CreateMode mode, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateComponent(type, mode));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, StringHash type, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateComponent(type));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["GetOrCreateComponent"] = sol::overload(
        [](Urho3D::Node& self, StringHash type, CreateMode mode=REPLICATED, unsigned id=0, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOrCreateComponent(type, mode, id));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, StringHash type, CreateMode mode, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOrCreateComponent(type, mode));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, StringHash type, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOrCreateComponent(type));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["CloneComponent"] = sol::overload(
        [](Urho3D::Node& self, Component *component, unsigned id=0, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CloneComponent(component, id));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, Component * component, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CloneComponent(component));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, Component *component, CreateMode mode, unsigned id=0, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CloneComponent(component, mode, id));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, Component * component, CreateMode mode, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CloneComponent(component, mode));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["RemoveComponent"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(Component *)>(&Urho3D::Node::RemoveComponent) ,
        static_cast<void (Urho3D::Node::*)(StringHash)>(&Urho3D::Node::RemoveComponent)  );
    type["RemoveComponents"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(bool, bool)>(&Urho3D::Node::RemoveComponents) ,
        static_cast<void (Urho3D::Node::*)(StringHash)>(&Urho3D::Node::RemoveComponents)  );
    type["Clone"] = sol::overload(
        [](Urho3D::Node& self, CreateMode mode=REPLICATED, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.Clone(mode));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.Clone());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["LocalToWorld"] = sol::overload(
        static_cast<Vector3 (Urho3D::Node::*)(const  Vector3 &) const>(&Urho3D::Node::LocalToWorld) ,
        static_cast<Vector3 (Urho3D::Node::*)(const  Vector4 &) const>(&Urho3D::Node::LocalToWorld)  );
    type["WorldToLocal"] = sol::overload(
        static_cast<Vector3 (Urho3D::Node::*)(const  Vector3 &) const>(&Urho3D::Node::WorldToLocal) ,
        static_cast<Vector3 (Urho3D::Node::*)(const  Vector4 &) const>(&Urho3D::Node::WorldToLocal)  );
    type["GetNumChildren"] = sol::overload(
        static_cast<unsigned (Urho3D::Node::*)(bool) const>(&Urho3D::Node::GetNumChildren) ,
        [](Urho3D::Node& self){ return self.GetNumChildren(); } );
    type["GetChildren"] = sol::overload(
        static_cast<const Vector<SharedPtr<Node>>& (Urho3D::Node::*)() const>(&Urho3D::Node::GetChildren) ,
        static_cast<void (Urho3D::Node::*)(PODVector<  Node * > &, bool) const>(&Urho3D::Node::GetChildren) ,
        [](Urho3D::Node& self, PODVector<  Node * > & dest){ self.GetChildren(dest); },
        static_cast<PODVector<Node*> (Urho3D::Node::*)(bool) const>(&Urho3D::Node::GetChildren)  );
    type["GetChildrenWithComponent"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(PODVector<  Node * > &, StringHash, bool) const>(&Urho3D::Node::GetChildrenWithComponent) ,
        [](Urho3D::Node& self, PODVector<  Node * > & dest, StringHash type){ self.GetChildrenWithComponent(dest, type); },
        static_cast<PODVector<Node*> (Urho3D::Node::*)(StringHash, bool) const>(&Urho3D::Node::GetChildrenWithComponent) ,
        [](Urho3D::Node& self, StringHash type){ return self.GetChildrenWithComponent(type); } );
    type["GetChildrenWithTag"] = sol::overload(
        static_cast<void (Urho3D::Node::*)(PODVector<  Node * > &, const  String &, bool) const>(&Urho3D::Node::GetChildrenWithTag) ,
        [](Urho3D::Node& self, PODVector<  Node * > & dest, const  String & tag){ self.GetChildrenWithTag(dest, tag); },
        static_cast<PODVector<Node*> (Urho3D::Node::*)(const  String &, bool) const>(&Urho3D::Node::GetChildrenWithTag) ,
        [](Urho3D::Node& self, const  String & tag){ return self.GetChildrenWithTag(tag); } );
    type["GetChild"] = sol::overload(
        [](Urho3D::Node& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetChild(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, const String &name, bool recursive=false, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetChild(name, recursive));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, const  String & name, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetChild(name));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, const char *name, bool recursive=false, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetChild(name, recursive));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, const char * name, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetChild(name));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, StringHash nameHash, bool recursive=false, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetChild(nameHash, recursive));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, StringHash nameHash, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetChild(nameHash));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["GetComponents"] = sol::overload(
        static_cast<const Vector<SharedPtr<Component>>& (Urho3D::Node::*)() const>(&Urho3D::Node::GetComponents) ,
        static_cast<void (Urho3D::Node::*)(PODVector<  Component * > &, StringHash, bool) const>(&Urho3D::Node::GetComponents) ,
        [](Urho3D::Node& self, PODVector<  Component * > & dest, StringHash type){ self.GetComponents(dest, type); } );
    type["GetComponent"] = sol::overload(
        [](Urho3D::Node& self, StringHash type, bool recursive=false, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetComponent(type, recursive));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, StringHash type, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetComponent(type));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["GetParentComponent"] = sol::overload(
        [](Urho3D::Node& self, StringHash type, bool fullTraversal=false, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetParentComponent(type, fullTraversal));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Node& self, StringHash type, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetParentComponent(type));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["direction"] = sol::property(static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetDirection) 
        , static_cast<void (Urho3D::Node::*)(const  Vector3 &)>(&Urho3D::Node::SetDirection) );
    type["enabled"] = sol::property(static_cast<bool (Urho3D::Node::*)() const>(&Urho3D::Node::IsEnabled) 
        , static_cast<void (Urho3D::Node::*)(bool)>(&Urho3D::Node::SetEnabled) );
    type["enabledSelf"] = sol::property(static_cast<bool (Urho3D::Node::*)() const>(&Urho3D::Node::IsEnabledSelf) );
    type["id"] = sol::property(static_cast<unsigned (Urho3D::Node::*)() const>(&Urho3D::Node::GetID) 
        , static_cast<void (Urho3D::Node::*)(unsigned)>(&Urho3D::Node::SetID) );
    type["name"] = sol::property(static_cast<const String& (Urho3D::Node::*)() const>(&Urho3D::Node::GetName) 
        , static_cast<void (Urho3D::Node::*)(const  String &)>(&Urho3D::Node::SetName) );
    type["numComponents"] = sol::property(static_cast<unsigned (Urho3D::Node::*)() const>(&Urho3D::Node::GetNumComponents) );
    type["parent"] = sol::property([](Urho3D::Node& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetParent());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Node::*)(Node *)>(&Urho3D::Node::SetParent) );
    type["position"] = sol::property(static_cast<const Vector3& (Urho3D::Node::*)() const>(&Urho3D::Node::GetPosition) 
        , static_cast<void (Urho3D::Node::*)(const  Vector3 &)>(&Urho3D::Node::SetPosition) );
    type["position2D"] = sol::property(static_cast<Vector2 (Urho3D::Node::*)() const>(&Urho3D::Node::GetPosition2D) 
        , static_cast<void (Urho3D::Node::*)(const  Vector2 &)>(&Urho3D::Node::SetPosition2D) );
    type["replicated"] = sol::property(static_cast<bool (Urho3D::Node::*)() const>(&Urho3D::Node::IsReplicated) );
    type["right"] = sol::property(static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetRight) );
    type["rotation"] = sol::property(static_cast<const Quaternion& (Urho3D::Node::*)() const>(&Urho3D::Node::GetRotation) 
        , static_cast<void (Urho3D::Node::*)(const  Quaternion &)>(&Urho3D::Node::SetRotation) );
    type["rotation2D"] = sol::property(static_cast<float (Urho3D::Node::*)() const>(&Urho3D::Node::GetRotation2D) 
        , static_cast<void (Urho3D::Node::*)(float)>(&Urho3D::Node::SetRotation2D) );
    type["scale"] = sol::property(static_cast<const Vector3& (Urho3D::Node::*)() const>(&Urho3D::Node::GetScale) 
        , static_cast<void (Urho3D::Node::*)(const  Vector3 &)>(&Urho3D::Node::SetScale) );
    type["scale2D"] = sol::property(static_cast<Vector2 (Urho3D::Node::*)() const>(&Urho3D::Node::GetScale2D) 
        , static_cast<void (Urho3D::Node::*)(const  Vector2 &)>(&Urho3D::Node::SetScale2D) );
    type["scene"] = sol::property([](Urho3D::Node& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetScene());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["signedWorldScale"] = sol::property(static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetSignedWorldScale) );
    type["tags"] = sol::property(static_cast<const StringVector& (Urho3D::Node::*)() const>(&Urho3D::Node::GetTags) );
    type["transform"] = sol::property(static_cast<Matrix3x4 (Urho3D::Node::*)() const>(&Urho3D::Node::GetTransform) );
    type["up"] = sol::property(static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetUp) );
    type["worldDirection"] = sol::property(static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldDirection) 
        , static_cast<void (Urho3D::Node::*)(const  Vector3 &)>(&Urho3D::Node::SetWorldDirection) );
    type["worldPosition"] = sol::property(static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldPosition) 
        , static_cast<void (Urho3D::Node::*)(const  Vector3 &)>(&Urho3D::Node::SetWorldPosition) );
    type["worldPosition2D"] = sol::property(static_cast<Vector2 (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldPosition2D) 
        , static_cast<void (Urho3D::Node::*)(const  Vector2 &)>(&Urho3D::Node::SetWorldPosition2D) );
    type["worldRight"] = sol::property(static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldRight) );
    type["worldRotation"] = sol::property(static_cast<Quaternion (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldRotation) 
        , static_cast<void (Urho3D::Node::*)(const  Quaternion &)>(&Urho3D::Node::SetWorldRotation) );
    type["worldRotation2D"] = sol::property(static_cast<float (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldRotation2D) 
        , static_cast<void (Urho3D::Node::*)(float)>(&Urho3D::Node::SetWorldRotation2D) );
    type["worldScale"] = sol::property(static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldScale) 
        , static_cast<void (Urho3D::Node::*)(const  Vector3 &)>(&Urho3D::Node::SetWorldScale) );
    type["worldScale2D"] = sol::property(static_cast<Vector2 (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldScale2D) 
        , static_cast<void (Urho3D::Node::*)(const  Vector2 &)>(&Urho3D::Node::SetWorldScale2D) );
    type["worldTransform"] = sol::property(static_cast<const Matrix3x4& (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldTransform) );
    type["worldUp"] = sol::property(static_cast<Vector3 (Urho3D::Node::*)() const>(&Urho3D::Node::GetWorldUp) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/Node.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/Node.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/IO/VectorBuffer.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Network/Connection.h>
#include <Urho3D/Scene/Node.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_NodeImpl(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::NodeImpl>( "NodeImpl"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["dependencyNodes_"] = &Urho3D::NodeImpl::dependencyNodes_;
    type["owner_"] = &Urho3D::NodeImpl::owner_;
    type["name_"] = &Urho3D::NodeImpl::name_;
    type["tags_"] = &Urho3D::NodeImpl::tags_;
    type["nameHash_"] = &Urho3D::NodeImpl::nameHash_;
    type["attrBuffer_"] = &Urho3D::NodeImpl::attrBuffer_;

}

