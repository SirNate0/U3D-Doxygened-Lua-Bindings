
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/UIElement.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/UIElement.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Texture2D.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Input/InputConstants.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/Scene/Animatable.h>
#include <Urho3D/UI/Cursor.h>
#include <Urho3D/UI/UIBatch.h>
#include <Urho3D/UI/UIElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_UIElement(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::UIElement::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::UIElement::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::UIElement>((Urho3D::UIElement*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::UIElement>( "UIElement"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::UIElement>(context);
        });

// Members

    /*Apply attribute changes that can not be applied immediately.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::UIElement::*)()>(&Urho3D::UIElement::ApplyAttributes) ;
    /*Create a child by loading from XML data with style. Returns the child element if successful, null if otherwise.*//*(const XMLElement &childElem, XMLFile *styleFile)*/
    type["LoadChildXML"] = [](Urho3D::UIElement& self, const XMLElement &childElem, XMLFile *styleFile, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.LoadChildXML(childElem, styleFile));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Perform  UI element update.*//*(float timeStep)*/
    type["Update"] = static_cast<void (Urho3D::UIElement::*)(float)>(&Urho3D::UIElement::Update) ;
    /*Return whether is visible and inside a scissor rectangle and should be rendered.*//*(const IntRect &currentScissor)*/
    type["IsWithinScissor"] = static_cast<bool (Urho3D::UIElement::*)(const  IntRect &)>(&Urho3D::UIElement::IsWithinScissor) ;
    /*Update and return screen position. BIND_AS_PROPERTY*//*() const*/
    type["GetScreenPosition"] = static_cast<const IntVector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetScreenPosition) ;
    /*Return  UI rendering batches.*//*(PODVector< UIBatch > &batches, PODVector< float > &vertexData, const IntRect &currentScissor)*/
    type["GetBatches"] = static_cast<void (Urho3D::UIElement::*)(PODVector<  UIBatch > &, PODVector< float > &, const  IntRect &)>(&Urho3D::UIElement::GetBatches) ;
    /*Return  UI rendering batches for debug draw.*//*(PODVector< UIBatch > &batches, PODVector< float > &vertexData, const IntRect &currentScissor)*/
    type["GetDebugDrawBatches"] = static_cast<void (Urho3D::UIElement::*)(PODVector<  UIBatch > &, PODVector< float > &, const  IntRect &)>(&Urho3D::UIElement::GetDebugDrawBatches) ;
    /*React to mouse hover.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor)*/
    type["OnHover"] = static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::UIElement::OnHover) ;
    /*React to mouse click begin.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor)*/
    type["OnClickBegin"] = static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &, const  IntVector2 &, MouseButton, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::UIElement::OnClickBegin) ;
    /*React to mouse click end.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor, UIElement *beginElement)*/
    type["OnClickEnd"] = static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &, const  IntVector2 &, MouseButton, MouseButtonFlags, QualifierFlags, Cursor *, UIElement *)>(&Urho3D::UIElement::OnClickEnd) ;
    /*React to double mouse click.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor)*/
    type["OnDoubleClick"] = static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &, const  IntVector2 &, MouseButton, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::UIElement::OnDoubleClick) ;
    /*React to mouse drag begin.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor)*/
    type["OnDragBegin"] = static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::UIElement::OnDragBegin) ;
    /*React to mouse drag motion.*//*(const IntVector2 &position, const IntVector2 &screenPosition, const IntVector2 &deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor)*/
    type["OnDragMove"] = static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &, const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::UIElement::OnDragMove) ;
    /*React to mouse drag end.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags releaseButtons, Cursor *cursor)*/
    type["OnDragEnd"] = static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, MouseButtonFlags, Cursor *)>(&Urho3D::UIElement::OnDragEnd) ;
    /*React to a mouse drag cancel event (ie, when an extra button is pressed).*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags cancelButtons, Cursor *cursor)*/
    type["OnDragCancel"] = static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, MouseButtonFlags, Cursor *)>(&Urho3D::UIElement::OnDragCancel) ;
    /*React to drag and drop test. Return true to signal that the drop is acceptable.*//*(UIElement *source)*/
    type["OnDragDropTest"] = static_cast<bool (Urho3D::UIElement::*)(UIElement *)>(&Urho3D::UIElement::OnDragDropTest) ;
    /*React to drag and drop finish. Return true to signal that the drop was accepted.*//*(UIElement *source)*/
    type["OnDragDropFinish"] = static_cast<bool (Urho3D::UIElement::*)(UIElement *)>(&Urho3D::UIElement::OnDragDropFinish) ;
    /*React to mouse wheel.*//*(int delta, MouseButtonFlags buttons, QualifierFlags qualifiers)*/
    type["OnWheel"] = static_cast<void (Urho3D::UIElement::*)(int, MouseButtonFlags, QualifierFlags)>(&Urho3D::UIElement::OnWheel) ;
    /*React to a key press.*//*(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers)*/
    type["OnKey"] = static_cast<void (Urho3D::UIElement::*)(Key, MouseButtonFlags, QualifierFlags)>(&Urho3D::UIElement::OnKey) ;
    /*React to text input event.*//*(const String &text)*/
    type["OnTextInput"] = static_cast<void (Urho3D::UIElement::*)(const  String &)>(&Urho3D::UIElement::OnTextInput) ;
    /*React to resize.*//*(const IntVector2 &newSize, const IntVector2 &delta)*/
    type["OnResize"] = static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &, const  IntVector2 &)>(&Urho3D::UIElement::OnResize) ;
    /*React to position change.*//*(const IntVector2 &newPosition)*/
    type["OnPositionSet"] = static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::OnPositionSet) ;
    /*React to editable status change.*//*()*/
    type["OnSetEditable"] = static_cast<void (Urho3D::UIElement::*)()>(&Urho3D::UIElement::OnSetEditable) ;
    /*React to indent change.*//*()*/
    type["OnIndentSet"] = static_cast<void (Urho3D::UIElement::*)()>(&Urho3D::UIElement::OnIndentSet) ;
    /*Convert screen coordinates to element coordinates.*//*(const IntVector2 &screenPosition)*/
    type["ScreenToElement"] = static_cast<IntVector2 (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::ScreenToElement) ;
    /*Convert element coordinates to screen coordinates.*//*(const IntVector2 &position)*/
    type["ElementToScreen"] = static_cast<IntVector2 (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::ElementToScreen) ;
    /*Return whether the element could handle wheel input.*//*() const*/
    type["IsWheelHandler"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsWheelHandler) ;
    /*Filter attributes in serialization process.*//*(XMLElement &dest) const*/
    type["FilterAttributes"] = static_cast<bool (Urho3D::UIElement::*)(XMLElement &) const>(&Urho3D::UIElement::FilterAttributes) ;
    /*Set name. BIND_AS_PROPERTY*//*(const String &name)*/
    type["SetName"] = static_cast<void (Urho3D::UIElement::*)(const  String &)>(&Urho3D::UIElement::SetName) ;
    /*Set width only. BIND_AS_PROPERTY*//*(int width)*/
    type["SetWidth"] = static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetWidth) ;
    /*Set height only. BIND_AS_PROPERTY*//*(int height)*/
    type["SetHeight"] = static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetHeight) ;
    /*Set minimum width. BIND_AS_PROPERTY*//*(int width)*/
    type["SetMinWidth"] = static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetMinWidth) ;
    /*Set minimum height. BIND_AS_PROPERTY*//*(int height)*/
    type["SetMinHeight"] = static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetMinHeight) ;
    /*Set maximum width. BIND_AS_PROPERTY*//*(int width)*/
    type["SetMaxWidth"] = static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetMaxWidth) ;
    /*Set maximum height. BIND_AS_PROPERTY*//*(int height)*/
    type["SetMaxHeight"] = static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetMaxHeight) ;
    /*Set fixed width.*//*(int width)*/
    type["SetFixedWidth"] = static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetFixedWidth) ;
    /*Set fixed height.*//*(int height)*/
    type["SetFixedHeight"] = static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetFixedHeight) ;
    /*Set horizontal and vertical alignment.*//*(HorizontalAlignment hAlign, VerticalAlignment vAlign)*/
    type["SetAlignment"] = static_cast<void (Urho3D::UIElement::*)(HorizontalAlignment, VerticalAlignment)>(&Urho3D::UIElement::SetAlignment) ;
    /*Set horizontal alignment. BIND_AS_PROPERTY*//*(HorizontalAlignment align)*/
    type["SetHorizontalAlignment"] = static_cast<void (Urho3D::UIElement::*)(HorizontalAlignment)>(&Urho3D::UIElement::SetHorizontalAlignment) ;
    /*Set vertical alignment. BIND_AS_PROPERTY*//*(VerticalAlignment align)*/
    type["SetVerticalAlignment"] = static_cast<void (Urho3D::UIElement::*)(VerticalAlignment)>(&Urho3D::UIElement::SetVerticalAlignment) ;
    /*Enable automatic positioning & sizing of the element relative to its parent using min/max anchor and min/max offset. Default false. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetEnableAnchor"] = static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetEnableAnchor) ;
    /*Set offset of element's top left from the minimum anchor in pixels. No effect when anchor is not enabled. BIND_AS_PROPERTY*//*(const IntVector2 &offset)*/
    type["SetMinOffset"] = static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::SetMinOffset) ;
    /*Set offset of element's bottom right from the maximum anchor in pixels. No effect when anchor is not enabled. BIND_AS_PROPERTY*//*(const IntVector2 &offset)*/
    type["SetMaxOffset"] = static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::SetMaxOffset) ;
    /*Set child element clipping border. BIND_AS_PROPERTY*//*(const IntRect &rect)*/
    type["SetClipBorder"] = static_cast<void (Urho3D::UIElement::*)(const  IntRect &)>(&Urho3D::UIElement::SetClipBorder) ;
    /*Set priority. BIND_AS_PROPERTY*//*(int priority)*/
    type["SetPriority"] = static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetPriority) ;
    /*Set opacity. BIND_AS_PROPERTY*//*(float opacity)*/
    type["SetOpacity"] = static_cast<void (Urho3D::UIElement::*)(float)>(&Urho3D::UIElement::SetOpacity) ;
    /*Set whether should be brought to front when focused. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetBringToFront"] = static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetBringToFront) ;
    /*Set whether should be put to background when another element is focused. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetBringToBack"] = static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetBringToBack) ;
    /*Set whether should clip child elements. Default false. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetClipChildren"] = static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetClipChildren) ;
    /*Set whether should sort child elements according to priority. Default true. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetSortChildren"] = static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetSortChildren) ;
    /*Set whether parent elements' opacity affects opacity. Default true. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetUseDerivedOpacity"] = static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetUseDerivedOpacity) ;
    /*Set whether reacts to input. Default false, but is enabled by subclasses if applicable. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetEnabled"] = static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetEnabled) ;
    /*Set enabled state on self and child elements. Elements' own enabled state is remembered (IsEnabledSelf) and can be restored.*//*(bool enable)*/
    type["SetDeepEnabled"] = static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetDeepEnabled) ;
    /*Reset enabled state to the element's remembered state prior to calling SetDeepEnabled.*//*()*/
    type["ResetDeepEnabled"] = static_cast<void (Urho3D::UIElement::*)()>(&Urho3D::UIElement::ResetDeepEnabled) ;
    /*Set enabled state on self and child elements. Unlike SetDeepEnabled this does not remember the elements' own enabled state, but overwrites it.*//*(bool enable)*/
    type["SetEnabledRecursive"] = static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetEnabledRecursive) ;
    /*Set whether value is editable through input. Not applicable to all elements. Default true. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetEditable"] = static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetEditable) ;
    /*Set whether is focused. Only one element can be focused at a time. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetFocus"] = static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetFocus) ;
    /*Set selected mode. Actual meaning is element dependent, for example constant hover or pressed effect. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetSelected"] = static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetSelected) ;
    /*Set whether is visible. Visibility propagates to child elements. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetVisible"] = static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetVisible) ;
    /*Set focus mode. BIND_AS_PROPERTY*//*(FocusMode mode)*/
    type["SetFocusMode"] = static_cast<void (Urho3D::UIElement::*)(FocusMode)>(&Urho3D::UIElement::SetFocusMode) ;
    /*Set drag and drop flags. BIND_AS_PROPERTY*//*(DragAndDropModeFlags mode)*/
    type["SetDragDropMode"] = static_cast<void (Urho3D::UIElement::*)(DragAndDropModeFlags)>(&Urho3D::UIElement::SetDragDropMode) ;
    /*Set default style file for later use by children elements. BIND_AS_PROPERTY*//*(XMLFile *style)*/
    type["SetDefaultStyle"] = static_cast<void (Urho3D::UIElement::*)(XMLFile *)>(&Urho3D::UIElement::SetDefaultStyle) ;
    /*Set layout mode only. BIND_AS_PROPERTY*//*(LayoutMode mode)*/
    type["SetLayoutMode"] = static_cast<void (Urho3D::UIElement::*)(LayoutMode)>(&Urho3D::UIElement::SetLayoutMode) ;
    /*Set layout spacing. BIND_AS_PROPERTY*//*(int spacing)*/
    type["SetLayoutSpacing"] = static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetLayoutSpacing) ;
    /*Set layout border. BIND_AS_PROPERTY*//*(const IntRect &border)*/
    type["SetLayoutBorder"] = static_cast<void (Urho3D::UIElement::*)(const  IntRect &)>(&Urho3D::UIElement::SetLayoutBorder) ;
    /*Set layout flex scale. BIND_AS_PROPERTY*//*(const Vector2 &scale)*/
    type["SetLayoutFlexScale"] = static_cast<void (Urho3D::UIElement::*)(const  Vector2 &)>(&Urho3D::UIElement::SetLayoutFlexScale) ;
    /*Set horizontal indentation. BIND_AS_PROPERTY*//*(int indent)*/
    type["SetIndent"] = static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetIndent) ;
    /*Set indent spacing (number of pixels per indentation level). BIND_AS_PROPERTY*//*(int indentSpacing)*/
    type["SetIndentSpacing"] = static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetIndentSpacing) ;
    /*Manually update layout. Should not be necessary in most cases, but is provided for completeness.*//*()*/
    type["UpdateLayout"] = static_cast<void (Urho3D::UIElement::*)()>(&Urho3D::UIElement::UpdateLayout) ;
    /*Disable automatic layout update. Should only be used if there are performance problems.*//*()*/
    type["DisableLayoutUpdate"] = static_cast<void (Urho3D::UIElement::*)()>(&Urho3D::UIElement::DisableLayoutUpdate) ;
    /*Enable automatic layout update.*//*()*/
    type["EnableLayoutUpdate"] = static_cast<void (Urho3D::UIElement::*)()>(&Urho3D::UIElement::EnableLayoutUpdate) ;
    /*Bring  UI element to front.*//*()*/
    type["BringToFront"] = static_cast<void (Urho3D::UIElement::*)()>(&Urho3D::UIElement::BringToFront) ;
    /*Add a child element.*//*(UIElement *element)*/
    type["AddChild"] = static_cast<void (Urho3D::UIElement::*)(UIElement *)>(&Urho3D::UIElement::AddChild) ;
    /*Insert a child element into a specific position in the child list.*//*(unsigned index, UIElement *element)*/
    type["InsertChild"] = static_cast<void (Urho3D::UIElement::*)(unsigned, UIElement *)>(&Urho3D::UIElement::InsertChild) ;
    /*Remove a child element at index.*//*(unsigned index)*/
    type["RemoveChildAtIndex"] = static_cast<void (Urho3D::UIElement::*)(unsigned)>(&Urho3D::UIElement::RemoveChildAtIndex) ;
    /*Remove all child elements.*//*()*/
    type["RemoveAllChildren"] = static_cast<void (Urho3D::UIElement::*)()>(&Urho3D::UIElement::RemoveAllChildren) ;
    /*Remove from the parent element. If no other shared pointer references exist, causes immediate deletion.*//*()*/
    type["Remove"] = static_cast<void (Urho3D::UIElement::*)()>(&Urho3D::UIElement::Remove) ;
    /*Find child index. Return M_MAX_UNSIGNED if not found.*//*(UIElement *element) const*/
    type["FindChild"] = static_cast<unsigned (Urho3D::UIElement::*)(UIElement *) const>(&Urho3D::UIElement::FindChild) ;
    /*Set a user variable.*//*(StringHash key, const Variant &value)*/
    type["SetVar"] = static_cast<void (Urho3D::UIElement::*)(StringHash, const  Variant &)>(&Urho3D::UIElement::SetVar) ;
    /*Mark as internally (programmatically) created. Used when an element composes itself out of child elements. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetInternal"] = static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetInternal) ;
    /*Set traversal mode for rendering. The default traversal mode is TM_BREADTH_FIRST for non-root element. Root element should be set to TM_DEPTH_FIRST to avoid artifacts during rendering. BIND_AS_PROPERTY*//*(TraversalMode traversalMode)*/
    type["SetTraversalMode"] = static_cast<void (Urho3D::UIElement::*)(TraversalMode)>(&Urho3D::UIElement::SetTraversalMode) ;
    /*Set element event sender flag. When child element is added or deleted, the event would be sent using  UIElement found in the parental chain having this flag set. If not set, the event is sent using  UI's root as per normal. BIND_AS_PROPERTY*//*(bool flag)*/
    type["SetElementEventSender"] = static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetElementEventSender) ;
    /*Set tags. Old tags are overwritten.*//*(const StringVector &tags)*/
    type["SetTags"] = static_cast<void (Urho3D::UIElement::*)(const  StringVector &)>(&Urho3D::UIElement::SetTags) ;
    /*Add a tag.*//*(const String &tag)*/
    type["AddTag"] = static_cast<void (Urho3D::UIElement::*)(const  String &)>(&Urho3D::UIElement::AddTag) ;
    /*Remove specific tag. Return true if existed.*//*(const String &tag)*/
    type["RemoveTag"] = static_cast<bool (Urho3D::UIElement::*)(const  String &)>(&Urho3D::UIElement::RemoveTag) ;
    /*Remove all tags.*//*()*/
    type["RemoveAllTags"] = static_cast<void (Urho3D::UIElement::*)()>(&Urho3D::UIElement::RemoveAllTags) ;
    /*Return name. BIND_AS_PROPERTY*//*() const*/
    type["GetName"] = static_cast<const String& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetName) ;
    /*Return position. BIND_AS_PROPERTY*//*() const*/
    type["GetPosition"] = static_cast<const IntVector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetPosition) ;
    /*Return size. BIND_AS_PROPERTY*//*() const*/
    type["GetSize"] = static_cast<const IntVector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetSize) ;
    /*Return width. BIND_AS_PROPERTY*//*() const*/
    type["GetWidth"] = static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetWidth) ;
    /*Return height. BIND_AS_PROPERTY*//*() const*/
    type["GetHeight"] = static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetHeight) ;
    /*Return minimum size. BIND_AS_PROPERTY*//*() const*/
    type["GetMinSize"] = static_cast<const IntVector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMinSize) ;
    /*Return minimum width. BIND_AS_PROPERTY*//*() const*/
    type["GetMinWidth"] = static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMinWidth) ;
    /*Return minimum height. BIND_AS_PROPERTY*//*() const*/
    type["GetMinHeight"] = static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMinHeight) ;
    /*Return maximum size. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxSize"] = static_cast<const IntVector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMaxSize) ;
    /*Return minimum width. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxWidth"] = static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMaxWidth) ;
    /*Return minimum height. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxHeight"] = static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMaxHeight) ;
    /*Return true if size is fixed. BIND_AS_PROPERTY*//*() const*/
    type["IsFixedSize"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsFixedSize) ;
    /*Return true if width is fixed. BIND_AS_PROPERTY*//*() const*/
    type["IsFixedWidth"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsFixedWidth) ;
    /*Return true if height is fixed. BIND_AS_PROPERTY*//*() const*/
    type["IsFixedHeight"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsFixedHeight) ;
    /*Return child element offset. BIND_AS_PROPERTY*//*() const*/
    type["GetChildOffset"] = static_cast<const IntVector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetChildOffset) ;
    /*Return horizontal alignment. If pivot has been adjusted to a custom horizontal setting, returns HA_CUSTOM. BIND_AS_PROPERTY*//*() const*/
    type["GetHorizontalAlignment"] = static_cast<HorizontalAlignment (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetHorizontalAlignment) ;
    /*Return vertical alignment. If pivot has been adjusted to a custom vertical setting, returns VA_CUSTOM. BIND_AS_PROPERTY*//*() const*/
    type["GetVerticalAlignment"] = static_cast<VerticalAlignment (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetVerticalAlignment) ;
    /*Return whether anchor positioning & sizing is enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetEnableAnchor"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetEnableAnchor) ;
    /*Return minimum anchor. BIND_AS_PROPERTY*//*() const*/
    type["GetMinAnchor"] = static_cast<const Vector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMinAnchor) ;
    /*Return maximum anchor. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxAnchor"] = static_cast<const Vector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMaxAnchor) ;
    /*BIND_AS_PROPERTY.*//*() const*/
    type["GetMinOffset"] = static_cast<const IntVector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMinOffset) ;
    /*BIND_AS_PROPERTY.*//*() const*/
    type["GetMaxOffset"] = static_cast<const IntVector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMaxOffset) ;
    /*Return pivot. BIND_AS_PROPERTY*//*() const*/
    type["GetPivot"] = static_cast<const Vector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetPivot) ;
    /*Return child element clipping border. BIND_AS_PROPERTY*//*() const*/
    type["GetClipBorder"] = static_cast<const IntRect& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetClipBorder) ;
    /*Return corner color. BIND_AS_ALIAS_get_colors*//*(Corner corner) const*/
    type["GetColor"] = static_cast<const Color& (Urho3D::UIElement::*)(Corner) const>(&Urho3D::UIElement::GetColor) ;
    /*Return priority. BIND_AS_PROPERTY*//*() const*/
    type["GetPriority"] = static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetPriority) ;
    /*Return opacity. BIND_AS_PROPERTY*//*() const*/
    type["GetOpacity"] = static_cast<float (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetOpacity) ;
    /*Return derived opacity (affected by parent elements). If UseDerivedOpacity is false, returns same as element's own opacity. BIND_AS_PROPERTY*//*() const*/
    type["GetDerivedOpacity"] = static_cast<float (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetDerivedOpacity) ;
    /*Return whether should be brought to front when focused. BIND_AS_PROPERTY*//*() const*/
    type["GetBringToFront"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetBringToFront) ;
    /*Return whether should be put to background when another element is focused. BIND_AS_PROPERTY*//*() const*/
    type["GetBringToBack"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetBringToBack) ;
    /*Return whether should clip child elements. BIND_AS_PROPERTY*//*() const*/
    type["GetClipChildren"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetClipChildren) ;
    /*Return whether should sort child elements according to priority. BIND_AS_PROPERTY*//*() const*/
    type["GetSortChildren"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetSortChildren) ;
    /*Return whether parent elements' opacity affects opacity. BIND_AS_PROPERTY*//*() const*/
    type["GetUseDerivedOpacity"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetUseDerivedOpacity) ;
    /*Return whether has focus. BIND_AS_ALIAS_get_focus*//*() const*/
    type["HasFocus"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::HasFocus) ;
    /*Return whether is a direct or indirect child of specified element.*//*(UIElement *element) const*/
    type["IsChildOf"] = static_cast<bool (Urho3D::UIElement::*)(UIElement *) const>(&Urho3D::UIElement::IsChildOf) ;
    /*Return whether reacts to input. BIND_AS_PROPERTY*//*() const*/
    type["IsEnabled"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsEnabled) ;
    /*Returns the element's last own enabled state. May be different than the value returned by IsEnabled when SetDeepEnabled has been used. BIND_AS_PROPERTY*//*() const*/
    type["IsEnabledSelf"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsEnabledSelf) ;
    /*Return whether value is editable through input. BIND_AS_PROPERTY*//*() const*/
    type["IsEditable"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsEditable) ;
    /*Return whether is selected. Actual meaning is element dependent. BIND_AS_PROPERTY*//*() const*/
    type["IsSelected"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsSelected) ;
    /*Return whether element itself should be visible. Elements can be also hidden due to the parent being not visible, use  IsVisibleEffective() to check. BIND_AS_PROPERTY*//*() const*/
    type["IsVisible"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsVisible) ;
    /*Return whether element is effectively visible (parent element chain is visible). BIND_AS_PROPERTY*//*() const*/
    type["IsVisibleEffective"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsVisibleEffective) ;
    /*Return whether the cursor is hovering on this element. BIND_AS_PROPERTY*//*() const*/
    type["IsHovering"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsHovering) ;
    /*Return whether is internally created. BIND_AS_PROPERTY*//*() const*/
    type["IsInternal"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsInternal) ;
    /*Return whether has different color in at least one corner. BIND_AS_ALIAS_get_colorGradient*//*() const*/
    type["HasColorGradient"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::HasColorGradient) ;
    /*Return focus mode. BIND_AS_PROPERTY*//*() const*/
    type["GetFocusMode"] = static_cast<FocusMode (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetFocusMode) ;
    /*Return drag and drop flags. BIND_AS_PROPERTY*//*() const*/
    type["GetDragDropMode"] = static_cast<DragAndDropModeFlags (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetDragDropMode) ;
    /*Return applied style name. Return an empty string when the applied style is an 'auto' style (i.e. style derived from instance's type). BIND_AS_ALIAS_get_style*//*() const*/
    type["GetAppliedStyle"] = static_cast<const String& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetAppliedStyle) ;
    /*Return layout mode. BIND_AS_PROPERTY*//*() const*/
    type["GetLayoutMode"] = static_cast<LayoutMode (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetLayoutMode) ;
    /*Return layout spacing. BIND_AS_PROPERTY*//*() const*/
    type["GetLayoutSpacing"] = static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetLayoutSpacing) ;
    /*Return layout border. BIND_AS_PROPERTY*//*() const*/
    type["GetLayoutBorder"] = static_cast<const IntRect& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetLayoutBorder) ;
    /*Return layout flex scale. BIND_AS_PROPERTY*//*() const*/
    type["GetLayoutFlexScale"] = static_cast<const Vector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetLayoutFlexScale) ;
    /*Return parent element. BIND_AS_PROPERTY*//*() const*/
    type["GetParent"] = [](Urho3D::UIElement& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetParent());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return root element. BIND_AS_PROPERTY*//*() const*/
    type["GetRoot"] = [](Urho3D::UIElement& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRoot());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return derived color. Only valid when no gradient.*//*() const*/
    type["GetDerivedColor"] = static_cast<const Color& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetDerivedColor) ;
    /*Return a user variable.*//*(const StringHash &key) const*/
    type["GetVar"] = static_cast<const Variant& (Urho3D::UIElement::*)(const  StringHash &) const>(&Urho3D::UIElement::GetVar) ;
    /*Return all user variables.*//*() const*/
    type["GetVars"] = static_cast<const VariantMap& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetVars) ;
    /*Return whether element is tagged by a specific tag.*//*(const String &tag) const*/
    type["HasTag"] = static_cast<bool (Urho3D::UIElement::*)(const  String &) const>(&Urho3D::UIElement::HasTag) ;
    /*Return all tags. BIND_AS_PROPERTY*//*() const*/
    type["GetTags"] = static_cast<const StringVector& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetTags) ;
    /*Return the drag button combo if this element is being dragged. BIND_AS_PROPERTY*//*() const*/
    type["GetDragButtonCombo"] = static_cast<MouseButtonFlags (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetDragButtonCombo) ;
    /*Return the number of buttons dragging this element. BIND_AS_PROPERTY*//*() const*/
    type["GetDragButtonCount"] = static_cast<unsigned (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetDragButtonCount) ;
    /*Return whether a point (either in element or screen coordinates) is inside the element.*//*(IntVector2 position, bool isScreen)*/
    type["IsInside"] = static_cast<bool (Urho3D::UIElement::*)(IntVector2, bool)>(&Urho3D::UIElement::IsInside) ;
    /*Return whether a point (either in element or screen coordinates) is inside the combined rect of the element and its children.*//*(IntVector2 position, bool isScreen)*/
    type["IsInsideCombined"] = static_cast<bool (Urho3D::UIElement::*)(IntVector2, bool)>(&Urho3D::UIElement::IsInsideCombined) ;
    /*Return combined screen coordinate rect of element and its children. BIND_AS_PROPERTY*//*()*/
    type["GetCombinedScreenRect"] = static_cast<IntRect (Urho3D::UIElement::*)()>(&Urho3D::UIElement::GetCombinedScreenRect) ;
    /*Sort child elements if sorting enabled and order dirty. Called by  UI.*//*()*/
    type["SortChildren"] = static_cast<void (Urho3D::UIElement::*)()>(&Urho3D::UIElement::SortChildren) ;
    /*Return maximum layout element size in the layout direction. Only valid after layout has been calculated. Used internally by  UI for optimizations.*//*() const*/
    type["GetLayoutElementMaxSize"] = static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetLayoutElementMaxSize) ;
    /*Return horizontal indentation. BIND_AS_PROPERTY*//*() const*/
    type["GetIndent"] = static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetIndent) ;
    /*Return indent spacing (number of pixels per indentation level). BIND_AS_PROPERTY*//*() const*/
    type["GetIndentSpacing"] = static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetIndentSpacing) ;
    /*Return indent width in pixels. BIND_AS_PROPERTY*//*() const*/
    type["GetIndentWidth"] = static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetIndentWidth) ;
    /*Set child offset.*//*(const IntVector2 &offset)*/
    type["SetChildOffset"] = static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::SetChildOffset) ;
    /*Set hovering state.*//*(bool enable)*/
    type["SetHovering"] = static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetHovering) ;
    /*Adjust scissor for rendering.*//*(IntRect &currentScissor)*/
    type["AdjustScissor"] = static_cast<void (Urho3D::UIElement::*)(IntRect &)>(&Urho3D::UIElement::AdjustScissor) ;
    /*Get  UI rendering batches with a specified offset. Also recurse to child elements.*//*(IntVector2 &offset, PODVector< UIBatch > &batches, PODVector< float > &vertexData, IntRect currentScissor)*/
    type["GetBatchesWithOffset"] = static_cast<void (Urho3D::UIElement::*)(IntVector2 &, PODVector<  UIBatch > &, PODVector< float > &, IntRect)>(&Urho3D::UIElement::GetBatchesWithOffset) ;
    /*Return color attribute. Uses just the top-left color.*//*() const*/
    type["GetColorAttr"] = static_cast<const Color& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetColorAttr) ;
    /*Return traversal mode for rendering. BIND_AS_PROPERTY*//*() const*/
    type["GetTraversalMode"] = static_cast<TraversalMode (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetTraversalMode) ;
    /*Return whether element should send child added / removed events by itself. If false, defers to parent element. BIND_AS_PROPERTY*//*() const*/
    type["IsElementEventSender"] = static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsElementEventSender) ;
    /*Get element which should send child added / removed events.*//*() const*/
    type["GetElementEventSender"] = [](Urho3D::UIElement& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetElementEventSender());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return effective minimum size, also considering layout. Used internally.*//*() const*/
    type["GetEffectiveMinSize"] = static_cast<IntVector2 (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetEffectiveMinSize) ;
    /*Set texture to which element will be rendered.*//*(Texture2D *texture)*/
    type["SetRenderTexture"] = static_cast<void (Urho3D::UIElement::*)(Texture2D *)>(&Urho3D::UIElement::SetRenderTexture) ;
    type["LoadXML"] = sol::overload(
        static_cast<bool (Urho3D::UIElement::*)(const  XMLElement &)>(&Urho3D::UIElement::LoadXML) ,
        static_cast<bool (Urho3D::UIElement::*)(const  XMLElement &, XMLFile *)>(&Urho3D::UIElement::LoadXML) ,
        static_cast<bool (Urho3D::UIElement::*)(Deserializer &)>(&Urho3D::UIElement::LoadXML)  );
    type["SaveXML"] = sol::overload(
        static_cast<bool (Urho3D::UIElement::*)(XMLElement &) const>(&Urho3D::UIElement::SaveXML) ,
        static_cast<bool (Urho3D::UIElement::*)(Serializer &, const  String &) const>(&Urho3D::UIElement::SaveXML) ,
        [](Urho3D::UIElement& self, Serializer & dest){ return self.SaveXML(dest); } );
    type["SetPosition"] = sol::overload(
        static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::SetPosition) ,
        static_cast<void (Urho3D::UIElement::*)(int, int)>(&Urho3D::UIElement::SetPosition)  );
    type["SetSize"] = sol::overload(
        static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::SetSize) ,
        static_cast<void (Urho3D::UIElement::*)(int, int)>(&Urho3D::UIElement::SetSize)  );
    type["SetMinSize"] = sol::overload(
        static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::SetMinSize) ,
        static_cast<void (Urho3D::UIElement::*)(int, int)>(&Urho3D::UIElement::SetMinSize)  );
    type["SetMaxSize"] = sol::overload(
        static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::SetMaxSize) ,
        static_cast<void (Urho3D::UIElement::*)(int, int)>(&Urho3D::UIElement::SetMaxSize)  );
    type["SetFixedSize"] = sol::overload(
        static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::SetFixedSize) ,
        static_cast<void (Urho3D::UIElement::*)(int, int)>(&Urho3D::UIElement::SetFixedSize)  );
    type["SetMinAnchor"] = sol::overload(
        static_cast<void (Urho3D::UIElement::*)(const  Vector2 &)>(&Urho3D::UIElement::SetMinAnchor) ,
        static_cast<void (Urho3D::UIElement::*)(float, float)>(&Urho3D::UIElement::SetMinAnchor)  );
    type["SetMaxAnchor"] = sol::overload(
        static_cast<void (Urho3D::UIElement::*)(const  Vector2 &)>(&Urho3D::UIElement::SetMaxAnchor) ,
        static_cast<void (Urho3D::UIElement::*)(float, float)>(&Urho3D::UIElement::SetMaxAnchor)  );
    type["SetPivot"] = sol::overload(
        static_cast<void (Urho3D::UIElement::*)(const  Vector2 &)>(&Urho3D::UIElement::SetPivot) ,
        static_cast<void (Urho3D::UIElement::*)(float, float)>(&Urho3D::UIElement::SetPivot)  );
    type["SetColor"] = sol::overload(
        static_cast<void (Urho3D::UIElement::*)(const  Color &)>(&Urho3D::UIElement::SetColor) ,
        static_cast<void (Urho3D::UIElement::*)(Corner, const  Color &)>(&Urho3D::UIElement::SetColor)  );
    type["SetStyle"] = sol::overload(
        static_cast<bool (Urho3D::UIElement::*)(const  String &, XMLFile *)>(&Urho3D::UIElement::SetStyle) ,
        [](Urho3D::UIElement& self, const  String & styleName){ return self.SetStyle(styleName); },
        static_cast<bool (Urho3D::UIElement::*)(const  XMLElement &)>(&Urho3D::UIElement::SetStyle)  );
    type["SetStyleAuto"] = sol::overload(
        static_cast<bool (Urho3D::UIElement::*)(XMLFile *)>(&Urho3D::UIElement::SetStyleAuto) ,
        [](Urho3D::UIElement& self){ return self.SetStyleAuto(); } );
    type["SetLayout"] = sol::overload(
        static_cast<void (Urho3D::UIElement::*)(LayoutMode, int, const  IntRect &)>(&Urho3D::UIElement::SetLayout) ,
        [](Urho3D::UIElement& self, LayoutMode mode, int spacing){ self.SetLayout(mode, spacing); },
        [](Urho3D::UIElement& self, LayoutMode mode){ self.SetLayout(mode); } );
    type["CreateChild"] = sol::overload(
        [](Urho3D::UIElement& self, StringHash type, const String &name=String::EMPTY, unsigned index=M_MAX_UNSIGNED, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateChild(type, name, index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::UIElement& self, StringHash type, const  String & name, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateChild(type, name));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::UIElement& self, StringHash type, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.CreateChild(type));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["RemoveChild"] = sol::overload(
        static_cast<void (Urho3D::UIElement::*)(UIElement *, unsigned)>(&Urho3D::UIElement::RemoveChild) ,
        [](Urho3D::UIElement& self, UIElement * element){ self.RemoveChild(element); } );
    type["SetParent"] = sol::overload(
        static_cast<void (Urho3D::UIElement::*)(UIElement *, unsigned)>(&Urho3D::UIElement::SetParent) ,
        [](Urho3D::UIElement& self, UIElement * parent){ self.SetParent(parent); } );
    type["AddTags"] = sol::overload(
        static_cast<void (Urho3D::UIElement::*)(const  String &, char)>(&Urho3D::UIElement::AddTags) ,
        [](Urho3D::UIElement& self, const  String & tags){ self.AddTags(tags); },
        static_cast<void (Urho3D::UIElement::*)(const  StringVector &)>(&Urho3D::UIElement::AddTags)  );
    type["GetDefaultStyle"] = sol::overload(
        [](Urho3D::UIElement& self, bool recursiveUp=true, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultStyle(recursiveUp));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::UIElement& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultStyle());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["GetNumChildren"] = sol::overload(
        static_cast<unsigned (Urho3D::UIElement::*)(bool) const>(&Urho3D::UIElement::GetNumChildren) ,
        [](Urho3D::UIElement& self){ return self.GetNumChildren(); } );
    type["GetChild"] = sol::overload(
        [](Urho3D::UIElement& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetChild(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::UIElement& self, const String &name, bool recursive=false, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetChild(name, recursive));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::UIElement& self, const  String & name, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetChild(name));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::UIElement& self, const StringHash &key, const Variant &value=Variant::EMPTY, bool recursive=false, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetChild(key, value, recursive));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::UIElement& self, const  StringHash & key, const  Variant & value, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetChild(key, value));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::UIElement& self, const  StringHash & key, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetChild(key));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["GetChildren"] = sol::overload(
        static_cast<const Vector<SharedPtr<UIElement>>& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetChildren) ,
        static_cast<void (Urho3D::UIElement::*)(PODVector<  UIElement * > &, bool) const>(&Urho3D::UIElement::GetChildren) ,
        [](Urho3D::UIElement& self, PODVector<  UIElement * > & dest){ self.GetChildren(dest); },
        static_cast<PODVector<UIElement*> (Urho3D::UIElement::*)(bool) const>(&Urho3D::UIElement::GetChildren)  );
    type["GetChildrenWithTag"] = sol::overload(
        static_cast<void (Urho3D::UIElement::*)(PODVector<  UIElement * > &, const  String &, bool) const>(&Urho3D::UIElement::GetChildrenWithTag) ,
        [](Urho3D::UIElement& self, PODVector<  UIElement * > & dest, const  String & tag){ self.GetChildrenWithTag(dest, tag); },
        static_cast<PODVector<UIElement*> (Urho3D::UIElement::*)(const  String &, bool) const>(&Urho3D::UIElement::GetChildrenWithTag) ,
        [](Urho3D::UIElement& self, const  String & tag){ return self.GetChildrenWithTag(tag); } );
    type["appliedStyle"] = sol::property(static_cast<const String& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetAppliedStyle) );
    type["bringToBack"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetBringToBack) 
        , static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetBringToBack) );
    type["bringToFront"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetBringToFront) 
        , static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetBringToFront) );
    type["child"] = sol::property([](Urho3D::UIElement& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetChild(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["childOffset"] = sol::property(static_cast<const IntVector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetChildOffset) );
    type["clipBorder"] = sol::property(static_cast<const IntRect& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetClipBorder) 
        , static_cast<void (Urho3D::UIElement::*)(const  IntRect &)>(&Urho3D::UIElement::SetClipBorder) );
    type["clipChildren"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetClipChildren) 
        , static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetClipChildren) );
    type["color"] = sol::property(static_cast<const Color& (Urho3D::UIElement::*)(Corner) const>(&Urho3D::UIElement::GetColor) 
        , static_cast<void (Urho3D::UIElement::*)(Corner, const  Color &)>(&Urho3D::UIElement::SetColor) );
    type["combinedScreenRect"] = sol::property(static_cast<IntRect (Urho3D::UIElement::*)()>(&Urho3D::UIElement::GetCombinedScreenRect) );
    type["defaultStyle"] = sol::property(static_cast<void (Urho3D::UIElement::*)(XMLFile *)>(&Urho3D::UIElement::SetDefaultStyle) );
    type["derivedOpacity"] = sol::property(static_cast<float (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetDerivedOpacity) );
    type["dragButtonCombo"] = sol::property(static_cast<MouseButtonFlags (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetDragButtonCombo) );
    type["dragButtonCount"] = sol::property(static_cast<unsigned (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetDragButtonCount) );
    type["dragDropMode"] = sol::property(static_cast<DragAndDropModeFlags (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetDragDropMode) 
        , static_cast<void (Urho3D::UIElement::*)(DragAndDropModeFlags)>(&Urho3D::UIElement::SetDragDropMode) );
    type["editable"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsEditable) 
        , static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetEditable) );
    type["elementEventSender"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsElementEventSender) 
        , static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetElementEventSender) );
    type["enableAnchor"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetEnableAnchor) 
        , static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetEnableAnchor) );
    type["enabled"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsEnabled) 
        , static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetEnabled) );
    type["enabledSelf"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsEnabledSelf) );
    type["fixedHeight"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsFixedHeight) );
    type["fixedSize"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsFixedSize) );
    type["fixedWidth"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsFixedWidth) );
    type["focus"] = sol::property(static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetFocus) );
    type["focusMode"] = sol::property(static_cast<FocusMode (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetFocusMode) 
        , static_cast<void (Urho3D::UIElement::*)(FocusMode)>(&Urho3D::UIElement::SetFocusMode) );
    type["hasColorGradient"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::HasColorGradient) );
    type["hasFocus"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::HasFocus) );
    type["height"] = sol::property(static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetHeight) 
        , static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetHeight) );
    type["horizontalAlignment"] = sol::property(static_cast<HorizontalAlignment (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetHorizontalAlignment) 
        , static_cast<void (Urho3D::UIElement::*)(HorizontalAlignment)>(&Urho3D::UIElement::SetHorizontalAlignment) );
    type["hovering"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsHovering) );
    type["indent"] = sol::property(static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetIndent) 
        , static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetIndent) );
    type["indentSpacing"] = sol::property(static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetIndentSpacing) 
        , static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetIndentSpacing) );
    type["indentWidth"] = sol::property(static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetIndentWidth) );
    type["internal"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsInternal) 
        , static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetInternal) );
    type["layoutBorder"] = sol::property(static_cast<const IntRect& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetLayoutBorder) 
        , static_cast<void (Urho3D::UIElement::*)(const  IntRect &)>(&Urho3D::UIElement::SetLayoutBorder) );
    type["layoutFlexScale"] = sol::property(static_cast<const Vector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetLayoutFlexScale) 
        , static_cast<void (Urho3D::UIElement::*)(const  Vector2 &)>(&Urho3D::UIElement::SetLayoutFlexScale) );
    type["layoutMode"] = sol::property(static_cast<LayoutMode (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetLayoutMode) 
        , static_cast<void (Urho3D::UIElement::*)(LayoutMode)>(&Urho3D::UIElement::SetLayoutMode) );
    type["layoutSpacing"] = sol::property(static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetLayoutSpacing) 
        , static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetLayoutSpacing) );
    type["maxAnchor"] = sol::property(static_cast<const Vector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMaxAnchor) 
        , static_cast<void (Urho3D::UIElement::*)(const  Vector2 &)>(&Urho3D::UIElement::SetMaxAnchor) );
    type["maxHeight"] = sol::property(static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMaxHeight) 
        , static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetMaxHeight) );
    type["maxOffset"] = sol::property(static_cast<const IntVector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMaxOffset) 
        , static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::SetMaxOffset) );
    type["maxSize"] = sol::property(static_cast<const IntVector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMaxSize) 
        , static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::SetMaxSize) );
    type["maxWidth"] = sol::property(static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMaxWidth) 
        , static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetMaxWidth) );
    type["minAnchor"] = sol::property(static_cast<const Vector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMinAnchor) 
        , static_cast<void (Urho3D::UIElement::*)(const  Vector2 &)>(&Urho3D::UIElement::SetMinAnchor) );
    type["minHeight"] = sol::property(static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMinHeight) 
        , static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetMinHeight) );
    type["minOffset"] = sol::property(static_cast<const IntVector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMinOffset) 
        , static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::SetMinOffset) );
    type["minSize"] = sol::property(static_cast<const IntVector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMinSize) 
        , static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::SetMinSize) );
    type["minWidth"] = sol::property(static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetMinWidth) 
        , static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetMinWidth) );
    type["name"] = sol::property(static_cast<const String& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetName) 
        , static_cast<void (Urho3D::UIElement::*)(const  String &)>(&Urho3D::UIElement::SetName) );
    type["opacity"] = sol::property(static_cast<float (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetOpacity) 
        , static_cast<void (Urho3D::UIElement::*)(float)>(&Urho3D::UIElement::SetOpacity) );
    type["parent"] = sol::property([](Urho3D::UIElement& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetParent());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["pivot"] = sol::property(static_cast<const Vector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetPivot) 
        , static_cast<void (Urho3D::UIElement::*)(const  Vector2 &)>(&Urho3D::UIElement::SetPivot) );
    type["position"] = sol::property(static_cast<const IntVector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetPosition) 
        , static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::SetPosition) );
    type["priority"] = sol::property(static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetPriority) 
        , static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetPriority) );
    type["root"] = sol::property([](Urho3D::UIElement& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRoot());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["screenPosition"] = sol::property(static_cast<const IntVector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetScreenPosition) );
    type["selected"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsSelected) 
        , static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetSelected) );
    type["size"] = sol::property(static_cast<const IntVector2& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetSize) 
        , static_cast<void (Urho3D::UIElement::*)(const  IntVector2 &)>(&Urho3D::UIElement::SetSize) );
    type["sortChildren"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetSortChildren) 
        , static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetSortChildren) );
    type["tags"] = sol::property(static_cast<const StringVector& (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetTags) );
    type["traversalMode"] = sol::property(static_cast<TraversalMode (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetTraversalMode) 
        , static_cast<void (Urho3D::UIElement::*)(TraversalMode)>(&Urho3D::UIElement::SetTraversalMode) );
    type["useDerivedOpacity"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetUseDerivedOpacity) 
        , static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetUseDerivedOpacity) );
    type["verticalAlignment"] = sol::property(static_cast<VerticalAlignment (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetVerticalAlignment) 
        , static_cast<void (Urho3D::UIElement::*)(VerticalAlignment)>(&Urho3D::UIElement::SetVerticalAlignment) );
    type["visible"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsVisible) 
        , static_cast<void (Urho3D::UIElement::*)(bool)>(&Urho3D::UIElement::SetVisible) );
    type["visibleEffective"] = sol::property(static_cast<bool (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::IsVisibleEffective) );
    type["width"] = sol::property(static_cast<int (Urho3D::UIElement::*)() const>(&Urho3D::UIElement::GetWidth) 
        , static_cast<void (Urho3D::UIElement::*)(int)>(&Urho3D::UIElement::SetWidth) );

}

