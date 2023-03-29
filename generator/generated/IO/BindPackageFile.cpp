
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/IO/PackageFile.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/IO/PackageFile.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/IO/PackageFile.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_PackageFile(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::PackageFile::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::PackageFile::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::PackageFile>((Urho3D::PackageFile*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::PackageFile>( "PackageFile"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::PackageFile>(context);
        },[](Context *context, const String &fileName, unsigned startOffset=0) { 
            return Urho3D::MakeShared<Urho3D::PackageFile>(context, fileName, startOffset);
        },[](Context * context, const  String & fileName) { 
            return Urho3D::MakeShared<Urho3D::PackageFile>(context, fileName);
        });

// Members

    /*Check if a file exists within the package file. This will be case-insensitive on Windows and case-sensitive on other platforms.*//*(const String &fileName) const*/
    type["Exists"] = static_cast<bool (Urho3D::PackageFile::*)(const  String &) const>(&Urho3D::PackageFile::Exists) ;
    /*Return the file entry corresponding to the name, or null if not found. This will be case-insensitive on Windows and case-sensitive on other platforms.*//*(const String &fileName) const*/
    type["GetEntry"] = static_cast<const PackageEntry* (Urho3D::PackageFile::*)(const  String &) const>(&Urho3D::PackageFile::GetEntry) ;
    /*Return all file entries.*//*() const*/
    type["GetEntries"] = static_cast<const HashMap<String,PackageEntry>& (Urho3D::PackageFile::*)() const>(&Urho3D::PackageFile::GetEntries) ;
    /*Return the package file name. BIND_AS_PROPERTY*//*() const*/
    type["GetName"] = static_cast<const String& (Urho3D::PackageFile::*)() const>(&Urho3D::PackageFile::GetName) ;
    /*Return hash of the package file name.*//*() const*/
    type["GetNameHash"] = static_cast<StringHash (Urho3D::PackageFile::*)() const>(&Urho3D::PackageFile::GetNameHash) ;
    /*Return number of files. BIND_AS_PROPERTY*//*() const*/
    type["GetNumFiles"] = static_cast<unsigned (Urho3D::PackageFile::*)() const>(&Urho3D::PackageFile::GetNumFiles) ;
    /*Return total size of the package file. BIND_AS_PROPERTY*//*() const*/
    type["GetTotalSize"] = static_cast<unsigned (Urho3D::PackageFile::*)() const>(&Urho3D::PackageFile::GetTotalSize) ;
    /*Return total data size from all the file entries in the package file. BIND_AS_PROPERTY*//*() const*/
    type["GetTotalDataSize"] = static_cast<unsigned (Urho3D::PackageFile::*)() const>(&Urho3D::PackageFile::GetTotalDataSize) ;
    /*Return checksum of the package file contents. BIND_AS_PROPERTY*//*() const*/
    type["GetChecksum"] = static_cast<unsigned (Urho3D::PackageFile::*)() const>(&Urho3D::PackageFile::GetChecksum) ;
    /*Return whether the files are compressed. BIND_AS_PROPERTY*//*() const*/
    type["IsCompressed"] = static_cast<bool (Urho3D::PackageFile::*)() const>(&Urho3D::PackageFile::IsCompressed) ;
    /*Return list of file names in the package.*//*() const*/
    type["GetEntryNames"] = static_cast<const Vector<String> (Urho3D::PackageFile::*)() const>(&Urho3D::PackageFile::GetEntryNames) ;
    type["Open"] = sol::overload(
        static_cast<bool (Urho3D::PackageFile::*)(const  String &, unsigned)>(&Urho3D::PackageFile::Open) ,
        [](Urho3D::PackageFile& self, const  String & fileName){ return self.Open(fileName); } );
    type["checksum"] = sol::property(static_cast<unsigned (Urho3D::PackageFile::*)() const>(&Urho3D::PackageFile::GetChecksum) );
    type["compressed"] = sol::property(static_cast<bool (Urho3D::PackageFile::*)() const>(&Urho3D::PackageFile::IsCompressed) );
    type["name"] = sol::property(static_cast<const String& (Urho3D::PackageFile::*)() const>(&Urho3D::PackageFile::GetName) );
    type["numFiles"] = sol::property(static_cast<unsigned (Urho3D::PackageFile::*)() const>(&Urho3D::PackageFile::GetNumFiles) );
    type["totalDataSize"] = sol::property(static_cast<unsigned (Urho3D::PackageFile::*)() const>(&Urho3D::PackageFile::GetTotalDataSize) );
    type["totalSize"] = sol::property(static_cast<unsigned (Urho3D::PackageFile::*)() const>(&Urho3D::PackageFile::GetTotalSize) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/IO/PackageFile.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/IO/PackageFile.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_PackageEntry(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::PackageEntry>( "PackageEntry"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["offset_"] = &Urho3D::PackageEntry::offset_;
    type["size_"] = &Urho3D::PackageEntry::size_;
    type["checksum_"] = &Urho3D::PackageEntry::checksum_;

}

