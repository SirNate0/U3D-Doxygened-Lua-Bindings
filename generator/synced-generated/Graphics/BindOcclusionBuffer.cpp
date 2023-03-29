
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/OcclusionBuffer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/OcclusionBuffer.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Graphics/OcclusionBuffer.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Matrix4.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_OcclusionBuffer(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::OcclusionBuffer::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::OcclusionBuffer::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::OcclusionBuffer>((Urho3D::OcclusionBuffer*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::OcclusionBuffer>( "OcclusionBuffer"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::OcclusionBuffer>(context);
        });

// Members

    /*Set occlusion buffer size and whether to reserve multiple buffers for threading optimization.*//*(int width, int height, bool threaded)*/
    type["SetSize"] = static_cast<bool (Urho3D::OcclusionBuffer::*)(int, int, bool)>(&Urho3D::OcclusionBuffer::SetSize) ;
    /*Set camera view to render from.*//*(Camera *camera)*/
    type["SetView"] = static_cast<void (Urho3D::OcclusionBuffer::*)(Camera *)>(&Urho3D::OcclusionBuffer::SetView) ;
    /*Set maximum triangles to render.*//*(unsigned triangles)*/
    type["SetMaxTriangles"] = static_cast<void (Urho3D::OcclusionBuffer::*)(unsigned)>(&Urho3D::OcclusionBuffer::SetMaxTriangles) ;
    /*Set culling mode.*//*(CullMode mode)*/
    type["SetCullMode"] = static_cast<void (Urho3D::OcclusionBuffer::*)(CullMode)>(&Urho3D::OcclusionBuffer::SetCullMode) ;
    /*Reset number of triangles.*//*()*/
    type["Reset"] = static_cast<void (Urho3D::OcclusionBuffer::*)()>(&Urho3D::OcclusionBuffer::Reset) ;
    /*Clear the buffer.*//*()*/
    type["Clear"] = static_cast<void (Urho3D::OcclusionBuffer::*)()>(&Urho3D::OcclusionBuffer::Clear) ;
    /*Draw submitted batches. Uses worker threads if enabled during  SetSize().*//*()*/
    type["DrawTriangles"] = static_cast<void (Urho3D::OcclusionBuffer::*)()>(&Urho3D::OcclusionBuffer::DrawTriangles) ;
    /*Build reduced size mip levels.*//*()*/
    type["BuildDepthHierarchy"] = static_cast<void (Urho3D::OcclusionBuffer::*)()>(&Urho3D::OcclusionBuffer::BuildDepthHierarchy) ;
    /*Reset last used timer.*//*()*/
    type["ResetUseTimer"] = static_cast<void (Urho3D::OcclusionBuffer::*)()>(&Urho3D::OcclusionBuffer::ResetUseTimer) ;
    /*Return highest level depth values.*//*() const*/
    type["GetBuffer"] = static_cast<int* (Urho3D::OcclusionBuffer::*)() const>(&Urho3D::OcclusionBuffer::GetBuffer) ;
    /*Return view transform matrix.*//*() const*/
    type["GetView"] = static_cast<const Matrix3x4& (Urho3D::OcclusionBuffer::*)() const>(&Urho3D::OcclusionBuffer::GetView) ;
    /*Return projection matrix.*//*() const*/
    type["GetProjection"] = static_cast<const Matrix4& (Urho3D::OcclusionBuffer::*)() const>(&Urho3D::OcclusionBuffer::GetProjection) ;
    /*Return buffer width.*//*() const*/
    type["GetWidth"] = static_cast<int (Urho3D::OcclusionBuffer::*)() const>(&Urho3D::OcclusionBuffer::GetWidth) ;
    /*Return buffer height.*//*() const*/
    type["GetHeight"] = static_cast<int (Urho3D::OcclusionBuffer::*)() const>(&Urho3D::OcclusionBuffer::GetHeight) ;
    /*Return number of rendered triangles.*//*() const*/
    type["GetNumTriangles"] = static_cast<unsigned (Urho3D::OcclusionBuffer::*)() const>(&Urho3D::OcclusionBuffer::GetNumTriangles) ;
    /*Return maximum number of triangles.*//*() const*/
    type["GetMaxTriangles"] = static_cast<unsigned (Urho3D::OcclusionBuffer::*)() const>(&Urho3D::OcclusionBuffer::GetMaxTriangles) ;
    /*Return culling mode.*//*() const*/
    type["GetCullMode"] = static_cast<CullMode (Urho3D::OcclusionBuffer::*)() const>(&Urho3D::OcclusionBuffer::GetCullMode) ;
    /*Return whether is using threads to speed up rendering.*//*() const*/
    type["IsThreaded"] = static_cast<bool (Urho3D::OcclusionBuffer::*)() const>(&Urho3D::OcclusionBuffer::IsThreaded) ;
    /*Test a bounding box for visibility. For best performance, build depth hierarchy first.*//*(const BoundingBox &worldSpaceBox) const*/
    type["IsVisible"] = static_cast<bool (Urho3D::OcclusionBuffer::*)(const  BoundingBox &) const>(&Urho3D::OcclusionBuffer::IsVisible) ;
    /*Return time since last use in milliseconds.*//*()*/
    type["GetUseTimer"] = static_cast<unsigned (Urho3D::OcclusionBuffer::*)()>(&Urho3D::OcclusionBuffer::GetUseTimer) ;
    /*Draw a batch. Called internally.*//*(const OcclusionBatch &batch, unsigned threadIndex)*/
    type["DrawBatch"] = static_cast<void (Urho3D::OcclusionBuffer::*)(const  OcclusionBatch &, unsigned)>(&Urho3D::OcclusionBuffer::DrawBatch) ;
    type["AddTriangles"] = sol::overload(
        static_cast<bool (Urho3D::OcclusionBuffer::*)(const  Matrix3x4 &, const void *, unsigned, unsigned, unsigned)>(&Urho3D::OcclusionBuffer::AddTriangles) ,
        static_cast<bool (Urho3D::OcclusionBuffer::*)(const  Matrix3x4 &, const void *, unsigned, const void *, unsigned, unsigned, unsigned)>(&Urho3D::OcclusionBuffer::AddTriangles)  );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/OcclusionBuffer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/OcclusionBuffer.h>
#include <Urho3D/Container/ArrayPtr.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_OcclusionBufferData(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::OcclusionBufferData>( "OcclusionBufferData"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["dataWithSafety_"] = &Urho3D::OcclusionBufferData::dataWithSafety_;
    type["data_"] = &Urho3D::OcclusionBufferData::data_;
    type["used_"] = &Urho3D::OcclusionBufferData::used_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/OcclusionBuffer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/OcclusionBuffer.h>
#include <Urho3D/Math/Matrix3x4.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_OcclusionBatch(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::OcclusionBatch>( "OcclusionBatch"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["model_"] = &Urho3D::OcclusionBatch::model_;
    type["vertexData_"] = &Urho3D::OcclusionBatch::vertexData_;
    type["vertexSize_"] = &Urho3D::OcclusionBatch::vertexSize_;
    type["indexData_"] = &Urho3D::OcclusionBatch::indexData_;
    type["indexSize_"] = &Urho3D::OcclusionBatch::indexSize_;
    type["drawStart_"] = &Urho3D::OcclusionBatch::drawStart_;
    type["drawCount_"] = &Urho3D::OcclusionBatch::drawCount_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/OcclusionBuffer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/OcclusionBuffer.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_DepthValue(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::DepthValue>( "DepthValue"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["min_"] = &Urho3D::DepthValue::min_;
    type["max_"] = &Urho3D::DepthValue::max_;

}

