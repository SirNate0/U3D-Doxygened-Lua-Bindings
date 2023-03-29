
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/TileMapLayer2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/TileMapLayer2D.h>
#include <Urho3D/Container/RefCounted.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Scene/Node.h>
#include <Urho3D/Urho2D/Sprite2D.h>
#include <Urho3D/Urho2D/TileMap2D.h>
#include <Urho3D/Urho2D/TileMapDefs2D.h>
#include <Urho3D/Urho2D/TmxFile2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_TileMapLayer2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::TileMapLayer2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::TileMapLayer2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::TileMapLayer2D>((Urho3D::TileMapLayer2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::TileMapLayer2D>( "TileMapLayer2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::TileMapLayer2D>(context);
        });

// Members

    /*Add debug geometry to the debug renderer.*//*(DebugRenderer *debug, bool depthTest) override*/
    type["DrawDebugGeometry"] = static_cast<void (Urho3D::TileMapLayer2D::*)(DebugRenderer *, bool)>(&Urho3D::TileMapLayer2D::DrawDebugGeometry) ;
    /*Initialize with tile map and tmx layer.*//*(TileMap2D *tileMap, const TmxLayer2D *tmxLayer)*/
    type["Initialize"] = static_cast<void (Urho3D::TileMapLayer2D::*)(TileMap2D *, const  TmxLayer2D *)>(&Urho3D::TileMapLayer2D::Initialize) ;
    /*Set draw order. BIND_AS_PROPERTY*//*(int drawOrder)*/
    type["SetDrawOrder"] = static_cast<void (Urho3D::TileMapLayer2D::*)(int)>(&Urho3D::TileMapLayer2D::SetDrawOrder) ;
    /*Set visible. BIND_AS_PROPERTY*//*(bool visible)*/
    type["SetVisible"] = static_cast<void (Urho3D::TileMapLayer2D::*)(bool)>(&Urho3D::TileMapLayer2D::SetVisible) ;
    /*Return tile map.*//*() const*/
    type["GetTileMap"] = [](Urho3D::TileMapLayer2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTileMap());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return tmx layer.*//*() const*/
# if 0 // SKIPPED
    type["GetTmxLayer"] = [](Urho3D::TileMapLayer2D& self){ return SharedPtr(self.GetTmxLayer()); };
# endif
    /*Return draw order. BIND_AS_PROPERTY*//*() const*/
    type["GetDrawOrder"] = static_cast<int (Urho3D::TileMapLayer2D::*)() const>(&Urho3D::TileMapLayer2D::GetDrawOrder) ;
    /*Return visible. BIND_AS_PROPERTY*//*() const*/
    type["IsVisible"] = static_cast<bool (Urho3D::TileMapLayer2D::*)() const>(&Urho3D::TileMapLayer2D::IsVisible) ;
    /*Return has property.*//*(const String &name) const*/
    type["HasProperty"] = static_cast<bool (Urho3D::TileMapLayer2D::*)(const  String &) const>(&Urho3D::TileMapLayer2D::HasProperty) ;
    /*Return property.*//*(const String &name) const*/
    type["GetProperty"] = static_cast<const String& (Urho3D::TileMapLayer2D::*)(const  String &) const>(&Urho3D::TileMapLayer2D::GetProperty) ;
    /*Return layer type. BIND_AS_PROPERTY*//*() const*/
    type["GetLayerType"] = static_cast<TileMapLayerType2D (Urho3D::TileMapLayer2D::*)() const>(&Urho3D::TileMapLayer2D::GetLayerType) ;
    /*Return width (for tile layer only). BIND_AS_PROPERTY*//*() const*/
    type["GetWidth"] = static_cast<int (Urho3D::TileMapLayer2D::*)() const>(&Urho3D::TileMapLayer2D::GetWidth) ;
    /*Return height (for tile layer only). BIND_AS_PROPERTY*//*() const*/
    type["GetHeight"] = static_cast<int (Urho3D::TileMapLayer2D::*)() const>(&Urho3D::TileMapLayer2D::GetHeight) ;
    /*Return tile node (for tile layer only).*//*(int x, int y) const*/
    type["GetTileNode"] = [](Urho3D::TileMapLayer2D& self, int x, int y, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTileNode(x, y));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return tile (for tile layer only).*//*(int x, int y) const*/
    type["GetTile"] = [](Urho3D::TileMapLayer2D& self, int x, int y){ return SharedPtr(self.GetTile(x, y)); };
    /*Return number of tile map objects (for object group only). BIND_AS_PROPERTY*//*() const*/
    type["GetNumObjects"] = static_cast<unsigned (Urho3D::TileMapLayer2D::*)() const>(&Urho3D::TileMapLayer2D::GetNumObjects) ;
    /*Return tile map object (for object group only).*//*(unsigned index) const*/
    type["GetObject"] = [](Urho3D::TileMapLayer2D& self, unsigned index){ return SharedPtr(self.GetObject(index)); };
    /*Return object node (for object group only).*//*(unsigned index) const*/
    type["GetObjectNode"] = [](Urho3D::TileMapLayer2D& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetObjectNode(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return image node (for image layer only). BIND_AS_PROPERTY*//*() const*/
    type["GetImageNode"] = [](Urho3D::TileMapLayer2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetImageNode());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    type["drawOrder"] = sol::property(static_cast<int (Urho3D::TileMapLayer2D::*)() const>(&Urho3D::TileMapLayer2D::GetDrawOrder) 
        , static_cast<void (Urho3D::TileMapLayer2D::*)(int)>(&Urho3D::TileMapLayer2D::SetDrawOrder) );
    type["height"] = sol::property(static_cast<int (Urho3D::TileMapLayer2D::*)() const>(&Urho3D::TileMapLayer2D::GetHeight) );
    type["imageNode"] = sol::property([](Urho3D::TileMapLayer2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetImageNode());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["layerType"] = sol::property(static_cast<TileMapLayerType2D (Urho3D::TileMapLayer2D::*)() const>(&Urho3D::TileMapLayer2D::GetLayerType) );
    type["numObjects"] = sol::property(static_cast<unsigned (Urho3D::TileMapLayer2D::*)() const>(&Urho3D::TileMapLayer2D::GetNumObjects) );
    type["visible"] = sol::property(static_cast<bool (Urho3D::TileMapLayer2D::*)() const>(&Urho3D::TileMapLayer2D::IsVisible) 
        , static_cast<void (Urho3D::TileMapLayer2D::*)(bool)>(&Urho3D::TileMapLayer2D::SetVisible) );
    type["width"] = sol::property(static_cast<int (Urho3D::TileMapLayer2D::*)() const>(&Urho3D::TileMapLayer2D::GetWidth) );

}

