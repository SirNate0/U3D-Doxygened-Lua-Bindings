
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/MessageBox.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/MessageBox.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/UI/UIElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_MessageBox(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::MessageBox::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::MessageBox::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::MessageBox>((Urho3D::MessageBox*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::MessageBox>( "MessageBox"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context, const String &messageString=String::EMPTY, const String &titleString=String::EMPTY, XMLFile *layoutFile=nullptr, XMLFile *styleFile=nullptr) { 
            return Urho3D::MakeShared<Urho3D::MessageBox>(context, messageString, titleString, layoutFile, styleFile);
        },[](Context * context, const  String & messageString, const  String & titleString, XMLFile * layoutFile) { 
            return Urho3D::MakeShared<Urho3D::MessageBox>(context, messageString, titleString, layoutFile);
        },[](Context * context, const  String & messageString, const  String & titleString) { 
            return Urho3D::MakeShared<Urho3D::MessageBox>(context, messageString, titleString);
        },[](Context * context, const  String & messageString) { 
            return Urho3D::MakeShared<Urho3D::MessageBox>(context, messageString);
        },[](Context * context) { 
            return Urho3D::MakeShared<Urho3D::MessageBox>(context);
        });

// Members

    /*Set title text. No-ops if there is no title text element. BIND_AS_PROPERTY*//*(const String &text)*/
    type["SetTitle"] = static_cast<void (Urho3D::MessageBox::*)(const  String &)>(&Urho3D::MessageBox::SetTitle) ;
    /*Set message text. No-ops if there is no message text element. BIND_AS_PROPERTY*//*(const String &text)*/
    type["SetMessage"] = static_cast<void (Urho3D::MessageBox::*)(const  String &)>(&Urho3D::MessageBox::SetMessage) ;
    /*Return title text. Return empty string if there is no title text element. BIND_AS_PROPERTY*//*() const*/
    type["GetTitle"] = static_cast<const String& (Urho3D::MessageBox::*)() const>(&Urho3D::MessageBox::GetTitle) ;
    /*Return message text. Return empty string if there is no message text element. BIND_AS_PROPERTY*//*() const*/
    type["GetMessage"] = static_cast<const String& (Urho3D::MessageBox::*)() const>(&Urho3D::MessageBox::GetMessage) ;
    /*Return dialog window. BIND_AS_PROPERTY*//*() const*/
    type["GetWindow"] = [](Urho3D::MessageBox& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetWindow());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    type["message"] = sol::property(static_cast<const String& (Urho3D::MessageBox::*)() const>(&Urho3D::MessageBox::GetMessage) 
        , static_cast<void (Urho3D::MessageBox::*)(const  String &)>(&Urho3D::MessageBox::SetMessage) );
    type["title"] = sol::property(static_cast<const String& (Urho3D::MessageBox::*)() const>(&Urho3D::MessageBox::GetTitle) 
        , static_cast<void (Urho3D::MessageBox::*)(const  String &)>(&Urho3D::MessageBox::SetTitle) );
    type["window"] = sol::property([](Urho3D::MessageBox& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetWindow());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });

}

