
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Navigation/OffMeshConnection.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Navigation/OffMeshConnection.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Scene/Node.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_OffMeshConnection(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::OffMeshConnection::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::OffMeshConnection::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::OffMeshConnection>((Urho3D::OffMeshConnection*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::OffMeshConnection>( "OffMeshConnection"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::OffMeshConnection>(context);
        });

// Members

    /*Apply attribute changes that can not be applied immediately. Called after scene load or a network update.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::OffMeshConnection::*)()>(&Urho3D::OffMeshConnection::ApplyAttributes) ;
    /*Visualize the component as debug geometry.*//*(DebugRenderer *debug, bool depthTest) override*/
    type["DrawDebugGeometry"] = static_cast<void (Urho3D::OffMeshConnection::*)(DebugRenderer *, bool)>(&Urho3D::OffMeshConnection::DrawDebugGeometry) ;
    /*Set endpoint node. BIND_AS_PROPERTY*//*(Node *node)*/
    type["SetEndPoint"] = static_cast<void (Urho3D::OffMeshConnection::*)(Node *)>(&Urho3D::OffMeshConnection::SetEndPoint) ;
    /*Set radius. BIND_AS_PROPERTY*//*(float radius)*/
    type["SetRadius"] = static_cast<void (Urho3D::OffMeshConnection::*)(float)>(&Urho3D::OffMeshConnection::SetRadius) ;
    /*Set bidirectional flag. Default true. BIND_AS_PROPERTY*//*(bool enabled)*/
    type["SetBidirectional"] = static_cast<void (Urho3D::OffMeshConnection::*)(bool)>(&Urho3D::OffMeshConnection::SetBidirectional) ;
    /*Set a user assigned mask. BIND_AS_PROPERTY*//*(unsigned newMask)*/
    type["SetMask"] = static_cast<void (Urho3D::OffMeshConnection::*)(unsigned)>(&Urho3D::OffMeshConnection::SetMask) ;
    /*Sets the assigned area Id for the connection. BIND_AS_PROPERTY*//*(unsigned newAreaID)*/
    type["SetAreaID"] = static_cast<void (Urho3D::OffMeshConnection::*)(unsigned)>(&Urho3D::OffMeshConnection::SetAreaID) ;
    /*Return endpoint node. BIND_AS_PROPERTY*//*() const*/
    type["GetEndPoint"] = [](Urho3D::OffMeshConnection& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetEndPoint());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return radius. BIND_AS_PROPERTY*//*() const*/
    type["GetRadius"] = static_cast<float (Urho3D::OffMeshConnection::*)() const>(&Urho3D::OffMeshConnection::GetRadius) ;
    /*Return whether is bidirectional. BIND_AS_PROPERTY*//*() const*/
    type["IsBidirectional"] = static_cast<bool (Urho3D::OffMeshConnection::*)() const>(&Urho3D::OffMeshConnection::IsBidirectional) ;
    /*Return the user assigned mask. BIND_AS_PROPERTY*//*() const*/
    type["GetMask"] = static_cast<unsigned (Urho3D::OffMeshConnection::*)() const>(&Urho3D::OffMeshConnection::GetMask) ;
    /*Return the user assigned area ID. BIND_AS_PROPERTY*//*() const*/
    type["GetAreaID"] = static_cast<unsigned (Urho3D::OffMeshConnection::*)() const>(&Urho3D::OffMeshConnection::GetAreaID) ;
    type["areaID"] = sol::property(static_cast<unsigned (Urho3D::OffMeshConnection::*)() const>(&Urho3D::OffMeshConnection::GetAreaID) 
        , static_cast<void (Urho3D::OffMeshConnection::*)(unsigned)>(&Urho3D::OffMeshConnection::SetAreaID) );
    type["bidirectional"] = sol::property(static_cast<bool (Urho3D::OffMeshConnection::*)() const>(&Urho3D::OffMeshConnection::IsBidirectional) 
        , static_cast<void (Urho3D::OffMeshConnection::*)(bool)>(&Urho3D::OffMeshConnection::SetBidirectional) );
    type["endPoint"] = sol::property([](Urho3D::OffMeshConnection& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetEndPoint());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::OffMeshConnection::*)(Node *)>(&Urho3D::OffMeshConnection::SetEndPoint) );
    type["mask"] = sol::property(static_cast<unsigned (Urho3D::OffMeshConnection::*)() const>(&Urho3D::OffMeshConnection::GetMask) 
        , static_cast<void (Urho3D::OffMeshConnection::*)(unsigned)>(&Urho3D::OffMeshConnection::SetMask) );
    type["radius"] = sol::property(static_cast<float (Urho3D::OffMeshConnection::*)() const>(&Urho3D::OffMeshConnection::GetRadius) 
        , static_cast<void (Urho3D::OffMeshConnection::*)(float)>(&Urho3D::OffMeshConnection::SetRadius) );

}

