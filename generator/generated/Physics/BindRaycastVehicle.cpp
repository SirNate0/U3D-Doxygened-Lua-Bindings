
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics/RaycastVehicle.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics/RaycastVehicle.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Scene/Node.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_RaycastVehicle(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::RaycastVehicle::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::RaycastVehicle::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::RaycastVehicle>((Urho3D::RaycastVehicle*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::RaycastVehicle>( "RaycastVehicle"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::LogicComponent,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Urho3D::Context *context) { 
            return Urho3D::MakeShared<Urho3D::RaycastVehicle>(context);
        });

// Members

    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::RaycastVehicle::*)()>(&Urho3D::RaycastVehicle::OnSetEnabled) ;
    /*Perform post-load after deserialization. Acquire the components from the scene nodes.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::RaycastVehicle::*)()>(&Urho3D::RaycastVehicle::ApplyAttributes) ;
    /*Add a wheel. All parameters are relative to  RigidBody / node.*//*(Node *wheelNode, Vector3 wheelDirection, Vector3 wheelAxle, float restLength, float wheelRadius, bool frontWheel)*/
    type["AddWheel"] = static_cast<void (Urho3D::RaycastVehicle::*)(Node *, Vector3, Vector3, float, float, bool)>(&Urho3D::RaycastVehicle::AddWheel) ;
    /*Reset all suspension.*//*()*/
    type["ResetSuspension"] = static_cast<void (Urho3D::RaycastVehicle::*)()>(&Urho3D::RaycastVehicle::ResetSuspension) ;
    /*Update transform for particular wheel.*//*(int wheel, bool interpolated)*/
    type["UpdateWheelTransform"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, bool)>(&Urho3D::RaycastVehicle::UpdateWheelTransform) ;
    /*Set steering value of particular wheel.*//*(int wheel, float steeringValue)*/
    type["SetSteeringValue"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, float)>(&Urho3D::RaycastVehicle::SetSteeringValue) ;
    /*Set suspension stiffness for particular wheel.*//*(int wheel, float stiffness)*/
    type["SetWheelSuspensionStiffness"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, float)>(&Urho3D::RaycastVehicle::SetWheelSuspensionStiffness) ;
    /*Set wheel max suspension force. Good results are often obtained by a value that is about 3x to 4x the vehicle weight.*//*(int wheel, float force)*/
    type["SetWheelMaxSuspensionForce"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, float)>(&Urho3D::RaycastVehicle::SetWheelMaxSuspensionForce) ;
    /*Set wheel damping relaxation.*//*(int wheel, float damping)*/
    type["SetWheelDampingRelaxation"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, float)>(&Urho3D::RaycastVehicle::SetWheelDampingRelaxation) ;
    /*Set wheel damping compression.*//*(int wheel, float compression)*/
    type["SetWheelDampingCompression"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, float)>(&Urho3D::RaycastVehicle::SetWheelDampingCompression) ;
    /*Set wheel friction slip.*//*(int wheel, float slip)*/
    type["SetWheelFrictionSlip"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, float)>(&Urho3D::RaycastVehicle::SetWheelFrictionSlip) ;
    /*Set wheel roll influence.*//*(int wheel, float rollInfluence)*/
    type["SetWheelRollInfluence"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, float)>(&Urho3D::RaycastVehicle::SetWheelRollInfluence) ;
    /*Set engine force for the wheel.*//*(int wheel, float force)*/
    type["SetEngineForce"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, float)>(&Urho3D::RaycastVehicle::SetEngineForce) ;
    /*Set hand brake (wheel rotation blocking force).*//*(int wheel, float force)*/
    type["SetBrake"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, float)>(&Urho3D::RaycastVehicle::SetBrake) ;
    /*Set wheel radius.*//*(int wheel, float wheelRadius)*/
    type["SetWheelRadius"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, float)>(&Urho3D::RaycastVehicle::SetWheelRadius) ;
    /*Sets node initial positions.*//*()*/
    type["ResetWheels"] = static_cast<void (Urho3D::RaycastVehicle::*)()>(&Urho3D::RaycastVehicle::ResetWheels) ;
    /*Set sliding factor 0 <= x <= 1. The less the value, more sliding.*//*(int wheel, float factor)*/
    type["SetWheelSkidInfo"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, float)>(&Urho3D::RaycastVehicle::SetWheelSkidInfo) ;
    /*True if wheel touches ground (raycast hits something).*//*(int wheel) const*/
    type["WheelIsGrounded"] = static_cast<bool (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::WheelIsGrounded) ;
    /*Set maximum suspension travel value.*//*(int wheel, float maxSuspensionTravel)*/
    type["SetMaxSuspensionTravel"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, float)>(&Urho3D::RaycastVehicle::SetMaxSuspensionTravel) ;
    /*Set wheel direction vector.*//*(int wheel, Vector3 direction)*/
    type["SetWheelDirection"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, Vector3)>(&Urho3D::RaycastVehicle::SetWheelDirection) ;
    /*Set wheel axle vector.*//*(int wheel, Vector3 axle)*/
    type["SetWheelAxle"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, Vector3)>(&Urho3D::RaycastVehicle::SetWheelAxle) ;
    /*Set side speed which is considered sliding. BIND_AS_PROPERTY*//*(float speed)*/
    type["SetMaxSideSlipSpeed"] = static_cast<void (Urho3D::RaycastVehicle::*)(float)>(&Urho3D::RaycastVehicle::SetMaxSideSlipSpeed) ;
    /*Set cumulative skid info.*//*(int wheel, float skid)*/
    type["SetWheelSkidInfoCumulative"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, float)>(&Urho3D::RaycastVehicle::SetWheelSkidInfoCumulative) ;
    /*Set revolution per minute value for when wheel doesn't touch ground. If set to 0 (or not set), calculated from engine force (probably not what you want). BIND_AS_PROPERTY*//*(float rpm)*/
    type["SetInAirRPM"] = static_cast<void (Urho3D::RaycastVehicle::*)(float)>(&Urho3D::RaycastVehicle::SetInAirRPM) ;
    /*Init the vehicle component after creation.*//*()*/
    type["Init"] = static_cast<void (Urho3D::RaycastVehicle::*)()>(&Urho3D::RaycastVehicle::Init) ;
    /*Perform fixed step pre-update.*//*(float timeStep) override*/
    type["FixedUpdate"] = static_cast<void (Urho3D::RaycastVehicle::*)(float)>(&Urho3D::RaycastVehicle::FixedUpdate) ;
    /*Perform fixed step post-update.*//*(float timeStep) override*/
    type["FixedPostUpdate"] = static_cast<void (Urho3D::RaycastVehicle::*)(float)>(&Urho3D::RaycastVehicle::FixedPostUpdate) ;
    /*Perform variable step post-update.*//*(float timeStep) override*/
    type["PostUpdate"] = static_cast<void (Urho3D::RaycastVehicle::*)(float)>(&Urho3D::RaycastVehicle::PostUpdate) ;
    /*Get wheel position relative to  RigidBody.*//*(int wheel)*/
    type["GetWheelPosition"] = static_cast<Vector3 (Urho3D::RaycastVehicle::*)(int)>(&Urho3D::RaycastVehicle::GetWheelPosition) ;
    /*Get wheel rotation relative to  RigidBody.*//*(int wheel)*/
    type["GetWheelRotation"] = static_cast<Quaternion (Urho3D::RaycastVehicle::*)(int)>(&Urho3D::RaycastVehicle::GetWheelRotation) ;
    /*Get wheel connection point relative to  RigidBody.*//*(int wheel) const*/
    type["GetWheelConnectionPoint"] = static_cast<Vector3 (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetWheelConnectionPoint) ;
    /*Get number of attached wheels. BIND_AS_PROPERTY*//*() const*/
    type["GetNumWheels"] = static_cast<int (Urho3D::RaycastVehicle::*)() const>(&Urho3D::RaycastVehicle::GetNumWheels) ;
    /*Get node of the wheel.*//*(int wheel) const*/
    type["GetWheelNode"] = [](Urho3D::RaycastVehicle& self, int wheel, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetWheelNode(wheel));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Get steering value of particular wheel.*//*(int wheel) const*/
    type["GetSteeringValue"] = static_cast<float (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetSteeringValue) ;
    /*Get suspension stiffness for particular wheel.*//*(int wheel) const*/
    type["GetWheelSuspensionStiffness"] = static_cast<float (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetWheelSuspensionStiffness) ;
    /*Get wheel max suspension force.*//*(int wheel) const*/
    type["GetWheelMaxSuspensionForce"] = static_cast<float (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetWheelMaxSuspensionForce) ;
    /*Get wheel damping relaxation.*//*(int wheel) const*/
    type["GetWheelDampingRelaxation"] = static_cast<float (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetWheelDampingRelaxation) ;
    /*Get wheel damping compression.*//*(int wheel) const*/
    type["GetWheelDampingCompression"] = static_cast<float (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetWheelDampingCompression) ;
    /*Get wheel friction slip.*//*(int wheel) const*/
    type["GetWheelFrictionSlip"] = static_cast<float (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetWheelFrictionSlip) ;
    /*Get wheel roll influence.*//*(int wheel) const*/
    type["GetWheelRollInfluence"] = static_cast<float (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetWheelRollInfluence) ;
    /*Get engine force for the wheel.*//*(int wheel) const*/
    type["GetEngineForce"] = static_cast<float (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetEngineForce) ;
    /*Get hand brake value.*//*(int wheel) const*/
    type["GetBrake"] = static_cast<float (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetBrake) ;
    /*Get wheel radius.*//*(int wheel) const*/
    type["GetWheelRadius"] = static_cast<float (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetWheelRadius) ;
    /*Get wheel rest length.*//*(int wheel, float length)*/
    type["SetWheelRestLength"] = static_cast<void (Urho3D::RaycastVehicle::*)(int, float)>(&Urho3D::RaycastVehicle::SetWheelRestLength) ;
    /*Get wheel rest length.*//*(int wheel) const*/
    type["GetWheelRestLength"] = static_cast<float (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetWheelRestLength) ;
    /*Get maximum suspension travel value.*//*(int wheel)*/
    type["GetMaxSuspensionTravel"] = static_cast<float (Urho3D::RaycastVehicle::*)(int)>(&Urho3D::RaycastVehicle::GetMaxSuspensionTravel) ;
    /*Get wheel axle vector.*//*(int wheel) const*/
    type["GetWheelAxle"] = static_cast<Vector3 (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetWheelAxle) ;
    /*Get wheel slide speed.*//*(int wheel) const*/
    type["GetWheelSideSlipSpeed"] = static_cast<float (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetWheelSideSlipSpeed) ;
    /*Get side speed which is considered sliding. BIND_AS_PROPERTY*//*() const*/
    type["GetMaxSideSlipSpeed"] = static_cast<float (Urho3D::RaycastVehicle::*)() const>(&Urho3D::RaycastVehicle::GetMaxSideSlipSpeed) ;
    /*Sliding factor 0 <= x <= 1.*//*(int wheel) const*/
    type["GetWheelSkidInfo"] = static_cast<float (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetWheelSkidInfo) ;
    /*Get wheel direction vector.*//*(int wheel) const*/
    type["GetWheelDirection"] = static_cast<Vector3 (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetWheelDirection) ;
    /*Get cumulative skid info.*//*(int wheel) const*/
    type["GetWheelSkidInfoCumulative"] = static_cast<float (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetWheelSkidInfoCumulative) ;
    /*True if front wheel, otherwise false.*//*(int wheel) const*/
    type["IsFrontWheel"] = static_cast<bool (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::IsFrontWheel) ;
    /*Get wheel contact position.*//*(int wheel) const*/
    type["GetContactPosition"] = static_cast<Vector3 (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetContactPosition) ;
    /*Get contact normal.*//*(int wheel) const*/
    type["GetContactNormal"] = static_cast<Vector3 (Urho3D::RaycastVehicle::*)(int) const>(&Urho3D::RaycastVehicle::GetContactNormal) ;
    /*Get revolution per minute value for when wheel doesn't touch ground. BIND_AS_PROPERTY*//*() const*/
    type["GetInAirRPM"] = static_cast<float (Urho3D::RaycastVehicle::*)() const>(&Urho3D::RaycastVehicle::GetInAirRPM) ;
    /*Get the coordinate system. BIND_AS_PROPERTY*//*() const*/
    type["GetCoordinateSystem"] = static_cast<IntVector3 (Urho3D::RaycastVehicle::*)() const>(&Urho3D::RaycastVehicle::GetCoordinateSystem) ;
    /*Get wheel data attribute for serialization.*//*() const*/
    type["GetWheelDataAttr"] = static_cast<VariantVector (Urho3D::RaycastVehicle::*)() const>(&Urho3D::RaycastVehicle::GetWheelDataAttr) ;
    /*Set wheel data attribute during loading.*//*(const VariantVector &value)*/
    type["SetWheelDataAttr"] = static_cast<void (Urho3D::RaycastVehicle::*)(const  VariantVector &)>(&Urho3D::RaycastVehicle::SetWheelDataAttr) ;
    type["SetCoordinateSystem"] = sol::overload(
        static_cast<void (Urho3D::RaycastVehicle::*)(const  IntVector3 &)>(&Urho3D::RaycastVehicle::SetCoordinateSystem) ,
        [](Urho3D::RaycastVehicle& self){ self.SetCoordinateSystem(); } );
    type["coordinateSystem"] = sol::property(static_cast<IntVector3 (Urho3D::RaycastVehicle::*)() const>(&Urho3D::RaycastVehicle::GetCoordinateSystem) 
        , [](Urho3D::RaycastVehicle& self){ self.SetCoordinateSystem(); });
    type["inAirRPM"] = sol::property(static_cast<float (Urho3D::RaycastVehicle::*)() const>(&Urho3D::RaycastVehicle::GetInAirRPM) 
        , static_cast<void (Urho3D::RaycastVehicle::*)(float)>(&Urho3D::RaycastVehicle::SetInAirRPM) );
    type["maxSideSlipSpeed"] = sol::property(static_cast<float (Urho3D::RaycastVehicle::*)() const>(&Urho3D::RaycastVehicle::GetMaxSideSlipSpeed) 
        , static_cast<void (Urho3D::RaycastVehicle::*)(float)>(&Urho3D::RaycastVehicle::SetMaxSideSlipSpeed) );
    type["numWheels"] = sol::property(static_cast<int (Urho3D::RaycastVehicle::*)() const>(&Urho3D::RaycastVehicle::GetNumWheels) );

}

