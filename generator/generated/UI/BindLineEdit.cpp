
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/LineEdit.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/LineEdit.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/UI/BorderImage.h>
#include <Urho3D/UI/Cursor.h>
#include <Urho3D/UI/Text.h>
#include <Urho3D/UI/UIElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_LineEdit(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::LineEdit::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::LineEdit::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::LineEdit>((Urho3D::LineEdit*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::LineEdit>( "LineEdit"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::BorderImage,Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::LineEdit>(context);
        });

// Members

    /*Apply attribute changes that can not be applied immediately.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::LineEdit::*)()>(&Urho3D::LineEdit::ApplyAttributes) ;
    /*Perform  UI element update.*//*(float timeStep) override*/
    type["Update"] = static_cast<void (Urho3D::LineEdit::*)(float)>(&Urho3D::LineEdit::Update) ;
    /*React to mouse click begin.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor) override*/
    type["OnClickBegin"] = static_cast<void (Urho3D::LineEdit::*)(const  IntVector2 &, const  IntVector2 &, MouseButton, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::LineEdit::OnClickBegin) ;
    /*React to mouse doubleclick.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor) override*/
    type["OnDoubleClick"] = static_cast<void (Urho3D::LineEdit::*)(const  IntVector2 &, const  IntVector2 &, MouseButton, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::LineEdit::OnDoubleClick) ;
    /*React to mouse drag begin.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor) override*/
    type["OnDragBegin"] = static_cast<void (Urho3D::LineEdit::*)(const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::LineEdit::OnDragBegin) ;
    /*React to mouse drag motion.*//*(const IntVector2 &position, const IntVector2 &screenPosition, const IntVector2 &deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor) override*/
    type["OnDragMove"] = static_cast<void (Urho3D::LineEdit::*)(const  IntVector2 &, const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::LineEdit::OnDragMove) ;
    /*React to drag and drop test. Return true to signal that the drop is acceptable.*//*(UIElement *source) override*/
    type["OnDragDropTest"] = static_cast<bool (Urho3D::LineEdit::*)(UIElement *)>(&Urho3D::LineEdit::OnDragDropTest) ;
    /*React to drag and drop finish. Return true to signal that the drop was accepted.*//*(UIElement *source) override*/
    type["OnDragDropFinish"] = static_cast<bool (Urho3D::LineEdit::*)(UIElement *)>(&Urho3D::LineEdit::OnDragDropFinish) ;
    /*React to a key press.*//*(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override*/
    type["OnKey"] = static_cast<void (Urho3D::LineEdit::*)(Key, MouseButtonFlags, QualifierFlags)>(&Urho3D::LineEdit::OnKey) ;
    /*React to text input event.*//*(const String &text) override*/
    type["OnTextInput"] = static_cast<void (Urho3D::LineEdit::*)(const  String &)>(&Urho3D::LineEdit::OnTextInput) ;
    /*Set text. BIND_AS_PROPERTY*//*(const String &text)*/
    type["SetText"] = static_cast<void (Urho3D::LineEdit::*)(const  String &)>(&Urho3D::LineEdit::SetText) ;
    /*Set cursor position. BIND_AS_PROPERTY*//*(unsigned position)*/
    type["SetCursorPosition"] = static_cast<void (Urho3D::LineEdit::*)(unsigned)>(&Urho3D::LineEdit::SetCursorPosition) ;
    /*Set cursor blink rate. 0 disables blinking. BIND_AS_PROPERTY*//*(float rate)*/
    type["SetCursorBlinkRate"] = static_cast<void (Urho3D::LineEdit::*)(float)>(&Urho3D::LineEdit::SetCursorBlinkRate) ;
    /*Set maximum text length. 0 for unlimited. BIND_AS_PROPERTY*//*(unsigned length)*/
    type["SetMaxLength"] = static_cast<void (Urho3D::LineEdit::*)(unsigned)>(&Urho3D::LineEdit::SetMaxLength) ;
    /*Set echo character for password entry and such. 0 (default) shows the actual text. BIND_AS_PROPERTY*//*(unsigned c)*/
    type["SetEchoCharacter"] = static_cast<void (Urho3D::LineEdit::*)(unsigned)>(&Urho3D::LineEdit::SetEchoCharacter) ;
    /*Set whether can move cursor with arrows or mouse, default true. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetCursorMovable"] = static_cast<void (Urho3D::LineEdit::*)(bool)>(&Urho3D::LineEdit::SetCursorMovable) ;
    /*Set whether selections are allowed, default true. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetTextSelectable"] = static_cast<void (Urho3D::LineEdit::*)(bool)>(&Urho3D::LineEdit::SetTextSelectable) ;
    /*Set whether copy-paste operations are allowed, default true. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetTextCopyable"] = static_cast<void (Urho3D::LineEdit::*)(bool)>(&Urho3D::LineEdit::SetTextCopyable) ;
    /*Return text. BIND_AS_PROPERTY*//*() const*/
    type["GetText"] = static_cast<const String& (Urho3D::LineEdit::*)() const>(&Urho3D::LineEdit::GetText) ;
    /*Return cursor position. BIND_AS_PROPERTY*//*() const*/
    type["GetCursorPosition"] = static_cast<unsigned (Urho3D::LineEdit::*)() const>(&Urho3D::LineEdit::GetCursorPosition) ;
    /*Return cursor blink rate. BIND_AS_PROPERTY*//*() const*/
    type["GetCursorBlinkRate"] = static_cast<float (Urho3D::LineEdit::*)() const>(&Urho3D::LineEdit::GetCursorBlinkRate) ;
    /*Return maximum text length. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxLength"] = static_cast<unsigned (Urho3D::LineEdit::*)() const>(&Urho3D::LineEdit::GetMaxLength) ;
    /*Return echo character. BIND_AS_PROPERTY*//*() const*/
    type["GetEchoCharacter"] = static_cast<unsigned (Urho3D::LineEdit::*)() const>(&Urho3D::LineEdit::GetEchoCharacter) ;
    /*Return whether can move cursor with arrows or mouse. BIND_AS_PROPERTY*//*() const*/
    type["IsCursorMovable"] = static_cast<bool (Urho3D::LineEdit::*)() const>(&Urho3D::LineEdit::IsCursorMovable) ;
    /*Return whether selections are allowed. BIND_AS_PROPERTY*//*() const*/
    type["IsTextSelectable"] = static_cast<bool (Urho3D::LineEdit::*)() const>(&Urho3D::LineEdit::IsTextSelectable) ;
    /*Return whether copy-paste operations are allowed. BIND_AS_PROPERTY*//*() const*/
    type["IsTextCopyable"] = static_cast<bool (Urho3D::LineEdit::*)() const>(&Urho3D::LineEdit::IsTextCopyable) ;
    /*Return text element. BIND_AS_PROPERTY*//*() const*/
    type["GetTextElement"] = [](Urho3D::LineEdit& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTextElement());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return cursor element. BIND_AS_PROPERTY*//*() const*/
    type["GetCursor"] = [](Urho3D::LineEdit& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCursor());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    type["cursor"] = sol::property([](Urho3D::LineEdit& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCursor());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["cursorBlinkRate"] = sol::property(static_cast<float (Urho3D::LineEdit::*)() const>(&Urho3D::LineEdit::GetCursorBlinkRate) 
        , static_cast<void (Urho3D::LineEdit::*)(float)>(&Urho3D::LineEdit::SetCursorBlinkRate) );
    type["cursorMovable"] = sol::property(static_cast<bool (Urho3D::LineEdit::*)() const>(&Urho3D::LineEdit::IsCursorMovable) 
        , static_cast<void (Urho3D::LineEdit::*)(bool)>(&Urho3D::LineEdit::SetCursorMovable) );
    type["cursorPosition"] = sol::property(static_cast<unsigned (Urho3D::LineEdit::*)() const>(&Urho3D::LineEdit::GetCursorPosition) 
        , static_cast<void (Urho3D::LineEdit::*)(unsigned)>(&Urho3D::LineEdit::SetCursorPosition) );
    type["echoCharacter"] = sol::property(static_cast<unsigned (Urho3D::LineEdit::*)() const>(&Urho3D::LineEdit::GetEchoCharacter) 
        , static_cast<void (Urho3D::LineEdit::*)(unsigned)>(&Urho3D::LineEdit::SetEchoCharacter) );
    type["maxLength"] = sol::property(static_cast<unsigned (Urho3D::LineEdit::*)() const>(&Urho3D::LineEdit::GetMaxLength) 
        , static_cast<void (Urho3D::LineEdit::*)(unsigned)>(&Urho3D::LineEdit::SetMaxLength) );
    type["text"] = sol::property(static_cast<const String& (Urho3D::LineEdit::*)() const>(&Urho3D::LineEdit::GetText) 
        , static_cast<void (Urho3D::LineEdit::*)(const  String &)>(&Urho3D::LineEdit::SetText) );
    type["textCopyable"] = sol::property(static_cast<bool (Urho3D::LineEdit::*)() const>(&Urho3D::LineEdit::IsTextCopyable) 
        , static_cast<void (Urho3D::LineEdit::*)(bool)>(&Urho3D::LineEdit::SetTextCopyable) );
    type["textElement"] = sol::property([](Urho3D::LineEdit& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTextElement());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["textSelectable"] = sol::property(static_cast<bool (Urho3D::LineEdit::*)() const>(&Urho3D::LineEdit::IsTextSelectable) 
        , static_cast<void (Urho3D::LineEdit::*)(bool)>(&Urho3D::LineEdit::SetTextSelectable) );

}

