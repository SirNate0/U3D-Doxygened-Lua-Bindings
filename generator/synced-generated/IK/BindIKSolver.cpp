
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/IK/IKSolver.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/IK/IKSolver.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/IK/IKSolver.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_IKSolver(sol::state_view& lua)
{
    
using namespace Urho3D;
using Algorithm = IKSolver::Algorithm;


    casters[Urho3D::IKSolver::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::IKSolver::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::IKSolver>((Urho3D::IKSolver*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::IKSolver>( "IKSolver"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::IKSolver>(context);
        });

// Members

    /*Returns the active algorithm. MANUAL_BIND*//*() const*/
    type["GetAlgorithm"] = static_cast<Algorithm (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetAlgorithm) ;
    /*Selects the solver algorithm. Default is FABRIK. Note that this may not be the most efficient algorithm available. The specialized solvers will be a lot faster.MANUAL_BIND
 The currently supported solvers are listed below. FABRIK: This is a fairly new and highly efficient inverse kinematic solving algorithm. It requires the least iterations to reach its goal, it does not suffer from singularities (nearly no violent snapping about), and it always converges. 2  Bone: A specialized solver optimized for 2 bone problems (such as a human leg) 1  Bone: A specialized solver optimized for 1 bone problems (such as a look-at target, e.g. eyes or a head)*//*(Algorithm algorithm)*/
    type["SetAlgorithm"] = static_cast<void (Urho3D::IKSolver::*)(Algorithm)>(&Urho3D::IKSolver::SetAlgorithm) ;
#if 0 // INVALID: NoBind!
    /*Test if a certain feature is enabled (see  IKSolver::Feature). NO_BIND*//*(Feature feature) const*/
    type["GetFeature"] = static_cast<bool (Urho3D::IKSolver::*)(Feature) const>(&Urho3D::IKSolver::GetFeature) ;
#endif
        
#if 0 // INVALID: NoBind!
    /*Enable or disable a certain feature (see  IKSolver::Feature). NO_BIND*//*(Feature feature, bool enable)*/
    type["SetFeature"] = static_cast<void (Urho3D::IKSolver::*)(Feature, bool)>(&Urho3D::IKSolver::SetFeature) ;
#endif
        
    /*Returns the configured maximum number of iterations. BIND_AS_PROPERTY*//*() const*/
    type["GetMaximumIterations"] = static_cast<unsigned (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetMaximumIterations) ;
    /*Sets the maximum number of iterations the solver is allowed to perform before applying the result.BIND_AS_PROPERTY
 Depending on the algorithm, you may want higher or lower values. FABRIK looks decent after only 10 iterations, whereas Jacobian based methods often require more than a 100.
 The default value is 20.
 Most algorithms have a convergence criteria at which the solver will stop iterating, so most of the time the maximum number of iterations isn't even reached.
 iterations
 Number of iterations. Must be greater than 0. Higher values yield more accurate results, but at the cost of performance.*//*(unsigned iterations)*/
    type["SetMaximumIterations"] = static_cast<void (Urho3D::IKSolver::*)(unsigned)>(&Urho3D::IKSolver::SetMaximumIterations) ;
    /*Returns the configured tolerance. BIND_AS_PROPERTY*//*() const*/
    type["GetTolerance"] = static_cast<float (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetTolerance) ;
    /*Sets the distance at which the effector is "close enough" to the target node, at which point the algorithm will stop iterating.BIND_AS_PROPERTY
 tolerance
 The distance to set. Smaller values yield more accurate results, but at the cost of more iterations. Generally you'll want to specify a number that is about 1/100th to 1/1000th of the total size of the IK chain, e.g. if your human character has a leg that is 1 Urho3D unit long, a good starting tolerance would be 0.01.*//*(float tolerance)*/
    type["SetTolerance"] = static_cast<void (Urho3D::IKSolver::*)(float)>(&Urho3D::IKSolver::SetTolerance) ;
    /*Updates the solver's internal data structures, which is required whenever the tree is modified in any way (e.g. adding or removing nodes, adding or removing effectors, etc.).This gets called automatically for you in  Solve().*//*()*/
    type["RebuildChainTrees"] = static_cast<void (Urho3D::IKSolver::*)()>(&Urho3D::IKSolver::RebuildChainTrees) ;
    /*Unusual, but if you have a tree with translational motions such that the distances between nodes changes (perhaps a slider?), you can call this to recalculate the segment lengths after assigning new positions to the nodes.This function gets called by RebuildData() and by extension in  Solve().*//*()*/
    type["RecalculateSegmentLengths"] = static_cast<void (Urho3D::IKSolver::*)()>(&Urho3D::IKSolver::RecalculateSegmentLengths) ;
    /*Skinned models require joint rotations to be calculated so skinning works correctly. This is automatically enabled by default with the feature flag JOINT_ROTATIONS.*//*()*/
    type["CalculateJointRotations"] = static_cast<void (Urho3D::IKSolver::*)()>(&Urho3D::IKSolver::CalculateJointRotations) ;
    /*Invokes the solver. The solution is applied back to the scene graph automatically.By default this is called automatically for you if the feature flag AUTO_SOLVE is set. For more complex IK problems you can disable that flag and call  Solve() in response to E_SCENEDRAWABLEUPDATEFINISHED. This is right after the animations have been applied.*//*()*/
    type["Solve"] = static_cast<void (Urho3D::IKSolver::*)()>(&Urho3D::IKSolver::Solve) ;
    /*Copies the original pose into the scene graph. This will reset the pose to whatever state it had when the  IKSolver component was first created, or, if the original pose was updated since then (for example if Feature::UPDATE_ORIGINAL_POSE is set), will reset it to that state.*//*()*/
    type["ApplyOriginalPoseToScene"] = static_cast<void (Urho3D::IKSolver::*)()>(&Urho3D::IKSolver::ApplyOriginalPoseToScene) ;
    /*Copies the current scene graph data into the solvers original pose. You generally won't need to call this, because it gets called for you automatically if Feature::UPDATE_ORIGINAL_POSE is set.*//*()*/
    type["ApplySceneToOriginalPose"] = static_cast<void (Urho3D::IKSolver::*)()>(&Urho3D::IKSolver::ApplySceneToOriginalPose) ;
    /*Copies the solvers current active pose into the scene graph. You generally won't need to call this because it gets called for you automatically in  Solve(). This is used to apply the solution back to the scene graph.*//*()*/
    type["ApplyActivePoseToScene"] = static_cast<void (Urho3D::IKSolver::*)()>(&Urho3D::IKSolver::ApplyActivePoseToScene) ;
    /*Copies the current scene graph data into the solvers active pose. You generally won't need to call this because it gets called for you automatically if Feature::UPDATE_ACTIVE_POSE is set.*//*()*/
    type["ApplySceneToActivePose"] = static_cast<void (Urho3D::IKSolver::*)()>(&Urho3D::IKSolver::ApplySceneToActivePose) ;
    /*Copies the solvers original pose into the solvers active pose. This is used in  Solve() automatically if Feature::USE_ORIGINAL_POSE is set.*//*()*/
    type["ApplyOriginalPoseToActivePose"] = static_cast<void (Urho3D::IKSolver::*)()>(&Urho3D::IKSolver::ApplyOriginalPoseToActivePose) ;
    /*BIND_AS_ALIAS_get_JOINT_ROTATIONS.*//*() const*/
    type["GetJOINT_ROTATIONS"] = static_cast<bool (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetJOINT_ROTATIONS) ;
    /*BIND_AS_ALIAS_get_TARGET_ROTATIONS.*//*() const*/
    type["GetTARGET_ROTATIONS"] = static_cast<bool (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetTARGET_ROTATIONS) ;
    /*BIND_AS_ALIAS_get_UPDATE_ORIGINAL_POSE.*//*() const*/
    type["GetUPDATE_ORIGINAL_POSE"] = static_cast<bool (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetUPDATE_ORIGINAL_POSE) ;
    /*BIND_AS_ALIAS_get_UPDATE_ACTIVE_POSE(.*//*() const*/
    type["GetUPDATE_ACTIVE_POSE"] = static_cast<bool (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetUPDATE_ACTIVE_POSE) ;
    /*BIND_AS_ALIAS_get_USE_ORIGINAL_POSE.*//*() const*/
    type["GetUSE_ORIGINAL_POSE"] = static_cast<bool (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetUSE_ORIGINAL_POSE) ;
    /*BIND_AS_ALIAS_get_CONSTRAINTS.*//*() const*/
    type["GetCONSTRAINTS"] = static_cast<bool (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetCONSTRAINTS) ;
    /*BIND_AS_ALIAS_get_AUTO_SOLVE.*//*() const*/
    type["GetAUTO_SOLVE"] = static_cast<bool (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetAUTO_SOLVE) ;
    /*BIND_AS_ALIAS_set_JOINT_ROTATIONS.*//*(bool enable)*/
    type["SetJOINT_ROTATIONS"] = static_cast<void (Urho3D::IKSolver::*)(bool)>(&Urho3D::IKSolver::SetJOINT_ROTATIONS) ;
    /*BIND_AS_ALIAS_set_TARGET_ROTATIONS.*//*(bool enable)*/
    type["SetTARGET_ROTATIONS"] = static_cast<void (Urho3D::IKSolver::*)(bool)>(&Urho3D::IKSolver::SetTARGET_ROTATIONS) ;
    /*BIND_AS_ALIAS_set_UPDATE_ORIGINAL_POSE.*//*(bool enable)*/
    type["SetUPDATE_ORIGINAL_POSE"] = static_cast<void (Urho3D::IKSolver::*)(bool)>(&Urho3D::IKSolver::SetUPDATE_ORIGINAL_POSE) ;
    /*BIND_AS_ALIAS_set_UPDATE_ACTIVE_POSE.*//*(bool enable)*/
    type["SetUPDATE_ACTIVE_POSE"] = static_cast<void (Urho3D::IKSolver::*)(bool)>(&Urho3D::IKSolver::SetUPDATE_ACTIVE_POSE) ;
    /*BIND_AS_ALIAS_set_USE_ORIGINAL_POSE.*//*(bool enable)*/
    type["SetUSE_ORIGINAL_POSE"] = static_cast<void (Urho3D::IKSolver::*)(bool)>(&Urho3D::IKSolver::SetUSE_ORIGINAL_POSE) ;
    /*BIND_AS_ALIAS_set_CONSTRAINTS.*//*(bool enable)*/
    type["SetCONSTRAINTS"] = static_cast<void (Urho3D::IKSolver::*)(bool)>(&Urho3D::IKSolver::SetCONSTRAINTS) ;
    /*BIND_AS_ALIAS_set_AUTO_SOLVE.*//*(bool enable)*/
    type["SetAUTO_SOLVE"] = static_cast<void (Urho3D::IKSolver::*)(bool)>(&Urho3D::IKSolver::SetAUTO_SOLVE) ;
    type["DrawDebugGeometry"] = sol::overload(
        static_cast<void (Urho3D::IKSolver::*)(bool)>(&Urho3D::IKSolver::DrawDebugGeometry) ,
        static_cast<void (Urho3D::IKSolver::*)(DebugRenderer *, bool)>(&Urho3D::IKSolver::DrawDebugGeometry)  );
    type["auto_solve"] = sol::property(static_cast<bool (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetAUTO_SOLVE) 
        , static_cast<void (Urho3D::IKSolver::*)(bool)>(&Urho3D::IKSolver::SetAUTO_SOLVE) );
    type["constraints"] = sol::property(static_cast<bool (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetCONSTRAINTS) 
        , static_cast<void (Urho3D::IKSolver::*)(bool)>(&Urho3D::IKSolver::SetCONSTRAINTS) );
    type["joint_rotations"] = sol::property(static_cast<bool (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetJOINT_ROTATIONS) 
        , static_cast<void (Urho3D::IKSolver::*)(bool)>(&Urho3D::IKSolver::SetJOINT_ROTATIONS) );
    type["maximumIterations"] = sol::property(static_cast<unsigned (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetMaximumIterations) 
        , static_cast<void (Urho3D::IKSolver::*)(unsigned)>(&Urho3D::IKSolver::SetMaximumIterations) );
    type["target_rotations"] = sol::property(static_cast<bool (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetTARGET_ROTATIONS) 
        , static_cast<void (Urho3D::IKSolver::*)(bool)>(&Urho3D::IKSolver::SetTARGET_ROTATIONS) );
    type["tolerance"] = sol::property(static_cast<float (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetTolerance) 
        , static_cast<void (Urho3D::IKSolver::*)(float)>(&Urho3D::IKSolver::SetTolerance) );
    type["update_active_pose"] = sol::property(static_cast<bool (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetUPDATE_ACTIVE_POSE) 
        , static_cast<void (Urho3D::IKSolver::*)(bool)>(&Urho3D::IKSolver::SetUPDATE_ACTIVE_POSE) );
    type["update_original_pose"] = sol::property(static_cast<bool (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetUPDATE_ORIGINAL_POSE) 
        , static_cast<void (Urho3D::IKSolver::*)(bool)>(&Urho3D::IKSolver::SetUPDATE_ORIGINAL_POSE) );
    type["use_original_pose"] = sol::property(static_cast<bool (Urho3D::IKSolver::*)() const>(&Urho3D::IKSolver::GetUSE_ORIGINAL_POSE) 
        , static_cast<void (Urho3D::IKSolver::*)(bool)>(&Urho3D::IKSolver::SetUSE_ORIGINAL_POSE) );

}

