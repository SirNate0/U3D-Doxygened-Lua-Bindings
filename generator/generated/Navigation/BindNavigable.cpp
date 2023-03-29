
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Navigation/Navigable.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Navigation/Navigable.h>
#include <Urho3D/Core/Context.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Navigable(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Navigable::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Navigable::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Navigable>((Urho3D::Navigable*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Navigable>( "Navigable"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Navigable>(context);
        });

// Members

    /*Set whether geometry is automatically collected from child nodes. Default true. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetRecursive"] = static_cast<void (Urho3D::Navigable::*)(bool)>(&Urho3D::Navigable::SetRecursive) ;
    /*Return whether geometry is automatically collected from child nodes. BIND_AS_PROPERTY*//*() const*/
    type["IsRecursive"] = static_cast<bool (Urho3D::Navigable::*)() const>(&Urho3D::Navigable::IsRecursive) ;
    type["recursive"] = sol::property(static_cast<bool (Urho3D::Navigable::*)() const>(&Urho3D::Navigable::IsRecursive) 
        , static_cast<void (Urho3D::Navigable::*)(bool)>(&Urho3D::Navigable::SetRecursive) );

}

