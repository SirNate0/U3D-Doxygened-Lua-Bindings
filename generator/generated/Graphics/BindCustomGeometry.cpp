
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/CustomGeometry.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/CustomGeometry.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/CustomGeometry.h>
#include <Urho3D/Graphics/Geometry.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/OcclusionBuffer.h>
#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Math/Vector4.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CustomGeometry(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::CustomGeometry::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::CustomGeometry::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::CustomGeometry>((Urho3D::CustomGeometry*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::CustomGeometry>( "CustomGeometry"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::CustomGeometry>(context);
        });

// Members

    /*Process octree raycast. May be called from a worker thread.*//*(const RayOctreeQuery &query, PODVector< RayQueryResult > &results) override*/
    type["ProcessRayQuery"] = static_cast<void (Urho3D::CustomGeometry::*)(const  RayOctreeQuery &, PODVector<  RayQueryResult > &)>(&Urho3D::CustomGeometry::ProcessRayQuery) ;
    /*Return the geometry for a specific LOD level.*//*(unsigned batchIndex, unsigned level) override*/
    type["GetLodGeometry"] = [](Urho3D::CustomGeometry& self, unsigned batchIndex, unsigned level, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetLodGeometry(batchIndex, level));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return number of occlusion geometry triangles.*//*() override*/
    type["GetNumOccluderTriangles"] = static_cast<unsigned (Urho3D::CustomGeometry::*)()>(&Urho3D::CustomGeometry::GetNumOccluderTriangles) ;
    /*Draw to occlusion buffer. Return true if did not run out of triangles.*//*(OcclusionBuffer *buffer) override*/
    type["DrawOcclusion"] = static_cast<bool (Urho3D::CustomGeometry::*)(OcclusionBuffer *)>(&Urho3D::CustomGeometry::DrawOcclusion) ;
    /*Clear all geometries.*//*()*/
    type["Clear"] = static_cast<void (Urho3D::CustomGeometry::*)()>(&Urho3D::CustomGeometry::Clear) ;
    /*Set number of geometries. BIND_AS_PROPERTY*//*(unsigned num)*/
    type["SetNumGeometries"] = static_cast<void (Urho3D::CustomGeometry::*)(unsigned)>(&Urho3D::CustomGeometry::SetNumGeometries) ;
    /*Set vertex buffer dynamic mode. A dynamic buffer should be faster to update frequently. Effective at the next  Commit() call. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetDynamic"] = static_cast<void (Urho3D::CustomGeometry::*)(bool)>(&Urho3D::CustomGeometry::SetDynamic) ;
    /*Begin defining a geometry. Clears existing vertices in that index.*//*(unsigned index, PrimitiveType type)*/
    type["BeginGeometry"] = static_cast<void (Urho3D::CustomGeometry::*)(unsigned, PrimitiveType)>(&Urho3D::CustomGeometry::BeginGeometry) ;
    /*Define a vertex position. This begins a new vertex.*//*(const Vector3 &position)*/
    type["DefineVertex"] = static_cast<void (Urho3D::CustomGeometry::*)(const  Vector3 &)>(&Urho3D::CustomGeometry::DefineVertex) ;
    /*Define a vertex normal.*//*(const Vector3 &normal)*/
    type["DefineNormal"] = static_cast<void (Urho3D::CustomGeometry::*)(const  Vector3 &)>(&Urho3D::CustomGeometry::DefineNormal) ;
    /*Define a vertex color.*//*(const Color &color)*/
    type["DefineColor"] = static_cast<void (Urho3D::CustomGeometry::*)(const  Color &)>(&Urho3D::CustomGeometry::DefineColor) ;
    /*Define a vertex UV coordinate.*//*(const Vector2 &texCoord)*/
    type["DefineTexCoord"] = static_cast<void (Urho3D::CustomGeometry::*)(const  Vector2 &)>(&Urho3D::CustomGeometry::DefineTexCoord) ;
    /*Define a vertex tangent.*//*(const Vector4 &tangent)*/
    type["DefineTangent"] = static_cast<void (Urho3D::CustomGeometry::*)(const  Vector4 &)>(&Urho3D::CustomGeometry::DefineTangent) ;
    /*Set the primitive type, number of vertices and elements in a geometry, after which the vertices can be edited with  GetVertex(). An alternative to  BeginGeometry() /  DefineVertex().*//*(unsigned index, PrimitiveType type, unsigned numVertices, bool hasNormals, bool hasColors, bool hasTexCoords, bool hasTangents)*/
    type["DefineGeometry"] = static_cast<void (Urho3D::CustomGeometry::*)(unsigned, PrimitiveType, unsigned, bool, bool, bool, bool)>(&Urho3D::CustomGeometry::DefineGeometry) ;
    /*Update vertex buffer and calculate the bounding box. Call after finishing defining geometry.*//*()*/
    type["Commit"] = static_cast<void (Urho3D::CustomGeometry::*)()>(&Urho3D::CustomGeometry::Commit) ;
    /*Return number of geometries. BIND_AS_PROPERTY*//*() const*/
    type["GetNumGeometries"] = static_cast<unsigned (Urho3D::CustomGeometry::*)() const>(&Urho3D::CustomGeometry::GetNumGeometries) ;
    /*Return number of vertices in a geometry. BIND_AS_PROPERTY*//*(unsigned index) const*/
    type["GetNumVertices"] = static_cast<unsigned (Urho3D::CustomGeometry::*)(unsigned) const>(&Urho3D::CustomGeometry::GetNumVertices) ;
    /*Return whether vertex buffer dynamic mode is enabled. BIND_AS_PROPERTY*//*() const*/
    type["IsDynamic"] = static_cast<bool (Urho3D::CustomGeometry::*)() const>(&Urho3D::CustomGeometry::IsDynamic) ;
    /*Return all vertices. These can be edited; calling  Commit() updates the vertex buffer.*//*()*/
    type["GetVertices"] = static_cast<Vector<PODVector<CustomGeometryVertex>>& (Urho3D::CustomGeometry::*)()>(&Urho3D::CustomGeometry::GetVertices) ;
    /*Return a vertex in a geometry for editing, or null if out of bounds. After the edits are finished, calling  Commit() updates the vertex buffer.*//*(unsigned geometryIndex, unsigned vertexNum)*/
    type["GetVertex"] = static_cast<CustomGeometryVertex* (Urho3D::CustomGeometry::*)(unsigned, unsigned)>(&Urho3D::CustomGeometry::GetVertex) ;
    /*Set geometry data attribute.*//*(const PODVector< unsigned char > &value)*/
    type["SetGeometryDataAttr"] = static_cast<void (Urho3D::CustomGeometry::*)(const  PODVector< unsigned char > &)>(&Urho3D::CustomGeometry::SetGeometryDataAttr) ;
    /*Set materials attribute.*//*(const ResourceRefList &value)*/
    type["SetMaterialsAttr"] = static_cast<void (Urho3D::CustomGeometry::*)(const  ResourceRefList &)>(&Urho3D::CustomGeometry::SetMaterialsAttr) ;
    /*Return geometry data attribute.*//*() const*/
    type["GetGeometryDataAttr"] = static_cast<PODVector<unsigned char> (Urho3D::CustomGeometry::*)() const>(&Urho3D::CustomGeometry::GetGeometryDataAttr) ;
    /*Return materials attribute.*//*() const*/
    type["GetMaterialsAttr"] = static_cast<const ResourceRefList& (Urho3D::CustomGeometry::*)() const>(&Urho3D::CustomGeometry::GetMaterialsAttr) ;
    type["SetMaterial"] = sol::overload(
        static_cast<void (Urho3D::CustomGeometry::*)(Material *)>(&Urho3D::CustomGeometry::SetMaterial) ,
        static_cast<bool (Urho3D::CustomGeometry::*)(unsigned, Material *)>(&Urho3D::CustomGeometry::SetMaterial)  );
    type["GetMaterial"] = sol::overload(
        [](Urho3D::CustomGeometry& self, unsigned index=0, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::CustomGeometry& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["dynamic"] = sol::property(static_cast<bool (Urho3D::CustomGeometry::*)() const>(&Urho3D::CustomGeometry::IsDynamic) 
        , static_cast<void (Urho3D::CustomGeometry::*)(bool)>(&Urho3D::CustomGeometry::SetDynamic) );
    type["material"] = sol::property([](Urho3D::CustomGeometry& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<bool (Urho3D::CustomGeometry::*)(unsigned, Material *)>(&Urho3D::CustomGeometry::SetMaterial) );
    type["numGeometries"] = sol::property(static_cast<unsigned (Urho3D::CustomGeometry::*)() const>(&Urho3D::CustomGeometry::GetNumGeometries) 
        , static_cast<void (Urho3D::CustomGeometry::*)(unsigned)>(&Urho3D::CustomGeometry::SetNumGeometries) );
    type["numVertices"] = sol::property(static_cast<unsigned (Urho3D::CustomGeometry::*)(unsigned) const>(&Urho3D::CustomGeometry::GetNumVertices) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/CustomGeometry.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/CustomGeometry.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Math/Vector4.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CustomGeometryVertex(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::CustomGeometryVertex>( "CustomGeometryVertex"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["position_"] = &Urho3D::CustomGeometryVertex::position_;
    type["normal_"] = &Urho3D::CustomGeometryVertex::normal_;
    type["color_"] = &Urho3D::CustomGeometryVertex::color_;
    type["texCoord_"] = &Urho3D::CustomGeometryVertex::texCoord_;
    type["tangent_"] = &Urho3D::CustomGeometryVertex::tangent_;

}

