
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Resource/ResourceCache.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Resource/ResourceCache.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/IO/File.h>
#include <Urho3D/IO/PackageFile.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Resource/Resource.h>
#include <Urho3D/Resource/ResourceCache.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ResourceCache(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ResourceCache::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ResourceCache::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ResourceCache>((Urho3D::ResourceCache*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ResourceCache>( "ResourceCache"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ResourceCache>(context);
        });

// Members

    /*Add a manually created resource. Must be uniquely named within its type.*//*(Resource *resource)*/
    type["AddManualResource"] = static_cast<bool (Urho3D::ResourceCache::*)(Resource *)>(&Urho3D::ResourceCache::AddManualResource) ;
    /*Remove a resource load directory.*//*(const String &pathName)*/
    type["RemoveResourceDir"] = static_cast<void (Urho3D::ResourceCache::*)(const  String &)>(&Urho3D::ResourceCache::RemoveResourceDir) ;
    /*Reload a resource. Return true on success. The resource will not be removed from the cache in case of failure.*//*(Resource *resource)*/
    type["ReloadResource"] = static_cast<bool (Urho3D::ResourceCache::*)(Resource *)>(&Urho3D::ResourceCache::ReloadResource) ;
    /*Reload a resource based on filename. Causes also reload of dependent resources if necessary.*//*(const String &fileName)*/
    type["ReloadResourceWithDependencies"] = static_cast<void (Urho3D::ResourceCache::*)(const  String &)>(&Urho3D::ResourceCache::ReloadResourceWithDependencies) ;
    /*Set memory budget for a specific resource type, default 0 is unlimited. BIND_AS_PROPERTY*//*(StringHash type, unsigned long long budget)*/
    type["SetMemoryBudget"] = static_cast<void (Urho3D::ResourceCache::*)(StringHash, unsigned long long)>(&Urho3D::ResourceCache::SetMemoryBudget) ;
    /*Enable or disable automatic reloading of resources as files are modified. Default false. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetAutoReloadResources"] = static_cast<void (Urho3D::ResourceCache::*)(bool)>(&Urho3D::ResourceCache::SetAutoReloadResources) ;
    /*Enable or disable returning resources that failed to load. Default false. This may be useful in editing to not lose resource ref attributes. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetReturnFailedResources"] = static_cast<void (Urho3D::ResourceCache::*)(bool)>(&Urho3D::ResourceCache::SetReturnFailedResources) ;
    /*Define whether when getting resources should check package files or directories first. True for packages, false for directories. BIND_AS_PROPERTY*//*(bool value)*/
    type["SetSearchPackagesFirst"] = static_cast<void (Urho3D::ResourceCache::*)(bool)>(&Urho3D::ResourceCache::SetSearchPackagesFirst) ;
    /*Set how many milliseconds maximum per frame to spend on finishing background loaded resources. BIND_AS_PROPERTY*//*(int ms)*/
    type["SetFinishBackgroundResourcesMs"] = static_cast<void (Urho3D::ResourceCache::*)(int)>(&Urho3D::ResourceCache::SetFinishBackgroundResourcesMs) ;
    /*Remove a resource router object.*//*(ResourceRouter *router)*/
    type["RemoveResourceRouter"] = static_cast<void (Urho3D::ResourceCache::*)(ResourceRouter *)>(&Urho3D::ResourceCache::RemoveResourceRouter) ;
    /*Return number of pending background-loaded resources. BIND_AS_PROPERTY*//*() const*/
    type["GetNumBackgroundLoadResources"] = static_cast<unsigned (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetNumBackgroundLoadResources) ;
    /*Return all loaded resources.*//*() const*/
    type["GetAllResources"] = static_cast<const HashMap<StringHash,ResourceGroup>& (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetAllResources) ;
    /*Return added resource load directories. BIND_AS_PROPERTY*//*() const*/
    type["GetResourceDirs"] = static_cast<const Vector<String>& (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetResourceDirs) ;
    /*Return added package files. BIND_AS_PROPERTY*//*() const*/
    type["GetPackageFiles"] = static_cast<const Vector<SharedPtr<PackageFile>>& (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetPackageFiles) ;
    /*Return whether a file exists in the resource directories or package files. Does not check manually added in-memory resources.*//*(const String &name) const*/
    type["Exists"] = static_cast<bool (Urho3D::ResourceCache::*)(const  String &) const>(&Urho3D::ResourceCache::Exists) ;
    /*Return memory budget for a resource type. BIND_AS_PROPERTY*//*(StringHash type) const*/
    type["GetMemoryBudget"] = static_cast<unsigned long long (Urho3D::ResourceCache::*)(StringHash) const>(&Urho3D::ResourceCache::GetMemoryBudget) ;
    /*Return total memory use for a resource type. BIND_AS_PROPERTY*//*(StringHash type) const*/
    type["GetMemoryUse"] = static_cast<unsigned long long (Urho3D::ResourceCache::*)(StringHash) const>(&Urho3D::ResourceCache::GetMemoryUse) ;
    /*Return total memory use for all resources. BIND_AS_PROPERTY*//*() const*/
    type["GetTotalMemoryUse"] = static_cast<unsigned long long (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetTotalMemoryUse) ;
    /*Return full absolute file name of resource if possible, or empty if not found.*//*(const String &name) const*/
    type["GetResourceFileName"] = static_cast<String (Urho3D::ResourceCache::*)(const  String &) const>(&Urho3D::ResourceCache::GetResourceFileName) ;
    /*Return whether automatic resource reloading is enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetAutoReloadResources"] = static_cast<bool (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetAutoReloadResources) ;
    /*Return whether resources that failed to load are returned. BIND_AS_PROPERTY*//*() const*/
    type["GetReturnFailedResources"] = static_cast<bool (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetReturnFailedResources) ;
    /*Return whether when getting resources should check package files or directories first. BIND_AS_PROPERTY*//*() const*/
    type["GetSearchPackagesFirst"] = static_cast<bool (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetSearchPackagesFirst) ;
    /*Return how many milliseconds maximum to spend on finishing background loaded resources. BIND_AS_PROPERTY*//*() const*/
    type["GetFinishBackgroundResourcesMs"] = static_cast<int (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetFinishBackgroundResourcesMs) ;
    /*Return a resource router by index.*//*(unsigned index) const*/
    type["GetResourceRouter"] = static_cast<ResourceRouter* (Urho3D::ResourceCache::*)(unsigned) const>(&Urho3D::ResourceCache::GetResourceRouter) ;
    /*Return either the path itself or its parent, based on which of them has recognized resource subdirectories.*//*(const String &path) const*/
    type["GetPreferredResourceDir"] = static_cast<String (Urho3D::ResourceCache::*)(const  String &) const>(&Urho3D::ResourceCache::GetPreferredResourceDir) ;
    /*Remove unsupported constructs from the resource name to prevent ambiguity, and normalize absolute filename to resource path relative if possible.*//*(const String &name) const*/
    type["SanitateResourceName"] = static_cast<String (Urho3D::ResourceCache::*)(const  String &) const>(&Urho3D::ResourceCache::SanitateResourceName) ;
    /*Remove unnecessary constructs from a resource directory name and ensure it to be an absolute path.*//*(const String &name) const*/
    type["SanitateResourceDirName"] = static_cast<String (Urho3D::ResourceCache::*)(const  String &) const>(&Urho3D::ResourceCache::SanitateResourceDirName) ;
    /*Store a dependency for a resource. If a dependency file changes, the resource will be reloaded.*//*(Resource *resource, const String &dependency)*/
    type["StoreResourceDependency"] = static_cast<void (Urho3D::ResourceCache::*)(Resource *, const  String &)>(&Urho3D::ResourceCache::StoreResourceDependency) ;
    /*Reset dependencies for a resource.*//*(Resource *resource)*/
    type["ResetDependencies"] = static_cast<void (Urho3D::ResourceCache::*)(Resource *)>(&Urho3D::ResourceCache::ResetDependencies) ;
    /*Returns a formatted string containing the memory actively used.*//*() const*/
    type["PrintMemoryUsage"] = static_cast<String (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::PrintMemoryUsage) ;
    /*Return all loaded resources of a specific type.*//*(PODVector< Resource * > &result, StringHash type) const*/
    type["GetResources"] = static_cast<void (Urho3D::ResourceCache::*)(PODVector<  Resource * > &, StringHash) const>(&Urho3D::ResourceCache::GetResources) ;
    /*Return an already loaded resource of specific type & name, or null if not found. Will not load if does not exist.*//*(StringHash type, const String &name)*/
    type["GetExistingResource"] = [](Urho3D::ResourceCache& self, StringHash type, const String &name, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetExistingResource(type, name));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    type["AddResourceDir"] = sol::overload(
        static_cast<bool (Urho3D::ResourceCache::*)(const  String &, unsigned)>(&Urho3D::ResourceCache::AddResourceDir) ,
        [](Urho3D::ResourceCache& self, const  String & pathName){ return self.AddResourceDir(pathName); } );
    type["AddPackageFile"] = sol::overload(
        static_cast<bool (Urho3D::ResourceCache::*)(PackageFile *, unsigned)>(&Urho3D::ResourceCache::AddPackageFile) ,
        [](Urho3D::ResourceCache& self, PackageFile * package){ return self.AddPackageFile(package); },
        static_cast<bool (Urho3D::ResourceCache::*)(const  String &, unsigned)>(&Urho3D::ResourceCache::AddPackageFile) ,
        [](Urho3D::ResourceCache& self, const  String & fileName){ return self.AddPackageFile(fileName); } );
    type["RemovePackageFile"] = sol::overload(
        static_cast<void (Urho3D::ResourceCache::*)(PackageFile *, bool, bool)>(&Urho3D::ResourceCache::RemovePackageFile) ,
        [](Urho3D::ResourceCache& self, PackageFile * package, bool releaseResources){ self.RemovePackageFile(package, releaseResources); },
        [](Urho3D::ResourceCache& self, PackageFile * package){ self.RemovePackageFile(package); },
        static_cast<void (Urho3D::ResourceCache::*)(const  String &, bool, bool)>(&Urho3D::ResourceCache::RemovePackageFile) ,
        [](Urho3D::ResourceCache& self, const  String & fileName, bool releaseResources){ self.RemovePackageFile(fileName, releaseResources); },
        [](Urho3D::ResourceCache& self, const  String & fileName){ self.RemovePackageFile(fileName); } );
    type["ReleaseResource"] = sol::overload(
        static_cast<void (Urho3D::ResourceCache::*)(StringHash, const  String &, bool)>(&Urho3D::ResourceCache::ReleaseResource) ,
        [](Urho3D::ResourceCache& self, StringHash type, const  String & name){ self.ReleaseResource(type, name); } );
    type["ReleaseResources"] = sol::overload(
        static_cast<void (Urho3D::ResourceCache::*)(StringHash, bool)>(&Urho3D::ResourceCache::ReleaseResources) ,
        [](Urho3D::ResourceCache& self, StringHash type){ self.ReleaseResources(type); },
        static_cast<void (Urho3D::ResourceCache::*)(StringHash, const  String &, bool)>(&Urho3D::ResourceCache::ReleaseResources) ,
        [](Urho3D::ResourceCache& self, StringHash type, const  String & partialName){ self.ReleaseResources(type, partialName); },
        static_cast<void (Urho3D::ResourceCache::*)(const  String &, bool)>(&Urho3D::ResourceCache::ReleaseResources) ,
        [](Urho3D::ResourceCache& self, const  String & partialName){ self.ReleaseResources(partialName); } );
    type["ReleaseAllResources"] = sol::overload(
        static_cast<void (Urho3D::ResourceCache::*)(bool)>(&Urho3D::ResourceCache::ReleaseAllResources) ,
        [](Urho3D::ResourceCache& self){ self.ReleaseAllResources(); } );
    type["AddResourceRouter"] = sol::overload(
        static_cast<void (Urho3D::ResourceCache::*)(ResourceRouter *, bool)>(&Urho3D::ResourceCache::AddResourceRouter) ,
        [](Urho3D::ResourceCache& self, ResourceRouter * router){ self.AddResourceRouter(router); } );
    type["GetFile"] = sol::overload(
        static_cast<SharedPtr<File> (Urho3D::ResourceCache::*)(const  String &, bool)>(&Urho3D::ResourceCache::GetFile) ,
        [](Urho3D::ResourceCache& self, const  String & name){ return self.GetFile(name); } );
    type["GetResource"] = sol::overload(
        [](Urho3D::ResourceCache& self, StringHash type, const String &name, bool sendEventOnFailure=true, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetResource(type, name, sendEventOnFailure));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::ResourceCache& self, StringHash type, const  String & name, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetResource(type, name));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["GetTempResource"] = sol::overload(
        static_cast<SharedPtr<Resource> (Urho3D::ResourceCache::*)(StringHash, const  String &, bool)>(&Urho3D::ResourceCache::GetTempResource) ,
        [](Urho3D::ResourceCache& self, StringHash type, const  String & name){ return self.GetTempResource(type, name); } );
    type["BackgroundLoadResource"] = sol::overload(
        static_cast<bool (Urho3D::ResourceCache::*)(StringHash, const  String &, bool, Resource *)>(&Urho3D::ResourceCache::BackgroundLoadResource) ,
        [](Urho3D::ResourceCache& self, StringHash type, const  String & name, bool sendEventOnFailure){ return self.BackgroundLoadResource(type, name, sendEventOnFailure); },
        [](Urho3D::ResourceCache& self, StringHash type, const  String & name){ return self.BackgroundLoadResource(type, name); } );
    type["autoReloadResources"] = sol::property(static_cast<bool (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetAutoReloadResources) 
        , static_cast<void (Urho3D::ResourceCache::*)(bool)>(&Urho3D::ResourceCache::SetAutoReloadResources) );
    type["finishBackgroundResourcesMs"] = sol::property(static_cast<int (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetFinishBackgroundResourcesMs) 
        , static_cast<void (Urho3D::ResourceCache::*)(int)>(&Urho3D::ResourceCache::SetFinishBackgroundResourcesMs) );
    type["memoryBudget"] = sol::property(static_cast<unsigned long long (Urho3D::ResourceCache::*)(StringHash) const>(&Urho3D::ResourceCache::GetMemoryBudget) 
        , static_cast<void (Urho3D::ResourceCache::*)(StringHash, unsigned long long)>(&Urho3D::ResourceCache::SetMemoryBudget) );
    type["memoryUse"] = sol::property(static_cast<unsigned long long (Urho3D::ResourceCache::*)(StringHash) const>(&Urho3D::ResourceCache::GetMemoryUse) );
    type["numBackgroundLoadResources"] = sol::property(static_cast<unsigned (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetNumBackgroundLoadResources) );
    type["packageFiles"] = sol::property(static_cast<const Vector<SharedPtr<PackageFile>>& (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetPackageFiles) );
    type["resourceDirs"] = sol::property(static_cast<const Vector<String>& (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetResourceDirs) );
    type["returnFailedResources"] = sol::property(static_cast<bool (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetReturnFailedResources) 
        , static_cast<void (Urho3D::ResourceCache::*)(bool)>(&Urho3D::ResourceCache::SetReturnFailedResources) );
    type["searchPackagesFirst"] = sol::property(static_cast<bool (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetSearchPackagesFirst) 
        , static_cast<void (Urho3D::ResourceCache::*)(bool)>(&Urho3D::ResourceCache::SetSearchPackagesFirst) );
    type["totalMemoryUse"] = sol::property(static_cast<unsigned long long (Urho3D::ResourceCache::*)() const>(&Urho3D::ResourceCache::GetTotalMemoryUse) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Resource/ResourceCache.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Resource/ResourceCache.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Resource/Resource.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ResourceGroup(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ResourceGroup>( "ResourceGroup"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::ResourceGroup()>();

// Members

    type["memoryBudget_"] = &Urho3D::ResourceGroup::memoryBudget_;
    type["memoryUse_"] = &Urho3D::ResourceGroup::memoryUse_;
    type["resources_"] = &Urho3D::ResourceGroup::resources_;

}

