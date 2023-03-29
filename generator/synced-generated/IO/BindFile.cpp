
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/IO/File.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/IO/File.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Object.h>
#include <Urho3D/IO/AbstractFile.h>
#include <Urho3D/IO/PackageFile.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_File(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::File::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::File::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::File>((Urho3D::File*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::File>( "File"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted,Urho3D::AbstractFile,Urho3D::Deserializer,Urho3D::Serializer>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::File>(context);
        },[](Context *context, const String &fileName, FileMode mode=FILE_READ) { 
            return Urho3D::MakeShared<Urho3D::File>(context, fileName, mode);
        },[](Context * context, const  String & fileName) { 
            return Urho3D::MakeShared<Urho3D::File>(context, fileName);
        },[](Context *context, PackageFile *package, const String &fileName) { 
            return Urho3D::MakeShared<Urho3D::File>(context, package, fileName);
        });

// Members

    /*Read bytes from the file. Return number of bytes actually read.*//*(void *dest, unsigned size) override*/
    type["Read"] = static_cast<unsigned (Urho3D::File::*)(void *, unsigned)>(&Urho3D::File::Read) ;
    /*Set position from the beginning of the file.*//*(unsigned position) override*/
    type["Seek"] = static_cast<unsigned (Urho3D::File::*)(unsigned)>(&Urho3D::File::Seek) ;
    /*Write bytes to the file. Return number of bytes actually written.*//*(const void *data, unsigned size) override*/
    type["Write"] = static_cast<unsigned (Urho3D::File::*)(const void *, unsigned)>(&Urho3D::File::Write) ;
    /*Return a checksum of the file contents using the SDBM hash algorithm.*//*() override*/
    type["GetChecksum"] = static_cast<unsigned (Urho3D::File::*)()>(&Urho3D::File::GetChecksum) ;
    /*Close the file.*//*()*/
    type["Close"] = static_cast<void (Urho3D::File::*)()>(&Urho3D::File::Close) ;
    /*Flush any buffered output to the file.*//*()*/
    type["Flush"] = static_cast<void (Urho3D::File::*)()>(&Urho3D::File::Flush) ;
    /*Return the open mode. BIND_AS_PROPERTY*//*() const*/
    type["GetMode"] = static_cast<FileMode (Urho3D::File::*)() const>(&Urho3D::File::GetMode) ;
    /*Return whether is open. BIND_AS_PROPERTY*//*() const*/
    type["IsOpen"] = static_cast<bool (Urho3D::File::*)() const>(&Urho3D::File::IsOpen) ;
    /*Return the file handle.*//*() const*/
    type["GetHandle"] = static_cast<void* (Urho3D::File::*)() const>(&Urho3D::File::GetHandle) ;
    /*Return whether the file originates from a package. BIND_AS_PROPERTY*//*() const*/
    type["IsPackaged"] = static_cast<bool (Urho3D::File::*)() const>(&Urho3D::File::IsPackaged) ;
    type["Open"] = sol::overload(
        static_cast<bool (Urho3D::File::*)(const  String &, FileMode)>(&Urho3D::File::Open) ,
        [](Urho3D::File& self, const  String & fileName){ return self.Open(fileName); },
        static_cast<bool (Urho3D::File::*)(PackageFile *, const  String &)>(&Urho3D::File::Open)  );
    type["mode"] = sol::property(static_cast<FileMode (Urho3D::File::*)() const>(&Urho3D::File::GetMode) );
    type["open"] = sol::property(static_cast<bool (Urho3D::File::*)() const>(&Urho3D::File::IsOpen) );
    type["packaged"] = sol::property(static_cast<bool (Urho3D::File::*)() const>(&Urho3D::File::IsPackaged) );

}

