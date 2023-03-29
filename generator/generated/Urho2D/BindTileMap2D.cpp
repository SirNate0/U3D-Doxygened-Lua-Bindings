
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/TileMap2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/TileMap2D.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Urho2D/TileMapDefs2D.h>
#include <Urho3D/Urho2D/TileMapLayer2D.h>
#include <Urho3D/Urho2D/TmxFile2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_TileMap2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::TileMap2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::TileMap2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::TileMap2D>((Urho3D::TileMap2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::TileMap2D>( "TileMap2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::TileMap2D>(context);
        });

// Members

    /*Set tmx file. BIND_AS_PROPERTY*//*(TmxFile2D *tmxFile)*/
    type["SetTmxFile"] = static_cast<void (Urho3D::TileMap2D::*)(TmxFile2D *)>(&Urho3D::TileMap2D::SetTmxFile) ;
    /*Return tmx file. BIND_AS_PROPERTY*//*() const*/
    type["GetTmxFile"] = [](Urho3D::TileMap2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTmxFile());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return information. BIND_AS_PROPERTY*//*() const*/
    type["GetInfo"] = static_cast<const TileMapInfo2D& (Urho3D::TileMap2D::*)() const>(&Urho3D::TileMap2D::GetInfo) ;
    /*Return number of layers. BIND_AS_PROPERTY*//*() const*/
    type["GetNumLayers"] = static_cast<unsigned (Urho3D::TileMap2D::*)() const>(&Urho3D::TileMap2D::GetNumLayers) ;
    /*Return tile map layer at index.*//*(unsigned index) const*/
    type["GetLayer"] = [](Urho3D::TileMap2D& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetLayer(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Convert tile index to position.*//*(int x, int y) const*/
    type["TileIndexToPosition"] = static_cast<Vector2 (Urho3D::TileMap2D::*)(int, int) const>(&Urho3D::TileMap2D::TileIndexToPosition) ;
#if 0 // INVALID: NeedsWrap(int &)NeedsWrap(int &)
    /*Convert position to tile index, if out of map return false.*//*(int &x, int &y, const Vector2 &position) const*/
    type["PositionToTileIndex"] = static_cast<bool (Urho3D::TileMap2D::*)(int &, int &, const  Vector2 &) const>(&Urho3D::TileMap2D::PositionToTileIndex) ;
#endif
        
    /*Set tile map file attribute.*//*(const ResourceRef &value)*/
    type["SetTmxFileAttr"] = static_cast<void (Urho3D::TileMap2D::*)(const  ResourceRef &)>(&Urho3D::TileMap2D::SetTmxFileAttr) ;
    /*Return tile map file attribute.*//*() const*/
    type["GetTmxFileAttr"] = static_cast<ResourceRef (Urho3D::TileMap2D::*)() const>(&Urho3D::TileMap2D::GetTmxFileAttr) ;
    /**//*(unsigned gid) const*/
    type["GetTileCollisionShapes"] = static_cast<Vector<SharedPtr<TileMapObject2D>> (Urho3D::TileMap2D::*)(unsigned) const>(&Urho3D::TileMap2D::GetTileCollisionShapes) ;
    type["DrawDebugGeometry"] = sol::overload(
        static_cast<void (Urho3D::TileMap2D::*)(DebugRenderer *, bool)>(&Urho3D::TileMap2D::DrawDebugGeometry) ,
        static_cast<void (Urho3D::TileMap2D::*)()>(&Urho3D::TileMap2D::DrawDebugGeometry)  );
    type["info"] = sol::property(static_cast<const TileMapInfo2D& (Urho3D::TileMap2D::*)() const>(&Urho3D::TileMap2D::GetInfo) );
    type["numLayers"] = sol::property(static_cast<unsigned (Urho3D::TileMap2D::*)() const>(&Urho3D::TileMap2D::GetNumLayers) );
    type["tmxFile"] = sol::property([](Urho3D::TileMap2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTmxFile());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::TileMap2D::*)(TmxFile2D *)>(&Urho3D::TileMap2D::SetTmxFile) );

}

