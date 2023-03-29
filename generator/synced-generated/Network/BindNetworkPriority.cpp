
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Network/NetworkPriority.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Network/NetworkPriority.h>
#include <Urho3D/Core/Context.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_NetworkPriority(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::NetworkPriority::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::NetworkPriority::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::NetworkPriority>((Urho3D::NetworkPriority*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::NetworkPriority>( "NetworkPriority"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::NetworkPriority>(context);
        });

// Members

    /*Set base priority. Default 100 (send updates at full frequency). BIND_AS_PROPERTY*//*(float priority)*/
    type["SetBasePriority"] = static_cast<void (Urho3D::NetworkPriority::*)(float)>(&Urho3D::NetworkPriority::SetBasePriority) ;
    /*Set priority reduction distance factor. Default 0 (no effect). BIND_AS_PROPERTY*//*(float factor)*/
    type["SetDistanceFactor"] = static_cast<void (Urho3D::NetworkPriority::*)(float)>(&Urho3D::NetworkPriority::SetDistanceFactor) ;
    /*Set minimum priority. Default 0 (no updates when far away enough). BIND_AS_PROPERTY*//*(float priority)*/
    type["SetMinPriority"] = static_cast<void (Urho3D::NetworkPriority::*)(float)>(&Urho3D::NetworkPriority::SetMinPriority) ;
    /*Set whether updates to owner should be sent always at full rate. Default true. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetAlwaysUpdateOwner"] = static_cast<void (Urho3D::NetworkPriority::*)(bool)>(&Urho3D::NetworkPriority::SetAlwaysUpdateOwner) ;
    /*Return base priority. BIND_AS_PROPERTY*//*() const*/
    type["GetBasePriority"] = static_cast<float (Urho3D::NetworkPriority::*)() const>(&Urho3D::NetworkPriority::GetBasePriority) ;
    /*Return priority reduction distance factor. BIND_AS_PROPERTY*//*() const*/
    type["GetDistanceFactor"] = static_cast<float (Urho3D::NetworkPriority::*)() const>(&Urho3D::NetworkPriority::GetDistanceFactor) ;
    /*Return minimum priority. BIND_AS_PROPERTY*//*() const*/
    type["GetMinPriority"] = static_cast<float (Urho3D::NetworkPriority::*)() const>(&Urho3D::NetworkPriority::GetMinPriority) ;
    /*Return whether updates to owner should be sent always at full rate. BIND_AS_PROPERTY*//*() const*/
    type["GetAlwaysUpdateOwner"] = static_cast<bool (Urho3D::NetworkPriority::*)() const>(&Urho3D::NetworkPriority::GetAlwaysUpdateOwner) ;
#if 0 // INVALID: NeedsWrap(float &)
    /*Increment and check priority accumulator. Return true if should update. Called by  Connection.*//*(float distance, float &accumulator)*/
    type["CheckUpdate"] = static_cast<bool (Urho3D::NetworkPriority::*)(float, float &)>(&Urho3D::NetworkPriority::CheckUpdate) ;
#endif
        
    type["alwaysUpdateOwner"] = sol::property(static_cast<bool (Urho3D::NetworkPriority::*)() const>(&Urho3D::NetworkPriority::GetAlwaysUpdateOwner) 
        , static_cast<void (Urho3D::NetworkPriority::*)(bool)>(&Urho3D::NetworkPriority::SetAlwaysUpdateOwner) );
    type["basePriority"] = sol::property(static_cast<float (Urho3D::NetworkPriority::*)() const>(&Urho3D::NetworkPriority::GetBasePriority) 
        , static_cast<void (Urho3D::NetworkPriority::*)(float)>(&Urho3D::NetworkPriority::SetBasePriority) );
    type["distanceFactor"] = sol::property(static_cast<float (Urho3D::NetworkPriority::*)() const>(&Urho3D::NetworkPriority::GetDistanceFactor) 
        , static_cast<void (Urho3D::NetworkPriority::*)(float)>(&Urho3D::NetworkPriority::SetDistanceFactor) );
    type["minPriority"] = sol::property(static_cast<float (Urho3D::NetworkPriority::*)() const>(&Urho3D::NetworkPriority::GetMinPriority) 
        , static_cast<void (Urho3D::NetworkPriority::*)(float)>(&Urho3D::NetworkPriority::SetMinPriority) );

}

