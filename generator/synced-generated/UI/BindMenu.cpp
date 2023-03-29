
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/Menu.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/Menu.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/UI/Cursor.h>
#include <Urho3D/UI/UIElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Menu(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Menu::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Menu::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Menu>((Urho3D::Menu*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Menu>( "Menu"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Button,Urho3D::BorderImage,Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Menu>(context);
        });

// Members

    /*Perform  UI element update.*//*(float timeStep) override*/
    type["Update"] = static_cast<void (Urho3D::Menu::*)(float)>(&Urho3D::Menu::Update) ;
    /*React to mouse hover.*//*(const IntVector2 &position, const IntVector2 &screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor *cursor) override*/
    type["OnHover"] = static_cast<void (Urho3D::Menu::*)(const  IntVector2 &, const  IntVector2 &, MouseButtonFlags, QualifierFlags, Cursor *)>(&Urho3D::Menu::OnHover) ;
    /*React to the popup being shown.*//*()*/
    type["OnShowPopup"] = static_cast<void (Urho3D::Menu::*)()>(&Urho3D::Menu::OnShowPopup) ;
    /*React to the popup being hidden.*//*()*/
    type["OnHidePopup"] = static_cast<void (Urho3D::Menu::*)()>(&Urho3D::Menu::OnHidePopup) ;
    /*Set popup element to show on selection. BIND_AS_PROPERTY*//*(UIElement *popup)*/
    type["SetPopup"] = static_cast<void (Urho3D::Menu::*)(UIElement *)>(&Urho3D::Menu::SetPopup) ;
    /*Force the popup to show or hide. BIND_AS_PROPERTY*//*(bool enable)*/
    type["ShowPopup"] = static_cast<void (Urho3D::Menu::*)(bool)>(&Urho3D::Menu::ShowPopup) ;
    /*Set accelerator key (set zero key code to disable).*//*(int key, int qualifiers)*/
    type["SetAccelerator"] = static_cast<void (Urho3D::Menu::*)(int, int)>(&Urho3D::Menu::SetAccelerator) ;
    /*Return popup element. BIND_AS_PROPERTY*//*() const*/
    type["GetPopup"] = [](Urho3D::Menu& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetPopup());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return popup element offset. BIND_AS_PROPERTY*//*() const*/
    type["GetPopupOffset"] = static_cast<const IntVector2& (Urho3D::Menu::*)() const>(&Urho3D::Menu::GetPopupOffset) ;
    /*Return whether popup is open. BIND_AS_PROPERTY*//*() const*/
    type["GetShowPopup"] = static_cast<bool (Urho3D::Menu::*)() const>(&Urho3D::Menu::GetShowPopup) ;
    /*Return accelerator key code, 0 if disabled. BIND_AS_PROPERTY*//*() const*/
    type["GetAcceleratorKey"] = static_cast<int (Urho3D::Menu::*)() const>(&Urho3D::Menu::GetAcceleratorKey) ;
    /*Return accelerator qualifiers. BIND_AS_PROPERTY*//*() const*/
    type["GetAcceleratorQualifiers"] = static_cast<int (Urho3D::Menu::*)() const>(&Urho3D::Menu::GetAcceleratorQualifiers) ;
    type["LoadXML"] = sol::overload(
        static_cast<bool (Urho3D::Menu::*)(const  XMLElement &, XMLFile *)>(&Urho3D::Menu::LoadXML) ,
        static_cast<bool (Urho3D::UIElement::*)(const  XMLElement &)>(&Urho3D::UIElement::LoadXML) ,
        static_cast<bool (Urho3D::UIElement::*)(const  XMLElement &, XMLFile *)>(&Urho3D::UIElement::LoadXML) ,
        static_cast<bool (Urho3D::UIElement::*)(Deserializer &)>(&Urho3D::UIElement::LoadXML)  );
    type["SaveXML"] = sol::overload(
        static_cast<bool (Urho3D::Menu::*)(XMLElement &) const>(&Urho3D::Menu::SaveXML) ,
        static_cast<bool (Urho3D::UIElement::*)(XMLElement &) const>(&Urho3D::UIElement::SaveXML) ,
        static_cast<bool (Urho3D::UIElement::*)(Serializer &, const  String &) const>(&Urho3D::UIElement::SaveXML) ,
        [](Urho3D::Menu& self, Serializer & dest){ return self.SaveXML(dest); } );
    type["SetPopupOffset"] = sol::overload(
        static_cast<void (Urho3D::Menu::*)(const  IntVector2 &)>(&Urho3D::Menu::SetPopupOffset) ,
        static_cast<void (Urho3D::Menu::*)(int, int)>(&Urho3D::Menu::SetPopupOffset)  );
    type["acceleratorKey"] = sol::property(static_cast<int (Urho3D::Menu::*)() const>(&Urho3D::Menu::GetAcceleratorKey) );
    type["acceleratorQualifiers"] = sol::property(static_cast<int (Urho3D::Menu::*)() const>(&Urho3D::Menu::GetAcceleratorQualifiers) );
    type["popup"] = sol::property([](Urho3D::Menu& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetPopup());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Menu::*)(UIElement *)>(&Urho3D::Menu::SetPopup) );
    type["popupOffset"] = sol::property(static_cast<const IntVector2& (Urho3D::Menu::*)() const>(&Urho3D::Menu::GetPopupOffset) 
        , static_cast<void (Urho3D::Menu::*)(const  IntVector2 &)>(&Urho3D::Menu::SetPopupOffset) );
    type["showPopup"] = sol::property(static_cast<bool (Urho3D::Menu::*)() const>(&Urho3D::Menu::GetShowPopup) 
        , static_cast<void (Urho3D::Menu::*)(bool)>(&Urho3D::Menu::ShowPopup) );

}

