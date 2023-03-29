
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/IK/IKEffector.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/IK/IKEffector.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Scene/Node.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_IKEffector(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::IKEffector::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::IKEffector::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::IKEffector>((Urho3D::IKEffector*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::IKEffector>( "IKEffector"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::IKEffector>(context);
        });

// Members

#if 0 // INVALID: NoBind!
    /*Test if a certain feature is enabled (see  IKEffector::Feature). NO_BIND*//*(Feature feature) const*/
    type["GetFeature"] = static_cast<bool (Urho3D::IKEffector::*)(Feature) const>(&Urho3D::IKEffector::GetFeature) ;
#endif
        
#if 0 // INVALID: NoBind!
    /*Enable or disable a certain feature (see  IKEffector::Feature). NO_BIND*//*(Feature feature, bool enable)*/
    type["SetFeature"] = static_cast<void (Urho3D::IKEffector::*)(Feature, bool)>(&Urho3D::IKEffector::SetFeature) ;
#endif
        
    /*Retrieves the node that is being used as a target. Can be NULL. BIND_AS_PROPERTY*//*() const*/
    type["GetTargetNode"] = [](Urho3D::IKEffector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTargetNode());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*The position of the target node provides the target position of the effector node.BIND_AS_PROPERTY
 The IK chain is solved such that the node to which this component is attached to will try to move to the position of the target node.  targetNode
 A scene node that acts as a target. Specifying NULL will erase the target and cause the solver to ignore this chain.
 You will get very strange behaviour if you specify a target node that is part the IK chain being solved for (circular dependency). Don't do that.*//*(Node *targetNode)*/
    type["SetTargetNode"] = static_cast<void (Urho3D::IKEffector::*)(Node *)>(&Urho3D::IKEffector::SetTargetNode) ;
    /*Retrieves the name of the target node. The node doesn't necessarily have to exist in the scene graph.BIND_AS_PROPERTY*//*() const*/
    type["GetTargetName"] = static_cast<const String& (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetTargetName) ;
    /*Sets the name of the target node. The node doesn't necessarily have to exist in the scene graph. When a node is created that matches this name, it is selected as the target.BIND_AS_PROPERTY  This clears the existing target node.*//*(const String &nodeName)*/
    type["SetTargetName"] = static_cast<void (Urho3D::IKEffector::*)(const  String &)>(&Urho3D::IKEffector::SetTargetName) ;
    /*Returns the current target position in world space. BIND_AS_PROPERTY*//*() const*/
    type["GetTargetPosition"] = static_cast<const Vector3& (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetTargetPosition) ;
    /*Sets the current target position. If the effector has a target node then this will have no effect. BIND_AS_PROPERTY*//*(const Vector3 &targetPosition)*/
    type["SetTargetPosition"] = static_cast<void (Urho3D::IKEffector::*)(const  Vector3 &)>(&Urho3D::IKEffector::SetTargetPosition) ;
    /*Gets the current target rotation in world space. BIND_AS_PROPERTY*//*() const*/
    type["GetTargetRotation"] = static_cast<const Quaternion& (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetTargetRotation) ;
    /*Sets the current target rotation. If the effector has a target node then this will have no effect. BIND_AS_PROPERTY*//*(const Quaternion &targetRotation)*/
    type["SetTargetRotation"] = static_cast<void (Urho3D::IKEffector::*)(const  Quaternion &)>(&Urho3D::IKEffector::SetTargetRotation) ;
    /*Required for the editor, get the target rotation in euler angles.*//*() const*/
    type["GetTargetRotationEuler"] = static_cast<Vector3 (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetTargetRotationEuler) ;
    /*Required for the editor, sets the target rotation in euler angles.*//*(const Vector3 &targetRotation)*/
    type["SetTargetRotationEuler"] = static_cast<void (Urho3D::IKEffector::*)(const  Vector3 &)>(&Urho3D::IKEffector::SetTargetRotationEuler) ;
    /*Returns the number of segments that will be affected by this effector. 0 Means all nodes between this effector and the next  IKSolver. BIND_AS_PROPERTY*//*() const*/
    type["GetChainLength"] = static_cast<unsigned (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetChainLength) ;
    /*Sets the number of segments that will be affected. 0 Means all nodes between this effector and the next  IKSolver. BIND_AS_PROPERTY*//*(unsigned chainLength)*/
    type["SetChainLength"] = static_cast<void (Urho3D::IKEffector::*)(unsigned)>(&Urho3D::IKEffector::SetChainLength) ;
    /*How strongly the effector affects the solution. BIND_AS_PROPERTY*//*() const*/
    type["GetWeight"] = static_cast<float (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetWeight) ;
    /*Sets how much influence the effector has on the solution.BIND_AS_PROPERTY
 You can use this value to smoothly transition between a solved pose and an initial pose For instance, lifting a foot off of the ground or letting go of an object.*//*(float weight)*/
    type["SetWeight"] = static_cast<void (Urho3D::IKEffector::*)(float)>(&Urho3D::IKEffector::SetWeight) ;
    /*How strongly the target node's rotation influences the solution. BIND_AS_PROPERTY*//*() const*/
    type["GetRotationWeight"] = static_cast<float (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetRotationWeight) ;
    /*Sets how much influence the target rotation should have on the solution. A value of 1 means to match the target rotation exactly, if possible. A value of 0 means to not match it at all.BIND_AS_PROPERTY  The solver must have target rotation enabled for this to have any effect. See IKSolver::Feature::TARGET_ROTATIONS.*//*(float weight)*/
    type["SetRotationWeight"] = static_cast<void (Urho3D::IKEffector::*)(float)>(&Urho3D::IKEffector::SetRotationWeight) ;
    /*Retrieves the rotation decay factor. See  SetRotationDecay() for info. BIND_AS_PROPERTY*//*() const*/
    type["GetRotationDecay"] = static_cast<float (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetRotationDecay) ;
    /*A factor with which to control the target rotation influence of the next segments down the chain.BIND_AS_PROPERTY
 For example, if this is set to 0.5 and the rotation weight is set to 1.0, then the first segment will match the target rotation exactly, the next segment will match it only 50%, the next segment 25%, the next 12.5%, etc. This parameter makes long chains look more natural when matching a target rotation.*//*(float decay)*/
    type["SetRotationDecay"] = static_cast<void (Urho3D::IKEffector::*)(float)>(&Urho3D::IKEffector::SetRotationDecay) ;
    /*Need these wrapper functions flags of GetFeature/SetFeature can be correctly exposed to the editor and to AngelScript and lua.*//*() const*/
    type["GetWEIGHT_NLERP"] = static_cast<bool (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetWEIGHT_NLERP) ;
    /**//*() const*/
    type["GetINHERIT_PARENT_ROTATION"] = static_cast<bool (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetINHERIT_PARENT_ROTATION) ;
    /**//*(bool enable)*/
    type["SetWEIGHT_NLERP"] = static_cast<void (Urho3D::IKEffector::*)(bool)>(&Urho3D::IKEffector::SetWEIGHT_NLERP) ;
    /**//*(bool enable)*/
    type["SetINHERIT_PARENT_ROTATION"] = static_cast<void (Urho3D::IKEffector::*)(bool)>(&Urho3D::IKEffector::SetINHERIT_PARENT_ROTATION) ;
    type["DrawDebugGeometry"] = sol::overload(
        static_cast<void (Urho3D::IKEffector::*)(bool)>(&Urho3D::IKEffector::DrawDebugGeometry) ,
        static_cast<void (Urho3D::IKEffector::*)(DebugRenderer *, bool)>(&Urho3D::IKEffector::DrawDebugGeometry)  );
    type["chainLength"] = sol::property(static_cast<unsigned (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetChainLength) 
        , static_cast<void (Urho3D::IKEffector::*)(unsigned)>(&Urho3D::IKEffector::SetChainLength) );
    type["rotationDecay"] = sol::property(static_cast<float (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetRotationDecay) 
        , static_cast<void (Urho3D::IKEffector::*)(float)>(&Urho3D::IKEffector::SetRotationDecay) );
    type["rotationWeight"] = sol::property(static_cast<float (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetRotationWeight) 
        , static_cast<void (Urho3D::IKEffector::*)(float)>(&Urho3D::IKEffector::SetRotationWeight) );
    type["targetName"] = sol::property(static_cast<const String& (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetTargetName) 
        , static_cast<void (Urho3D::IKEffector::*)(const  String &)>(&Urho3D::IKEffector::SetTargetName) );
    type["targetNode"] = sol::property([](Urho3D::IKEffector& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTargetNode());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::IKEffector::*)(Node *)>(&Urho3D::IKEffector::SetTargetNode) );
    type["targetPosition"] = sol::property(static_cast<const Vector3& (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetTargetPosition) 
        , static_cast<void (Urho3D::IKEffector::*)(const  Vector3 &)>(&Urho3D::IKEffector::SetTargetPosition) );
    type["targetRotation"] = sol::property(static_cast<const Quaternion& (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetTargetRotation) 
        , static_cast<void (Urho3D::IKEffector::*)(const  Quaternion &)>(&Urho3D::IKEffector::SetTargetRotation) );
    type["weight"] = sol::property(static_cast<float (Urho3D::IKEffector::*)() const>(&Urho3D::IKEffector::GetWeight) 
        , static_cast<void (Urho3D::IKEffector::*)(float)>(&Urho3D::IKEffector::SetWeight) );

}

