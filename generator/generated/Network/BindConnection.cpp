
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Network/Connection.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Network/Connection.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/HashSet.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Object.h>
#include <Urho3D/Core/Timer.h>
#include <Urho3D/IO/MemoryBuffer.h>
#include <Urho3D/IO/PackageFile.h>
#include <Urho3D/IO/VectorBuffer.h>
#include <Urho3D/Input/Controls.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Scene/Node.h>
#include <Urho3D/Scene/ReplicationState.h>
#include <Urho3D/Scene/Scene.h>
#include <SLikeNet/types.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Connection(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Connection::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Connection::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Connection>((Urho3D::Connection*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Connection>( "Connection"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context, bool isClient, const SLNet::AddressOrGUID &address, SLNet::RakPeerInterface *peer) { 
            return Urho3D::MakeShared<Urho3D::Connection>(context, isClient, address, peer);
        });

// Members

    /*Get packet type based on the message parameters.*//*(bool reliable, bool inOrder)*/
    type["GetPacketType"] = static_cast<PacketType (Urho3D::Connection::*)(bool, bool)>(&Urho3D::Connection::GetPacketType) ;
    /*Assign scene. On the server, this will cause the client to load it. BIND_AS_PROPERTY*//*(Scene *newScene)*/
    type["SetScene"] = static_cast<void (Urho3D::Connection::*)(Scene *)>(&Urho3D::Connection::SetScene) ;
    /*Assign identity. Called by  Network.*//*(const VariantMap &identity)*/
    type["SetIdentity"] = static_cast<void (Urho3D::Connection::*)(const  VariantMap &)>(&Urho3D::Connection::SetIdentity) ;
    /*Set new controls.*//*(const Controls &newControls)*/
    type["SetControls"] = static_cast<void (Urho3D::Connection::*)(const  Controls &)>(&Urho3D::Connection::SetControls) ;
    /*Set the observer position for interest management, to be sent to the server. BIND_AS_PROPERTY*//*(const Vector3 &position)*/
    type["SetPosition"] = static_cast<void (Urho3D::Connection::*)(const  Vector3 &)>(&Urho3D::Connection::SetPosition) ;
    /*Set the observer rotation for interest management, to be sent to the server. Note: not used by the  NetworkPriority component. BIND_AS_PROPERTY*//*(const Quaternion &rotation)*/
    type["SetRotation"] = static_cast<void (Urho3D::Connection::*)(const  Quaternion &)>(&Urho3D::Connection::SetRotation) ;
    /*Set the connection pending status. Called by  Network.*//*(bool connectPending)*/
    type["SetConnectPending"] = static_cast<void (Urho3D::Connection::*)(bool)>(&Urho3D::Connection::SetConnectPending) ;
    /*Set whether to log data in/out statistics. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetLogStatistics"] = static_cast<void (Urho3D::Connection::*)(bool)>(&Urho3D::Connection::SetLogStatistics) ;
    /*Send scene update messages. Called by  Network.*//*()*/
    type["SendServerUpdate"] = static_cast<void (Urho3D::Connection::*)()>(&Urho3D::Connection::SendServerUpdate) ;
    /*Send latest controls from the client. Called by  Network.*//*()*/
    type["SendClientUpdate"] = static_cast<void (Urho3D::Connection::*)()>(&Urho3D::Connection::SendClientUpdate) ;
    /*Send queued remote events. Called by  Network.*//*()*/
    type["SendRemoteEvents"] = static_cast<void (Urho3D::Connection::*)()>(&Urho3D::Connection::SendRemoteEvents) ;
    /*Send package files to client. Called by network.*//*()*/
    type["SendPackages"] = static_cast<void (Urho3D::Connection::*)()>(&Urho3D::Connection::SendPackages) ;
    /*Send out buffered messages by their type.*//*(PacketType type)*/
    type["SendBuffer"] = static_cast<void (Urho3D::Connection::*)(PacketType)>(&Urho3D::Connection::SendBuffer) ;
    /*Send out all buffered messages.*//*()*/
    type["SendAllBuffers"] = static_cast<void (Urho3D::Connection::*)()>(&Urho3D::Connection::SendAllBuffers) ;
    /*Process pending latest data for nodes and components.*//*()*/
    type["ProcessPendingLatestData"] = static_cast<void (Urho3D::Connection::*)()>(&Urho3D::Connection::ProcessPendingLatestData) ;
    /*Process a message from the server or client. Called by  Network.*//*(int msgID, MemoryBuffer &buffer)*/
    type["ProcessMessage"] = static_cast<bool (Urho3D::Connection::*)(int, MemoryBuffer &)>(&Urho3D::Connection::ProcessMessage) ;
    /*Ban this connections IP address.*//*()*/
    type["Ban"] = static_cast<void (Urho3D::Connection::*)()>(&Urho3D::Connection::Ban) ;
    /*Return the RakNet address/guid.*//*() const*/
    type["GetAddressOrGUID"] = static_cast<const SLNet::AddressOrGUID& (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetAddressOrGUID) ;
    /*Set the the RakNet address/guid.*//*(const SLNet::AddressOrGUID &addr)*/
    type["SetAddressOrGUID"] = static_cast<void (Urho3D::Connection::*)(const SLNet::AddressOrGUID &)>(&Urho3D::Connection::SetAddressOrGUID) ;
    /*Return client identity.*//*()*/
    type["GetIdentity"] = static_cast<VariantMap& (Urho3D::Connection::*)()>(&Urho3D::Connection::GetIdentity) ;
    /*Return the scene used by this connection. BIND_AS_PROPERTY*//*() const*/
    type["GetScene"] = [](Urho3D::Connection& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetScene());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the client controls of this connection.*//*() const*/
    type["GetControls"] = static_cast<const Controls& (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetControls) ;
    /*Return the controls timestamp, sent from client to server along each control update.*//*() const*/
    type["GetTimeStamp"] = static_cast<unsigned char (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetTimeStamp) ;
    /*Return the observer position sent by the client for interest management. BIND_AS_PROPERTY*//*() const*/
    type["GetPosition"] = static_cast<const Vector3& (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetPosition) ;
    /*Return the observer rotation sent by the client for interest management. BIND_AS_PROPERTY*//*() const*/
    type["GetRotation"] = static_cast<const Quaternion& (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetRotation) ;
    /*Return whether is a client connection. BIND_AS_PROPERTY*//*() const*/
    type["IsClient"] = static_cast<bool (Urho3D::Connection::*)() const>(&Urho3D::Connection::IsClient) ;
    /*Return whether is fully connected. BIND_AS_PROPERTY*//*() const*/
    type["IsConnected"] = static_cast<bool (Urho3D::Connection::*)() const>(&Urho3D::Connection::IsConnected) ;
    /*Return whether connection is pending. BIND_AS_PROPERTY*//*() const*/
    type["IsConnectPending"] = static_cast<bool (Urho3D::Connection::*)() const>(&Urho3D::Connection::IsConnectPending) ;
    /*Return whether the scene is loaded and ready to receive server updates. BIND_AS_PROPERTY*//*() const*/
    type["IsSceneLoaded"] = static_cast<bool (Urho3D::Connection::*)() const>(&Urho3D::Connection::IsSceneLoaded) ;
    /*Return whether to log data in/out statistics. BIND_AS_PROPERTY*//*() const*/
    type["GetLogStatistics"] = static_cast<bool (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetLogStatistics) ;
    /*Return remote address. BIND_AS_PROPERTY*//*() const*/
    type["GetAddress"] = static_cast<String (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetAddress) ;
    /*Return remote port. BIND_AS_PROPERTY*//*() const*/
    type["GetPort"] = static_cast<unsigned short (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetPort) ;
    /*Return the connection's round trip time in milliseconds. BIND_AS_PROPERTY*//*() const*/
    type["GetRoundTripTime"] = static_cast<float (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetRoundTripTime) ;
    /*Return the time since last received data from the remote host in milliseconds. BIND_AS_PROPERTY*//*() const*/
    type["GetLastHeardTime"] = static_cast<unsigned (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetLastHeardTime) ;
    /*Return bytes received per second. BIND_AS_PROPERTY*//*() const*/
    type["GetBytesInPerSec"] = static_cast<float (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetBytesInPerSec) ;
    /*Return bytes sent per second. BIND_AS_PROPERTY*//*() const*/
    type["GetBytesOutPerSec"] = static_cast<float (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetBytesOutPerSec) ;
    /*Return packets received per second. BIND_AS_PROPERTY*//*() const*/
    type["GetPacketsInPerSec"] = static_cast<int (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetPacketsInPerSec) ;
    /*Return packets sent per second. BIND_AS_PROPERTY*//*() const*/
    type["GetPacketsOutPerSec"] = static_cast<int (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetPacketsOutPerSec) ;
    /*Return an address:port string.*//*() const*/
    type["__tostring"] = static_cast<String (Urho3D::Connection::*)() const>(&Urho3D::Connection::ToString) ;
    /*Return number of package downloads remaining. BIND_AS_PROPERTY*//*() const*/
    type["GetNumDownloads"] = static_cast<unsigned (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetNumDownloads) ;
    /*Return name of current package download, or empty if no downloads. BIND_AS_PROPERTY*//*() const*/
    type["GetDownloadName"] = static_cast<const String& (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetDownloadName) ;
    /*Return progress of current package download, or 1.0 if no downloads. BIND_AS_PROPERTY*//*() const*/
    type["GetDownloadProgress"] = static_cast<float (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetDownloadProgress) ;
    /*Trigger client connection to download a package file from the server. Can be used to download additional resource packages when client is already joined in a scene. The package must have been added as a requirement to the scene the client is joined in, or else the eventual download will fail.*//*(PackageFile *package)*/
    type["SendPackageToClient"] = static_cast<void (Urho3D::Connection::*)(PackageFile *)>(&Urho3D::Connection::SendPackageToClient) ;
    /*Set network simulation parameters. Called by  Network.*//*(int latencyMs, float packetLoss)*/
    type["ConfigureNetworkSimulator"] = static_cast<void (Urho3D::Connection::*)(int, float)>(&Urho3D::Connection::ConfigureNetworkSimulator) ;
    /*Buffered packet size limit, when reached, packet is sent out immediately.*//*(int limit)*/
    type["SetPacketSizeLimit"] = static_cast<void (Urho3D::Connection::*)(int)>(&Urho3D::Connection::SetPacketSizeLimit) ;
    type["SendMessage"] = sol::overload(
        static_cast<void (Urho3D::Connection::*)(int, bool, bool, const  VectorBuffer &, unsigned)>(&Urho3D::Connection::SendMessage) ,
        [](Urho3D::Connection& self, int msgID, bool reliable, bool inOrder, const  VectorBuffer & msg){ self.SendMessage(msgID, reliable, inOrder, msg); },
        static_cast<void (Urho3D::Connection::*)(int, bool, bool, const unsigned char *, unsigned, unsigned)>(&Urho3D::Connection::SendMessage) ,
        [](Urho3D::Connection& self, int msgID, bool reliable, bool inOrder, const unsigned char * data, unsigned numBytes){ self.SendMessage(msgID, reliable, inOrder, data, numBytes); } );
    type["SendRemoteEvent"] = sol::overload(
        static_cast<void (Urho3D::Connection::*)(StringHash, bool, const  VariantMap &)>(&Urho3D::Connection::SendRemoteEvent) ,
        [](Urho3D::Connection& self, StringHash eventType, bool inOrder){ self.SendRemoteEvent(eventType, inOrder); },
        static_cast<void (Urho3D::Connection::*)(Node *, StringHash, bool, const  VariantMap &)>(&Urho3D::Connection::SendRemoteEvent) ,
        [](Urho3D::Connection& self, Node * node, StringHash eventType, bool inOrder){ self.SendRemoteEvent(node, eventType, inOrder); } );
    type["Disconnect"] = sol::overload(
        static_cast<void (Urho3D::Connection::*)(int)>(&Urho3D::Connection::Disconnect) ,
        [](Urho3D::Connection& self){ self.Disconnect(); } );
    type["address"] = sol::property(static_cast<String (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetAddress) );
    type["bytesInPerSec"] = sol::property(static_cast<float (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetBytesInPerSec) );
    type["bytesOutPerSec"] = sol::property(static_cast<float (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetBytesOutPerSec) );
    type["client"] = sol::property(static_cast<bool (Urho3D::Connection::*)() const>(&Urho3D::Connection::IsClient) );
    type["connectPending"] = sol::property(static_cast<bool (Urho3D::Connection::*)() const>(&Urho3D::Connection::IsConnectPending) );
    type["connected"] = sol::property(static_cast<bool (Urho3D::Connection::*)() const>(&Urho3D::Connection::IsConnected) );
    type["downloadName"] = sol::property(static_cast<const String& (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetDownloadName) );
    type["downloadProgress"] = sol::property(static_cast<float (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetDownloadProgress) );
    type["lastHeardTime"] = sol::property(static_cast<unsigned (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetLastHeardTime) );
    type["logStatistics"] = sol::property(static_cast<bool (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetLogStatistics) 
        , static_cast<void (Urho3D::Connection::*)(bool)>(&Urho3D::Connection::SetLogStatistics) );
    type["numDownloads"] = sol::property(static_cast<unsigned (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetNumDownloads) );
    type["packetsInPerSec"] = sol::property(static_cast<int (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetPacketsInPerSec) );
    type["packetsOutPerSec"] = sol::property(static_cast<int (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetPacketsOutPerSec) );
    type["port"] = sol::property(static_cast<unsigned short (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetPort) );
    type["position"] = sol::property(static_cast<const Vector3& (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetPosition) 
        , static_cast<void (Urho3D::Connection::*)(const  Vector3 &)>(&Urho3D::Connection::SetPosition) );
    type["rotation"] = sol::property(static_cast<const Quaternion& (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetRotation) 
        , static_cast<void (Urho3D::Connection::*)(const  Quaternion &)>(&Urho3D::Connection::SetRotation) );
    type["roundTripTime"] = sol::property(static_cast<float (Urho3D::Connection::*)() const>(&Urho3D::Connection::GetRoundTripTime) );
    type["scene"] = sol::property([](Urho3D::Connection& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetScene());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Connection::*)(Scene *)>(&Urho3D::Connection::SetScene) );
    type["sceneLoaded"] = sol::property(static_cast<bool (Urho3D::Connection::*)() const>(&Urho3D::Connection::IsSceneLoaded) );
    type["controls_"] = &Urho3D::Connection::controls_;
    type["timeStamp_"] = &Urho3D::Connection::timeStamp_;
    type["identity_"] = &Urho3D::Connection::identity_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Network/Connection.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Network/Connection.h>
#include <Urho3D/Container/HashSet.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/IO/File.h>
#include <SLikeNet/types.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_PackageDownload(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::PackageDownload>( "PackageDownload"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::PackageDownload()>();

// Members

    type["file_"] = &Urho3D::PackageDownload::file_;
    type["receivedFragments_"] = &Urho3D::PackageDownload::receivedFragments_;
    type["name_"] = &Urho3D::PackageDownload::name_;
    type["totalFragments_"] = &Urho3D::PackageDownload::totalFragments_;
    type["checksum_"] = &Urho3D::PackageDownload::checksum_;
    type["initiated_"] = &Urho3D::PackageDownload::initiated_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Network/Connection.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Network/Connection.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <SLikeNet/types.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_RemoteEvent(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::RemoteEvent>( "RemoteEvent"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["senderID_"] = &Urho3D::RemoteEvent::senderID_;
    type["eventType_"] = &Urho3D::RemoteEvent::eventType_;
    type["eventData_"] = &Urho3D::RemoteEvent::eventData_;
    type["inOrder_"] = &Urho3D::RemoteEvent::inOrder_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Network/Connection.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Network/Connection.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/IO/File.h>
#include <SLikeNet/types.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_PackageUpload(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::PackageUpload>( "PackageUpload"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::PackageUpload()>();

// Members

    type["file_"] = &Urho3D::PackageUpload::file_;
    type["fragment_"] = &Urho3D::PackageUpload::fragment_;
    type["totalFragments_"] = &Urho3D::PackageUpload::totalFragments_;

}

