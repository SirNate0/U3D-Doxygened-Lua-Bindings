
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Batch.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Batch.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/Batch.h>
#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Graphics/View.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_BatchGroup(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::BatchGroup>( "BatchGroup"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Batch>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::BatchGroup(),
        Urho3D::BatchGroup(const  Batch &)>();

// Members

    /*Add world transform(s) from a batch.*//*(const Batch &batch)*/
    type["AddTransforms"] = static_cast<void (Urho3D::BatchGroup::*)(const  Batch &)>(&Urho3D::BatchGroup::AddTransforms) ;
#if 0 // INVALID: NeedsWrap(unsigned &)
    /*Pre-set the instance data. Buffer must be big enough to hold all data.*//*(void *lockedData, unsigned stride, unsigned &freeIndex)*/
    type["SetInstancingData"] = static_cast<void (Urho3D::BatchGroup::*)(void *, unsigned, unsigned &)>(&Urho3D::BatchGroup::SetInstancingData) ;
#endif
        
    /*Prepare and draw.*//*(View *view, Camera *camera, bool allowDepthWrite) const*/
    type["Draw"] = static_cast<void (Urho3D::BatchGroup::*)(View *, Camera *, bool) const>(&Urho3D::BatchGroup::Draw) ;
    type["instances_"] = &Urho3D::BatchGroup::instances_;
    type["startIndex_"] = &Urho3D::BatchGroup::startIndex_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Batch.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Batch.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/Batch.h>
#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Graphics/View.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_BatchQueue(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::BatchQueue>( "BatchQueue"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    /*Clear for new frame by clearing all groups and batches.*//*(int maxSortedInstances)*/
    type["Clear"] = static_cast<void (Urho3D::BatchQueue::*)(int)>(&Urho3D::BatchQueue::Clear) ;
    /*Sort non-instanced draw calls back to front.*//*()*/
    type["SortBackToFront"] = static_cast<void (Urho3D::BatchQueue::*)()>(&Urho3D::BatchQueue::SortBackToFront) ;
    /*Sort instanced and non-instanced draw calls front to back.*//*()*/
    type["SortFrontToBack"] = static_cast<void (Urho3D::BatchQueue::*)()>(&Urho3D::BatchQueue::SortFrontToBack) ;
    /*Sort batches front to back while also maintaining state sorting.*//*(PODVector< Batch * > &batches)*/
    type["SortFrontToBack2Pass"] = static_cast<void (Urho3D::BatchQueue::*)(PODVector<  Batch * > &)>(&Urho3D::BatchQueue::SortFrontToBack2Pass) ;
#if 0 // INVALID: NeedsWrap(unsigned &)
    /*Pre-set instance data of all groups. The vertex buffer must be big enough to hold all data.*//*(void *lockedData, unsigned stride, unsigned &freeIndex)*/
    type["SetInstancingData"] = static_cast<void (Urho3D::BatchQueue::*)(void *, unsigned, unsigned &)>(&Urho3D::BatchQueue::SetInstancingData) ;
#endif
        
    /*Draw.*//*(View *view, Camera *camera, bool markToStencil, bool usingLightOptimization, bool allowDepthWrite) const*/
    type["Draw"] = static_cast<void (Urho3D::BatchQueue::*)(View *, Camera *, bool, bool, bool) const>(&Urho3D::BatchQueue::Draw) ;
    /*Return the combined amount of instances.*//*() const*/
    type["GetNumInstances"] = static_cast<unsigned (Urho3D::BatchQueue::*)() const>(&Urho3D::BatchQueue::GetNumInstances) ;
    /*Return whether the batch group is empty.*//*() const*/
    type["IsEmpty"] = static_cast<bool (Urho3D::BatchQueue::*)() const>(&Urho3D::BatchQueue::IsEmpty) ;
    type["batchGroups_"] = &Urho3D::BatchQueue::batchGroups_;
    type["shaderRemapping_"] = &Urho3D::BatchQueue::shaderRemapping_;
    type["materialRemapping_"] = &Urho3D::BatchQueue::materialRemapping_;
    type["geometryRemapping_"] = &Urho3D::BatchQueue::geometryRemapping_;
    type["batches_"] = &Urho3D::BatchQueue::batches_;
    type["sortedBatches_"] = &Urho3D::BatchQueue::sortedBatches_;
    type["sortedBatchGroups_"] = &Urho3D::BatchQueue::sortedBatchGroups_;
    type["maxSortedInstances_"] = &Urho3D::BatchQueue::maxSortedInstances_;
    type["hasExtraDefines_"] = &Urho3D::BatchQueue::hasExtraDefines_;
    type["vsExtraDefines_"] = &Urho3D::BatchQueue::vsExtraDefines_;
    type["psExtraDefines_"] = &Urho3D::BatchQueue::psExtraDefines_;
    type["vsExtraDefinesHash_"] = &Urho3D::BatchQueue::vsExtraDefinesHash_;
    type["psExtraDefinesHash_"] = &Urho3D::BatchQueue::psExtraDefinesHash_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Batch.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Batch.h>
#include <Urho3D/Graphics/Batch.h>
#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Math/Rect.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ShadowBatchQueue(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::ShadowBatchQueue>( "ShadowBatchQueue"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["shadowCamera_"] = &Urho3D::ShadowBatchQueue::shadowCamera_;
    type["shadowViewport_"] = &Urho3D::ShadowBatchQueue::shadowViewport_;
    type["shadowBatches_"] = &Urho3D::ShadowBatchQueue::shadowBatches_;
    type["nearSplit_"] = &Urho3D::ShadowBatchQueue::nearSplit_;
    type["farSplit_"] = &Urho3D::ShadowBatchQueue::farSplit_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Batch.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Batch.h>
#include <Urho3D/Math/Matrix3x4.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_InstanceData(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::InstanceData>( "InstanceData"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::InstanceData(),
        Urho3D::InstanceData(const  Matrix3x4 *, const void *, float)>();

// Members

    type["worldTransform_"] = &Urho3D::InstanceData::worldTransform_;
    type["instancingData_"] = &Urho3D::InstanceData::instancingData_;
    type["distance_"] = &Urho3D::InstanceData::distance_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Batch.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Batch.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Graphics/Batch.h>
#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/Geometry.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/ShaderVariation.h>
#include <Urho3D/Graphics/Technique.h>
#include <Urho3D/Graphics/View.h>
#include <Urho3D/Graphics/Zone.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Batch(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Batch>( "Batch"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Batch(),
        Urho3D::Batch(const  SourceBatch &)>();

// Members

    /*Calculate state sorting key, which consists of base pass flag, light, pass and geometry.*//*()*/
    type["CalculateSortKey"] = static_cast<void (Urho3D::Batch::*)()>(&Urho3D::Batch::CalculateSortKey) ;
    /*Prepare for rendering.*//*(View *view, Camera *camera, bool setModelTransform, bool allowDepthWrite) const*/
    type["Prepare"] = static_cast<void (Urho3D::Batch::*)(View *, Camera *, bool, bool) const>(&Urho3D::Batch::Prepare) ;
    /*Prepare and draw.*//*(View *view, Camera *camera, bool allowDepthWrite) const*/
    type["Draw"] = static_cast<void (Urho3D::Batch::*)(View *, Camera *, bool) const>(&Urho3D::Batch::Draw) ;
    type["sortKey_"] = &Urho3D::Batch::sortKey_;
    type["distance_"] = &Urho3D::Batch::distance_;
    type["renderOrder_"] = &Urho3D::Batch::renderOrder_;
    type["lightMask_"] = &Urho3D::Batch::lightMask_;
    type["isBase_"] = &Urho3D::Batch::isBase_;
    type["geometry_"] = &Urho3D::Batch::geometry_;
    type["material_"] = &Urho3D::Batch::material_;
    type["worldTransform_"] = &Urho3D::Batch::worldTransform_;
    type["numWorldTransforms_"] = &Urho3D::Batch::numWorldTransforms_;
    type["instancingData_"] = &Urho3D::Batch::instancingData_;
    type["zone_"] = &Urho3D::Batch::zone_;
    type["lightQueue_"] = &Urho3D::Batch::lightQueue_;
    type["pass_"] = &Urho3D::Batch::pass_;
    type["vertexShader_"] = &Urho3D::Batch::vertexShader_;
    type["pixelShader_"] = &Urho3D::Batch::pixelShader_;
    type["geometryType_"] = &Urho3D::Batch::geometryType_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Batch.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Batch.h>
#include <Urho3D/Graphics/Batch.h>
#include <Urho3D/Graphics/Geometry.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/Technique.h>
#include <Urho3D/Graphics/Zone.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_BatchGroupKey(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::BatchGroupKey>( "BatchGroupKey"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::BatchGroupKey(),
        Urho3D::BatchGroupKey(const  Batch &)>();

// Members

    /*Test for equality with another batch group key.*//*(const BatchGroupKey &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::BatchGroupKey::*)(const  BatchGroupKey &) const>(&Urho3D::BatchGroupKey::operator==) ;
    /*Test for inequality with another batch group key.*//*(const BatchGroupKey &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::BatchGroupKey::*)(const  BatchGroupKey &) const>(&Urho3D::BatchGroupKey::operator!=) ;
    /*Return hash value.*//*() const*/
    type["ToHash"] = static_cast<unsigned (Urho3D::BatchGroupKey::*)() const>(&Urho3D::BatchGroupKey::ToHash) ;
    type["zone_"] = &Urho3D::BatchGroupKey::zone_;
    type["lightQueue_"] = &Urho3D::BatchGroupKey::lightQueue_;
    type["pass_"] = &Urho3D::BatchGroupKey::pass_;
    type["material_"] = &Urho3D::BatchGroupKey::material_;
    type["geometry_"] = &Urho3D::BatchGroupKey::geometry_;
    type["renderOrder_"] = &Urho3D::BatchGroupKey::renderOrder_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Batch.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Batch.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/Batch.h>
#include <Urho3D/Graphics/Light.h>
#include <Urho3D/Graphics/Texture2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_LightBatchQueue(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::LightBatchQueue>( "LightBatchQueue"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["light_"] = &Urho3D::LightBatchQueue::light_;
    type["negative_"] = &Urho3D::LightBatchQueue::negative_;
    type["shadowMap_"] = &Urho3D::LightBatchQueue::shadowMap_;
    type["litBaseBatches_"] = &Urho3D::LightBatchQueue::litBaseBatches_;
    type["litBatches_"] = &Urho3D::LightBatchQueue::litBatches_;
    type["shadowSplits_"] = &Urho3D::LightBatchQueue::shadowSplits_;
    type["vertexLights_"] = &Urho3D::LightBatchQueue::vertexLights_;
    type["volumeBatches_"] = &Urho3D::LightBatchQueue::volumeBatches_;

}

