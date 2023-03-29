
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Core/Profiler.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Core/Profiler.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Profiler.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Profiler(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Profiler::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Profiler::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Profiler>((Urho3D::Profiler*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Profiler>( "Profiler"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Profiler>(context);
        });

// Members

    /*Begin timing a profiling block.*//*(const char *name)*/
    type["BeginBlock"] = static_cast<void (Urho3D::Profiler::*)(const char *)>(&Urho3D::Profiler::BeginBlock) ;
    /*End timing the current profiling block.*//*()*/
    type["EndBlock"] = static_cast<void (Urho3D::Profiler::*)()>(&Urho3D::Profiler::EndBlock) ;
    /*Begin the profiling frame. Called by HandleBeginFrame().*//*()*/
    type["BeginFrame"] = static_cast<void (Urho3D::Profiler::*)()>(&Urho3D::Profiler::BeginFrame) ;
    /*End the profiling frame. Called by HandleEndFrame().*//*()*/
    type["EndFrame"] = static_cast<void (Urho3D::Profiler::*)()>(&Urho3D::Profiler::EndFrame) ;
    /*Begin a new interval.*//*()*/
    type["BeginInterval"] = static_cast<void (Urho3D::Profiler::*)()>(&Urho3D::Profiler::BeginInterval) ;
    /*Return the current profiling block.*//*()*/
    type["GetCurrentBlock"] = static_cast<const ProfilerBlock* (Urho3D::Profiler::*)()>(&Urho3D::Profiler::GetCurrentBlock) ;
    /*Return the root profiling block.*//*()*/
    type["GetRootBlock"] = static_cast<const ProfilerBlock* (Urho3D::Profiler::*)()>(&Urho3D::Profiler::GetRootBlock) ;
    type["PrintData"] = sol::overload(
        static_cast<const String& (Urho3D::Profiler::*)(bool, bool, unsigned) const>(&Urho3D::Profiler::PrintData) ,
        [](Urho3D::Profiler& self, bool showUnused, bool showTotal){ return self.PrintData(showUnused, showTotal); },
        [](Urho3D::Profiler& self, bool showUnused){ return self.PrintData(showUnused); },
        [](Urho3D::Profiler& self){ return self.PrintData(); } );

}

