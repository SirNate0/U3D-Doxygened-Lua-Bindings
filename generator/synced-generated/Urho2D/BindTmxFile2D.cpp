
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/TmxFile2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/TmxFile2D.h>
#include <Urho3D/Container/RefCounted.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Urho2D/Sprite2D.h>
#include <Urho3D/Urho2D/TmxFile2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_TmxLayer2D(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::TmxLayer2D>( "TmxLayer2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](TmxFile2D *tmxFile, TileMapLayerType2D type) { 
            return Urho3D::MakeShared<Urho3D::TmxLayer2D>(tmxFile, type);
        });

// Members

    /*Return tmx file.*//*() const*/
    type["GetTmxFile"] = [](Urho3D::TmxLayer2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTmxFile());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return type.*//*() const*/
    type["GetType"] = static_cast<TileMapLayerType2D (Urho3D::TmxLayer2D::*)() const>(&Urho3D::TmxLayer2D::GetType) ;
    /*Return name.*//*() const*/
    type["GetName"] = static_cast<const String& (Urho3D::TmxLayer2D::*)() const>(&Urho3D::TmxLayer2D::GetName) ;
    /*Return width.*//*() const*/
    type["GetWidth"] = static_cast<int (Urho3D::TmxLayer2D::*)() const>(&Urho3D::TmxLayer2D::GetWidth) ;
    /*Return height.*//*() const*/
    type["GetHeight"] = static_cast<int (Urho3D::TmxLayer2D::*)() const>(&Urho3D::TmxLayer2D::GetHeight) ;
    /*Return is visible.*//*() const*/
    type["IsVisible"] = static_cast<bool (Urho3D::TmxLayer2D::*)() const>(&Urho3D::TmxLayer2D::IsVisible) ;
    /*Return has property (use for script).*//*(const String &name) const*/
    type["HasProperty"] = static_cast<bool (Urho3D::TmxLayer2D::*)(const  String &) const>(&Urho3D::TmxLayer2D::HasProperty) ;
    /*Return property value (use for script).*//*(const String &name) const*/
    type["GetProperty"] = static_cast<const String& (Urho3D::TmxLayer2D::*)(const  String &) const>(&Urho3D::TmxLayer2D::GetProperty) ;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/TmxFile2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/TmxFile2D.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/RefCounted.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/Urho2D/Sprite2D.h>
#include <Urho3D/Urho2D/TileMapDefs2D.h>
#include <Urho3D/Urho2D/TmxFile2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_TmxFile2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::TmxFile2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::TmxFile2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::TmxFile2D>((Urho3D::TmxFile2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::TmxFile2D>( "TmxFile2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::TmxFile2D>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::TmxFile2D::*)(Deserializer &)>(&Urho3D::TmxFile2D::BeginLoad) ;
    /*Finish resource loading. Always called from the main thread. Return true if successful.*//*() override*/
    type["EndLoad"] = static_cast<bool (Urho3D::TmxFile2D::*)()>(&Urho3D::TmxFile2D::EndLoad) ;
    /*Set Tilemap information.*//*(Orientation2D orientation, int width, int height, float tileWidth, float tileHeight)*/
    type["SetInfo"] = static_cast<bool (Urho3D::TmxFile2D::*)(Orientation2D, int, int, float, float)>(&Urho3D::TmxFile2D::SetInfo) ;
    /*Return Tilemap information.*//*() const*/
    type["GetInfo"] = static_cast<const TileMapInfo2D& (Urho3D::TmxFile2D::*)() const>(&Urho3D::TmxFile2D::GetInfo) ;
    /*Return tile sprite by gid, if not exist return 0.*//*(unsigned gid) const*/
    type["GetTileSprite"] = [](Urho3D::TmxFile2D& self, unsigned gid, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTileSprite(gid));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return tile collision shapes for a given gid.*//*(unsigned gid) const*/
    type["GetTileCollisionShapes"] = static_cast<Vector<SharedPtr<TileMapObject2D>> (Urho3D::TmxFile2D::*)(unsigned) const>(&Urho3D::TmxFile2D::GetTileCollisionShapes) ;
    /*Return tile property set by gid, if not exist return 0.*//*(unsigned gid) const*/
    type["GetTilePropertySet"] = [](Urho3D::TmxFile2D& self, unsigned gid){ return SharedPtr(self.GetTilePropertySet(gid)); };
    /*Return number of layers.*//*() const*/
    type["GetNumLayers"] = static_cast<unsigned (Urho3D::TmxFile2D::*)() const>(&Urho3D::TmxFile2D::GetNumLayers) ;
    /*Return layer at index.*//*(unsigned index) const*/
# if 0 // SKIPPED
    type["GetLayer"] = [](Urho3D::TmxFile2D& self, unsigned index){ return SharedPtr(self.GetLayer(index)); };
# endif
    /*Set texture edge offset for all sprites, in pixels. BIND_AS_ALIAS_set_edgeOffset*//*(float offset)*/
    type["SetSpriteTextureEdgeOffset"] = static_cast<void (Urho3D::TmxFile2D::*)(float)>(&Urho3D::TmxFile2D::SetSpriteTextureEdgeOffset) ;
    /*Return texture edge offset, in pixels. BIND_AS_ALIAS_get_edgeOffset*//*() const*/
    type["GetSpriteTextureEdgeOffset"] = static_cast<float (Urho3D::TmxFile2D::*)() const>(&Urho3D::TmxFile2D::GetSpriteTextureEdgeOffset) ;
    type["AddLayer"] = sol::overload(
        static_cast<void (Urho3D::TmxFile2D::*)(unsigned, TmxLayer2D *)>(&Urho3D::TmxFile2D::AddLayer) ,
        static_cast<void (Urho3D::TmxFile2D::*)(Urho3D::TmxLayer2D *)>(&Urho3D::TmxFile2D::AddLayer)  );
    type["spriteTextureEdgeOffset"] = sol::property(static_cast<float (Urho3D::TmxFile2D::*)() const>(&Urho3D::TmxFile2D::GetSpriteTextureEdgeOffset) 
        , static_cast<void (Urho3D::TmxFile2D::*)(float)>(&Urho3D::TmxFile2D::SetSpriteTextureEdgeOffset) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/TmxFile2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/TmxFile2D.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Urho2D/TileMapDefs2D.h>
#include <Urho3D/Urho2D/TmxFile2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_TmxTileLayer2D(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::TmxTileLayer2D>( "TmxTileLayer2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::TmxLayer2D,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](TmxFile2D *tmxFile) { 
            return Urho3D::MakeShared<Urho3D::TmxTileLayer2D>(tmxFile);
        });

// Members

    /*Load from XML element.*//*(const XMLElement &element, const TileMapInfo2D &info)*/
    type["Load"] = static_cast<bool (Urho3D::TmxTileLayer2D::*)(const  XMLElement &, const  TileMapInfo2D &)>(&Urho3D::TmxTileLayer2D::Load) ;
    /*Return tile.*//*(int x, int y) const*/
    type["GetTile"] = [](Urho3D::TmxTileLayer2D& self, int x, int y){ return SharedPtr(self.GetTile(x, y)); };

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/TmxFile2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/TmxFile2D.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Urho2D/Sprite2D.h>
#include <Urho3D/Urho2D/TileMapDefs2D.h>
#include <Urho3D/Urho2D/TmxFile2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_TmxImageLayer2D(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::TmxImageLayer2D>( "TmxImageLayer2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::TmxLayer2D,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](TmxFile2D *tmxFile) { 
            return Urho3D::MakeShared<Urho3D::TmxImageLayer2D>(tmxFile);
        });

// Members

    /*Load from XML element.*//*(const XMLElement &element, const TileMapInfo2D &info)*/
    type["Load"] = static_cast<bool (Urho3D::TmxImageLayer2D::*)(const  XMLElement &, const  TileMapInfo2D &)>(&Urho3D::TmxImageLayer2D::Load) ;
    /*Return position.*//*() const*/
    type["GetPosition"] = static_cast<const Vector2& (Urho3D::TmxImageLayer2D::*)() const>(&Urho3D::TmxImageLayer2D::GetPosition) ;
    /*Return source.*//*() const*/
    type["GetSource"] = static_cast<const String& (Urho3D::TmxImageLayer2D::*)() const>(&Urho3D::TmxImageLayer2D::GetSource) ;
    /*Return sprite.*//*() const*/
    type["GetSprite"] = [](Urho3D::TmxImageLayer2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSprite());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/TmxFile2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/TmxFile2D.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Resource/XMLElement.h>
#include <Urho3D/Urho2D/TileMapDefs2D.h>
#include <Urho3D/Urho2D/TmxFile2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_TmxObjectGroup2D(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::TmxObjectGroup2D>( "TmxObjectGroup2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::TmxLayer2D,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](TmxFile2D *tmxFile) { 
            return Urho3D::MakeShared<Urho3D::TmxObjectGroup2D>(tmxFile);
        });

// Members

    /*Load from XML element.*//*(const XMLElement &element, const TileMapInfo2D &info)*/
    type["Load"] = static_cast<bool (Urho3D::TmxObjectGroup2D::*)(const  XMLElement &, const  TileMapInfo2D &)>(&Urho3D::TmxObjectGroup2D::Load) ;
    /*Return number of objects.*//*() const*/
    type["GetNumObjects"] = static_cast<unsigned (Urho3D::TmxObjectGroup2D::*)() const>(&Urho3D::TmxObjectGroup2D::GetNumObjects) ;
    /*Return tile map object at index.*//*(unsigned index) const*/
    type["GetObject"] = [](Urho3D::TmxObjectGroup2D& self, unsigned index){ return SharedPtr(self.GetObject(index)); };
    type["StoreObject"] = sol::overload(
        static_cast<void (Urho3D::TmxObjectGroup2D::*)(const  XMLElement &, const  SharedPtr<  TileMapObject2D > &, const  TileMapInfo2D &, bool)>(&Urho3D::TmxObjectGroup2D::StoreObject) ,
        [](Urho3D::TmxObjectGroup2D& self, const  XMLElement & objectElem, const  SharedPtr<  TileMapObject2D > & object, const  TileMapInfo2D & info){ self.StoreObject(objectElem, object, info); } );

}

