
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Model.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Model.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Geometry.h>
#include <Urho3D/Graphics/IndexBuffer.h>
#include <Urho3D/Graphics/Model.h>
#include <Urho3D/Graphics/Skeleton.h>
#include <Urho3D/Graphics/VertexBuffer.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Model(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Model::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Model::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Model>((Urho3D::Model*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Model>( "Model"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::ResourceWithMetadata,Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Model>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::Model::*)(Deserializer &)>(&Urho3D::Model::BeginLoad) ;
    /*Finish resource loading. Always called from the main thread. Return true if successful.*//*() override*/
    type["EndLoad"] = static_cast<bool (Urho3D::Model::*)()>(&Urho3D::Model::EndLoad) ;
    /*Save resource. Return true if successful.*//*(Serializer &dest) const override*/
    type["Save"] = static_cast<bool (Urho3D::Model::*)(Serializer &) const>(&Urho3D::Model::Save) ;
    /*Set local-space bounding box. BIND_AS_PROPERTY*//*(const BoundingBox &box)*/
    type["SetBoundingBox"] = static_cast<void (Urho3D::Model::*)(const  BoundingBox &)>(&Urho3D::Model::SetBoundingBox) ;
    /*Set vertex buffers and their morph ranges.*//*(const Vector< SharedPtr< VertexBuffer > > &buffers, const PODVector< unsigned > &morphRangeStarts, const PODVector< unsigned > &morphRangeCounts)*/
    type["SetVertexBuffers"] = static_cast<bool (Urho3D::Model::*)(const  Vector<  SharedPtr<  VertexBuffer > > &, const  PODVector< unsigned > &, const  PODVector< unsigned > &)>(&Urho3D::Model::SetVertexBuffers) ;
    /*Set index buffers.*//*(const Vector< SharedPtr< IndexBuffer > > &buffers)*/
    type["SetIndexBuffers"] = static_cast<bool (Urho3D::Model::*)(const  Vector<  SharedPtr<  IndexBuffer > > &)>(&Urho3D::Model::SetIndexBuffers) ;
    /*Set number of geometries. BIND_AS_PROPERTY*//*(unsigned num)*/
    type["SetNumGeometries"] = static_cast<void (Urho3D::Model::*)(unsigned)>(&Urho3D::Model::SetNumGeometries) ;
    /*Set number of LOD levels in a geometry. BIND_AS_PROPERTY*//*(unsigned index, unsigned num)*/
    type["SetNumGeometryLodLevels"] = static_cast<bool (Urho3D::Model::*)(unsigned, unsigned)>(&Urho3D::Model::SetNumGeometryLodLevels) ;
    /*Set geometry.*//*(unsigned index, unsigned lodLevel, Geometry *geometry)*/
    type["SetGeometry"] = static_cast<bool (Urho3D::Model::*)(unsigned, unsigned, Geometry *)>(&Urho3D::Model::SetGeometry) ;
    /*Set geometry center. BIND_AS_ALIAS_set_geometryCenters*//*(unsigned index, const Vector3 &center)*/
    type["SetGeometryCenter"] = static_cast<bool (Urho3D::Model::*)(unsigned, const  Vector3 &)>(&Urho3D::Model::SetGeometryCenter) ;
    /*Set skeleton.*//*(const Skeleton &skeleton)*/
    type["SetSkeleton"] = static_cast<void (Urho3D::Model::*)(const  Skeleton &)>(&Urho3D::Model::SetSkeleton) ;
    /*Set bone mappings when model has more bones than the skinning shader can handle.*//*(const Vector< PODVector< unsigned > > &geometryBoneMappings)*/
    type["SetGeometryBoneMappings"] = static_cast<void (Urho3D::Model::*)(const  Vector<  PODVector< unsigned > > &)>(&Urho3D::Model::SetGeometryBoneMappings) ;
    /*Set vertex morphs.*//*(const Vector< ModelMorph > &morphs)*/
    type["SetMorphs"] = static_cast<void (Urho3D::Model::*)(const  Vector<  ModelMorph > &)>(&Urho3D::Model::SetMorphs) ;
    /*Return bounding box. BIND_AS_PROPERTY*//*() const*/
    type["GetBoundingBox"] = static_cast<const BoundingBox& (Urho3D::Model::*)() const>(&Urho3D::Model::GetBoundingBox) ;
    /*Return skeleton. BIND_AS_PROPERTY*//*()*/
    type["GetSkeleton"] = static_cast<Skeleton& (Urho3D::Model::*)()>(&Urho3D::Model::GetSkeleton) ;
    /*Return vertex buffers.*//*() const*/
    type["GetVertexBuffers"] = static_cast<const Vector<SharedPtr<VertexBuffer>>& (Urho3D::Model::*)() const>(&Urho3D::Model::GetVertexBuffers) ;
    /*Return index buffers.*//*() const*/
    type["GetIndexBuffers"] = static_cast<const Vector<SharedPtr<IndexBuffer>>& (Urho3D::Model::*)() const>(&Urho3D::Model::GetIndexBuffers) ;
    /*Return number of geometries. BIND_AS_PROPERTY*//*() const*/
    type["GetNumGeometries"] = static_cast<unsigned (Urho3D::Model::*)() const>(&Urho3D::Model::GetNumGeometries) ;
    /*Return number of LOD levels in geometry. BIND_AS_PROPERTY*//*(unsigned index) const*/
    type["GetNumGeometryLodLevels"] = static_cast<unsigned (Urho3D::Model::*)(unsigned) const>(&Urho3D::Model::GetNumGeometryLodLevels) ;
    /*Return geometry pointers.*//*() const*/
    type["GetGeometries"] = static_cast<const Vector<Vector<SharedPtr<Geometry>>>& (Urho3D::Model::*)() const>(&Urho3D::Model::GetGeometries) ;
    /*Return geometry center points.*//*() const*/
    type["GetGeometryCenters"] = static_cast<const PODVector<Vector3>& (Urho3D::Model::*)() const>(&Urho3D::Model::GetGeometryCenters) ;
    /*Return geometry by index and LOD level. The LOD level is clamped if out of range.*//*(unsigned index, unsigned lodLevel) const*/
    type["GetGeometry"] = [](Urho3D::Model& self, unsigned index, unsigned lodLevel, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetGeometry(index, lodLevel));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return geometry center by index. BIND_AS_ALIAS_get_geometryCenters*//*(unsigned index) const*/
    type["GetGeometryCenter"] = static_cast<const Vector3& (Urho3D::Model::*)(unsigned) const>(&Urho3D::Model::GetGeometryCenter) ;
    /*Return geometery bone mappings.*//*() const*/
    type["GetGeometryBoneMappings"] = static_cast<const Vector<PODVector<unsigned>>& (Urho3D::Model::*)() const>(&Urho3D::Model::GetGeometryBoneMappings) ;
    /*Return vertex morphs.*//*() const*/
    type["GetMorphs"] = static_cast<const Vector<ModelMorph>& (Urho3D::Model::*)() const>(&Urho3D::Model::GetMorphs) ;
    /*Return number of vertex morphs. BIND_AS_PROPERTY*//*() const*/
    type["GetNumMorphs"] = static_cast<unsigned (Urho3D::Model::*)() const>(&Urho3D::Model::GetNumMorphs) ;
    /*Return vertex buffer morph range start.*//*(unsigned bufferIndex) const*/
    type["GetMorphRangeStart"] = static_cast<unsigned (Urho3D::Model::*)(unsigned) const>(&Urho3D::Model::GetMorphRangeStart) ;
    /*Return vertex buffer morph range vertex count.*//*(unsigned bufferIndex) const*/
    type["GetMorphRangeCount"] = static_cast<unsigned (Urho3D::Model::*)(unsigned) const>(&Urho3D::Model::GetMorphRangeCount) ;
    type["Clone"] = sol::overload(
        static_cast<SharedPtr<Model> (Urho3D::Model::*)(const  String &) const>(&Urho3D::Model::Clone) ,
        [](Urho3D::Model& self){ return self.Clone(); } );
    type["GetMorph"] = sol::overload(
        static_cast<const ModelMorph* (Urho3D::Model::*)(unsigned) const>(&Urho3D::Model::GetMorph) ,
        static_cast<const ModelMorph* (Urho3D::Model::*)(const  String &) const>(&Urho3D::Model::GetMorph) ,
        static_cast<const ModelMorph* (Urho3D::Model::*)(StringHash) const>(&Urho3D::Model::GetMorph)  );
    type["boundingBox"] = sol::property(static_cast<const BoundingBox& (Urho3D::Model::*)() const>(&Urho3D::Model::GetBoundingBox) 
        , static_cast<void (Urho3D::Model::*)(const  BoundingBox &)>(&Urho3D::Model::SetBoundingBox) );
    type["geometryCenter"] = sol::property(static_cast<const Vector3& (Urho3D::Model::*)(unsigned) const>(&Urho3D::Model::GetGeometryCenter) 
        , static_cast<bool (Urho3D::Model::*)(unsigned, const  Vector3 &)>(&Urho3D::Model::SetGeometryCenter) );
    type["numGeometries"] = sol::property(static_cast<unsigned (Urho3D::Model::*)() const>(&Urho3D::Model::GetNumGeometries) 
        , static_cast<void (Urho3D::Model::*)(unsigned)>(&Urho3D::Model::SetNumGeometries) );
    type["numGeometryLodLevels"] = sol::property(static_cast<unsigned (Urho3D::Model::*)(unsigned) const>(&Urho3D::Model::GetNumGeometryLodLevels) 
        , static_cast<bool (Urho3D::Model::*)(unsigned, unsigned)>(&Urho3D::Model::SetNumGeometryLodLevels) );
    type["numMorphs"] = sol::property(static_cast<unsigned (Urho3D::Model::*)() const>(&Urho3D::Model::GetNumMorphs) );
    type["skeleton"] = sol::property(static_cast<Skeleton& (Urho3D::Model::*)()>(&Urho3D::Model::GetSkeleton) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Model.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Model.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_GeometryDesc(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::GeometryDesc>( "GeometryDesc"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["type_"] = &Urho3D::GeometryDesc::type_;
    type["vbRef_"] = &Urho3D::GeometryDesc::vbRef_;
    type["ibRef_"] = &Urho3D::GeometryDesc::ibRef_;
    type["indexStart_"] = &Urho3D::GeometryDesc::indexStart_;
    type["indexCount_"] = &Urho3D::GeometryDesc::indexCount_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Model.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Model.h>
#include <Urho3D/Container/ArrayPtr.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_IndexBufferDesc(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::IndexBufferDesc>( "IndexBufferDesc"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["indexCount_"] = &Urho3D::IndexBufferDesc::indexCount_;
    type["indexSize_"] = &Urho3D::IndexBufferDesc::indexSize_;
    type["dataSize_"] = &Urho3D::IndexBufferDesc::dataSize_;
    type["data_"] = &Urho3D::IndexBufferDesc::data_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Model.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Model.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Container/FlagSet.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_VertexBufferMorph(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::VertexBufferMorph>( "VertexBufferMorph"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["elementMask_"] = &Urho3D::VertexBufferMorph::elementMask_;
    type["vertexCount_"] = &Urho3D::VertexBufferMorph::vertexCount_;
    type["dataSize_"] = &Urho3D::VertexBufferMorph::dataSize_;
    type["morphData_"] = &Urho3D::VertexBufferMorph::morphData_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Model.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Model.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Graphics/Model.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ModelMorph(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ModelMorph>( "ModelMorph"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["name_"] = &Urho3D::ModelMorph::name_;
    type["nameHash_"] = &Urho3D::ModelMorph::nameHash_;
    type["weight_"] = &Urho3D::ModelMorph::weight_;
    type["buffers_"] = &Urho3D::ModelMorph::buffers_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Model.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Model.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/GraphicsDefs.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_VertexBufferDesc(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::VertexBufferDesc>( "VertexBufferDesc"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["vertexCount_"] = &Urho3D::VertexBufferDesc::vertexCount_;
    type["vertexElements_"] = &Urho3D::VertexBufferDesc::vertexElements_;
    type["dataSize_"] = &Urho3D::VertexBufferDesc::dataSize_;
    type["data_"] = &Urho3D::VertexBufferDesc::data_;

}

