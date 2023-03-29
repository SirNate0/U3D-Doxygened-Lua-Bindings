
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/ScrollView.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/ScrollView.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/UI/BorderImage.h>
#include <Urho3D/UI/ScrollBar.h>
#include <Urho3D/UI/UIElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ScrollView(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ScrollView::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ScrollView::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ScrollView>((Urho3D::ScrollView*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ScrollView>( "ScrollView"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ScrollView>(context);
        });

// Members

    /*Perform  UI element update.*//*(float timeStep) override*/
    type["Update"] = static_cast<void (Urho3D::ScrollView::*)(float)>(&Urho3D::ScrollView::Update) ;
    /*Apply attribute changes that can not be applied immediately.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::ScrollView::*)()>(&Urho3D::ScrollView::ApplyAttributes) ;
    /*React to mouse wheel.*//*(int delta, MouseButtonFlags buttons, QualifierFlags qualifiers) override*/
    type["OnWheel"] = static_cast<void (Urho3D::ScrollView::*)(int, MouseButtonFlags, QualifierFlags)>(&Urho3D::ScrollView::OnWheel) ;
    /*React to a key press.*//*(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override*/
    type["OnKey"] = static_cast<void (Urho3D::ScrollView::*)(Key, MouseButtonFlags, QualifierFlags)>(&Urho3D::ScrollView::OnKey) ;
    /*React to resize.*//*(const IntVector2 &newSize, const IntVector2 &delta) override*/
    type["OnResize"] = static_cast<void (Urho3D::ScrollView::*)(const  IntVector2 &, const  IntVector2 &)>(&Urho3D::ScrollView::OnResize) ;
    /*Return whether the element could handle wheel input.*//*() const override*/
    type["IsWheelHandler"] = static_cast<bool (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::IsWheelHandler) ;
    /*Set content element. BIND_AS_PROPERTY*//*(UIElement *element)*/
    type["SetContentElement"] = static_cast<void (Urho3D::ScrollView::*)(UIElement *)>(&Urho3D::ScrollView::SetContentElement) ;
    /*Set scrollbars' visibility manually. Disables scrollbar autoshow/hide.*//*(bool horizontal, bool vertical)*/
    type["SetScrollBarsVisible"] = static_cast<void (Urho3D::ScrollView::*)(bool, bool)>(&Urho3D::ScrollView::SetScrollBarsVisible) ;
    /*Set horizontal scrollbar visibility manually. Disables scrollbar autoshow/hide. BIND_AS_PROPERTY*//*(bool visible)*/
    type["SetHorizontalScrollBarVisible"] = static_cast<void (Urho3D::ScrollView::*)(bool)>(&Urho3D::ScrollView::SetHorizontalScrollBarVisible) ;
    /*Set vertical scrollbar visibility manually. Disables scrollbar autoshow/hide. BIND_AS_PROPERTY*//*(bool visible)*/
    type["SetVerticalScrollBarVisible"] = static_cast<void (Urho3D::ScrollView::*)(bool)>(&Urho3D::ScrollView::SetVerticalScrollBarVisible) ;
    /*Set whether to automatically show/hide scrollbars. Default true. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetScrollBarsAutoVisible"] = static_cast<void (Urho3D::ScrollView::*)(bool)>(&Urho3D::ScrollView::SetScrollBarsAutoVisible) ;
    /*Set arrow key scroll step. Also sets it on the scrollbars. BIND_AS_PROPERTY*//*(float step)*/
    type["SetScrollStep"] = static_cast<void (Urho3D::ScrollView::*)(float)>(&Urho3D::ScrollView::SetScrollStep) ;
    /*Set arrow key page step. BIND_AS_PROPERTY*//*(float step)*/
    type["SetPageStep"] = static_cast<void (Urho3D::ScrollView::*)(float)>(&Urho3D::ScrollView::SetPageStep) ;
    /*Set scroll deceleration. BIND_AS_PROPERTY*//*(float deceleration)*/
    type["SetScrollDeceleration"] = static_cast<void (Urho3D::ScrollView::*)(float)>(&Urho3D::ScrollView::SetScrollDeceleration) ;
    /*Set scroll snap epsilon. BIND_AS_PROPERTY*//*(float snap)*/
    type["SetScrollSnapEpsilon"] = static_cast<void (Urho3D::ScrollView::*)(float)>(&Urho3D::ScrollView::SetScrollSnapEpsilon) ;
    /*Set whether child elements should be disabled while touch scrolling. BIND_AS_PROPERTY*//*(bool disable)*/
    type["SetAutoDisableChildren"] = static_cast<void (Urho3D::ScrollView::*)(bool)>(&Urho3D::ScrollView::SetAutoDisableChildren) ;
    /*Set how much touch movement is needed to trigger child element disabling. BIND_AS_PROPERTY*//*(float amount)*/
    type["SetAutoDisableThreshold"] = static_cast<void (Urho3D::ScrollView::*)(float)>(&Urho3D::ScrollView::SetAutoDisableThreshold) ;
    /*Return view offset from the top-left corner. BIND_AS_PROPERTY*//*() const*/
    type["GetViewPosition"] = static_cast<const IntVector2& (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetViewPosition) ;
    /*Return content element. BIND_AS_PROPERTY*//*() const*/
    type["GetContentElement"] = [](Urho3D::ScrollView& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetContentElement());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return horizontal scroll bar. BIND_AS_PROPERTY*//*() const*/
    type["GetHorizontalScrollBar"] = [](Urho3D::ScrollView& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetHorizontalScrollBar());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return vertical scroll bar. BIND_AS_PROPERTY*//*() const*/
    type["GetVerticalScrollBar"] = [](Urho3D::ScrollView& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetVerticalScrollBar());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return scroll panel. BIND_AS_PROPERTY*//*() const*/
    type["GetScrollPanel"] = [](Urho3D::ScrollView& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetScrollPanel());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return whether scrollbars are automatically shown/hidden. BIND_AS_PROPERTY*//*() const*/
    type["GetScrollBarsAutoVisible"] = static_cast<bool (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetScrollBarsAutoVisible) ;
    /*Return whether the horizontal scrollbar is visible. BIND_AS_PROPERTY*//*() const*/
    type["GetHorizontalScrollBarVisible"] = static_cast<bool (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetHorizontalScrollBarVisible) ;
    /*Return whether the vertical scrollbar is visible. BIND_AS_PROPERTY*//*() const*/
    type["GetVerticalScrollBarVisible"] = static_cast<bool (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetVerticalScrollBarVisible) ;
    /*Return arrow key scroll step. BIND_AS_PROPERTY*//*() const*/
    type["GetScrollStep"] = static_cast<float (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetScrollStep) ;
    /*Return arrow key page step. BIND_AS_PROPERTY*//*() const*/
    type["GetPageStep"] = static_cast<float (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetPageStep) ;
    /*Return scroll deceleration. BIND_AS_PROPERTY*//*() const*/
    type["GetScrollDeceleration"] = static_cast<float (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetScrollDeceleration) ;
    /*Return scroll snap epsilon. BIND_AS_PROPERTY*//*() const*/
    type["GetScrollSnapEpsilon"] = static_cast<float (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetScrollSnapEpsilon) ;
    /*Return whether child element will be disabled while touch scrolling. BIND_AS_PROPERTY*//*() const*/
    type["GetAutoDisableChildren"] = static_cast<bool (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetAutoDisableChildren) ;
    /*Return how much touch movement is needed to trigger child element disabling. BIND_AS_PROPERTY*//*() const*/
    type["GetAutoDisableThreshold"] = static_cast<float (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetAutoDisableThreshold) ;
    /*Set view position attribute.*//*(const IntVector2 &value)*/
    type["SetViewPositionAttr"] = static_cast<void (Urho3D::ScrollView::*)(const  IntVector2 &)>(&Urho3D::ScrollView::SetViewPositionAttr) ;
    type["SetViewPosition"] = sol::overload(
        static_cast<void (Urho3D::ScrollView::*)(const  IntVector2 &)>(&Urho3D::ScrollView::SetViewPosition) ,
        static_cast<void (Urho3D::ScrollView::*)(int, int)>(&Urho3D::ScrollView::SetViewPosition)  );
    type["autoDisableChildren"] = sol::property(static_cast<bool (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetAutoDisableChildren) 
        , static_cast<void (Urho3D::ScrollView::*)(bool)>(&Urho3D::ScrollView::SetAutoDisableChildren) );
    type["autoDisableThreshold"] = sol::property(static_cast<float (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetAutoDisableThreshold) 
        , static_cast<void (Urho3D::ScrollView::*)(float)>(&Urho3D::ScrollView::SetAutoDisableThreshold) );
    type["contentElement"] = sol::property([](Urho3D::ScrollView& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetContentElement());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::ScrollView::*)(UIElement *)>(&Urho3D::ScrollView::SetContentElement) );
    type["horizontalScrollBar"] = sol::property([](Urho3D::ScrollView& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetHorizontalScrollBar());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["horizontalScrollBarVisible"] = sol::property(static_cast<bool (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetHorizontalScrollBarVisible) 
        , static_cast<void (Urho3D::ScrollView::*)(bool)>(&Urho3D::ScrollView::SetHorizontalScrollBarVisible) );
    type["pageStep"] = sol::property(static_cast<float (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetPageStep) 
        , static_cast<void (Urho3D::ScrollView::*)(float)>(&Urho3D::ScrollView::SetPageStep) );
    type["scrollBarsAutoVisible"] = sol::property(static_cast<bool (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetScrollBarsAutoVisible) 
        , static_cast<void (Urho3D::ScrollView::*)(bool)>(&Urho3D::ScrollView::SetScrollBarsAutoVisible) );
    type["scrollDeceleration"] = sol::property(static_cast<float (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetScrollDeceleration) 
        , static_cast<void (Urho3D::ScrollView::*)(float)>(&Urho3D::ScrollView::SetScrollDeceleration) );
    type["scrollPanel"] = sol::property([](Urho3D::ScrollView& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetScrollPanel());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["scrollSnapEpsilon"] = sol::property(static_cast<float (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetScrollSnapEpsilon) 
        , static_cast<void (Urho3D::ScrollView::*)(float)>(&Urho3D::ScrollView::SetScrollSnapEpsilon) );
    type["scrollStep"] = sol::property(static_cast<float (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetScrollStep) 
        , static_cast<void (Urho3D::ScrollView::*)(float)>(&Urho3D::ScrollView::SetScrollStep) );
    type["verticalScrollBar"] = sol::property([](Urho3D::ScrollView& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetVerticalScrollBar());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["verticalScrollBarVisible"] = sol::property(static_cast<bool (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetVerticalScrollBarVisible) 
        , static_cast<void (Urho3D::ScrollView::*)(bool)>(&Urho3D::ScrollView::SetVerticalScrollBarVisible) );
    type["viewPosition"] = sol::property(static_cast<const IntVector2& (Urho3D::ScrollView::*)() const>(&Urho3D::ScrollView::GetViewPosition) 
        , static_cast<void (Urho3D::ScrollView::*)(const  IntVector2 &)>(&Urho3D::ScrollView::SetViewPosition) );

}

