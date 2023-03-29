
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/DropDownList.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/DropDownList.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/UI/ListView.h>
#include <Urho3D/UI/UIBatch.h>
#include <Urho3D/UI/UIElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_DropDownList(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::DropDownList::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::DropDownList::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::DropDownList>((Urho3D::DropDownList*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::DropDownList>( "DropDownList"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Menu,Urho3D::Button,Urho3D::BorderImage,Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::DropDownList>(context);
        });

// Members

    /*Apply attribute changes that can not be applied immediately.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::DropDownList::*)()>(&Urho3D::DropDownList::ApplyAttributes) ;
    /*Return  UI rendering batches.*//*(PODVector< UIBatch > &batches, PODVector< float > &vertexData, const IntRect &currentScissor) override*/
    type["GetBatches"] = static_cast<void (Urho3D::DropDownList::*)(PODVector<  UIBatch > &, PODVector< float > &, const  IntRect &)>(&Urho3D::DropDownList::GetBatches) ;
    /*React to the popup being shown.*//*() override*/
    type["OnShowPopup"] = static_cast<void (Urho3D::DropDownList::*)()>(&Urho3D::DropDownList::OnShowPopup) ;
    /*React to the popup being hidden.*//*() override*/
    type["OnHidePopup"] = static_cast<void (Urho3D::DropDownList::*)()>(&Urho3D::DropDownList::OnHidePopup) ;
    /*React to editable status change.*//*() override*/
    type["OnSetEditable"] = static_cast<void (Urho3D::DropDownList::*)()>(&Urho3D::DropDownList::OnSetEditable) ;
    /*Add item to the end of the list.*//*(UIElement *item)*/
    type["AddItem"] = static_cast<void (Urho3D::DropDownList::*)(UIElement *)>(&Urho3D::DropDownList::AddItem) ;
    /*Insert item to a specific position.*//*(unsigned index, UIElement *item)*/
    type["InsertItem"] = static_cast<void (Urho3D::DropDownList::*)(unsigned, UIElement *)>(&Urho3D::DropDownList::InsertItem) ;
    /*Remove all items.*//*()*/
    type["RemoveAllItems"] = static_cast<void (Urho3D::DropDownList::*)()>(&Urho3D::DropDownList::RemoveAllItems) ;
    /*Set selection. BIND_AS_PROPERTY*//*(unsigned index)*/
    type["SetSelection"] = static_cast<void (Urho3D::DropDownList::*)(unsigned)>(&Urho3D::DropDownList::SetSelection) ;
    /*Set place holder text. This is the text shown when there is no selection (-1) in drop down list. Note that if the list has items, the default is to show the first item, so the "no selection" state has to be set explicitly. BIND_AS_PROPERTY*//*(const String &text)*/
    type["SetPlaceholderText"] = static_cast<void (Urho3D::DropDownList::*)(const  String &)>(&Urho3D::DropDownList::SetPlaceholderText) ;
    /*Set whether popup should be automatically resized to match the dropdown button width. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetResizePopup"] = static_cast<void (Urho3D::DropDownList::*)(bool)>(&Urho3D::DropDownList::SetResizePopup) ;
    /*Return number of items. BIND_AS_PROPERTY*//*() const*/
    type["GetNumItems"] = static_cast<unsigned (Urho3D::DropDownList::*)() const>(&Urho3D::DropDownList::GetNumItems) ;
    /*Return item at index. BIND_AS_ALIAS_get_items*//*(unsigned index) const*/
    type["GetItem"] = [](Urho3D::DropDownList& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetItem(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return all items.*//*() const*/
    type["GetItems"] = static_cast<PODVector<UIElement*> (Urho3D::DropDownList::*)() const>(&Urho3D::DropDownList::GetItems) ;
    /*Return selection index, or M_MAX_UNSIGNED if none selected. BIND_AS_PROPERTY*//*() const*/
    type["GetSelection"] = static_cast<unsigned (Urho3D::DropDownList::*)() const>(&Urho3D::DropDownList::GetSelection) ;
    /*Return selected item, or null if none selected. BIND_AS_PROPERTY*//*() const*/
    type["GetSelectedItem"] = [](Urho3D::DropDownList& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSelectedItem());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return listview element. BIND_AS_PROPERTY*//*() const*/
    type["GetListView"] = [](Urho3D::DropDownList& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetListView());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return selected item placeholder element. BIND_AS_PROPERTY*//*() const*/
    type["GetPlaceholder"] = [](Urho3D::DropDownList& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetPlaceholder());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return place holder text. BIND_AS_PROPERTY*//*() const*/
    type["GetPlaceholderText"] = static_cast<const String& (Urho3D::DropDownList::*)() const>(&Urho3D::DropDownList::GetPlaceholderText) ;
    /*Return whether popup should be automatically resized. BIND_AS_PROPERTY*//*() const*/
    type["GetResizePopup"] = static_cast<bool (Urho3D::DropDownList::*)() const>(&Urho3D::DropDownList::GetResizePopup) ;
    /*Set selection attribute.*//*(unsigned index)*/
    type["SetSelectionAttr"] = static_cast<void (Urho3D::DropDownList::*)(unsigned)>(&Urho3D::DropDownList::SetSelectionAttr) ;
    type["RemoveItem"] = sol::overload(
        static_cast<void (Urho3D::DropDownList::*)(UIElement *)>(&Urho3D::DropDownList::RemoveItem) ,
        static_cast<void (Urho3D::DropDownList::*)(unsigned)>(&Urho3D::DropDownList::RemoveItem)  );
    type["item"] = sol::property([](Urho3D::DropDownList& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetItem(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["listView"] = sol::property([](Urho3D::DropDownList& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetListView());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["numItems"] = sol::property(static_cast<unsigned (Urho3D::DropDownList::*)() const>(&Urho3D::DropDownList::GetNumItems) );
    type["placeholder"] = sol::property([](Urho3D::DropDownList& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetPlaceholder());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["placeholderText"] = sol::property(static_cast<const String& (Urho3D::DropDownList::*)() const>(&Urho3D::DropDownList::GetPlaceholderText) 
        , static_cast<void (Urho3D::DropDownList::*)(const  String &)>(&Urho3D::DropDownList::SetPlaceholderText) );
    type["resizePopup"] = sol::property(static_cast<bool (Urho3D::DropDownList::*)() const>(&Urho3D::DropDownList::GetResizePopup) 
        , static_cast<void (Urho3D::DropDownList::*)(bool)>(&Urho3D::DropDownList::SetResizePopup) );
    type["selectedItem"] = sol::property([](Urho3D::DropDownList& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSelectedItem());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["selection"] = sol::property(static_cast<unsigned (Urho3D::DropDownList::*)() const>(&Urho3D::DropDownList::GetSelection) 
        , static_cast<void (Urho3D::DropDownList::*)(unsigned)>(&Urho3D::DropDownList::SetSelection) );

}

