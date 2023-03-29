
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/SmoothedTransform.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/SmoothedTransform.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_SmoothedTransform(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::SmoothedTransform::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::SmoothedTransform::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::SmoothedTransform>((Urho3D::SmoothedTransform*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::SmoothedTransform>( "SmoothedTransform"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::SmoothedTransform>(context);
        });

// Members

    /*Update smoothing.*//*(float constant, float squaredSnapThreshold)*/
    type["Update"] = static_cast<void (Urho3D::SmoothedTransform::*)(float, float)>(&Urho3D::SmoothedTransform::Update) ;
    /*Set target position in parent space. BIND_AS_PROPERTY*//*(const Vector3 &position)*/
    type["SetTargetPosition"] = static_cast<void (Urho3D::SmoothedTransform::*)(const  Vector3 &)>(&Urho3D::SmoothedTransform::SetTargetPosition) ;
    /*Set target rotation in parent space. BIND_AS_PROPERTY*//*(const Quaternion &rotation)*/
    type["SetTargetRotation"] = static_cast<void (Urho3D::SmoothedTransform::*)(const  Quaternion &)>(&Urho3D::SmoothedTransform::SetTargetRotation) ;
    /*Set target position in world space. BIND_AS_PROPERTY*//*(const Vector3 &position)*/
    type["SetTargetWorldPosition"] = static_cast<void (Urho3D::SmoothedTransform::*)(const  Vector3 &)>(&Urho3D::SmoothedTransform::SetTargetWorldPosition) ;
    /*Set target rotation in world space. BIND_AS_PROPERTY*//*(const Quaternion &rotation)*/
    type["SetTargetWorldRotation"] = static_cast<void (Urho3D::SmoothedTransform::*)(const  Quaternion &)>(&Urho3D::SmoothedTransform::SetTargetWorldRotation) ;
    /*Return target position in parent space. BIND_AS_PROPERTY*//*() const*/
    type["GetTargetPosition"] = static_cast<const Vector3& (Urho3D::SmoothedTransform::*)() const>(&Urho3D::SmoothedTransform::GetTargetPosition) ;
    /*Return target rotation in parent space. BIND_AS_PROPERTY*//*() const*/
    type["GetTargetRotation"] = static_cast<const Quaternion& (Urho3D::SmoothedTransform::*)() const>(&Urho3D::SmoothedTransform::GetTargetRotation) ;
    /*Return target position in world space. BIND_AS_PROPERTY*//*() const*/
    type["GetTargetWorldPosition"] = static_cast<Vector3 (Urho3D::SmoothedTransform::*)() const>(&Urho3D::SmoothedTransform::GetTargetWorldPosition) ;
    /*Return target rotation in world space. BIND_AS_PROPERTY*//*() const*/
    type["GetTargetWorldRotation"] = static_cast<Quaternion (Urho3D::SmoothedTransform::*)() const>(&Urho3D::SmoothedTransform::GetTargetWorldRotation) ;
    /*Return whether smoothing is in progress. BIND_AS_PROPERTY*//*() const*/
    type["IsInProgress"] = static_cast<bool (Urho3D::SmoothedTransform::*)() const>(&Urho3D::SmoothedTransform::IsInProgress) ;
    type["inProgress"] = sol::property(static_cast<bool (Urho3D::SmoothedTransform::*)() const>(&Urho3D::SmoothedTransform::IsInProgress) );
    type["targetPosition"] = sol::property(static_cast<const Vector3& (Urho3D::SmoothedTransform::*)() const>(&Urho3D::SmoothedTransform::GetTargetPosition) 
        , static_cast<void (Urho3D::SmoothedTransform::*)(const  Vector3 &)>(&Urho3D::SmoothedTransform::SetTargetPosition) );
    type["targetRotation"] = sol::property(static_cast<const Quaternion& (Urho3D::SmoothedTransform::*)() const>(&Urho3D::SmoothedTransform::GetTargetRotation) 
        , static_cast<void (Urho3D::SmoothedTransform::*)(const  Quaternion &)>(&Urho3D::SmoothedTransform::SetTargetRotation) );
    type["targetWorldPosition"] = sol::property(static_cast<Vector3 (Urho3D::SmoothedTransform::*)() const>(&Urho3D::SmoothedTransform::GetTargetWorldPosition) 
        , static_cast<void (Urho3D::SmoothedTransform::*)(const  Vector3 &)>(&Urho3D::SmoothedTransform::SetTargetWorldPosition) );
    type["targetWorldRotation"] = sol::property(static_cast<Quaternion (Urho3D::SmoothedTransform::*)() const>(&Urho3D::SmoothedTransform::GetTargetWorldRotation) 
        , static_cast<void (Urho3D::SmoothedTransform::*)(const  Quaternion &)>(&Urho3D::SmoothedTransform::SetTargetWorldRotation) );

}

