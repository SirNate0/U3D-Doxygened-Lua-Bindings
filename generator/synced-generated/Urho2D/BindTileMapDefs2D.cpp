
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/TileMapDefs2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/TileMapDefs2D.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Urho2D/Sprite2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Tile2D(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Tile2D>( "Tile2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([]() { 
            return Urho3D::MakeShared<Urho3D::Tile2D>();
        });

// Members

    /*Return gid. BIND_AS_PROPERTY*//*() const*/
    type["GetGid"] = static_cast<unsigned (Urho3D::Tile2D::*)() const>(&Urho3D::Tile2D::GetGid) ;
    /*Return flip X. BIND_AS_PROPERTY*//*() const*/
    type["GetFlipX"] = static_cast<bool (Urho3D::Tile2D::*)() const>(&Urho3D::Tile2D::GetFlipX) ;
    /*Return flip Y. BIND_AS_PROPERTY*//*() const*/
    type["GetFlipY"] = static_cast<bool (Urho3D::Tile2D::*)() const>(&Urho3D::Tile2D::GetFlipY) ;
    /*Return swap X and Y. BIND_AS_PROPERTY*//*() const*/
    type["GetSwapXY"] = static_cast<bool (Urho3D::Tile2D::*)() const>(&Urho3D::Tile2D::GetSwapXY) ;
    /*Return sprite. BIND_AS_PROPERTY*//*() const*/
    type["GetSprite"] = [](Urho3D::Tile2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSprite());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return has property.*//*(const String &name) const*/
    type["HasProperty"] = static_cast<bool (Urho3D::Tile2D::*)(const  String &) const>(&Urho3D::Tile2D::HasProperty) ;
    /*Return property.*//*(const String &name) const*/
    type["GetProperty"] = static_cast<const String& (Urho3D::Tile2D::*)(const  String &) const>(&Urho3D::Tile2D::GetProperty) ;
    type["flipX"] = sol::property(static_cast<bool (Urho3D::Tile2D::*)() const>(&Urho3D::Tile2D::GetFlipX) );
    type["flipY"] = sol::property(static_cast<bool (Urho3D::Tile2D::*)() const>(&Urho3D::Tile2D::GetFlipY) );
    type["gid"] = sol::property(static_cast<unsigned (Urho3D::Tile2D::*)() const>(&Urho3D::Tile2D::GetGid) );
    type["sprite"] = sol::property([](Urho3D::Tile2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSprite());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["swapXY"] = sol::property(static_cast<bool (Urho3D::Tile2D::*)() const>(&Urho3D::Tile2D::GetSwapXY) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/TileMapDefs2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/TileMapDefs2D.h>
#include <Urho3D/Container/RefCounted.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Urho2D/Sprite2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_TileMapObject2D(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::TileMapObject2D>( "TileMapObject2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([]() { 
            return Urho3D::MakeShared<Urho3D::TileMapObject2D>();
        });

// Members

    /*Return type. BIND_AS_PROPERTY*//*() const*/
    type["GetObjectType"] = static_cast<TileMapObjectType2D (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetObjectType) ;
    /*Return name. BIND_AS_PROPERTY*//*() const*/
    type["GetName"] = static_cast<const String& (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetName) ;
    /*Return type. BIND_AS_PROPERTY*//*() const*/
    type["GetType"] = static_cast<const String& (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetType) ;
    /*Return position. BIND_AS_PROPERTY*//*() const*/
    type["GetPosition"] = static_cast<const Vector2& (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetPosition) ;
    /*Return size (for rectangle and ellipse). BIND_AS_PROPERTY*//*() const*/
    type["GetSize"] = static_cast<const Vector2& (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetSize) ;
    /*Return number of points (use for script). BIND_AS_PROPERTY*//*() const*/
    type["GetNumPoints"] = static_cast<unsigned (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetNumPoints) ;
    /*Return point at index (use for script).*//*(unsigned index) const*/
    type["GetPoint"] = static_cast<const Vector2& (Urho3D::TileMapObject2D::*)(unsigned) const>(&Urho3D::TileMapObject2D::GetPoint) ;
    /*Return tile Gid. BIND_AS_PROPERTY*//*() const*/
    type["GetTileGid"] = static_cast<unsigned (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetTileGid) ;
    /*Return tile flip X. BIND_AS_PROPERTY*//*() const*/
    type["GetTileFlipX"] = static_cast<bool (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetTileFlipX) ;
    /*Return tile flip Y. BIND_AS_PROPERTY*//*() const*/
    type["GetTileFlipY"] = static_cast<bool (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetTileFlipY) ;
    /*Return tile swap X and Y. BIND_AS_PROPERTY*//*() const*/
    type["GetTileSwapXY"] = static_cast<bool (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetTileSwapXY) ;
    /*Return tile sprite. BIND_AS_PROPERTY*//*() const*/
    type["GetTileSprite"] = [](Urho3D::TileMapObject2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTileSprite());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return has property.*//*(const String &name) const*/
    type["HasProperty"] = static_cast<bool (Urho3D::TileMapObject2D::*)(const  String &) const>(&Urho3D::TileMapObject2D::HasProperty) ;
    /*Return property value.*//*(const String &name) const*/
    type["GetProperty"] = static_cast<const String& (Urho3D::TileMapObject2D::*)(const  String &) const>(&Urho3D::TileMapObject2D::GetProperty) ;
    type["name"] = sol::property(static_cast<const String& (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetName) );
    type["numPoints"] = sol::property(static_cast<unsigned (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetNumPoints) );
    type["objectType"] = sol::property(static_cast<TileMapObjectType2D (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetObjectType) );
    type["position"] = sol::property(static_cast<const Vector2& (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetPosition) );
    type["size"] = sol::property(static_cast<const Vector2& (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetSize) );
    type["tileFlipX"] = sol::property(static_cast<bool (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetTileFlipX) );
    type["tileFlipY"] = sol::property(static_cast<bool (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetTileFlipY) );
    type["tileGid"] = sol::property(static_cast<unsigned (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetTileGid) );
    type["tileSprite"] = sol::property([](Urho3D::TileMapObject2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTileSprite());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["tileSwapXY"] = sol::property(static_cast<bool (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetTileSwapXY) );
    type["type"] = sol::property(static_cast<const String& (Urho3D::TileMapObject2D::*)() const>(&Urho3D::TileMapObject2D::GetType) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/TileMapDefs2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/TileMapDefs2D.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Resource/XMLElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_PropertySet2D(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::PropertySet2D>( "PropertySet2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([]() { 
            return Urho3D::MakeShared<Urho3D::PropertySet2D>();
        });

// Members

    /*Load from XML element.*//*(const XMLElement &element)*/
    type["Load"] = static_cast<void (Urho3D::PropertySet2D::*)(const  XMLElement &)>(&Urho3D::PropertySet2D::Load) ;
    /*Return has property.*//*(const String &name) const*/
    type["HasProperty"] = static_cast<bool (Urho3D::PropertySet2D::*)(const  String &) const>(&Urho3D::PropertySet2D::HasProperty) ;
    /*Return property value.*//*(const String &name) const*/
    type["GetProperty"] = static_cast<const String& (Urho3D::PropertySet2D::*)(const  String &) const>(&Urho3D::PropertySet2D::GetProperty) ;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/TileMapDefs2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/TileMapDefs2D.h>
#include <Urho3D/Container/RefCounted.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Urho2D/Sprite2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_TileMapInfo2D(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::TileMapInfo2D>( "TileMapInfo2D"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    /*Return map width. BIND_AS_PROPERTY*//*() const*/
    type["GetMapWidth"] = static_cast<float (Urho3D::TileMapInfo2D::*)() const>(&Urho3D::TileMapInfo2D::GetMapWidth) ;
    /*return map height. BIND_AS_PROPERTY*//*() const*/
    type["GetMapHeight"] = static_cast<float (Urho3D::TileMapInfo2D::*)() const>(&Urho3D::TileMapInfo2D::GetMapHeight) ;
    /*Convert tmx position to Urho position.*//*(const Vector2 &position) const*/
    type["ConvertPosition"] = static_cast<Vector2 (Urho3D::TileMapInfo2D::*)(const  Vector2 &) const>(&Urho3D::TileMapInfo2D::ConvertPosition) ;
    /*Convert tile index to position.*//*(int x, int y) const*/
    type["TileIndexToPosition"] = static_cast<Vector2 (Urho3D::TileMapInfo2D::*)(int, int) const>(&Urho3D::TileMapInfo2D::TileIndexToPosition) ;
#if 0 // INVALID: NeedsWrap(int &)NeedsWrap(int &)
    /*Convert position to tile index, if out of map return false.*//*(int &x, int &y, const Vector2 &position) const*/
    type["PositionToTileIndex"] = static_cast<bool (Urho3D::TileMapInfo2D::*)(int &, int &, const  Vector2 &) const>(&Urho3D::TileMapInfo2D::PositionToTileIndex) ;
#endif
        
    type["mapHeight"] = sol::property(static_cast<float (Urho3D::TileMapInfo2D::*)() const>(&Urho3D::TileMapInfo2D::GetMapHeight) );
    type["mapWidth"] = sol::property(static_cast<float (Urho3D::TileMapInfo2D::*)() const>(&Urho3D::TileMapInfo2D::GetMapWidth) );
    type["orientation_"] = &Urho3D::TileMapInfo2D::orientation_;
    type["width_"] = &Urho3D::TileMapInfo2D::width_;
    type["height_"] = &Urho3D::TileMapInfo2D::height_;
    type["tileWidth_"] = &Urho3D::TileMapInfo2D::tileWidth_;
    type["tileHeight_"] = &Urho3D::TileMapInfo2D::tileHeight_;

}

