
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/FontFaceBitmap.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/FontFaceBitmap.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/UI/Font.h>
#include <Urho3D/UI/FontFace.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_FontFaceBitmap(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::FontFaceBitmap>( "FontFaceBitmap"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::FontFace,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Font *font) { 
            return Urho3D::MakeShared<Urho3D::FontFaceBitmap>(font);
        });

// Members

    type["Load"] = sol::overload(
        static_cast<bool (Urho3D::FontFaceBitmap::*)(const unsigned char *, unsigned, float)>(&Urho3D::FontFaceBitmap::Load) ,
        static_cast<bool (Urho3D::FontFaceBitmap::*)(FontFace *, bool)>(&Urho3D::FontFaceBitmap::Load)  );
    type["Save"] = sol::overload(
        static_cast<bool (Urho3D::FontFaceBitmap::*)(Serializer &, int, const  String &)>(&Urho3D::FontFaceBitmap::Save) ,
        [](Urho3D::FontFaceBitmap& self, Serializer & dest, int pointSize){ return self.Save(dest, pointSize); } );

}

