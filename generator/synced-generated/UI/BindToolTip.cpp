
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/ToolTip.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/ToolTip.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/UI/UIElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ToolTip(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ToolTip::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ToolTip::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ToolTip>((Urho3D::ToolTip*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ToolTip>( "ToolTip"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ToolTip>(context);
        });

// Members

    /*Perform  UI element update.*//*(float timeStep) override*/
    type["Update"] = static_cast<void (Urho3D::ToolTip::*)(float)>(&Urho3D::ToolTip::Update) ;
    /*Hide tooltip if visible and reset parentage.*//*()*/
    type["Reset"] = static_cast<void (Urho3D::ToolTip::*)()>(&Urho3D::ToolTip::Reset) ;
    /*Add an alternative hover target.*//*(UIElement *target)*/
    type["AddAltTarget"] = static_cast<void (Urho3D::ToolTip::*)(UIElement *)>(&Urho3D::ToolTip::AddAltTarget) ;
    /*Set the delay in seconds until the tooltip shows once hovering. Set zero to use the default from the  UI subsystem. BIND_AS_PROPERTY*//*(float delay)*/
    type["SetDelay"] = static_cast<void (Urho3D::ToolTip::*)(float)>(&Urho3D::ToolTip::SetDelay) ;
    /*Return the delay in seconds until the tooltip shows once hovering. BIND_AS_PROPERTY*//*() const*/
    type["GetDelay"] = static_cast<float (Urho3D::ToolTip::*)() const>(&Urho3D::ToolTip::GetDelay) ;
    type["delay"] = sol::property(static_cast<float (Urho3D::ToolTip::*)() const>(&Urho3D::ToolTip::GetDelay) 
        , static_cast<void (Urho3D::ToolTip::*)(float)>(&Urho3D::ToolTip::SetDelay) );

}

