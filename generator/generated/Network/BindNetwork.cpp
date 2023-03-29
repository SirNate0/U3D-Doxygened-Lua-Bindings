
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Network/Network.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Network/Network.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/IO/PackageFile.h>
#include <Urho3D/IO/VectorBuffer.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Network/Connection.h>
#include <Urho3D/Network/HttpRequest.h>
#include <Urho3D/Scene/Node.h>
#include <Urho3D/Scene/Scene.h>
#include <SLikeNet/types.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Network(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Network::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Network::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Network>((Urho3D::Network*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Network>( "Network"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Network>(context);
        });

// Members

    /*Handle an inbound message.*//*(const SLNet::AddressOrGUID &source, int packetID, int msgID, const char *data, size_t numBytes)*/
    type["HandleMessage"] = static_cast<void (Urho3D::Network::*)(const SLNet::AddressOrGUID &, int, int, const char *, size_t)>(&Urho3D::Network::HandleMessage) ;
    /*Handle a new client connection.*//*(const SLNet::AddressOrGUID &connection)*/
    type["NewConnectionEstablished"] = static_cast<void (Urho3D::Network::*)(const SLNet::AddressOrGUID &)>(&Urho3D::Network::NewConnectionEstablished) ;
    /*Handle a client disconnection.*//*(const SLNet::AddressOrGUID &connection)*/
    type["ClientDisconnected"] = static_cast<void (Urho3D::Network::*)(const SLNet::AddressOrGUID &)>(&Urho3D::Network::ClientDisconnected) ;
    /*Set the data that will be used for a reply to attempts at host discovery on LAN/subnet.*//*(const VariantMap &data)*/
    type["SetDiscoveryBeacon"] = static_cast<void (Urho3D::Network::*)(const  VariantMap &)>(&Urho3D::Network::SetDiscoveryBeacon) ;
    /*Scan the LAN/subnet for available hosts.*//*(unsigned port)*/
    type["DiscoverHosts"] = static_cast<void (Urho3D::Network::*)(unsigned)>(&Urho3D::Network::DiscoverHosts) ;
    /*Set password for the client/server communcation.*//*(const String &password)*/
    type["SetPassword"] = static_cast<void (Urho3D::Network::*)(const  String &)>(&Urho3D::Network::SetPassword) ;
    /*Set NAT server information.*//*(const String &address, unsigned short port)*/
    type["SetNATServerInfo"] = static_cast<void (Urho3D::Network::*)(const  String &, unsigned short)>(&Urho3D::Network::SetNATServerInfo) ;
    /*Stop the server.*//*()*/
    type["StopServer"] = static_cast<void (Urho3D::Network::*)()>(&Urho3D::Network::StopServer) ;
    /*Start NAT punchtrough client to allow remote connections.*//*()*/
    type["StartNATClient"] = static_cast<void (Urho3D::Network::*)()>(&Urho3D::Network::StartNATClient) ;
    /*Get local server GUID. BIND_AS_ALIAS_get_guid*//*() const*/
    type["GetGUID"] = static_cast<const String& (Urho3D::Network::*)() const>(&Urho3D::Network::GetGUID) ;
    /*Set network update FPS. BIND_AS_PROPERTY*//*(int fps)*/
    type["SetUpdateFps"] = static_cast<void (Urho3D::Network::*)(int)>(&Urho3D::Network::SetUpdateFps) ;
    /*Set simulated latency in milliseconds. This adds a fixed delay before sending each packet. BIND_AS_PROPERTY*//*(int ms)*/
    type["SetSimulatedLatency"] = static_cast<void (Urho3D::Network::*)(int)>(&Urho3D::Network::SetSimulatedLatency) ;
    /*Set simulated packet loss probability between 0.0 - 1.0. BIND_AS_PROPERTY*//*(float probability)*/
    type["SetSimulatedPacketLoss"] = static_cast<void (Urho3D::Network::*)(float)>(&Urho3D::Network::SetSimulatedPacketLoss) ;
    /*Register a remote event as allowed to be received. There is also a fixed blacklist of events that can not be allowed in any case, such as ConsoleCommand.*//*(StringHash eventType)*/
    type["RegisterRemoteEvent"] = static_cast<void (Urho3D::Network::*)(StringHash)>(&Urho3D::Network::RegisterRemoteEvent) ;
    /*Unregister a remote event as allowed to received.*//*(StringHash eventType)*/
    type["UnregisterRemoteEvent"] = static_cast<void (Urho3D::Network::*)(StringHash)>(&Urho3D::Network::UnregisterRemoteEvent) ;
    /*Unregister all remote events.*//*()*/
    type["UnregisterAllRemoteEvents"] = static_cast<void (Urho3D::Network::*)()>(&Urho3D::Network::UnregisterAllRemoteEvents) ;
    /*Set the package download cache directory. BIND_AS_PROPERTY*//*(const String &path)*/
    type["SetPackageCacheDir"] = static_cast<void (Urho3D::Network::*)(const  String &)>(&Urho3D::Network::SetPackageCacheDir) ;
    /*Trigger all client connections in the specified scene to download a package file from the server. Can be used to download additional resource packages when clients are already joined in the scene. The package must have been added as a requirement to the scene, or else the eventual download will fail.*//*(Scene *scene, PackageFile *package)*/
    type["SendPackageToClients"] = static_cast<void (Urho3D::Network::*)(Scene *, PackageFile *)>(&Urho3D::Network::SendPackageToClients) ;
    /*Ban specific IP addresses.*//*(const String &address)*/
    type["BanAddress"] = static_cast<void (Urho3D::Network::*)(const  String &)>(&Urho3D::Network::BanAddress) ;
    /*Return network update FPS. BIND_AS_PROPERTY*//*() const*/
    type["GetUpdateFps"] = static_cast<int (Urho3D::Network::*)() const>(&Urho3D::Network::GetUpdateFps) ;
    /*Return simulated latency in milliseconds. BIND_AS_PROPERTY*//*() const*/
    type["GetSimulatedLatency"] = static_cast<int (Urho3D::Network::*)() const>(&Urho3D::Network::GetSimulatedLatency) ;
    /*Return simulated packet loss probability. BIND_AS_PROPERTY*//*() const*/
    type["GetSimulatedPacketLoss"] = static_cast<float (Urho3D::Network::*)() const>(&Urho3D::Network::GetSimulatedPacketLoss) ;
    /*Return a client or server connection by RakNet connection address, or null if none exist.*//*(const SLNet::AddressOrGUID &connection) const*/
    type["GetConnection"] = [](Urho3D::Network& self, const SLNet::AddressOrGUID &connection, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetConnection(connection));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the connection to the server. Null if not connected. BIND_AS_PROPERTY*//*() const*/
    type["GetServerConnection"] = [](Urho3D::Network& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetServerConnection());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return all client connections. BIND_AS_PROPERTY*//*() const*/
    type["GetClientConnections"] = static_cast<Vector<SharedPtr<Connection>> (Urho3D::Network::*)() const>(&Urho3D::Network::GetClientConnections) ;
    /*Return whether the server is running. BIND_AS_PROPERTY*//*() const*/
    type["IsServerRunning"] = static_cast<bool (Urho3D::Network::*)() const>(&Urho3D::Network::IsServerRunning) ;
    /*Return whether a remote event is allowed to be received.*//*(StringHash eventType) const*/
    type["CheckRemoteEvent"] = static_cast<bool (Urho3D::Network::*)(StringHash) const>(&Urho3D::Network::CheckRemoteEvent) ;
    /*Return the package download cache directory. BIND_AS_PROPERTY*//*() const*/
    type["GetPackageCacheDir"] = static_cast<const String& (Urho3D::Network::*)() const>(&Urho3D::Network::GetPackageCacheDir) ;
    /*Process incoming messages from connections. Called by HandleBeginFrame.*//*(float timeStep)*/
    type["Update"] = static_cast<void (Urho3D::Network::*)(float)>(&Urho3D::Network::Update) ;
    /*Send outgoing messages after frame logic. Called by HandleRenderUpdate.*//*(float timeStep)*/
    type["PostUpdate"] = static_cast<void (Urho3D::Network::*)(float)>(&Urho3D::Network::PostUpdate) ;
    type["Connect"] = sol::overload(
        static_cast<bool (Urho3D::Network::*)(const  String &, unsigned short, Scene *, const  VariantMap &)>(&Urho3D::Network::Connect) ,
        [](Urho3D::Network& self, const  String & address, unsigned short port, Scene * scene){ return self.Connect(address, port, scene); } );
    type["Disconnect"] = sol::overload(
        static_cast<void (Urho3D::Network::*)(int)>(&Urho3D::Network::Disconnect) ,
        [](Urho3D::Network& self){ self.Disconnect(); } );
    type["StartServer"] = sol::overload(
        static_cast<bool (Urho3D::Network::*)(unsigned short, unsigned int)>(&Urho3D::Network::StartServer) ,
        [](Urho3D::Network& self, unsigned short port){ return self.StartServer(port); } );
    type["AttemptNATPunchtrough"] = sol::overload(
        static_cast<void (Urho3D::Network::*)(const  String &, Scene *, const  VariantMap &)>(&Urho3D::Network::AttemptNATPunchtrough) ,
        [](Urho3D::Network& self, const  String & guid, Scene * scene){ self.AttemptNATPunchtrough(guid, scene); } );
    type["BroadcastMessage"] = sol::overload(
        static_cast<void (Urho3D::Network::*)(int, bool, bool, const  VectorBuffer &, unsigned)>(&Urho3D::Network::BroadcastMessage) ,
        [](Urho3D::Network& self, int msgID, bool reliable, bool inOrder, const  VectorBuffer & msg){ self.BroadcastMessage(msgID, reliable, inOrder, msg); },
        static_cast<void (Urho3D::Network::*)(int, bool, bool, const unsigned char *, unsigned, unsigned)>(&Urho3D::Network::BroadcastMessage) ,
        [](Urho3D::Network& self, int msgID, bool reliable, bool inOrder, const unsigned char * data, unsigned numBytes){ self.BroadcastMessage(msgID, reliable, inOrder, data, numBytes); } );
    type["BroadcastRemoteEvent"] = sol::overload(
        static_cast<void (Urho3D::Network::*)(StringHash, bool, const  VariantMap &)>(&Urho3D::Network::BroadcastRemoteEvent) ,
        [](Urho3D::Network& self, StringHash eventType, bool inOrder){ self.BroadcastRemoteEvent(eventType, inOrder); },
        static_cast<void (Urho3D::Network::*)(Scene *, StringHash, bool, const  VariantMap &)>(&Urho3D::Network::BroadcastRemoteEvent) ,
        [](Urho3D::Network& self, Scene * scene, StringHash eventType, bool inOrder){ self.BroadcastRemoteEvent(scene, eventType, inOrder); },
        static_cast<void (Urho3D::Network::*)(Node *, StringHash, bool, const  VariantMap &)>(&Urho3D::Network::BroadcastRemoteEvent) ,
        [](Urho3D::Network& self, Node * node, StringHash eventType, bool inOrder){ self.BroadcastRemoteEvent(node, eventType, inOrder); } );
    type["MakeHttpRequest"] = sol::overload(
        static_cast<SharedPtr<HttpRequest> (Urho3D::Network::*)(const  String &, const  String &, const  Vector<  String > &, const  String &)>(&Urho3D::Network::MakeHttpRequest) ,
        [](Urho3D::Network& self, const  String & url, const  String & verb, const  Vector<  String > & headers){ return self.MakeHttpRequest(url, verb, headers); },
        [](Urho3D::Network& self, const  String & url, const  String & verb){ return self.MakeHttpRequest(url, verb); },
        [](Urho3D::Network& self, const  String & url){ return self.MakeHttpRequest(url); } );
    type["clientConnections"] = sol::property(static_cast<Vector<SharedPtr<Connection>> (Urho3D::Network::*)() const>(&Urho3D::Network::GetClientConnections) );
    type["guid"] = sol::property(static_cast<const String& (Urho3D::Network::*)() const>(&Urho3D::Network::GetGUID) );
    type["packageCacheDir"] = sol::property(static_cast<const String& (Urho3D::Network::*)() const>(&Urho3D::Network::GetPackageCacheDir) 
        , static_cast<void (Urho3D::Network::*)(const  String &)>(&Urho3D::Network::SetPackageCacheDir) );
    type["serverConnection"] = sol::property([](Urho3D::Network& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetServerConnection());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["serverRunning"] = sol::property(static_cast<bool (Urho3D::Network::*)() const>(&Urho3D::Network::IsServerRunning) );
    type["simulatedLatency"] = sol::property(static_cast<int (Urho3D::Network::*)() const>(&Urho3D::Network::GetSimulatedLatency) 
        , static_cast<void (Urho3D::Network::*)(int)>(&Urho3D::Network::SetSimulatedLatency) );
    type["simulatedPacketLoss"] = sol::property(static_cast<float (Urho3D::Network::*)() const>(&Urho3D::Network::GetSimulatedPacketLoss) 
        , static_cast<void (Urho3D::Network::*)(float)>(&Urho3D::Network::SetSimulatedPacketLoss) );
    type["updateFps"] = sol::property(static_cast<int (Urho3D::Network::*)() const>(&Urho3D::Network::GetUpdateFps) 
        , static_cast<void (Urho3D::Network::*)(int)>(&Urho3D::Network::SetUpdateFps) );

}

