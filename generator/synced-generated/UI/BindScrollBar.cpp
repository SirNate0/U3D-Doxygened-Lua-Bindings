
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/ScrollBar.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/ScrollBar.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Input/InputConstants.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/Scene/Animatable.h>
#include <Urho3D/UI/Button.h>
#include <Urho3D/UI/Slider.h>
#include <Urho3D/UI/UIBatch.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ScrollBar(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ScrollBar::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ScrollBar::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ScrollBar>((Urho3D::ScrollBar*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ScrollBar>( "ScrollBar"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::BorderImage,Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ScrollBar>(context);
        });

// Members

    /*Apply attribute changes that can not be applied immediately.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::ScrollBar::*)()>(&Urho3D::ScrollBar::ApplyAttributes) ;
    /*React to resize.*//*(const IntVector2 &newSize, const IntVector2 &delta) override*/
    type["OnResize"] = static_cast<void (Urho3D::ScrollBar::*)(const  IntVector2 &, const  IntVector2 &)>(&Urho3D::ScrollBar::OnResize) ;
    /*React to editable status change.*//*() override*/
    type["OnSetEditable"] = static_cast<void (Urho3D::ScrollBar::*)()>(&Urho3D::ScrollBar::OnSetEditable) ;
    /*Set orientation type. BIND_AS_PROPERTY*//*(Orientation orientation)*/
    type["SetOrientation"] = static_cast<void (Urho3D::ScrollBar::*)(Orientation)>(&Urho3D::ScrollBar::SetOrientation) ;
    /*Set slider range maximum value (minimum value is always 0). BIND_AS_PROPERTY*//*(float range)*/
    type["SetRange"] = static_cast<void (Urho3D::ScrollBar::*)(float)>(&Urho3D::ScrollBar::SetRange) ;
    /*Set slider current value. BIND_AS_PROPERTY*//*(float value)*/
    type["SetValue"] = static_cast<void (Urho3D::ScrollBar::*)(float)>(&Urho3D::ScrollBar::SetValue) ;
    /*Change slider current value by a delta.*//*(float delta)*/
    type["ChangeValue"] = static_cast<void (Urho3D::ScrollBar::*)(float)>(&Urho3D::ScrollBar::ChangeValue) ;
    /*Set button scroll step. BIND_AS_PROPERTY*//*(float step)*/
    type["SetScrollStep"] = static_cast<void (Urho3D::ScrollBar::*)(float)>(&Urho3D::ScrollBar::SetScrollStep) ;
    /*Set button step factor, can be used to adjust the step for constant pixel size. BIND_AS_PROPERTY*//*(float factor)*/
    type["SetStepFactor"] = static_cast<void (Urho3D::ScrollBar::*)(float)>(&Urho3D::ScrollBar::SetStepFactor) ;
    /*Scroll back one step.*//*()*/
    type["StepBack"] = static_cast<void (Urho3D::ScrollBar::*)()>(&Urho3D::ScrollBar::StepBack) ;
    /*Scroll forward one step.*//*()*/
    type["StepForward"] = static_cast<void (Urho3D::ScrollBar::*)()>(&Urho3D::ScrollBar::StepForward) ;
    /*Return scrollbar orientation. BIND_AS_PROPERTY*//*() const*/
    type["GetOrientation"] = static_cast<Orientation (Urho3D::ScrollBar::*)() const>(&Urho3D::ScrollBar::GetOrientation) ;
    /*Return slider range. BIND_AS_PROPERTY*//*() const*/
    type["GetRange"] = static_cast<float (Urho3D::ScrollBar::*)() const>(&Urho3D::ScrollBar::GetRange) ;
    /*Return slider current value. BIND_AS_PROPERTY*//*() const*/
    type["GetValue"] = static_cast<float (Urho3D::ScrollBar::*)() const>(&Urho3D::ScrollBar::GetValue) ;
    /*Return button scroll step. BIND_AS_PROPERTY*//*() const*/
    type["GetScrollStep"] = static_cast<float (Urho3D::ScrollBar::*)() const>(&Urho3D::ScrollBar::GetScrollStep) ;
    /*Return button step factor. BIND_AS_PROPERTY*//*() const*/
    type["GetStepFactor"] = static_cast<float (Urho3D::ScrollBar::*)() const>(&Urho3D::ScrollBar::GetStepFactor) ;
    /*Return scroll step multiplied by factor. BIND_AS_PROPERTY*//*() const*/
    type["GetEffectiveScrollStep"] = static_cast<float (Urho3D::ScrollBar::*)() const>(&Urho3D::ScrollBar::GetEffectiveScrollStep) ;
    /*Return back button element. BIND_AS_PROPERTY*//*() const*/
    type["GetBackButton"] = [](Urho3D::ScrollBar& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetBackButton());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return forward button element. BIND_AS_PROPERTY*//*() const*/
    type["GetForwardButton"] = [](Urho3D::ScrollBar& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetForwardButton());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return slider element. BIND_AS_PROPERTY*//*() const*/
    type["GetSlider"] = [](Urho3D::ScrollBar& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSlider());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    type["backButton"] = sol::property([](Urho3D::ScrollBar& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetBackButton());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["effectiveScrollStep"] = sol::property(static_cast<float (Urho3D::ScrollBar::*)() const>(&Urho3D::ScrollBar::GetEffectiveScrollStep) );
    type["forwardButton"] = sol::property([](Urho3D::ScrollBar& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetForwardButton());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["orientation"] = sol::property(static_cast<Orientation (Urho3D::ScrollBar::*)() const>(&Urho3D::ScrollBar::GetOrientation) 
        , static_cast<void (Urho3D::ScrollBar::*)(Orientation)>(&Urho3D::ScrollBar::SetOrientation) );
    type["range"] = sol::property(static_cast<float (Urho3D::ScrollBar::*)() const>(&Urho3D::ScrollBar::GetRange) 
        , static_cast<void (Urho3D::ScrollBar::*)(float)>(&Urho3D::ScrollBar::SetRange) );
    type["scrollStep"] = sol::property(static_cast<float (Urho3D::ScrollBar::*)() const>(&Urho3D::ScrollBar::GetScrollStep) 
        , static_cast<void (Urho3D::ScrollBar::*)(float)>(&Urho3D::ScrollBar::SetScrollStep) );
    type["slider"] = sol::property([](Urho3D::ScrollBar& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSlider());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["stepFactor"] = sol::property(static_cast<float (Urho3D::ScrollBar::*)() const>(&Urho3D::ScrollBar::GetStepFactor) 
        , static_cast<void (Urho3D::ScrollBar::*)(float)>(&Urho3D::ScrollBar::SetStepFactor) );
    type["value"] = sol::property(static_cast<float (Urho3D::ScrollBar::*)() const>(&Urho3D::ScrollBar::GetValue) 
        , static_cast<void (Urho3D::ScrollBar::*)(float)>(&Urho3D::ScrollBar::SetValue) );

}

