
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Engine/DebugHud.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Engine/DebugHud.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/UI/Text.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_DebugHud(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::DebugHud::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::DebugHud::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::DebugHud>((Urho3D::DebugHud*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::DebugHud>( "DebugHud"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::DebugHud>(context);
        });

// Members

    /*Update. Called by HandlePostUpdate().*//*()*/
    type["Update"] = static_cast<void (Urho3D::DebugHud::*)()>(&Urho3D::DebugHud::Update) ;
    /*Set  UI elements' style from an XML file. BIND_AS_PROPERTY*//*(XMLFile *style)*/
    type["SetDefaultStyle"] = static_cast<void (Urho3D::DebugHud::*)(XMLFile *)>(&Urho3D::DebugHud::SetDefaultStyle) ;
    /*Set elements to show. BIND_AS_PROPERTY*//*(unsigned mode)*/
    type["SetMode"] = static_cast<void (Urho3D::DebugHud::*)(unsigned)>(&Urho3D::DebugHud::SetMode) ;
    /*Set maximum profiler block depth, default unlimited. BIND_AS_PROPERTY*//*(unsigned depth)*/
    type["SetProfilerMaxDepth"] = static_cast<void (Urho3D::DebugHud::*)(unsigned)>(&Urho3D::DebugHud::SetProfilerMaxDepth) ;
    /*Set profiler accumulation interval in seconds. BIND_AS_PROPERTY*//*(float interval)*/
    type["SetProfilerInterval"] = static_cast<void (Urho3D::DebugHud::*)(float)>(&Urho3D::DebugHud::SetProfilerInterval) ;
    /*Set whether to show 3D geometry primitive/batch count only. Default false. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetUseRendererStats"] = static_cast<void (Urho3D::DebugHud::*)(bool)>(&Urho3D::DebugHud::SetUseRendererStats) ;
    /*Toggle elements.*//*(unsigned mode)*/
    type["Toggle"] = static_cast<void (Urho3D::DebugHud::*)(unsigned)>(&Urho3D::DebugHud::Toggle) ;
    /*Toggle all elements.*//*()*/
    type["ToggleAll"] = static_cast<void (Urho3D::DebugHud::*)()>(&Urho3D::DebugHud::ToggleAll) ;
    /*Return the  UI style file. BIND_AS_PROPERTY*//*() const*/
    type["GetDefaultStyle"] = [](Urho3D::DebugHud& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultStyle());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return rendering stats text. BIND_AS_PROPERTY*//*() const*/
    type["GetStatsText"] = [](Urho3D::DebugHud& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetStatsText());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return rendering mode text. BIND_AS_PROPERTY*//*() const*/
    type["GetModeText"] = [](Urho3D::DebugHud& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetModeText());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return profiler text. BIND_AS_PROPERTY*//*() const*/
    type["GetProfilerText"] = [](Urho3D::DebugHud& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetProfilerText());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return memory text. BIND_AS_PROPERTY*//*() const*/
    type["GetMemoryText"] = [](Urho3D::DebugHud& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMemoryText());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return currently shown elements. BIND_AS_PROPERTY*//*() const*/
    type["GetMode"] = static_cast<unsigned (Urho3D::DebugHud::*)() const>(&Urho3D::DebugHud::GetMode) ;
    /*Return maximum profiler block depth. BIND_AS_PROPERTY*//*() const*/
    type["GetProfilerMaxDepth"] = static_cast<unsigned (Urho3D::DebugHud::*)() const>(&Urho3D::DebugHud::GetProfilerMaxDepth) ;
    /*Return profiler accumulation interval in seconds. BIND_AS_PROPERTY*//*() const*/
    type["GetProfilerInterval"] = static_cast<float (Urho3D::DebugHud::*)() const>(&Urho3D::DebugHud::GetProfilerInterval) ;
    /*Return whether showing 3D geometry primitive/batch count only. BIND_AS_PROPERTY*//*() const*/
    type["GetUseRendererStats"] = static_cast<bool (Urho3D::DebugHud::*)() const>(&Urho3D::DebugHud::GetUseRendererStats) ;
    /*Reset application-specific stats. Return true if it was erased successfully.*//*(const String &label)*/
    type["ResetAppStats"] = static_cast<bool (Urho3D::DebugHud::*)(const  String &)>(&Urho3D::DebugHud::ResetAppStats) ;
    /*Clear all application-specific stats.*//*()*/
    type["ClearAppStats"] = static_cast<void (Urho3D::DebugHud::*)()>(&Urho3D::DebugHud::ClearAppStats) ;
    type["SetAppStats"] = sol::overload(
        static_cast<void (Urho3D::DebugHud::*)(const  String &, const  Variant &)>(&Urho3D::DebugHud::SetAppStats) ,
        static_cast<void (Urho3D::DebugHud::*)(const  String &, const  String &)>(&Urho3D::DebugHud::SetAppStats)  );
    type["defaultStyle"] = sol::property([](Urho3D::DebugHud& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetDefaultStyle());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::DebugHud::*)(XMLFile *)>(&Urho3D::DebugHud::SetDefaultStyle) );
    type["memoryText"] = sol::property([](Urho3D::DebugHud& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMemoryText());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["mode"] = sol::property(static_cast<unsigned (Urho3D::DebugHud::*)() const>(&Urho3D::DebugHud::GetMode) 
        , static_cast<void (Urho3D::DebugHud::*)(unsigned)>(&Urho3D::DebugHud::SetMode) );
    type["modeText"] = sol::property([](Urho3D::DebugHud& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetModeText());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["profilerInterval"] = sol::property(static_cast<float (Urho3D::DebugHud::*)() const>(&Urho3D::DebugHud::GetProfilerInterval) 
        , static_cast<void (Urho3D::DebugHud::*)(float)>(&Urho3D::DebugHud::SetProfilerInterval) );
    type["profilerMaxDepth"] = sol::property(static_cast<unsigned (Urho3D::DebugHud::*)() const>(&Urho3D::DebugHud::GetProfilerMaxDepth) 
        , static_cast<void (Urho3D::DebugHud::*)(unsigned)>(&Urho3D::DebugHud::SetProfilerMaxDepth) );
    type["profilerText"] = sol::property([](Urho3D::DebugHud& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetProfilerText());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["statsText"] = sol::property([](Urho3D::DebugHud& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetStatsText());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["useRendererStats"] = sol::property(static_cast<bool (Urho3D::DebugHud::*)() const>(&Urho3D::DebugHud::GetUseRendererStats) 
        , static_cast<void (Urho3D::DebugHud::*)(bool)>(&Urho3D::DebugHud::SetUseRendererStats) );

}

