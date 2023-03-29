
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Skeleton.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Skeleton.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/Skeleton.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Skeleton(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Skeleton>( "Skeleton"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Skeleton()>();

// Members

    /*Read from a stream. Return true if successful.*//*(Deserializer &source)*/
    type["Load"] = static_cast<bool (Urho3D::Skeleton::*)(Deserializer &)>(&Urho3D::Skeleton::Load) ;
    /*Write to a stream. Return true if successful.*//*(Serializer &dest) const*/
    type["Save"] = static_cast<bool (Urho3D::Skeleton::*)(Serializer &) const>(&Urho3D::Skeleton::Save) ;
    /*Define from another skeleton.*//*(const Skeleton &src)*/
    type["Define"] = static_cast<void (Urho3D::Skeleton::*)(const  Skeleton &)>(&Urho3D::Skeleton::Define) ;
    /*Set root bone's index.*//*(unsigned index)*/
    type["SetRootBoneIndex"] = static_cast<void (Urho3D::Skeleton::*)(unsigned)>(&Urho3D::Skeleton::SetRootBoneIndex) ;
    /*Clear bones.*//*()*/
    type["ClearBones"] = static_cast<void (Urho3D::Skeleton::*)()>(&Urho3D::Skeleton::ClearBones) ;
    /*Reset all animating bones to initial positions.*//*()*/
    type["Reset"] = static_cast<void (Urho3D::Skeleton::*)()>(&Urho3D::Skeleton::Reset) ;
    /*Return all bones.*//*() const*/
    type["GetBones"] = static_cast<const Vector<Bone>& (Urho3D::Skeleton::*)() const>(&Urho3D::Skeleton::GetBones) ;
    /*Return modifiable bones.*//*()*/
    type["GetModifiableBones"] = static_cast<Vector<Bone>& (Urho3D::Skeleton::*)()>(&Urho3D::Skeleton::GetModifiableBones) ;
    /*Return number of bones. BIND_AS_PROPERTY*//*() const*/
    type["GetNumBones"] = static_cast<unsigned (Urho3D::Skeleton::*)() const>(&Urho3D::Skeleton::GetNumBones) ;
    /*Return root bone. BIND_AS_PROPERTY*//*()*/
    type["GetRootBone"] = static_cast<Bone* (Urho3D::Skeleton::*)()>(&Urho3D::Skeleton::GetRootBone) ;
    /*Return parent of the given bone. Return null for root bones.*//*(const Bone *bone)*/
    type["GetBoneParent"] = static_cast<Bone* (Urho3D::Skeleton::*)(const  Bone *)>(&Urho3D::Skeleton::GetBoneParent) ;
    /*Reset all animating bones to initial positions without marking the nodes dirty. Requires the node dirtying to be performed later.*//*()*/
    type["ResetSilent"] = static_cast<void (Urho3D::Skeleton::*)()>(&Urho3D::Skeleton::ResetSilent) ;
    type["GetBoneIndex"] = sol::overload(
        static_cast<unsigned (Urho3D::Skeleton::*)(const  String &) const>(&Urho3D::Skeleton::GetBoneIndex) ,
        static_cast<unsigned (Urho3D::Skeleton::*)(const  StringHash &) const>(&Urho3D::Skeleton::GetBoneIndex) ,
        static_cast<unsigned (Urho3D::Skeleton::*)(const  Bone *) const>(&Urho3D::Skeleton::GetBoneIndex)  );
    type["GetBone"] = sol::overload(
        static_cast<Bone* (Urho3D::Skeleton::*)(unsigned)>(&Urho3D::Skeleton::GetBone) ,
        static_cast<Bone* (Urho3D::Skeleton::*)(const  String &)>(&Urho3D::Skeleton::GetBone) ,
        static_cast<Bone* (Urho3D::Skeleton::*)(const char *)>(&Urho3D::Skeleton::GetBone) ,
        static_cast<Bone* (Urho3D::Skeleton::*)(const  StringHash &)>(&Urho3D::Skeleton::GetBone)  );
    type["bone"] = sol::property(static_cast<Bone* (Urho3D::Skeleton::*)(unsigned)>(&Urho3D::Skeleton::GetBone) );
    type["numBones"] = sol::property(static_cast<unsigned (Urho3D::Skeleton::*)() const>(&Urho3D::Skeleton::GetNumBones) );
    type["rootBone"] = sol::property(static_cast<Bone* (Urho3D::Skeleton::*)()>(&Urho3D::Skeleton::GetRootBone) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Skeleton.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Skeleton.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Scene/Node.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Bone(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Bone>( "Bone"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Bone()>();

// Members

    type["name_"] = &Urho3D::Bone::name_;
    type["nameHash_"] = &Urho3D::Bone::nameHash_;
    type["parentIndex_"] = &Urho3D::Bone::parentIndex_;
    type["initialPosition_"] = &Urho3D::Bone::initialPosition_;
    type["initialRotation_"] = &Urho3D::Bone::initialRotation_;
    type["initialScale_"] = &Urho3D::Bone::initialScale_;
    type["offsetMatrix_"] = &Urho3D::Bone::offsetMatrix_;
    type["animated_"] = &Urho3D::Bone::animated_;
    type["collisionMask_"] = &Urho3D::Bone::collisionMask_;
    type["radius_"] = &Urho3D::Bone::radius_;
    type["boundingBox_"] = &Urho3D::Bone::boundingBox_;
    type["node_"] = &Urho3D::Bone::node_;

}

