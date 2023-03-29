
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Engine/Console.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Engine/Console.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/UI/BorderImage.h>
#include <Urho3D/UI/Button.h>
#include <Urho3D/UI/LineEdit.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Console(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Console::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Console::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Console>((Urho3D::Console*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Console>( "Console"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Console>(context);
        });

// Members

    /*Set  UI elements' style from an XML file. BIND_AS_PROPERTY*//*(XMLFile *style)*/
    type["SetDefaultStyle"] = static_cast<void (Urho3D::Console::*)(XMLFile *)>(&Urho3D::Console::SetDefaultStyle) ;
    /*Show or hide. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetVisible"] = static_cast<void (Urho3D::Console::*)(bool)>(&Urho3D::Console::SetVisible) ;
    /*Toggle visibility.*//*()*/
    type["Toggle"] = static_cast<void (Urho3D::Console::*)()>(&Urho3D::Console::Toggle) ;
    /*Automatically set console to visible when receiving an error log message. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetAutoVisibleOnError"] = static_cast<void (Urho3D::Console::*)(bool)>(&Urho3D::Console::SetAutoVisibleOnError) ;
    /*Set the command interpreter. BIND_AS_PROPERTY*//*(const String &interpreter)*/
    type["SetCommandInterpreter"] = static_cast<void (Urho3D::Console::*)(const  String &)>(&Urho3D::Console::SetCommandInterpreter) ;
    /*Set number of buffered rows. BIND_AS_PROPERTY*//*(unsigned rows)*/
    type["SetNumBufferedRows"] = static_cast<void (Urho3D::Console::*)(unsigned)>(&Urho3D::Console::SetNumBufferedRows) ;
    /*Set number of displayed rows. BIND_AS_PROPERTY*//*(unsigned rows)*/
    type["SetNumRows"] = static_cast<void (Urho3D::Console::*)(unsigned)>(&Urho3D::Console::SetNumRows) ;
    /*Set command history maximum size, 0 disables history. BIND_AS_PROPERTY*//*(unsigned rows)*/
    type["SetNumHistoryRows"] = static_cast<void (Urho3D::Console::*)(unsigned)>(&Urho3D::Console::SetNumHistoryRows) ;
    /*Set whether to automatically focus the line edit when showing. Default true on desktops and false on mobile devices, as on mobiles it would pop up the screen keyboard. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetFocusOnShow"] = static_cast<void (Urho3D::Console::*)(bool)>(&Urho3D::Console::SetFocusOnShow) ;
    /*Add auto complete option.*//*(const String &option)*/
    type["AddAutoComplete"] = static_cast<void (Urho3D::Console::*)(const  String &)>(&Urho3D::Console::AddAutoComplete) ;
    /*Remove auto complete option.*//*(const String &option)*/
    type["RemoveAutoComplete"] = static_cast<void (Urho3D::Console::*)(const  String &)>(&Urho3D::Console::RemoveAutoComplete) ;
    /*Update elements to layout properly. Call this after manually adjusting the sub-elements.*//*()*/
    type["UpdateElements"] = static_cast<void (Urho3D::Console::*)()>(&Urho3D::Console::UpdateElements) ;
    /*Return the  UI style file. BIND_AS_PROPERTY*//*() const*/
    type["GetDefaultStyle"] = [](Urho3D::Console& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultStyle());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the background element. BIND_AS_PROPERTY*//*() const*/
    type["GetBackground"] = [](Urho3D::Console& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetBackground());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the line edit element. BIND_AS_PROPERTY*//*() const*/
    type["GetLineEdit"] = [](Urho3D::Console& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetLineEdit());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the close butoon element. BIND_AS_PROPERTY*//*() const*/
    type["GetCloseButton"] = [](Urho3D::Console& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCloseButton());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return whether is visible. BIND_AS_PROPERTY*//*() const*/
    type["IsVisible"] = static_cast<bool (Urho3D::Console::*)() const>(&Urho3D::Console::IsVisible) ;
    /*Return true when console is set to automatically visible when receiving an error log message. BIND_AS_PROPERTY*//*() const*/
    type["IsAutoVisibleOnError"] = static_cast<bool (Urho3D::Console::*)() const>(&Urho3D::Console::IsAutoVisibleOnError) ;
    /*Return the last used command interpreter. BIND_AS_PROPERTY*//*() const*/
    type["GetCommandInterpreter"] = static_cast<const String& (Urho3D::Console::*)() const>(&Urho3D::Console::GetCommandInterpreter) ;
    /*Return number of buffered rows. BIND_AS_PROPERTY*//*() const*/
    type["GetNumBufferedRows"] = static_cast<unsigned (Urho3D::Console::*)() const>(&Urho3D::Console::GetNumBufferedRows) ;
    /*Return number of displayed rows. BIND_AS_PROPERTY*//*() const*/
    type["GetNumRows"] = static_cast<unsigned (Urho3D::Console::*)() const>(&Urho3D::Console::GetNumRows) ;
    /*Copy selected rows to system clipboard.*//*() const*/
    type["CopySelectedRows"] = static_cast<void (Urho3D::Console::*)() const>(&Urho3D::Console::CopySelectedRows) ;
    /*Return history maximum size. BIND_AS_PROPERTY*//*() const*/
    type["GetNumHistoryRows"] = static_cast<unsigned (Urho3D::Console::*)() const>(&Urho3D::Console::GetNumHistoryRows) ;
    /*Return current history position. BIND_AS_PROPERTY*//*() const*/
    type["GetHistoryPosition"] = static_cast<unsigned (Urho3D::Console::*)() const>(&Urho3D::Console::GetHistoryPosition) ;
    /*Return history row at index. BIND_AS_PROPERTY*//*(unsigned index) const*/
    type["GetHistoryRow"] = static_cast<const String& (Urho3D::Console::*)(unsigned) const>(&Urho3D::Console::GetHistoryRow) ;
    /*Return whether automatically focuses the line edit when showing. BIND_AS_PROPERTY*//*() const*/
    type["GetFocusOnShow"] = static_cast<bool (Urho3D::Console::*)() const>(&Urho3D::Console::GetFocusOnShow) ;
    type["autoVisibleOnError"] = sol::property(static_cast<bool (Urho3D::Console::*)() const>(&Urho3D::Console::IsAutoVisibleOnError) 
        , static_cast<void (Urho3D::Console::*)(bool)>(&Urho3D::Console::SetAutoVisibleOnError) );
    type["background"] = sol::property([](Urho3D::Console& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetBackground());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["closeButton"] = sol::property([](Urho3D::Console& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCloseButton());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["commandInterpreter"] = sol::property(static_cast<const String& (Urho3D::Console::*)() const>(&Urho3D::Console::GetCommandInterpreter) 
        , static_cast<void (Urho3D::Console::*)(const  String &)>(&Urho3D::Console::SetCommandInterpreter) );
    type["defaultStyle"] = sol::property([](Urho3D::Console& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultStyle());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Console::*)(XMLFile *)>(&Urho3D::Console::SetDefaultStyle) );
    type["focusOnShow"] = sol::property(static_cast<bool (Urho3D::Console::*)() const>(&Urho3D::Console::GetFocusOnShow) 
        , static_cast<void (Urho3D::Console::*)(bool)>(&Urho3D::Console::SetFocusOnShow) );
    type["historyPosition"] = sol::property(static_cast<unsigned (Urho3D::Console::*)() const>(&Urho3D::Console::GetHistoryPosition) );
    type["historyRow"] = sol::property(static_cast<const String& (Urho3D::Console::*)(unsigned) const>(&Urho3D::Console::GetHistoryRow) );
    type["lineEdit"] = sol::property([](Urho3D::Console& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetLineEdit());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["numBufferedRows"] = sol::property(static_cast<unsigned (Urho3D::Console::*)() const>(&Urho3D::Console::GetNumBufferedRows) 
        , static_cast<void (Urho3D::Console::*)(unsigned)>(&Urho3D::Console::SetNumBufferedRows) );
    type["numHistoryRows"] = sol::property(static_cast<unsigned (Urho3D::Console::*)() const>(&Urho3D::Console::GetNumHistoryRows) 
        , static_cast<void (Urho3D::Console::*)(unsigned)>(&Urho3D::Console::SetNumHistoryRows) );
    type["numRows"] = sol::property(static_cast<unsigned (Urho3D::Console::*)() const>(&Urho3D::Console::GetNumRows) 
        , static_cast<void (Urho3D::Console::*)(unsigned)>(&Urho3D::Console::SetNumRows) );
    type["visible"] = sol::property(static_cast<bool (Urho3D::Console::*)() const>(&Urho3D::Console::IsVisible) 
        , static_cast<void (Urho3D::Console::*)(bool)>(&Urho3D::Console::SetVisible) );

}

