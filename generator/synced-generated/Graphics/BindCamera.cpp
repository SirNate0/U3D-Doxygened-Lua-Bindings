
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Camera.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Math/Frustum.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Matrix4.h>
#include <Urho3D/Math/Plane.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Ray.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Math/Vector4.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Camera(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Camera::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Camera::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Camera>((Urho3D::Camera*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Camera>( "Camera"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Camera>(context);
        });

// Members

    /*Visualize the component as debug geometry.*//*(DebugRenderer *debug, bool depthTest) override*/
    type["DrawDebugGeometry"] = static_cast<void (Urho3D::Camera::*)(DebugRenderer *, bool)>(&Urho3D::Camera::DrawDebugGeometry) ;
    /*Set near clip distance. BIND_AS_PROPERTY*//*(float nearClip)*/
    type["SetNearClip"] = static_cast<void (Urho3D::Camera::*)(float)>(&Urho3D::Camera::SetNearClip) ;
    /*Set far clip distance. BIND_AS_PROPERTY*//*(float farClip)*/
    type["SetFarClip"] = static_cast<void (Urho3D::Camera::*)(float)>(&Urho3D::Camera::SetFarClip) ;
    /*Set vertical field of view in degrees. BIND_AS_PROPERTY*//*(float fov)*/
    type["SetFov"] = static_cast<void (Urho3D::Camera::*)(float)>(&Urho3D::Camera::SetFov) ;
    /*Set aspect ratio manually. Disables the auto aspect ratio -mode. BIND_AS_PROPERTY*//*(float aspectRatio)*/
    type["SetAspectRatio"] = static_cast<void (Urho3D::Camera::*)(float)>(&Urho3D::Camera::SetAspectRatio) ;
    /*Set polygon fill mode to use when rendering a scene. BIND_AS_PROPERTY*//*(FillMode mode)*/
    type["SetFillMode"] = static_cast<void (Urho3D::Camera::*)(FillMode)>(&Urho3D::Camera::SetFillMode) ;
    /*Set zoom. BIND_AS_PROPERTY*//*(float zoom)*/
    type["SetZoom"] = static_cast<void (Urho3D::Camera::*)(float)>(&Urho3D::Camera::SetZoom) ;
    /*Set LOD bias. BIND_AS_PROPERTY*//*(float bias)*/
    type["SetLodBias"] = static_cast<void (Urho3D::Camera::*)(float)>(&Urho3D::Camera::SetLodBias) ;
    /*Set view mask. Will be and'ed with object's view mask to see if the object should be rendered. BIND_AS_PROPERTY*//*(unsigned mask)*/
    type["SetViewMask"] = static_cast<void (Urho3D::Camera::*)(unsigned)>(&Urho3D::Camera::SetViewMask) ;
    /*Set view override flags. BIND_AS_PROPERTY*//*(ViewOverrideFlags flags)*/
    type["SetViewOverrideFlags"] = static_cast<void (Urho3D::Camera::*)(ViewOverrideFlags)>(&Urho3D::Camera::SetViewOverrideFlags) ;
    /*Set orthographic mode enabled/disabled. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetOrthographic"] = static_cast<void (Urho3D::Camera::*)(bool)>(&Urho3D::Camera::SetOrthographic) ;
    /*Set automatic aspect ratio based on viewport dimensions. Enabled by default. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetAutoAspectRatio"] = static_cast<void (Urho3D::Camera::*)(bool)>(&Urho3D::Camera::SetAutoAspectRatio) ;
    /*Set projection offset. It needs to be calculated as (offset in pixels) / (viewport dimensions). BIND_AS_PROPERTY*//*(const Vector2 &offset)*/
    type["SetProjectionOffset"] = static_cast<void (Urho3D::Camera::*)(const  Vector2 &)>(&Urho3D::Camera::SetProjectionOffset) ;
    /*Set reflection mode. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetUseReflection"] = static_cast<void (Urho3D::Camera::*)(bool)>(&Urho3D::Camera::SetUseReflection) ;
    /*Set reflection plane in world space for reflection mode. BIND_AS_PROPERTY*//*(const Plane &plane)*/
    type["SetReflectionPlane"] = static_cast<void (Urho3D::Camera::*)(const  Plane &)>(&Urho3D::Camera::SetReflectionPlane) ;
    /*Set whether to use a custom clip plane. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetUseClipping"] = static_cast<void (Urho3D::Camera::*)(bool)>(&Urho3D::Camera::SetUseClipping) ;
    /*Set custom clipping plane in world space. BIND_AS_PROPERTY*//*(const Plane &plane)*/
    type["SetClipPlane"] = static_cast<void (Urho3D::Camera::*)(const  Plane &)>(&Urho3D::Camera::SetClipPlane) ;
    /*Set vertical flipping mode. Called internally by  View to resolve OpenGL / Direct3D9 rendertarget sampling differences.*//*(bool enable)*/
    type["SetFlipVertical"] = static_cast<void (Urho3D::Camera::*)(bool)>(&Urho3D::Camera::SetFlipVertical) ;
    /*Set custom projection matrix, which should be specified in D3D convention with depth range 0 - 1. Disables auto aspect ratio. BIND_AS_PROPERTY Change any of the standard view parameters (FOV, far clip, zoom, etc.) to revert to the standard projection. Note that the custom projection is not serialized or replicated through the network.*//*(const Matrix4 &projection)*/
    type["SetProjection"] = static_cast<void (Urho3D::Camera::*)(const  Matrix4 &)>(&Urho3D::Camera::SetProjection) ;
    /*Return far clip distance. If a custom projection matrix is in use, is calculated from it instead of the value assigned with  SetFarClip(). BIND_AS_PROPERTY*//*() const*/
    type["GetFarClip"] = static_cast<float (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetFarClip) ;
    /*Return near clip distance. If a custom projection matrix is in use, is calculated from it instead of the value assigned with  SetNearClip(). BIND_AS_PROPERTY*//*() const*/
    type["GetNearClip"] = static_cast<float (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetNearClip) ;
    /*Return vertical field of view in degrees. BIND_AS_PROPERTY*//*() const*/
    type["GetFov"] = static_cast<float (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetFov) ;
    /*Return orthographic mode size. BIND_AS_PROPERTY*//*() const*/
    type["GetOrthoSize"] = static_cast<float (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetOrthoSize) ;
    /*Return aspect ratio. BIND_AS_PROPERTY*//*() const*/
    type["GetAspectRatio"] = static_cast<float (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetAspectRatio) ;
    /*Return zoom. BIND_AS_PROPERTY*//*() const*/
    type["GetZoom"] = static_cast<float (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetZoom) ;
    /*Return LOD bias. BIND_AS_PROPERTY*//*() const*/
    type["GetLodBias"] = static_cast<float (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetLodBias) ;
    /*Return view mask. BIND_AS_PROPERTY*//*() const*/
    type["GetViewMask"] = static_cast<unsigned (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetViewMask) ;
    /*Return view override flags. BIND_AS_PROPERTY*//*() const*/
    type["GetViewOverrideFlags"] = static_cast<ViewOverrideFlags (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetViewOverrideFlags) ;
    /*Return fill mode. BIND_AS_PROPERTY*//*() const*/
    type["GetFillMode"] = static_cast<FillMode (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetFillMode) ;
    /*Return orthographic flag. BIND_AS_PROPERTY*//*() const*/
    type["IsOrthographic"] = static_cast<bool (Urho3D::Camera::*)() const>(&Urho3D::Camera::IsOrthographic) ;
    /*Return auto aspect ratio flag. BIND_AS_PROPERTY*//*() const*/
    type["GetAutoAspectRatio"] = static_cast<bool (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetAutoAspectRatio) ;
    /*Return frustum in world space. BIND_AS_PROPERTY*//*() const*/
    type["GetFrustum"] = static_cast<const Frustum& (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetFrustum) ;
    /*Return projection matrix. It's in D3D convention with depth range 0 - 1. BIND_AS_PROPERTY*//*() const*/
    type["GetProjection"] = static_cast<Matrix4 (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetProjection) ;
    /*Return projection matrix converted to API-specific format for use as a shader parameter. BIND_AS_PROPERTY*//*() const*/
    type["GetGPUProjection"] = static_cast<Matrix4 (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetGPUProjection) ;
    /*Return view matrix. BIND_AS_PROPERTY*//*() const*/
    type["GetView"] = static_cast<const Matrix3x4& (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetView) ;
    /*Return frustum near and far sizes.*//*(Vector3 &near, Vector3 &far) const*/
    type["GetFrustumSize"] = static_cast<void (Urho3D::Camera::*)(Vector3 &, Vector3 &) const>(&Urho3D::Camera::GetFrustumSize) ;
    /*Return half view size. BIND_AS_PROPERTY*//*() const*/
    type["GetHalfViewSize"] = static_cast<float (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetHalfViewSize) ;
    /*Return frustum split by custom near and far clip distances.*//*(float nearClip, float farClip) const*/
    type["GetSplitFrustum"] = static_cast<Frustum (Urho3D::Camera::*)(float, float) const>(&Urho3D::Camera::GetSplitFrustum) ;
    /*Return frustum in view space. BIND_AS_PROPERTY*//*() const*/
    type["GetViewSpaceFrustum"] = static_cast<Frustum (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetViewSpaceFrustum) ;
    /*Return split frustum in view space.*//*(float nearClip, float farClip) const*/
    type["GetViewSpaceSplitFrustum"] = static_cast<Frustum (Urho3D::Camera::*)(float, float) const>(&Urho3D::Camera::GetViewSpaceSplitFrustum) ;
    /*Return ray corresponding to normalized screen coordinates (0 - 1), with origin on the near clip plane.*//*(float x, float y) const*/
    type["GetScreenRay"] = static_cast<Ray (Urho3D::Camera::*)(float, float) const>(&Urho3D::Camera::GetScreenRay) ;
    /*Convert a world space point to normalized screen coordinates (0 - 1).*//*(const Vector3 &worldPos) const*/
    type["WorldToScreenPoint"] = static_cast<Vector2 (Urho3D::Camera::*)(const  Vector3 &) const>(&Urho3D::Camera::WorldToScreenPoint) ;
    /*Convert normalized screen coordinates (0 - 1) and distance along view Z axis (in Z coordinate) to a world space point. The distance can not be closer than the near clip plane.Note that a HitDistance() from the camera screen ray is not the same as distance along the view Z axis, as under a perspective projection the ray is likely to not be Z-aligned.*//*(const Vector3 &screenPos) const*/
    type["ScreenToWorldPoint"] = static_cast<Vector3 (Urho3D::Camera::*)(const  Vector3 &) const>(&Urho3D::Camera::ScreenToWorldPoint) ;
    /*Return projection offset. BIND_AS_PROPERTY*//*() const*/
    type["GetProjectionOffset"] = static_cast<const Vector2& (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetProjectionOffset) ;
    /*Return whether is using reflection. BIND_AS_PROPERTY*//*() const*/
    type["GetUseReflection"] = static_cast<bool (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetUseReflection) ;
    /*Return the reflection plane. BIND_AS_PROPERTY*//*() const*/
    type["GetReflectionPlane"] = static_cast<const Plane& (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetReflectionPlane) ;
    /*Return whether is using a custom clipping plane. BIND_AS_PROPERTY*//*() const*/
    type["GetUseClipping"] = static_cast<bool (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetUseClipping) ;
    /*Return the custom clipping plane. BIND_AS_PROPERTY*//*() const*/
    type["GetClipPlane"] = static_cast<const Plane& (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetClipPlane) ;
    /*Return vertical flipping mode.*//*() const*/
    type["GetFlipVertical"] = static_cast<bool (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetFlipVertical) ;
    /*Return whether to reverse culling; affected by vertical flipping and reflection.*//*() const*/
    type["GetReverseCulling"] = static_cast<bool (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetReverseCulling) ;
    /*Return distance to position. In orthographic mode uses only Z coordinate.*//*(const Vector3 &worldPos) const*/
    type["GetDistance"] = static_cast<float (Urho3D::Camera::*)(const  Vector3 &) const>(&Urho3D::Camera::GetDistance) ;
    /*Return squared distance to position. In orthographic mode uses only Z coordinate.*//*(const Vector3 &worldPos) const*/
    type["GetDistanceSquared"] = static_cast<float (Urho3D::Camera::*)(const  Vector3 &) const>(&Urho3D::Camera::GetDistanceSquared) ;
    /*Return a scene node's LOD scaled distance.*//*(float distance, float scale, float bias) const*/
    type["GetLodDistance"] = static_cast<float (Urho3D::Camera::*)(float, float, float) const>(&Urho3D::Camera::GetLodDistance) ;
    /*Get effective world transform for matrix and frustum calculations including reflection but excluding node scaling. BIND_AS_PROPERTY*//*() const*/
    type["GetEffectiveWorldTransform"] = static_cast<Matrix3x4 (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetEffectiveWorldTransform) ;
    /*Return if projection parameters are valid for rendering and raycasting.*//*() const*/
    type["IsProjectionValid"] = static_cast<bool (Urho3D::Camera::*)() const>(&Urho3D::Camera::IsProjectionValid) ;
    /*Set aspect ratio without disabling the "auto aspect ratio" mode. Called internally by  View.*//*(float aspectRatio)*/
    type["SetAspectRatioInternal"] = static_cast<void (Urho3D::Camera::*)(float)>(&Urho3D::Camera::SetAspectRatioInternal) ;
    /*Set orthographic size attribute without forcing the aspect ratio.*//*(float orthoSize)*/
    type["SetOrthoSizeAttr"] = static_cast<void (Urho3D::Camera::*)(float)>(&Urho3D::Camera::SetOrthoSizeAttr) ;
    /*Set reflection plane attribute.*//*(const Vector4 &value)*/
    type["SetReflectionPlaneAttr"] = static_cast<void (Urho3D::Camera::*)(const  Vector4 &)>(&Urho3D::Camera::SetReflectionPlaneAttr) ;
    /*Return reflection plane attribute.*//*() const*/
    type["GetReflectionPlaneAttr"] = static_cast<Vector4 (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetReflectionPlaneAttr) ;
    /*Set clipping plane attribute.*//*(const Vector4 &value)*/
    type["SetClipPlaneAttr"] = static_cast<void (Urho3D::Camera::*)(const  Vector4 &)>(&Urho3D::Camera::SetClipPlaneAttr) ;
    /*Return clipping plane attribute.*//*() const*/
    type["GetClipPlaneAttr"] = static_cast<Vector4 (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetClipPlaneAttr) ;
    type["SetOrthoSize"] = sol::overload(
        static_cast<void (Urho3D::Camera::*)(float)>(&Urho3D::Camera::SetOrthoSize) ,
        static_cast<void (Urho3D::Camera::*)(const  Vector2 &)>(&Urho3D::Camera::SetOrthoSize)  );
    type["GetFaceCameraRotation"] = sol::overload(
        static_cast<Quaternion (Urho3D::Camera::*)(const  Vector3 &, const  Quaternion &, FaceCameraMode, float)>(&Urho3D::Camera::GetFaceCameraRotation) ,
        [](Urho3D::Camera& self, const  Vector3 & position, const  Quaternion & rotation, FaceCameraMode mode){ return self.GetFaceCameraRotation(position, rotation, mode); } );
    type["aspectRatio"] = sol::property(static_cast<float (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetAspectRatio) 
        , static_cast<void (Urho3D::Camera::*)(float)>(&Urho3D::Camera::SetAspectRatio) );
    type["autoAspectRatio"] = sol::property(static_cast<bool (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetAutoAspectRatio) 
        , static_cast<void (Urho3D::Camera::*)(bool)>(&Urho3D::Camera::SetAutoAspectRatio) );
    type["clipPlane"] = sol::property(static_cast<const Plane& (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetClipPlane) 
        , static_cast<void (Urho3D::Camera::*)(const  Plane &)>(&Urho3D::Camera::SetClipPlane) );
    type["effectiveWorldTransform"] = sol::property(static_cast<Matrix3x4 (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetEffectiveWorldTransform) );
    type["farClip"] = sol::property(static_cast<float (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetFarClip) 
        , static_cast<void (Urho3D::Camera::*)(float)>(&Urho3D::Camera::SetFarClip) );
    type["fillMode"] = sol::property(static_cast<FillMode (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetFillMode) 
        , static_cast<void (Urho3D::Camera::*)(FillMode)>(&Urho3D::Camera::SetFillMode) );
    type["fov"] = sol::property(static_cast<float (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetFov) 
        , static_cast<void (Urho3D::Camera::*)(float)>(&Urho3D::Camera::SetFov) );
    type["frustum"] = sol::property(static_cast<const Frustum& (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetFrustum) );
    type["gpuProjection"] = sol::property(static_cast<Matrix4 (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetGPUProjection) );
    type["halfViewSize"] = sol::property(static_cast<float (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetHalfViewSize) );
    type["lodBias"] = sol::property(static_cast<float (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetLodBias) 
        , static_cast<void (Urho3D::Camera::*)(float)>(&Urho3D::Camera::SetLodBias) );
    type["nearClip"] = sol::property(static_cast<float (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetNearClip) 
        , static_cast<void (Urho3D::Camera::*)(float)>(&Urho3D::Camera::SetNearClip) );
    type["orthoSize"] = sol::property(static_cast<float (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetOrthoSize) 
        , static_cast<void (Urho3D::Camera::*)(float)>(&Urho3D::Camera::SetOrthoSize) );
    type["orthographic"] = sol::property(static_cast<bool (Urho3D::Camera::*)() const>(&Urho3D::Camera::IsOrthographic) 
        , static_cast<void (Urho3D::Camera::*)(bool)>(&Urho3D::Camera::SetOrthographic) );
    type["projection"] = sol::property(static_cast<Matrix4 (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetProjection) 
        , static_cast<void (Urho3D::Camera::*)(const  Matrix4 &)>(&Urho3D::Camera::SetProjection) );
    type["projectionOffset"] = sol::property(static_cast<const Vector2& (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetProjectionOffset) 
        , static_cast<void (Urho3D::Camera::*)(const  Vector2 &)>(&Urho3D::Camera::SetProjectionOffset) );
    type["reflectionPlane"] = sol::property(static_cast<const Plane& (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetReflectionPlane) 
        , static_cast<void (Urho3D::Camera::*)(const  Plane &)>(&Urho3D::Camera::SetReflectionPlane) );
    type["useClipping"] = sol::property(static_cast<bool (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetUseClipping) 
        , static_cast<void (Urho3D::Camera::*)(bool)>(&Urho3D::Camera::SetUseClipping) );
    type["useReflection"] = sol::property(static_cast<bool (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetUseReflection) 
        , static_cast<void (Urho3D::Camera::*)(bool)>(&Urho3D::Camera::SetUseReflection) );
    type["view"] = sol::property(static_cast<const Matrix3x4& (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetView) );
    type["viewMask"] = sol::property(static_cast<unsigned (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetViewMask) 
        , static_cast<void (Urho3D::Camera::*)(unsigned)>(&Urho3D::Camera::SetViewMask) );
    type["viewOverrideFlags"] = sol::property(static_cast<ViewOverrideFlags (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetViewOverrideFlags) 
        , static_cast<void (Urho3D::Camera::*)(ViewOverrideFlags)>(&Urho3D::Camera::SetViewOverrideFlags) );
    type["viewSpaceFrustum"] = sol::property(static_cast<Frustum (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetViewSpaceFrustum) );
    type["zoom"] = sol::property(static_cast<float (Urho3D::Camera::*)() const>(&Urho3D::Camera::GetZoom) 
        , static_cast<void (Urho3D::Camera::*)(float)>(&Urho3D::Camera::SetZoom) );

}

