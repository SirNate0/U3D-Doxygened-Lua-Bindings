
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/ProgressBar.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/ProgressBar.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Input/InputConstants.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/Scene/Animatable.h>
#include <Urho3D/UI/BorderImage.h>
#include <Urho3D/UI/UIBatch.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ProgressBar(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ProgressBar::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ProgressBar::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ProgressBar>((Urho3D::ProgressBar*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ProgressBar>( "ProgressBar"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::BorderImage,Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ProgressBar>(context);
        });

// Members

    /*React to resize.*//*(const IntVector2 &newSize, const IntVector2 &delta) override*/
    type["OnResize"] = static_cast<void (Urho3D::ProgressBar::*)(const  IntVector2 &, const  IntVector2 &)>(&Urho3D::ProgressBar::OnResize) ;
    /*Set orientation type. BIND_AS_PROPERTY*//*(Orientation orientation)*/
    type["SetOrientation"] = static_cast<void (Urho3D::ProgressBar::*)(Orientation)>(&Urho3D::ProgressBar::SetOrientation) ;
    /*Set  ProgressBar range maximum value (minimum value is always 0). BIND_AS_PROPERTY*//*(float range)*/
    type["SetRange"] = static_cast<void (Urho3D::ProgressBar::*)(float)>(&Urho3D::ProgressBar::SetRange) ;
    /*Set  ProgressBar current value. BIND_AS_PROPERTY*//*(float value)*/
    type["SetValue"] = static_cast<void (Urho3D::ProgressBar::*)(float)>(&Urho3D::ProgressBar::SetValue) ;
    /*Change value by a delta.*//*(float delta)*/
    type["ChangeValue"] = static_cast<void (Urho3D::ProgressBar::*)(float)>(&Urho3D::ProgressBar::ChangeValue) ;
    /*Return orientation type. BIND_AS_PROPERTY*//*() const*/
    type["GetOrientation"] = static_cast<Orientation (Urho3D::ProgressBar::*)() const>(&Urho3D::ProgressBar::GetOrientation) ;
    /*Return  ProgressBar range. BIND_AS_PROPERTY*//*() const*/
    type["GetRange"] = static_cast<float (Urho3D::ProgressBar::*)() const>(&Urho3D::ProgressBar::GetRange) ;
    /*Return  ProgressBar current value. BIND_AS_PROPERTY*//*() const*/
    type["GetValue"] = static_cast<float (Urho3D::ProgressBar::*)() const>(&Urho3D::ProgressBar::GetValue) ;
    /*Return knob element. BIND_AS_PROPERTY*//*() const*/
    type["GetKnob"] = [](Urho3D::ProgressBar& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetKnob());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Sets the loading percent style.*//*(const String &style)*/
    type["SetLoadingPercentStyle"] = static_cast<void (Urho3D::ProgressBar::*)(const  String &)>(&Urho3D::ProgressBar::SetLoadingPercentStyle) ;
    /*Returns the loading percent style.*//*() const*/
    type["GetLoadingPercentStyle"] = static_cast<const String& (Urho3D::ProgressBar::*)() const>(&Urho3D::ProgressBar::GetLoadingPercentStyle) ;
    /*Sets the flag to display the percent text. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetShowPercentText"] = static_cast<void (Urho3D::ProgressBar::*)(bool)>(&Urho3D::ProgressBar::SetShowPercentText) ;
    /*Returns the flag to display the percent text. BIND_AS_PROPERTY*//*() const*/
    type["GetShowPercentText"] = static_cast<bool (Urho3D::ProgressBar::*)() const>(&Urho3D::ProgressBar::GetShowPercentText) ;
    type["knob"] = sol::property([](Urho3D::ProgressBar& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetKnob());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["orientation"] = sol::property(static_cast<Orientation (Urho3D::ProgressBar::*)() const>(&Urho3D::ProgressBar::GetOrientation) 
        , static_cast<void (Urho3D::ProgressBar::*)(Orientation)>(&Urho3D::ProgressBar::SetOrientation) );
    type["range"] = sol::property(static_cast<float (Urho3D::ProgressBar::*)() const>(&Urho3D::ProgressBar::GetRange) 
        , static_cast<void (Urho3D::ProgressBar::*)(float)>(&Urho3D::ProgressBar::SetRange) );
    type["showPercentText"] = sol::property(static_cast<bool (Urho3D::ProgressBar::*)() const>(&Urho3D::ProgressBar::GetShowPercentText) 
        , static_cast<void (Urho3D::ProgressBar::*)(bool)>(&Urho3D::ProgressBar::SetShowPercentText) );
    type["value"] = sol::property(static_cast<float (Urho3D::ProgressBar::*)() const>(&Urho3D::ProgressBar::GetValue) 
        , static_cast<void (Urho3D::ProgressBar::*)(float)>(&Urho3D::ProgressBar::SetValue) );

}

