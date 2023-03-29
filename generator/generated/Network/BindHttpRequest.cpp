
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Network/HttpRequest.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Network/HttpRequest.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Container/RefCounted.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Mutex.h>
#include <Urho3D/Core/Thread.h>
#include <Urho3D/IO/Deserializer.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_HttpRequest(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::HttpRequest>( "HttpRequest"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted,Urho3D::Deserializer,Urho3D::Thread>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](const String &url, const String &verb, const Vector< String > &headers, const String &postData) { 
            return Urho3D::MakeShared<Urho3D::HttpRequest>(url, verb, headers, postData);
        });

// Members

    /*Process the connection in the worker thread until closed.*//*() override*/
    type["ThreadFunction"] = static_cast<void (Urho3D::HttpRequest::*)()>(&Urho3D::HttpRequest::ThreadFunction) ;
    /*Read response data from the HTTP connection and return number of bytes actually read. While the connection is open, will block while trying to read the specified size. To avoid blocking, only read up to as many bytes as  GetAvailableSize() returns.*//*(void *dest, unsigned size) override*/
    type["Read"] = static_cast<unsigned (Urho3D::HttpRequest::*)(void *, unsigned)>(&Urho3D::HttpRequest::Read) ;
    /*Set position from the beginning of the stream. Not supported.*//*(unsigned position) override*/
    type["Seek"] = static_cast<unsigned (Urho3D::HttpRequest::*)(unsigned)>(&Urho3D::HttpRequest::Seek) ;
    /*Return whether all response data has been read.*//*() const override*/
    type["IsEof"] = static_cast<bool (Urho3D::HttpRequest::*)() const>(&Urho3D::HttpRequest::IsEof) ;
    /*Return URL used in the request. BIND_AS_ALIAS_get_url*//*() const*/
    type["GetURL"] = static_cast<const String& (Urho3D::HttpRequest::*)() const>(&Urho3D::HttpRequest::GetURL) ;
    /*Return verb used in the request. Default GET if empty verb specified on construction. BIND_AS_PROPERTY*//*() const*/
    type["GetVerb"] = static_cast<const String& (Urho3D::HttpRequest::*)() const>(&Urho3D::HttpRequest::GetVerb) ;
    /*Return error. Only non-empty in the error state. BIND_AS_PROPERTY*//*() const*/
    type["GetError"] = static_cast<String (Urho3D::HttpRequest::*)() const>(&Urho3D::HttpRequest::GetError) ;
    /*Return connection state. BIND_AS_PROPERTY*//*() const*/
    type["GetState"] = static_cast<HttpRequestState (Urho3D::HttpRequest::*)() const>(&Urho3D::HttpRequest::GetState) ;
    /*Return amount of bytes in the read buffer. BIND_AS_PROPERTY*//*() const*/
    type["GetAvailableSize"] = static_cast<unsigned (Urho3D::HttpRequest::*)() const>(&Urho3D::HttpRequest::GetAvailableSize) ;
    /*Return whether connection is in the open state. BIND_AS_PROPERTY*//*() const*/
    type["IsOpen"] = static_cast<bool (Urho3D::HttpRequest::*)() const>(&Urho3D::HttpRequest::IsOpen) ;
    type["availableSize"] = sol::property(static_cast<unsigned (Urho3D::HttpRequest::*)() const>(&Urho3D::HttpRequest::GetAvailableSize) );
    type["error"] = sol::property(static_cast<String (Urho3D::HttpRequest::*)() const>(&Urho3D::HttpRequest::GetError) );
    type["open"] = sol::property(static_cast<bool (Urho3D::HttpRequest::*)() const>(&Urho3D::HttpRequest::IsOpen) );
    type["state"] = sol::property(static_cast<HttpRequestState (Urho3D::HttpRequest::*)() const>(&Urho3D::HttpRequest::GetState) );
    type["url"] = sol::property(static_cast<const String& (Urho3D::HttpRequest::*)() const>(&Urho3D::HttpRequest::GetURL) );
    type["verb"] = sol::property(static_cast<const String& (Urho3D::HttpRequest::*)() const>(&Urho3D::HttpRequest::GetVerb) );

}

