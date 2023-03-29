
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/UISelectable.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/UISelectable.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/UI/UIBatch.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_UISelectable(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::UISelectable::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::UISelectable::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::UISelectable>((Urho3D::UISelectable*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::UISelectable>( "UISelectable"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    /*NONE*/

// Members

    /*Return  UI rendering batches.*//*(PODVector< UIBatch > &batches, PODVector< float > &vertexData, const IntRect &currentScissor) override*/
    type["GetBatches"] = static_cast<void (Urho3D::UISelectable::*)(PODVector<  UIBatch > &, PODVector< float > &, const  IntRect &)>(&Urho3D::UISelectable::GetBatches) ;
    /*Set selection background color.  Color with 0 alpha (default) disables. BIND_AS_PROPERTY*//*(const Color &color)*/
    type["SetSelectionColor"] = static_cast<void (Urho3D::UISelectable::*)(const  Color &)>(&Urho3D::UISelectable::SetSelectionColor) ;
    /*Set hover background color.  Color with 0 alpha (default) disables. BIND_AS_PROPERTY*//*(const Color &color)*/
    type["SetHoverColor"] = static_cast<void (Urho3D::UISelectable::*)(const  Color &)>(&Urho3D::UISelectable::SetHoverColor) ;
    /*Return selection background color. BIND_AS_PROPERTY*//*() const*/
    type["GetSelectionColor"] = static_cast<const Color& (Urho3D::UISelectable::*)() const>(&Urho3D::UISelectable::GetSelectionColor) ;
    /*Return hover background color. BIND_AS_PROPERTY*//*() const*/
    type["GetHoverColor"] = static_cast<const Color& (Urho3D::UISelectable::*)() const>(&Urho3D::UISelectable::GetHoverColor) ;
    /*Construct.*//*(Context *context)*/
# if 0 // SKIPPED
    type["UIElement"] = static_cast< (Urho3D::UIElement::*)(Context *)>(&Urho3D::UIElement::UIElement) ;
# endif
    type["hoverColor"] = sol::property(static_cast<const Color& (Urho3D::UISelectable::*)() const>(&Urho3D::UISelectable::GetHoverColor) 
        , static_cast<void (Urho3D::UISelectable::*)(const  Color &)>(&Urho3D::UISelectable::SetHoverColor) );
    type["selectionColor"] = sol::property(static_cast<const Color& (Urho3D::UISelectable::*)() const>(&Urho3D::UISelectable::GetSelectionColor) 
        , static_cast<void (Urho3D::UISelectable::*)(const  Color &)>(&Urho3D::UISelectable::SetSelectionColor) );

}

