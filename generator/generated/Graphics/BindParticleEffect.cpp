
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/ParticleEffect.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/ParticleEffect.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/ParticleEffect.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Resource/Resource.h>
#include <Urho3D/Resource/XMLElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ParticleEffect(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ParticleEffect::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ParticleEffect::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ParticleEffect>((Urho3D::ParticleEffect*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ParticleEffect>( "ParticleEffect"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ParticleEffect>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::ParticleEffect::*)(Deserializer &)>(&Urho3D::ParticleEffect::BeginLoad) ;
    /*Finish resource loading. Always called from the main thread. Return true if successful.*//*() override*/
    type["EndLoad"] = static_cast<bool (Urho3D::ParticleEffect::*)()>(&Urho3D::ParticleEffect::EndLoad) ;
    /*Set material. BIND_AS_PROPERTY*//*(Material *material)*/
    type["SetMaterial"] = static_cast<void (Urho3D::ParticleEffect::*)(Material *)>(&Urho3D::ParticleEffect::SetMaterial) ;
    /*Set maximum number of particles. BIND_AS_PROPERTY*//*(unsigned num)*/
    type["SetNumParticles"] = static_cast<void (Urho3D::ParticleEffect::*)(unsigned)>(&Urho3D::ParticleEffect::SetNumParticles) ;
    /*Set whether to update when particles are not visible. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetUpdateInvisible"] = static_cast<void (Urho3D::ParticleEffect::*)(bool)>(&Urho3D::ParticleEffect::SetUpdateInvisible) ;
    /*Set whether billboards are relative to the scene node. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetRelative"] = static_cast<void (Urho3D::ParticleEffect::*)(bool)>(&Urho3D::ParticleEffect::SetRelative) ;
    /*Set whether scene node scale affects billboards' size. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetScaled"] = static_cast<void (Urho3D::ParticleEffect::*)(bool)>(&Urho3D::ParticleEffect::SetScaled) ;
    /*Set whether billboards are sorted by distance. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetSorted"] = static_cast<void (Urho3D::ParticleEffect::*)(bool)>(&Urho3D::ParticleEffect::SetSorted) ;
    /*Set whether billboards have fixed size on screen (measured in pixels) regardless of distance to camera. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetFixedScreenSize"] = static_cast<void (Urho3D::ParticleEffect::*)(bool)>(&Urho3D::ParticleEffect::SetFixedScreenSize) ;
    /*Set animation LOD bias. BIND_AS_PROPERTY*//*(float lodBias)*/
    type["SetAnimationLodBias"] = static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetAnimationLodBias) ;
    /*Set emitter type. BIND_AS_PROPERTY*//*(EmitterType type)*/
    type["SetEmitterType"] = static_cast<void (Urho3D::ParticleEffect::*)(EmitterType)>(&Urho3D::ParticleEffect::SetEmitterType) ;
    /*Set emitter size. BIND_AS_PROPERTY*//*(const Vector3 &size)*/
    type["SetEmitterSize"] = static_cast<void (Urho3D::ParticleEffect::*)(const  Vector3 &)>(&Urho3D::ParticleEffect::SetEmitterSize) ;
    /*Set negative direction limit. BIND_AS_PROPERTY*//*(const Vector3 &direction)*/
    type["SetMinDirection"] = static_cast<void (Urho3D::ParticleEffect::*)(const  Vector3 &)>(&Urho3D::ParticleEffect::SetMinDirection) ;
    /*Set positive direction limit. BIND_AS_PROPERTY*//*(const Vector3 &direction)*/
    type["SetMaxDirection"] = static_cast<void (Urho3D::ParticleEffect::*)(const  Vector3 &)>(&Urho3D::ParticleEffect::SetMaxDirection) ;
    /*Set constant force acting on particles. BIND_AS_PROPERTY*//*(const Vector3 &force)*/
    type["SetConstantForce"] = static_cast<void (Urho3D::ParticleEffect::*)(const  Vector3 &)>(&Urho3D::ParticleEffect::SetConstantForce) ;
    /*Set particle velocity damping force. BIND_AS_PROPERTY*//*(float force)*/
    type["SetDampingForce"] = static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetDampingForce) ;
    /*Set emission active period length (0 = infinite). BIND_AS_PROPERTY*//*(float time)*/
    type["SetActiveTime"] = static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetActiveTime) ;
    /*Set emission inactive period length (0 = infinite). BIND_AS_PROPERTY*//*(float time)*/
    type["SetInactiveTime"] = static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetInactiveTime) ;
    /*Set minimum emission rate. BIND_AS_PROPERTY*//*(float rate)*/
    type["SetMinEmissionRate"] = static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMinEmissionRate) ;
    /*Set maximum emission rate. BIND_AS_PROPERTY*//*(float rate)*/
    type["SetMaxEmissionRate"] = static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMaxEmissionRate) ;
    /*Set particle minimum size. BIND_AS_PROPERTY*//*(const Vector2 &size)*/
    type["SetMinParticleSize"] = static_cast<void (Urho3D::ParticleEffect::*)(const  Vector2 &)>(&Urho3D::ParticleEffect::SetMinParticleSize) ;
    /*Set particle maximum size. BIND_AS_PROPERTY*//*(const Vector2 &size)*/
    type["SetMaxParticleSize"] = static_cast<void (Urho3D::ParticleEffect::*)(const  Vector2 &)>(&Urho3D::ParticleEffect::SetMaxParticleSize) ;
    /*Set particle minimum time to live. BIND_AS_PROPERTY*//*(float time)*/
    type["SetMinTimeToLive"] = static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMinTimeToLive) ;
    /*Set particle maximum time to live. BIND_AS_PROPERTY*//*(float time)*/
    type["SetMaxTimeToLive"] = static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMaxTimeToLive) ;
    /*Set particle minimum velocity. BIND_AS_PROPERTY*//*(float velocity)*/
    type["SetMinVelocity"] = static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMinVelocity) ;
    /*Set particle maximum velocity. BIND_AS_PROPERTY*//*(float velocity)*/
    type["SetMaxVelocity"] = static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMaxVelocity) ;
    /*Set particle minimum rotation. BIND_AS_PROPERTY*//*(float rotation)*/
    type["SetMinRotation"] = static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMinRotation) ;
    /*Set particle maximum rotation. BIND_AS_PROPERTY*//*(float rotation)*/
    type["SetMaxRotation"] = static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMaxRotation) ;
    /*Set particle minimum rotation speed. BIND_AS_PROPERTY*//*(float speed)*/
    type["SetMinRotationSpeed"] = static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMinRotationSpeed) ;
    /*Set particle maximum rotation speed. BIND_AS_PROPERTY*//*(float speed)*/
    type["SetMaxRotationSpeed"] = static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMaxRotationSpeed) ;
    /*Set particle size additive modifier. BIND_AS_PROPERTY*//*(float sizeAdd)*/
    type["SetSizeAdd"] = static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetSizeAdd) ;
    /*Set particle size multiplicative modifier. BIND_AS_PROPERTY*//*(float sizeMul)*/
    type["SetSizeMul"] = static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetSizeMul) ;
    /*Set how the particles should rotate in relation to the camera. Default is to follow camera rotation on all axes (FC_ROTATE_XYZ). BIND_AS_PROPERTY*//*(FaceCameraMode mode)*/
    type["SetFaceCameraMode"] = static_cast<void (Urho3D::ParticleEffect::*)(FaceCameraMode)>(&Urho3D::ParticleEffect::SetFaceCameraMode) ;
    /*Add a color frame sorted in the correct position based on time.*//*(const Color &color, float time)*/
    type["AddColorTime"] = static_cast<void (Urho3D::ParticleEffect::*)(const  Color &, float)>(&Urho3D::ParticleEffect::AddColorTime) ;
    /*Add a color frame sorted in the correct position based on time.*//*(const ColorFrame &colorFrame)*/
    type["AddColorFrame"] = static_cast<void (Urho3D::ParticleEffect::*)(const  ColorFrame &)>(&Urho3D::ParticleEffect::AddColorFrame) ;
    /*Remove color frame at index.*//*(unsigned index)*/
    type["RemoveColorFrame"] = static_cast<void (Urho3D::ParticleEffect::*)(unsigned)>(&Urho3D::ParticleEffect::RemoveColorFrame) ;
    /*Set color animation of particles.*//*(const Vector< ColorFrame > &colorFrames)*/
    type["SetColorFrames"] = static_cast<void (Urho3D::ParticleEffect::*)(const  Vector<  ColorFrame > &)>(&Urho3D::ParticleEffect::SetColorFrames) ;
    /*Set color animation frame at index. If index is greater than number of color frames, new color frames are added.*//*(unsigned index, const ColorFrame &colorFrame)*/
    type["SetColorFrame"] = static_cast<void (Urho3D::ParticleEffect::*)(unsigned, const  ColorFrame &)>(&Urho3D::ParticleEffect::SetColorFrame) ;
    /*Set number of color frames. BIND_AS_PROPERTY*//*(unsigned number)*/
    type["SetNumColorFrames"] = static_cast<void (Urho3D::ParticleEffect::*)(unsigned)>(&Urho3D::ParticleEffect::SetNumColorFrames) ;
    /*Sort the list of color frames based on time.*//*()*/
    type["SortColorFrames"] = static_cast<void (Urho3D::ParticleEffect::*)()>(&Urho3D::ParticleEffect::SortColorFrames) ;
    /*Add a texture frame sorted in the correct position based on time.*//*(const Rect &uv, float time)*/
    type["AddTextureTime"] = static_cast<void (Urho3D::ParticleEffect::*)(const  Rect &, float)>(&Urho3D::ParticleEffect::AddTextureTime) ;
    /*Add a texture frame sorted in the correct position based on time.*//*(const TextureFrame &textureFrame)*/
    type["AddTextureFrame"] = static_cast<void (Urho3D::ParticleEffect::*)(const  TextureFrame &)>(&Urho3D::ParticleEffect::AddTextureFrame) ;
    /*Remove texture frame at index.*//*(unsigned index)*/
    type["RemoveTextureFrame"] = static_cast<void (Urho3D::ParticleEffect::*)(unsigned)>(&Urho3D::ParticleEffect::RemoveTextureFrame) ;
    /*Set particle texture animation.*//*(const Vector< TextureFrame > &textureFrames)*/
    type["SetTextureFrames"] = static_cast<void (Urho3D::ParticleEffect::*)(const  Vector<  TextureFrame > &)>(&Urho3D::ParticleEffect::SetTextureFrames) ;
    /*Set number of texture animation frames.*//*(unsigned index, const TextureFrame &textureFrame)*/
    type["SetTextureFrame"] = static_cast<void (Urho3D::ParticleEffect::*)(unsigned, const  TextureFrame &)>(&Urho3D::ParticleEffect::SetTextureFrame) ;
    /*Set number of texture frames. BIND_AS_PROPERTY*//*(unsigned number)*/
    type["SetNumTextureFrames"] = static_cast<void (Urho3D::ParticleEffect::*)(unsigned)>(&Urho3D::ParticleEffect::SetNumTextureFrames) ;
    /*Sort the list of texture frames based on time.*//*()*/
    type["SortTextureFrames"] = static_cast<void (Urho3D::ParticleEffect::*)()>(&Urho3D::ParticleEffect::SortTextureFrames) ;
    /*Return material. BIND_AS_PROPERTY*//*() const*/
    type["GetMaterial"] = [](Urho3D::ParticleEffect& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return maximum number of particles. BIND_AS_PROPERTY*//*() const*/
    type["GetNumParticles"] = static_cast<unsigned (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetNumParticles) ;
    /*Return whether to update when particles are not visible. BIND_AS_PROPERTY*//*() const*/
    type["GetUpdateInvisible"] = static_cast<bool (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetUpdateInvisible) ;
    /*Return whether billboards are relative to the scene node. BIND_AS_PROPERTY*//*() const*/
    type["IsRelative"] = static_cast<bool (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::IsRelative) ;
    /*Return whether scene node scale affects billboards' size. BIND_AS_PROPERTY*//*() const*/
    type["IsScaled"] = static_cast<bool (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::IsScaled) ;
    /*Return whether billboards are sorted. BIND_AS_PROPERTY*//*() const*/
    type["IsSorted"] = static_cast<bool (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::IsSorted) ;
    /*Return whether billboards are fixed screen size. BIND_AS_PROPERTY*//*() const*/
    type["IsFixedScreenSize"] = static_cast<bool (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::IsFixedScreenSize) ;
    /*Return animation Lod bias. BIND_AS_PROPERTY*//*() const*/
    type["GetAnimationLodBias"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetAnimationLodBias) ;
    /*Return emitter type. BIND_AS_PROPERTY*//*() const*/
    type["GetEmitterType"] = static_cast<EmitterType (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetEmitterType) ;
    /*Return emitter size. BIND_AS_PROPERTY*//*() const*/
    type["GetEmitterSize"] = static_cast<const Vector3& (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetEmitterSize) ;
    /*Return negative direction limit. BIND_AS_PROPERTY*//*() const*/
    type["GetMinDirection"] = static_cast<const Vector3& (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMinDirection) ;
    /*Return positive direction limit. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxDirection"] = static_cast<const Vector3& (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMaxDirection) ;
    /*Return constant force acting on particles. BIND_AS_PROPERTY*//*() const*/
    type["GetConstantForce"] = static_cast<const Vector3& (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetConstantForce) ;
    /*Return particle velocity damping force. BIND_AS_PROPERTY*//*() const*/
    type["GetDampingForce"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetDampingForce) ;
    /*Return emission active period length (0 = infinite). BIND_AS_PROPERTY*//*() const*/
    type["GetActiveTime"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetActiveTime) ;
    /*Return emission inactive period length (0 = infinite). BIND_AS_PROPERTY*//*() const*/
    type["GetInactiveTime"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetInactiveTime) ;
    /*Return minimum emission rate. BIND_AS_PROPERTY*//*() const*/
    type["GetMinEmissionRate"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMinEmissionRate) ;
    /*Return maximum emission rate. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxEmissionRate"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMaxEmissionRate) ;
    /*Return particle minimum size. BIND_AS_PROPERTY*//*() const*/
    type["GetMinParticleSize"] = static_cast<const Vector2& (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMinParticleSize) ;
    /*Return particle maximum size. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxParticleSize"] = static_cast<const Vector2& (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMaxParticleSize) ;
    /*Return particle minimum time to live. BIND_AS_PROPERTY*//*() const*/
    type["GetMinTimeToLive"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMinTimeToLive) ;
    /*Return particle maximum time to live. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxTimeToLive"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMaxTimeToLive) ;
    /*Return particle minimum velocity. BIND_AS_PROPERTY*//*() const*/
    type["GetMinVelocity"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMinVelocity) ;
    /*Return particle maximum velocity. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxVelocity"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMaxVelocity) ;
    /*Return particle minimum rotation. BIND_AS_PROPERTY*//*() const*/
    type["GetMinRotation"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMinRotation) ;
    /*Return particle maximum rotation. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxRotation"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMaxRotation) ;
    /*Return particle minimum rotation speed. BIND_AS_PROPERTY*//*() const*/
    type["GetMinRotationSpeed"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMinRotationSpeed) ;
    /*Return particle maximum rotation speed. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxRotationSpeed"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMaxRotationSpeed) ;
    /*Return particle size additive modifier. BIND_AS_PROPERTY*//*() const*/
    type["GetSizeAdd"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetSizeAdd) ;
    /*Return particle size multiplicative modifier. BIND_AS_PROPERTY*//*() const*/
    type["GetSizeMul"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetSizeMul) ;
    /*Return all color animation frames.*//*() const*/
    type["GetColorFrames"] = static_cast<const Vector<ColorFrame>& (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetColorFrames) ;
    /*Return number of color animation frames. BIND_AS_PROPERTY*//*() const*/
    type["GetNumColorFrames"] = static_cast<unsigned (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetNumColorFrames) ;
    /*Return a color animation frame, or null if outside range.*//*(unsigned index) const*/
    type["GetColorFrame"] = static_cast<const ColorFrame* (Urho3D::ParticleEffect::*)(unsigned) const>(&Urho3D::ParticleEffect::GetColorFrame) ;
    /*Return all texture animation frames.*//*() const*/
    type["GetTextureFrames"] = static_cast<const Vector<TextureFrame>& (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetTextureFrames) ;
    /*Return number of texture animation frames. BIND_AS_PROPERTY*//*() const*/
    type["GetNumTextureFrames"] = static_cast<unsigned (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetNumTextureFrames) ;
    /*Return a texture animation frame, or null if outside range.*//*(unsigned index) const*/
    type["GetTextureFrame"] = static_cast<const TextureFrame* (Urho3D::ParticleEffect::*)(unsigned) const>(&Urho3D::ParticleEffect::GetTextureFrame) ;
    /*Return how the particles rotate in relation to the camera. BIND_AS_PROPERTY*//*() const*/
    type["GetFaceCameraMode"] = static_cast<FaceCameraMode (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetFaceCameraMode) ;
    /*Return random direction.*//*() const*/
    type["GetRandomDirection"] = static_cast<Vector3 (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetRandomDirection) ;
    /*Return random size.*//*() const*/
    type["GetRandomSize"] = static_cast<Vector2 (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetRandomSize) ;
    /*Return random velocity.*//*() const*/
    type["GetRandomVelocity"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetRandomVelocity) ;
    /*Return random timetolive.*//*() const*/
    type["GetRandomTimeToLive"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetRandomTimeToLive) ;
    /*Return random rotationspeed.*//*() const*/
    type["GetRandomRotationSpeed"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetRandomRotationSpeed) ;
    /*Return random rotation.*//*() const*/
    type["GetRandomRotation"] = static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetRandomRotation) ;
    type["Save"] = sol::overload(
        static_cast<bool (Urho3D::ParticleEffect::*)(Serializer &) const>(&Urho3D::ParticleEffect::Save) ,
        static_cast<bool (Urho3D::ParticleEffect::*)(XMLElement &) const>(&Urho3D::ParticleEffect::Save)  );
    type["Load"] = sol::overload(
        static_cast<bool (Urho3D::ParticleEffect::*)(const  XMLElement &)>(&Urho3D::ParticleEffect::Load) ,
        static_cast<bool (Urho3D::Resource::*)(Deserializer &)>(&Urho3D::Resource::Load)  );
    type["Clone"] = sol::overload(
        static_cast<SharedPtr<ParticleEffect> (Urho3D::ParticleEffect::*)(const  String &) const>(&Urho3D::ParticleEffect::Clone) ,
        [](Urho3D::ParticleEffect& self){ return self.Clone(); } );
    type["activeTime"] = sol::property(static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetActiveTime) 
        , static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetActiveTime) );
    type["animationLodBias"] = sol::property(static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetAnimationLodBias) 
        , static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetAnimationLodBias) );
    type["constantForce"] = sol::property(static_cast<const Vector3& (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetConstantForce) 
        , static_cast<void (Urho3D::ParticleEffect::*)(const  Vector3 &)>(&Urho3D::ParticleEffect::SetConstantForce) );
    type["dampingForce"] = sol::property(static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetDampingForce) 
        , static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetDampingForce) );
    type["emitterSize"] = sol::property(static_cast<const Vector3& (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetEmitterSize) 
        , static_cast<void (Urho3D::ParticleEffect::*)(const  Vector3 &)>(&Urho3D::ParticleEffect::SetEmitterSize) );
    type["emitterType"] = sol::property(static_cast<EmitterType (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetEmitterType) 
        , static_cast<void (Urho3D::ParticleEffect::*)(EmitterType)>(&Urho3D::ParticleEffect::SetEmitterType) );
    type["faceCameraMode"] = sol::property(static_cast<FaceCameraMode (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetFaceCameraMode) 
        , static_cast<void (Urho3D::ParticleEffect::*)(FaceCameraMode)>(&Urho3D::ParticleEffect::SetFaceCameraMode) );
    type["fixedScreenSize"] = sol::property(static_cast<bool (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::IsFixedScreenSize) 
        , static_cast<void (Urho3D::ParticleEffect::*)(bool)>(&Urho3D::ParticleEffect::SetFixedScreenSize) );
    type["inactiveTime"] = sol::property(static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetInactiveTime) 
        , static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetInactiveTime) );
    type["material"] = sol::property([](Urho3D::ParticleEffect& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::ParticleEffect::*)(Material *)>(&Urho3D::ParticleEffect::SetMaterial) );
    type["maxDirection"] = sol::property(static_cast<const Vector3& (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMaxDirection) 
        , static_cast<void (Urho3D::ParticleEffect::*)(const  Vector3 &)>(&Urho3D::ParticleEffect::SetMaxDirection) );
    type["maxEmissionRate"] = sol::property(static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMaxEmissionRate) 
        , static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMaxEmissionRate) );
    type["maxParticleSize"] = sol::property(static_cast<const Vector2& (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMaxParticleSize) 
        , static_cast<void (Urho3D::ParticleEffect::*)(const  Vector2 &)>(&Urho3D::ParticleEffect::SetMaxParticleSize) );
    type["maxRotation"] = sol::property(static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMaxRotation) 
        , static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMaxRotation) );
    type["maxRotationSpeed"] = sol::property(static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMaxRotationSpeed) 
        , static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMaxRotationSpeed) );
    type["maxTimeToLive"] = sol::property(static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMaxTimeToLive) 
        , static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMaxTimeToLive) );
    type["maxVelocity"] = sol::property(static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMaxVelocity) 
        , static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMaxVelocity) );
    type["minDirection"] = sol::property(static_cast<const Vector3& (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMinDirection) 
        , static_cast<void (Urho3D::ParticleEffect::*)(const  Vector3 &)>(&Urho3D::ParticleEffect::SetMinDirection) );
    type["minEmissionRate"] = sol::property(static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMinEmissionRate) 
        , static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMinEmissionRate) );
    type["minParticleSize"] = sol::property(static_cast<const Vector2& (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMinParticleSize) 
        , static_cast<void (Urho3D::ParticleEffect::*)(const  Vector2 &)>(&Urho3D::ParticleEffect::SetMinParticleSize) );
    type["minRotation"] = sol::property(static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMinRotation) 
        , static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMinRotation) );
    type["minRotationSpeed"] = sol::property(static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMinRotationSpeed) 
        , static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMinRotationSpeed) );
    type["minTimeToLive"] = sol::property(static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMinTimeToLive) 
        , static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMinTimeToLive) );
    type["minVelocity"] = sol::property(static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetMinVelocity) 
        , static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetMinVelocity) );
    type["numColorFrames"] = sol::property(static_cast<unsigned (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetNumColorFrames) 
        , static_cast<void (Urho3D::ParticleEffect::*)(unsigned)>(&Urho3D::ParticleEffect::SetNumColorFrames) );
    type["numParticles"] = sol::property(static_cast<unsigned (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetNumParticles) 
        , static_cast<void (Urho3D::ParticleEffect::*)(unsigned)>(&Urho3D::ParticleEffect::SetNumParticles) );
    type["numTextureFrames"] = sol::property(static_cast<unsigned (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetNumTextureFrames) 
        , static_cast<void (Urho3D::ParticleEffect::*)(unsigned)>(&Urho3D::ParticleEffect::SetNumTextureFrames) );
    type["relative"] = sol::property(static_cast<bool (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::IsRelative) 
        , static_cast<void (Urho3D::ParticleEffect::*)(bool)>(&Urho3D::ParticleEffect::SetRelative) );
    type["scaled"] = sol::property(static_cast<bool (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::IsScaled) 
        , static_cast<void (Urho3D::ParticleEffect::*)(bool)>(&Urho3D::ParticleEffect::SetScaled) );
    type["sizeAdd"] = sol::property(static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetSizeAdd) 
        , static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetSizeAdd) );
    type["sizeMul"] = sol::property(static_cast<float (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetSizeMul) 
        , static_cast<void (Urho3D::ParticleEffect::*)(float)>(&Urho3D::ParticleEffect::SetSizeMul) );
    type["sorted"] = sol::property(static_cast<bool (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::IsSorted) 
        , static_cast<void (Urho3D::ParticleEffect::*)(bool)>(&Urho3D::ParticleEffect::SetSorted) );
    type["updateInvisible"] = sol::property(static_cast<bool (Urho3D::ParticleEffect::*)() const>(&Urho3D::ParticleEffect::GetUpdateInvisible) 
        , static_cast<void (Urho3D::ParticleEffect::*)(bool)>(&Urho3D::ParticleEffect::SetUpdateInvisible) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/ParticleEffect.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/ParticleEffect.h>
#include <Urho3D/Math/Rect.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_TextureFrame(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::TextureFrame>( "TextureFrame"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::TextureFrame()>();

// Members

    type["uv_"] = &Urho3D::TextureFrame::uv_;
    type["time_"] = &Urho3D::TextureFrame::time_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/ParticleEffect.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/ParticleEffect.h>
#include <Urho3D/Graphics/ParticleEffect.h>
#include <Urho3D/Math/Color.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ColorFrame(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ColorFrame>( "ColorFrame"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::ColorFrame(),
        Urho3D::ColorFrame(const  Color &),
        Urho3D::ColorFrame(const  Color &, float)>();

// Members

    /*Return interpolated value with another color-time pair at the time specified.*//*(const ColorFrame &next, float time) const*/
    type["Interpolate"] = static_cast<Color (Urho3D::ColorFrame::*)(const  ColorFrame &, float) const>(&Urho3D::ColorFrame::Interpolate) ;
    type["color_"] = &Urho3D::ColorFrame::color_;
    type["time_"] = &Urho3D::ColorFrame::time_;

}

