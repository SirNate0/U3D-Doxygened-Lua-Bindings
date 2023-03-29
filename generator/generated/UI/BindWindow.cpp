
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/Window.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/Window.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/UI/Cursor.h>
#include <Urho3D/UI/UIBatch.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Window(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Window::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Window::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Window>((Urho3D::Window*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Window>( "Window"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::BorderImage,Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Window>(context);
        });

// Members

    /*Return  UI rendering batches.*//*(PODVector< UIBatch > &batches, PODVector< float > &vertexData, const IntRect &currentScissor) override*/
    type["GetBatches"] = static_cast<void (Urho3D::Window::*)(PODVector<  UIBatch > &, PODVector< float > &, const  IntRect &)>(&Urho3D::Window::GetBatches) ;
    /*React to mouse hover.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor) override*/
    type["OnHover"] = static_cast<void (Urho3D::Window::*)(const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::Window::OnHover) ;
    /*React to mouse drag begin.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor) override*/
    type["OnDragBegin"] = static_cast<void (Urho3D::Window::*)(const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::Window::OnDragBegin) ;
    /*React to mouse drag motion.*//*(const IntVector2 &position, const IntVector2 &screenPosition, const IntVector2 &deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor) override*/
    type["OnDragMove"] = static_cast<void (Urho3D::Window::*)(const  IntVector2 &, const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::Window::OnDragMove) ;
    /*React to mouse drag end.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags releaseButtons, Cursor *cursor) override*/
    type["OnDragEnd"] = static_cast<void (Urho3D::Window::*)(const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, MouseButtonFlags, Cursor *)>(&Urho3D::Window::OnDragEnd) ;
    /*React to mouse drag cancel.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags cancelButtons, Cursor *cursor) override*/
    type["OnDragCancel"] = static_cast<void (Urho3D::Window::*)(const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, MouseButtonFlags, Cursor *)>(&Urho3D::Window::OnDragCancel) ;
    /*Set whether can be moved. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetMovable"] = static_cast<void (Urho3D::Window::*)(bool)>(&Urho3D::Window::SetMovable) ;
    /*Set whether can be resized. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetResizable"] = static_cast<void (Urho3D::Window::*)(bool)>(&Urho3D::Window::SetResizable) ;
    /*Set whether resizing width is fixed. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetFixedWidthResizing"] = static_cast<void (Urho3D::Window::*)(bool)>(&Urho3D::Window::SetFixedWidthResizing) ;
    /*Set whether resizing height is fixed. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetFixedHeightResizing"] = static_cast<void (Urho3D::Window::*)(bool)>(&Urho3D::Window::SetFixedHeightResizing) ;
    /*Set resize area width at edges. BIND_AS_PROPERTY*//*(const IntRect &rect)*/
    type["SetResizeBorder"] = static_cast<void (Urho3D::Window::*)(const  IntRect &)>(&Urho3D::Window::SetResizeBorder) ;
    /*Set modal flag. When the modal flag is set, the focused window needs to be dismissed first to allow other  UI elements to gain focus. BIND_AS_PROPERTY*//*(bool modal)*/
    type["SetModal"] = static_cast<void (Urho3D::Window::*)(bool)>(&Urho3D::Window::SetModal) ;
    /*Set modal shade color. BIND_AS_PROPERTY*//*(const Color &color)*/
    type["SetModalShadeColor"] = static_cast<void (Urho3D::Window::*)(const  Color &)>(&Urho3D::Window::SetModalShadeColor) ;
    /*Set modal frame color. BIND_AS_PROPERTY*//*(const Color &color)*/
    type["SetModalFrameColor"] = static_cast<void (Urho3D::Window::*)(const  Color &)>(&Urho3D::Window::SetModalFrameColor) ;
    /*Set modal frame size. BIND_AS_PROPERTY*//*(const IntVector2 &size)*/
    type["SetModalFrameSize"] = static_cast<void (Urho3D::Window::*)(const  IntVector2 &)>(&Urho3D::Window::SetModalFrameSize) ;
    /*Set whether model window can be dismissed with the escape key. Default true. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetModalAutoDismiss"] = static_cast<void (Urho3D::Window::*)(bool)>(&Urho3D::Window::SetModalAutoDismiss) ;
    /*Return whether is movable. BIND_AS_PROPERTY*//*() const*/
    type["IsMovable"] = static_cast<bool (Urho3D::Window::*)() const>(&Urho3D::Window::IsMovable) ;
    /*Return whether is resizable. BIND_AS_PROPERTY*//*() const*/
    type["IsResizable"] = static_cast<bool (Urho3D::Window::*)() const>(&Urho3D::Window::IsResizable) ;
    /*Return whether is resizing width is fixed. BIND_AS_PROPERTY*//*() const*/
    type["GetFixedWidthResizing"] = static_cast<bool (Urho3D::Window::*)() const>(&Urho3D::Window::GetFixedWidthResizing) ;
    /*Return whether is resizing height is fixed. BIND_AS_PROPERTY*//*() const*/
    type["GetFixedHeightResizing"] = static_cast<bool (Urho3D::Window::*)() const>(&Urho3D::Window::GetFixedHeightResizing) ;
    /*Return resize area width at edges. BIND_AS_PROPERTY*//*() const*/
    type["GetResizeBorder"] = static_cast<const IntRect& (Urho3D::Window::*)() const>(&Urho3D::Window::GetResizeBorder) ;
    /*Return modal flag. BIND_AS_PROPERTY*//*() const*/
    type["IsModal"] = static_cast<bool (Urho3D::Window::*)() const>(&Urho3D::Window::IsModal) ;
    /*Get modal shade color. BIND_AS_PROPERTY*//*() const*/
    type["GetModalShadeColor"] = static_cast<const Color& (Urho3D::Window::*)() const>(&Urho3D::Window::GetModalShadeColor) ;
    /*Get modal frame color. BIND_AS_PROPERTY*//*() const*/
    type["GetModalFrameColor"] = static_cast<const Color& (Urho3D::Window::*)() const>(&Urho3D::Window::GetModalFrameColor) ;
    /*Get modal frame size. BIND_AS_PROPERTY*//*() const*/
    type["GetModalFrameSize"] = static_cast<const IntVector2& (Urho3D::Window::*)() const>(&Urho3D::Window::GetModalFrameSize) ;
    /*Return whether can be dismissed with escape key. BIND_AS_PROPERTY*//*() const*/
    type["GetModalAutoDismiss"] = static_cast<bool (Urho3D::Window::*)() const>(&Urho3D::Window::GetModalAutoDismiss) ;
    type["fixedHeightResizing"] = sol::property(static_cast<bool (Urho3D::Window::*)() const>(&Urho3D::Window::GetFixedHeightResizing) 
        , static_cast<void (Urho3D::Window::*)(bool)>(&Urho3D::Window::SetFixedHeightResizing) );
    type["fixedWidthResizing"] = sol::property(static_cast<bool (Urho3D::Window::*)() const>(&Urho3D::Window::GetFixedWidthResizing) 
        , static_cast<void (Urho3D::Window::*)(bool)>(&Urho3D::Window::SetFixedWidthResizing) );
    type["modal"] = sol::property(static_cast<bool (Urho3D::Window::*)() const>(&Urho3D::Window::IsModal) 
        , static_cast<void (Urho3D::Window::*)(bool)>(&Urho3D::Window::SetModal) );
    type["modalAutoDismiss"] = sol::property(static_cast<bool (Urho3D::Window::*)() const>(&Urho3D::Window::GetModalAutoDismiss) 
        , static_cast<void (Urho3D::Window::*)(bool)>(&Urho3D::Window::SetModalAutoDismiss) );
    type["modalFrameColor"] = sol::property(static_cast<const Color& (Urho3D::Window::*)() const>(&Urho3D::Window::GetModalFrameColor) 
        , static_cast<void (Urho3D::Window::*)(const  Color &)>(&Urho3D::Window::SetModalFrameColor) );
    type["modalFrameSize"] = sol::property(static_cast<const IntVector2& (Urho3D::Window::*)() const>(&Urho3D::Window::GetModalFrameSize) 
        , static_cast<void (Urho3D::Window::*)(const  IntVector2 &)>(&Urho3D::Window::SetModalFrameSize) );
    type["modalShadeColor"] = sol::property(static_cast<const Color& (Urho3D::Window::*)() const>(&Urho3D::Window::GetModalShadeColor) 
        , static_cast<void (Urho3D::Window::*)(const  Color &)>(&Urho3D::Window::SetModalShadeColor) );
    type["movable"] = sol::property(static_cast<bool (Urho3D::Window::*)() const>(&Urho3D::Window::IsMovable) 
        , static_cast<void (Urho3D::Window::*)(bool)>(&Urho3D::Window::SetMovable) );
    type["resizable"] = sol::property(static_cast<bool (Urho3D::Window::*)() const>(&Urho3D::Window::IsResizable) 
        , static_cast<void (Urho3D::Window::*)(bool)>(&Urho3D::Window::SetResizable) );
    type["resizeBorder"] = sol::property(static_cast<const IntRect& (Urho3D::Window::*)() const>(&Urho3D::Window::GetResizeBorder) 
        , static_cast<void (Urho3D::Window::*)(const  IntRect &)>(&Urho3D::Window::SetResizeBorder) );

}

