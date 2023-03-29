
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/Scene.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/Scene.h>
#include <Urho3D/Container/HashSet.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Mutex.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/File.h>
#include <Urho3D/IO/PackageFile.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/IO/VectorBuffer.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Network/Connection.h>
#include <Urho3D/Resource/JSONFile.h>
#include <Urho3D/Resource/JSONValue.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Scene/Animatable.h>
#include <Urho3D/Scene/Component.h>
#include <Urho3D/Scene/Node.h>
#include <Urho3D/Scene/ReplicationState.h>
#include <Urho3D/Scene/SceneResolver.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Scene(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Scene::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Scene::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Scene>((Urho3D::Scene*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Scene>( "Scene"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Node,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Scene>(context);
        });

// Members

    /*Load from binary data. Removes all existing child nodes and components first. Return true if successful.*//*(Deserializer &source) override*/
    type["Load"] = static_cast<bool (Urho3D::Scene::*)(Deserializer &)>(&Urho3D::Scene::Load) ;
    /*Save to binary data. Return true if successful.*//*(Serializer &dest) const override*/
    type["Save"] = static_cast<bool (Urho3D::Scene::*)(Serializer &) const>(&Urho3D::Scene::Save) ;
    /*Add a replication state that is tracking this scene.*//*(NodeReplicationState *state) override*/
    type["AddReplicationState"] = static_cast<void (Urho3D::Scene::*)(NodeReplicationState *)>(&Urho3D::Scene::AddReplicationState) ;
    /*Stop asynchronous loading.*//*()*/
    type["StopAsyncLoading"] = static_cast<void (Urho3D::Scene::*)()>(&Urho3D::Scene::StopAsyncLoading) ;
    /*Enable or disable scene update. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetUpdateEnabled"] = static_cast<void (Urho3D::Scene::*)(bool)>(&Urho3D::Scene::SetUpdateEnabled) ;
    /*Set update time scale. 1.0 = real time (default). BIND_AS_PROPERTY*//*(float scale)*/
    type["SetTimeScale"] = static_cast<void (Urho3D::Scene::*)(float)>(&Urho3D::Scene::SetTimeScale) ;
    /*Set elapsed time in seconds. This can be used to prevent inaccuracy in the timer if the scene runs for a long time. BIND_AS_PROPERTY*//*(float time)*/
    type["SetElapsedTime"] = static_cast<void (Urho3D::Scene::*)(float)>(&Urho3D::Scene::SetElapsedTime) ;
    /*Set network client motion smoothing constant. BIND_AS_PROPERTY*//*(float constant)*/
    type["SetSmoothingConstant"] = static_cast<void (Urho3D::Scene::*)(float)>(&Urho3D::Scene::SetSmoothingConstant) ;
    /*Set network client motion smoothing snap threshold. BIND_AS_PROPERTY*//*(float threshold)*/
    type["SetSnapThreshold"] = static_cast<void (Urho3D::Scene::*)(float)>(&Urho3D::Scene::SetSnapThreshold) ;
    /*Set maximum milliseconds per frame to spend on async scene loading. BIND_AS_PROPERTY*//*(int ms)*/
    type["SetAsyncLoadingMs"] = static_cast<void (Urho3D::Scene::*)(int)>(&Urho3D::Scene::SetAsyncLoadingMs) ;
    /*Add a required package file for networking. To be called on the server.*//*(PackageFile *package)*/
    type["AddRequiredPackageFile"] = static_cast<void (Urho3D::Scene::*)(PackageFile *)>(&Urho3D::Scene::AddRequiredPackageFile) ;
    /*Clear required package files.*//*()*/
    type["ClearRequiredPackageFiles"] = static_cast<void (Urho3D::Scene::*)()>(&Urho3D::Scene::ClearRequiredPackageFiles) ;
    /*Register a node user variable hash reverse mapping (for editing).*//*(const String &name)*/
    type["RegisterVar"] = static_cast<void (Urho3D::Scene::*)(const  String &)>(&Urho3D::Scene::RegisterVar) ;
    /*Unregister a node user variable hash reverse mapping.*//*(const String &name)*/
    type["UnregisterVar"] = static_cast<void (Urho3D::Scene::*)(const  String &)>(&Urho3D::Scene::UnregisterVar) ;
    /*Clear all registered node user variable hash reverse mappings.*//*()*/
    type["UnregisterAllVars"] = static_cast<void (Urho3D::Scene::*)()>(&Urho3D::Scene::UnregisterAllVars) ;
    /*Return node from the whole scene by ID, or null if not found.*//*(unsigned id) const*/
    type["GetNode"] = [](Urho3D::Scene& self, unsigned id, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetNode(id));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Get nodes with specific tag from the whole scene, return false if empty.*//*(PODVector< Node * > &dest, const String &tag) const*/
    type["GetNodesWithTag"] = static_cast<bool (Urho3D::Scene::*)(PODVector<  Node * > &, const  String &) const>(&Urho3D::Scene::GetNodesWithTag) ;
    /*Return whether updates are enabled. BIND_AS_PROPERTY*//*() const*/
    type["IsUpdateEnabled"] = static_cast<bool (Urho3D::Scene::*)() const>(&Urho3D::Scene::IsUpdateEnabled) ;
    /*Return whether an asynchronous loading operation is in progress. BIND_AS_PROPERTY*//*() const*/
    type["IsAsyncLoading"] = static_cast<bool (Urho3D::Scene::*)() const>(&Urho3D::Scene::IsAsyncLoading) ;
    /*Return asynchronous loading progress between 0.0 and 1.0, or 1.0 if not in progress. BIND_AS_PROPERTY*//*() const*/
    type["GetAsyncProgress"] = static_cast<float (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetAsyncProgress) ;
    /*Return the load mode of the current asynchronous loading operation. BIND_AS_PROPERTY*//*() const*/
    type["GetAsyncLoadMode"] = static_cast<LoadMode (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetAsyncLoadMode) ;
    /*Return source file name. BIND_AS_PROPERTY*//*() const*/
    type["GetFileName"] = static_cast<const String& (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetFileName) ;
    /*Return source file checksum. BIND_AS_PROPERTY*//*() const*/
    type["GetChecksum"] = static_cast<unsigned (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetChecksum) ;
    /*Return update time scale. BIND_AS_PROPERTY*//*() const*/
    type["GetTimeScale"] = static_cast<float (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetTimeScale) ;
    /*Return elapsed time in seconds. BIND_AS_PROPERTY*//*() const*/
    type["GetElapsedTime"] = static_cast<float (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetElapsedTime) ;
    /*Return motion smoothing constant. BIND_AS_PROPERTY*//*() const*/
    type["GetSmoothingConstant"] = static_cast<float (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetSmoothingConstant) ;
    /*Return motion smoothing snap threshold. BIND_AS_PROPERTY*//*() const*/
    type["GetSnapThreshold"] = static_cast<float (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetSnapThreshold) ;
    /*Return maximum milliseconds per frame to spend on async loading. BIND_AS_PROPERTY*//*() const*/
    type["GetAsyncLoadingMs"] = static_cast<int (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetAsyncLoadingMs) ;
    /*Return required package files. BIND_AS_PROPERTY*//*() const*/
    type["GetRequiredPackageFiles"] = static_cast<const Vector<SharedPtr<PackageFile>>& (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetRequiredPackageFiles) ;
    /*Return a node user variable name, or empty if not registered.*//*(StringHash hash) const*/
    type["GetVarName"] = static_cast<const String& (Urho3D::Scene::*)(StringHash) const>(&Urho3D::Scene::GetVarName) ;
    /*Update scene. Called by HandleUpdate.*//*(float timeStep)*/
    type["Update"] = static_cast<void (Urho3D::Scene::*)(float)>(&Urho3D::Scene::Update) ;
    /*Begin a threaded update. During threaded update components can choose to delay dirty processing.*//*()*/
    type["BeginThreadedUpdate"] = static_cast<void (Urho3D::Scene::*)()>(&Urho3D::Scene::BeginThreadedUpdate) ;
    /*End a threaded update. Notify components that marked themselves for delayed dirty processing.*//*()*/
    type["EndThreadedUpdate"] = static_cast<void (Urho3D::Scene::*)()>(&Urho3D::Scene::EndThreadedUpdate) ;
    /*Add a component to the delayed dirty notify queue. Is thread-safe.*//*(Component *component)*/
    type["DelayedMarkedDirty"] = static_cast<void (Urho3D::Scene::*)(Component *)>(&Urho3D::Scene::DelayedMarkedDirty) ;
    /*Return threaded update flag.*//*() const*/
    type["IsThreadedUpdate"] = static_cast<bool (Urho3D::Scene::*)() const>(&Urho3D::Scene::IsThreadedUpdate) ;
    /*Get free node ID, either non-local or local.*//*(CreateMode mode)*/
    type["GetFreeNodeID"] = static_cast<unsigned (Urho3D::Scene::*)(CreateMode)>(&Urho3D::Scene::GetFreeNodeID) ;
    /*Get free component ID, either non-local or local.*//*(CreateMode mode)*/
    type["GetFreeComponentID"] = static_cast<unsigned (Urho3D::Scene::*)(CreateMode)>(&Urho3D::Scene::GetFreeComponentID) ;
    /*Cache node by tag if tag not zero, no checking if already added. Used internaly in  Node::AddTag.*//*(Node *node, const String &tag)*/
    type["NodeTagAdded"] = static_cast<void (Urho3D::Scene::*)(Node *, const  String &)>(&Urho3D::Scene::NodeTagAdded) ;
    /*Cache node by tag if tag not zero.*//*(Node *node, const String &tag)*/
    type["NodeTagRemoved"] = static_cast<void (Urho3D::Scene::*)(Node *, const  String &)>(&Urho3D::Scene::NodeTagRemoved) ;
    /*Node added. Assign scene pointer and add to ID map.*//*(Node *node)*/
    type["NodeAdded"] = static_cast<void (Urho3D::Scene::*)(Node *)>(&Urho3D::Scene::NodeAdded) ;
    /*Node removed. Remove from ID map.*//*(Node *node)*/
    type["NodeRemoved"] = static_cast<void (Urho3D::Scene::*)(Node *)>(&Urho3D::Scene::NodeRemoved) ;
    /*Component added. Add to ID map.*//*(Component *component)*/
    type["ComponentAdded"] = static_cast<void (Urho3D::Scene::*)(Component *)>(&Urho3D::Scene::ComponentAdded) ;
    /*Component removed. Remove from ID map.*//*(Component *component)*/
    type["ComponentRemoved"] = static_cast<void (Urho3D::Scene::*)(Component *)>(&Urho3D::Scene::ComponentRemoved) ;
    /*Set node user variable reverse mappings.*//*(const String &value)*/
    type["SetVarNamesAttr"] = static_cast<void (Urho3D::Scene::*)(const  String &)>(&Urho3D::Scene::SetVarNamesAttr) ;
    /*Return node user variable reverse mappings.*//*() const*/
    type["GetVarNamesAttr"] = static_cast<String (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetVarNamesAttr) ;
    /*Prepare network update by comparing attributes and marking replication states dirty as necessary.*//*()*/
    type["PrepareNetworkUpdate"] = static_cast<void (Urho3D::Scene::*)()>(&Urho3D::Scene::PrepareNetworkUpdate) ;
    /*Clean up all references to a network connection that is about to be removed. MANUAL_BIND*//*(Connection *connection)*/
    type["CleanupConnection"] = static_cast<void (Urho3D::Scene::*)(Connection *)>(&Urho3D::Scene::CleanupConnection) ;
    /*Mark a node dirty in scene replication states. The node does not need to have own replication state yet.*//*(Node *node)*/
    type["MarkReplicationDirty"] = static_cast<void (Urho3D::Scene::*)(Node *)>(&Urho3D::Scene::MarkReplicationDirty) ;
    type["LoadXML"] = sol::overload(
        static_cast<bool (Urho3D::Scene::*)(const  XMLElement &)>(&Urho3D::Scene::LoadXML) ,
        static_cast<bool (Urho3D::Scene::*)(Deserializer &)>(&Urho3D::Scene::LoadXML)  );
    type["LoadJSON"] = sol::overload(
        static_cast<bool (Urho3D::Scene::*)(const  JSONValue &)>(&Urho3D::Scene::LoadJSON) ,
        static_cast<bool (Urho3D::Scene::*)(Deserializer &)>(&Urho3D::Scene::LoadJSON)  );
    type["MarkNetworkUpdate"] = sol::overload(
        static_cast<void (Urho3D::Scene::*)()>(&Urho3D::Scene::MarkNetworkUpdate) ,
        static_cast<void (Urho3D::Scene::*)(Node *)>(&Urho3D::Scene::MarkNetworkUpdate) ,
        static_cast<void (Urho3D::Scene::*)(Component *)>(&Urho3D::Scene::MarkNetworkUpdate)  );
    type["SaveXML"] = sol::overload(
        static_cast<bool (Urho3D::Scene::*)(Serializer &, const  String &) const>(&Urho3D::Scene::SaveXML) ,
        [](Urho3D::Scene& self, Serializer & dest){ return self.SaveXML(dest); },
        static_cast<bool (Urho3D::Node::*)(XMLElement &) const>(&Urho3D::Node::SaveXML) ,
        static_cast<bool (Urho3D::Node::*)(Serializer &, const  String &) const>(&Urho3D::Node::SaveXML) ,
        [](Urho3D::Scene& self, Serializer & dest){ return self.SaveXML(dest); } );
    type["SaveJSON"] = sol::overload(
        static_cast<bool (Urho3D::Scene::*)(Serializer &, const  String &) const>(&Urho3D::Scene::SaveJSON) ,
        [](Urho3D::Scene& self, Serializer & dest){ return self.SaveJSON(dest); },
        static_cast<bool (Urho3D::Node::*)(JSONValue &) const>(&Urho3D::Node::SaveJSON) ,
        static_cast<bool (Urho3D::Node::*)(Serializer &, const  String &) const>(&Urho3D::Node::SaveJSON) ,
        [](Urho3D::Scene& self, Serializer & dest){ return self.SaveJSON(dest); } );
    type["LoadAsync"] = sol::overload(
        static_cast<bool (Urho3D::Scene::*)(File *, LoadMode)>(&Urho3D::Scene::LoadAsync) ,
        [](Urho3D::Scene& self, File * file){ return self.LoadAsync(file); } );
    type["LoadAsyncXML"] = sol::overload(
        static_cast<bool (Urho3D::Scene::*)(File *, LoadMode)>(&Urho3D::Scene::LoadAsyncXML) ,
        [](Urho3D::Scene& self, File * file){ return self.LoadAsyncXML(file); } );
    type["LoadAsyncJSON"] = sol::overload(
        static_cast<bool (Urho3D::Scene::*)(File *, LoadMode)>(&Urho3D::Scene::LoadAsyncJSON) ,
        [](Urho3D::Scene& self, File * file){ return self.LoadAsyncJSON(file); } );
    type["Instantiate"] = sol::overload(
        [](Urho3D::Scene& self, Deserializer &source, const Vector3 &position, const Quaternion &rotation, CreateMode mode=REPLICATED, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.Instantiate(source, position, rotation, mode));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Scene& self, Deserializer & source, const  Vector3 & position, const  Quaternion & rotation, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.Instantiate(source, position, rotation));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["InstantiateXML"] = sol::overload(
        [](Urho3D::Scene& self, const XMLElement &source, const Vector3 &position, const Quaternion &rotation, CreateMode mode=REPLICATED, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.InstantiateXML(source, position, rotation, mode));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Scene& self, const  XMLElement & source, const  Vector3 & position, const  Quaternion & rotation, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.InstantiateXML(source, position, rotation));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Scene& self, Deserializer &source, const Vector3 &position, const Quaternion &rotation, CreateMode mode=REPLICATED, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.InstantiateXML(source, position, rotation, mode));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Scene& self, Deserializer & source, const  Vector3 & position, const  Quaternion & rotation, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.InstantiateXML(source, position, rotation));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["InstantiateJSON"] = sol::overload(
        [](Urho3D::Scene& self, const JSONValue &source, const Vector3 &position, const Quaternion &rotation, CreateMode mode=REPLICATED, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.InstantiateJSON(source, position, rotation, mode));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Scene& self, const  JSONValue & source, const  Vector3 & position, const  Quaternion & rotation, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.InstantiateJSON(source, position, rotation));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Scene& self, Deserializer &source, const Vector3 &position, const Quaternion &rotation, CreateMode mode=REPLICATED, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.InstantiateJSON(source, position, rotation, mode));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Scene& self, Deserializer & source, const  Vector3 & position, const  Quaternion & rotation, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.InstantiateJSON(source, position, rotation));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["Clear"] = sol::overload(
        static_cast<void (Urho3D::Scene::*)(bool, bool)>(&Urho3D::Scene::Clear) ,
        [](Urho3D::Scene& self, bool clearReplicated){ self.Clear(clearReplicated); },
        [](Urho3D::Scene& self){ self.Clear(); } );
    type["GetComponent"] = sol::overload(
        [](Urho3D::Scene& self, unsigned id, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetComponent(id));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Scene& self, StringHash type, bool recursive=false, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetComponent(type, recursive));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Scene& self, StringHash type, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetComponent(type));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["asyncLoadMode"] = sol::property(static_cast<LoadMode (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetAsyncLoadMode) );
    type["asyncLoading"] = sol::property(static_cast<bool (Urho3D::Scene::*)() const>(&Urho3D::Scene::IsAsyncLoading) );
    type["asyncLoadingMs"] = sol::property(static_cast<int (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetAsyncLoadingMs) 
        , static_cast<void (Urho3D::Scene::*)(int)>(&Urho3D::Scene::SetAsyncLoadingMs) );
    type["asyncProgress"] = sol::property(static_cast<float (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetAsyncProgress) );
    type["checksum"] = sol::property(static_cast<unsigned (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetChecksum) );
    type["elapsedTime"] = sol::property(static_cast<float (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetElapsedTime) 
        , static_cast<void (Urho3D::Scene::*)(float)>(&Urho3D::Scene::SetElapsedTime) );
    type["fileName"] = sol::property(static_cast<const String& (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetFileName) );
    type["requiredPackageFiles"] = sol::property(static_cast<const Vector<SharedPtr<PackageFile>>& (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetRequiredPackageFiles) );
    type["smoothingConstant"] = sol::property(static_cast<float (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetSmoothingConstant) 
        , static_cast<void (Urho3D::Scene::*)(float)>(&Urho3D::Scene::SetSmoothingConstant) );
    type["snapThreshold"] = sol::property(static_cast<float (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetSnapThreshold) 
        , static_cast<void (Urho3D::Scene::*)(float)>(&Urho3D::Scene::SetSnapThreshold) );
    type["timeScale"] = sol::property(static_cast<float (Urho3D::Scene::*)() const>(&Urho3D::Scene::GetTimeScale) 
        , static_cast<void (Urho3D::Scene::*)(float)>(&Urho3D::Scene::SetTimeScale) );
    type["updateEnabled"] = sol::property(static_cast<bool (Urho3D::Scene::*)() const>(&Urho3D::Scene::IsUpdateEnabled) 
        , static_cast<void (Urho3D::Scene::*)(bool)>(&Urho3D::Scene::SetUpdateEnabled) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/Scene.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/Scene.h>
#include <Urho3D/Container/HashSet.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Core/Mutex.h>
#include <Urho3D/IO/File.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Resource/JSONFile.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/Scene/Node.h>
#include <Urho3D/Scene/SceneResolver.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_AsyncProgress(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::AsyncProgress>( "AsyncProgress"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["file_"] = &Urho3D::AsyncProgress::file_;
    type["xmlFile_"] = &Urho3D::AsyncProgress::xmlFile_;
    type["jsonFile_"] = &Urho3D::AsyncProgress::jsonFile_;
    type["xmlElement_"] = &Urho3D::AsyncProgress::xmlElement_;
    type["jsonIndex_"] = &Urho3D::AsyncProgress::jsonIndex_;
    type["mode_"] = &Urho3D::AsyncProgress::mode_;
    type["resources_"] = &Urho3D::AsyncProgress::resources_;
    type["loadedResources_"] = &Urho3D::AsyncProgress::loadedResources_;
    type["totalResources_"] = &Urho3D::AsyncProgress::totalResources_;
    type["loadedNodes_"] = &Urho3D::AsyncProgress::loadedNodes_;
    type["totalNodes_"] = &Urho3D::AsyncProgress::totalNodes_;

}

