
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/FileSelector.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/FileSelector.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/UI/Button.h>
#include <Urho3D/UI/DropDownList.h>
#include <Urho3D/UI/LineEdit.h>
#include <Urho3D/UI/ListView.h>
#include <Urho3D/UI/Text.h>
#include <Urho3D/UI/Window.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_FileSelector(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::FileSelector::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::FileSelector::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::FileSelector>((Urho3D::FileSelector*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::FileSelector>( "FileSelector"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::FileSelector>(context);
        });

// Members

    /*Set fileselector  UI style. BIND_AS_PROPERTY*//*(XMLFile *style)*/
    type["SetDefaultStyle"] = static_cast<void (Urho3D::FileSelector::*)(XMLFile *)>(&Urho3D::FileSelector::SetDefaultStyle) ;
    /*Set title text. BIND_AS_PROPERTY*//*(const String &text)*/
    type["SetTitle"] = static_cast<void (Urho3D::FileSelector::*)(const  String &)>(&Urho3D::FileSelector::SetTitle) ;
    /*Set button texts.*//*(const String &okText, const String &cancelText)*/
    type["SetButtonTexts"] = static_cast<void (Urho3D::FileSelector::*)(const  String &, const  String &)>(&Urho3D::FileSelector::SetButtonTexts) ;
    /*Set current path. BIND_AS_PROPERTY*//*(const String &path)*/
    type["SetPath"] = static_cast<void (Urho3D::FileSelector::*)(const  String &)>(&Urho3D::FileSelector::SetPath) ;
    /*Set current filename. BIND_AS_PROPERTY*//*(const String &fileName)*/
    type["SetFileName"] = static_cast<void (Urho3D::FileSelector::*)(const  String &)>(&Urho3D::FileSelector::SetFileName) ;
    /*Set filters.*//*(const Vector< String > &filters, unsigned defaultIndex)*/
    type["SetFilters"] = static_cast<void (Urho3D::FileSelector::*)(const  Vector<  String > &, unsigned)>(&Urho3D::FileSelector::SetFilters) ;
    /*Set directory selection mode. Default false. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetDirectoryMode"] = static_cast<void (Urho3D::FileSelector::*)(bool)>(&Urho3D::FileSelector::SetDirectoryMode) ;
    /*Update elements to layout properly. Call this after manually adjusting the sub-elements.*//*()*/
    type["UpdateElements"] = static_cast<void (Urho3D::FileSelector::*)()>(&Urho3D::FileSelector::UpdateElements) ;
    /*Return the  UI style file. BIND_AS_PROPERTY*//*() const*/
    type["GetDefaultStyle"] = [](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultStyle());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return fileselector window. BIND_AS_PROPERTY*//*() const*/
    type["GetWindow"] = [](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetWindow());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return window title text element. BIND_AS_PROPERTY*//*() const*/
    type["GetTitleText"] = [](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTitleText());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return file list. BIND_AS_PROPERTY*//*() const*/
    type["GetFileList"] = [](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFileList());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return path editor. BIND_AS_PROPERTY*//*() const*/
    type["GetPathEdit"] = [](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetPathEdit());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return filename editor. BIND_AS_PROPERTY*//*() const*/
    type["GetFileNameEdit"] = [](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFileNameEdit());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return filter dropdown. BIND_AS_PROPERTY*//*() const*/
    type["GetFilterList"] = [](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFilterList());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return OK button. BIND_AS_ALIAS_get_okButton*//*() const*/
    type["GetOKButton"] = [](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOKButton());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return cancel button. BIND_AS_PROPERTY*//*() const*/
    type["GetCancelButton"] = [](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCancelButton());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return close button.*//*() const*/
    type["GetCloseButton"] = [](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCloseButton());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return window title. BIND_AS_PROPERTY*//*() const*/
    type["GetTitle"] = static_cast<const String& (Urho3D::FileSelector::*)() const>(&Urho3D::FileSelector::GetTitle) ;
    /*Return current path. BIND_AS_PROPERTY*//*() const*/
    type["GetPath"] = static_cast<const String& (Urho3D::FileSelector::*)() const>(&Urho3D::FileSelector::GetPath) ;
    /*Return current filename. BIND_AS_PROPERTY*//*() const*/
    type["GetFileName"] = static_cast<const String& (Urho3D::FileSelector::*)() const>(&Urho3D::FileSelector::GetFileName) ;
    /*Return current filter. BIND_AS_PROPERTY*//*() const*/
    type["GetFilter"] = static_cast<const String& (Urho3D::FileSelector::*)() const>(&Urho3D::FileSelector::GetFilter) ;
    /*Return current filter index. BIND_AS_PROPERTY*//*() const*/
    type["GetFilterIndex"] = static_cast<unsigned (Urho3D::FileSelector::*)() const>(&Urho3D::FileSelector::GetFilterIndex) ;
    /*Return directory mode flag. BIND_AS_PROPERTY*//*() const*/
    type["GetDirectoryMode"] = static_cast<bool (Urho3D::FileSelector::*)() const>(&Urho3D::FileSelector::GetDirectoryMode) ;
    type["cancelButton"] = sol::property([](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetCancelButton());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["defaultStyle"] = sol::property([](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultStyle());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::FileSelector::*)(XMLFile *)>(&Urho3D::FileSelector::SetDefaultStyle) );
    type["directoryMode"] = sol::property(static_cast<bool (Urho3D::FileSelector::*)() const>(&Urho3D::FileSelector::GetDirectoryMode) 
        , static_cast<void (Urho3D::FileSelector::*)(bool)>(&Urho3D::FileSelector::SetDirectoryMode) );
    type["fileList"] = sol::property([](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFileList());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["fileName"] = sol::property(static_cast<const String& (Urho3D::FileSelector::*)() const>(&Urho3D::FileSelector::GetFileName) 
        , static_cast<void (Urho3D::FileSelector::*)(const  String &)>(&Urho3D::FileSelector::SetFileName) );
    type["fileNameEdit"] = sol::property([](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFileNameEdit());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["filter"] = sol::property(static_cast<const String& (Urho3D::FileSelector::*)() const>(&Urho3D::FileSelector::GetFilter) );
    type["filterIndex"] = sol::property(static_cast<unsigned (Urho3D::FileSelector::*)() const>(&Urho3D::FileSelector::GetFilterIndex) );
    type["filterList"] = sol::property([](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFilterList());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["okButton"] = sol::property([](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOKButton());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["path"] = sol::property(static_cast<const String& (Urho3D::FileSelector::*)() const>(&Urho3D::FileSelector::GetPath) 
        , static_cast<void (Urho3D::FileSelector::*)(const  String &)>(&Urho3D::FileSelector::SetPath) );
    type["pathEdit"] = sol::property([](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetPathEdit());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["title"] = sol::property(static_cast<const String& (Urho3D::FileSelector::*)() const>(&Urho3D::FileSelector::GetTitle) 
        , static_cast<void (Urho3D::FileSelector::*)(const  String &)>(&Urho3D::FileSelector::SetTitle) );
    type["titleText"] = sol::property([](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTitleText());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["window"] = sol::property([](Urho3D::FileSelector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetWindow());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/FileSelector.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/FileSelector.h>
#include <Urho3D/Container/Str.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_FileSelectorEntry(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::FileSelectorEntry>( "FileSelectorEntry"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["name_"] = &Urho3D::FileSelectorEntry::name_;
    type["directory_"] = &Urho3D::FileSelectorEntry::directory_;

}

