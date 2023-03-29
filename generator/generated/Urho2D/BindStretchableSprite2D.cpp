
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/StretchableSprite2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/StretchableSprite2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Rect.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_StretchableSprite2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::StretchableSprite2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::StretchableSprite2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::StretchableSprite2D>((Urho3D::StretchableSprite2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::StretchableSprite2D>( "StretchableSprite2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::StaticSprite2D,Urho3D::Drawable2D,Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::StretchableSprite2D>(context);
        });

// Members

    /*Set border as number of pixels from each side. BIND_AS_PROPERTY*//*(const IntRect &border)*/
    type["SetBorder"] = static_cast<void (Urho3D::StretchableSprite2D::*)(const  IntRect &)>(&Urho3D::StretchableSprite2D::SetBorder) ;
    /*Get border as number of pixels from each side. BIND_AS_PROPERTY*//*() const*/
    type["GetBorder"] = static_cast<const IntRect& (Urho3D::StretchableSprite2D::*)() const>(&Urho3D::StretchableSprite2D::GetBorder) ;
    type["border"] = sol::property(static_cast<const IntRect& (Urho3D::StretchableSprite2D::*)() const>(&Urho3D::StretchableSprite2D::GetBorder) 
        , static_cast<void (Urho3D::StretchableSprite2D::*)(const  IntRect &)>(&Urho3D::StretchableSprite2D::SetBorder) );

}

