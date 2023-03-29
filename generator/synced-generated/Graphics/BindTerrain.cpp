
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Terrain.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Terrain.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/Terrain.h>
#include <Urho3D/Graphics/TerrainPatch.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Resource/Image.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Terrain(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Terrain::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Terrain::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Terrain>((Urho3D::Terrain*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Terrain>( "Terrain"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Terrain>(context);
        });

// Members

    /*Apply attribute changes that can not be applied immediately. Called after scene load or a network update.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::Terrain::*)()>(&Urho3D::Terrain::ApplyAttributes) ;
    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::Terrain::*)()>(&Urho3D::Terrain::OnSetEnabled) ;
    /*Set patch quads per side. Must be a power of two. BIND_AS_PROPERTY*//*(int size)*/
    type["SetPatchSize"] = static_cast<void (Urho3D::Terrain::*)(int)>(&Urho3D::Terrain::SetPatchSize) ;
    /*Set vertex (XZ) and height (Y) spacing. BIND_AS_PROPERTY*//*(const Vector3 &spacing)*/
    type["SetSpacing"] = static_cast<void (Urho3D::Terrain::*)(const  Vector3 &)>(&Urho3D::Terrain::SetSpacing) ;
    /*Set maximum number of LOD levels for terrain patches. This can be between 1-4. BIND_AS_PROPERTY*//*(unsigned levels)*/
    type["SetMaxLodLevels"] = static_cast<void (Urho3D::Terrain::*)(unsigned)>(&Urho3D::Terrain::SetMaxLodLevels) ;
    /*Set LOD level used for terrain patch occlusion. By default (M_MAX_UNSIGNED) the coarsest. Since the LOD level used needs to be fixed, using finer LOD levels may result in false positive occlusion in cases where the actual rendered geometry is coarser, so use with caution. BIND_AS_PROPERTY*//*(unsigned level)*/
    type["SetOcclusionLodLevel"] = static_cast<void (Urho3D::Terrain::*)(unsigned)>(&Urho3D::Terrain::SetOcclusionLodLevel) ;
    /*Set smoothing of heightmap. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetSmoothing"] = static_cast<void (Urho3D::Terrain::*)(bool)>(&Urho3D::Terrain::SetSmoothing) ;
    /*Set heightmap image. Dimensions should be a power of two + 1. Uses 8-bit grayscale, or optionally red as MSB and green as LSB for 16-bit accuracy. Return true if successful. BIND_AS_PROPERTY*//*(Image *image)*/
    type["SetHeightMap"] = static_cast<bool (Urho3D::Terrain::*)(Image *)>(&Urho3D::Terrain::SetHeightMap) ;
    /*Set material. BIND_AS_PROPERTY*//*(Material *material)*/
    type["SetMaterial"] = static_cast<void (Urho3D::Terrain::*)(Material *)>(&Urho3D::Terrain::SetMaterial) ;
    /*Set north (positive Z) neighbor terrain for seamless LOD changes across terrains. BIND_AS_PROPERTY*//*(Terrain *north)*/
    type["SetNorthNeighbor"] = static_cast<void (Urho3D::Terrain::*)(Terrain *)>(&Urho3D::Terrain::SetNorthNeighbor) ;
    /*Set south (negative Z) neighbor terrain for seamless LOD changes across terrains. BIND_AS_PROPERTY*//*(Terrain *south)*/
    type["SetSouthNeighbor"] = static_cast<void (Urho3D::Terrain::*)(Terrain *)>(&Urho3D::Terrain::SetSouthNeighbor) ;
    /*Set west (negative X) neighbor terrain for seamless LOD changes across terrains. BIND_AS_PROPERTY*//*(Terrain *west)*/
    type["SetWestNeighbor"] = static_cast<void (Urho3D::Terrain::*)(Terrain *)>(&Urho3D::Terrain::SetWestNeighbor) ;
    /*Set east (positive X) neighbor terrain for seamless LOD changes across terrains. BIND_AS_PROPERTY*//*(Terrain *east)*/
    type["SetEastNeighbor"] = static_cast<void (Urho3D::Terrain::*)(Terrain *)>(&Urho3D::Terrain::SetEastNeighbor) ;
    /*Set all neighbor terrains at once.*//*(Terrain *north, Terrain *south, Terrain *west, Terrain *east)*/
    type["SetNeighbors"] = static_cast<void (Urho3D::Terrain::*)(Terrain *, Terrain *, Terrain *, Terrain *)>(&Urho3D::Terrain::SetNeighbors) ;
    /*Set draw distance for patches. BIND_AS_PROPERTY*//*(float distance)*/
    type["SetDrawDistance"] = static_cast<void (Urho3D::Terrain::*)(float)>(&Urho3D::Terrain::SetDrawDistance) ;
    /*Set shadow draw distance for patches. BIND_AS_PROPERTY*//*(float distance)*/
    type["SetShadowDistance"] = static_cast<void (Urho3D::Terrain::*)(float)>(&Urho3D::Terrain::SetShadowDistance) ;
    /*Set LOD bias for patches. Affects which terrain LOD to display. BIND_AS_PROPERTY*//*(float bias)*/
    type["SetLodBias"] = static_cast<void (Urho3D::Terrain::*)(float)>(&Urho3D::Terrain::SetLodBias) ;
    /*Set view mask for patches. Is and'ed with camera's view mask to see if the object should be rendered. BIND_AS_PROPERTY*//*(unsigned mask)*/
    type["SetViewMask"] = static_cast<void (Urho3D::Terrain::*)(unsigned)>(&Urho3D::Terrain::SetViewMask) ;
    /*Set light mask for patches. Is and'ed with light's and zone's light mask to see if the object should be lit. BIND_AS_PROPERTY*//*(unsigned mask)*/
    type["SetLightMask"] = static_cast<void (Urho3D::Terrain::*)(unsigned)>(&Urho3D::Terrain::SetLightMask) ;
    /*Set shadow mask for patches. Is and'ed with light's light mask and zone's shadow mask to see if the object should be rendered to a shadow map. BIND_AS_PROPERTY*//*(unsigned mask)*/
    type["SetShadowMask"] = static_cast<void (Urho3D::Terrain::*)(unsigned)>(&Urho3D::Terrain::SetShadowMask) ;
    /*Set zone mask for patches. Is and'ed with zone's zone mask to see if the object should belong to the zone. BIND_AS_PROPERTY*//*(unsigned mask)*/
    type["SetZoneMask"] = static_cast<void (Urho3D::Terrain::*)(unsigned)>(&Urho3D::Terrain::SetZoneMask) ;
    /*Set maximum number of per-pixel lights for patches. Default 0 is unlimited. BIND_AS_PROPERTY*//*(unsigned num)*/
    type["SetMaxLights"] = static_cast<void (Urho3D::Terrain::*)(unsigned)>(&Urho3D::Terrain::SetMaxLights) ;
    /*Set shadowcaster flag for patches. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetCastShadows"] = static_cast<void (Urho3D::Terrain::*)(bool)>(&Urho3D::Terrain::SetCastShadows) ;
    /*Set occlusion flag for patches. Occlusion uses the coarsest LOD by default. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetOccluder"] = static_cast<void (Urho3D::Terrain::*)(bool)>(&Urho3D::Terrain::SetOccluder) ;
    /*Set occludee flag for patches. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetOccludee"] = static_cast<void (Urho3D::Terrain::*)(bool)>(&Urho3D::Terrain::SetOccludee) ;
    /*Apply changes from the heightmap image.*//*()*/
    type["ApplyHeightMap"] = static_cast<void (Urho3D::Terrain::*)()>(&Urho3D::Terrain::ApplyHeightMap) ;
    /*Return patch quads per side. BIND_AS_PROPERTY*//*() const*/
    type["GetPatchSize"] = static_cast<int (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetPatchSize) ;
    /*Return vertex and height spacing. BIND_AS_PROPERTY*//*() const*/
    type["GetSpacing"] = static_cast<const Vector3& (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetSpacing) ;
    /*Return heightmap size in vertices. BIND_AS_PROPERTY*//*() const*/
    type["GetNumVertices"] = static_cast<const IntVector2& (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetNumVertices) ;
    /*Return heightmap size in patches. BIND_AS_PROPERTY*//*() const*/
    type["GetNumPatches"] = static_cast<const IntVector2& (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetNumPatches) ;
    /*Return maximum number of LOD levels for terrain patches. This can be between 1-4. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxLodLevels"] = static_cast<unsigned (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetMaxLodLevels) ;
    /*Return LOD level used for occlusion. BIND_AS_PROPERTY*//*() const*/
    type["GetOcclusionLodLevel"] = static_cast<unsigned (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetOcclusionLodLevel) ;
    /*Return whether smoothing is in use. BIND_AS_PROPERTY*//*() const*/
    type["GetSmoothing"] = static_cast<bool (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetSmoothing) ;
    /*Return heightmap image. BIND_AS_PROPERTY*//*() const*/
    type["GetHeightMap"] = [](Urho3D::Terrain& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetHeightMap());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return material. BIND_AS_PROPERTY*//*() const*/
    type["GetMaterial"] = [](Urho3D::Terrain& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return patch by patch coordinates including neighbor terrains.*//*(int x, int z) const*/
    type["GetNeighborPatch"] = [](Urho3D::Terrain& self, int x, int z, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetNeighborPatch(x, z));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return height at world coordinates.*//*(const Vector3 &worldPosition) const*/
    type["GetHeight"] = static_cast<float (Urho3D::Terrain::*)(const  Vector3 &) const>(&Urho3D::Terrain::GetHeight) ;
    /*Return normal at world coordinates.*//*(const Vector3 &worldPosition) const*/
    type["GetNormal"] = static_cast<Vector3 (Urho3D::Terrain::*)(const  Vector3 &) const>(&Urho3D::Terrain::GetNormal) ;
    /*Convert world position to heightmap pixel position. Note that the internal height data representation is reversed vertically, but in the heightmap image north is at the top.*//*(const Vector3 &worldPosition) const*/
    type["WorldToHeightMap"] = static_cast<IntVector2 (Urho3D::Terrain::*)(const  Vector3 &) const>(&Urho3D::Terrain::WorldToHeightMap) ;
    /*Convert heightmap pixel position to world position.*//*(const IntVector2 &pixelPosition) const*/
    type["HeightMapToWorld"] = static_cast<Vector3 (Urho3D::Terrain::*)(const  IntVector2 &) const>(&Urho3D::Terrain::HeightMapToWorld) ;
    /*Return north neighbor terrain. BIND_AS_PROPERTY*//*() const*/
    type["GetNorthNeighbor"] = [](Urho3D::Terrain& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetNorthNeighbor());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return south neighbor terrain. BIND_AS_PROPERTY*//*() const*/
    type["GetSouthNeighbor"] = [](Urho3D::Terrain& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSouthNeighbor());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return west neighbor terrain. BIND_AS_PROPERTY*//*() const*/
    type["GetWestNeighbor"] = [](Urho3D::Terrain& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetWestNeighbor());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return east neighbor terrain. BIND_AS_PROPERTY*//*() const*/
    type["GetEastNeighbor"] = [](Urho3D::Terrain& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetEastNeighbor());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return raw height data.*//*() const*/
    type["GetHeightData"] = static_cast<SharedArrayPtr<float> (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetHeightData) ;
    /*Return draw distance. BIND_AS_PROPERTY*//*() const*/
    type["GetDrawDistance"] = static_cast<float (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetDrawDistance) ;
    /*Return shadow draw distance. BIND_AS_PROPERTY*//*() const*/
    type["GetShadowDistance"] = static_cast<float (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetShadowDistance) ;
    /*Return LOD bias. BIND_AS_PROPERTY*//*() const*/
    type["GetLodBias"] = static_cast<float (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetLodBias) ;
    /*Return view mask. BIND_AS_PROPERTY*//*() const*/
    type["GetViewMask"] = static_cast<unsigned (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetViewMask) ;
    /*Return light mask. BIND_AS_PROPERTY*//*() const*/
    type["GetLightMask"] = static_cast<unsigned (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetLightMask) ;
    /*Return shadow mask. BIND_AS_PROPERTY*//*() const*/
    type["GetShadowMask"] = static_cast<unsigned (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetShadowMask) ;
    /*Return zone mask. BIND_AS_PROPERTY*//*() const*/
    type["GetZoneMask"] = static_cast<unsigned (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetZoneMask) ;
    /*Return maximum number of per-pixel lights. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxLights"] = static_cast<unsigned (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetMaxLights) ;
    /*Return visible flag.*//*() const*/
    type["IsVisible"] = static_cast<bool (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::IsVisible) ;
    /*Return shadowcaster flag. BIND_AS_PROPERTY*//*() const*/
    type["GetCastShadows"] = static_cast<bool (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetCastShadows) ;
    /*Return occluder flag. BIND_AS_PROPERTY*//*() const*/
    type["IsOccluder"] = static_cast<bool (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::IsOccluder) ;
    /*Return occludee flag. BIND_AS_PROPERTY*//*() const*/
    type["IsOccludee"] = static_cast<bool (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::IsOccludee) ;
    /*Regenerate patch geometry.*//*(TerrainPatch *patch)*/
    type["CreatePatchGeometry"] = static_cast<void (Urho3D::Terrain::*)(TerrainPatch *)>(&Urho3D::Terrain::CreatePatchGeometry) ;
    /*Update patch based on LOD and neighbor LOD.*//*(TerrainPatch *patch)*/
    type["UpdatePatchLod"] = static_cast<void (Urho3D::Terrain::*)(TerrainPatch *)>(&Urho3D::Terrain::UpdatePatchLod) ;
    /*Set heightmap attribute.*//*(const ResourceRef &value)*/
    type["SetHeightMapAttr"] = static_cast<void (Urho3D::Terrain::*)(const  ResourceRef &)>(&Urho3D::Terrain::SetHeightMapAttr) ;
    /*Set material attribute.*//*(const ResourceRef &value)*/
    type["SetMaterialAttr"] = static_cast<void (Urho3D::Terrain::*)(const  ResourceRef &)>(&Urho3D::Terrain::SetMaterialAttr) ;
    /*Set patch size attribute.*//*(int value)*/
    type["SetPatchSizeAttr"] = static_cast<void (Urho3D::Terrain::*)(int)>(&Urho3D::Terrain::SetPatchSizeAttr) ;
    /*Set max LOD levels attribute.*//*(unsigned value)*/
    type["SetMaxLodLevelsAttr"] = static_cast<void (Urho3D::Terrain::*)(unsigned)>(&Urho3D::Terrain::SetMaxLodLevelsAttr) ;
    /*Set occlusion LOD level attribute.*//*(unsigned value)*/
    type["SetOcclusionLodLevelAttr"] = static_cast<void (Urho3D::Terrain::*)(unsigned)>(&Urho3D::Terrain::SetOcclusionLodLevelAttr) ;
    /*Return heightmap attribute.*//*() const*/
    type["GetHeightMapAttr"] = static_cast<ResourceRef (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetHeightMapAttr) ;
    /*Return material attribute.*//*() const*/
    type["GetMaterialAttr"] = static_cast<ResourceRef (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetMaterialAttr) ;
    type["GetPatch"] = sol::overload(
        [](Urho3D::Terrain& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetPatch(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::Terrain& self, int x, int z, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetPatch(x, z));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["castShadows"] = sol::property(static_cast<bool (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetCastShadows) 
        , static_cast<void (Urho3D::Terrain::*)(bool)>(&Urho3D::Terrain::SetCastShadows) );
    type["drawDistance"] = sol::property(static_cast<float (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetDrawDistance) 
        , static_cast<void (Urho3D::Terrain::*)(float)>(&Urho3D::Terrain::SetDrawDistance) );
    type["eastNeighbor"] = sol::property([](Urho3D::Terrain& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetEastNeighbor());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Terrain::*)(Terrain *)>(&Urho3D::Terrain::SetEastNeighbor) );
    type["heightMap"] = sol::property([](Urho3D::Terrain& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetHeightMap());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<bool (Urho3D::Terrain::*)(Image *)>(&Urho3D::Terrain::SetHeightMap) );
    type["lightMask"] = sol::property(static_cast<unsigned (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetLightMask) 
        , static_cast<void (Urho3D::Terrain::*)(unsigned)>(&Urho3D::Terrain::SetLightMask) );
    type["lodBias"] = sol::property(static_cast<float (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetLodBias) 
        , static_cast<void (Urho3D::Terrain::*)(float)>(&Urho3D::Terrain::SetLodBias) );
    type["material"] = sol::property([](Urho3D::Terrain& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Terrain::*)(Material *)>(&Urho3D::Terrain::SetMaterial) );
    type["maxLights"] = sol::property(static_cast<unsigned (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetMaxLights) 
        , static_cast<void (Urho3D::Terrain::*)(unsigned)>(&Urho3D::Terrain::SetMaxLights) );
    type["maxLodLevels"] = sol::property(static_cast<unsigned (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetMaxLodLevels) 
        , static_cast<void (Urho3D::Terrain::*)(unsigned)>(&Urho3D::Terrain::SetMaxLodLevels) );
    type["northNeighbor"] = sol::property([](Urho3D::Terrain& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetNorthNeighbor());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Terrain::*)(Terrain *)>(&Urho3D::Terrain::SetNorthNeighbor) );
    type["numPatches"] = sol::property(static_cast<const IntVector2& (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetNumPatches) );
    type["numVertices"] = sol::property(static_cast<const IntVector2& (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetNumVertices) );
    type["occludee"] = sol::property(static_cast<bool (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::IsOccludee) 
        , static_cast<void (Urho3D::Terrain::*)(bool)>(&Urho3D::Terrain::SetOccludee) );
    type["occluder"] = sol::property(static_cast<bool (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::IsOccluder) 
        , static_cast<void (Urho3D::Terrain::*)(bool)>(&Urho3D::Terrain::SetOccluder) );
    type["occlusionLodLevel"] = sol::property(static_cast<unsigned (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetOcclusionLodLevel) 
        , static_cast<void (Urho3D::Terrain::*)(unsigned)>(&Urho3D::Terrain::SetOcclusionLodLevel) );
    type["patch"] = sol::property([](Urho3D::Terrain& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetPatch(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["patchSize"] = sol::property(static_cast<int (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetPatchSize) 
        , static_cast<void (Urho3D::Terrain::*)(int)>(&Urho3D::Terrain::SetPatchSize) );
    type["shadowDistance"] = sol::property(static_cast<float (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetShadowDistance) 
        , static_cast<void (Urho3D::Terrain::*)(float)>(&Urho3D::Terrain::SetShadowDistance) );
    type["shadowMask"] = sol::property(static_cast<unsigned (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetShadowMask) 
        , static_cast<void (Urho3D::Terrain::*)(unsigned)>(&Urho3D::Terrain::SetShadowMask) );
    type["smoothing"] = sol::property(static_cast<bool (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetSmoothing) 
        , static_cast<void (Urho3D::Terrain::*)(bool)>(&Urho3D::Terrain::SetSmoothing) );
    type["southNeighbor"] = sol::property([](Urho3D::Terrain& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSouthNeighbor());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Terrain::*)(Terrain *)>(&Urho3D::Terrain::SetSouthNeighbor) );
    type["spacing"] = sol::property(static_cast<const Vector3& (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetSpacing) 
        , static_cast<void (Urho3D::Terrain::*)(const  Vector3 &)>(&Urho3D::Terrain::SetSpacing) );
    type["viewMask"] = sol::property(static_cast<unsigned (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetViewMask) 
        , static_cast<void (Urho3D::Terrain::*)(unsigned)>(&Urho3D::Terrain::SetViewMask) );
    type["westNeighbor"] = sol::property([](Urho3D::Terrain& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetWestNeighbor());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Terrain::*)(Terrain *)>(&Urho3D::Terrain::SetWestNeighbor) );
    type["zoneMask"] = sol::property(static_cast<unsigned (Urho3D::Terrain::*)() const>(&Urho3D::Terrain::GetZoneMask) 
        , static_cast<void (Urho3D::Terrain::*)(unsigned)>(&Urho3D::Terrain::SetZoneMask) );

}

