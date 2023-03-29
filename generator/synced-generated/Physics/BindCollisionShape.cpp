
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics/CollisionShape.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics/CollisionShape.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/CustomGeometry.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Graphics/Model.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Physics/CollisionShape.h>
#include <Urho3D/Physics/PhysicsWorld.h>
#include <Urho3D/Scene/Component.h>
#include <BulletCollision/CollisionShapes/btCollisionShape.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CollisionShape(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::CollisionShape::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::CollisionShape::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::CollisionShape>((Urho3D::CollisionShape*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::CollisionShape>( "CollisionShape"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::CollisionShape>(context);
        });

// Members

    /*Apply attribute changes that can not be applied immediately. Called after scene load or a network update.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::CollisionShape::*)()>(&Urho3D::CollisionShape::ApplyAttributes) ;
    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::CollisionShape::*)()>(&Urho3D::CollisionShape::OnSetEnabled) ;
    /*Visualize the component as debug geometry.*//*(DebugRenderer *debug, bool depthTest) override*/
    type["DrawDebugGeometry"] = static_cast<void (Urho3D::CollisionShape::*)(DebugRenderer *, bool)>(&Urho3D::CollisionShape::DrawDebugGeometry) ;
    /*Set shape type. BIND_AS_PROPERTY*//*(ShapeType type)*/
    type["SetShapeType"] = static_cast<void (Urho3D::CollisionShape::*)(ShapeType)>(&Urho3D::CollisionShape::SetShapeType) ;
    /*Set shape size. BIND_AS_PROPERTY*//*(const Vector3 &size)*/
    type["SetSize"] = static_cast<void (Urho3D::CollisionShape::*)(const  Vector3 &)>(&Urho3D::CollisionShape::SetSize) ;
    /*Set offset position. BIND_AS_PROPERTY*//*(const Vector3 &position)*/
    type["SetPosition"] = static_cast<void (Urho3D::CollisionShape::*)(const  Vector3 &)>(&Urho3D::CollisionShape::SetPosition) ;
    /*Set offset rotation. BIND_AS_PROPERTY*//*(const Quaternion &rotation)*/
    type["SetRotation"] = static_cast<void (Urho3D::CollisionShape::*)(const  Quaternion &)>(&Urho3D::CollisionShape::SetRotation) ;
    /*Set offset transform.*//*(const Vector3 &position, const Quaternion &rotation)*/
    type["SetTransform"] = static_cast<void (Urho3D::CollisionShape::*)(const  Vector3 &, const  Quaternion &)>(&Urho3D::CollisionShape::SetTransform) ;
    /*Set collision margin. BIND_AS_PROPERTY*//*(float margin)*/
    type["SetMargin"] = static_cast<void (Urho3D::CollisionShape::*)(float)>(&Urho3D::CollisionShape::SetMargin) ;
    /*Set triangle mesh / convex hull model. BIND_AS_PROPERTY*//*(Model *model)*/
    type["SetModel"] = static_cast<void (Urho3D::CollisionShape::*)(Model *)>(&Urho3D::CollisionShape::SetModel) ;
    /*Set model LOD level. BIND_AS_PROPERTY*//*(unsigned lodLevel)*/
    type["SetLodLevel"] = static_cast<void (Urho3D::CollisionShape::*)(unsigned)>(&Urho3D::CollisionShape::SetLodLevel) ;
    /*Return Bullet collision shape.*//*() const*/
    type["GetCollisionShape"] = static_cast<btCollisionShape* (Urho3D::CollisionShape::*)() const>(&Urho3D::CollisionShape::GetCollisionShape) ;
    /*Return the shared geometry data.*//*() const*/
    type["GetGeometryData"] = [](Urho3D::CollisionShape& self){ return SharedPtr(self.GetGeometryData()); };
    /*Return physics world.*//*() const*/
    type["GetPhysicsWorld"] = [](Urho3D::CollisionShape& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetPhysicsWorld());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return shape type. BIND_AS_PROPERTY*//*() const*/
    type["GetShapeType"] = static_cast<ShapeType (Urho3D::CollisionShape::*)() const>(&Urho3D::CollisionShape::GetShapeType) ;
    /*Return shape size. BIND_AS_PROPERTY*//*() const*/
    type["GetSize"] = static_cast<const Vector3& (Urho3D::CollisionShape::*)() const>(&Urho3D::CollisionShape::GetSize) ;
    /*Return offset position. BIND_AS_PROPERTY*//*() const*/
    type["GetPosition"] = static_cast<const Vector3& (Urho3D::CollisionShape::*)() const>(&Urho3D::CollisionShape::GetPosition) ;
    /*Return offset rotation. BIND_AS_PROPERTY*//*() const*/
    type["GetRotation"] = static_cast<const Quaternion& (Urho3D::CollisionShape::*)() const>(&Urho3D::CollisionShape::GetRotation) ;
    /*Return collision margin. BIND_AS_PROPERTY*//*() const*/
    type["GetMargin"] = static_cast<float (Urho3D::CollisionShape::*)() const>(&Urho3D::CollisionShape::GetMargin) ;
    /*Return triangle mesh / convex hull model. BIND_AS_PROPERTY*//*() const*/
    type["GetModel"] = [](Urho3D::CollisionShape& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetModel());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return model LOD level. BIND_AS_PROPERTY*//*() const*/
    type["GetLodLevel"] = static_cast<unsigned (Urho3D::CollisionShape::*)() const>(&Urho3D::CollisionShape::GetLodLevel) ;
    /*Return world-space bounding box. BIND_AS_PROPERTY*//*() const*/
    type["GetWorldBoundingBox"] = static_cast<BoundingBox (Urho3D::CollisionShape::*)() const>(&Urho3D::CollisionShape::GetWorldBoundingBox) ;
    /*Set model attribute.*//*(const ResourceRef &value)*/
    type["SetModelAttr"] = static_cast<void (Urho3D::CollisionShape::*)(const  ResourceRef &)>(&Urho3D::CollisionShape::SetModelAttr) ;
    /*Return model attribute.*//*() const*/
    type["GetModelAttr"] = static_cast<ResourceRef (Urho3D::CollisionShape::*)() const>(&Urho3D::CollisionShape::GetModelAttr) ;
    /*Release the collision shape.*//*()*/
    type["ReleaseShape"] = static_cast<void (Urho3D::CollisionShape::*)()>(&Urho3D::CollisionShape::ReleaseShape) ;
    type["SetBox"] = sol::overload(
        static_cast<void (Urho3D::CollisionShape::*)(const  Vector3 &, const  Vector3 &, const  Quaternion &)>(&Urho3D::CollisionShape::SetBox) ,
        [](Urho3D::CollisionShape& self, const  Vector3 & size, const  Vector3 & position){ self.SetBox(size, position); },
        [](Urho3D::CollisionShape& self, const  Vector3 & size){ self.SetBox(size); } );
    type["SetSphere"] = sol::overload(
        static_cast<void (Urho3D::CollisionShape::*)(float, const  Vector3 &, const  Quaternion &)>(&Urho3D::CollisionShape::SetSphere) ,
        [](Urho3D::CollisionShape& self, float diameter, const  Vector3 & position){ self.SetSphere(diameter, position); },
        [](Urho3D::CollisionShape& self, float diameter){ self.SetSphere(diameter); } );
    type["SetStaticPlane"] = sol::overload(
        static_cast<void (Urho3D::CollisionShape::*)(const  Vector3 &, const  Quaternion &)>(&Urho3D::CollisionShape::SetStaticPlane) ,
        [](Urho3D::CollisionShape& self, const  Vector3 & position){ self.SetStaticPlane(position); },
        [](Urho3D::CollisionShape& self){ self.SetStaticPlane(); } );
    type["SetCylinder"] = sol::overload(
        static_cast<void (Urho3D::CollisionShape::*)(float, float, const  Vector3 &, const  Quaternion &)>(&Urho3D::CollisionShape::SetCylinder) ,
        [](Urho3D::CollisionShape& self, float diameter, float height, const  Vector3 & position){ self.SetCylinder(diameter, height, position); },
        [](Urho3D::CollisionShape& self, float diameter, float height){ self.SetCylinder(diameter, height); } );
    type["SetCapsule"] = sol::overload(
        static_cast<void (Urho3D::CollisionShape::*)(float, float, const  Vector3 &, const  Quaternion &)>(&Urho3D::CollisionShape::SetCapsule) ,
        [](Urho3D::CollisionShape& self, float diameter, float height, const  Vector3 & position){ self.SetCapsule(diameter, height, position); },
        [](Urho3D::CollisionShape& self, float diameter, float height){ self.SetCapsule(diameter, height); } );
    type["SetCone"] = sol::overload(
        static_cast<void (Urho3D::CollisionShape::*)(float, float, const  Vector3 &, const  Quaternion &)>(&Urho3D::CollisionShape::SetCone) ,
        [](Urho3D::CollisionShape& self, float diameter, float height, const  Vector3 & position){ self.SetCone(diameter, height, position); },
        [](Urho3D::CollisionShape& self, float diameter, float height){ self.SetCone(diameter, height); } );
    type["SetTriangleMesh"] = sol::overload(
        static_cast<void (Urho3D::CollisionShape::*)(Model *, unsigned, const  Vector3 &, const  Vector3 &, const  Quaternion &)>(&Urho3D::CollisionShape::SetTriangleMesh) ,
        [](Urho3D::CollisionShape& self, Model * model, unsigned lodLevel, const  Vector3 & scale, const  Vector3 & position){ self.SetTriangleMesh(model, lodLevel, scale, position); },
        [](Urho3D::CollisionShape& self, Model * model, unsigned lodLevel, const  Vector3 & scale){ self.SetTriangleMesh(model, lodLevel, scale); },
        [](Urho3D::CollisionShape& self, Model * model, unsigned lodLevel){ self.SetTriangleMesh(model, lodLevel); },
        [](Urho3D::CollisionShape& self, Model * model){ self.SetTriangleMesh(model); } );
    type["SetCustomTriangleMesh"] = sol::overload(
        static_cast<void (Urho3D::CollisionShape::*)(CustomGeometry *, const  Vector3 &, const  Vector3 &, const  Quaternion &)>(&Urho3D::CollisionShape::SetCustomTriangleMesh) ,
        [](Urho3D::CollisionShape& self, CustomGeometry * custom, const  Vector3 & scale, const  Vector3 & position){ self.SetCustomTriangleMesh(custom, scale, position); },
        [](Urho3D::CollisionShape& self, CustomGeometry * custom, const  Vector3 & scale){ self.SetCustomTriangleMesh(custom, scale); },
        [](Urho3D::CollisionShape& self, CustomGeometry * custom){ self.SetCustomTriangleMesh(custom); } );
    type["SetConvexHull"] = sol::overload(
        static_cast<void (Urho3D::CollisionShape::*)(Model *, unsigned, const  Vector3 &, const  Vector3 &, const  Quaternion &)>(&Urho3D::CollisionShape::SetConvexHull) ,
        [](Urho3D::CollisionShape& self, Model * model, unsigned lodLevel, const  Vector3 & scale, const  Vector3 & position){ self.SetConvexHull(model, lodLevel, scale, position); },
        [](Urho3D::CollisionShape& self, Model * model, unsigned lodLevel, const  Vector3 & scale){ self.SetConvexHull(model, lodLevel, scale); },
        [](Urho3D::CollisionShape& self, Model * model, unsigned lodLevel){ self.SetConvexHull(model, lodLevel); },
        [](Urho3D::CollisionShape& self, Model * model){ self.SetConvexHull(model); } );
    type["SetCustomConvexHull"] = sol::overload(
        static_cast<void (Urho3D::CollisionShape::*)(CustomGeometry *, const  Vector3 &, const  Vector3 &, const  Quaternion &)>(&Urho3D::CollisionShape::SetCustomConvexHull) ,
        [](Urho3D::CollisionShape& self, CustomGeometry * custom, const  Vector3 & scale, const  Vector3 & position){ self.SetCustomConvexHull(custom, scale, position); },
        [](Urho3D::CollisionShape& self, CustomGeometry * custom, const  Vector3 & scale){ self.SetCustomConvexHull(custom, scale); },
        [](Urho3D::CollisionShape& self, CustomGeometry * custom){ self.SetCustomConvexHull(custom); } );
    type["SetGImpactMesh"] = sol::overload(
        static_cast<void (Urho3D::CollisionShape::*)(Model *, unsigned, const  Vector3 &, const  Vector3 &, const  Quaternion &)>(&Urho3D::CollisionShape::SetGImpactMesh) ,
        [](Urho3D::CollisionShape& self, Model * model, unsigned lodLevel, const  Vector3 & scale, const  Vector3 & position){ self.SetGImpactMesh(model, lodLevel, scale, position); },
        [](Urho3D::CollisionShape& self, Model * model, unsigned lodLevel, const  Vector3 & scale){ self.SetGImpactMesh(model, lodLevel, scale); },
        [](Urho3D::CollisionShape& self, Model * model, unsigned lodLevel){ self.SetGImpactMesh(model, lodLevel); },
        [](Urho3D::CollisionShape& self, Model * model){ self.SetGImpactMesh(model); } );
    type["SetCustomGImpactMesh"] = sol::overload(
        static_cast<void (Urho3D::CollisionShape::*)(CustomGeometry *, const  Vector3 &, const  Vector3 &, const  Quaternion &)>(&Urho3D::CollisionShape::SetCustomGImpactMesh) ,
        [](Urho3D::CollisionShape& self, CustomGeometry * custom, const  Vector3 & scale, const  Vector3 & position){ self.SetCustomGImpactMesh(custom, scale, position); },
        [](Urho3D::CollisionShape& self, CustomGeometry * custom, const  Vector3 & scale){ self.SetCustomGImpactMesh(custom, scale); },
        [](Urho3D::CollisionShape& self, CustomGeometry * custom){ self.SetCustomGImpactMesh(custom); } );
    type["SetTerrain"] = sol::overload(
        static_cast<void (Urho3D::CollisionShape::*)(unsigned)>(&Urho3D::CollisionShape::SetTerrain) ,
        [](Urho3D::CollisionShape& self){ self.SetTerrain(); } );
    type["NotifyRigidBody"] = sol::overload(
        static_cast<void (Urho3D::CollisionShape::*)(bool)>(&Urho3D::CollisionShape::NotifyRigidBody) ,
        [](Urho3D::CollisionShape& self){ self.NotifyRigidBody(); } );
    type["lodLevel"] = sol::property(static_cast<unsigned (Urho3D::CollisionShape::*)() const>(&Urho3D::CollisionShape::GetLodLevel) 
        , static_cast<void (Urho3D::CollisionShape::*)(unsigned)>(&Urho3D::CollisionShape::SetLodLevel) );
    type["margin"] = sol::property(static_cast<float (Urho3D::CollisionShape::*)() const>(&Urho3D::CollisionShape::GetMargin) 
        , static_cast<void (Urho3D::CollisionShape::*)(float)>(&Urho3D::CollisionShape::SetMargin) );
    type["model"] = sol::property([](Urho3D::CollisionShape& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetModel());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::CollisionShape::*)(Model *)>(&Urho3D::CollisionShape::SetModel) );
    type["position"] = sol::property(static_cast<const Vector3& (Urho3D::CollisionShape::*)() const>(&Urho3D::CollisionShape::GetPosition) 
        , static_cast<void (Urho3D::CollisionShape::*)(const  Vector3 &)>(&Urho3D::CollisionShape::SetPosition) );
    type["rotation"] = sol::property(static_cast<const Quaternion& (Urho3D::CollisionShape::*)() const>(&Urho3D::CollisionShape::GetRotation) 
        , static_cast<void (Urho3D::CollisionShape::*)(const  Quaternion &)>(&Urho3D::CollisionShape::SetRotation) );
    type["shapeType"] = sol::property(static_cast<ShapeType (Urho3D::CollisionShape::*)() const>(&Urho3D::CollisionShape::GetShapeType) 
        , static_cast<void (Urho3D::CollisionShape::*)(ShapeType)>(&Urho3D::CollisionShape::SetShapeType) );
    type["size"] = sol::property(static_cast<const Vector3& (Urho3D::CollisionShape::*)() const>(&Urho3D::CollisionShape::GetSize) 
        , static_cast<void (Urho3D::CollisionShape::*)(const  Vector3 &)>(&Urho3D::CollisionShape::SetSize) );
    type["worldBoundingBox"] = sol::property(static_cast<BoundingBox (Urho3D::CollisionShape::*)() const>(&Urho3D::CollisionShape::GetWorldBoundingBox) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics/CollisionShape.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics/CollisionShape.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Graphics/Terrain.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <BulletCollision/CollisionShapes/btCollisionShape.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_HeightfieldData(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::HeightfieldData>( "HeightfieldData"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::CollisionGeometryData,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Terrain *terrain, unsigned lodLevel) { 
            return Urho3D::MakeShared<Urho3D::HeightfieldData>(terrain, lodLevel);
        });

// Members

    type["heightData_"] = &Urho3D::HeightfieldData::heightData_;
    type["spacing_"] = &Urho3D::HeightfieldData::spacing_;
    type["size_"] = &Urho3D::HeightfieldData::size_;
    type["minHeight_"] = &Urho3D::HeightfieldData::minHeight_;
    type["maxHeight_"] = &Urho3D::HeightfieldData::maxHeight_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics/CollisionShape.h


#if 0 // Forbidden class Urho3D::TriangleMeshData

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics/CollisionShape.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Graphics/CustomGeometry.h>
#include <Urho3D/Graphics/Model.h>
#include <BulletCollision/CollisionShapes/btCollisionShape.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_TriangleMeshData(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::TriangleMeshData>( "TriangleMeshData"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::CollisionGeometryData,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Model *model, unsigned lodLevel) { 
            return Urho3D::MakeShared<Urho3D::TriangleMeshData>(model, lodLevel);
        },[](CustomGeometry *custom) { 
            return Urho3D::MakeShared<Urho3D::TriangleMeshData>(custom);
        });

// Members

    type["meshInterface_"] = &Urho3D::TriangleMeshData::meshInterface_;
    type["shape_"] = &Urho3D::TriangleMeshData::shape_;
    type["infoMap_"] = &Urho3D::TriangleMeshData::infoMap_;

}


#endif // Forbidden class Urho3D::TriangleMeshData

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics/CollisionShape.h


#if 0 // Forbidden class Urho3D::GImpactMeshData

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics/CollisionShape.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Graphics/CustomGeometry.h>
#include <Urho3D/Graphics/Model.h>
#include <BulletCollision/CollisionShapes/btCollisionShape.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_GImpactMeshData(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::GImpactMeshData>( "GImpactMeshData"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::CollisionGeometryData,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Model *model, unsigned lodLevel) { 
            return Urho3D::MakeShared<Urho3D::GImpactMeshData>(model, lodLevel);
        },[](CustomGeometry *custom) { 
            return Urho3D::MakeShared<Urho3D::GImpactMeshData>(custom);
        });

// Members

    type["meshInterface_"] = &Urho3D::GImpactMeshData::meshInterface_;

}


#endif // Forbidden class Urho3D::GImpactMeshData

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics/CollisionShape.h


#if 0 // Forbidden class Urho3D::ConvexData

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics/CollisionShape.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/CustomGeometry.h>
#include <Urho3D/Graphics/Model.h>
#include <Urho3D/Math/Vector3.h>
#include <BulletCollision/CollisionShapes/btCollisionShape.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ConvexData(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ConvexData>( "ConvexData"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::CollisionGeometryData,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Model *model, unsigned lodLevel) { 
            return Urho3D::MakeShared<Urho3D::ConvexData>(model, lodLevel);
        },[](CustomGeometry *custom) { 
            return Urho3D::MakeShared<Urho3D::ConvexData>(custom);
        });

// Members

    /*Build the convex hull from vertices.*//*(const PODVector< Vector3 > &vertices)*/
    type["BuildHull"] = static_cast<void (Urho3D::ConvexData::*)(const  PODVector<  Vector3 > &)>(&Urho3D::ConvexData::BuildHull) ;
    type["vertexData_"] = &Urho3D::ConvexData::vertexData_;
    type["vertexCount_"] = &Urho3D::ConvexData::vertexCount_;
    type["indexData_"] = &Urho3D::ConvexData::indexData_;
    type["indexCount_"] = &Urho3D::ConvexData::indexCount_;

}


#endif // Forbidden class Urho3D::ConvexData

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics/CollisionShape.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics/CollisionShape.h>
#include <BulletCollision/CollisionShapes/btCollisionShape.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CollisionGeometryData(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::CollisionGeometryData>( "CollisionGeometryData"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    /*NONE*/

// Members


}

