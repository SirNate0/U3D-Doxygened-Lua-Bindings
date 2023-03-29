
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/CheckBox.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/CheckBox.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/UI/Cursor.h>
#include <Urho3D/UI/UIBatch.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CheckBox(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::CheckBox::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::CheckBox::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::CheckBox>((Urho3D::CheckBox*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::CheckBox>( "CheckBox"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::BorderImage,Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::CheckBox>(context);
        });

// Members

    /*Return  UI rendering batches.*//*(PODVector< UIBatch > &batches, PODVector< float > &vertexData, const IntRect &currentScissor) override*/
    type["GetBatches"] = static_cast<void (Urho3D::CheckBox::*)(PODVector<  UIBatch > &, PODVector< float > &, const  IntRect &)>(&Urho3D::CheckBox::GetBatches) ;
    /*React to mouse click begin.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor) override*/
    type["OnClickBegin"] = static_cast<void (Urho3D::CheckBox::*)(const  IntVector2 &, const  IntVector2 &, MouseButton, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::CheckBox::OnClickBegin) ;
    /*React to a key press.*//*(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override*/
    type["OnKey"] = static_cast<void (Urho3D::CheckBox::*)(Key, MouseButtonFlags, QualifierFlags)>(&Urho3D::CheckBox::OnKey) ;
    /*Set checked state. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetChecked"] = static_cast<void (Urho3D::CheckBox::*)(bool)>(&Urho3D::CheckBox::SetChecked) ;
    /*Return whether is checked. BIND_AS_PROPERTY*//*() const*/
    type["IsChecked"] = static_cast<bool (Urho3D::CheckBox::*)() const>(&Urho3D::CheckBox::IsChecked) ;
    /*Return checked image offset. BIND_AS_PROPERTY*//*() const*/
    type["GetCheckedOffset"] = static_cast<const IntVector2& (Urho3D::CheckBox::*)() const>(&Urho3D::CheckBox::GetCheckedOffset) ;
    type["SetCheckedOffset"] = sol::overload(
        static_cast<void (Urho3D::CheckBox::*)(const  IntVector2 &)>(&Urho3D::CheckBox::SetCheckedOffset) ,
        static_cast<void (Urho3D::CheckBox::*)(int, int)>(&Urho3D::CheckBox::SetCheckedOffset)  );
    type["checked"] = sol::property(static_cast<bool (Urho3D::CheckBox::*)() const>(&Urho3D::CheckBox::IsChecked) 
        , static_cast<void (Urho3D::CheckBox::*)(bool)>(&Urho3D::CheckBox::SetChecked) );
    type["checkedOffset"] = sol::property(static_cast<const IntVector2& (Urho3D::CheckBox::*)() const>(&Urho3D::CheckBox::GetCheckedOffset) 
        , static_cast<void (Urho3D::CheckBox::*)(const  IntVector2 &)>(&Urho3D::CheckBox::SetCheckedOffset) );

}

