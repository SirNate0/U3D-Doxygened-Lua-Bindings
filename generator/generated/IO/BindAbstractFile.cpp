
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/IO/AbstractFile.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/IO/AbstractFile.h>
#include <Urho3D/Container/Str.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_AbstractFile(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::AbstractFile>( "AbstractFile"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Deserializer,Urho3D::Serializer>()

);

// Constructors

    /*ABSTRACT*/

// Members

    /*Change the file name. Used by the resource system. BIND_AS_PROPERTY*//*(const String &name)*/
    type["SetName"] = static_cast<void (Urho3D::AbstractFile::*)(const  String &)>(&Urho3D::AbstractFile::SetName) ;
    /*Return the file name.*//*() const override*/
    type["GetName"] = static_cast<const String& (Urho3D::AbstractFile::*)() const>(&Urho3D::AbstractFile::GetName) ;
    type["name"] = sol::property(static_cast<void (Urho3D::AbstractFile::*)(const  String &)>(&Urho3D::AbstractFile::SetName) );

}

