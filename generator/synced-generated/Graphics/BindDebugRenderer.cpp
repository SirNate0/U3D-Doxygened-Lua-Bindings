
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/DebugRenderer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Graphics/Skeleton.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Frustum.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Matrix4.h>
#include <Urho3D/Math/Polyhedron.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Sphere.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Scene/Node.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_DebugRenderer(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::DebugRenderer::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::DebugRenderer::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::DebugRenderer>((Urho3D::DebugRenderer*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::DebugRenderer>( "DebugRenderer"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::DebugRenderer>(context);
        });

// Members

    /*Set line antialiasing on/off. Default false. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetLineAntiAlias"] = static_cast<void (Urho3D::DebugRenderer::*)(bool)>(&Urho3D::DebugRenderer::SetLineAntiAlias) ;
    /*Set the camera viewpoint. Call before rendering, or before adding geometry if you want to use culling.*//*(Camera *camera)*/
    type["SetView"] = static_cast<void (Urho3D::DebugRenderer::*)(Camera *)>(&Urho3D::DebugRenderer::SetView) ;
    /*Update vertex buffer and render all debug lines. The viewport and rendertarget should be set before.*//*()*/
    type["Render"] = static_cast<void (Urho3D::DebugRenderer::*)()>(&Urho3D::DebugRenderer::Render) ;
    /*Return whether line antialiasing is enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetLineAntiAlias"] = static_cast<bool (Urho3D::DebugRenderer::*)() const>(&Urho3D::DebugRenderer::GetLineAntiAlias) ;
    /*Return the view transform.*//*() const*/
    type["GetView"] = static_cast<const Matrix3x4& (Urho3D::DebugRenderer::*)() const>(&Urho3D::DebugRenderer::GetView) ;
    /*Return the projection transform.*//*() const*/
    type["GetProjection"] = static_cast<const Matrix4& (Urho3D::DebugRenderer::*)() const>(&Urho3D::DebugRenderer::GetProjection) ;
    /*Return the view frustum.*//*() const*/
    type["GetFrustum"] = static_cast<const Frustum& (Urho3D::DebugRenderer::*)() const>(&Urho3D::DebugRenderer::GetFrustum) ;
    /*Check whether a bounding box is inside the view frustum.*//*(const BoundingBox &box) const*/
    type["IsInside"] = static_cast<bool (Urho3D::DebugRenderer::*)(const  BoundingBox &) const>(&Urho3D::DebugRenderer::IsInside) ;
    /*Return whether has something to render.*//*() const*/
    type["HasContent"] = static_cast<bool (Urho3D::DebugRenderer::*)() const>(&Urho3D::DebugRenderer::HasContent) ;
    type["AddLine"] = sol::overload(
        static_cast<void (Urho3D::DebugRenderer::*)(const  Vector3 &, const  Vector3 &, const  Color &, bool)>(&Urho3D::DebugRenderer::AddLine) ,
        [](Urho3D::DebugRenderer& self, const  Vector3 & start, const  Vector3 & end, const  Color & color){ self.AddLine(start, end, color); },
        static_cast<void (Urho3D::DebugRenderer::*)(const  Vector3 &, const  Vector3 &, unsigned, bool)>(&Urho3D::DebugRenderer::AddLine) ,
        [](Urho3D::DebugRenderer& self, const  Vector3 & start, const  Vector3 & end, unsigned color){ self.AddLine(start, end, color); } );
    type["AddTriangle"] = sol::overload(
        static_cast<void (Urho3D::DebugRenderer::*)(const  Vector3 &, const  Vector3 &, const  Vector3 &, const  Color &, bool)>(&Urho3D::DebugRenderer::AddTriangle) ,
        [](Urho3D::DebugRenderer& self, const  Vector3 & v1, const  Vector3 & v2, const  Vector3 & v3, const  Color & color){ self.AddTriangle(v1, v2, v3, color); },
        static_cast<void (Urho3D::DebugRenderer::*)(const  Vector3 &, const  Vector3 &, const  Vector3 &, unsigned, bool)>(&Urho3D::DebugRenderer::AddTriangle) ,
        [](Urho3D::DebugRenderer& self, const  Vector3 & v1, const  Vector3 & v2, const  Vector3 & v3, unsigned color){ self.AddTriangle(v1, v2, v3, color); } );
    type["AddPolygon"] = sol::overload(
        static_cast<void (Urho3D::DebugRenderer::*)(const  Vector3 &, const  Vector3 &, const  Vector3 &, const  Vector3 &, const  Color &, bool)>(&Urho3D::DebugRenderer::AddPolygon) ,
        [](Urho3D::DebugRenderer& self, const  Vector3 & v1, const  Vector3 & v2, const  Vector3 & v3, const  Vector3 & v4, const  Color & color){ self.AddPolygon(v1, v2, v3, v4, color); },
        static_cast<void (Urho3D::DebugRenderer::*)(const  Vector3 &, const  Vector3 &, const  Vector3 &, const  Vector3 &, unsigned, bool)>(&Urho3D::DebugRenderer::AddPolygon) ,
        [](Urho3D::DebugRenderer& self, const  Vector3 & v1, const  Vector3 & v2, const  Vector3 & v3, const  Vector3 & v4, unsigned color){ self.AddPolygon(v1, v2, v3, v4, color); } );
    type["AddNode"] = sol::overload(
        static_cast<void (Urho3D::DebugRenderer::*)(Node *, float, bool)>(&Urho3D::DebugRenderer::AddNode) ,
        [](Urho3D::DebugRenderer& self, Node * node, float scale){ self.AddNode(node, scale); },
        [](Urho3D::DebugRenderer& self, Node * node){ self.AddNode(node); } );
    type["AddBoundingBox"] = sol::overload(
        static_cast<void (Urho3D::DebugRenderer::*)(const  BoundingBox &, const  Color &, bool, bool)>(&Urho3D::DebugRenderer::AddBoundingBox) ,
        [](Urho3D::DebugRenderer& self, const  BoundingBox & box, const  Color & color, bool depthTest){ self.AddBoundingBox(box, color, depthTest); },
        [](Urho3D::DebugRenderer& self, const  BoundingBox & box, const  Color & color){ self.AddBoundingBox(box, color); },
        static_cast<void (Urho3D::DebugRenderer::*)(const  BoundingBox &, const  Matrix3x4 &, const  Color &, bool, bool)>(&Urho3D::DebugRenderer::AddBoundingBox) ,
        [](Urho3D::DebugRenderer& self, const  BoundingBox & box, const  Matrix3x4 & transform, const  Color & color, bool depthTest){ self.AddBoundingBox(box, transform, color, depthTest); },
        [](Urho3D::DebugRenderer& self, const  BoundingBox & box, const  Matrix3x4 & transform, const  Color & color){ self.AddBoundingBox(box, transform, color); } );
    type["AddFrustum"] = sol::overload(
        static_cast<void (Urho3D::DebugRenderer::*)(const  Frustum &, const  Color &, bool)>(&Urho3D::DebugRenderer::AddFrustum) ,
        [](Urho3D::DebugRenderer& self, const  Frustum & frustum, const  Color & color){ self.AddFrustum(frustum, color); } );
    type["AddPolyhedron"] = sol::overload(
        static_cast<void (Urho3D::DebugRenderer::*)(const  Polyhedron &, const  Color &, bool)>(&Urho3D::DebugRenderer::AddPolyhedron) ,
        [](Urho3D::DebugRenderer& self, const  Polyhedron & poly, const  Color & color){ self.AddPolyhedron(poly, color); } );
    type["AddSphere"] = sol::overload(
        static_cast<void (Urho3D::DebugRenderer::*)(const  Sphere &, const  Color &, bool)>(&Urho3D::DebugRenderer::AddSphere) ,
        [](Urho3D::DebugRenderer& self, const  Sphere & sphere, const  Color & color){ self.AddSphere(sphere, color); } );
    type["AddSphereSector"] = sol::overload(
        static_cast<void (Urho3D::DebugRenderer::*)(const  Sphere &, const  Quaternion &, float, bool, const  Color &, bool)>(&Urho3D::DebugRenderer::AddSphereSector) ,
        [](Urho3D::DebugRenderer& self, const  Sphere & sphere, const  Quaternion & rotation, float angle, bool drawLines, const  Color & color){ self.AddSphereSector(sphere, rotation, angle, drawLines, color); } );
    type["AddCylinder"] = sol::overload(
        static_cast<void (Urho3D::DebugRenderer::*)(const  Vector3 &, float, float, const  Color &, bool)>(&Urho3D::DebugRenderer::AddCylinder) ,
        [](Urho3D::DebugRenderer& self, const  Vector3 & position, float radius, float height, const  Color & color){ self.AddCylinder(position, radius, height, color); } );
    type["AddSkeleton"] = sol::overload(
        static_cast<void (Urho3D::DebugRenderer::*)(const  Skeleton &, const  Color &, bool)>(&Urho3D::DebugRenderer::AddSkeleton) ,
        [](Urho3D::DebugRenderer& self, const  Skeleton & skeleton, const  Color & color){ self.AddSkeleton(skeleton, color); } );
    type["AddTriangleMesh"] = sol::overload(
        static_cast<void (Urho3D::DebugRenderer::*)(const void *, unsigned, const void *, unsigned, unsigned, unsigned, const  Matrix3x4 &, const  Color &, bool)>(&Urho3D::DebugRenderer::AddTriangleMesh) ,
        [](Urho3D::DebugRenderer& self, const void * vertexData, unsigned vertexSize, const void * indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount, const  Matrix3x4 & transform, const  Color & color){ self.AddTriangleMesh(vertexData, vertexSize, indexData, indexSize, indexStart, indexCount, transform, color); },
        static_cast<void (Urho3D::DebugRenderer::*)(const void *, unsigned, unsigned, const void *, unsigned, unsigned, unsigned, const  Matrix3x4 &, const  Color &, bool)>(&Urho3D::DebugRenderer::AddTriangleMesh) ,
        [](Urho3D::DebugRenderer& self, const void * vertexData, unsigned vertexSize, unsigned vertexStart, const void * indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount, const  Matrix3x4 & transform, const  Color & color){ self.AddTriangleMesh(vertexData, vertexSize, vertexStart, indexData, indexSize, indexStart, indexCount, transform, color); } );
    type["AddCircle"] = sol::overload(
        static_cast<void (Urho3D::DebugRenderer::*)(const  Vector3 &, const  Vector3 &, float, const  Color &, int, bool)>(&Urho3D::DebugRenderer::AddCircle) ,
        [](Urho3D::DebugRenderer& self, const  Vector3 & center, const  Vector3 & normal, float radius, const  Color & color, int steps){ self.AddCircle(center, normal, radius, color, steps); },
        [](Urho3D::DebugRenderer& self, const  Vector3 & center, const  Vector3 & normal, float radius, const  Color & color){ self.AddCircle(center, normal, radius, color); } );
    type["AddCross"] = sol::overload(
        static_cast<void (Urho3D::DebugRenderer::*)(const  Vector3 &, float, const  Color &, bool)>(&Urho3D::DebugRenderer::AddCross) ,
        [](Urho3D::DebugRenderer& self, const  Vector3 & center, float size, const  Color & color){ self.AddCross(center, size, color); } );
    type["AddQuad"] = sol::overload(
        static_cast<void (Urho3D::DebugRenderer::*)(const  Vector3 &, float, float, const  Color &, bool)>(&Urho3D::DebugRenderer::AddQuad) ,
        [](Urho3D::DebugRenderer& self, const  Vector3 & center, float width, float height, const  Color & color){ self.AddQuad(center, width, height, color); } );
    type["lineAntiAlias"] = sol::property(static_cast<bool (Urho3D::DebugRenderer::*)() const>(&Urho3D::DebugRenderer::GetLineAntiAlias) 
        , static_cast<void (Urho3D::DebugRenderer::*)(bool)>(&Urho3D::DebugRenderer::SetLineAntiAlias) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/DebugRenderer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_DebugTriangle(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::DebugTriangle>( "DebugTriangle"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::DebugTriangle(),
        Urho3D::DebugTriangle(const  Vector3 &, const  Vector3 &, const  Vector3 &, unsigned)>();

// Members

    type["v1_"] = &Urho3D::DebugTriangle::v1_;
    type["v2_"] = &Urho3D::DebugTriangle::v2_;
    type["v3_"] = &Urho3D::DebugTriangle::v3_;
    type["color_"] = &Urho3D::DebugTriangle::color_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/DebugRenderer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_DebugLine(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::DebugLine>( "DebugLine"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::DebugLine(),
        Urho3D::DebugLine(const  Vector3 &, const  Vector3 &, unsigned)>();

// Members

    type["start_"] = &Urho3D::DebugLine::start_;
    type["end_"] = &Urho3D::DebugLine::end_;
    type["color_"] = &Urho3D::DebugLine::color_;

}

