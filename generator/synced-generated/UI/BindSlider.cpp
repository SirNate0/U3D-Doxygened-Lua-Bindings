
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/Slider.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/Slider.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Input/InputConstants.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/Scene/Animatable.h>
#include <Urho3D/UI/BorderImage.h>
#include <Urho3D/UI/Cursor.h>
#include <Urho3D/UI/UIBatch.h>
#include <Urho3D/UI/UIElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Slider(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Slider::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Slider::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Slider>((Urho3D::Slider*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Slider>( "Slider"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::BorderImage,Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Slider>(context);
        });

// Members

    /*Perform  UI element update.*//*(float timeStep) override*/
    type["Update"] = static_cast<void (Urho3D::Slider::*)(float)>(&Urho3D::Slider::Update) ;
    /*React to mouse hover.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor) override*/
    type["OnHover"] = static_cast<void (Urho3D::Slider::*)(const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::Slider::OnHover) ;
    /*React to mouse click begin.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor) override*/
    type["OnClickBegin"] = static_cast<void (Urho3D::Slider::*)(const  IntVector2 &, const  IntVector2 &, MouseButton, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::Slider::OnClickBegin) ;
    /*React to mouse click end.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor, UIElement *beginElement) override*/
    type["OnClickEnd"] = static_cast<void (Urho3D::Slider::*)(const  IntVector2 &, const  IntVector2 &, MouseButton, MouseButtonFlags, QualifierFlags, Cursor *, UIElement *)>(&Urho3D::Slider::OnClickEnd) ;
    /*React to mouse drag begin.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor) override*/
    type["OnDragBegin"] = static_cast<void (Urho3D::Slider::*)(const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::Slider::OnDragBegin) ;
    /*React to mouse drag motion.*//*(const IntVector2 &position, const IntVector2 &screenPosition, const IntVector2 &deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor) override*/
    type["OnDragMove"] = static_cast<void (Urho3D::Slider::*)(const  IntVector2 &, const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::Slider::OnDragMove) ;
    /*React to mouse drag end.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags releaseButtons, Cursor *cursor) override*/
    type["OnDragEnd"] = static_cast<void (Urho3D::Slider::*)(const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, MouseButtonFlags, Cursor *)>(&Urho3D::Slider::OnDragEnd) ;
    /*React to resize.*//*(const IntVector2 &newSize, const IntVector2 &delta) override*/
    type["OnResize"] = static_cast<void (Urho3D::Slider::*)(const  IntVector2 &, const  IntVector2 &)>(&Urho3D::Slider::OnResize) ;
    /*Set orientation type. BIND_AS_PROPERTY*//*(Orientation orientation)*/
    type["SetOrientation"] = static_cast<void (Urho3D::Slider::*)(Orientation)>(&Urho3D::Slider::SetOrientation) ;
    /*Set slider range maximum value (minimum value is always 0). BIND_AS_PROPERTY*//*(float range)*/
    type["SetRange"] = static_cast<void (Urho3D::Slider::*)(float)>(&Urho3D::Slider::SetRange) ;
    /*Set slider current value. BIND_AS_PROPERTY*//*(float value)*/
    type["SetValue"] = static_cast<void (Urho3D::Slider::*)(float)>(&Urho3D::Slider::SetValue) ;
    /*Change value by a delta.*//*(float delta)*/
    type["ChangeValue"] = static_cast<void (Urho3D::Slider::*)(float)>(&Urho3D::Slider::ChangeValue) ;
    /*Set paging minimum repeat rate (number of events per second). BIND_AS_PROPERTY*//*(float rate)*/
    type["SetRepeatRate"] = static_cast<void (Urho3D::Slider::*)(float)>(&Urho3D::Slider::SetRepeatRate) ;
    /*Return orientation type. BIND_AS_PROPERTY*//*() const*/
    type["GetOrientation"] = static_cast<Orientation (Urho3D::Slider::*)() const>(&Urho3D::Slider::GetOrientation) ;
    /*Return slider range. BIND_AS_PROPERTY*//*() const*/
    type["GetRange"] = static_cast<float (Urho3D::Slider::*)() const>(&Urho3D::Slider::GetRange) ;
    /*Return slider current value. BIND_AS_PROPERTY*//*() const*/
    type["GetValue"] = static_cast<float (Urho3D::Slider::*)() const>(&Urho3D::Slider::GetValue) ;
    /*Return knob element. BIND_AS_PROPERTY*//*() const*/
    type["GetKnob"] = [](Urho3D::Slider& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetKnob());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return paging minimum repeat rate (number of events per second). BIND_AS_PROPERTY*//*() const*/
    type["GetRepeatRate"] = static_cast<float (Urho3D::Slider::*)() const>(&Urho3D::Slider::GetRepeatRate) ;
    type["knob"] = sol::property([](Urho3D::Slider& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetKnob());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["orientation"] = sol::property(static_cast<Orientation (Urho3D::Slider::*)() const>(&Urho3D::Slider::GetOrientation) 
        , static_cast<void (Urho3D::Slider::*)(Orientation)>(&Urho3D::Slider::SetOrientation) );
    type["range"] = sol::property(static_cast<float (Urho3D::Slider::*)() const>(&Urho3D::Slider::GetRange) 
        , static_cast<void (Urho3D::Slider::*)(float)>(&Urho3D::Slider::SetRange) );
    type["repeatRate"] = sol::property(static_cast<float (Urho3D::Slider::*)() const>(&Urho3D::Slider::GetRepeatRate) 
        , static_cast<void (Urho3D::Slider::*)(float)>(&Urho3D::Slider::SetRepeatRate) );
    type["value"] = sol::property(static_cast<float (Urho3D::Slider::*)() const>(&Urho3D::Slider::GetValue) 
        , static_cast<void (Urho3D::Slider::*)(float)>(&Urho3D::Slider::SetValue) );

}

