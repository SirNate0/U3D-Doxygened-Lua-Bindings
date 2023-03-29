
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/Button.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/Button.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/UI/Cursor.h>
#include <Urho3D/UI/UIBatch.h>
#include <Urho3D/UI/UIElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Button(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Button::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Button::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Button>((Urho3D::Button*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Button>( "Button"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::BorderImage,Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Button>(context);
        });

// Members

    /*Perform  UI element update.*//*(float timeStep) override*/
    type["Update"] = static_cast<void (Urho3D::Button::*)(float)>(&Urho3D::Button::Update) ;
    /*Return  UI rendering batches.*//*(PODVector< UIBatch > &batches, PODVector< float > &vertexData, const IntRect &currentScissor) override*/
    type["GetBatches"] = static_cast<void (Urho3D::Button::*)(PODVector<  UIBatch > &, PODVector< float > &, const  IntRect &)>(&Urho3D::Button::GetBatches) ;
    /*React to mouse click begin.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor) override*/
    type["OnClickBegin"] = static_cast<void (Urho3D::Button::*)(const  IntVector2 &, const  IntVector2 &, MouseButton, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::Button::OnClickBegin) ;
    /*React to mouse click end.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor, UIElement *beginElement) override*/
    type["OnClickEnd"] = static_cast<void (Urho3D::Button::*)(const  IntVector2 &, const  IntVector2 &, MouseButton, MouseButtonFlags, QualifierFlags, Cursor *, UIElement *)>(&Urho3D::Button::OnClickEnd) ;
    /*React to mouse drag motion.*//*(const IntVector2 &position, const IntVector2 &screenPosition, const IntVector2 &deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor) override*/
    type["OnDragMove"] = static_cast<void (Urho3D::Button::*)(const  IntVector2 &, const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::Button::OnDragMove) ;
    /*React to a key press.*//*(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override*/
    type["OnKey"] = static_cast<void (Urho3D::Button::*)(Key, MouseButtonFlags, QualifierFlags)>(&Urho3D::Button::OnKey) ;
    /*Set repeat properties. Rate 0 (default) disables repeat.*//*(float delay, float rate)*/
    type["SetRepeat"] = static_cast<void (Urho3D::Button::*)(float, float)>(&Urho3D::Button::SetRepeat) ;
    /*Set repeat delay. BIND_AS_PROPERTY*//*(float delay)*/
    type["SetRepeatDelay"] = static_cast<void (Urho3D::Button::*)(float)>(&Urho3D::Button::SetRepeatDelay) ;
    /*Set repeat rate. BIND_AS_PROPERTY*//*(float rate)*/
    type["SetRepeatRate"] = static_cast<void (Urho3D::Button::*)(float)>(&Urho3D::Button::SetRepeatRate) ;
    /*Return pressed image offset. BIND_AS_PROPERTY*//*() const*/
    type["GetPressedOffset"] = static_cast<const IntVector2& (Urho3D::Button::*)() const>(&Urho3D::Button::GetPressedOffset) ;
    /*Return offset of child elements when pressed. BIND_AS_PROPERTY*//*() const*/
    type["GetPressedChildOffset"] = static_cast<const IntVector2& (Urho3D::Button::*)() const>(&Urho3D::Button::GetPressedChildOffset) ;
    /*Return repeat delay. BIND_AS_PROPERTY*//*() const*/
    type["GetRepeatDelay"] = static_cast<float (Urho3D::Button::*)() const>(&Urho3D::Button::GetRepeatDelay) ;
    /*Return repeat rate. BIND_AS_PROPERTY*//*() const*/
    type["GetRepeatRate"] = static_cast<float (Urho3D::Button::*)() const>(&Urho3D::Button::GetRepeatRate) ;
    /*Return whether is currently pressed. BIND_AS_PROPERTY*//*() const*/
    type["IsPressed"] = static_cast<bool (Urho3D::Button::*)() const>(&Urho3D::Button::IsPressed) ;
    type["SetPressedOffset"] = sol::overload(
        static_cast<void (Urho3D::Button::*)(const  IntVector2 &)>(&Urho3D::Button::SetPressedOffset) ,
        static_cast<void (Urho3D::Button::*)(int, int)>(&Urho3D::Button::SetPressedOffset)  );
    type["SetPressedChildOffset"] = sol::overload(
        static_cast<void (Urho3D::Button::*)(const  IntVector2 &)>(&Urho3D::Button::SetPressedChildOffset) ,
        static_cast<void (Urho3D::Button::*)(int, int)>(&Urho3D::Button::SetPressedChildOffset)  );
    type["pressed"] = sol::property(static_cast<bool (Urho3D::Button::*)() const>(&Urho3D::Button::IsPressed) );
    type["pressedChildOffset"] = sol::property(static_cast<const IntVector2& (Urho3D::Button::*)() const>(&Urho3D::Button::GetPressedChildOffset) 
        , static_cast<void (Urho3D::Button::*)(const  IntVector2 &)>(&Urho3D::Button::SetPressedChildOffset) );
    type["pressedOffset"] = sol::property(static_cast<const IntVector2& (Urho3D::Button::*)() const>(&Urho3D::Button::GetPressedOffset) 
        , static_cast<void (Urho3D::Button::*)(const  IntVector2 &)>(&Urho3D::Button::SetPressedOffset) );
    type["repeatDelay"] = sol::property(static_cast<float (Urho3D::Button::*)() const>(&Urho3D::Button::GetRepeatDelay) 
        , static_cast<void (Urho3D::Button::*)(float)>(&Urho3D::Button::SetRepeatDelay) );
    type["repeatRate"] = sol::property(static_cast<float (Urho3D::Button::*)() const>(&Urho3D::Button::GetRepeatRate) 
        , static_cast<void (Urho3D::Button::*)(float)>(&Urho3D::Button::SetRepeatRate) );

}

