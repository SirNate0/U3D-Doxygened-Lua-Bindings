

// Generated File
//!!Skipping Class Template!!'

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

void bindClass_Urho3D_ObjectFactoryImpl(sol::state_view& lua) { }

#if 0


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Object.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Object.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Object.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ObjectFactoryImpl(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ObjectFactoryImpl>( "ObjectFactoryImpl"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::ObjectFactoryImpl(Context *)>();

// Members

    /*Create an object of the specific type.*//*() override*/
    type["CreateObject"] = static_cast<SharedPtr<Object> (Urho3D::ObjectFactoryImpl<T>::*)()>(&Urho3D::ObjectFactoryImpl<T>::CreateObject) ;

}



#endif

                
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Object.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Object.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Object.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ObjectFactory(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ObjectFactory>( "ObjectFactory"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    /*ABSTRACT*/

// Members

    /*Create an object. Implemented in templated subclasses.*//*()=0*/
    type["CreateObject"] = static_cast<SharedPtr<Object> (Urho3D::ObjectFactory::*)()>(&Urho3D::ObjectFactory::CreateObject) ;
    /*Return execution context.*//*() const*/
    type["GetContext"] = [](Urho3D::ObjectFactory& self){ return SharedPtr(self.GetContext()); };
    /*Return type info of objects created by this factory.*//*() const*/
    type["GetTypeInfo"] = static_cast<const TypeInfo* (Urho3D::ObjectFactory::*)() const>(&Urho3D::ObjectFactory::GetTypeInfo) ;
    /*Return type hash of objects created by this factory.*//*() const*/
    type["GetType"] = static_cast<StringHash (Urho3D::ObjectFactory::*)() const>(&Urho3D::ObjectFactory::GetType) ;
    /*Return type name of objects created by this factory.*//*() const*/
    type["GetTypeName"] = static_cast<const String& (Urho3D::ObjectFactory::*)() const>(&Urho3D::ObjectFactory::GetTypeName) ;

}



// Generated File
//!!Skipping Class Template!!'

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

void bindClass_Urho3D_EventHandlerImpl(sol::state_view& lua) { }

#if 0


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Object.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Object.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Core/Object.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_EventHandlerImpl(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::EventHandlerImpl>( "EventHandlerImpl"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::EventHandlerImpl(T *, HandlerFunctionPtr, void *),
        Urho3D::EventHandlerImpl(T *, HandlerFunctionPtr)>();

// Members

    /*Invoke event handler function.*//*(VariantMap &eventData) override*/
    type["Invoke"] = static_cast<void (Urho3D::EventHandlerImpl<T>::*)(VariantMap &)>(&Urho3D::EventHandlerImpl<T>::Invoke) ;
    /*Return a unique copy of the event handler.*//*() const override*/
    type["Clone"] = static_cast<EventHandler* (Urho3D::EventHandlerImpl<T>::*)() const>(&Urho3D::EventHandlerImpl<T>::Clone) ;

}



#endif

                
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Object.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Object.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Object.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Object(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Object>( "Object"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    /*ABSTRACT*/

// Members

    /*Return type hash. BIND_AS_PROPERTY*//*() const =0*/
    type["GetType"] = static_cast<StringHash (Urho3D::Object::*)() const >(&Urho3D::Object::GetType) ;
    /*Return type name. BIND_AS_PROPERTY*//*() const =0*/
    type["GetTypeName"] = static_cast<const String& (Urho3D::Object::*)() const >(&Urho3D::Object::GetTypeName) ;
    /*Return type info.*//*() const =0*/
    type["GetTypeInfo"] = static_cast<const TypeInfo* (Urho3D::Object::*)() const >(&Urho3D::Object::GetTypeInfo) ;
    /*Handle event.*//*(Object *sender, StringHash eventType, VariantMap &eventData)*/
    type["OnEvent"] = static_cast<void (Urho3D::Object::*)(Object *, StringHash, VariantMap &)>(&Urho3D::Object::OnEvent) ;
    /*Unsubscribe from a specific sender's events.*//*(Object *sender)*/
    type["UnsubscribeFromEvents"] = static_cast<void (Urho3D::Object::*)(Object *)>(&Urho3D::Object::UnsubscribeFromEvents) ;
    /*Unsubscribe from all events.*//*()*/
    type["UnsubscribeFromAllEvents"] = static_cast<void (Urho3D::Object::*)()>(&Urho3D::Object::UnsubscribeFromAllEvents) ;
    /*Unsubscribe from all events except those listed, and optionally only those with userdata (script registered events).*//*(const PODVector< StringHash > &exceptions, bool onlyUserData)*/
    type["UnsubscribeFromAllEventsExcept"] = static_cast<void (Urho3D::Object::*)(const  PODVector<  StringHash > &, bool)>(&Urho3D::Object::UnsubscribeFromAllEventsExcept) ;
    /*Return a preallocated map for event data. Used for optimization to avoid constant re-allocation of event data maps.*//*() const*/
    type["GetEventDataMap"] = static_cast<VariantMap& (Urho3D::Object::*)() const>(&Urho3D::Object::GetEventDataMap) ;
    /*Return execution context.*//*() const*/
    type["GetContext"] = [](Urho3D::Object& self){ return SharedPtr(self.GetContext()); };
    /*Return global variable based on key. BIND_AS_PROPERTY*//*(StringHash key) const*/
    type["GetGlobalVar"] = static_cast<const Variant& (Urho3D::Object::*)(StringHash) const>(&Urho3D::Object::GetGlobalVar) ;
    /*Return all global variables. BIND_AS_PROPERTY*//*() const*/
    type["GetGlobalVars"] = static_cast<const VariantMap& (Urho3D::Object::*)() const>(&Urho3D::Object::GetGlobalVars) ;
    /*Set global variable with the respective key and value. BIND_AS_PROPERTY*//*(StringHash key, const Variant &value)*/
    type["SetGlobalVar"] = static_cast<void (Urho3D::Object::*)(StringHash, const  Variant &)>(&Urho3D::Object::SetGlobalVar) ;
    /*Return active event sender. Null outside event handling.*//*() const*/
    type["GetEventSender"] = [](Urho3D::Object& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetEventSender());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return active event handler. Null outside event handling.*//*() const*/
    type["GetEventHandler"] = static_cast<EventHandler* (Urho3D::Object::*)() const>(&Urho3D::Object::GetEventHandler) ;
    /*Return whether has subscribed to any event.*//*() const*/
    type["HasEventHandlers"] = static_cast<bool (Urho3D::Object::*)() const>(&Urho3D::Object::HasEventHandlers) ;
    /*Return object category. Categories are (optionally) registered along with the object factory. Return an empty string if the object category is not registered. BIND_AS_PROPERTY*//*() const*/
    type["GetCategory"] = static_cast<const String& (Urho3D::Object::*)() const>(&Urho3D::Object::GetCategory) ;
    /*Block object from sending and receiving events.*//*(bool block)*/
    type["SetBlockEvents"] = static_cast<void (Urho3D::Object::*)(bool)>(&Urho3D::Object::SetBlockEvents) ;
    /*Return sending and receiving events blocking status.*//*() const*/
    type["GetBlockEvents"] = static_cast<bool (Urho3D::Object::*)() const>(&Urho3D::Object::GetBlockEvents) ;
    /*Return subsystem by type.*//*(StringHash type) const*/
    type["GetSubsystem"] = [](Urho3D::Object& self, StringHash type, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSubsystem(type));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    type["IsInstanceOf"] = sol::overload(
        static_cast<bool (Urho3D::Object::*)(StringHash) const>(&Urho3D::Object::IsInstanceOf) ,
        static_cast<bool (Urho3D::Object::*)(const  TypeInfo *) const>(&Urho3D::Object::IsInstanceOf)  );
    type["SubscribeToEvent"] = sol::overload(
        static_cast<void (Urho3D::Object::*)(StringHash, EventHandler *)>(&Urho3D::Object::SubscribeToEvent) ,
        static_cast<void (Urho3D::Object::*)(Object *, StringHash, EventHandler *)>(&Urho3D::Object::SubscribeToEvent) ,
        static_cast<void (Urho3D::Object::*)(StringHash, const std::function< void( StringHash,  VariantMap &)> &, void *)>(&Urho3D::Object::SubscribeToEvent) ,
        [](Urho3D::Object& self, StringHash eventType, const std::function< void( StringHash,  VariantMap &)> & function){ self.SubscribeToEvent(eventType, function); },
        static_cast<void (Urho3D::Object::*)(Object *, StringHash, const std::function< void( StringHash,  VariantMap &)> &, void *)>(&Urho3D::Object::SubscribeToEvent) ,
        [](Urho3D::Object& self, Object * sender, StringHash eventType, const std::function< void( StringHash,  VariantMap &)> & function){ self.SubscribeToEvent(sender, eventType, function); } );
    type["UnsubscribeFromEvent"] = sol::overload(
        static_cast<void (Urho3D::Object::*)(StringHash)>(&Urho3D::Object::UnsubscribeFromEvent) ,
        static_cast<void (Urho3D::Object::*)(Object *, StringHash)>(&Urho3D::Object::UnsubscribeFromEvent)  );
    type["SendEvent"] = sol::overload(
        static_cast<void (Urho3D::Object::*)(StringHash)>(&Urho3D::Object::SendEvent) ,
        static_cast<void (Urho3D::Object::*)(StringHash, VariantMap &)>(&Urho3D::Object::SendEvent)  );
    type["HasSubscribedToEvent"] = sol::overload(
        static_cast<bool (Urho3D::Object::*)(StringHash) const>(&Urho3D::Object::HasSubscribedToEvent) ,
        static_cast<bool (Urho3D::Object::*)(Object *, StringHash) const>(&Urho3D::Object::HasSubscribedToEvent)  );
    type["category"] = sol::property(static_cast<const String& (Urho3D::Object::*)() const>(&Urho3D::Object::GetCategory) );
    type["globalVar"] = sol::property(static_cast<const Variant& (Urho3D::Object::*)(StringHash) const>(&Urho3D::Object::GetGlobalVar) 
        , static_cast<void (Urho3D::Object::*)(StringHash, const  Variant &)>(&Urho3D::Object::SetGlobalVar) );
    type["globalVars"] = sol::property(static_cast<const VariantMap& (Urho3D::Object::*)() const>(&Urho3D::Object::GetGlobalVars) );
    type["type"] = sol::property(static_cast<StringHash (Urho3D::Object::*)() const >(&Urho3D::Object::GetType) );
    type["typeName"] = sol::property(static_cast<const String& (Urho3D::Object::*)() const >(&Urho3D::Object::GetTypeName) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Object.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Object.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Core/Object.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_EventHandler(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::EventHandler>( "EventHandler"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::LinkedListNode>()

);

// Constructors

    /*ABSTRACT*/

// Members

    /*Set sender and event type.*//*(Object *sender, StringHash eventType)*/
    type["SetSenderAndEventType"] = static_cast<void (Urho3D::EventHandler::*)(Object *, StringHash)>(&Urho3D::EventHandler::SetSenderAndEventType) ;
    /*Invoke event handler function.*//*(VariantMap &eventData)=0*/
    type["Invoke"] = static_cast<void (Urho3D::EventHandler::*)(VariantMap &)>(&Urho3D::EventHandler::Invoke) ;
    /*Return a unique copy of the event handler.*//*() const =0*/
    type["Clone"] = static_cast<EventHandler* (Urho3D::EventHandler::*)() const >(&Urho3D::EventHandler::Clone) ;
    /*Return event receiver.*//*() const*/
    type["GetReceiver"] = [](Urho3D::EventHandler& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetReceiver());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return event sender. Null if the handler is non-specific.*//*() const*/
    type["GetSender"] = [](Urho3D::EventHandler& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSender());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return event type.*//*() const*/
    type["GetEventType"] = static_cast<const StringHash& (Urho3D::EventHandler::*)() const>(&Urho3D::EventHandler::GetEventType) ;
    /*Return userdata.*//*() const*/
    type["GetUserData"] = static_cast<void* (Urho3D::EventHandler::*)() const>(&Urho3D::EventHandler::GetUserData) ;

}

