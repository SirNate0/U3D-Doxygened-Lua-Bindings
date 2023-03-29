
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/UI.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/UI.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Object.h>
#include <Urho3D/Graphics/Texture2D.h>
#include <Urho3D/Graphics/VertexBuffer.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/UI/Cursor.h>
#include <Urho3D/UI/UIBatch.h>
#include <Urho3D/UI/UIElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_UI(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::UI::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::UI::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::UI>((Urho3D::UI*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::UI>( "UI"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::UI>(context);
        });

// Members

    /*Set cursor  UI element. BIND_AS_PROPERTY*//*(Cursor *cursor)*/
    type["SetCursor"] = static_cast<void (Urho3D::UI::*)(Cursor *)>(&Urho3D::UI::SetCursor) ;
    /*Set modal element. Until all the modal elements are dismissed, all the inputs and events are only sent to them. Return true when successful. Only the modal element can clear its modal status or when it is being destructed.*//*(UIElement *modalElement, bool enable)*/
    type["SetModalElement"] = static_cast<bool (Urho3D::UI::*)(UIElement *, bool)>(&Urho3D::UI::SetModalElement) ;
    /*Clear the  UI (excluding the cursor).*//*()*/
    type["Clear"] = static_cast<void (Urho3D::UI::*)()>(&Urho3D::UI::Clear) ;
    /*Update the  UI logic. Called by HandlePostUpdate().*//*(float timeStep)*/
    type["Update"] = static_cast<void (Urho3D::UI::*)(float)>(&Urho3D::UI::Update) ;
    /*Update the  UI for rendering. Called by HandleRenderUpdate().*//*()*/
    type["RenderUpdate"] = static_cast<void (Urho3D::UI::*)()>(&Urho3D::UI::RenderUpdate) ;
    /*Debug draw a  UI element.*//*(UIElement *element)*/
    type["DebugDraw"] = static_cast<void (Urho3D::UI::*)(UIElement *)>(&Urho3D::UI::DebugDraw) ;
    /*Save a  UI layout to an XML file. Return true if successful.*//*(Serializer &dest, UIElement *element)*/
    type["SaveLayout"] = static_cast<bool (Urho3D::UI::*)(Serializer &, UIElement *)>(&Urho3D::UI::SaveLayout) ;
    /*Set clipboard text. BIND_AS_PROPERTY*//*(const String &text)*/
    type["SetClipboardText"] = static_cast<void (Urho3D::UI::*)(const  String &)>(&Urho3D::UI::SetClipboardText) ;
    /*Set  UI element double click interval in seconds. BIND_AS_PROPERTY*//*(float interval)*/
    type["SetDoubleClickInterval"] = static_cast<void (Urho3D::UI::*)(float)>(&Urho3D::UI::SetDoubleClickInterval) ;
    /*Set max screen distance in pixels between double click clicks. BIND_AS_PROPERTY*//*(float distPixels)*/
    type["SetMaxDoubleClickDistance"] = static_cast<void (Urho3D::UI::*)(float)>(&Urho3D::UI::SetMaxDoubleClickDistance) ;
    /*Set  UI drag event start interval in seconds. BIND_AS_PROPERTY*//*(float interval)*/
    type["SetDragBeginInterval"] = static_cast<void (Urho3D::UI::*)(float)>(&Urho3D::UI::SetDragBeginInterval) ;
    /*Set  UI drag event start distance threshold in pixels. BIND_AS_PROPERTY*//*(int pixels)*/
    type["SetDragBeginDistance"] = static_cast<void (Urho3D::UI::*)(int)>(&Urho3D::UI::SetDragBeginDistance) ;
    /*Set tooltip default display delay in seconds. BIND_AS_PROPERTY*//*(float delay)*/
    type["SetDefaultToolTipDelay"] = static_cast<void (Urho3D::UI::*)(float)>(&Urho3D::UI::SetDefaultToolTipDelay) ;
    /*Set maximum font face texture size. Must be a power of two. Default is 2048. BIND_AS_PROPERTY*//*(int size)*/
    type["SetMaxFontTextureSize"] = static_cast<void (Urho3D::UI::*)(int)>(&Urho3D::UI::SetMaxFontTextureSize) ;
    /*Set whether mouse wheel can control also a non-focused element. BIND_AS_PROPERTY*//*(bool nonFocusedMouseWheel)*/
    type["SetNonFocusedMouseWheel"] = static_cast<void (Urho3D::UI::*)(bool)>(&Urho3D::UI::SetNonFocusedMouseWheel) ;
    /*Set whether to use system clipboard. Default false. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetUseSystemClipboard"] = static_cast<void (Urho3D::UI::*)(bool)>(&Urho3D::UI::SetUseSystemClipboard) ;
    /*Set whether to show the on-screen keyboard (if supported) when a LineEdit is focused. Default true on mobile devices. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetUseScreenKeyboard"] = static_cast<void (Urho3D::UI::*)(bool)>(&Urho3D::UI::SetUseScreenKeyboard) ;
    /*Set whether to use mutable (eraseable) glyphs to ensure a font face never expands to more than one texture. Default false. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetUseMutableGlyphs"] = static_cast<void (Urho3D::UI::*)(bool)>(&Urho3D::UI::SetUseMutableGlyphs) ;
    /*Set whether to force font autohinting instead of using FreeType's TTF bytecode interpreter. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetForceAutoHint"] = static_cast<void (Urho3D::UI::*)(bool)>(&Urho3D::UI::SetForceAutoHint) ;
    /*Set the hinting level used by FreeType fonts. BIND_AS_PROPERTY*//*(FontHintLevel level)*/
    type["SetFontHintLevel"] = static_cast<void (Urho3D::UI::*)(FontHintLevel)>(&Urho3D::UI::SetFontHintLevel) ;
    /*Set the font subpixel threshold. Below this size, if the hint level is LIGHT or NONE, fonts will use subpixel positioning plus oversampling for higher-quality rendering. Has no effect at hint level NORMAL. BIND_AS_PROPERTY*//*(float threshold)*/
    type["SetFontSubpixelThreshold"] = static_cast<void (Urho3D::UI::*)(float)>(&Urho3D::UI::SetFontSubpixelThreshold) ;
    /*Set the oversampling (horizonal stretching) used to improve subpixel font rendering. Only affects fonts smaller than the subpixel limit. BIND_AS_PROPERTY*//*(int oversampling)*/
    type["SetFontOversampling"] = static_cast<void (Urho3D::UI::*)(int)>(&Urho3D::UI::SetFontOversampling) ;
    /*Set UI scale. 1.0 is default (pixel perfect). Resize the root element to match. BIND_AS_PROPERTY*//*(float scale)*/
    type["SetScale"] = static_cast<void (Urho3D::UI::*)(float)>(&Urho3D::UI::SetScale) ;
    /*Scale UI to the specified width in pixels.*//*(float width)*/
    type["SetWidth"] = static_cast<void (Urho3D::UI::*)(float)>(&Urho3D::UI::SetWidth) ;
    /*Scale UI to the specified height in pixels.*//*(float height)*/
    type["SetHeight"] = static_cast<void (Urho3D::UI::*)(float)>(&Urho3D::UI::SetHeight) ;
    /*Return root  UI element. BIND_AS_PROPERTY*//*() const*/
    type["GetRoot"] = [](Urho3D::UI& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRoot());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return root modal element. BIND_AS_ALIAS_get_modalRoot*//*() const*/
    type["GetRootModalElement"] = [](Urho3D::UI& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRootModalElement());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return cursor. BIND_AS_PROPERTY*//*() const*/
    type["GetCursor"] = [](Urho3D::UI& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCursor());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return cursor position. BIND_AS_PROPERTY*//*() const*/
    type["GetCursorPosition"] = static_cast<IntVector2 (Urho3D::UI::*)() const>(&Urho3D::UI::GetCursorPosition) ;
    /*Convert system mouse position (or offset) to scaled  UI position (or offset).*//*(const IntVector2 &systemPos) const*/
    type["ConvertSystemToUI"] = static_cast<IntVector2 (Urho3D::UI::*)(const  IntVector2 &) const>(&Urho3D::UI::ConvertSystemToUI) ;
    /*Convert scaled  UI position (or offset) to system mouse position (or offset).*//*(const IntVector2 &uiPos) const*/
    type["ConvertUIToSystem"] = static_cast<IntVector2 (Urho3D::UI::*)(const  IntVector2 &) const>(&Urho3D::UI::ConvertUIToSystem) ;
    /*Return focused element. BIND_AS_PROPERTY*//*() const*/
    type["GetFocusElement"] = [](Urho3D::UI& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFocusElement());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return topmost enabled root-level non-modal element. BIND_AS_PROPERTY*//*() const*/
    type["GetFrontElement"] = [](Urho3D::UI& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFrontElement());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return currently dragged elements.*//*()*/
    type["GetDragElements"] = static_cast<const Vector<UIElement*> (Urho3D::UI::*)()>(&Urho3D::UI::GetDragElements) ;
    /*Return the number of currently dragged elements.*//*() const*/
    type["GetNumDragElements"] = static_cast<unsigned (Urho3D::UI::*)() const>(&Urho3D::UI::GetNumDragElements) ;
    /*Return the drag element at index.*//*(unsigned index)*/
    type["GetDragElement"] = [](Urho3D::UI& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDragElement(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return clipboard text. BIND_AS_PROPERTY*//*() const*/
    type["GetClipboardText"] = static_cast<const String& (Urho3D::UI::*)() const>(&Urho3D::UI::GetClipboardText) ;
    /*Return  UI element double click interval in seconds. BIND_AS_PROPERTY*//*() const*/
    type["GetDoubleClickInterval"] = static_cast<float (Urho3D::UI::*)() const>(&Urho3D::UI::GetDoubleClickInterval) ;
    /*Return max screen distance in pixels for double clicks to register. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxDoubleClickDistance"] = static_cast<float (Urho3D::UI::*)() const>(&Urho3D::UI::GetMaxDoubleClickDistance) ;
    /*Return  UI drag start event interval in seconds. BIND_AS_PROPERTY*//*() const*/
    type["GetDragBeginInterval"] = static_cast<float (Urho3D::UI::*)() const>(&Urho3D::UI::GetDragBeginInterval) ;
    /*Return  UI drag start event distance threshold in pixels. BIND_AS_PROPERTY*//*() const*/
    type["GetDragBeginDistance"] = static_cast<int (Urho3D::UI::*)() const>(&Urho3D::UI::GetDragBeginDistance) ;
    /*Return tooltip default display delay in seconds. BIND_AS_PROPERTY*//*() const*/
    type["GetDefaultToolTipDelay"] = static_cast<float (Urho3D::UI::*)() const>(&Urho3D::UI::GetDefaultToolTipDelay) ;
    /*Return font texture maximum size. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxFontTextureSize"] = static_cast<int (Urho3D::UI::*)() const>(&Urho3D::UI::GetMaxFontTextureSize) ;
    /*Return whether mouse wheel can control also a non-focused element. BIND_AS_PROPERTY*//*() const*/
    type["IsNonFocusedMouseWheel"] = static_cast<bool (Urho3D::UI::*)() const>(&Urho3D::UI::IsNonFocusedMouseWheel) ;
    /*Return whether is using the system clipboard. BIND_AS_PROPERTY*//*() const*/
    type["GetUseSystemClipboard"] = static_cast<bool (Urho3D::UI::*)() const>(&Urho3D::UI::GetUseSystemClipboard) ;
    /*Return whether focusing a LineEdit will show the on-screen keyboard. BIND_AS_PROPERTY*//*() const*/
    type["GetUseScreenKeyboard"] = static_cast<bool (Urho3D::UI::*)() const>(&Urho3D::UI::GetUseScreenKeyboard) ;
    /*Return whether is using mutable (eraseable) glyphs for fonts. BIND_AS_PROPERTY*//*() const*/
    type["GetUseMutableGlyphs"] = static_cast<bool (Urho3D::UI::*)() const>(&Urho3D::UI::GetUseMutableGlyphs) ;
    /*Return whether is using forced autohinting. BIND_AS_PROPERTY*//*() const*/
    type["GetForceAutoHint"] = static_cast<bool (Urho3D::UI::*)() const>(&Urho3D::UI::GetForceAutoHint) ;
    /*Return the current FreeType font hinting level. BIND_AS_PROPERTY*//*() const*/
    type["GetFontHintLevel"] = static_cast<FontHintLevel (Urho3D::UI::*)() const>(&Urho3D::UI::GetFontHintLevel) ;
    /*Get the font subpixel threshold. Below this size, if the hint level is LIGHT or NONE, fonts will use subpixel positioning plus oversampling for higher-quality rendering. Has no effect at hint level NORMAL. BIND_AS_PROPERTY*//*() const*/
    type["GetFontSubpixelThreshold"] = static_cast<float (Urho3D::UI::*)() const>(&Urho3D::UI::GetFontSubpixelThreshold) ;
    /*Get the oversampling (horizonal stretching) used to improve subpixel font rendering. Only affects fonts smaller than the subpixel limit. BIND_AS_PROPERTY*//*() const*/
    type["GetFontOversampling"] = static_cast<int (Urho3D::UI::*)() const>(&Urho3D::UI::GetFontOversampling) ;
    /*Return true when  UI has modal element(s).*//*() const*/
    type["HasModalElement"] = static_cast<bool (Urho3D::UI::*)() const>(&Urho3D::UI::HasModalElement) ;
    /*Return whether a drag is in progress.*//*() const*/
    type["IsDragging"] = static_cast<bool (Urho3D::UI::*)() const>(&Urho3D::UI::IsDragging) ;
    /*Return current  UI scale. BIND_AS_PROPERTY*//*() const*/
    type["GetScale"] = static_cast<float (Urho3D::UI::*)() const>(&Urho3D::UI::GetScale) ;
    /*Return root element custom size. Returns 0,0 when custom size is not being used and automatic resizing according to window size is in use instead (default). BIND_AS_PROPERTY*//*() const*/
    type["GetCustomSize"] = static_cast<const IntVector2& (Urho3D::UI::*)() const>(&Urho3D::UI::GetCustomSize) ;
    /*Set texture to which element will be rendered.*//*(UIElement *element, Texture2D *texture)*/
    type["SetElementRenderTexture"] = static_cast<void (Urho3D::UI::*)(UIElement *, Texture2D *)>(&Urho3D::UI::SetElementRenderTexture) ;
    type["SetFocusElement"] = sol::overload(
        static_cast<void (Urho3D::UI::*)(UIElement *, bool)>(&Urho3D::UI::SetFocusElement) ,
        [](Urho3D::UI& self, UIElement * element){ self.SetFocusElement(element); } );
    type["Render"] = sol::overload(
        static_cast<void (Urho3D::UI::*)(bool)>(&Urho3D::UI::Render) ,
        [](Urho3D::UI& self){ self.Render(); } );
    type["LoadLayout"] = sol::overload(
        static_cast<SharedPtr<UIElement> (Urho3D::UI::*)(Deserializer &, XMLFile *)>(&Urho3D::UI::LoadLayout) ,
        [](Urho3D::UI& self, Deserializer & source){ return self.LoadLayout(source); },
        static_cast<SharedPtr<UIElement> (Urho3D::UI::*)(XMLFile *, XMLFile *)>(&Urho3D::UI::LoadLayout) ,
        [](Urho3D::UI& self, XMLFile * file){ return self.LoadLayout(file); } );
    type["SetCustomSize"] = sol::overload(
        static_cast<void (Urho3D::UI::*)(const  IntVector2 &)>(&Urho3D::UI::SetCustomSize) ,
        static_cast<void (Urho3D::UI::*)(int, int)>(&Urho3D::UI::SetCustomSize)  );
    type["GetElementAt"] = sol::overload(
        [](Urho3D::UI& self, const IntVector2 &position, bool enabledOnly=true, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetElementAt(position, enabledOnly));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::UI& self, const  IntVector2 & position, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetElementAt(position));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::UI& self, int x, int y, bool enabledOnly=true, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetElementAt(x, y, enabledOnly));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::UI& self, int x, int y, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetElementAt(x, y));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::UI& self, UIElement *root, const IntVector2 &position, bool enabledOnly=true, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetElementAt(root, position, enabledOnly));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::UI& self, UIElement * root, const  IntVector2 & position, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetElementAt(root, position));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["clipboardText"] = sol::property(static_cast<const String& (Urho3D::UI::*)() const>(&Urho3D::UI::GetClipboardText) 
        , static_cast<void (Urho3D::UI::*)(const  String &)>(&Urho3D::UI::SetClipboardText) );
    type["cursor"] = sol::property([](Urho3D::UI& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCursor());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::UI::*)(Cursor *)>(&Urho3D::UI::SetCursor) );
    type["cursorPosition"] = sol::property(static_cast<IntVector2 (Urho3D::UI::*)() const>(&Urho3D::UI::GetCursorPosition) );
    type["customSize"] = sol::property(static_cast<const IntVector2& (Urho3D::UI::*)() const>(&Urho3D::UI::GetCustomSize) 
        , static_cast<void (Urho3D::UI::*)(const  IntVector2 &)>(&Urho3D::UI::SetCustomSize) );
    type["defaultToolTipDelay"] = sol::property(static_cast<float (Urho3D::UI::*)() const>(&Urho3D::UI::GetDefaultToolTipDelay) 
        , static_cast<void (Urho3D::UI::*)(float)>(&Urho3D::UI::SetDefaultToolTipDelay) );
    type["doubleClickInterval"] = sol::property(static_cast<float (Urho3D::UI::*)() const>(&Urho3D::UI::GetDoubleClickInterval) 
        , static_cast<void (Urho3D::UI::*)(float)>(&Urho3D::UI::SetDoubleClickInterval) );
    type["dragBeginDistance"] = sol::property(static_cast<int (Urho3D::UI::*)() const>(&Urho3D::UI::GetDragBeginDistance) 
        , static_cast<void (Urho3D::UI::*)(int)>(&Urho3D::UI::SetDragBeginDistance) );
    type["dragBeginInterval"] = sol::property(static_cast<float (Urho3D::UI::*)() const>(&Urho3D::UI::GetDragBeginInterval) 
        , static_cast<void (Urho3D::UI::*)(float)>(&Urho3D::UI::SetDragBeginInterval) );
    type["focusElement"] = sol::property([](Urho3D::UI& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFocusElement());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["fontHintLevel"] = sol::property(static_cast<FontHintLevel (Urho3D::UI::*)() const>(&Urho3D::UI::GetFontHintLevel) 
        , static_cast<void (Urho3D::UI::*)(FontHintLevel)>(&Urho3D::UI::SetFontHintLevel) );
    type["fontOversampling"] = sol::property(static_cast<int (Urho3D::UI::*)() const>(&Urho3D::UI::GetFontOversampling) 
        , static_cast<void (Urho3D::UI::*)(int)>(&Urho3D::UI::SetFontOversampling) );
    type["fontSubpixelThreshold"] = sol::property(static_cast<float (Urho3D::UI::*)() const>(&Urho3D::UI::GetFontSubpixelThreshold) 
        , static_cast<void (Urho3D::UI::*)(float)>(&Urho3D::UI::SetFontSubpixelThreshold) );
    type["forceAutoHint"] = sol::property(static_cast<bool (Urho3D::UI::*)() const>(&Urho3D::UI::GetForceAutoHint) 
        , static_cast<void (Urho3D::UI::*)(bool)>(&Urho3D::UI::SetForceAutoHint) );
    type["frontElement"] = sol::property([](Urho3D::UI& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFrontElement());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["maxDoubleClickDistance"] = sol::property(static_cast<float (Urho3D::UI::*)() const>(&Urho3D::UI::GetMaxDoubleClickDistance) 
        , static_cast<void (Urho3D::UI::*)(float)>(&Urho3D::UI::SetMaxDoubleClickDistance) );
    type["maxFontTextureSize"] = sol::property(static_cast<int (Urho3D::UI::*)() const>(&Urho3D::UI::GetMaxFontTextureSize) 
        , static_cast<void (Urho3D::UI::*)(int)>(&Urho3D::UI::SetMaxFontTextureSize) );
    type["nonFocusedMouseWheel"] = sol::property(static_cast<bool (Urho3D::UI::*)() const>(&Urho3D::UI::IsNonFocusedMouseWheel) 
        , static_cast<void (Urho3D::UI::*)(bool)>(&Urho3D::UI::SetNonFocusedMouseWheel) );
    type["root"] = sol::property([](Urho3D::UI& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRoot());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["rootModalElement"] = sol::property([](Urho3D::UI& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRootModalElement());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["scale"] = sol::property(static_cast<float (Urho3D::UI::*)() const>(&Urho3D::UI::GetScale) 
        , static_cast<void (Urho3D::UI::*)(float)>(&Urho3D::UI::SetScale) );
    type["useMutableGlyphs"] = sol::property(static_cast<bool (Urho3D::UI::*)() const>(&Urho3D::UI::GetUseMutableGlyphs) 
        , static_cast<void (Urho3D::UI::*)(bool)>(&Urho3D::UI::SetUseMutableGlyphs) );
    type["useScreenKeyboard"] = sol::property(static_cast<bool (Urho3D::UI::*)() const>(&Urho3D::UI::GetUseScreenKeyboard) 
        , static_cast<void (Urho3D::UI::*)(bool)>(&Urho3D::UI::SetUseScreenKeyboard) );
    type["useSystemClipboard"] = sol::property(static_cast<bool (Urho3D::UI::*)() const>(&Urho3D::UI::GetUseSystemClipboard) 
        , static_cast<void (Urho3D::UI::*)(bool)>(&Urho3D::UI::SetUseSystemClipboard) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/UI.h


#if 0 // Non-public class private

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/UI.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/Texture2D.h>
#include <Urho3D/Graphics/VertexBuffer.h>
#include <Urho3D/UI/UIBatch.h>
#include <Urho3D/UI/UIElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_UI_RenderToTextureData(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::UI::RenderToTextureData>( "RenderToTextureData"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["rootElement_"] = &Urho3D::UI::RenderToTextureData::rootElement_;
    type["texture_"] = &Urho3D::UI::RenderToTextureData::texture_;
    type["batches_"] = &Urho3D::UI::RenderToTextureData::batches_;
    type["vertexData_"] = &Urho3D::UI::RenderToTextureData::vertexData_;
    type["vertexBuffer_"] = &Urho3D::UI::RenderToTextureData::vertexBuffer_;
    type["debugDrawBatches_"] = &Urho3D::UI::RenderToTextureData::debugDrawBatches_;
    type["debugVertexData_"] = &Urho3D::UI::RenderToTextureData::debugVertexData_;
    type["debugVertexBuffer_"] = &Urho3D::UI::RenderToTextureData::debugVertexBuffer_;

}


#endif // Non-public class private

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/UI.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/UI.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Core/Timer.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_UI_DragData(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::UI::DragData>( "DragData"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["dragButtons"] = &Urho3D::UI::DragData::dragButtons;
    type["numDragButtons"] = &Urho3D::UI::DragData::numDragButtons;
    type["sumPos"] = &Urho3D::UI::DragData::sumPos;
    type["dragBeginPending"] = &Urho3D::UI::DragData::dragBeginPending;
    type["dragBeginTimer"] = &Urho3D::UI::DragData::dragBeginTimer;
    type["dragBeginSumPos"] = &Urho3D::UI::DragData::dragBeginSumPos;

}

