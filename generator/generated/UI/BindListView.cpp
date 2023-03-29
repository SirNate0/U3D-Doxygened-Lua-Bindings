
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/ListView.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/ListView.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Input/InputConstants.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/UI/ScrollView.h>
#include <Urho3D/UI/UIElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ListView(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ListView::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ListView::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ListView>((Urho3D::ListView*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ListView>( "ListView"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::ScrollView,Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ListView>(context);
        });

// Members

    /*React to a key press.*//*(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override*/
    type["OnKey"] = static_cast<void (Urho3D::ListView::*)(Key, MouseButtonFlags, QualifierFlags)>(&Urho3D::ListView::OnKey) ;
    /*React to resize.*//*(const IntVector2 &newSize, const IntVector2 &delta) override*/
    type["OnResize"] = static_cast<void (Urho3D::ListView::*)(const  IntVector2 &, const  IntVector2 &)>(&Urho3D::ListView::OnResize) ;
    /*Manually update layout on internal elements.*//*()*/
    type["UpdateInternalLayout"] = static_cast<void (Urho3D::ListView::*)()>(&Urho3D::ListView::UpdateInternalLayout) ;
    /*Disable automatic layout update for internal elements.*//*()*/
    type["DisableInternalLayoutUpdate"] = static_cast<void (Urho3D::ListView::*)()>(&Urho3D::ListView::DisableInternalLayoutUpdate) ;
    /*Enable automatic layout update for internal elements.*//*()*/
    type["EnableInternalLayoutUpdate"] = static_cast<void (Urho3D::ListView::*)()>(&Urho3D::ListView::EnableInternalLayoutUpdate) ;
    /*Add item to the end of the list.*//*(UIElement *item)*/
    type["AddItem"] = static_cast<void (Urho3D::ListView::*)(UIElement *)>(&Urho3D::ListView::AddItem) ;
    /*Remove all items.*//*()*/
    type["RemoveAllItems"] = static_cast<void (Urho3D::ListView::*)()>(&Urho3D::ListView::RemoveAllItems) ;
    /*Set selection. BIND_AS_PROPERTY*//*(unsigned index)*/
    type["SetSelection"] = static_cast<void (Urho3D::ListView::*)(unsigned)>(&Urho3D::ListView::SetSelection) ;
    /*Set multiple selected items. If multiselect disabled, sets only the first.*//*(const PODVector< unsigned > &indices)*/
    type["SetSelections"] = static_cast<void (Urho3D::ListView::*)(const  PODVector< unsigned > &)>(&Urho3D::ListView::SetSelections) ;
    /*Add item to the selection, multiselect mode only.*//*(unsigned index)*/
    type["AddSelection"] = static_cast<void (Urho3D::ListView::*)(unsigned)>(&Urho3D::ListView::AddSelection) ;
    /*Remove item from the selection.*//*(unsigned index)*/
    type["RemoveSelection"] = static_cast<void (Urho3D::ListView::*)(unsigned)>(&Urho3D::ListView::RemoveSelection) ;
    /*Toggle selection of an item.*//*(unsigned index)*/
    type["ToggleSelection"] = static_cast<void (Urho3D::ListView::*)(unsigned)>(&Urho3D::ListView::ToggleSelection) ;
    /*Clear selection.*//*()*/
    type["ClearSelection"] = static_cast<void (Urho3D::ListView::*)()>(&Urho3D::ListView::ClearSelection) ;
    /*Set selected items' highlight mode. BIND_AS_PROPERTY*//*(HighlightMode mode)*/
    type["SetHighlightMode"] = static_cast<void (Urho3D::ListView::*)(HighlightMode)>(&Urho3D::ListView::SetHighlightMode) ;
    /*Enable multiselect. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetMultiselect"] = static_cast<void (Urho3D::ListView::*)(bool)>(&Urho3D::ListView::SetMultiselect) ;
    /*Enable hierarchy mode. Allows items to have parent-child relationship at different indent level and the ability to expand/collapse child items. All items in the list will be lost during mode change. BIND_AS_PROPERTY.*//*(bool enable)*/
    type["SetHierarchyMode"] = static_cast<void (Urho3D::ListView::*)(bool)>(&Urho3D::ListView::SetHierarchyMode) ;
    /*Set base indent, i.e. the indent level of the ultimate parent item. BIND_AS_PROPERTY*//*(int baseIndent)*/
    type["SetBaseIndent"] = static_cast<void (Urho3D::ListView::*)(int)>(&Urho3D::ListView::SetBaseIndent) ;
    /*Enable clearing of selection on defocus. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetClearSelectionOnDefocus"] = static_cast<void (Urho3D::ListView::*)(bool)>(&Urho3D::ListView::SetClearSelectionOnDefocus) ;
    /*Enable reacting to click end instead of click start for item selection. Default false. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetSelectOnClickEnd"] = static_cast<void (Urho3D::ListView::*)(bool)>(&Urho3D::ListView::SetSelectOnClickEnd) ;
    /*Return number of items. BIND_AS_PROPERTY*//*() const*/
    type["GetNumItems"] = static_cast<unsigned (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetNumItems) ;
    /*Return item at index. BIND_AS_ALIAS_get_items*//*(unsigned index) const*/
    type["GetItem"] = [](Urho3D::ListView& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetItem(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return all items.*//*() const*/
    type["GetItems"] = static_cast<PODVector<UIElement*> (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetItems) ;
    /*Return index of item, or M_MAX_UNSIGNED If not found.*//*(UIElement *item) const*/
    type["FindItem"] = static_cast<unsigned (Urho3D::ListView::*)(UIElement *) const>(&Urho3D::ListView::FindItem) ;
    /*Return first selected index, or M_MAX_UNSIGNED if none selected. BIND_AS_PROPERTY*//*() const*/
    type["GetSelection"] = static_cast<unsigned (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetSelection) ;
    /*Return all selected indices. BIND_AS_PROPERTY*//*() const*/
    type["GetSelections"] = static_cast<const PODVector<unsigned>& (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetSelections) ;
    /*Copy selected items to system clipboard. Currently only applicable to  Text items.*//*() const*/
    type["CopySelectedItemsToClipboard"] = static_cast<void (Urho3D::ListView::*)() const>(&Urho3D::ListView::CopySelectedItemsToClipboard) ;
    /*Return first selected item, or null if none selected. BIND_AS_PROPERTY*//*() const*/
    type["GetSelectedItem"] = [](Urho3D::ListView& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSelectedItem());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return all selected items. BIND_AS_PROPERTY*//*() const*/
    type["GetSelectedItems"] = static_cast<PODVector<UIElement*> (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetSelectedItems) ;
    /*Return whether an item at index is selected.*//*(unsigned index) const*/
    type["IsSelected"] = static_cast<bool (Urho3D::ListView::*)(unsigned) const>(&Urho3D::ListView::IsSelected) ;
    /*Return whether an item at index has its children expanded (in hierarchy mode only).*//*(unsigned index) const*/
    type["IsExpanded"] = static_cast<bool (Urho3D::ListView::*)(unsigned) const>(&Urho3D::ListView::IsExpanded) ;
    /*Return highlight mode. BIND_AS_PROPERTY*//*() const*/
    type["GetHighlightMode"] = static_cast<HighlightMode (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetHighlightMode) ;
    /*Return whether multiselect enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetMultiselect"] = static_cast<bool (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetMultiselect) ;
    /*Return whether selection is cleared on defocus. BIND_AS_PROPERTY*//*() const*/
    type["GetClearSelectionOnDefocus"] = static_cast<bool (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetClearSelectionOnDefocus) ;
    /*Return whether reacts to click end instead of click start for item selection. BIND_AS_PROPERTY*//*() const*/
    type["GetSelectOnClickEnd"] = static_cast<bool (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetSelectOnClickEnd) ;
    /*Return whether hierarchy mode enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetHierarchyMode"] = static_cast<bool (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetHierarchyMode) ;
    /*Return base indent. BIND_AS_PROPERTY*//*() const*/
    type["GetBaseIndent"] = static_cast<int (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetBaseIndent) ;
    type["InsertItem"] = sol::overload(
        static_cast<void (Urho3D::ListView::*)(unsigned, UIElement *, UIElement *)>(&Urho3D::ListView::InsertItem) ,
        [](Urho3D::ListView& self, unsigned index, UIElement * item){ self.InsertItem(index, item); } );
    type["RemoveItem"] = sol::overload(
        static_cast<void (Urho3D::ListView::*)(UIElement *, unsigned)>(&Urho3D::ListView::RemoveItem) ,
        [](Urho3D::ListView& self, UIElement * item){ self.RemoveItem(item); },
        static_cast<void (Urho3D::ListView::*)(unsigned)>(&Urho3D::ListView::RemoveItem)  );
    type["ChangeSelection"] = sol::overload(
        static_cast<void (Urho3D::ListView::*)(int, bool)>(&Urho3D::ListView::ChangeSelection) ,
        [](Urho3D::ListView& self, int delta){ self.ChangeSelection(delta); } );
    type["Expand"] = sol::overload(
        static_cast<void (Urho3D::ListView::*)(unsigned, bool, bool)>(&Urho3D::ListView::Expand) ,
        [](Urho3D::ListView& self, unsigned index, bool enable){ self.Expand(index, enable); } );
    type["ToggleExpand"] = sol::overload(
        static_cast<void (Urho3D::ListView::*)(unsigned, bool)>(&Urho3D::ListView::ToggleExpand) ,
        [](Urho3D::ListView& self, unsigned index){ self.ToggleExpand(index); } );
    type["EnsureItemVisibility"] = sol::overload(
        static_cast<void (Urho3D::ListView::*)(unsigned)>(&Urho3D::ListView::EnsureItemVisibility) ,
        static_cast<void (Urho3D::ListView::*)(UIElement *)>(&Urho3D::ListView::EnsureItemVisibility)  );
    type["baseIndent"] = sol::property(static_cast<int (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetBaseIndent) 
        , static_cast<void (Urho3D::ListView::*)(int)>(&Urho3D::ListView::SetBaseIndent) );
    type["clearSelectionOnDefocus"] = sol::property(static_cast<bool (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetClearSelectionOnDefocus) 
        , static_cast<void (Urho3D::ListView::*)(bool)>(&Urho3D::ListView::SetClearSelectionOnDefocus) );
    type["hierarchyMode"] = sol::property(static_cast<bool (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetHierarchyMode) 
        , static_cast<void (Urho3D::ListView::*)(bool)>(&Urho3D::ListView::SetHierarchyMode) );
    type["highlightMode"] = sol::property(static_cast<HighlightMode (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetHighlightMode) 
        , static_cast<void (Urho3D::ListView::*)(HighlightMode)>(&Urho3D::ListView::SetHighlightMode) );
    type["item"] = sol::property([](Urho3D::ListView& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetItem(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["multiselect"] = sol::property(static_cast<bool (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetMultiselect) 
        , static_cast<void (Urho3D::ListView::*)(bool)>(&Urho3D::ListView::SetMultiselect) );
    type["numItems"] = sol::property(static_cast<unsigned (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetNumItems) );
    type["selectOnClickEnd"] = sol::property(static_cast<bool (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetSelectOnClickEnd) 
        , static_cast<void (Urho3D::ListView::*)(bool)>(&Urho3D::ListView::SetSelectOnClickEnd) );
    type["selectedItem"] = sol::property([](Urho3D::ListView& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSelectedItem());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["selectedItems"] = sol::property(static_cast<PODVector<UIElement*> (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetSelectedItems) );
    type["selection"] = sol::property(static_cast<unsigned (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetSelection) 
        , static_cast<void (Urho3D::ListView::*)(unsigned)>(&Urho3D::ListView::SetSelection) );
    type["selections"] = sol::property(static_cast<const PODVector<unsigned>& (Urho3D::ListView::*)() const>(&Urho3D::ListView::GetSelections) );

}

