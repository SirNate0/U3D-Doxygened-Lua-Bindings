
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Context.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Context.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Attribute.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Object.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Context(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Context>( "Context"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([]() { 
            return Urho3D::MakeShared<Urho3D::Context>();
        });

// Members

    /*Return a preallocated map for event data. Used for optimization to avoid constant re-allocation of event data maps.*//*()*/
    type["GetEventDataMap"] = static_cast<VariantMap& (Urho3D::Context::*)()>(&Urho3D::Context::GetEventDataMap) ;
    /*Initialises the specified SDL systems, if not already. Returns true if successful. This call must be matched with  ReleaseSDL() when SDL functions are no longer required, even if this call fails.*//*(unsigned int sdlFlags)*/
    type["RequireSDL"] = static_cast<bool (Urho3D::Context::*)(unsigned int)>(&Urho3D::Context::RequireSDL) ;
    /*Indicate that you are done with using SDL. Must be called after using  RequireSDL().*//*()*/
    type["ReleaseSDL"] = static_cast<void (Urho3D::Context::*)()>(&Urho3D::Context::ReleaseSDL) ;
    /*Return global variable based on key.*//*(StringHash key) const*/
    type["GetGlobalVar"] = static_cast<const Variant& (Urho3D::Context::*)(StringHash) const>(&Urho3D::Context::GetGlobalVar) ;
    /*Return all global variables.*//*() const*/
    type["GetGlobalVars"] = static_cast<const VariantMap& (Urho3D::Context::*)() const>(&Urho3D::Context::GetGlobalVars) ;
    /*Set global variable with the respective key and value.*//*(StringHash key, const Variant &value)*/
    type["SetGlobalVar"] = static_cast<void (Urho3D::Context::*)(StringHash, const  Variant &)>(&Urho3D::Context::SetGlobalVar) ;
    /*Return all subsystems.*//*() const*/
    type["GetSubsystems"] = static_cast<const HashMap<StringHash,SharedPtr<Object>>& (Urho3D::Context::*)() const>(&Urho3D::Context::GetSubsystems) ;
    /*Return all object factories.*//*() const*/
    type["GetObjectFactories"] = static_cast<const HashMap<StringHash,SharedPtr<ObjectFactory>>& (Urho3D::Context::*)() const>(&Urho3D::Context::GetObjectFactories) ;
    /*Return all object categories.*//*() const*/
    type["GetObjectCategories"] = static_cast<const HashMap<String,Vector<StringHash>>& (Urho3D::Context::*)() const>(&Urho3D::Context::GetObjectCategories) ;
    /*Return active event sender. Null outside event handling.*//*() const*/
    type["GetEventSender"] = [](Urho3D::Context& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetEventSender());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return active event handler. Set by  Object. Null outside event handling.*//*() const*/
    type["GetEventHandler"] = static_cast<EventHandler* (Urho3D::Context::*)() const>(&Urho3D::Context::GetEventHandler) ;
    /*Return object type name from hash, or empty if unknown.*//*(StringHash objectType) const*/
    type["GetTypeName"] = static_cast<const String& (Urho3D::Context::*)(StringHash) const>(&Urho3D::Context::GetTypeName) ;
    /*Return attribute descriptions for an object type, or null if none defined.*//*(StringHash type) const*/
    type["GetAttributes"] = static_cast<const Vector<AttributeInfo>* (Urho3D::Context::*)(StringHash) const>(&Urho3D::Context::GetAttributes) ;
    /*Return network replication attribute descriptions for an object type, or null if none defined.*//*(StringHash type) const*/
    type["GetNetworkAttributes"] = static_cast<const Vector<AttributeInfo>* (Urho3D::Context::*)(StringHash) const>(&Urho3D::Context::GetNetworkAttributes) ;
    /*Return all registered attributes.*//*() const*/
    type["GetAllAttributes"] = static_cast<const HashMap<StringHash,Vector<AttributeInfo>>& (Urho3D::Context::*)() const>(&Urho3D::Context::GetAllAttributes) ;
    /*Create an object by type hash. Return pointer to it or null if no factory found.*//*(StringHash objectType)*/
    type["CreateObject"] = static_cast<SharedPtr<Object> (Urho3D::Context::*)(StringHash)>(&Urho3D::Context::CreateObject) ;
    /*Register a subsystem.*//*(Object *object)*/
    type["RegisterSubsystem"] = static_cast<void (Urho3D::Context::*)(Object *)>(&Urho3D::Context::RegisterSubsystem) ;
    /*Remove a subsystem.*//*(StringHash objectType)*/
    type["RemoveSubsystem"] = static_cast<void (Urho3D::Context::*)(StringHash)>(&Urho3D::Context::RemoveSubsystem) ;
    /*Register object attribute.*//*(StringHash objectType, const AttributeInfo &attr)*/
    type["RegisterAttribute"] = [](Urho3D::Context& self, StringHash objectType, const AttributeInfo &attr){ /*ATTEMPT*/self.RegisterAttribute(objectType, attr); return; };
    /*Remove object attribute.*//*(StringHash objectType, const char *name)*/
    type["RemoveAttribute"] = static_cast<void (Urho3D::Context::*)(StringHash, const char *)>(&Urho3D::Context::RemoveAttribute) ;
    /*Remove all object attributes.*//*(StringHash objectType)*/
    type["RemoveAllAttributes"] = static_cast<void (Urho3D::Context::*)(StringHash)>(&Urho3D::Context::RemoveAllAttributes) ;
    /*Update object attribute's default value.*//*(StringHash objectType, const char *name, const Variant &defaultValue)*/
    type["UpdateAttributeDefaultValue"] = static_cast<void (Urho3D::Context::*)(StringHash, const char *, const  Variant &)>(&Urho3D::Context::UpdateAttributeDefaultValue) ;
    /*Copy base class attributes to derived class.*//*(StringHash baseType, StringHash derivedType)*/
    type["CopyBaseAttributes"] = static_cast<void (Urho3D::Context::*)(StringHash, StringHash)>(&Urho3D::Context::CopyBaseAttributes) ;
    /*Return subsystem by type.*//*(StringHash type) const*/
    type["GetSubsystem"] = [](Urho3D::Context& self, StringHash type, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSubsystem(type));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return a specific attribute description for an object, or null if not found.*//*(StringHash objectType, const char *name)*/
    type["GetAttribute"] = static_cast<AttributeInfo* (Urho3D::Context::*)(StringHash, const char *)>(&Urho3D::Context::GetAttribute) ;
    type["RegisterFactory"] = sol::overload(
        static_cast<void (Urho3D::Context::*)(ObjectFactory *)>(&Urho3D::Context::RegisterFactory) ,
        static_cast<void (Urho3D::Context::*)(ObjectFactory *, const char *)>(&Urho3D::Context::RegisterFactory)  );
    type["GetEventReceivers"] = sol::overload(
        [](Urho3D::Context& self, Object *sender, StringHash eventType){ return SharedPtr(self.GetEventReceivers(sender, eventType)); },
        [](Urho3D::Context& self, StringHash eventType){ return SharedPtr(self.GetEventReceivers(eventType)); } );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Context.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Context.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Object.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_EventReceiverGroup(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::EventReceiverGroup>( "EventReceiverGroup"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([]() { 
            return Urho3D::MakeShared<Urho3D::EventReceiverGroup>();
        });

// Members

    /*Begin event send. When receivers are removed during send, group has to be cleaned up afterward.*//*()*/
    type["BeginSendEvent"] = static_cast<void (Urho3D::EventReceiverGroup::*)()>(&Urho3D::EventReceiverGroup::BeginSendEvent) ;
    /*End event send. Clean up if necessary.*//*()*/
    type["EndSendEvent"] = static_cast<void (Urho3D::EventReceiverGroup::*)()>(&Urho3D::EventReceiverGroup::EndSendEvent) ;
    /*Add receiver. Same receiver must not be double-added!*//*(Object *object)*/
    type["Add"] = static_cast<void (Urho3D::EventReceiverGroup::*)(Object *)>(&Urho3D::EventReceiverGroup::Add) ;
    /*Remove receiver. Leave holes during send, which requires later cleanup.*//*(Object *object)*/
    type["Remove"] = static_cast<void (Urho3D::EventReceiverGroup::*)(Object *)>(&Urho3D::EventReceiverGroup::Remove) ;
    type["receivers_"] = &Urho3D::EventReceiverGroup::receivers_;

}

