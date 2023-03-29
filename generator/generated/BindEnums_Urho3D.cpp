
// Generated File

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>
#include <Urho3D/Core/Attribute.h>
#include <Urho3D/Core/Spline.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Animation.h>
#include <Urho3D/Graphics/AnimationState.h>
#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Graphics/Light.h>
#include <Urho3D/Graphics/OctreeQuery.h>
#include <Urho3D/Graphics/ParticleEffect.h>
#include <Urho3D/Graphics/RenderPath.h>
#include <Urho3D/Graphics/Renderer.h>
#include <Urho3D/Graphics/RibbonTrail.h>
#include <Urho3D/Graphics/Skeleton.h>
#include <Urho3D/Graphics/Technique.h>
#include <Urho3D/IO/File.h>
#include <Urho3D/Input/Input.h>
#include <Urho3D/Input/InputConstants.h>
#include <Urho3D/Math/Frustum.h>
#include <Urho3D/Math/MathDefs.h>
#include <Urho3D/Navigation/CrowdAgent.h>
#include <Urho3D/Navigation/NavigationMesh.h>
#include <Urho3D/Network/Connection.h>
#include <Urho3D/Network/HttpRequest.h>
#include <Urho3D/Physics/CollisionShape.h>
#include <Urho3D/Physics/Constraint.h>
#include <Urho3D/Physics/RigidBody.h>
#include <Urho3D/Physics2D/RigidBody2D.h>
#include <Urho3D/Resource/Image.h>
#include <Urho3D/Resource/JSONValue.h>
#include <Urho3D/Resource/PListFile.h>
#include <Urho3D/Resource/Resource.h>
#include <Urho3D/Resource/ResourceCache.h>
#include <Urho3D/Scene/AnimationDefs.h>
#include <Urho3D/Scene/Component.h>
#include <Urho3D/Scene/LogicComponent.h>
#include <Urho3D/Scene/Node.h>
#include <Urho3D/Scene/Scene.h>
#include <Urho3D/Scene/SmoothedTransform.h>
#include <Urho3D/Scene/ValueAnimation.h>
#include <Urho3D/UI/Cursor.h>
#include <Urho3D/UI/Font.h>
#include <Urho3D/UI/ListView.h>
#include <Urho3D/UI/Text.h>
#include <Urho3D/UI/UI.h>
#include <Urho3D/UI/UIElement.h>
#include <Urho3D/UI/Window.h>
#include <Urho3D/Urho2D/AnimatedSprite2D.h>
#include <Urho3D/Urho2D/ParticleEffect2D.h>
#include <Urho3D/Urho2D/TileMapDefs2D.h>

void bindEnums_Urho3D(sol::state_view& lua)
{
    
using namespace Urho3D;
    

        
lua.new_enum<Urho3D::AttributeMode>( "AttributeMode", { 
    { "AM_EDIT", Urho3D::AttributeMode::AM_EDIT },
    { "AM_FILE", Urho3D::AttributeMode::AM_FILE },
    { "AM_NET", Urho3D::AttributeMode::AM_NET },
    { "AM_DEFAULT", Urho3D::AttributeMode::AM_DEFAULT },
    { "AM_LATESTDATA", Urho3D::AttributeMode::AM_LATESTDATA },
    { "AM_NOEDIT", Urho3D::AttributeMode::AM_NOEDIT },
    { "AM_NODEID", Urho3D::AttributeMode::AM_NODEID },
    { "AM_COMPONENTID", Urho3D::AttributeMode::AM_COMPONENTID },
    { "AM_NODEIDVECTOR", Urho3D::AttributeMode::AM_NODEIDVECTOR },
    { "AM_FILEREADONLY", Urho3D::AttributeMode::AM_FILEREADONLY } }
);
    lua["AM_EDIT"] = Urho3D::AttributeMode::AM_EDIT;
    lua["AM_FILE"] = Urho3D::AttributeMode::AM_FILE;
    lua["AM_NET"] = Urho3D::AttributeMode::AM_NET;
    lua["AM_DEFAULT"] = Urho3D::AttributeMode::AM_DEFAULT;
    lua["AM_LATESTDATA"] = Urho3D::AttributeMode::AM_LATESTDATA;
    lua["AM_NOEDIT"] = Urho3D::AttributeMode::AM_NOEDIT;
    lua["AM_NODEID"] = Urho3D::AttributeMode::AM_NODEID;
    lua["AM_COMPONENTID"] = Urho3D::AttributeMode::AM_COMPONENTID;
    lua["AM_NODEIDVECTOR"] = Urho3D::AttributeMode::AM_NODEIDVECTOR;
    lua["AM_FILEREADONLY"] = Urho3D::AttributeMode::AM_FILEREADONLY;
        
lua.new_enum<Urho3D::InterpolationMode>( "InterpolationMode", { 
    { "BEZIER_CURVE", Urho3D::InterpolationMode::BEZIER_CURVE },
    { "CATMULL_ROM_CURVE", Urho3D::InterpolationMode::CATMULL_ROM_CURVE },
    { "LINEAR_CURVE", Urho3D::InterpolationMode::LINEAR_CURVE },
    { "CATMULL_ROM_FULL_CURVE", Urho3D::InterpolationMode::CATMULL_ROM_FULL_CURVE } }
);
    lua["BEZIER_CURVE"] = Urho3D::InterpolationMode::BEZIER_CURVE;
    lua["CATMULL_ROM_CURVE"] = Urho3D::InterpolationMode::CATMULL_ROM_CURVE;
    lua["LINEAR_CURVE"] = Urho3D::InterpolationMode::LINEAR_CURVE;
    lua["CATMULL_ROM_FULL_CURVE"] = Urho3D::InterpolationMode::CATMULL_ROM_FULL_CURVE;
        
lua.new_enum<Urho3D::VariantType>( "VariantType", { 
    { "VAR_NONE", Urho3D::VariantType::VAR_NONE },
    { "VAR_INT", Urho3D::VariantType::VAR_INT },
    { "VAR_BOOL", Urho3D::VariantType::VAR_BOOL },
    { "VAR_FLOAT", Urho3D::VariantType::VAR_FLOAT },
    { "VAR_VECTOR2", Urho3D::VariantType::VAR_VECTOR2 },
    { "VAR_VECTOR3", Urho3D::VariantType::VAR_VECTOR3 },
    { "VAR_VECTOR4", Urho3D::VariantType::VAR_VECTOR4 },
    { "VAR_QUATERNION", Urho3D::VariantType::VAR_QUATERNION },
    { "VAR_COLOR", Urho3D::VariantType::VAR_COLOR },
    { "VAR_STRING", Urho3D::VariantType::VAR_STRING },
    { "VAR_BUFFER", Urho3D::VariantType::VAR_BUFFER },
    { "VAR_VOIDPTR", Urho3D::VariantType::VAR_VOIDPTR },
    { "VAR_RESOURCEREF", Urho3D::VariantType::VAR_RESOURCEREF },
    { "VAR_RESOURCEREFLIST", Urho3D::VariantType::VAR_RESOURCEREFLIST },
    { "VAR_VARIANTVECTOR", Urho3D::VariantType::VAR_VARIANTVECTOR },
    { "VAR_VARIANTMAP", Urho3D::VariantType::VAR_VARIANTMAP },
    { "VAR_INTRECT", Urho3D::VariantType::VAR_INTRECT },
    { "VAR_INTVECTOR2", Urho3D::VariantType::VAR_INTVECTOR2 },
    { "VAR_PTR", Urho3D::VariantType::VAR_PTR },
    { "VAR_MATRIX3", Urho3D::VariantType::VAR_MATRIX3 },
    { "VAR_MATRIX3X4", Urho3D::VariantType::VAR_MATRIX3X4 },
    { "VAR_MATRIX4", Urho3D::VariantType::VAR_MATRIX4 },
    { "VAR_DOUBLE", Urho3D::VariantType::VAR_DOUBLE },
    { "VAR_STRINGVECTOR", Urho3D::VariantType::VAR_STRINGVECTOR },
    { "VAR_RECT", Urho3D::VariantType::VAR_RECT },
    { "VAR_INTVECTOR3", Urho3D::VariantType::VAR_INTVECTOR3 },
    { "VAR_INT64", Urho3D::VariantType::VAR_INT64 },
    { "VAR_CUSTOM_HEAP", Urho3D::VariantType::VAR_CUSTOM_HEAP },
    { "VAR_CUSTOM_STACK", Urho3D::VariantType::VAR_CUSTOM_STACK },
    { "MAX_VAR_TYPES", Urho3D::VariantType::MAX_VAR_TYPES } }
);
    lua["VAR_NONE"] = Urho3D::VariantType::VAR_NONE;
    lua["VAR_INT"] = Urho3D::VariantType::VAR_INT;
    lua["VAR_BOOL"] = Urho3D::VariantType::VAR_BOOL;
    lua["VAR_FLOAT"] = Urho3D::VariantType::VAR_FLOAT;
    lua["VAR_VECTOR2"] = Urho3D::VariantType::VAR_VECTOR2;
    lua["VAR_VECTOR3"] = Urho3D::VariantType::VAR_VECTOR3;
    lua["VAR_VECTOR4"] = Urho3D::VariantType::VAR_VECTOR4;
    lua["VAR_QUATERNION"] = Urho3D::VariantType::VAR_QUATERNION;
    lua["VAR_COLOR"] = Urho3D::VariantType::VAR_COLOR;
    lua["VAR_STRING"] = Urho3D::VariantType::VAR_STRING;
    lua["VAR_BUFFER"] = Urho3D::VariantType::VAR_BUFFER;
    lua["VAR_VOIDPTR"] = Urho3D::VariantType::VAR_VOIDPTR;
    lua["VAR_RESOURCEREF"] = Urho3D::VariantType::VAR_RESOURCEREF;
    lua["VAR_RESOURCEREFLIST"] = Urho3D::VariantType::VAR_RESOURCEREFLIST;
    lua["VAR_VARIANTVECTOR"] = Urho3D::VariantType::VAR_VARIANTVECTOR;
    lua["VAR_VARIANTMAP"] = Urho3D::VariantType::VAR_VARIANTMAP;
    lua["VAR_INTRECT"] = Urho3D::VariantType::VAR_INTRECT;
    lua["VAR_INTVECTOR2"] = Urho3D::VariantType::VAR_INTVECTOR2;
    lua["VAR_PTR"] = Urho3D::VariantType::VAR_PTR;
    lua["VAR_MATRIX3"] = Urho3D::VariantType::VAR_MATRIX3;
    lua["VAR_MATRIX3X4"] = Urho3D::VariantType::VAR_MATRIX3X4;
    lua["VAR_MATRIX4"] = Urho3D::VariantType::VAR_MATRIX4;
    lua["VAR_DOUBLE"] = Urho3D::VariantType::VAR_DOUBLE;
    lua["VAR_STRINGVECTOR"] = Urho3D::VariantType::VAR_STRINGVECTOR;
    lua["VAR_RECT"] = Urho3D::VariantType::VAR_RECT;
    lua["VAR_INTVECTOR3"] = Urho3D::VariantType::VAR_INTVECTOR3;
    lua["VAR_INT64"] = Urho3D::VariantType::VAR_INT64;
    lua["VAR_CUSTOM_HEAP"] = Urho3D::VariantType::VAR_CUSTOM_HEAP;
    lua["VAR_CUSTOM_STACK"] = Urho3D::VariantType::VAR_CUSTOM_STACK;
    lua["MAX_VAR_TYPES"] = Urho3D::VariantType::MAX_VAR_TYPES;
#if 0 // Forbidden file: Database/Database.h 
lua.new_enum<Urho3D::DBAPI>( "DBAPI", { 
    { "DBAPI_SQLITE", Urho3D::DBAPI::DBAPI_SQLITE },
    { "DBAPI_ODBC", Urho3D::DBAPI::DBAPI_ODBC } }
);
    lua["DBAPI_SQLITE"] = Urho3D::DBAPI::DBAPI_SQLITE;
    lua["DBAPI_ODBC"] = Urho3D::DBAPI::DBAPI_ODBC;
#endif // FORBIDDEN
        
lua.new_enum<Urho3D::AnimationChannel>( "AnimationChannel", { 
    { "CHANNEL_NONE", Urho3D::AnimationChannel::CHANNEL_NONE },
    { "CHANNEL_POSITION", Urho3D::AnimationChannel::CHANNEL_POSITION },
    { "CHANNEL_ROTATION", Urho3D::AnimationChannel::CHANNEL_ROTATION },
    { "CHANNEL_SCALE", Urho3D::AnimationChannel::CHANNEL_SCALE } }
);
    lua["CHANNEL_NONE"] = Urho3D::AnimationChannel::CHANNEL_NONE;
    lua["CHANNEL_POSITION"] = Urho3D::AnimationChannel::CHANNEL_POSITION;
    lua["CHANNEL_ROTATION"] = Urho3D::AnimationChannel::CHANNEL_ROTATION;
    lua["CHANNEL_SCALE"] = Urho3D::AnimationChannel::CHANNEL_SCALE;
        
lua.new_enum<Urho3D::AnimationBlendMode>( "AnimationBlendMode", { 
    { "ABM_LERP", Urho3D::AnimationBlendMode::ABM_LERP },
    { "ABM_ADDITIVE", Urho3D::AnimationBlendMode::ABM_ADDITIVE } }
);
    lua["ABM_LERP"] = Urho3D::AnimationBlendMode::ABM_LERP;
    lua["ABM_ADDITIVE"] = Urho3D::AnimationBlendMode::ABM_ADDITIVE;
        
lua.new_enum<Urho3D::ViewOverride>( "ViewOverride", { 
    { "VO_NONE", Urho3D::ViewOverride::VO_NONE },
    { "VO_LOW_MATERIAL_QUALITY", Urho3D::ViewOverride::VO_LOW_MATERIAL_QUALITY },
    { "VO_DISABLE_SHADOWS", Urho3D::ViewOverride::VO_DISABLE_SHADOWS },
    { "VO_DISABLE_OCCLUSION", Urho3D::ViewOverride::VO_DISABLE_OCCLUSION } }
);
    lua["VO_NONE"] = Urho3D::ViewOverride::VO_NONE;
    lua["VO_LOW_MATERIAL_QUALITY"] = Urho3D::ViewOverride::VO_LOW_MATERIAL_QUALITY;
    lua["VO_DISABLE_SHADOWS"] = Urho3D::ViewOverride::VO_DISABLE_SHADOWS;
    lua["VO_DISABLE_OCCLUSION"] = Urho3D::ViewOverride::VO_DISABLE_OCCLUSION;
        
lua.new_enum<Urho3D::UpdateGeometryType>( "UpdateGeometryType", { 
    { "UPDATE_NONE", Urho3D::UpdateGeometryType::UPDATE_NONE },
    { "UPDATE_MAIN_THREAD", Urho3D::UpdateGeometryType::UPDATE_MAIN_THREAD },
    { "UPDATE_WORKER_THREAD", Urho3D::UpdateGeometryType::UPDATE_WORKER_THREAD } }
);
    lua["UPDATE_NONE"] = Urho3D::UpdateGeometryType::UPDATE_NONE;
    lua["UPDATE_MAIN_THREAD"] = Urho3D::UpdateGeometryType::UPDATE_MAIN_THREAD;
    lua["UPDATE_WORKER_THREAD"] = Urho3D::UpdateGeometryType::UPDATE_WORKER_THREAD;
        
lua.new_enum<Urho3D::PrimitiveType>( "PrimitiveType", { 
    { "TRIANGLE_LIST", Urho3D::PrimitiveType::TRIANGLE_LIST },
    { "LINE_LIST", Urho3D::PrimitiveType::LINE_LIST },
    { "POINT_LIST", Urho3D::PrimitiveType::POINT_LIST },
    { "TRIANGLE_STRIP", Urho3D::PrimitiveType::TRIANGLE_STRIP },
    { "LINE_STRIP", Urho3D::PrimitiveType::LINE_STRIP },
    { "TRIANGLE_FAN", Urho3D::PrimitiveType::TRIANGLE_FAN } }
);
    lua["TRIANGLE_LIST"] = Urho3D::PrimitiveType::TRIANGLE_LIST;
    lua["LINE_LIST"] = Urho3D::PrimitiveType::LINE_LIST;
    lua["POINT_LIST"] = Urho3D::PrimitiveType::POINT_LIST;
    lua["TRIANGLE_STRIP"] = Urho3D::PrimitiveType::TRIANGLE_STRIP;
    lua["LINE_STRIP"] = Urho3D::PrimitiveType::LINE_STRIP;
    lua["TRIANGLE_FAN"] = Urho3D::PrimitiveType::TRIANGLE_FAN;
        
lua.new_enum<Urho3D::GeometryType>( "GeometryType", { 
    { "GEOM_STATIC", Urho3D::GeometryType::GEOM_STATIC },
    { "GEOM_SKINNED", Urho3D::GeometryType::GEOM_SKINNED },
    { "GEOM_INSTANCED", Urho3D::GeometryType::GEOM_INSTANCED },
    { "GEOM_BILLBOARD", Urho3D::GeometryType::GEOM_BILLBOARD },
    { "GEOM_DIRBILLBOARD", Urho3D::GeometryType::GEOM_DIRBILLBOARD },
    { "GEOM_TRAIL_FACE_CAMERA", Urho3D::GeometryType::GEOM_TRAIL_FACE_CAMERA },
    { "GEOM_TRAIL_BONE", Urho3D::GeometryType::GEOM_TRAIL_BONE },
    { "MAX_GEOMETRYTYPES", Urho3D::GeometryType::MAX_GEOMETRYTYPES },
    { "GEOM_STATIC_NOINSTANCING", Urho3D::GeometryType::GEOM_STATIC_NOINSTANCING } }
);
    lua["GEOM_STATIC"] = Urho3D::GeometryType::GEOM_STATIC;
    lua["GEOM_SKINNED"] = Urho3D::GeometryType::GEOM_SKINNED;
    lua["GEOM_INSTANCED"] = Urho3D::GeometryType::GEOM_INSTANCED;
    lua["GEOM_BILLBOARD"] = Urho3D::GeometryType::GEOM_BILLBOARD;
    lua["GEOM_DIRBILLBOARD"] = Urho3D::GeometryType::GEOM_DIRBILLBOARD;
    lua["GEOM_TRAIL_FACE_CAMERA"] = Urho3D::GeometryType::GEOM_TRAIL_FACE_CAMERA;
    lua["GEOM_TRAIL_BONE"] = Urho3D::GeometryType::GEOM_TRAIL_BONE;
    lua["MAX_GEOMETRYTYPES"] = Urho3D::GeometryType::MAX_GEOMETRYTYPES;
    lua["GEOM_STATIC_NOINSTANCING"] = Urho3D::GeometryType::GEOM_STATIC_NOINSTANCING;
        
lua.new_enum<Urho3D::BlendMode>( "BlendMode", { 
    { "BLEND_REPLACE", Urho3D::BlendMode::BLEND_REPLACE },
    { "BLEND_ADD", Urho3D::BlendMode::BLEND_ADD },
    { "BLEND_MULTIPLY", Urho3D::BlendMode::BLEND_MULTIPLY },
    { "BLEND_ALPHA", Urho3D::BlendMode::BLEND_ALPHA },
    { "BLEND_ADDALPHA", Urho3D::BlendMode::BLEND_ADDALPHA },
    { "BLEND_PREMULALPHA", Urho3D::BlendMode::BLEND_PREMULALPHA },
    { "BLEND_INVDESTALPHA", Urho3D::BlendMode::BLEND_INVDESTALPHA },
    { "BLEND_SUBTRACT", Urho3D::BlendMode::BLEND_SUBTRACT },
    { "BLEND_SUBTRACTALPHA", Urho3D::BlendMode::BLEND_SUBTRACTALPHA },
    { "MAX_BLENDMODES", Urho3D::BlendMode::MAX_BLENDMODES } }
);
    lua["BLEND_REPLACE"] = Urho3D::BlendMode::BLEND_REPLACE;
    lua["BLEND_ADD"] = Urho3D::BlendMode::BLEND_ADD;
    lua["BLEND_MULTIPLY"] = Urho3D::BlendMode::BLEND_MULTIPLY;
    lua["BLEND_ALPHA"] = Urho3D::BlendMode::BLEND_ALPHA;
    lua["BLEND_ADDALPHA"] = Urho3D::BlendMode::BLEND_ADDALPHA;
    lua["BLEND_PREMULALPHA"] = Urho3D::BlendMode::BLEND_PREMULALPHA;
    lua["BLEND_INVDESTALPHA"] = Urho3D::BlendMode::BLEND_INVDESTALPHA;
    lua["BLEND_SUBTRACT"] = Urho3D::BlendMode::BLEND_SUBTRACT;
    lua["BLEND_SUBTRACTALPHA"] = Urho3D::BlendMode::BLEND_SUBTRACTALPHA;
    lua["MAX_BLENDMODES"] = Urho3D::BlendMode::MAX_BLENDMODES;
        
lua.new_enum<Urho3D::CompareMode>( "CompareMode", { 
    { "CMP_ALWAYS", Urho3D::CompareMode::CMP_ALWAYS },
    { "CMP_EQUAL", Urho3D::CompareMode::CMP_EQUAL },
    { "CMP_NOTEQUAL", Urho3D::CompareMode::CMP_NOTEQUAL },
    { "CMP_LESS", Urho3D::CompareMode::CMP_LESS },
    { "CMP_LESSEQUAL", Urho3D::CompareMode::CMP_LESSEQUAL },
    { "CMP_GREATER", Urho3D::CompareMode::CMP_GREATER },
    { "CMP_GREATEREQUAL", Urho3D::CompareMode::CMP_GREATEREQUAL },
    { "MAX_COMPAREMODES", Urho3D::CompareMode::MAX_COMPAREMODES } }
);
    lua["CMP_ALWAYS"] = Urho3D::CompareMode::CMP_ALWAYS;
    lua["CMP_EQUAL"] = Urho3D::CompareMode::CMP_EQUAL;
    lua["CMP_NOTEQUAL"] = Urho3D::CompareMode::CMP_NOTEQUAL;
    lua["CMP_LESS"] = Urho3D::CompareMode::CMP_LESS;
    lua["CMP_LESSEQUAL"] = Urho3D::CompareMode::CMP_LESSEQUAL;
    lua["CMP_GREATER"] = Urho3D::CompareMode::CMP_GREATER;
    lua["CMP_GREATEREQUAL"] = Urho3D::CompareMode::CMP_GREATEREQUAL;
    lua["MAX_COMPAREMODES"] = Urho3D::CompareMode::MAX_COMPAREMODES;
        
lua.new_enum<Urho3D::CullMode>( "CullMode", { 
    { "CULL_NONE", Urho3D::CullMode::CULL_NONE },
    { "CULL_CCW", Urho3D::CullMode::CULL_CCW },
    { "CULL_CW", Urho3D::CullMode::CULL_CW },
    { "MAX_CULLMODES", Urho3D::CullMode::MAX_CULLMODES } }
);
    lua["CULL_NONE"] = Urho3D::CullMode::CULL_NONE;
    lua["CULL_CCW"] = Urho3D::CullMode::CULL_CCW;
    lua["CULL_CW"] = Urho3D::CullMode::CULL_CW;
    lua["MAX_CULLMODES"] = Urho3D::CullMode::MAX_CULLMODES;
        
lua.new_enum<Urho3D::FillMode>( "FillMode", { 
    { "FILL_SOLID", Urho3D::FillMode::FILL_SOLID },
    { "FILL_WIREFRAME", Urho3D::FillMode::FILL_WIREFRAME },
    { "FILL_POINT", Urho3D::FillMode::FILL_POINT } }
);
    lua["FILL_SOLID"] = Urho3D::FillMode::FILL_SOLID;
    lua["FILL_WIREFRAME"] = Urho3D::FillMode::FILL_WIREFRAME;
    lua["FILL_POINT"] = Urho3D::FillMode::FILL_POINT;
        
lua.new_enum<Urho3D::StencilOp>( "StencilOp", { 
    { "OP_KEEP", Urho3D::StencilOp::OP_KEEP },
    { "OP_ZERO", Urho3D::StencilOp::OP_ZERO },
    { "OP_REF", Urho3D::StencilOp::OP_REF },
    { "OP_INCR", Urho3D::StencilOp::OP_INCR },
    { "OP_DECR", Urho3D::StencilOp::OP_DECR } }
);
    lua["OP_KEEP"] = Urho3D::StencilOp::OP_KEEP;
    lua["OP_ZERO"] = Urho3D::StencilOp::OP_ZERO;
    lua["OP_REF"] = Urho3D::StencilOp::OP_REF;
    lua["OP_INCR"] = Urho3D::StencilOp::OP_INCR;
    lua["OP_DECR"] = Urho3D::StencilOp::OP_DECR;
        
lua.new_enum<Urho3D::LockState>( "LockState", { 
    { "LOCK_NONE", Urho3D::LockState::LOCK_NONE },
    { "LOCK_HARDWARE", Urho3D::LockState::LOCK_HARDWARE },
    { "LOCK_SHADOW", Urho3D::LockState::LOCK_SHADOW },
    { "LOCK_SCRATCH", Urho3D::LockState::LOCK_SCRATCH } }
);
    lua["LOCK_NONE"] = Urho3D::LockState::LOCK_NONE;
    lua["LOCK_HARDWARE"] = Urho3D::LockState::LOCK_HARDWARE;
    lua["LOCK_SHADOW"] = Urho3D::LockState::LOCK_SHADOW;
    lua["LOCK_SCRATCH"] = Urho3D::LockState::LOCK_SCRATCH;
        
lua.new_enum<Urho3D::LegacyVertexElement>( "LegacyVertexElement", { 
    { "ELEMENT_POSITION", Urho3D::LegacyVertexElement::ELEMENT_POSITION },
    { "ELEMENT_NORMAL", Urho3D::LegacyVertexElement::ELEMENT_NORMAL },
    { "ELEMENT_COLOR", Urho3D::LegacyVertexElement::ELEMENT_COLOR },
    { "ELEMENT_TEXCOORD1", Urho3D::LegacyVertexElement::ELEMENT_TEXCOORD1 },
    { "ELEMENT_TEXCOORD2", Urho3D::LegacyVertexElement::ELEMENT_TEXCOORD2 },
    { "ELEMENT_CUBETEXCOORD1", Urho3D::LegacyVertexElement::ELEMENT_CUBETEXCOORD1 },
    { "ELEMENT_CUBETEXCOORD2", Urho3D::LegacyVertexElement::ELEMENT_CUBETEXCOORD2 },
    { "ELEMENT_TANGENT", Urho3D::LegacyVertexElement::ELEMENT_TANGENT },
    { "ELEMENT_BLENDWEIGHTS", Urho3D::LegacyVertexElement::ELEMENT_BLENDWEIGHTS },
    { "ELEMENT_BLENDINDICES", Urho3D::LegacyVertexElement::ELEMENT_BLENDINDICES },
    { "ELEMENT_INSTANCEMATRIX1", Urho3D::LegacyVertexElement::ELEMENT_INSTANCEMATRIX1 },
    { "ELEMENT_INSTANCEMATRIX2", Urho3D::LegacyVertexElement::ELEMENT_INSTANCEMATRIX2 },
    { "ELEMENT_INSTANCEMATRIX3", Urho3D::LegacyVertexElement::ELEMENT_INSTANCEMATRIX3 },
    { "ELEMENT_OBJECTINDEX", Urho3D::LegacyVertexElement::ELEMENT_OBJECTINDEX },
    { "MAX_LEGACY_VERTEX_ELEMENTS", Urho3D::LegacyVertexElement::MAX_LEGACY_VERTEX_ELEMENTS } }
);
    lua["ELEMENT_POSITION"] = Urho3D::LegacyVertexElement::ELEMENT_POSITION;
    lua["ELEMENT_NORMAL"] = Urho3D::LegacyVertexElement::ELEMENT_NORMAL;
    lua["ELEMENT_COLOR"] = Urho3D::LegacyVertexElement::ELEMENT_COLOR;
    lua["ELEMENT_TEXCOORD1"] = Urho3D::LegacyVertexElement::ELEMENT_TEXCOORD1;
    lua["ELEMENT_TEXCOORD2"] = Urho3D::LegacyVertexElement::ELEMENT_TEXCOORD2;
    lua["ELEMENT_CUBETEXCOORD1"] = Urho3D::LegacyVertexElement::ELEMENT_CUBETEXCOORD1;
    lua["ELEMENT_CUBETEXCOORD2"] = Urho3D::LegacyVertexElement::ELEMENT_CUBETEXCOORD2;
    lua["ELEMENT_TANGENT"] = Urho3D::LegacyVertexElement::ELEMENT_TANGENT;
    lua["ELEMENT_BLENDWEIGHTS"] = Urho3D::LegacyVertexElement::ELEMENT_BLENDWEIGHTS;
    lua["ELEMENT_BLENDINDICES"] = Urho3D::LegacyVertexElement::ELEMENT_BLENDINDICES;
    lua["ELEMENT_INSTANCEMATRIX1"] = Urho3D::LegacyVertexElement::ELEMENT_INSTANCEMATRIX1;
    lua["ELEMENT_INSTANCEMATRIX2"] = Urho3D::LegacyVertexElement::ELEMENT_INSTANCEMATRIX2;
    lua["ELEMENT_INSTANCEMATRIX3"] = Urho3D::LegacyVertexElement::ELEMENT_INSTANCEMATRIX3;
    lua["ELEMENT_OBJECTINDEX"] = Urho3D::LegacyVertexElement::ELEMENT_OBJECTINDEX;
    lua["MAX_LEGACY_VERTEX_ELEMENTS"] = Urho3D::LegacyVertexElement::MAX_LEGACY_VERTEX_ELEMENTS;
        
lua.new_enum<Urho3D::VertexElementType>( "VertexElementType", { 
    { "TYPE_INT", Urho3D::VertexElementType::TYPE_INT },
    { "TYPE_FLOAT", Urho3D::VertexElementType::TYPE_FLOAT },
    { "TYPE_VECTOR2", Urho3D::VertexElementType::TYPE_VECTOR2 },
    { "TYPE_VECTOR3", Urho3D::VertexElementType::TYPE_VECTOR3 },
    { "TYPE_VECTOR4", Urho3D::VertexElementType::TYPE_VECTOR4 },
    { "TYPE_UBYTE4", Urho3D::VertexElementType::TYPE_UBYTE4 },
    { "TYPE_UBYTE4_NORM", Urho3D::VertexElementType::TYPE_UBYTE4_NORM },
    { "MAX_VERTEX_ELEMENT_TYPES", Urho3D::VertexElementType::MAX_VERTEX_ELEMENT_TYPES } }
);
    lua["TYPE_INT"] = Urho3D::VertexElementType::TYPE_INT;
    lua["TYPE_FLOAT"] = Urho3D::VertexElementType::TYPE_FLOAT;
    lua["TYPE_VECTOR2"] = Urho3D::VertexElementType::TYPE_VECTOR2;
    lua["TYPE_VECTOR3"] = Urho3D::VertexElementType::TYPE_VECTOR3;
    lua["TYPE_VECTOR4"] = Urho3D::VertexElementType::TYPE_VECTOR4;
    lua["TYPE_UBYTE4"] = Urho3D::VertexElementType::TYPE_UBYTE4;
    lua["TYPE_UBYTE4_NORM"] = Urho3D::VertexElementType::TYPE_UBYTE4_NORM;
    lua["MAX_VERTEX_ELEMENT_TYPES"] = Urho3D::VertexElementType::MAX_VERTEX_ELEMENT_TYPES;
        
lua.new_enum<Urho3D::VertexElementSemantic>( "VertexElementSemantic", { 
    { "SEM_POSITION", Urho3D::VertexElementSemantic::SEM_POSITION },
    { "SEM_NORMAL", Urho3D::VertexElementSemantic::SEM_NORMAL },
    { "SEM_BINORMAL", Urho3D::VertexElementSemantic::SEM_BINORMAL },
    { "SEM_TANGENT", Urho3D::VertexElementSemantic::SEM_TANGENT },
    { "SEM_TEXCOORD", Urho3D::VertexElementSemantic::SEM_TEXCOORD },
    { "SEM_COLOR", Urho3D::VertexElementSemantic::SEM_COLOR },
    { "SEM_BLENDWEIGHTS", Urho3D::VertexElementSemantic::SEM_BLENDWEIGHTS },
    { "SEM_BLENDINDICES", Urho3D::VertexElementSemantic::SEM_BLENDINDICES },
    { "SEM_OBJECTINDEX", Urho3D::VertexElementSemantic::SEM_OBJECTINDEX },
    { "MAX_VERTEX_ELEMENT_SEMANTICS", Urho3D::VertexElementSemantic::MAX_VERTEX_ELEMENT_SEMANTICS } }
);
    lua["SEM_POSITION"] = Urho3D::VertexElementSemantic::SEM_POSITION;
    lua["SEM_NORMAL"] = Urho3D::VertexElementSemantic::SEM_NORMAL;
    lua["SEM_BINORMAL"] = Urho3D::VertexElementSemantic::SEM_BINORMAL;
    lua["SEM_TANGENT"] = Urho3D::VertexElementSemantic::SEM_TANGENT;
    lua["SEM_TEXCOORD"] = Urho3D::VertexElementSemantic::SEM_TEXCOORD;
    lua["SEM_COLOR"] = Urho3D::VertexElementSemantic::SEM_COLOR;
    lua["SEM_BLENDWEIGHTS"] = Urho3D::VertexElementSemantic::SEM_BLENDWEIGHTS;
    lua["SEM_BLENDINDICES"] = Urho3D::VertexElementSemantic::SEM_BLENDINDICES;
    lua["SEM_OBJECTINDEX"] = Urho3D::VertexElementSemantic::SEM_OBJECTINDEX;
    lua["MAX_VERTEX_ELEMENT_SEMANTICS"] = Urho3D::VertexElementSemantic::MAX_VERTEX_ELEMENT_SEMANTICS;
        
lua.new_enum<Urho3D::TextureFilterMode>( "TextureFilterMode", { 
    { "FILTER_NEAREST", Urho3D::TextureFilterMode::FILTER_NEAREST },
    { "FILTER_BILINEAR", Urho3D::TextureFilterMode::FILTER_BILINEAR },
    { "FILTER_TRILINEAR", Urho3D::TextureFilterMode::FILTER_TRILINEAR },
    { "FILTER_ANISOTROPIC", Urho3D::TextureFilterMode::FILTER_ANISOTROPIC },
    { "FILTER_NEAREST_ANISOTROPIC", Urho3D::TextureFilterMode::FILTER_NEAREST_ANISOTROPIC },
    { "FILTER_DEFAULT", Urho3D::TextureFilterMode::FILTER_DEFAULT },
    { "MAX_FILTERMODES", Urho3D::TextureFilterMode::MAX_FILTERMODES } }
);
    lua["FILTER_NEAREST"] = Urho3D::TextureFilterMode::FILTER_NEAREST;
    lua["FILTER_BILINEAR"] = Urho3D::TextureFilterMode::FILTER_BILINEAR;
    lua["FILTER_TRILINEAR"] = Urho3D::TextureFilterMode::FILTER_TRILINEAR;
    lua["FILTER_ANISOTROPIC"] = Urho3D::TextureFilterMode::FILTER_ANISOTROPIC;
    lua["FILTER_NEAREST_ANISOTROPIC"] = Urho3D::TextureFilterMode::FILTER_NEAREST_ANISOTROPIC;
    lua["FILTER_DEFAULT"] = Urho3D::TextureFilterMode::FILTER_DEFAULT;
    lua["MAX_FILTERMODES"] = Urho3D::TextureFilterMode::MAX_FILTERMODES;
        
lua.new_enum<Urho3D::TextureAddressMode>( "TextureAddressMode", { 
    { "ADDRESS_WRAP", Urho3D::TextureAddressMode::ADDRESS_WRAP },
    { "ADDRESS_MIRROR", Urho3D::TextureAddressMode::ADDRESS_MIRROR },
    { "ADDRESS_CLAMP", Urho3D::TextureAddressMode::ADDRESS_CLAMP },
    { "ADDRESS_BORDER", Urho3D::TextureAddressMode::ADDRESS_BORDER },
    { "MAX_ADDRESSMODES", Urho3D::TextureAddressMode::MAX_ADDRESSMODES } }
);
    lua["ADDRESS_WRAP"] = Urho3D::TextureAddressMode::ADDRESS_WRAP;
    lua["ADDRESS_MIRROR"] = Urho3D::TextureAddressMode::ADDRESS_MIRROR;
    lua["ADDRESS_CLAMP"] = Urho3D::TextureAddressMode::ADDRESS_CLAMP;
    lua["ADDRESS_BORDER"] = Urho3D::TextureAddressMode::ADDRESS_BORDER;
    lua["MAX_ADDRESSMODES"] = Urho3D::TextureAddressMode::MAX_ADDRESSMODES;
        
lua.new_enum<Urho3D::TextureCoordinate>( "TextureCoordinate", { 
    { "COORD_U", Urho3D::TextureCoordinate::COORD_U },
    { "COORD_V", Urho3D::TextureCoordinate::COORD_V },
    { "COORD_W", Urho3D::TextureCoordinate::COORD_W },
    { "MAX_COORDS", Urho3D::TextureCoordinate::MAX_COORDS } }
);
    lua["COORD_U"] = Urho3D::TextureCoordinate::COORD_U;
    lua["COORD_V"] = Urho3D::TextureCoordinate::COORD_V;
    lua["COORD_W"] = Urho3D::TextureCoordinate::COORD_W;
    lua["MAX_COORDS"] = Urho3D::TextureCoordinate::MAX_COORDS;
        
lua.new_enum<Urho3D::TextureUsage>( "TextureUsage", { 
    { "TEXTURE_STATIC", Urho3D::TextureUsage::TEXTURE_STATIC },
    { "TEXTURE_DYNAMIC", Urho3D::TextureUsage::TEXTURE_DYNAMIC },
    { "TEXTURE_RENDERTARGET", Urho3D::TextureUsage::TEXTURE_RENDERTARGET },
    { "TEXTURE_DEPTHSTENCIL", Urho3D::TextureUsage::TEXTURE_DEPTHSTENCIL } }
);
    lua["TEXTURE_STATIC"] = Urho3D::TextureUsage::TEXTURE_STATIC;
    lua["TEXTURE_DYNAMIC"] = Urho3D::TextureUsage::TEXTURE_DYNAMIC;
    lua["TEXTURE_RENDERTARGET"] = Urho3D::TextureUsage::TEXTURE_RENDERTARGET;
    lua["TEXTURE_DEPTHSTENCIL"] = Urho3D::TextureUsage::TEXTURE_DEPTHSTENCIL;
        
lua.new_enum<Urho3D::CubeMapFace>( "CubeMapFace", { 
    { "FACE_POSITIVE_X", Urho3D::CubeMapFace::FACE_POSITIVE_X },
    { "FACE_NEGATIVE_X", Urho3D::CubeMapFace::FACE_NEGATIVE_X },
    { "FACE_POSITIVE_Y", Urho3D::CubeMapFace::FACE_POSITIVE_Y },
    { "FACE_NEGATIVE_Y", Urho3D::CubeMapFace::FACE_NEGATIVE_Y },
    { "FACE_POSITIVE_Z", Urho3D::CubeMapFace::FACE_POSITIVE_Z },
    { "FACE_NEGATIVE_Z", Urho3D::CubeMapFace::FACE_NEGATIVE_Z },
    { "MAX_CUBEMAP_FACES", Urho3D::CubeMapFace::MAX_CUBEMAP_FACES } }
);
    lua["FACE_POSITIVE_X"] = Urho3D::CubeMapFace::FACE_POSITIVE_X;
    lua["FACE_NEGATIVE_X"] = Urho3D::CubeMapFace::FACE_NEGATIVE_X;
    lua["FACE_POSITIVE_Y"] = Urho3D::CubeMapFace::FACE_POSITIVE_Y;
    lua["FACE_NEGATIVE_Y"] = Urho3D::CubeMapFace::FACE_NEGATIVE_Y;
    lua["FACE_POSITIVE_Z"] = Urho3D::CubeMapFace::FACE_POSITIVE_Z;
    lua["FACE_NEGATIVE_Z"] = Urho3D::CubeMapFace::FACE_NEGATIVE_Z;
    lua["MAX_CUBEMAP_FACES"] = Urho3D::CubeMapFace::MAX_CUBEMAP_FACES;
        
lua.new_enum<Urho3D::CubeMapLayout>( "CubeMapLayout", { 
    { "CML_HORIZONTAL", Urho3D::CubeMapLayout::CML_HORIZONTAL },
    { "CML_HORIZONTALNVIDIA", Urho3D::CubeMapLayout::CML_HORIZONTALNVIDIA },
    { "CML_HORIZONTALCROSS", Urho3D::CubeMapLayout::CML_HORIZONTALCROSS },
    { "CML_VERTICALCROSS", Urho3D::CubeMapLayout::CML_VERTICALCROSS },
    { "CML_BLENDER", Urho3D::CubeMapLayout::CML_BLENDER } }
);
    lua["CML_HORIZONTAL"] = Urho3D::CubeMapLayout::CML_HORIZONTAL;
    lua["CML_HORIZONTALNVIDIA"] = Urho3D::CubeMapLayout::CML_HORIZONTALNVIDIA;
    lua["CML_HORIZONTALCROSS"] = Urho3D::CubeMapLayout::CML_HORIZONTALCROSS;
    lua["CML_VERTICALCROSS"] = Urho3D::CubeMapLayout::CML_VERTICALCROSS;
    lua["CML_BLENDER"] = Urho3D::CubeMapLayout::CML_BLENDER;
        
lua.new_enum<Urho3D::RenderSurfaceUpdateMode>( "RenderSurfaceUpdateMode", { 
    { "SURFACE_MANUALUPDATE", Urho3D::RenderSurfaceUpdateMode::SURFACE_MANUALUPDATE },
    { "SURFACE_UPDATEVISIBLE", Urho3D::RenderSurfaceUpdateMode::SURFACE_UPDATEVISIBLE },
    { "SURFACE_UPDATEALWAYS", Urho3D::RenderSurfaceUpdateMode::SURFACE_UPDATEALWAYS } }
);
    lua["SURFACE_MANUALUPDATE"] = Urho3D::RenderSurfaceUpdateMode::SURFACE_MANUALUPDATE;
    lua["SURFACE_UPDATEVISIBLE"] = Urho3D::RenderSurfaceUpdateMode::SURFACE_UPDATEVISIBLE;
    lua["SURFACE_UPDATEALWAYS"] = Urho3D::RenderSurfaceUpdateMode::SURFACE_UPDATEALWAYS;
        
lua.new_enum<Urho3D::ShaderType>( "ShaderType", { 
    { "VS", Urho3D::ShaderType::VS },
    { "PS", Urho3D::ShaderType::PS } }
);
    lua["VS"] = Urho3D::ShaderType::VS;
    lua["PS"] = Urho3D::ShaderType::PS;
        
lua.new_enum<Urho3D::ShaderParameterGroup>( "ShaderParameterGroup", { 
    { "SP_FRAME", Urho3D::ShaderParameterGroup::SP_FRAME },
    { "SP_CAMERA", Urho3D::ShaderParameterGroup::SP_CAMERA },
    { "SP_ZONE", Urho3D::ShaderParameterGroup::SP_ZONE },
    { "SP_LIGHT", Urho3D::ShaderParameterGroup::SP_LIGHT },
    { "SP_MATERIAL", Urho3D::ShaderParameterGroup::SP_MATERIAL },
    { "SP_OBJECT", Urho3D::ShaderParameterGroup::SP_OBJECT },
    { "SP_CUSTOM", Urho3D::ShaderParameterGroup::SP_CUSTOM },
    { "MAX_SHADER_PARAMETER_GROUPS", Urho3D::ShaderParameterGroup::MAX_SHADER_PARAMETER_GROUPS } }
);
    lua["SP_FRAME"] = Urho3D::ShaderParameterGroup::SP_FRAME;
    lua["SP_CAMERA"] = Urho3D::ShaderParameterGroup::SP_CAMERA;
    lua["SP_ZONE"] = Urho3D::ShaderParameterGroup::SP_ZONE;
    lua["SP_LIGHT"] = Urho3D::ShaderParameterGroup::SP_LIGHT;
    lua["SP_MATERIAL"] = Urho3D::ShaderParameterGroup::SP_MATERIAL;
    lua["SP_OBJECT"] = Urho3D::ShaderParameterGroup::SP_OBJECT;
    lua["SP_CUSTOM"] = Urho3D::ShaderParameterGroup::SP_CUSTOM;
    lua["MAX_SHADER_PARAMETER_GROUPS"] = Urho3D::ShaderParameterGroup::MAX_SHADER_PARAMETER_GROUPS;
        
lua.new_enum<Urho3D::TextureUnit>( "TextureUnit", { 
    { "TU_DIFFUSE", Urho3D::TextureUnit::TU_DIFFUSE },
    { "TU_ALBEDOBUFFER", Urho3D::TextureUnit::TU_ALBEDOBUFFER },
    { "TU_NORMAL", Urho3D::TextureUnit::TU_NORMAL },
    { "TU_NORMALBUFFER", Urho3D::TextureUnit::TU_NORMALBUFFER },
    { "TU_SPECULAR", Urho3D::TextureUnit::TU_SPECULAR },
    { "TU_EMISSIVE", Urho3D::TextureUnit::TU_EMISSIVE },
    { "TU_ENVIRONMENT", Urho3D::TextureUnit::TU_ENVIRONMENT },
    { "TU_VOLUMEMAP", Urho3D::TextureUnit::TU_VOLUMEMAP },
    { "TU_CUSTOM1", Urho3D::TextureUnit::TU_CUSTOM1 },
    { "TU_CUSTOM2", Urho3D::TextureUnit::TU_CUSTOM2 },
    { "TU_LIGHTRAMP", Urho3D::TextureUnit::TU_LIGHTRAMP },
    { "TU_LIGHTSHAPE", Urho3D::TextureUnit::TU_LIGHTSHAPE },
    { "TU_SHADOWMAP", Urho3D::TextureUnit::TU_SHADOWMAP },
    { "TU_FACESELECT", Urho3D::TextureUnit::TU_FACESELECT },
    { "TU_INDIRECTION", Urho3D::TextureUnit::TU_INDIRECTION },
    { "TU_DEPTHBUFFER", Urho3D::TextureUnit::TU_DEPTHBUFFER },
    { "TU_LIGHTBUFFER", Urho3D::TextureUnit::TU_LIGHTBUFFER },
    { "TU_ZONE", Urho3D::TextureUnit::TU_ZONE },
    { "MAX_MATERIAL_TEXTURE_UNITS", Urho3D::TextureUnit::MAX_MATERIAL_TEXTURE_UNITS },
    { "MAX_TEXTURE_UNITS", Urho3D::TextureUnit::MAX_TEXTURE_UNITS } }
);
    lua["TU_DIFFUSE"] = Urho3D::TextureUnit::TU_DIFFUSE;
    lua["TU_ALBEDOBUFFER"] = Urho3D::TextureUnit::TU_ALBEDOBUFFER;
    lua["TU_NORMAL"] = Urho3D::TextureUnit::TU_NORMAL;
    lua["TU_NORMALBUFFER"] = Urho3D::TextureUnit::TU_NORMALBUFFER;
    lua["TU_SPECULAR"] = Urho3D::TextureUnit::TU_SPECULAR;
    lua["TU_EMISSIVE"] = Urho3D::TextureUnit::TU_EMISSIVE;
    lua["TU_ENVIRONMENT"] = Urho3D::TextureUnit::TU_ENVIRONMENT;
    lua["TU_VOLUMEMAP"] = Urho3D::TextureUnit::TU_VOLUMEMAP;
    lua["TU_CUSTOM1"] = Urho3D::TextureUnit::TU_CUSTOM1;
    lua["TU_CUSTOM2"] = Urho3D::TextureUnit::TU_CUSTOM2;
    lua["TU_LIGHTRAMP"] = Urho3D::TextureUnit::TU_LIGHTRAMP;
    lua["TU_LIGHTSHAPE"] = Urho3D::TextureUnit::TU_LIGHTSHAPE;
    lua["TU_SHADOWMAP"] = Urho3D::TextureUnit::TU_SHADOWMAP;
    lua["TU_FACESELECT"] = Urho3D::TextureUnit::TU_FACESELECT;
    lua["TU_INDIRECTION"] = Urho3D::TextureUnit::TU_INDIRECTION;
    lua["TU_DEPTHBUFFER"] = Urho3D::TextureUnit::TU_DEPTHBUFFER;
    lua["TU_LIGHTBUFFER"] = Urho3D::TextureUnit::TU_LIGHTBUFFER;
    lua["TU_ZONE"] = Urho3D::TextureUnit::TU_ZONE;
    lua["MAX_MATERIAL_TEXTURE_UNITS"] = Urho3D::TextureUnit::MAX_MATERIAL_TEXTURE_UNITS;
    lua["MAX_TEXTURE_UNITS"] = Urho3D::TextureUnit::MAX_TEXTURE_UNITS;
        
lua.new_enum<Urho3D::FaceCameraMode>( "FaceCameraMode", { 
    { "FC_NONE", Urho3D::FaceCameraMode::FC_NONE },
    { "FC_ROTATE_XYZ", Urho3D::FaceCameraMode::FC_ROTATE_XYZ },
    { "FC_ROTATE_Y", Urho3D::FaceCameraMode::FC_ROTATE_Y },
    { "FC_LOOKAT_XYZ", Urho3D::FaceCameraMode::FC_LOOKAT_XYZ },
    { "FC_LOOKAT_Y", Urho3D::FaceCameraMode::FC_LOOKAT_Y },
    { "FC_LOOKAT_MIXED", Urho3D::FaceCameraMode::FC_LOOKAT_MIXED },
    { "FC_DIRECTION", Urho3D::FaceCameraMode::FC_DIRECTION } }
);
    lua["FC_NONE"] = Urho3D::FaceCameraMode::FC_NONE;
    lua["FC_ROTATE_XYZ"] = Urho3D::FaceCameraMode::FC_ROTATE_XYZ;
    lua["FC_ROTATE_Y"] = Urho3D::FaceCameraMode::FC_ROTATE_Y;
    lua["FC_LOOKAT_XYZ"] = Urho3D::FaceCameraMode::FC_LOOKAT_XYZ;
    lua["FC_LOOKAT_Y"] = Urho3D::FaceCameraMode::FC_LOOKAT_Y;
    lua["FC_LOOKAT_MIXED"] = Urho3D::FaceCameraMode::FC_LOOKAT_MIXED;
    lua["FC_DIRECTION"] = Urho3D::FaceCameraMode::FC_DIRECTION;
        
lua.new_enum<Urho3D::ShadowQuality>( "ShadowQuality", { 
    { "SHADOWQUALITY_SIMPLE_16BIT", Urho3D::ShadowQuality::SHADOWQUALITY_SIMPLE_16BIT },
    { "SHADOWQUALITY_SIMPLE_24BIT", Urho3D::ShadowQuality::SHADOWQUALITY_SIMPLE_24BIT },
    { "SHADOWQUALITY_PCF_16BIT", Urho3D::ShadowQuality::SHADOWQUALITY_PCF_16BIT },
    { "SHADOWQUALITY_PCF_24BIT", Urho3D::ShadowQuality::SHADOWQUALITY_PCF_24BIT },
    { "SHADOWQUALITY_VSM", Urho3D::ShadowQuality::SHADOWQUALITY_VSM },
    { "SHADOWQUALITY_BLUR_VSM", Urho3D::ShadowQuality::SHADOWQUALITY_BLUR_VSM } }
);
    lua["SHADOWQUALITY_SIMPLE_16BIT"] = Urho3D::ShadowQuality::SHADOWQUALITY_SIMPLE_16BIT;
    lua["SHADOWQUALITY_SIMPLE_24BIT"] = Urho3D::ShadowQuality::SHADOWQUALITY_SIMPLE_24BIT;
    lua["SHADOWQUALITY_PCF_16BIT"] = Urho3D::ShadowQuality::SHADOWQUALITY_PCF_16BIT;
    lua["SHADOWQUALITY_PCF_24BIT"] = Urho3D::ShadowQuality::SHADOWQUALITY_PCF_24BIT;
    lua["SHADOWQUALITY_VSM"] = Urho3D::ShadowQuality::SHADOWQUALITY_VSM;
    lua["SHADOWQUALITY_BLUR_VSM"] = Urho3D::ShadowQuality::SHADOWQUALITY_BLUR_VSM;
        
lua.new_enum<Urho3D::MaterialQuality>( "MaterialQuality", { 
    { "QUALITY_LOW", Urho3D::MaterialQuality::QUALITY_LOW },
    { "QUALITY_MEDIUM", Urho3D::MaterialQuality::QUALITY_MEDIUM },
    { "QUALITY_HIGH", Urho3D::MaterialQuality::QUALITY_HIGH },
    { "QUALITY_MAX", Urho3D::MaterialQuality::QUALITY_MAX } }
);
    lua["QUALITY_LOW"] = Urho3D::MaterialQuality::QUALITY_LOW;
    lua["QUALITY_MEDIUM"] = Urho3D::MaterialQuality::QUALITY_MEDIUM;
    lua["QUALITY_HIGH"] = Urho3D::MaterialQuality::QUALITY_HIGH;
    lua["QUALITY_MAX"] = Urho3D::MaterialQuality::QUALITY_MAX;
        
lua.new_enum<Urho3D::ClearTarget>( "ClearTarget", { 
    { "CLEAR_COLOR", Urho3D::ClearTarget::CLEAR_COLOR },
    { "CLEAR_DEPTH", Urho3D::ClearTarget::CLEAR_DEPTH },
    { "CLEAR_STENCIL", Urho3D::ClearTarget::CLEAR_STENCIL } }
);
    lua["CLEAR_COLOR"] = Urho3D::ClearTarget::CLEAR_COLOR;
    lua["CLEAR_DEPTH"] = Urho3D::ClearTarget::CLEAR_DEPTH;
    lua["CLEAR_STENCIL"] = Urho3D::ClearTarget::CLEAR_STENCIL;
        
lua.new_enum<Urho3D::VertexMask>( "VertexMask", { 
    { "MASK_NONE", Urho3D::VertexMask::MASK_NONE },
    { "MASK_POSITION", Urho3D::VertexMask::MASK_POSITION },
    { "MASK_NORMAL", Urho3D::VertexMask::MASK_NORMAL },
    { "MASK_COLOR", Urho3D::VertexMask::MASK_COLOR },
    { "MASK_TEXCOORD1", Urho3D::VertexMask::MASK_TEXCOORD1 },
    { "MASK_TEXCOORD2", Urho3D::VertexMask::MASK_TEXCOORD2 },
    { "MASK_CUBETEXCOORD1", Urho3D::VertexMask::MASK_CUBETEXCOORD1 },
    { "MASK_CUBETEXCOORD2", Urho3D::VertexMask::MASK_CUBETEXCOORD2 },
    { "MASK_TANGENT", Urho3D::VertexMask::MASK_TANGENT },
    { "MASK_BLENDWEIGHTS", Urho3D::VertexMask::MASK_BLENDWEIGHTS },
    { "MASK_BLENDINDICES", Urho3D::VertexMask::MASK_BLENDINDICES },
    { "MASK_INSTANCEMATRIX1", Urho3D::VertexMask::MASK_INSTANCEMATRIX1 },
    { "MASK_INSTANCEMATRIX2", Urho3D::VertexMask::MASK_INSTANCEMATRIX2 },
    { "MASK_INSTANCEMATRIX3", Urho3D::VertexMask::MASK_INSTANCEMATRIX3 },
    { "MASK_OBJECTINDEX", Urho3D::VertexMask::MASK_OBJECTINDEX } }
);
    lua["MASK_NONE"] = Urho3D::VertexMask::MASK_NONE;
    lua["MASK_POSITION"] = Urho3D::VertexMask::MASK_POSITION;
    lua["MASK_NORMAL"] = Urho3D::VertexMask::MASK_NORMAL;
    lua["MASK_COLOR"] = Urho3D::VertexMask::MASK_COLOR;
    lua["MASK_TEXCOORD1"] = Urho3D::VertexMask::MASK_TEXCOORD1;
    lua["MASK_TEXCOORD2"] = Urho3D::VertexMask::MASK_TEXCOORD2;
    lua["MASK_CUBETEXCOORD1"] = Urho3D::VertexMask::MASK_CUBETEXCOORD1;
    lua["MASK_CUBETEXCOORD2"] = Urho3D::VertexMask::MASK_CUBETEXCOORD2;
    lua["MASK_TANGENT"] = Urho3D::VertexMask::MASK_TANGENT;
    lua["MASK_BLENDWEIGHTS"] = Urho3D::VertexMask::MASK_BLENDWEIGHTS;
    lua["MASK_BLENDINDICES"] = Urho3D::VertexMask::MASK_BLENDINDICES;
    lua["MASK_INSTANCEMATRIX1"] = Urho3D::VertexMask::MASK_INSTANCEMATRIX1;
    lua["MASK_INSTANCEMATRIX2"] = Urho3D::VertexMask::MASK_INSTANCEMATRIX2;
    lua["MASK_INSTANCEMATRIX3"] = Urho3D::VertexMask::MASK_INSTANCEMATRIX3;
    lua["MASK_OBJECTINDEX"] = Urho3D::VertexMask::MASK_OBJECTINDEX;
        
lua.new_enum<Urho3D::LightType>( "LightType", { 
    { "LIGHT_DIRECTIONAL", Urho3D::LightType::LIGHT_DIRECTIONAL },
    { "LIGHT_SPOT", Urho3D::LightType::LIGHT_SPOT },
    { "LIGHT_POINT", Urho3D::LightType::LIGHT_POINT } }
);
    lua["LIGHT_DIRECTIONAL"] = Urho3D::LightType::LIGHT_DIRECTIONAL;
    lua["LIGHT_SPOT"] = Urho3D::LightType::LIGHT_SPOT;
    lua["LIGHT_POINT"] = Urho3D::LightType::LIGHT_POINT;
        
lua.new_enum<Urho3D::RayQueryLevel>( "RayQueryLevel", { 
    { "RAY_AABB", Urho3D::RayQueryLevel::RAY_AABB },
    { "RAY_OBB", Urho3D::RayQueryLevel::RAY_OBB },
    { "RAY_TRIANGLE", Urho3D::RayQueryLevel::RAY_TRIANGLE },
    { "RAY_TRIANGLE_UV", Urho3D::RayQueryLevel::RAY_TRIANGLE_UV } }
);
    lua["RAY_AABB"] = Urho3D::RayQueryLevel::RAY_AABB;
    lua["RAY_OBB"] = Urho3D::RayQueryLevel::RAY_OBB;
    lua["RAY_TRIANGLE"] = Urho3D::RayQueryLevel::RAY_TRIANGLE;
    lua["RAY_TRIANGLE_UV"] = Urho3D::RayQueryLevel::RAY_TRIANGLE_UV;
        
lua.new_enum<Urho3D::EmitterType>( "EmitterType", { 
    { "EMITTER_SPHERE", Urho3D::EmitterType::EMITTER_SPHERE },
    { "EMITTER_BOX", Urho3D::EmitterType::EMITTER_BOX },
    { "EMITTER_SPHEREVOLUME", Urho3D::EmitterType::EMITTER_SPHEREVOLUME },
    { "EMITTER_CYLINDER", Urho3D::EmitterType::EMITTER_CYLINDER },
    { "EMITTER_RING", Urho3D::EmitterType::EMITTER_RING } }
);
    lua["EMITTER_SPHERE"] = Urho3D::EmitterType::EMITTER_SPHERE;
    lua["EMITTER_BOX"] = Urho3D::EmitterType::EMITTER_BOX;
    lua["EMITTER_SPHEREVOLUME"] = Urho3D::EmitterType::EMITTER_SPHEREVOLUME;
    lua["EMITTER_CYLINDER"] = Urho3D::EmitterType::EMITTER_CYLINDER;
    lua["EMITTER_RING"] = Urho3D::EmitterType::EMITTER_RING;
        
lua.new_enum<Urho3D::LightVSVariation>( "LightVSVariation", { 
    { "LVS_DIR", Urho3D::LightVSVariation::LVS_DIR },
    { "LVS_SPOT", Urho3D::LightVSVariation::LVS_SPOT },
    { "LVS_POINT", Urho3D::LightVSVariation::LVS_POINT },
    { "LVS_SHADOW", Urho3D::LightVSVariation::LVS_SHADOW },
    { "LVS_SPOTSHADOW", Urho3D::LightVSVariation::LVS_SPOTSHADOW },
    { "LVS_POINTSHADOW", Urho3D::LightVSVariation::LVS_POINTSHADOW },
    { "LVS_SHADOWNORMALOFFSET", Urho3D::LightVSVariation::LVS_SHADOWNORMALOFFSET },
    { "LVS_SPOTSHADOWNORMALOFFSET", Urho3D::LightVSVariation::LVS_SPOTSHADOWNORMALOFFSET },
    { "LVS_POINTSHADOWNORMALOFFSET", Urho3D::LightVSVariation::LVS_POINTSHADOWNORMALOFFSET },
    { "MAX_LIGHT_VS_VARIATIONS", Urho3D::LightVSVariation::MAX_LIGHT_VS_VARIATIONS } }
);
    lua["LVS_DIR"] = Urho3D::LightVSVariation::LVS_DIR;
    lua["LVS_SPOT"] = Urho3D::LightVSVariation::LVS_SPOT;
    lua["LVS_POINT"] = Urho3D::LightVSVariation::LVS_POINT;
    lua["LVS_SHADOW"] = Urho3D::LightVSVariation::LVS_SHADOW;
    lua["LVS_SPOTSHADOW"] = Urho3D::LightVSVariation::LVS_SPOTSHADOW;
    lua["LVS_POINTSHADOW"] = Urho3D::LightVSVariation::LVS_POINTSHADOW;
    lua["LVS_SHADOWNORMALOFFSET"] = Urho3D::LightVSVariation::LVS_SHADOWNORMALOFFSET;
    lua["LVS_SPOTSHADOWNORMALOFFSET"] = Urho3D::LightVSVariation::LVS_SPOTSHADOWNORMALOFFSET;
    lua["LVS_POINTSHADOWNORMALOFFSET"] = Urho3D::LightVSVariation::LVS_POINTSHADOWNORMALOFFSET;
    lua["MAX_LIGHT_VS_VARIATIONS"] = Urho3D::LightVSVariation::MAX_LIGHT_VS_VARIATIONS;
        
lua.new_enum<Urho3D::VertexLightVSVariation>( "VertexLightVSVariation", { 
    { "VLVS_NOLIGHTS", Urho3D::VertexLightVSVariation::VLVS_NOLIGHTS },
    { "VLVS_1LIGHT", Urho3D::VertexLightVSVariation::VLVS_1LIGHT },
    { "VLVS_2LIGHTS", Urho3D::VertexLightVSVariation::VLVS_2LIGHTS },
    { "VLVS_3LIGHTS", Urho3D::VertexLightVSVariation::VLVS_3LIGHTS },
    { "VLVS_4LIGHTS", Urho3D::VertexLightVSVariation::VLVS_4LIGHTS },
    { "MAX_VERTEXLIGHT_VS_VARIATIONS", Urho3D::VertexLightVSVariation::MAX_VERTEXLIGHT_VS_VARIATIONS } }
);
    lua["VLVS_NOLIGHTS"] = Urho3D::VertexLightVSVariation::VLVS_NOLIGHTS;
    lua["VLVS_1LIGHT"] = Urho3D::VertexLightVSVariation::VLVS_1LIGHT;
    lua["VLVS_2LIGHTS"] = Urho3D::VertexLightVSVariation::VLVS_2LIGHTS;
    lua["VLVS_3LIGHTS"] = Urho3D::VertexLightVSVariation::VLVS_3LIGHTS;
    lua["VLVS_4LIGHTS"] = Urho3D::VertexLightVSVariation::VLVS_4LIGHTS;
    lua["MAX_VERTEXLIGHT_VS_VARIATIONS"] = Urho3D::VertexLightVSVariation::MAX_VERTEXLIGHT_VS_VARIATIONS;
        
lua.new_enum<Urho3D::LightPSVariation>( "LightPSVariation", { 
    { "LPS_NONE", Urho3D::LightPSVariation::LPS_NONE },
    { "LPS_SPOT", Urho3D::LightPSVariation::LPS_SPOT },
    { "LPS_POINT", Urho3D::LightPSVariation::LPS_POINT },
    { "LPS_POINTMASK", Urho3D::LightPSVariation::LPS_POINTMASK },
    { "LPS_SPEC", Urho3D::LightPSVariation::LPS_SPEC },
    { "LPS_SPOTSPEC", Urho3D::LightPSVariation::LPS_SPOTSPEC },
    { "LPS_POINTSPEC", Urho3D::LightPSVariation::LPS_POINTSPEC },
    { "LPS_POINTMASKSPEC", Urho3D::LightPSVariation::LPS_POINTMASKSPEC },
    { "LPS_SHADOW", Urho3D::LightPSVariation::LPS_SHADOW },
    { "LPS_SPOTSHADOW", Urho3D::LightPSVariation::LPS_SPOTSHADOW },
    { "LPS_POINTSHADOW", Urho3D::LightPSVariation::LPS_POINTSHADOW },
    { "LPS_POINTMASKSHADOW", Urho3D::LightPSVariation::LPS_POINTMASKSHADOW },
    { "LPS_SHADOWSPEC", Urho3D::LightPSVariation::LPS_SHADOWSPEC },
    { "LPS_SPOTSHADOWSPEC", Urho3D::LightPSVariation::LPS_SPOTSHADOWSPEC },
    { "LPS_POINTSHADOWSPEC", Urho3D::LightPSVariation::LPS_POINTSHADOWSPEC },
    { "LPS_POINTMASKSHADOWSPEC", Urho3D::LightPSVariation::LPS_POINTMASKSHADOWSPEC },
    { "MAX_LIGHT_PS_VARIATIONS", Urho3D::LightPSVariation::MAX_LIGHT_PS_VARIATIONS } }
);
    lua["LPS_NONE"] = Urho3D::LightPSVariation::LPS_NONE;
    lua["LPS_SPOT"] = Urho3D::LightPSVariation::LPS_SPOT;
    lua["LPS_POINT"] = Urho3D::LightPSVariation::LPS_POINT;
    lua["LPS_POINTMASK"] = Urho3D::LightPSVariation::LPS_POINTMASK;
    lua["LPS_SPEC"] = Urho3D::LightPSVariation::LPS_SPEC;
    lua["LPS_SPOTSPEC"] = Urho3D::LightPSVariation::LPS_SPOTSPEC;
    lua["LPS_POINTSPEC"] = Urho3D::LightPSVariation::LPS_POINTSPEC;
    lua["LPS_POINTMASKSPEC"] = Urho3D::LightPSVariation::LPS_POINTMASKSPEC;
    lua["LPS_SHADOW"] = Urho3D::LightPSVariation::LPS_SHADOW;
    lua["LPS_SPOTSHADOW"] = Urho3D::LightPSVariation::LPS_SPOTSHADOW;
    lua["LPS_POINTSHADOW"] = Urho3D::LightPSVariation::LPS_POINTSHADOW;
    lua["LPS_POINTMASKSHADOW"] = Urho3D::LightPSVariation::LPS_POINTMASKSHADOW;
    lua["LPS_SHADOWSPEC"] = Urho3D::LightPSVariation::LPS_SHADOWSPEC;
    lua["LPS_SPOTSHADOWSPEC"] = Urho3D::LightPSVariation::LPS_SPOTSHADOWSPEC;
    lua["LPS_POINTSHADOWSPEC"] = Urho3D::LightPSVariation::LPS_POINTSHADOWSPEC;
    lua["LPS_POINTMASKSHADOWSPEC"] = Urho3D::LightPSVariation::LPS_POINTMASKSHADOWSPEC;
    lua["MAX_LIGHT_PS_VARIATIONS"] = Urho3D::LightPSVariation::MAX_LIGHT_PS_VARIATIONS;
        
lua.new_enum<Urho3D::DeferredLightVSVariation>( "DeferredLightVSVariation", { 
    { "DLVS_NONE", Urho3D::DeferredLightVSVariation::DLVS_NONE },
    { "DLVS_DIR", Urho3D::DeferredLightVSVariation::DLVS_DIR },
    { "DLVS_ORTHO", Urho3D::DeferredLightVSVariation::DLVS_ORTHO },
    { "DLVS_ORTHODIR", Urho3D::DeferredLightVSVariation::DLVS_ORTHODIR },
    { "MAX_DEFERRED_LIGHT_VS_VARIATIONS", Urho3D::DeferredLightVSVariation::MAX_DEFERRED_LIGHT_VS_VARIATIONS } }
);
    lua["DLVS_NONE"] = Urho3D::DeferredLightVSVariation::DLVS_NONE;
    lua["DLVS_DIR"] = Urho3D::DeferredLightVSVariation::DLVS_DIR;
    lua["DLVS_ORTHO"] = Urho3D::DeferredLightVSVariation::DLVS_ORTHO;
    lua["DLVS_ORTHODIR"] = Urho3D::DeferredLightVSVariation::DLVS_ORTHODIR;
    lua["MAX_DEFERRED_LIGHT_VS_VARIATIONS"] = Urho3D::DeferredLightVSVariation::MAX_DEFERRED_LIGHT_VS_VARIATIONS;
        
lua.new_enum<Urho3D::DeferredLightPSVariation>( "DeferredLightPSVariation", { 
    { "DLPS_NONE", Urho3D::DeferredLightPSVariation::DLPS_NONE },
    { "DLPS_SPOT", Urho3D::DeferredLightPSVariation::DLPS_SPOT },
    { "DLPS_POINT", Urho3D::DeferredLightPSVariation::DLPS_POINT },
    { "DLPS_POINTMASK", Urho3D::DeferredLightPSVariation::DLPS_POINTMASK },
    { "DLPS_SPEC", Urho3D::DeferredLightPSVariation::DLPS_SPEC },
    { "DLPS_SPOTSPEC", Urho3D::DeferredLightPSVariation::DLPS_SPOTSPEC },
    { "DLPS_POINTSPEC", Urho3D::DeferredLightPSVariation::DLPS_POINTSPEC },
    { "DLPS_POINTMASKSPEC", Urho3D::DeferredLightPSVariation::DLPS_POINTMASKSPEC },
    { "DLPS_SHADOW", Urho3D::DeferredLightPSVariation::DLPS_SHADOW },
    { "DLPS_SPOTSHADOW", Urho3D::DeferredLightPSVariation::DLPS_SPOTSHADOW },
    { "DLPS_POINTSHADOW", Urho3D::DeferredLightPSVariation::DLPS_POINTSHADOW },
    { "DLPS_POINTMASKSHADOW", Urho3D::DeferredLightPSVariation::DLPS_POINTMASKSHADOW },
    { "DLPS_SHADOWSPEC", Urho3D::DeferredLightPSVariation::DLPS_SHADOWSPEC },
    { "DLPS_SPOTSHADOWSPEC", Urho3D::DeferredLightPSVariation::DLPS_SPOTSHADOWSPEC },
    { "DLPS_POINTSHADOWSPEC", Urho3D::DeferredLightPSVariation::DLPS_POINTSHADOWSPEC },
    { "DLPS_POINTMASKSHADOWSPEC", Urho3D::DeferredLightPSVariation::DLPS_POINTMASKSHADOWSPEC },
    { "DLPS_SHADOWNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_SHADOWNORMALOFFSET },
    { "DLPS_SPOTSHADOWNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_SPOTSHADOWNORMALOFFSET },
    { "DLPS_POINTSHADOWNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_POINTSHADOWNORMALOFFSET },
    { "DLPS_POINTMASKSHADOWNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_POINTMASKSHADOWNORMALOFFSET },
    { "DLPS_SHADOWSPECNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_SHADOWSPECNORMALOFFSET },
    { "DLPS_SPOTSHADOWSPECNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_SPOTSHADOWSPECNORMALOFFSET },
    { "DLPS_POINTSHADOWSPECNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_POINTSHADOWSPECNORMALOFFSET },
    { "DLPS_POINTMASKSHADOWSPECNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_POINTMASKSHADOWSPECNORMALOFFSET },
    { "DLPS_ORTHO", Urho3D::DeferredLightPSVariation::DLPS_ORTHO },
    { "DLPS_ORTHOSPOT", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOT },
    { "DLPS_ORTHOPOINT", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINT },
    { "DLPS_ORTHOPOINTMASK", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASK },
    { "DLPS_ORTHOSPEC", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPEC },
    { "DLPS_ORTHOSPOTSPEC", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOTSPEC },
    { "DLPS_ORTHOPOINTSPEC", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTSPEC },
    { "DLPS_ORTHOPOINTMASKSPEC", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASKSPEC },
    { "DLPS_ORTHOSHADOW", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSHADOW },
    { "DLPS_ORTHOSPOTSHADOW", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOTSHADOW },
    { "DLPS_ORTHOPOINTSHADOW", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTSHADOW },
    { "DLPS_ORTHOPOINTMASKSHADOW", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASKSHADOW },
    { "DLPS_ORTHOSHADOWSPEC", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSHADOWSPEC },
    { "DLPS_ORTHOSPOTSHADOWSPEC", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOTSHADOWSPEC },
    { "DLPS_ORTHOPOINTSHADOWSPEC", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTSHADOWSPEC },
    { "DLPS_ORTHOPOINTMASKSHADOWSPEC", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASKSHADOWSPEC },
    { "DLPS_ORTHOSHADOWNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSHADOWNORMALOFFSET },
    { "DLPS_ORTHOSPOTSHADOWNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOTSHADOWNORMALOFFSET },
    { "DLPS_ORTHOPOINTSHADOWNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTSHADOWNORMALOFFSET },
    { "DLPS_ORTHOPOINTMASKSHADOWNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASKSHADOWNORMALOFFSET },
    { "DLPS_ORTHOSHADOWSPECNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSHADOWSPECNORMALOFFSET },
    { "DLPS_ORTHOSPOTSHADOWSPECNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOTSHADOWSPECNORMALOFFSET },
    { "DLPS_ORTHOPOINTSHADOWSPECNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTSHADOWSPECNORMALOFFSET },
    { "DLPS_ORTHOPOINTMASKSHADOWSPECNORMALOFFSET", Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASKSHADOWSPECNORMALOFFSET },
    { "MAX_DEFERRED_LIGHT_PS_VARIATIONS", Urho3D::DeferredLightPSVariation::MAX_DEFERRED_LIGHT_PS_VARIATIONS } }
);
    lua["DLPS_NONE"] = Urho3D::DeferredLightPSVariation::DLPS_NONE;
    lua["DLPS_SPOT"] = Urho3D::DeferredLightPSVariation::DLPS_SPOT;
    lua["DLPS_POINT"] = Urho3D::DeferredLightPSVariation::DLPS_POINT;
    lua["DLPS_POINTMASK"] = Urho3D::DeferredLightPSVariation::DLPS_POINTMASK;
    lua["DLPS_SPEC"] = Urho3D::DeferredLightPSVariation::DLPS_SPEC;
    lua["DLPS_SPOTSPEC"] = Urho3D::DeferredLightPSVariation::DLPS_SPOTSPEC;
    lua["DLPS_POINTSPEC"] = Urho3D::DeferredLightPSVariation::DLPS_POINTSPEC;
    lua["DLPS_POINTMASKSPEC"] = Urho3D::DeferredLightPSVariation::DLPS_POINTMASKSPEC;
    lua["DLPS_SHADOW"] = Urho3D::DeferredLightPSVariation::DLPS_SHADOW;
    lua["DLPS_SPOTSHADOW"] = Urho3D::DeferredLightPSVariation::DLPS_SPOTSHADOW;
    lua["DLPS_POINTSHADOW"] = Urho3D::DeferredLightPSVariation::DLPS_POINTSHADOW;
    lua["DLPS_POINTMASKSHADOW"] = Urho3D::DeferredLightPSVariation::DLPS_POINTMASKSHADOW;
    lua["DLPS_SHADOWSPEC"] = Urho3D::DeferredLightPSVariation::DLPS_SHADOWSPEC;
    lua["DLPS_SPOTSHADOWSPEC"] = Urho3D::DeferredLightPSVariation::DLPS_SPOTSHADOWSPEC;
    lua["DLPS_POINTSHADOWSPEC"] = Urho3D::DeferredLightPSVariation::DLPS_POINTSHADOWSPEC;
    lua["DLPS_POINTMASKSHADOWSPEC"] = Urho3D::DeferredLightPSVariation::DLPS_POINTMASKSHADOWSPEC;
    lua["DLPS_SHADOWNORMALOFFSET"] = Urho3D::DeferredLightPSVariation::DLPS_SHADOWNORMALOFFSET;
    lua["DLPS_SPOTSHADOWNORMALOFFSET"] = Urho3D::DeferredLightPSVariation::DLPS_SPOTSHADOWNORMALOFFSET;
    lua["DLPS_POINTSHADOWNORMALOFFSET"] = Urho3D::DeferredLightPSVariation::DLPS_POINTSHADOWNORMALOFFSET;
    lua["DLPS_POINTMASKSHADOWNORMALOFFSET"] = Urho3D::DeferredLightPSVariation::DLPS_POINTMASKSHADOWNORMALOFFSET;
    lua["DLPS_SHADOWSPECNORMALOFFSET"] = Urho3D::DeferredLightPSVariation::DLPS_SHADOWSPECNORMALOFFSET;
    lua["DLPS_SPOTSHADOWSPECNORMALOFFSET"] = Urho3D::DeferredLightPSVariation::DLPS_SPOTSHADOWSPECNORMALOFFSET;
    lua["DLPS_POINTSHADOWSPECNORMALOFFSET"] = Urho3D::DeferredLightPSVariation::DLPS_POINTSHADOWSPECNORMALOFFSET;
    lua["DLPS_POINTMASKSHADOWSPECNORMALOFFSET"] = Urho3D::DeferredLightPSVariation::DLPS_POINTMASKSHADOWSPECNORMALOFFSET;
    lua["DLPS_ORTHO"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHO;
    lua["DLPS_ORTHOSPOT"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOT;
    lua["DLPS_ORTHOPOINT"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINT;
    lua["DLPS_ORTHOPOINTMASK"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASK;
    lua["DLPS_ORTHOSPEC"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPEC;
    lua["DLPS_ORTHOSPOTSPEC"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOTSPEC;
    lua["DLPS_ORTHOPOINTSPEC"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTSPEC;
    lua["DLPS_ORTHOPOINTMASKSPEC"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASKSPEC;
    lua["DLPS_ORTHOSHADOW"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOSHADOW;
    lua["DLPS_ORTHOSPOTSHADOW"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOTSHADOW;
    lua["DLPS_ORTHOPOINTSHADOW"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTSHADOW;
    lua["DLPS_ORTHOPOINTMASKSHADOW"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASKSHADOW;
    lua["DLPS_ORTHOSHADOWSPEC"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOSHADOWSPEC;
    lua["DLPS_ORTHOSPOTSHADOWSPEC"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOTSHADOWSPEC;
    lua["DLPS_ORTHOPOINTSHADOWSPEC"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTSHADOWSPEC;
    lua["DLPS_ORTHOPOINTMASKSHADOWSPEC"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASKSHADOWSPEC;
    lua["DLPS_ORTHOSHADOWNORMALOFFSET"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOSHADOWNORMALOFFSET;
    lua["DLPS_ORTHOSPOTSHADOWNORMALOFFSET"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOTSHADOWNORMALOFFSET;
    lua["DLPS_ORTHOPOINTSHADOWNORMALOFFSET"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTSHADOWNORMALOFFSET;
    lua["DLPS_ORTHOPOINTMASKSHADOWNORMALOFFSET"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASKSHADOWNORMALOFFSET;
    lua["DLPS_ORTHOSHADOWSPECNORMALOFFSET"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOSHADOWSPECNORMALOFFSET;
    lua["DLPS_ORTHOSPOTSHADOWSPECNORMALOFFSET"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOSPOTSHADOWSPECNORMALOFFSET;
    lua["DLPS_ORTHOPOINTSHADOWSPECNORMALOFFSET"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTSHADOWSPECNORMALOFFSET;
    lua["DLPS_ORTHOPOINTMASKSHADOWSPECNORMALOFFSET"] = Urho3D::DeferredLightPSVariation::DLPS_ORTHOPOINTMASKSHADOWSPECNORMALOFFSET;
    lua["MAX_DEFERRED_LIGHT_PS_VARIATIONS"] = Urho3D::DeferredLightPSVariation::MAX_DEFERRED_LIGHT_PS_VARIATIONS;
        
lua.new_enum<Urho3D::RenderCommandType>( "RenderCommandType", { 
    { "CMD_NONE", Urho3D::RenderCommandType::CMD_NONE },
    { "CMD_CLEAR", Urho3D::RenderCommandType::CMD_CLEAR },
    { "CMD_SCENEPASS", Urho3D::RenderCommandType::CMD_SCENEPASS },
    { "CMD_QUAD", Urho3D::RenderCommandType::CMD_QUAD },
    { "CMD_FORWARDLIGHTS", Urho3D::RenderCommandType::CMD_FORWARDLIGHTS },
    { "CMD_LIGHTVOLUMES", Urho3D::RenderCommandType::CMD_LIGHTVOLUMES },
    { "CMD_RENDERUI", Urho3D::RenderCommandType::CMD_RENDERUI },
    { "CMD_SENDEVENT", Urho3D::RenderCommandType::CMD_SENDEVENT } }
);
    lua["CMD_NONE"] = Urho3D::RenderCommandType::CMD_NONE;
    lua["CMD_CLEAR"] = Urho3D::RenderCommandType::CMD_CLEAR;
    lua["CMD_SCENEPASS"] = Urho3D::RenderCommandType::CMD_SCENEPASS;
    lua["CMD_QUAD"] = Urho3D::RenderCommandType::CMD_QUAD;
    lua["CMD_FORWARDLIGHTS"] = Urho3D::RenderCommandType::CMD_FORWARDLIGHTS;
    lua["CMD_LIGHTVOLUMES"] = Urho3D::RenderCommandType::CMD_LIGHTVOLUMES;
    lua["CMD_RENDERUI"] = Urho3D::RenderCommandType::CMD_RENDERUI;
    lua["CMD_SENDEVENT"] = Urho3D::RenderCommandType::CMD_SENDEVENT;
        
lua.new_enum<Urho3D::RenderCommandSortMode>( "RenderCommandSortMode", { 
    { "SORT_FRONTTOBACK", Urho3D::RenderCommandSortMode::SORT_FRONTTOBACK },
    { "SORT_BACKTOFRONT", Urho3D::RenderCommandSortMode::SORT_BACKTOFRONT } }
);
    lua["SORT_FRONTTOBACK"] = Urho3D::RenderCommandSortMode::SORT_FRONTTOBACK;
    lua["SORT_BACKTOFRONT"] = Urho3D::RenderCommandSortMode::SORT_BACKTOFRONT;
        
lua.new_enum<Urho3D::RenderTargetSizeMode>( "RenderTargetSizeMode", { 
    { "SIZE_ABSOLUTE", Urho3D::RenderTargetSizeMode::SIZE_ABSOLUTE },
    { "SIZE_VIEWPORTDIVISOR", Urho3D::RenderTargetSizeMode::SIZE_VIEWPORTDIVISOR },
    { "SIZE_VIEWPORTMULTIPLIER", Urho3D::RenderTargetSizeMode::SIZE_VIEWPORTMULTIPLIER } }
);
    lua["SIZE_ABSOLUTE"] = Urho3D::RenderTargetSizeMode::SIZE_ABSOLUTE;
    lua["SIZE_VIEWPORTDIVISOR"] = Urho3D::RenderTargetSizeMode::SIZE_VIEWPORTDIVISOR;
    lua["SIZE_VIEWPORTMULTIPLIER"] = Urho3D::RenderTargetSizeMode::SIZE_VIEWPORTMULTIPLIER;
        
lua.new_enum<Urho3D::TrailType>( "TrailType", { 
    { "TT_FACE_CAMERA", Urho3D::TrailType::TT_FACE_CAMERA },
    { "TT_BONE", Urho3D::TrailType::TT_BONE } }
);
    lua["TT_FACE_CAMERA"] = Urho3D::TrailType::TT_FACE_CAMERA;
    lua["TT_BONE"] = Urho3D::TrailType::TT_BONE;
        
lua.new_enum<Urho3D::BoneCollisionShape>( "BoneCollisionShape", { 
    { "BONECOLLISION_NONE", Urho3D::BoneCollisionShape::BONECOLLISION_NONE },
    { "BONECOLLISION_SPHERE", Urho3D::BoneCollisionShape::BONECOLLISION_SPHERE },
    { "BONECOLLISION_BOX", Urho3D::BoneCollisionShape::BONECOLLISION_BOX } }
);
    lua["BONECOLLISION_NONE"] = Urho3D::BoneCollisionShape::BONECOLLISION_NONE;
    lua["BONECOLLISION_SPHERE"] = Urho3D::BoneCollisionShape::BONECOLLISION_SPHERE;
    lua["BONECOLLISION_BOX"] = Urho3D::BoneCollisionShape::BONECOLLISION_BOX;
        
lua.new_enum<Urho3D::PassLightingMode>( "PassLightingMode", { 
    { "LIGHTING_UNLIT", Urho3D::PassLightingMode::LIGHTING_UNLIT },
    { "LIGHTING_PERVERTEX", Urho3D::PassLightingMode::LIGHTING_PERVERTEX },
    { "LIGHTING_PERPIXEL", Urho3D::PassLightingMode::LIGHTING_PERPIXEL } }
);
    lua["LIGHTING_UNLIT"] = Urho3D::PassLightingMode::LIGHTING_UNLIT;
    lua["LIGHTING_PERVERTEX"] = Urho3D::PassLightingMode::LIGHTING_PERVERTEX;
    lua["LIGHTING_PERPIXEL"] = Urho3D::PassLightingMode::LIGHTING_PERPIXEL;
        
lua.new_enum<Urho3D::MouseMode>( "MouseMode", { 
    { "MM_ABSOLUTE", Urho3D::MouseMode::MM_ABSOLUTE },
    { "MM_RELATIVE", Urho3D::MouseMode::MM_RELATIVE },
    { "MM_WRAP", Urho3D::MouseMode::MM_WRAP },
    { "MM_FREE", Urho3D::MouseMode::MM_FREE },
    { "MM_INVALID", Urho3D::MouseMode::MM_INVALID } }
);
    lua["MM_ABSOLUTE"] = Urho3D::MouseMode::MM_ABSOLUTE;
    lua["MM_RELATIVE"] = Urho3D::MouseMode::MM_RELATIVE;
    lua["MM_WRAP"] = Urho3D::MouseMode::MM_WRAP;
    lua["MM_FREE"] = Urho3D::MouseMode::MM_FREE;
    lua["MM_INVALID"] = Urho3D::MouseMode::MM_INVALID;
        
lua.new_enum<Urho3D::MouseButton>( "MouseButton", { 
    { "MOUSEB_NONE", Urho3D::MouseButton::MOUSEB_NONE },
    { "MOUSEB_LEFT", Urho3D::MouseButton::MOUSEB_LEFT },
    { "MOUSEB_MIDDLE", Urho3D::MouseButton::MOUSEB_MIDDLE },
    { "MOUSEB_RIGHT", Urho3D::MouseButton::MOUSEB_RIGHT },
    { "MOUSEB_X1", Urho3D::MouseButton::MOUSEB_X1 },
    { "MOUSEB_X2", Urho3D::MouseButton::MOUSEB_X2 },
    { "MOUSEB_ANY", Urho3D::MouseButton::MOUSEB_ANY } }
);
    lua["MOUSEB_NONE"] = Urho3D::MouseButton::MOUSEB_NONE;
    lua["MOUSEB_LEFT"] = Urho3D::MouseButton::MOUSEB_LEFT;
    lua["MOUSEB_MIDDLE"] = Urho3D::MouseButton::MOUSEB_MIDDLE;
    lua["MOUSEB_RIGHT"] = Urho3D::MouseButton::MOUSEB_RIGHT;
    lua["MOUSEB_X1"] = Urho3D::MouseButton::MOUSEB_X1;
    lua["MOUSEB_X2"] = Urho3D::MouseButton::MOUSEB_X2;
    lua["MOUSEB_ANY"] = Urho3D::MouseButton::MOUSEB_ANY;
        
lua.new_enum<Urho3D::Qualifier>( "Qualifier", { 
    { "QUAL_NONE", Urho3D::Qualifier::QUAL_NONE },
    { "QUAL_SHIFT", Urho3D::Qualifier::QUAL_SHIFT },
    { "QUAL_CTRL", Urho3D::Qualifier::QUAL_CTRL },
    { "QUAL_ALT", Urho3D::Qualifier::QUAL_ALT },
    { "QUAL_ANY", Urho3D::Qualifier::QUAL_ANY } }
);
    lua["QUAL_NONE"] = Urho3D::Qualifier::QUAL_NONE;
    lua["QUAL_SHIFT"] = Urho3D::Qualifier::QUAL_SHIFT;
    lua["QUAL_CTRL"] = Urho3D::Qualifier::QUAL_CTRL;
    lua["QUAL_ALT"] = Urho3D::Qualifier::QUAL_ALT;
    lua["QUAL_ANY"] = Urho3D::Qualifier::QUAL_ANY;
        
lua.new_enum<Urho3D::Key>( "Key", { 
    { "KEY_UNKNOWN", Urho3D::Key::KEY_UNKNOWN },
    { "KEY_A", Urho3D::Key::KEY_A },
    { "KEY_B", Urho3D::Key::KEY_B },
    { "KEY_C", Urho3D::Key::KEY_C },
    { "KEY_D", Urho3D::Key::KEY_D },
    { "KEY_E", Urho3D::Key::KEY_E },
    { "KEY_F", Urho3D::Key::KEY_F },
    { "KEY_G", Urho3D::Key::KEY_G },
    { "KEY_H", Urho3D::Key::KEY_H },
    { "KEY_I", Urho3D::Key::KEY_I },
    { "KEY_J", Urho3D::Key::KEY_J },
    { "KEY_K", Urho3D::Key::KEY_K },
    { "KEY_L", Urho3D::Key::KEY_L },
    { "KEY_M", Urho3D::Key::KEY_M },
    { "KEY_N", Urho3D::Key::KEY_N },
    { "KEY_O", Urho3D::Key::KEY_O },
    { "KEY_P", Urho3D::Key::KEY_P },
    { "KEY_Q", Urho3D::Key::KEY_Q },
    { "KEY_R", Urho3D::Key::KEY_R },
    { "KEY_S", Urho3D::Key::KEY_S },
    { "KEY_T", Urho3D::Key::KEY_T },
    { "KEY_U", Urho3D::Key::KEY_U },
    { "KEY_V", Urho3D::Key::KEY_V },
    { "KEY_W", Urho3D::Key::KEY_W },
    { "KEY_X", Urho3D::Key::KEY_X },
    { "KEY_Y", Urho3D::Key::KEY_Y },
    { "KEY_Z", Urho3D::Key::KEY_Z },
    { "KEY_0", Urho3D::Key::KEY_0 },
    { "KEY_1", Urho3D::Key::KEY_1 },
    { "KEY_2", Urho3D::Key::KEY_2 },
    { "KEY_3", Urho3D::Key::KEY_3 },
    { "KEY_4", Urho3D::Key::KEY_4 },
    { "KEY_5", Urho3D::Key::KEY_5 },
    { "KEY_6", Urho3D::Key::KEY_6 },
    { "KEY_7", Urho3D::Key::KEY_7 },
    { "KEY_8", Urho3D::Key::KEY_8 },
    { "KEY_9", Urho3D::Key::KEY_9 },
    { "KEY_BACKSPACE", Urho3D::Key::KEY_BACKSPACE },
    { "KEY_TAB", Urho3D::Key::KEY_TAB },
    { "KEY_RETURN", Urho3D::Key::KEY_RETURN },
    { "KEY_RETURN2", Urho3D::Key::KEY_RETURN2 },
    { "KEY_KP_ENTER", Urho3D::Key::KEY_KP_ENTER },
    { "KEY_SHIFT", Urho3D::Key::KEY_SHIFT },
    { "KEY_CTRL", Urho3D::Key::KEY_CTRL },
    { "KEY_ALT", Urho3D::Key::KEY_ALT },
    { "KEY_GUI", Urho3D::Key::KEY_GUI },
    { "KEY_PAUSE", Urho3D::Key::KEY_PAUSE },
    { "KEY_CAPSLOCK", Urho3D::Key::KEY_CAPSLOCK },
    { "KEY_ESCAPE", Urho3D::Key::KEY_ESCAPE },
    { "KEY_SPACE", Urho3D::Key::KEY_SPACE },
    { "KEY_PAGEUP", Urho3D::Key::KEY_PAGEUP },
    { "KEY_PAGEDOWN", Urho3D::Key::KEY_PAGEDOWN },
    { "KEY_END", Urho3D::Key::KEY_END },
    { "KEY_HOME", Urho3D::Key::KEY_HOME },
    { "KEY_LEFT", Urho3D::Key::KEY_LEFT },
    { "KEY_UP", Urho3D::Key::KEY_UP },
    { "KEY_RIGHT", Urho3D::Key::KEY_RIGHT },
    { "KEY_DOWN", Urho3D::Key::KEY_DOWN },
    { "KEY_SELECT", Urho3D::Key::KEY_SELECT },
    { "KEY_PRINTSCREEN", Urho3D::Key::KEY_PRINTSCREEN },
    { "KEY_INSERT", Urho3D::Key::KEY_INSERT },
    { "KEY_DELETE", Urho3D::Key::KEY_DELETE },
    { "KEY_LGUI", Urho3D::Key::KEY_LGUI },
    { "KEY_RGUI", Urho3D::Key::KEY_RGUI },
    { "KEY_APPLICATION", Urho3D::Key::KEY_APPLICATION },
    { "KEY_KP_0", Urho3D::Key::KEY_KP_0 },
    { "KEY_KP_1", Urho3D::Key::KEY_KP_1 },
    { "KEY_KP_2", Urho3D::Key::KEY_KP_2 },
    { "KEY_KP_3", Urho3D::Key::KEY_KP_3 },
    { "KEY_KP_4", Urho3D::Key::KEY_KP_4 },
    { "KEY_KP_5", Urho3D::Key::KEY_KP_5 },
    { "KEY_KP_6", Urho3D::Key::KEY_KP_6 },
    { "KEY_KP_7", Urho3D::Key::KEY_KP_7 },
    { "KEY_KP_8", Urho3D::Key::KEY_KP_8 },
    { "KEY_KP_9", Urho3D::Key::KEY_KP_9 },
    { "KEY_KP_MULTIPLY", Urho3D::Key::KEY_KP_MULTIPLY },
    { "KEY_KP_PLUS", Urho3D::Key::KEY_KP_PLUS },
    { "KEY_KP_MINUS", Urho3D::Key::KEY_KP_MINUS },
    { "KEY_KP_PERIOD", Urho3D::Key::KEY_KP_PERIOD },
    { "KEY_KP_DIVIDE", Urho3D::Key::KEY_KP_DIVIDE },
    { "KEY_F1", Urho3D::Key::KEY_F1 },
    { "KEY_F2", Urho3D::Key::KEY_F2 },
    { "KEY_F3", Urho3D::Key::KEY_F3 },
    { "KEY_F4", Urho3D::Key::KEY_F4 },
    { "KEY_F5", Urho3D::Key::KEY_F5 },
    { "KEY_F6", Urho3D::Key::KEY_F6 },
    { "KEY_F7", Urho3D::Key::KEY_F7 },
    { "KEY_F8", Urho3D::Key::KEY_F8 },
    { "KEY_F9", Urho3D::Key::KEY_F9 },
    { "KEY_F10", Urho3D::Key::KEY_F10 },
    { "KEY_F11", Urho3D::Key::KEY_F11 },
    { "KEY_F12", Urho3D::Key::KEY_F12 },
    { "KEY_F13", Urho3D::Key::KEY_F13 },
    { "KEY_F14", Urho3D::Key::KEY_F14 },
    { "KEY_F15", Urho3D::Key::KEY_F15 },
    { "KEY_F16", Urho3D::Key::KEY_F16 },
    { "KEY_F17", Urho3D::Key::KEY_F17 },
    { "KEY_F18", Urho3D::Key::KEY_F18 },
    { "KEY_F19", Urho3D::Key::KEY_F19 },
    { "KEY_F20", Urho3D::Key::KEY_F20 },
    { "KEY_F21", Urho3D::Key::KEY_F21 },
    { "KEY_F22", Urho3D::Key::KEY_F22 },
    { "KEY_F23", Urho3D::Key::KEY_F23 },
    { "KEY_F24", Urho3D::Key::KEY_F24 },
    { "KEY_NUMLOCKCLEAR", Urho3D::Key::KEY_NUMLOCKCLEAR },
    { "KEY_SCROLLLOCK", Urho3D::Key::KEY_SCROLLLOCK },
    { "KEY_LSHIFT", Urho3D::Key::KEY_LSHIFT },
    { "KEY_RSHIFT", Urho3D::Key::KEY_RSHIFT },
    { "KEY_LCTRL", Urho3D::Key::KEY_LCTRL },
    { "KEY_RCTRL", Urho3D::Key::KEY_RCTRL },
    { "KEY_LALT", Urho3D::Key::KEY_LALT },
    { "KEY_RALT", Urho3D::Key::KEY_RALT },
    { "KEY_AC_BACK", Urho3D::Key::KEY_AC_BACK },
    { "KEY_AC_BOOKMARKS", Urho3D::Key::KEY_AC_BOOKMARKS },
    { "KEY_AC_FORWARD", Urho3D::Key::KEY_AC_FORWARD },
    { "KEY_AC_HOME", Urho3D::Key::KEY_AC_HOME },
    { "KEY_AC_REFRESH", Urho3D::Key::KEY_AC_REFRESH },
    { "KEY_AC_SEARCH", Urho3D::Key::KEY_AC_SEARCH },
    { "KEY_AC_STOP", Urho3D::Key::KEY_AC_STOP },
    { "KEY_AGAIN", Urho3D::Key::KEY_AGAIN },
    { "KEY_ALTERASE", Urho3D::Key::KEY_ALTERASE },
    { "KEY_AMPERSAND", Urho3D::Key::KEY_AMPERSAND },
    { "KEY_ASTERISK", Urho3D::Key::KEY_ASTERISK },
    { "KEY_AT", Urho3D::Key::KEY_AT },
    { "KEY_AUDIOMUTE", Urho3D::Key::KEY_AUDIOMUTE },
    { "KEY_AUDIONEXT", Urho3D::Key::KEY_AUDIONEXT },
    { "KEY_AUDIOPLAY", Urho3D::Key::KEY_AUDIOPLAY },
    { "KEY_AUDIOPREV", Urho3D::Key::KEY_AUDIOPREV },
    { "KEY_AUDIOSTOP", Urho3D::Key::KEY_AUDIOSTOP },
    { "KEY_BACKQUOTE", Urho3D::Key::KEY_BACKQUOTE },
    { "KEY_BACKSLASH", Urho3D::Key::KEY_BACKSLASH },
    { "KEY_BRIGHTNESSDOWN", Urho3D::Key::KEY_BRIGHTNESSDOWN },
    { "KEY_BRIGHTNESSUP", Urho3D::Key::KEY_BRIGHTNESSUP },
    { "KEY_CALCULATOR", Urho3D::Key::KEY_CALCULATOR },
    { "KEY_CANCEL", Urho3D::Key::KEY_CANCEL },
    { "KEY_CARET", Urho3D::Key::KEY_CARET },
    { "KEY_CLEAR", Urho3D::Key::KEY_CLEAR },
    { "KEY_CLEARAGAIN", Urho3D::Key::KEY_CLEARAGAIN },
    { "KEY_COLON", Urho3D::Key::KEY_COLON },
    { "KEY_COMMA", Urho3D::Key::KEY_COMMA },
    { "KEY_COMPUTER", Urho3D::Key::KEY_COMPUTER },
    { "KEY_COPY", Urho3D::Key::KEY_COPY },
    { "KEY_CRSEL", Urho3D::Key::KEY_CRSEL },
    { "KEY_CURRENCYSUBUNIT", Urho3D::Key::KEY_CURRENCYSUBUNIT },
    { "KEY_CURRENCYUNIT", Urho3D::Key::KEY_CURRENCYUNIT },
    { "KEY_CUT", Urho3D::Key::KEY_CUT },
    { "KEY_DECIMALSEPARATOR", Urho3D::Key::KEY_DECIMALSEPARATOR },
    { "KEY_DISPLAYSWITCH", Urho3D::Key::KEY_DISPLAYSWITCH },
    { "KEY_DOLLAR", Urho3D::Key::KEY_DOLLAR },
    { "KEY_EJECT", Urho3D::Key::KEY_EJECT },
    { "KEY_EQUALS", Urho3D::Key::KEY_EQUALS },
    { "KEY_EXCLAIM", Urho3D::Key::KEY_EXCLAIM },
    { "KEY_EXSEL", Urho3D::Key::KEY_EXSEL },
    { "KEY_FIND", Urho3D::Key::KEY_FIND },
    { "KEY_GREATER", Urho3D::Key::KEY_GREATER },
    { "KEY_HASH", Urho3D::Key::KEY_HASH },
    { "KEY_HELP", Urho3D::Key::KEY_HELP },
    { "KEY_KBDILLUMDOWN", Urho3D::Key::KEY_KBDILLUMDOWN },
    { "KEY_KBDILLUMTOGGLE", Urho3D::Key::KEY_KBDILLUMTOGGLE },
    { "KEY_KBDILLUMUP", Urho3D::Key::KEY_KBDILLUMUP },
    { "KEY_KP_00", Urho3D::Key::KEY_KP_00 },
    { "KEY_KP_000", Urho3D::Key::KEY_KP_000 },
    { "KEY_KP_A", Urho3D::Key::KEY_KP_A },
    { "KEY_KP_AMPERSAND", Urho3D::Key::KEY_KP_AMPERSAND },
    { "KEY_KP_AT", Urho3D::Key::KEY_KP_AT },
    { "KEY_KP_B", Urho3D::Key::KEY_KP_B },
    { "KEY_KP_BACKSPACE", Urho3D::Key::KEY_KP_BACKSPACE },
    { "KEY_KP_BINARY", Urho3D::Key::KEY_KP_BINARY },
    { "KEY_KP_C", Urho3D::Key::KEY_KP_C },
    { "KEY_KP_CLEAR", Urho3D::Key::KEY_KP_CLEAR },
    { "KEY_KP_CLEARENTRY", Urho3D::Key::KEY_KP_CLEARENTRY },
    { "KEY_KP_COLON", Urho3D::Key::KEY_KP_COLON },
    { "KEY_KP_COMMA", Urho3D::Key::KEY_KP_COMMA },
    { "KEY_KP_D", Urho3D::Key::KEY_KP_D },
    { "KEY_KP_DBLAMPERSAND", Urho3D::Key::KEY_KP_DBLAMPERSAND },
    { "KEY_KP_DBLVERTICALBAR", Urho3D::Key::KEY_KP_DBLVERTICALBAR },
    { "KEY_KP_DECIMAL", Urho3D::Key::KEY_KP_DECIMAL },
    { "KEY_KP_E", Urho3D::Key::KEY_KP_E },
    { "KEY_KP_EQUALS", Urho3D::Key::KEY_KP_EQUALS },
    { "KEY_KP_EQUALSAS400", Urho3D::Key::KEY_KP_EQUALSAS400 },
    { "KEY_KP_EXCLAM", Urho3D::Key::KEY_KP_EXCLAM },
    { "KEY_KP_F", Urho3D::Key::KEY_KP_F },
    { "KEY_KP_GREATER", Urho3D::Key::KEY_KP_GREATER },
    { "KEY_KP_HASH", Urho3D::Key::KEY_KP_HASH },
    { "KEY_KP_HEXADECIMAL", Urho3D::Key::KEY_KP_HEXADECIMAL },
    { "KEY_KP_LEFTBRACE", Urho3D::Key::KEY_KP_LEFTBRACE },
    { "KEY_KP_LEFTPAREN", Urho3D::Key::KEY_KP_LEFTPAREN },
    { "KEY_KP_LESS", Urho3D::Key::KEY_KP_LESS },
    { "KEY_KP_MEMADD", Urho3D::Key::KEY_KP_MEMADD },
    { "KEY_KP_MEMCLEAR", Urho3D::Key::KEY_KP_MEMCLEAR },
    { "KEY_KP_MEMDIVIDE", Urho3D::Key::KEY_KP_MEMDIVIDE },
    { "KEY_KP_MEMMULTIPLY", Urho3D::Key::KEY_KP_MEMMULTIPLY },
    { "KEY_KP_MEMRECALL", Urho3D::Key::KEY_KP_MEMRECALL },
    { "KEY_KP_MEMSTORE", Urho3D::Key::KEY_KP_MEMSTORE },
    { "KEY_KP_MEMSUBTRACT", Urho3D::Key::KEY_KP_MEMSUBTRACT },
    { "KEY_KP_OCTAL", Urho3D::Key::KEY_KP_OCTAL },
    { "KEY_KP_PERCENT", Urho3D::Key::KEY_KP_PERCENT },
    { "KEY_KP_PLUSMINUS", Urho3D::Key::KEY_KP_PLUSMINUS },
    { "KEY_KP_POWER", Urho3D::Key::KEY_KP_POWER },
    { "KEY_KP_RIGHTBRACE", Urho3D::Key::KEY_KP_RIGHTBRACE },
    { "KEY_KP_RIGHTPAREN", Urho3D::Key::KEY_KP_RIGHTPAREN },
    { "KEY_KP_SPACE", Urho3D::Key::KEY_KP_SPACE },
    { "KEY_KP_TAB", Urho3D::Key::KEY_KP_TAB },
    { "KEY_KP_VERTICALBAR", Urho3D::Key::KEY_KP_VERTICALBAR },
    { "KEY_KP_XOR", Urho3D::Key::KEY_KP_XOR },
    { "KEY_LEFTBRACKET", Urho3D::Key::KEY_LEFTBRACKET },
    { "KEY_LEFTPAREN", Urho3D::Key::KEY_LEFTPAREN },
    { "KEY_LESS", Urho3D::Key::KEY_LESS },
    { "KEY_MAIL", Urho3D::Key::KEY_MAIL },
    { "KEY_MEDIASELECT", Urho3D::Key::KEY_MEDIASELECT },
    { "KEY_MENU", Urho3D::Key::KEY_MENU },
    { "KEY_MINUS", Urho3D::Key::KEY_MINUS },
    { "KEY_MODE", Urho3D::Key::KEY_MODE },
    { "KEY_MUTE", Urho3D::Key::KEY_MUTE },
    { "KEY_OPER", Urho3D::Key::KEY_OPER },
    { "KEY_OUT", Urho3D::Key::KEY_OUT },
    { "KEY_PASTE", Urho3D::Key::KEY_PASTE },
    { "KEY_PERCENT", Urho3D::Key::KEY_PERCENT },
    { "KEY_PERIOD", Urho3D::Key::KEY_PERIOD },
    { "KEY_PLUS", Urho3D::Key::KEY_PLUS },
    { "KEY_POWER", Urho3D::Key::KEY_POWER },
    { "KEY_PRIOR", Urho3D::Key::KEY_PRIOR },
    { "KEY_QUESTION", Urho3D::Key::KEY_QUESTION },
    { "KEY_QUOTE", Urho3D::Key::KEY_QUOTE },
    { "KEY_QUOTEDBL", Urho3D::Key::KEY_QUOTEDBL },
    { "KEY_RIGHTBRACKET", Urho3D::Key::KEY_RIGHTBRACKET },
    { "KEY_RIGHTPAREN", Urho3D::Key::KEY_RIGHTPAREN },
    { "KEY_SEMICOLON", Urho3D::Key::KEY_SEMICOLON },
    { "KEY_SEPARATOR", Urho3D::Key::KEY_SEPARATOR },
    { "KEY_SLASH", Urho3D::Key::KEY_SLASH },
    { "KEY_SLEEP", Urho3D::Key::KEY_SLEEP },
    { "KEY_STOP", Urho3D::Key::KEY_STOP },
    { "KEY_SYSREQ", Urho3D::Key::KEY_SYSREQ },
    { "KEY_THOUSANDSSEPARATOR", Urho3D::Key::KEY_THOUSANDSSEPARATOR },
    { "KEY_UNDERSCORE", Urho3D::Key::KEY_UNDERSCORE },
    { "KEY_UNDO", Urho3D::Key::KEY_UNDO },
    { "KEY_VOLUMEDOWN", Urho3D::Key::KEY_VOLUMEDOWN },
    { "KEY_VOLUMEUP", Urho3D::Key::KEY_VOLUMEUP },
    { "KEY_WWW", Urho3D::Key::KEY_WWW } }
);
    lua["KEY_UNKNOWN"] = Urho3D::Key::KEY_UNKNOWN;
    lua["KEY_A"] = Urho3D::Key::KEY_A;
    lua["KEY_B"] = Urho3D::Key::KEY_B;
    lua["KEY_C"] = Urho3D::Key::KEY_C;
    lua["KEY_D"] = Urho3D::Key::KEY_D;
    lua["KEY_E"] = Urho3D::Key::KEY_E;
    lua["KEY_F"] = Urho3D::Key::KEY_F;
    lua["KEY_G"] = Urho3D::Key::KEY_G;
    lua["KEY_H"] = Urho3D::Key::KEY_H;
    lua["KEY_I"] = Urho3D::Key::KEY_I;
    lua["KEY_J"] = Urho3D::Key::KEY_J;
    lua["KEY_K"] = Urho3D::Key::KEY_K;
    lua["KEY_L"] = Urho3D::Key::KEY_L;
    lua["KEY_M"] = Urho3D::Key::KEY_M;
    lua["KEY_N"] = Urho3D::Key::KEY_N;
    lua["KEY_O"] = Urho3D::Key::KEY_O;
    lua["KEY_P"] = Urho3D::Key::KEY_P;
    lua["KEY_Q"] = Urho3D::Key::KEY_Q;
    lua["KEY_R"] = Urho3D::Key::KEY_R;
    lua["KEY_S"] = Urho3D::Key::KEY_S;
    lua["KEY_T"] = Urho3D::Key::KEY_T;
    lua["KEY_U"] = Urho3D::Key::KEY_U;
    lua["KEY_V"] = Urho3D::Key::KEY_V;
    lua["KEY_W"] = Urho3D::Key::KEY_W;
    lua["KEY_X"] = Urho3D::Key::KEY_X;
    lua["KEY_Y"] = Urho3D::Key::KEY_Y;
    lua["KEY_Z"] = Urho3D::Key::KEY_Z;
    lua["KEY_0"] = Urho3D::Key::KEY_0;
    lua["KEY_1"] = Urho3D::Key::KEY_1;
    lua["KEY_2"] = Urho3D::Key::KEY_2;
    lua["KEY_3"] = Urho3D::Key::KEY_3;
    lua["KEY_4"] = Urho3D::Key::KEY_4;
    lua["KEY_5"] = Urho3D::Key::KEY_5;
    lua["KEY_6"] = Urho3D::Key::KEY_6;
    lua["KEY_7"] = Urho3D::Key::KEY_7;
    lua["KEY_8"] = Urho3D::Key::KEY_8;
    lua["KEY_9"] = Urho3D::Key::KEY_9;
    lua["KEY_BACKSPACE"] = Urho3D::Key::KEY_BACKSPACE;
    lua["KEY_TAB"] = Urho3D::Key::KEY_TAB;
    lua["KEY_RETURN"] = Urho3D::Key::KEY_RETURN;
    lua["KEY_RETURN2"] = Urho3D::Key::KEY_RETURN2;
    lua["KEY_KP_ENTER"] = Urho3D::Key::KEY_KP_ENTER;
    lua["KEY_SHIFT"] = Urho3D::Key::KEY_SHIFT;
    lua["KEY_CTRL"] = Urho3D::Key::KEY_CTRL;
    lua["KEY_ALT"] = Urho3D::Key::KEY_ALT;
    lua["KEY_GUI"] = Urho3D::Key::KEY_GUI;
    lua["KEY_PAUSE"] = Urho3D::Key::KEY_PAUSE;
    lua["KEY_CAPSLOCK"] = Urho3D::Key::KEY_CAPSLOCK;
    lua["KEY_ESCAPE"] = Urho3D::Key::KEY_ESCAPE;
    lua["KEY_SPACE"] = Urho3D::Key::KEY_SPACE;
    lua["KEY_PAGEUP"] = Urho3D::Key::KEY_PAGEUP;
    lua["KEY_PAGEDOWN"] = Urho3D::Key::KEY_PAGEDOWN;
    lua["KEY_END"] = Urho3D::Key::KEY_END;
    lua["KEY_HOME"] = Urho3D::Key::KEY_HOME;
    lua["KEY_LEFT"] = Urho3D::Key::KEY_LEFT;
    lua["KEY_UP"] = Urho3D::Key::KEY_UP;
    lua["KEY_RIGHT"] = Urho3D::Key::KEY_RIGHT;
    lua["KEY_DOWN"] = Urho3D::Key::KEY_DOWN;
    lua["KEY_SELECT"] = Urho3D::Key::KEY_SELECT;
    lua["KEY_PRINTSCREEN"] = Urho3D::Key::KEY_PRINTSCREEN;
    lua["KEY_INSERT"] = Urho3D::Key::KEY_INSERT;
    lua["KEY_DELETE"] = Urho3D::Key::KEY_DELETE;
    lua["KEY_LGUI"] = Urho3D::Key::KEY_LGUI;
    lua["KEY_RGUI"] = Urho3D::Key::KEY_RGUI;
    lua["KEY_APPLICATION"] = Urho3D::Key::KEY_APPLICATION;
    lua["KEY_KP_0"] = Urho3D::Key::KEY_KP_0;
    lua["KEY_KP_1"] = Urho3D::Key::KEY_KP_1;
    lua["KEY_KP_2"] = Urho3D::Key::KEY_KP_2;
    lua["KEY_KP_3"] = Urho3D::Key::KEY_KP_3;
    lua["KEY_KP_4"] = Urho3D::Key::KEY_KP_4;
    lua["KEY_KP_5"] = Urho3D::Key::KEY_KP_5;
    lua["KEY_KP_6"] = Urho3D::Key::KEY_KP_6;
    lua["KEY_KP_7"] = Urho3D::Key::KEY_KP_7;
    lua["KEY_KP_8"] = Urho3D::Key::KEY_KP_8;
    lua["KEY_KP_9"] = Urho3D::Key::KEY_KP_9;
    lua["KEY_KP_MULTIPLY"] = Urho3D::Key::KEY_KP_MULTIPLY;
    lua["KEY_KP_PLUS"] = Urho3D::Key::KEY_KP_PLUS;
    lua["KEY_KP_MINUS"] = Urho3D::Key::KEY_KP_MINUS;
    lua["KEY_KP_PERIOD"] = Urho3D::Key::KEY_KP_PERIOD;
    lua["KEY_KP_DIVIDE"] = Urho3D::Key::KEY_KP_DIVIDE;
    lua["KEY_F1"] = Urho3D::Key::KEY_F1;
    lua["KEY_F2"] = Urho3D::Key::KEY_F2;
    lua["KEY_F3"] = Urho3D::Key::KEY_F3;
    lua["KEY_F4"] = Urho3D::Key::KEY_F4;
    lua["KEY_F5"] = Urho3D::Key::KEY_F5;
    lua["KEY_F6"] = Urho3D::Key::KEY_F6;
    lua["KEY_F7"] = Urho3D::Key::KEY_F7;
    lua["KEY_F8"] = Urho3D::Key::KEY_F8;
    lua["KEY_F9"] = Urho3D::Key::KEY_F9;
    lua["KEY_F10"] = Urho3D::Key::KEY_F10;
    lua["KEY_F11"] = Urho3D::Key::KEY_F11;
    lua["KEY_F12"] = Urho3D::Key::KEY_F12;
    lua["KEY_F13"] = Urho3D::Key::KEY_F13;
    lua["KEY_F14"] = Urho3D::Key::KEY_F14;
    lua["KEY_F15"] = Urho3D::Key::KEY_F15;
    lua["KEY_F16"] = Urho3D::Key::KEY_F16;
    lua["KEY_F17"] = Urho3D::Key::KEY_F17;
    lua["KEY_F18"] = Urho3D::Key::KEY_F18;
    lua["KEY_F19"] = Urho3D::Key::KEY_F19;
    lua["KEY_F20"] = Urho3D::Key::KEY_F20;
    lua["KEY_F21"] = Urho3D::Key::KEY_F21;
    lua["KEY_F22"] = Urho3D::Key::KEY_F22;
    lua["KEY_F23"] = Urho3D::Key::KEY_F23;
    lua["KEY_F24"] = Urho3D::Key::KEY_F24;
    lua["KEY_NUMLOCKCLEAR"] = Urho3D::Key::KEY_NUMLOCKCLEAR;
    lua["KEY_SCROLLLOCK"] = Urho3D::Key::KEY_SCROLLLOCK;
    lua["KEY_LSHIFT"] = Urho3D::Key::KEY_LSHIFT;
    lua["KEY_RSHIFT"] = Urho3D::Key::KEY_RSHIFT;
    lua["KEY_LCTRL"] = Urho3D::Key::KEY_LCTRL;
    lua["KEY_RCTRL"] = Urho3D::Key::KEY_RCTRL;
    lua["KEY_LALT"] = Urho3D::Key::KEY_LALT;
    lua["KEY_RALT"] = Urho3D::Key::KEY_RALT;
    lua["KEY_AC_BACK"] = Urho3D::Key::KEY_AC_BACK;
    lua["KEY_AC_BOOKMARKS"] = Urho3D::Key::KEY_AC_BOOKMARKS;
    lua["KEY_AC_FORWARD"] = Urho3D::Key::KEY_AC_FORWARD;
    lua["KEY_AC_HOME"] = Urho3D::Key::KEY_AC_HOME;
    lua["KEY_AC_REFRESH"] = Urho3D::Key::KEY_AC_REFRESH;
    lua["KEY_AC_SEARCH"] = Urho3D::Key::KEY_AC_SEARCH;
    lua["KEY_AC_STOP"] = Urho3D::Key::KEY_AC_STOP;
    lua["KEY_AGAIN"] = Urho3D::Key::KEY_AGAIN;
    lua["KEY_ALTERASE"] = Urho3D::Key::KEY_ALTERASE;
    lua["KEY_AMPERSAND"] = Urho3D::Key::KEY_AMPERSAND;
    lua["KEY_ASTERISK"] = Urho3D::Key::KEY_ASTERISK;
    lua["KEY_AT"] = Urho3D::Key::KEY_AT;
    lua["KEY_AUDIOMUTE"] = Urho3D::Key::KEY_AUDIOMUTE;
    lua["KEY_AUDIONEXT"] = Urho3D::Key::KEY_AUDIONEXT;
    lua["KEY_AUDIOPLAY"] = Urho3D::Key::KEY_AUDIOPLAY;
    lua["KEY_AUDIOPREV"] = Urho3D::Key::KEY_AUDIOPREV;
    lua["KEY_AUDIOSTOP"] = Urho3D::Key::KEY_AUDIOSTOP;
    lua["KEY_BACKQUOTE"] = Urho3D::Key::KEY_BACKQUOTE;
    lua["KEY_BACKSLASH"] = Urho3D::Key::KEY_BACKSLASH;
    lua["KEY_BRIGHTNESSDOWN"] = Urho3D::Key::KEY_BRIGHTNESSDOWN;
    lua["KEY_BRIGHTNESSUP"] = Urho3D::Key::KEY_BRIGHTNESSUP;
    lua["KEY_CALCULATOR"] = Urho3D::Key::KEY_CALCULATOR;
    lua["KEY_CANCEL"] = Urho3D::Key::KEY_CANCEL;
    lua["KEY_CARET"] = Urho3D::Key::KEY_CARET;
    lua["KEY_CLEAR"] = Urho3D::Key::KEY_CLEAR;
    lua["KEY_CLEARAGAIN"] = Urho3D::Key::KEY_CLEARAGAIN;
    lua["KEY_COLON"] = Urho3D::Key::KEY_COLON;
    lua["KEY_COMMA"] = Urho3D::Key::KEY_COMMA;
    lua["KEY_COMPUTER"] = Urho3D::Key::KEY_COMPUTER;
    lua["KEY_COPY"] = Urho3D::Key::KEY_COPY;
    lua["KEY_CRSEL"] = Urho3D::Key::KEY_CRSEL;
    lua["KEY_CURRENCYSUBUNIT"] = Urho3D::Key::KEY_CURRENCYSUBUNIT;
    lua["KEY_CURRENCYUNIT"] = Urho3D::Key::KEY_CURRENCYUNIT;
    lua["KEY_CUT"] = Urho3D::Key::KEY_CUT;
    lua["KEY_DECIMALSEPARATOR"] = Urho3D::Key::KEY_DECIMALSEPARATOR;
    lua["KEY_DISPLAYSWITCH"] = Urho3D::Key::KEY_DISPLAYSWITCH;
    lua["KEY_DOLLAR"] = Urho3D::Key::KEY_DOLLAR;
    lua["KEY_EJECT"] = Urho3D::Key::KEY_EJECT;
    lua["KEY_EQUALS"] = Urho3D::Key::KEY_EQUALS;
    lua["KEY_EXCLAIM"] = Urho3D::Key::KEY_EXCLAIM;
    lua["KEY_EXSEL"] = Urho3D::Key::KEY_EXSEL;
    lua["KEY_FIND"] = Urho3D::Key::KEY_FIND;
    lua["KEY_GREATER"] = Urho3D::Key::KEY_GREATER;
    lua["KEY_HASH"] = Urho3D::Key::KEY_HASH;
    lua["KEY_HELP"] = Urho3D::Key::KEY_HELP;
    lua["KEY_KBDILLUMDOWN"] = Urho3D::Key::KEY_KBDILLUMDOWN;
    lua["KEY_KBDILLUMTOGGLE"] = Urho3D::Key::KEY_KBDILLUMTOGGLE;
    lua["KEY_KBDILLUMUP"] = Urho3D::Key::KEY_KBDILLUMUP;
    lua["KEY_KP_00"] = Urho3D::Key::KEY_KP_00;
    lua["KEY_KP_000"] = Urho3D::Key::KEY_KP_000;
    lua["KEY_KP_A"] = Urho3D::Key::KEY_KP_A;
    lua["KEY_KP_AMPERSAND"] = Urho3D::Key::KEY_KP_AMPERSAND;
    lua["KEY_KP_AT"] = Urho3D::Key::KEY_KP_AT;
    lua["KEY_KP_B"] = Urho3D::Key::KEY_KP_B;
    lua["KEY_KP_BACKSPACE"] = Urho3D::Key::KEY_KP_BACKSPACE;
    lua["KEY_KP_BINARY"] = Urho3D::Key::KEY_KP_BINARY;
    lua["KEY_KP_C"] = Urho3D::Key::KEY_KP_C;
    lua["KEY_KP_CLEAR"] = Urho3D::Key::KEY_KP_CLEAR;
    lua["KEY_KP_CLEARENTRY"] = Urho3D::Key::KEY_KP_CLEARENTRY;
    lua["KEY_KP_COLON"] = Urho3D::Key::KEY_KP_COLON;
    lua["KEY_KP_COMMA"] = Urho3D::Key::KEY_KP_COMMA;
    lua["KEY_KP_D"] = Urho3D::Key::KEY_KP_D;
    lua["KEY_KP_DBLAMPERSAND"] = Urho3D::Key::KEY_KP_DBLAMPERSAND;
    lua["KEY_KP_DBLVERTICALBAR"] = Urho3D::Key::KEY_KP_DBLVERTICALBAR;
    lua["KEY_KP_DECIMAL"] = Urho3D::Key::KEY_KP_DECIMAL;
    lua["KEY_KP_E"] = Urho3D::Key::KEY_KP_E;
    lua["KEY_KP_EQUALS"] = Urho3D::Key::KEY_KP_EQUALS;
    lua["KEY_KP_EQUALSAS400"] = Urho3D::Key::KEY_KP_EQUALSAS400;
    lua["KEY_KP_EXCLAM"] = Urho3D::Key::KEY_KP_EXCLAM;
    lua["KEY_KP_F"] = Urho3D::Key::KEY_KP_F;
    lua["KEY_KP_GREATER"] = Urho3D::Key::KEY_KP_GREATER;
    lua["KEY_KP_HASH"] = Urho3D::Key::KEY_KP_HASH;
    lua["KEY_KP_HEXADECIMAL"] = Urho3D::Key::KEY_KP_HEXADECIMAL;
    lua["KEY_KP_LEFTBRACE"] = Urho3D::Key::KEY_KP_LEFTBRACE;
    lua["KEY_KP_LEFTPAREN"] = Urho3D::Key::KEY_KP_LEFTPAREN;
    lua["KEY_KP_LESS"] = Urho3D::Key::KEY_KP_LESS;
    lua["KEY_KP_MEMADD"] = Urho3D::Key::KEY_KP_MEMADD;
    lua["KEY_KP_MEMCLEAR"] = Urho3D::Key::KEY_KP_MEMCLEAR;
    lua["KEY_KP_MEMDIVIDE"] = Urho3D::Key::KEY_KP_MEMDIVIDE;
    lua["KEY_KP_MEMMULTIPLY"] = Urho3D::Key::KEY_KP_MEMMULTIPLY;
    lua["KEY_KP_MEMRECALL"] = Urho3D::Key::KEY_KP_MEMRECALL;
    lua["KEY_KP_MEMSTORE"] = Urho3D::Key::KEY_KP_MEMSTORE;
    lua["KEY_KP_MEMSUBTRACT"] = Urho3D::Key::KEY_KP_MEMSUBTRACT;
    lua["KEY_KP_OCTAL"] = Urho3D::Key::KEY_KP_OCTAL;
    lua["KEY_KP_PERCENT"] = Urho3D::Key::KEY_KP_PERCENT;
    lua["KEY_KP_PLUSMINUS"] = Urho3D::Key::KEY_KP_PLUSMINUS;
    lua["KEY_KP_POWER"] = Urho3D::Key::KEY_KP_POWER;
    lua["KEY_KP_RIGHTBRACE"] = Urho3D::Key::KEY_KP_RIGHTBRACE;
    lua["KEY_KP_RIGHTPAREN"] = Urho3D::Key::KEY_KP_RIGHTPAREN;
    lua["KEY_KP_SPACE"] = Urho3D::Key::KEY_KP_SPACE;
    lua["KEY_KP_TAB"] = Urho3D::Key::KEY_KP_TAB;
    lua["KEY_KP_VERTICALBAR"] = Urho3D::Key::KEY_KP_VERTICALBAR;
    lua["KEY_KP_XOR"] = Urho3D::Key::KEY_KP_XOR;
    lua["KEY_LEFTBRACKET"] = Urho3D::Key::KEY_LEFTBRACKET;
    lua["KEY_LEFTPAREN"] = Urho3D::Key::KEY_LEFTPAREN;
    lua["KEY_LESS"] = Urho3D::Key::KEY_LESS;
    lua["KEY_MAIL"] = Urho3D::Key::KEY_MAIL;
    lua["KEY_MEDIASELECT"] = Urho3D::Key::KEY_MEDIASELECT;
    lua["KEY_MENU"] = Urho3D::Key::KEY_MENU;
    lua["KEY_MINUS"] = Urho3D::Key::KEY_MINUS;
    lua["KEY_MODE"] = Urho3D::Key::KEY_MODE;
    lua["KEY_MUTE"] = Urho3D::Key::KEY_MUTE;
    lua["KEY_OPER"] = Urho3D::Key::KEY_OPER;
    lua["KEY_OUT"] = Urho3D::Key::KEY_OUT;
    lua["KEY_PASTE"] = Urho3D::Key::KEY_PASTE;
    lua["KEY_PERCENT"] = Urho3D::Key::KEY_PERCENT;
    lua["KEY_PERIOD"] = Urho3D::Key::KEY_PERIOD;
    lua["KEY_PLUS"] = Urho3D::Key::KEY_PLUS;
    lua["KEY_POWER"] = Urho3D::Key::KEY_POWER;
    lua["KEY_PRIOR"] = Urho3D::Key::KEY_PRIOR;
    lua["KEY_QUESTION"] = Urho3D::Key::KEY_QUESTION;
    lua["KEY_QUOTE"] = Urho3D::Key::KEY_QUOTE;
    lua["KEY_QUOTEDBL"] = Urho3D::Key::KEY_QUOTEDBL;
    lua["KEY_RIGHTBRACKET"] = Urho3D::Key::KEY_RIGHTBRACKET;
    lua["KEY_RIGHTPAREN"] = Urho3D::Key::KEY_RIGHTPAREN;
    lua["KEY_SEMICOLON"] = Urho3D::Key::KEY_SEMICOLON;
    lua["KEY_SEPARATOR"] = Urho3D::Key::KEY_SEPARATOR;
    lua["KEY_SLASH"] = Urho3D::Key::KEY_SLASH;
    lua["KEY_SLEEP"] = Urho3D::Key::KEY_SLEEP;
    lua["KEY_STOP"] = Urho3D::Key::KEY_STOP;
    lua["KEY_SYSREQ"] = Urho3D::Key::KEY_SYSREQ;
    lua["KEY_THOUSANDSSEPARATOR"] = Urho3D::Key::KEY_THOUSANDSSEPARATOR;
    lua["KEY_UNDERSCORE"] = Urho3D::Key::KEY_UNDERSCORE;
    lua["KEY_UNDO"] = Urho3D::Key::KEY_UNDO;
    lua["KEY_VOLUMEDOWN"] = Urho3D::Key::KEY_VOLUMEDOWN;
    lua["KEY_VOLUMEUP"] = Urho3D::Key::KEY_VOLUMEUP;
    lua["KEY_WWW"] = Urho3D::Key::KEY_WWW;
        
lua.new_enum<Urho3D::Scancode>( "Scancode", { 
    { "SCANCODE_UNKNOWN", Urho3D::Scancode::SCANCODE_UNKNOWN },
    { "SCANCODE_CTRL", Urho3D::Scancode::SCANCODE_CTRL },
    { "SCANCODE_SHIFT", Urho3D::Scancode::SCANCODE_SHIFT },
    { "SCANCODE_ALT", Urho3D::Scancode::SCANCODE_ALT },
    { "SCANCODE_GUI", Urho3D::Scancode::SCANCODE_GUI },
    { "SCANCODE_A", Urho3D::Scancode::SCANCODE_A },
    { "SCANCODE_B", Urho3D::Scancode::SCANCODE_B },
    { "SCANCODE_C", Urho3D::Scancode::SCANCODE_C },
    { "SCANCODE_D", Urho3D::Scancode::SCANCODE_D },
    { "SCANCODE_E", Urho3D::Scancode::SCANCODE_E },
    { "SCANCODE_F", Urho3D::Scancode::SCANCODE_F },
    { "SCANCODE_G", Urho3D::Scancode::SCANCODE_G },
    { "SCANCODE_H", Urho3D::Scancode::SCANCODE_H },
    { "SCANCODE_I", Urho3D::Scancode::SCANCODE_I },
    { "SCANCODE_J", Urho3D::Scancode::SCANCODE_J },
    { "SCANCODE_K", Urho3D::Scancode::SCANCODE_K },
    { "SCANCODE_L", Urho3D::Scancode::SCANCODE_L },
    { "SCANCODE_M", Urho3D::Scancode::SCANCODE_M },
    { "SCANCODE_N", Urho3D::Scancode::SCANCODE_N },
    { "SCANCODE_O", Urho3D::Scancode::SCANCODE_O },
    { "SCANCODE_P", Urho3D::Scancode::SCANCODE_P },
    { "SCANCODE_Q", Urho3D::Scancode::SCANCODE_Q },
    { "SCANCODE_R", Urho3D::Scancode::SCANCODE_R },
    { "SCANCODE_S", Urho3D::Scancode::SCANCODE_S },
    { "SCANCODE_T", Urho3D::Scancode::SCANCODE_T },
    { "SCANCODE_U", Urho3D::Scancode::SCANCODE_U },
    { "SCANCODE_V", Urho3D::Scancode::SCANCODE_V },
    { "SCANCODE_W", Urho3D::Scancode::SCANCODE_W },
    { "SCANCODE_X", Urho3D::Scancode::SCANCODE_X },
    { "SCANCODE_Y", Urho3D::Scancode::SCANCODE_Y },
    { "SCANCODE_Z", Urho3D::Scancode::SCANCODE_Z },
    { "SCANCODE_1", Urho3D::Scancode::SCANCODE_1 },
    { "SCANCODE_2", Urho3D::Scancode::SCANCODE_2 },
    { "SCANCODE_3", Urho3D::Scancode::SCANCODE_3 },
    { "SCANCODE_4", Urho3D::Scancode::SCANCODE_4 },
    { "SCANCODE_5", Urho3D::Scancode::SCANCODE_5 },
    { "SCANCODE_6", Urho3D::Scancode::SCANCODE_6 },
    { "SCANCODE_7", Urho3D::Scancode::SCANCODE_7 },
    { "SCANCODE_8", Urho3D::Scancode::SCANCODE_8 },
    { "SCANCODE_9", Urho3D::Scancode::SCANCODE_9 },
    { "SCANCODE_0", Urho3D::Scancode::SCANCODE_0 },
    { "SCANCODE_RETURN", Urho3D::Scancode::SCANCODE_RETURN },
    { "SCANCODE_ESCAPE", Urho3D::Scancode::SCANCODE_ESCAPE },
    { "SCANCODE_BACKSPACE", Urho3D::Scancode::SCANCODE_BACKSPACE },
    { "SCANCODE_TAB", Urho3D::Scancode::SCANCODE_TAB },
    { "SCANCODE_SPACE", Urho3D::Scancode::SCANCODE_SPACE },
    { "SCANCODE_MINUS", Urho3D::Scancode::SCANCODE_MINUS },
    { "SCANCODE_EQUALS", Urho3D::Scancode::SCANCODE_EQUALS },
    { "SCANCODE_LEFTBRACKET", Urho3D::Scancode::SCANCODE_LEFTBRACKET },
    { "SCANCODE_RIGHTBRACKET", Urho3D::Scancode::SCANCODE_RIGHTBRACKET },
    { "SCANCODE_BACKSLASH", Urho3D::Scancode::SCANCODE_BACKSLASH },
    { "SCANCODE_NONUSHASH", Urho3D::Scancode::SCANCODE_NONUSHASH },
    { "SCANCODE_SEMICOLON", Urho3D::Scancode::SCANCODE_SEMICOLON },
    { "SCANCODE_APOSTROPHE", Urho3D::Scancode::SCANCODE_APOSTROPHE },
    { "SCANCODE_GRAVE", Urho3D::Scancode::SCANCODE_GRAVE },
    { "SCANCODE_COMMA", Urho3D::Scancode::SCANCODE_COMMA },
    { "SCANCODE_PERIOD", Urho3D::Scancode::SCANCODE_PERIOD },
    { "SCANCODE_SLASH", Urho3D::Scancode::SCANCODE_SLASH },
    { "SCANCODE_CAPSLOCK", Urho3D::Scancode::SCANCODE_CAPSLOCK },
    { "SCANCODE_F1", Urho3D::Scancode::SCANCODE_F1 },
    { "SCANCODE_F2", Urho3D::Scancode::SCANCODE_F2 },
    { "SCANCODE_F3", Urho3D::Scancode::SCANCODE_F3 },
    { "SCANCODE_F4", Urho3D::Scancode::SCANCODE_F4 },
    { "SCANCODE_F5", Urho3D::Scancode::SCANCODE_F5 },
    { "SCANCODE_F6", Urho3D::Scancode::SCANCODE_F6 },
    { "SCANCODE_F7", Urho3D::Scancode::SCANCODE_F7 },
    { "SCANCODE_F8", Urho3D::Scancode::SCANCODE_F8 },
    { "SCANCODE_F9", Urho3D::Scancode::SCANCODE_F9 },
    { "SCANCODE_F10", Urho3D::Scancode::SCANCODE_F10 },
    { "SCANCODE_F11", Urho3D::Scancode::SCANCODE_F11 },
    { "SCANCODE_F12", Urho3D::Scancode::SCANCODE_F12 },
    { "SCANCODE_PRINTSCREEN", Urho3D::Scancode::SCANCODE_PRINTSCREEN },
    { "SCANCODE_SCROLLLOCK", Urho3D::Scancode::SCANCODE_SCROLLLOCK },
    { "SCANCODE_PAUSE", Urho3D::Scancode::SCANCODE_PAUSE },
    { "SCANCODE_INSERT", Urho3D::Scancode::SCANCODE_INSERT },
    { "SCANCODE_HOME", Urho3D::Scancode::SCANCODE_HOME },
    { "SCANCODE_PAGEUP", Urho3D::Scancode::SCANCODE_PAGEUP },
    { "SCANCODE_DELETE", Urho3D::Scancode::SCANCODE_DELETE },
    { "SCANCODE_END", Urho3D::Scancode::SCANCODE_END },
    { "SCANCODE_PAGEDOWN", Urho3D::Scancode::SCANCODE_PAGEDOWN },
    { "SCANCODE_RIGHT", Urho3D::Scancode::SCANCODE_RIGHT },
    { "SCANCODE_LEFT", Urho3D::Scancode::SCANCODE_LEFT },
    { "SCANCODE_DOWN", Urho3D::Scancode::SCANCODE_DOWN },
    { "SCANCODE_UP", Urho3D::Scancode::SCANCODE_UP },
    { "SCANCODE_NUMLOCKCLEAR", Urho3D::Scancode::SCANCODE_NUMLOCKCLEAR },
    { "SCANCODE_KP_DIVIDE", Urho3D::Scancode::SCANCODE_KP_DIVIDE },
    { "SCANCODE_KP_MULTIPLY", Urho3D::Scancode::SCANCODE_KP_MULTIPLY },
    { "SCANCODE_KP_MINUS", Urho3D::Scancode::SCANCODE_KP_MINUS },
    { "SCANCODE_KP_PLUS", Urho3D::Scancode::SCANCODE_KP_PLUS },
    { "SCANCODE_KP_ENTER", Urho3D::Scancode::SCANCODE_KP_ENTER },
    { "SCANCODE_KP_1", Urho3D::Scancode::SCANCODE_KP_1 },
    { "SCANCODE_KP_2", Urho3D::Scancode::SCANCODE_KP_2 },
    { "SCANCODE_KP_3", Urho3D::Scancode::SCANCODE_KP_3 },
    { "SCANCODE_KP_4", Urho3D::Scancode::SCANCODE_KP_4 },
    { "SCANCODE_KP_5", Urho3D::Scancode::SCANCODE_KP_5 },
    { "SCANCODE_KP_6", Urho3D::Scancode::SCANCODE_KP_6 },
    { "SCANCODE_KP_7", Urho3D::Scancode::SCANCODE_KP_7 },
    { "SCANCODE_KP_8", Urho3D::Scancode::SCANCODE_KP_8 },
    { "SCANCODE_KP_9", Urho3D::Scancode::SCANCODE_KP_9 },
    { "SCANCODE_KP_0", Urho3D::Scancode::SCANCODE_KP_0 },
    { "SCANCODE_KP_PERIOD", Urho3D::Scancode::SCANCODE_KP_PERIOD },
    { "SCANCODE_NONUSBACKSLASH", Urho3D::Scancode::SCANCODE_NONUSBACKSLASH },
    { "SCANCODE_APPLICATION", Urho3D::Scancode::SCANCODE_APPLICATION },
    { "SCANCODE_POWER", Urho3D::Scancode::SCANCODE_POWER },
    { "SCANCODE_KP_EQUALS", Urho3D::Scancode::SCANCODE_KP_EQUALS },
    { "SCANCODE_F13", Urho3D::Scancode::SCANCODE_F13 },
    { "SCANCODE_F14", Urho3D::Scancode::SCANCODE_F14 },
    { "SCANCODE_F15", Urho3D::Scancode::SCANCODE_F15 },
    { "SCANCODE_F16", Urho3D::Scancode::SCANCODE_F16 },
    { "SCANCODE_F17", Urho3D::Scancode::SCANCODE_F17 },
    { "SCANCODE_F18", Urho3D::Scancode::SCANCODE_F18 },
    { "SCANCODE_F19", Urho3D::Scancode::SCANCODE_F19 },
    { "SCANCODE_F20", Urho3D::Scancode::SCANCODE_F20 },
    { "SCANCODE_F21", Urho3D::Scancode::SCANCODE_F21 },
    { "SCANCODE_F22", Urho3D::Scancode::SCANCODE_F22 },
    { "SCANCODE_F23", Urho3D::Scancode::SCANCODE_F23 },
    { "SCANCODE_F24", Urho3D::Scancode::SCANCODE_F24 },
    { "SCANCODE_EXECUTE", Urho3D::Scancode::SCANCODE_EXECUTE },
    { "SCANCODE_HELP", Urho3D::Scancode::SCANCODE_HELP },
    { "SCANCODE_MENU", Urho3D::Scancode::SCANCODE_MENU },
    { "SCANCODE_SELECT", Urho3D::Scancode::SCANCODE_SELECT },
    { "SCANCODE_STOP", Urho3D::Scancode::SCANCODE_STOP },
    { "SCANCODE_AGAIN", Urho3D::Scancode::SCANCODE_AGAIN },
    { "SCANCODE_UNDO", Urho3D::Scancode::SCANCODE_UNDO },
    { "SCANCODE_CUT", Urho3D::Scancode::SCANCODE_CUT },
    { "SCANCODE_COPY", Urho3D::Scancode::SCANCODE_COPY },
    { "SCANCODE_PASTE", Urho3D::Scancode::SCANCODE_PASTE },
    { "SCANCODE_FIND", Urho3D::Scancode::SCANCODE_FIND },
    { "SCANCODE_MUTE", Urho3D::Scancode::SCANCODE_MUTE },
    { "SCANCODE_VOLUMEUP", Urho3D::Scancode::SCANCODE_VOLUMEUP },
    { "SCANCODE_VOLUMEDOWN", Urho3D::Scancode::SCANCODE_VOLUMEDOWN },
    { "SCANCODE_KP_COMMA", Urho3D::Scancode::SCANCODE_KP_COMMA },
    { "SCANCODE_KP_EQUALSAS400", Urho3D::Scancode::SCANCODE_KP_EQUALSAS400 },
    { "SCANCODE_INTERNATIONAL1", Urho3D::Scancode::SCANCODE_INTERNATIONAL1 },
    { "SCANCODE_INTERNATIONAL2", Urho3D::Scancode::SCANCODE_INTERNATIONAL2 },
    { "SCANCODE_INTERNATIONAL3", Urho3D::Scancode::SCANCODE_INTERNATIONAL3 },
    { "SCANCODE_INTERNATIONAL4", Urho3D::Scancode::SCANCODE_INTERNATIONAL4 },
    { "SCANCODE_INTERNATIONAL5", Urho3D::Scancode::SCANCODE_INTERNATIONAL5 },
    { "SCANCODE_INTERNATIONAL6", Urho3D::Scancode::SCANCODE_INTERNATIONAL6 },
    { "SCANCODE_INTERNATIONAL7", Urho3D::Scancode::SCANCODE_INTERNATIONAL7 },
    { "SCANCODE_INTERNATIONAL8", Urho3D::Scancode::SCANCODE_INTERNATIONAL8 },
    { "SCANCODE_INTERNATIONAL9", Urho3D::Scancode::SCANCODE_INTERNATIONAL9 },
    { "SCANCODE_LANG1", Urho3D::Scancode::SCANCODE_LANG1 },
    { "SCANCODE_LANG2", Urho3D::Scancode::SCANCODE_LANG2 },
    { "SCANCODE_LANG3", Urho3D::Scancode::SCANCODE_LANG3 },
    { "SCANCODE_LANG4", Urho3D::Scancode::SCANCODE_LANG4 },
    { "SCANCODE_LANG5", Urho3D::Scancode::SCANCODE_LANG5 },
    { "SCANCODE_LANG6", Urho3D::Scancode::SCANCODE_LANG6 },
    { "SCANCODE_LANG7", Urho3D::Scancode::SCANCODE_LANG7 },
    { "SCANCODE_LANG8", Urho3D::Scancode::SCANCODE_LANG8 },
    { "SCANCODE_LANG9", Urho3D::Scancode::SCANCODE_LANG9 },
    { "SCANCODE_ALTERASE", Urho3D::Scancode::SCANCODE_ALTERASE },
    { "SCANCODE_SYSREQ", Urho3D::Scancode::SCANCODE_SYSREQ },
    { "SCANCODE_CANCEL", Urho3D::Scancode::SCANCODE_CANCEL },
    { "SCANCODE_CLEAR", Urho3D::Scancode::SCANCODE_CLEAR },
    { "SCANCODE_PRIOR", Urho3D::Scancode::SCANCODE_PRIOR },
    { "SCANCODE_RETURN2", Urho3D::Scancode::SCANCODE_RETURN2 },
    { "SCANCODE_SEPARATOR", Urho3D::Scancode::SCANCODE_SEPARATOR },
    { "SCANCODE_OUT", Urho3D::Scancode::SCANCODE_OUT },
    { "SCANCODE_OPER", Urho3D::Scancode::SCANCODE_OPER },
    { "SCANCODE_CLEARAGAIN", Urho3D::Scancode::SCANCODE_CLEARAGAIN },
    { "SCANCODE_CRSEL", Urho3D::Scancode::SCANCODE_CRSEL },
    { "SCANCODE_EXSEL", Urho3D::Scancode::SCANCODE_EXSEL },
    { "SCANCODE_KP_00", Urho3D::Scancode::SCANCODE_KP_00 },
    { "SCANCODE_KP_000", Urho3D::Scancode::SCANCODE_KP_000 },
    { "SCANCODE_THOUSANDSSEPARATOR", Urho3D::Scancode::SCANCODE_THOUSANDSSEPARATOR },
    { "SCANCODE_DECIMALSEPARATOR", Urho3D::Scancode::SCANCODE_DECIMALSEPARATOR },
    { "SCANCODE_CURRENCYUNIT", Urho3D::Scancode::SCANCODE_CURRENCYUNIT },
    { "SCANCODE_CURRENCYSUBUNIT", Urho3D::Scancode::SCANCODE_CURRENCYSUBUNIT },
    { "SCANCODE_KP_LEFTPAREN", Urho3D::Scancode::SCANCODE_KP_LEFTPAREN },
    { "SCANCODE_KP_RIGHTPAREN", Urho3D::Scancode::SCANCODE_KP_RIGHTPAREN },
    { "SCANCODE_KP_LEFTBRACE", Urho3D::Scancode::SCANCODE_KP_LEFTBRACE },
    { "SCANCODE_KP_RIGHTBRACE", Urho3D::Scancode::SCANCODE_KP_RIGHTBRACE },
    { "SCANCODE_KP_TAB", Urho3D::Scancode::SCANCODE_KP_TAB },
    { "SCANCODE_KP_BACKSPACE", Urho3D::Scancode::SCANCODE_KP_BACKSPACE },
    { "SCANCODE_KP_A", Urho3D::Scancode::SCANCODE_KP_A },
    { "SCANCODE_KP_B", Urho3D::Scancode::SCANCODE_KP_B },
    { "SCANCODE_KP_C", Urho3D::Scancode::SCANCODE_KP_C },
    { "SCANCODE_KP_D", Urho3D::Scancode::SCANCODE_KP_D },
    { "SCANCODE_KP_E", Urho3D::Scancode::SCANCODE_KP_E },
    { "SCANCODE_KP_F", Urho3D::Scancode::SCANCODE_KP_F },
    { "SCANCODE_KP_XOR", Urho3D::Scancode::SCANCODE_KP_XOR },
    { "SCANCODE_KP_POWER", Urho3D::Scancode::SCANCODE_KP_POWER },
    { "SCANCODE_KP_PERCENT", Urho3D::Scancode::SCANCODE_KP_PERCENT },
    { "SCANCODE_KP_LESS", Urho3D::Scancode::SCANCODE_KP_LESS },
    { "SCANCODE_KP_GREATER", Urho3D::Scancode::SCANCODE_KP_GREATER },
    { "SCANCODE_KP_AMPERSAND", Urho3D::Scancode::SCANCODE_KP_AMPERSAND },
    { "SCANCODE_KP_DBLAMPERSAND", Urho3D::Scancode::SCANCODE_KP_DBLAMPERSAND },
    { "SCANCODE_KP_VERTICALBAR", Urho3D::Scancode::SCANCODE_KP_VERTICALBAR },
    { "SCANCODE_KP_DBLVERTICALBAR", Urho3D::Scancode::SCANCODE_KP_DBLVERTICALBAR },
    { "SCANCODE_KP_COLON", Urho3D::Scancode::SCANCODE_KP_COLON },
    { "SCANCODE_KP_HASH", Urho3D::Scancode::SCANCODE_KP_HASH },
    { "SCANCODE_KP_SPACE", Urho3D::Scancode::SCANCODE_KP_SPACE },
    { "SCANCODE_KP_AT", Urho3D::Scancode::SCANCODE_KP_AT },
    { "SCANCODE_KP_EXCLAM", Urho3D::Scancode::SCANCODE_KP_EXCLAM },
    { "SCANCODE_KP_MEMSTORE", Urho3D::Scancode::SCANCODE_KP_MEMSTORE },
    { "SCANCODE_KP_MEMRECALL", Urho3D::Scancode::SCANCODE_KP_MEMRECALL },
    { "SCANCODE_KP_MEMCLEAR", Urho3D::Scancode::SCANCODE_KP_MEMCLEAR },
    { "SCANCODE_KP_MEMADD", Urho3D::Scancode::SCANCODE_KP_MEMADD },
    { "SCANCODE_KP_MEMSUBTRACT", Urho3D::Scancode::SCANCODE_KP_MEMSUBTRACT },
    { "SCANCODE_KP_MEMMULTIPLY", Urho3D::Scancode::SCANCODE_KP_MEMMULTIPLY },
    { "SCANCODE_KP_MEMDIVIDE", Urho3D::Scancode::SCANCODE_KP_MEMDIVIDE },
    { "SCANCODE_KP_PLUSMINUS", Urho3D::Scancode::SCANCODE_KP_PLUSMINUS },
    { "SCANCODE_KP_CLEAR", Urho3D::Scancode::SCANCODE_KP_CLEAR },
    { "SCANCODE_KP_CLEARENTRY", Urho3D::Scancode::SCANCODE_KP_CLEARENTRY },
    { "SCANCODE_KP_BINARY", Urho3D::Scancode::SCANCODE_KP_BINARY },
    { "SCANCODE_KP_OCTAL", Urho3D::Scancode::SCANCODE_KP_OCTAL },
    { "SCANCODE_KP_DECIMAL", Urho3D::Scancode::SCANCODE_KP_DECIMAL },
    { "SCANCODE_KP_HEXADECIMAL", Urho3D::Scancode::SCANCODE_KP_HEXADECIMAL },
    { "SCANCODE_LCTRL", Urho3D::Scancode::SCANCODE_LCTRL },
    { "SCANCODE_LSHIFT", Urho3D::Scancode::SCANCODE_LSHIFT },
    { "SCANCODE_LALT", Urho3D::Scancode::SCANCODE_LALT },
    { "SCANCODE_LGUI", Urho3D::Scancode::SCANCODE_LGUI },
    { "SCANCODE_RCTRL", Urho3D::Scancode::SCANCODE_RCTRL },
    { "SCANCODE_RSHIFT", Urho3D::Scancode::SCANCODE_RSHIFT },
    { "SCANCODE_RALT", Urho3D::Scancode::SCANCODE_RALT },
    { "SCANCODE_RGUI", Urho3D::Scancode::SCANCODE_RGUI },
    { "SCANCODE_MODE", Urho3D::Scancode::SCANCODE_MODE },
    { "SCANCODE_AUDIONEXT", Urho3D::Scancode::SCANCODE_AUDIONEXT },
    { "SCANCODE_AUDIOPREV", Urho3D::Scancode::SCANCODE_AUDIOPREV },
    { "SCANCODE_AUDIOSTOP", Urho3D::Scancode::SCANCODE_AUDIOSTOP },
    { "SCANCODE_AUDIOPLAY", Urho3D::Scancode::SCANCODE_AUDIOPLAY },
    { "SCANCODE_AUDIOMUTE", Urho3D::Scancode::SCANCODE_AUDIOMUTE },
    { "SCANCODE_MEDIASELECT", Urho3D::Scancode::SCANCODE_MEDIASELECT },
    { "SCANCODE_WWW", Urho3D::Scancode::SCANCODE_WWW },
    { "SCANCODE_MAIL", Urho3D::Scancode::SCANCODE_MAIL },
    { "SCANCODE_CALCULATOR", Urho3D::Scancode::SCANCODE_CALCULATOR },
    { "SCANCODE_COMPUTER", Urho3D::Scancode::SCANCODE_COMPUTER },
    { "SCANCODE_AC_SEARCH", Urho3D::Scancode::SCANCODE_AC_SEARCH },
    { "SCANCODE_AC_HOME", Urho3D::Scancode::SCANCODE_AC_HOME },
    { "SCANCODE_AC_BACK", Urho3D::Scancode::SCANCODE_AC_BACK },
    { "SCANCODE_AC_FORWARD", Urho3D::Scancode::SCANCODE_AC_FORWARD },
    { "SCANCODE_AC_STOP", Urho3D::Scancode::SCANCODE_AC_STOP },
    { "SCANCODE_AC_REFRESH", Urho3D::Scancode::SCANCODE_AC_REFRESH },
    { "SCANCODE_AC_BOOKMARKS", Urho3D::Scancode::SCANCODE_AC_BOOKMARKS },
    { "SCANCODE_BRIGHTNESSDOWN", Urho3D::Scancode::SCANCODE_BRIGHTNESSDOWN },
    { "SCANCODE_BRIGHTNESSUP", Urho3D::Scancode::SCANCODE_BRIGHTNESSUP },
    { "SCANCODE_DISPLAYSWITCH", Urho3D::Scancode::SCANCODE_DISPLAYSWITCH },
    { "SCANCODE_KBDILLUMTOGGLE", Urho3D::Scancode::SCANCODE_KBDILLUMTOGGLE },
    { "SCANCODE_KBDILLUMDOWN", Urho3D::Scancode::SCANCODE_KBDILLUMDOWN },
    { "SCANCODE_KBDILLUMUP", Urho3D::Scancode::SCANCODE_KBDILLUMUP },
    { "SCANCODE_EJECT", Urho3D::Scancode::SCANCODE_EJECT },
    { "SCANCODE_SLEEP", Urho3D::Scancode::SCANCODE_SLEEP },
    { "SCANCODE_APP1", Urho3D::Scancode::SCANCODE_APP1 },
    { "SCANCODE_APP2", Urho3D::Scancode::SCANCODE_APP2 } }
);
    lua["SCANCODE_UNKNOWN"] = Urho3D::Scancode::SCANCODE_UNKNOWN;
    lua["SCANCODE_CTRL"] = Urho3D::Scancode::SCANCODE_CTRL;
    lua["SCANCODE_SHIFT"] = Urho3D::Scancode::SCANCODE_SHIFT;
    lua["SCANCODE_ALT"] = Urho3D::Scancode::SCANCODE_ALT;
    lua["SCANCODE_GUI"] = Urho3D::Scancode::SCANCODE_GUI;
    lua["SCANCODE_A"] = Urho3D::Scancode::SCANCODE_A;
    lua["SCANCODE_B"] = Urho3D::Scancode::SCANCODE_B;
    lua["SCANCODE_C"] = Urho3D::Scancode::SCANCODE_C;
    lua["SCANCODE_D"] = Urho3D::Scancode::SCANCODE_D;
    lua["SCANCODE_E"] = Urho3D::Scancode::SCANCODE_E;
    lua["SCANCODE_F"] = Urho3D::Scancode::SCANCODE_F;
    lua["SCANCODE_G"] = Urho3D::Scancode::SCANCODE_G;
    lua["SCANCODE_H"] = Urho3D::Scancode::SCANCODE_H;
    lua["SCANCODE_I"] = Urho3D::Scancode::SCANCODE_I;
    lua["SCANCODE_J"] = Urho3D::Scancode::SCANCODE_J;
    lua["SCANCODE_K"] = Urho3D::Scancode::SCANCODE_K;
    lua["SCANCODE_L"] = Urho3D::Scancode::SCANCODE_L;
    lua["SCANCODE_M"] = Urho3D::Scancode::SCANCODE_M;
    lua["SCANCODE_N"] = Urho3D::Scancode::SCANCODE_N;
    lua["SCANCODE_O"] = Urho3D::Scancode::SCANCODE_O;
    lua["SCANCODE_P"] = Urho3D::Scancode::SCANCODE_P;
    lua["SCANCODE_Q"] = Urho3D::Scancode::SCANCODE_Q;
    lua["SCANCODE_R"] = Urho3D::Scancode::SCANCODE_R;
    lua["SCANCODE_S"] = Urho3D::Scancode::SCANCODE_S;
    lua["SCANCODE_T"] = Urho3D::Scancode::SCANCODE_T;
    lua["SCANCODE_U"] = Urho3D::Scancode::SCANCODE_U;
    lua["SCANCODE_V"] = Urho3D::Scancode::SCANCODE_V;
    lua["SCANCODE_W"] = Urho3D::Scancode::SCANCODE_W;
    lua["SCANCODE_X"] = Urho3D::Scancode::SCANCODE_X;
    lua["SCANCODE_Y"] = Urho3D::Scancode::SCANCODE_Y;
    lua["SCANCODE_Z"] = Urho3D::Scancode::SCANCODE_Z;
    lua["SCANCODE_1"] = Urho3D::Scancode::SCANCODE_1;
    lua["SCANCODE_2"] = Urho3D::Scancode::SCANCODE_2;
    lua["SCANCODE_3"] = Urho3D::Scancode::SCANCODE_3;
    lua["SCANCODE_4"] = Urho3D::Scancode::SCANCODE_4;
    lua["SCANCODE_5"] = Urho3D::Scancode::SCANCODE_5;
    lua["SCANCODE_6"] = Urho3D::Scancode::SCANCODE_6;
    lua["SCANCODE_7"] = Urho3D::Scancode::SCANCODE_7;
    lua["SCANCODE_8"] = Urho3D::Scancode::SCANCODE_8;
    lua["SCANCODE_9"] = Urho3D::Scancode::SCANCODE_9;
    lua["SCANCODE_0"] = Urho3D::Scancode::SCANCODE_0;
    lua["SCANCODE_RETURN"] = Urho3D::Scancode::SCANCODE_RETURN;
    lua["SCANCODE_ESCAPE"] = Urho3D::Scancode::SCANCODE_ESCAPE;
    lua["SCANCODE_BACKSPACE"] = Urho3D::Scancode::SCANCODE_BACKSPACE;
    lua["SCANCODE_TAB"] = Urho3D::Scancode::SCANCODE_TAB;
    lua["SCANCODE_SPACE"] = Urho3D::Scancode::SCANCODE_SPACE;
    lua["SCANCODE_MINUS"] = Urho3D::Scancode::SCANCODE_MINUS;
    lua["SCANCODE_EQUALS"] = Urho3D::Scancode::SCANCODE_EQUALS;
    lua["SCANCODE_LEFTBRACKET"] = Urho3D::Scancode::SCANCODE_LEFTBRACKET;
    lua["SCANCODE_RIGHTBRACKET"] = Urho3D::Scancode::SCANCODE_RIGHTBRACKET;
    lua["SCANCODE_BACKSLASH"] = Urho3D::Scancode::SCANCODE_BACKSLASH;
    lua["SCANCODE_NONUSHASH"] = Urho3D::Scancode::SCANCODE_NONUSHASH;
    lua["SCANCODE_SEMICOLON"] = Urho3D::Scancode::SCANCODE_SEMICOLON;
    lua["SCANCODE_APOSTROPHE"] = Urho3D::Scancode::SCANCODE_APOSTROPHE;
    lua["SCANCODE_GRAVE"] = Urho3D::Scancode::SCANCODE_GRAVE;
    lua["SCANCODE_COMMA"] = Urho3D::Scancode::SCANCODE_COMMA;
    lua["SCANCODE_PERIOD"] = Urho3D::Scancode::SCANCODE_PERIOD;
    lua["SCANCODE_SLASH"] = Urho3D::Scancode::SCANCODE_SLASH;
    lua["SCANCODE_CAPSLOCK"] = Urho3D::Scancode::SCANCODE_CAPSLOCK;
    lua["SCANCODE_F1"] = Urho3D::Scancode::SCANCODE_F1;
    lua["SCANCODE_F2"] = Urho3D::Scancode::SCANCODE_F2;
    lua["SCANCODE_F3"] = Urho3D::Scancode::SCANCODE_F3;
    lua["SCANCODE_F4"] = Urho3D::Scancode::SCANCODE_F4;
    lua["SCANCODE_F5"] = Urho3D::Scancode::SCANCODE_F5;
    lua["SCANCODE_F6"] = Urho3D::Scancode::SCANCODE_F6;
    lua["SCANCODE_F7"] = Urho3D::Scancode::SCANCODE_F7;
    lua["SCANCODE_F8"] = Urho3D::Scancode::SCANCODE_F8;
    lua["SCANCODE_F9"] = Urho3D::Scancode::SCANCODE_F9;
    lua["SCANCODE_F10"] = Urho3D::Scancode::SCANCODE_F10;
    lua["SCANCODE_F11"] = Urho3D::Scancode::SCANCODE_F11;
    lua["SCANCODE_F12"] = Urho3D::Scancode::SCANCODE_F12;
    lua["SCANCODE_PRINTSCREEN"] = Urho3D::Scancode::SCANCODE_PRINTSCREEN;
    lua["SCANCODE_SCROLLLOCK"] = Urho3D::Scancode::SCANCODE_SCROLLLOCK;
    lua["SCANCODE_PAUSE"] = Urho3D::Scancode::SCANCODE_PAUSE;
    lua["SCANCODE_INSERT"] = Urho3D::Scancode::SCANCODE_INSERT;
    lua["SCANCODE_HOME"] = Urho3D::Scancode::SCANCODE_HOME;
    lua["SCANCODE_PAGEUP"] = Urho3D::Scancode::SCANCODE_PAGEUP;
    lua["SCANCODE_DELETE"] = Urho3D::Scancode::SCANCODE_DELETE;
    lua["SCANCODE_END"] = Urho3D::Scancode::SCANCODE_END;
    lua["SCANCODE_PAGEDOWN"] = Urho3D::Scancode::SCANCODE_PAGEDOWN;
    lua["SCANCODE_RIGHT"] = Urho3D::Scancode::SCANCODE_RIGHT;
    lua["SCANCODE_LEFT"] = Urho3D::Scancode::SCANCODE_LEFT;
    lua["SCANCODE_DOWN"] = Urho3D::Scancode::SCANCODE_DOWN;
    lua["SCANCODE_UP"] = Urho3D::Scancode::SCANCODE_UP;
    lua["SCANCODE_NUMLOCKCLEAR"] = Urho3D::Scancode::SCANCODE_NUMLOCKCLEAR;
    lua["SCANCODE_KP_DIVIDE"] = Urho3D::Scancode::SCANCODE_KP_DIVIDE;
    lua["SCANCODE_KP_MULTIPLY"] = Urho3D::Scancode::SCANCODE_KP_MULTIPLY;
    lua["SCANCODE_KP_MINUS"] = Urho3D::Scancode::SCANCODE_KP_MINUS;
    lua["SCANCODE_KP_PLUS"] = Urho3D::Scancode::SCANCODE_KP_PLUS;
    lua["SCANCODE_KP_ENTER"] = Urho3D::Scancode::SCANCODE_KP_ENTER;
    lua["SCANCODE_KP_1"] = Urho3D::Scancode::SCANCODE_KP_1;
    lua["SCANCODE_KP_2"] = Urho3D::Scancode::SCANCODE_KP_2;
    lua["SCANCODE_KP_3"] = Urho3D::Scancode::SCANCODE_KP_3;
    lua["SCANCODE_KP_4"] = Urho3D::Scancode::SCANCODE_KP_4;
    lua["SCANCODE_KP_5"] = Urho3D::Scancode::SCANCODE_KP_5;
    lua["SCANCODE_KP_6"] = Urho3D::Scancode::SCANCODE_KP_6;
    lua["SCANCODE_KP_7"] = Urho3D::Scancode::SCANCODE_KP_7;
    lua["SCANCODE_KP_8"] = Urho3D::Scancode::SCANCODE_KP_8;
    lua["SCANCODE_KP_9"] = Urho3D::Scancode::SCANCODE_KP_9;
    lua["SCANCODE_KP_0"] = Urho3D::Scancode::SCANCODE_KP_0;
    lua["SCANCODE_KP_PERIOD"] = Urho3D::Scancode::SCANCODE_KP_PERIOD;
    lua["SCANCODE_NONUSBACKSLASH"] = Urho3D::Scancode::SCANCODE_NONUSBACKSLASH;
    lua["SCANCODE_APPLICATION"] = Urho3D::Scancode::SCANCODE_APPLICATION;
    lua["SCANCODE_POWER"] = Urho3D::Scancode::SCANCODE_POWER;
    lua["SCANCODE_KP_EQUALS"] = Urho3D::Scancode::SCANCODE_KP_EQUALS;
    lua["SCANCODE_F13"] = Urho3D::Scancode::SCANCODE_F13;
    lua["SCANCODE_F14"] = Urho3D::Scancode::SCANCODE_F14;
    lua["SCANCODE_F15"] = Urho3D::Scancode::SCANCODE_F15;
    lua["SCANCODE_F16"] = Urho3D::Scancode::SCANCODE_F16;
    lua["SCANCODE_F17"] = Urho3D::Scancode::SCANCODE_F17;
    lua["SCANCODE_F18"] = Urho3D::Scancode::SCANCODE_F18;
    lua["SCANCODE_F19"] = Urho3D::Scancode::SCANCODE_F19;
    lua["SCANCODE_F20"] = Urho3D::Scancode::SCANCODE_F20;
    lua["SCANCODE_F21"] = Urho3D::Scancode::SCANCODE_F21;
    lua["SCANCODE_F22"] = Urho3D::Scancode::SCANCODE_F22;
    lua["SCANCODE_F23"] = Urho3D::Scancode::SCANCODE_F23;
    lua["SCANCODE_F24"] = Urho3D::Scancode::SCANCODE_F24;
    lua["SCANCODE_EXECUTE"] = Urho3D::Scancode::SCANCODE_EXECUTE;
    lua["SCANCODE_HELP"] = Urho3D::Scancode::SCANCODE_HELP;
    lua["SCANCODE_MENU"] = Urho3D::Scancode::SCANCODE_MENU;
    lua["SCANCODE_SELECT"] = Urho3D::Scancode::SCANCODE_SELECT;
    lua["SCANCODE_STOP"] = Urho3D::Scancode::SCANCODE_STOP;
    lua["SCANCODE_AGAIN"] = Urho3D::Scancode::SCANCODE_AGAIN;
    lua["SCANCODE_UNDO"] = Urho3D::Scancode::SCANCODE_UNDO;
    lua["SCANCODE_CUT"] = Urho3D::Scancode::SCANCODE_CUT;
    lua["SCANCODE_COPY"] = Urho3D::Scancode::SCANCODE_COPY;
    lua["SCANCODE_PASTE"] = Urho3D::Scancode::SCANCODE_PASTE;
    lua["SCANCODE_FIND"] = Urho3D::Scancode::SCANCODE_FIND;
    lua["SCANCODE_MUTE"] = Urho3D::Scancode::SCANCODE_MUTE;
    lua["SCANCODE_VOLUMEUP"] = Urho3D::Scancode::SCANCODE_VOLUMEUP;
    lua["SCANCODE_VOLUMEDOWN"] = Urho3D::Scancode::SCANCODE_VOLUMEDOWN;
    lua["SCANCODE_KP_COMMA"] = Urho3D::Scancode::SCANCODE_KP_COMMA;
    lua["SCANCODE_KP_EQUALSAS400"] = Urho3D::Scancode::SCANCODE_KP_EQUALSAS400;
    lua["SCANCODE_INTERNATIONAL1"] = Urho3D::Scancode::SCANCODE_INTERNATIONAL1;
    lua["SCANCODE_INTERNATIONAL2"] = Urho3D::Scancode::SCANCODE_INTERNATIONAL2;
    lua["SCANCODE_INTERNATIONAL3"] = Urho3D::Scancode::SCANCODE_INTERNATIONAL3;
    lua["SCANCODE_INTERNATIONAL4"] = Urho3D::Scancode::SCANCODE_INTERNATIONAL4;
    lua["SCANCODE_INTERNATIONAL5"] = Urho3D::Scancode::SCANCODE_INTERNATIONAL5;
    lua["SCANCODE_INTERNATIONAL6"] = Urho3D::Scancode::SCANCODE_INTERNATIONAL6;
    lua["SCANCODE_INTERNATIONAL7"] = Urho3D::Scancode::SCANCODE_INTERNATIONAL7;
    lua["SCANCODE_INTERNATIONAL8"] = Urho3D::Scancode::SCANCODE_INTERNATIONAL8;
    lua["SCANCODE_INTERNATIONAL9"] = Urho3D::Scancode::SCANCODE_INTERNATIONAL9;
    lua["SCANCODE_LANG1"] = Urho3D::Scancode::SCANCODE_LANG1;
    lua["SCANCODE_LANG2"] = Urho3D::Scancode::SCANCODE_LANG2;
    lua["SCANCODE_LANG3"] = Urho3D::Scancode::SCANCODE_LANG3;
    lua["SCANCODE_LANG4"] = Urho3D::Scancode::SCANCODE_LANG4;
    lua["SCANCODE_LANG5"] = Urho3D::Scancode::SCANCODE_LANG5;
    lua["SCANCODE_LANG6"] = Urho3D::Scancode::SCANCODE_LANG6;
    lua["SCANCODE_LANG7"] = Urho3D::Scancode::SCANCODE_LANG7;
    lua["SCANCODE_LANG8"] = Urho3D::Scancode::SCANCODE_LANG8;
    lua["SCANCODE_LANG9"] = Urho3D::Scancode::SCANCODE_LANG9;
    lua["SCANCODE_ALTERASE"] = Urho3D::Scancode::SCANCODE_ALTERASE;
    lua["SCANCODE_SYSREQ"] = Urho3D::Scancode::SCANCODE_SYSREQ;
    lua["SCANCODE_CANCEL"] = Urho3D::Scancode::SCANCODE_CANCEL;
    lua["SCANCODE_CLEAR"] = Urho3D::Scancode::SCANCODE_CLEAR;
    lua["SCANCODE_PRIOR"] = Urho3D::Scancode::SCANCODE_PRIOR;
    lua["SCANCODE_RETURN2"] = Urho3D::Scancode::SCANCODE_RETURN2;
    lua["SCANCODE_SEPARATOR"] = Urho3D::Scancode::SCANCODE_SEPARATOR;
    lua["SCANCODE_OUT"] = Urho3D::Scancode::SCANCODE_OUT;
    lua["SCANCODE_OPER"] = Urho3D::Scancode::SCANCODE_OPER;
    lua["SCANCODE_CLEARAGAIN"] = Urho3D::Scancode::SCANCODE_CLEARAGAIN;
    lua["SCANCODE_CRSEL"] = Urho3D::Scancode::SCANCODE_CRSEL;
    lua["SCANCODE_EXSEL"] = Urho3D::Scancode::SCANCODE_EXSEL;
    lua["SCANCODE_KP_00"] = Urho3D::Scancode::SCANCODE_KP_00;
    lua["SCANCODE_KP_000"] = Urho3D::Scancode::SCANCODE_KP_000;
    lua["SCANCODE_THOUSANDSSEPARATOR"] = Urho3D::Scancode::SCANCODE_THOUSANDSSEPARATOR;
    lua["SCANCODE_DECIMALSEPARATOR"] = Urho3D::Scancode::SCANCODE_DECIMALSEPARATOR;
    lua["SCANCODE_CURRENCYUNIT"] = Urho3D::Scancode::SCANCODE_CURRENCYUNIT;
    lua["SCANCODE_CURRENCYSUBUNIT"] = Urho3D::Scancode::SCANCODE_CURRENCYSUBUNIT;
    lua["SCANCODE_KP_LEFTPAREN"] = Urho3D::Scancode::SCANCODE_KP_LEFTPAREN;
    lua["SCANCODE_KP_RIGHTPAREN"] = Urho3D::Scancode::SCANCODE_KP_RIGHTPAREN;
    lua["SCANCODE_KP_LEFTBRACE"] = Urho3D::Scancode::SCANCODE_KP_LEFTBRACE;
    lua["SCANCODE_KP_RIGHTBRACE"] = Urho3D::Scancode::SCANCODE_KP_RIGHTBRACE;
    lua["SCANCODE_KP_TAB"] = Urho3D::Scancode::SCANCODE_KP_TAB;
    lua["SCANCODE_KP_BACKSPACE"] = Urho3D::Scancode::SCANCODE_KP_BACKSPACE;
    lua["SCANCODE_KP_A"] = Urho3D::Scancode::SCANCODE_KP_A;
    lua["SCANCODE_KP_B"] = Urho3D::Scancode::SCANCODE_KP_B;
    lua["SCANCODE_KP_C"] = Urho3D::Scancode::SCANCODE_KP_C;
    lua["SCANCODE_KP_D"] = Urho3D::Scancode::SCANCODE_KP_D;
    lua["SCANCODE_KP_E"] = Urho3D::Scancode::SCANCODE_KP_E;
    lua["SCANCODE_KP_F"] = Urho3D::Scancode::SCANCODE_KP_F;
    lua["SCANCODE_KP_XOR"] = Urho3D::Scancode::SCANCODE_KP_XOR;
    lua["SCANCODE_KP_POWER"] = Urho3D::Scancode::SCANCODE_KP_POWER;
    lua["SCANCODE_KP_PERCENT"] = Urho3D::Scancode::SCANCODE_KP_PERCENT;
    lua["SCANCODE_KP_LESS"] = Urho3D::Scancode::SCANCODE_KP_LESS;
    lua["SCANCODE_KP_GREATER"] = Urho3D::Scancode::SCANCODE_KP_GREATER;
    lua["SCANCODE_KP_AMPERSAND"] = Urho3D::Scancode::SCANCODE_KP_AMPERSAND;
    lua["SCANCODE_KP_DBLAMPERSAND"] = Urho3D::Scancode::SCANCODE_KP_DBLAMPERSAND;
    lua["SCANCODE_KP_VERTICALBAR"] = Urho3D::Scancode::SCANCODE_KP_VERTICALBAR;
    lua["SCANCODE_KP_DBLVERTICALBAR"] = Urho3D::Scancode::SCANCODE_KP_DBLVERTICALBAR;
    lua["SCANCODE_KP_COLON"] = Urho3D::Scancode::SCANCODE_KP_COLON;
    lua["SCANCODE_KP_HASH"] = Urho3D::Scancode::SCANCODE_KP_HASH;
    lua["SCANCODE_KP_SPACE"] = Urho3D::Scancode::SCANCODE_KP_SPACE;
    lua["SCANCODE_KP_AT"] = Urho3D::Scancode::SCANCODE_KP_AT;
    lua["SCANCODE_KP_EXCLAM"] = Urho3D::Scancode::SCANCODE_KP_EXCLAM;
    lua["SCANCODE_KP_MEMSTORE"] = Urho3D::Scancode::SCANCODE_KP_MEMSTORE;
    lua["SCANCODE_KP_MEMRECALL"] = Urho3D::Scancode::SCANCODE_KP_MEMRECALL;
    lua["SCANCODE_KP_MEMCLEAR"] = Urho3D::Scancode::SCANCODE_KP_MEMCLEAR;
    lua["SCANCODE_KP_MEMADD"] = Urho3D::Scancode::SCANCODE_KP_MEMADD;
    lua["SCANCODE_KP_MEMSUBTRACT"] = Urho3D::Scancode::SCANCODE_KP_MEMSUBTRACT;
    lua["SCANCODE_KP_MEMMULTIPLY"] = Urho3D::Scancode::SCANCODE_KP_MEMMULTIPLY;
    lua["SCANCODE_KP_MEMDIVIDE"] = Urho3D::Scancode::SCANCODE_KP_MEMDIVIDE;
    lua["SCANCODE_KP_PLUSMINUS"] = Urho3D::Scancode::SCANCODE_KP_PLUSMINUS;
    lua["SCANCODE_KP_CLEAR"] = Urho3D::Scancode::SCANCODE_KP_CLEAR;
    lua["SCANCODE_KP_CLEARENTRY"] = Urho3D::Scancode::SCANCODE_KP_CLEARENTRY;
    lua["SCANCODE_KP_BINARY"] = Urho3D::Scancode::SCANCODE_KP_BINARY;
    lua["SCANCODE_KP_OCTAL"] = Urho3D::Scancode::SCANCODE_KP_OCTAL;
    lua["SCANCODE_KP_DECIMAL"] = Urho3D::Scancode::SCANCODE_KP_DECIMAL;
    lua["SCANCODE_KP_HEXADECIMAL"] = Urho3D::Scancode::SCANCODE_KP_HEXADECIMAL;
    lua["SCANCODE_LCTRL"] = Urho3D::Scancode::SCANCODE_LCTRL;
    lua["SCANCODE_LSHIFT"] = Urho3D::Scancode::SCANCODE_LSHIFT;
    lua["SCANCODE_LALT"] = Urho3D::Scancode::SCANCODE_LALT;
    lua["SCANCODE_LGUI"] = Urho3D::Scancode::SCANCODE_LGUI;
    lua["SCANCODE_RCTRL"] = Urho3D::Scancode::SCANCODE_RCTRL;
    lua["SCANCODE_RSHIFT"] = Urho3D::Scancode::SCANCODE_RSHIFT;
    lua["SCANCODE_RALT"] = Urho3D::Scancode::SCANCODE_RALT;
    lua["SCANCODE_RGUI"] = Urho3D::Scancode::SCANCODE_RGUI;
    lua["SCANCODE_MODE"] = Urho3D::Scancode::SCANCODE_MODE;
    lua["SCANCODE_AUDIONEXT"] = Urho3D::Scancode::SCANCODE_AUDIONEXT;
    lua["SCANCODE_AUDIOPREV"] = Urho3D::Scancode::SCANCODE_AUDIOPREV;
    lua["SCANCODE_AUDIOSTOP"] = Urho3D::Scancode::SCANCODE_AUDIOSTOP;
    lua["SCANCODE_AUDIOPLAY"] = Urho3D::Scancode::SCANCODE_AUDIOPLAY;
    lua["SCANCODE_AUDIOMUTE"] = Urho3D::Scancode::SCANCODE_AUDIOMUTE;
    lua["SCANCODE_MEDIASELECT"] = Urho3D::Scancode::SCANCODE_MEDIASELECT;
    lua["SCANCODE_WWW"] = Urho3D::Scancode::SCANCODE_WWW;
    lua["SCANCODE_MAIL"] = Urho3D::Scancode::SCANCODE_MAIL;
    lua["SCANCODE_CALCULATOR"] = Urho3D::Scancode::SCANCODE_CALCULATOR;
    lua["SCANCODE_COMPUTER"] = Urho3D::Scancode::SCANCODE_COMPUTER;
    lua["SCANCODE_AC_SEARCH"] = Urho3D::Scancode::SCANCODE_AC_SEARCH;
    lua["SCANCODE_AC_HOME"] = Urho3D::Scancode::SCANCODE_AC_HOME;
    lua["SCANCODE_AC_BACK"] = Urho3D::Scancode::SCANCODE_AC_BACK;
    lua["SCANCODE_AC_FORWARD"] = Urho3D::Scancode::SCANCODE_AC_FORWARD;
    lua["SCANCODE_AC_STOP"] = Urho3D::Scancode::SCANCODE_AC_STOP;
    lua["SCANCODE_AC_REFRESH"] = Urho3D::Scancode::SCANCODE_AC_REFRESH;
    lua["SCANCODE_AC_BOOKMARKS"] = Urho3D::Scancode::SCANCODE_AC_BOOKMARKS;
    lua["SCANCODE_BRIGHTNESSDOWN"] = Urho3D::Scancode::SCANCODE_BRIGHTNESSDOWN;
    lua["SCANCODE_BRIGHTNESSUP"] = Urho3D::Scancode::SCANCODE_BRIGHTNESSUP;
    lua["SCANCODE_DISPLAYSWITCH"] = Urho3D::Scancode::SCANCODE_DISPLAYSWITCH;
    lua["SCANCODE_KBDILLUMTOGGLE"] = Urho3D::Scancode::SCANCODE_KBDILLUMTOGGLE;
    lua["SCANCODE_KBDILLUMDOWN"] = Urho3D::Scancode::SCANCODE_KBDILLUMDOWN;
    lua["SCANCODE_KBDILLUMUP"] = Urho3D::Scancode::SCANCODE_KBDILLUMUP;
    lua["SCANCODE_EJECT"] = Urho3D::Scancode::SCANCODE_EJECT;
    lua["SCANCODE_SLEEP"] = Urho3D::Scancode::SCANCODE_SLEEP;
    lua["SCANCODE_APP1"] = Urho3D::Scancode::SCANCODE_APP1;
    lua["SCANCODE_APP2"] = Urho3D::Scancode::SCANCODE_APP2;
        
lua.new_enum<Urho3D::HatPosition>( "HatPosition", { 
    { "HAT_CENTER", Urho3D::HatPosition::HAT_CENTER },
    { "HAT_UP", Urho3D::HatPosition::HAT_UP },
    { "HAT_RIGHT", Urho3D::HatPosition::HAT_RIGHT },
    { "HAT_DOWN", Urho3D::HatPosition::HAT_DOWN },
    { "HAT_LEFT", Urho3D::HatPosition::HAT_LEFT } }
);
    lua["HAT_CENTER"] = Urho3D::HatPosition::HAT_CENTER;
    lua["HAT_UP"] = Urho3D::HatPosition::HAT_UP;
    lua["HAT_RIGHT"] = Urho3D::HatPosition::HAT_RIGHT;
    lua["HAT_DOWN"] = Urho3D::HatPosition::HAT_DOWN;
    lua["HAT_LEFT"] = Urho3D::HatPosition::HAT_LEFT;
        
lua.new_enum<Urho3D::ControllerButton>( "ControllerButton", { 
    { "CONTROLLER_BUTTON_A", Urho3D::ControllerButton::CONTROLLER_BUTTON_A },
    { "CONTROLLER_BUTTON_B", Urho3D::ControllerButton::CONTROLLER_BUTTON_B },
    { "CONTROLLER_BUTTON_X", Urho3D::ControllerButton::CONTROLLER_BUTTON_X },
    { "CONTROLLER_BUTTON_Y", Urho3D::ControllerButton::CONTROLLER_BUTTON_Y },
    { "CONTROLLER_BUTTON_BACK", Urho3D::ControllerButton::CONTROLLER_BUTTON_BACK },
    { "CONTROLLER_BUTTON_GUIDE", Urho3D::ControllerButton::CONTROLLER_BUTTON_GUIDE },
    { "CONTROLLER_BUTTON_START", Urho3D::ControllerButton::CONTROLLER_BUTTON_START },
    { "CONTROLLER_BUTTON_LEFTSTICK", Urho3D::ControllerButton::CONTROLLER_BUTTON_LEFTSTICK },
    { "CONTROLLER_BUTTON_RIGHTSTICK", Urho3D::ControllerButton::CONTROLLER_BUTTON_RIGHTSTICK },
    { "CONTROLLER_BUTTON_LEFTSHOULDER", Urho3D::ControllerButton::CONTROLLER_BUTTON_LEFTSHOULDER },
    { "CONTROLLER_BUTTON_RIGHTSHOULDER", Urho3D::ControllerButton::CONTROLLER_BUTTON_RIGHTSHOULDER },
    { "CONTROLLER_BUTTON_DPAD_UP", Urho3D::ControllerButton::CONTROLLER_BUTTON_DPAD_UP },
    { "CONTROLLER_BUTTON_DPAD_DOWN", Urho3D::ControllerButton::CONTROLLER_BUTTON_DPAD_DOWN },
    { "CONTROLLER_BUTTON_DPAD_LEFT", Urho3D::ControllerButton::CONTROLLER_BUTTON_DPAD_LEFT },
    { "CONTROLLER_BUTTON_DPAD_RIGHT", Urho3D::ControllerButton::CONTROLLER_BUTTON_DPAD_RIGHT } }
);
    lua["CONTROLLER_BUTTON_A"] = Urho3D::ControllerButton::CONTROLLER_BUTTON_A;
    lua["CONTROLLER_BUTTON_B"] = Urho3D::ControllerButton::CONTROLLER_BUTTON_B;
    lua["CONTROLLER_BUTTON_X"] = Urho3D::ControllerButton::CONTROLLER_BUTTON_X;
    lua["CONTROLLER_BUTTON_Y"] = Urho3D::ControllerButton::CONTROLLER_BUTTON_Y;
    lua["CONTROLLER_BUTTON_BACK"] = Urho3D::ControllerButton::CONTROLLER_BUTTON_BACK;
    lua["CONTROLLER_BUTTON_GUIDE"] = Urho3D::ControllerButton::CONTROLLER_BUTTON_GUIDE;
    lua["CONTROLLER_BUTTON_START"] = Urho3D::ControllerButton::CONTROLLER_BUTTON_START;
    lua["CONTROLLER_BUTTON_LEFTSTICK"] = Urho3D::ControllerButton::CONTROLLER_BUTTON_LEFTSTICK;
    lua["CONTROLLER_BUTTON_RIGHTSTICK"] = Urho3D::ControllerButton::CONTROLLER_BUTTON_RIGHTSTICK;
    lua["CONTROLLER_BUTTON_LEFTSHOULDER"] = Urho3D::ControllerButton::CONTROLLER_BUTTON_LEFTSHOULDER;
    lua["CONTROLLER_BUTTON_RIGHTSHOULDER"] = Urho3D::ControllerButton::CONTROLLER_BUTTON_RIGHTSHOULDER;
    lua["CONTROLLER_BUTTON_DPAD_UP"] = Urho3D::ControllerButton::CONTROLLER_BUTTON_DPAD_UP;
    lua["CONTROLLER_BUTTON_DPAD_DOWN"] = Urho3D::ControllerButton::CONTROLLER_BUTTON_DPAD_DOWN;
    lua["CONTROLLER_BUTTON_DPAD_LEFT"] = Urho3D::ControllerButton::CONTROLLER_BUTTON_DPAD_LEFT;
    lua["CONTROLLER_BUTTON_DPAD_RIGHT"] = Urho3D::ControllerButton::CONTROLLER_BUTTON_DPAD_RIGHT;
        
lua.new_enum<Urho3D::ControllerAxis>( "ControllerAxis", { 
    { "CONTROLLER_AXIS_LEFTX", Urho3D::ControllerAxis::CONTROLLER_AXIS_LEFTX },
    { "CONTROLLER_AXIS_LEFTY", Urho3D::ControllerAxis::CONTROLLER_AXIS_LEFTY },
    { "CONTROLLER_AXIS_RIGHTX", Urho3D::ControllerAxis::CONTROLLER_AXIS_RIGHTX },
    { "CONTROLLER_AXIS_RIGHTY", Urho3D::ControllerAxis::CONTROLLER_AXIS_RIGHTY },
    { "CONTROLLER_AXIS_TRIGGERLEFT", Urho3D::ControllerAxis::CONTROLLER_AXIS_TRIGGERLEFT },
    { "CONTROLLER_AXIS_TRIGGERRIGHT", Urho3D::ControllerAxis::CONTROLLER_AXIS_TRIGGERRIGHT } }
);
    lua["CONTROLLER_AXIS_LEFTX"] = Urho3D::ControllerAxis::CONTROLLER_AXIS_LEFTX;
    lua["CONTROLLER_AXIS_LEFTY"] = Urho3D::ControllerAxis::CONTROLLER_AXIS_LEFTY;
    lua["CONTROLLER_AXIS_RIGHTX"] = Urho3D::ControllerAxis::CONTROLLER_AXIS_RIGHTX;
    lua["CONTROLLER_AXIS_RIGHTY"] = Urho3D::ControllerAxis::CONTROLLER_AXIS_RIGHTY;
    lua["CONTROLLER_AXIS_TRIGGERLEFT"] = Urho3D::ControllerAxis::CONTROLLER_AXIS_TRIGGERLEFT;
    lua["CONTROLLER_AXIS_TRIGGERRIGHT"] = Urho3D::ControllerAxis::CONTROLLER_AXIS_TRIGGERRIGHT;
        
lua.new_enum<Urho3D::FileMode>( "FileMode", { 
    { "FILE_READ", Urho3D::FileMode::FILE_READ },
    { "FILE_WRITE", Urho3D::FileMode::FILE_WRITE },
    { "FILE_READWRITE", Urho3D::FileMode::FILE_READWRITE } }
);
    lua["FILE_READ"] = Urho3D::FileMode::FILE_READ;
    lua["FILE_WRITE"] = Urho3D::FileMode::FILE_WRITE;
    lua["FILE_READWRITE"] = Urho3D::FileMode::FILE_READWRITE;
        
lua.new_enum<Urho3D::FrustumPlane>( "FrustumPlane", { 
    { "PLANE_NEAR", Urho3D::FrustumPlane::PLANE_NEAR },
    { "PLANE_LEFT", Urho3D::FrustumPlane::PLANE_LEFT },
    { "PLANE_RIGHT", Urho3D::FrustumPlane::PLANE_RIGHT },
    { "PLANE_UP", Urho3D::FrustumPlane::PLANE_UP },
    { "PLANE_DOWN", Urho3D::FrustumPlane::PLANE_DOWN },
    { "PLANE_FAR", Urho3D::FrustumPlane::PLANE_FAR } }
);
    lua["PLANE_NEAR"] = Urho3D::FrustumPlane::PLANE_NEAR;
    lua["PLANE_LEFT"] = Urho3D::FrustumPlane::PLANE_LEFT;
    lua["PLANE_RIGHT"] = Urho3D::FrustumPlane::PLANE_RIGHT;
    lua["PLANE_UP"] = Urho3D::FrustumPlane::PLANE_UP;
    lua["PLANE_DOWN"] = Urho3D::FrustumPlane::PLANE_DOWN;
    lua["PLANE_FAR"] = Urho3D::FrustumPlane::PLANE_FAR;
        
lua.new_enum<Urho3D::Intersection>( "Intersection", { 
    { "OUTSIDE", Urho3D::Intersection::OUTSIDE },
    { "INTERSECTS", Urho3D::Intersection::INTERSECTS },
    { "INSIDE", Urho3D::Intersection::INSIDE } }
);
    lua["OUTSIDE"] = Urho3D::Intersection::OUTSIDE;
    lua["INTERSECTS"] = Urho3D::Intersection::INTERSECTS;
    lua["INSIDE"] = Urho3D::Intersection::INSIDE;
        
lua.new_enum<Urho3D::CrowdAgentRequestedTarget>( "CrowdAgentRequestedTarget", { 
    { "CA_REQUESTEDTARGET_NONE", Urho3D::CrowdAgentRequestedTarget::CA_REQUESTEDTARGET_NONE },
    { "CA_REQUESTEDTARGET_POSITION", Urho3D::CrowdAgentRequestedTarget::CA_REQUESTEDTARGET_POSITION },
    { "CA_REQUESTEDTARGET_VELOCITY", Urho3D::CrowdAgentRequestedTarget::CA_REQUESTEDTARGET_VELOCITY } }
);
    lua["CA_REQUESTEDTARGET_NONE"] = Urho3D::CrowdAgentRequestedTarget::CA_REQUESTEDTARGET_NONE;
    lua["CA_REQUESTEDTARGET_POSITION"] = Urho3D::CrowdAgentRequestedTarget::CA_REQUESTEDTARGET_POSITION;
    lua["CA_REQUESTEDTARGET_VELOCITY"] = Urho3D::CrowdAgentRequestedTarget::CA_REQUESTEDTARGET_VELOCITY;
        
lua.new_enum<Urho3D::CrowdAgentTargetState>( "CrowdAgentTargetState", { 
    { "CA_TARGET_NONE", Urho3D::CrowdAgentTargetState::CA_TARGET_NONE },
    { "CA_TARGET_FAILED", Urho3D::CrowdAgentTargetState::CA_TARGET_FAILED },
    { "CA_TARGET_VALID", Urho3D::CrowdAgentTargetState::CA_TARGET_VALID },
    { "CA_TARGET_REQUESTING", Urho3D::CrowdAgentTargetState::CA_TARGET_REQUESTING },
    { "CA_TARGET_WAITINGFORQUEUE", Urho3D::CrowdAgentTargetState::CA_TARGET_WAITINGFORQUEUE },
    { "CA_TARGET_WAITINGFORPATH", Urho3D::CrowdAgentTargetState::CA_TARGET_WAITINGFORPATH },
    { "CA_TARGET_VELOCITY", Urho3D::CrowdAgentTargetState::CA_TARGET_VELOCITY } }
);
    lua["CA_TARGET_NONE"] = Urho3D::CrowdAgentTargetState::CA_TARGET_NONE;
    lua["CA_TARGET_FAILED"] = Urho3D::CrowdAgentTargetState::CA_TARGET_FAILED;
    lua["CA_TARGET_VALID"] = Urho3D::CrowdAgentTargetState::CA_TARGET_VALID;
    lua["CA_TARGET_REQUESTING"] = Urho3D::CrowdAgentTargetState::CA_TARGET_REQUESTING;
    lua["CA_TARGET_WAITINGFORQUEUE"] = Urho3D::CrowdAgentTargetState::CA_TARGET_WAITINGFORQUEUE;
    lua["CA_TARGET_WAITINGFORPATH"] = Urho3D::CrowdAgentTargetState::CA_TARGET_WAITINGFORPATH;
    lua["CA_TARGET_VELOCITY"] = Urho3D::CrowdAgentTargetState::CA_TARGET_VELOCITY;
        
lua.new_enum<Urho3D::CrowdAgentState>( "CrowdAgentState", { 
    { "CA_STATE_INVALID", Urho3D::CrowdAgentState::CA_STATE_INVALID },
    { "CA_STATE_WALKING", Urho3D::CrowdAgentState::CA_STATE_WALKING },
    { "CA_STATE_OFFMESH", Urho3D::CrowdAgentState::CA_STATE_OFFMESH } }
);
    lua["CA_STATE_INVALID"] = Urho3D::CrowdAgentState::CA_STATE_INVALID;
    lua["CA_STATE_WALKING"] = Urho3D::CrowdAgentState::CA_STATE_WALKING;
    lua["CA_STATE_OFFMESH"] = Urho3D::CrowdAgentState::CA_STATE_OFFMESH;
        
lua.new_enum<Urho3D::NavigationQuality>( "NavigationQuality", { 
    { "NAVIGATIONQUALITY_LOW", Urho3D::NavigationQuality::NAVIGATIONQUALITY_LOW },
    { "NAVIGATIONQUALITY_MEDIUM", Urho3D::NavigationQuality::NAVIGATIONQUALITY_MEDIUM },
    { "NAVIGATIONQUALITY_HIGH", Urho3D::NavigationQuality::NAVIGATIONQUALITY_HIGH } }
);
    lua["NAVIGATIONQUALITY_LOW"] = Urho3D::NavigationQuality::NAVIGATIONQUALITY_LOW;
    lua["NAVIGATIONQUALITY_MEDIUM"] = Urho3D::NavigationQuality::NAVIGATIONQUALITY_MEDIUM;
    lua["NAVIGATIONQUALITY_HIGH"] = Urho3D::NavigationQuality::NAVIGATIONQUALITY_HIGH;
        
lua.new_enum<Urho3D::NavigationPushiness>( "NavigationPushiness", { 
    { "NAVIGATIONPUSHINESS_LOW", Urho3D::NavigationPushiness::NAVIGATIONPUSHINESS_LOW },
    { "NAVIGATIONPUSHINESS_MEDIUM", Urho3D::NavigationPushiness::NAVIGATIONPUSHINESS_MEDIUM },
    { "NAVIGATIONPUSHINESS_HIGH", Urho3D::NavigationPushiness::NAVIGATIONPUSHINESS_HIGH },
    { "NAVIGATIONPUSHINESS_NONE", Urho3D::NavigationPushiness::NAVIGATIONPUSHINESS_NONE } }
);
    lua["NAVIGATIONPUSHINESS_LOW"] = Urho3D::NavigationPushiness::NAVIGATIONPUSHINESS_LOW;
    lua["NAVIGATIONPUSHINESS_MEDIUM"] = Urho3D::NavigationPushiness::NAVIGATIONPUSHINESS_MEDIUM;
    lua["NAVIGATIONPUSHINESS_HIGH"] = Urho3D::NavigationPushiness::NAVIGATIONPUSHINESS_HIGH;
    lua["NAVIGATIONPUSHINESS_NONE"] = Urho3D::NavigationPushiness::NAVIGATIONPUSHINESS_NONE;
        
lua.new_enum<Urho3D::NavmeshPartitionType>( "NavmeshPartitionType", { 
    { "NAVMESH_PARTITION_WATERSHED", Urho3D::NavmeshPartitionType::NAVMESH_PARTITION_WATERSHED },
    { "NAVMESH_PARTITION_MONOTONE", Urho3D::NavmeshPartitionType::NAVMESH_PARTITION_MONOTONE } }
);
    lua["NAVMESH_PARTITION_WATERSHED"] = Urho3D::NavmeshPartitionType::NAVMESH_PARTITION_WATERSHED;
    lua["NAVMESH_PARTITION_MONOTONE"] = Urho3D::NavmeshPartitionType::NAVMESH_PARTITION_MONOTONE;
        
lua.new_enum<Urho3D::NavigationPathPointFlag>( "NavigationPathPointFlag", { 
    { "NAVPATHFLAG_NONE", Urho3D::NavigationPathPointFlag::NAVPATHFLAG_NONE },
    { "NAVPATHFLAG_START", Urho3D::NavigationPathPointFlag::NAVPATHFLAG_START },
    { "NAVPATHFLAG_END", Urho3D::NavigationPathPointFlag::NAVPATHFLAG_END },
    { "NAVPATHFLAG_OFF_MESH", Urho3D::NavigationPathPointFlag::NAVPATHFLAG_OFF_MESH } }
);
    lua["NAVPATHFLAG_NONE"] = Urho3D::NavigationPathPointFlag::NAVPATHFLAG_NONE;
    lua["NAVPATHFLAG_START"] = Urho3D::NavigationPathPointFlag::NAVPATHFLAG_START;
    lua["NAVPATHFLAG_END"] = Urho3D::NavigationPathPointFlag::NAVPATHFLAG_END;
    lua["NAVPATHFLAG_OFF_MESH"] = Urho3D::NavigationPathPointFlag::NAVPATHFLAG_OFF_MESH;
        
lua.new_enum<Urho3D::ObserverPositionSendMode>( "ObserverPositionSendMode", { 
    { "OPSM_NONE", Urho3D::ObserverPositionSendMode::OPSM_NONE },
    { "OPSM_POSITION", Urho3D::ObserverPositionSendMode::OPSM_POSITION },
    { "OPSM_POSITION_ROTATION", Urho3D::ObserverPositionSendMode::OPSM_POSITION_ROTATION } }
);
    lua["OPSM_NONE"] = Urho3D::ObserverPositionSendMode::OPSM_NONE;
    lua["OPSM_POSITION"] = Urho3D::ObserverPositionSendMode::OPSM_POSITION;
    lua["OPSM_POSITION_ROTATION"] = Urho3D::ObserverPositionSendMode::OPSM_POSITION_ROTATION;
        
lua.new_enum<Urho3D::PacketType>( "PacketType", { 
    { "PT_UNRELIABLE_UNORDERED", Urho3D::PacketType::PT_UNRELIABLE_UNORDERED },
    { "PT_UNRELIABLE_ORDERED", Urho3D::PacketType::PT_UNRELIABLE_ORDERED },
    { "PT_RELIABLE_UNORDERED", Urho3D::PacketType::PT_RELIABLE_UNORDERED },
    { "PT_RELIABLE_ORDERED", Urho3D::PacketType::PT_RELIABLE_ORDERED } }
);
    lua["PT_UNRELIABLE_UNORDERED"] = Urho3D::PacketType::PT_UNRELIABLE_UNORDERED;
    lua["PT_UNRELIABLE_ORDERED"] = Urho3D::PacketType::PT_UNRELIABLE_ORDERED;
    lua["PT_RELIABLE_UNORDERED"] = Urho3D::PacketType::PT_RELIABLE_UNORDERED;
    lua["PT_RELIABLE_ORDERED"] = Urho3D::PacketType::PT_RELIABLE_ORDERED;
        
lua.new_enum<Urho3D::HttpRequestState>( "HttpRequestState", { 
    { "HTTP_INITIALIZING", Urho3D::HttpRequestState::HTTP_INITIALIZING },
    { "HTTP_ERROR", Urho3D::HttpRequestState::HTTP_ERROR },
    { "HTTP_OPEN", Urho3D::HttpRequestState::HTTP_OPEN },
    { "HTTP_CLOSED", Urho3D::HttpRequestState::HTTP_CLOSED } }
);
    lua["HTTP_INITIALIZING"] = Urho3D::HttpRequestState::HTTP_INITIALIZING;
    lua["HTTP_ERROR"] = Urho3D::HttpRequestState::HTTP_ERROR;
    lua["HTTP_OPEN"] = Urho3D::HttpRequestState::HTTP_OPEN;
    lua["HTTP_CLOSED"] = Urho3D::HttpRequestState::HTTP_CLOSED;
        
lua.new_enum<Urho3D::ShapeType>( "ShapeType", { 
    { "SHAPE_BOX", Urho3D::ShapeType::SHAPE_BOX },
    { "SHAPE_SPHERE", Urho3D::ShapeType::SHAPE_SPHERE },
    { "SHAPE_STATICPLANE", Urho3D::ShapeType::SHAPE_STATICPLANE },
    { "SHAPE_CYLINDER", Urho3D::ShapeType::SHAPE_CYLINDER },
    { "SHAPE_CAPSULE", Urho3D::ShapeType::SHAPE_CAPSULE },
    { "SHAPE_CONE", Urho3D::ShapeType::SHAPE_CONE },
    { "SHAPE_TRIANGLEMESH", Urho3D::ShapeType::SHAPE_TRIANGLEMESH },
    { "SHAPE_CONVEXHULL", Urho3D::ShapeType::SHAPE_CONVEXHULL },
    { "SHAPE_TERRAIN", Urho3D::ShapeType::SHAPE_TERRAIN },
    { "SHAPE_GIMPACTMESH", Urho3D::ShapeType::SHAPE_GIMPACTMESH } }
);
    lua["SHAPE_BOX"] = Urho3D::ShapeType::SHAPE_BOX;
    lua["SHAPE_SPHERE"] = Urho3D::ShapeType::SHAPE_SPHERE;
    lua["SHAPE_STATICPLANE"] = Urho3D::ShapeType::SHAPE_STATICPLANE;
    lua["SHAPE_CYLINDER"] = Urho3D::ShapeType::SHAPE_CYLINDER;
    lua["SHAPE_CAPSULE"] = Urho3D::ShapeType::SHAPE_CAPSULE;
    lua["SHAPE_CONE"] = Urho3D::ShapeType::SHAPE_CONE;
    lua["SHAPE_TRIANGLEMESH"] = Urho3D::ShapeType::SHAPE_TRIANGLEMESH;
    lua["SHAPE_CONVEXHULL"] = Urho3D::ShapeType::SHAPE_CONVEXHULL;
    lua["SHAPE_TERRAIN"] = Urho3D::ShapeType::SHAPE_TERRAIN;
    lua["SHAPE_GIMPACTMESH"] = Urho3D::ShapeType::SHAPE_GIMPACTMESH;
        
lua.new_enum<Urho3D::ConstraintType>( "ConstraintType", { 
    { "CONSTRAINT_POINT", Urho3D::ConstraintType::CONSTRAINT_POINT },
    { "CONSTRAINT_HINGE", Urho3D::ConstraintType::CONSTRAINT_HINGE },
    { "CONSTRAINT_SLIDER", Urho3D::ConstraintType::CONSTRAINT_SLIDER },
    { "CONSTRAINT_CONETWIST", Urho3D::ConstraintType::CONSTRAINT_CONETWIST } }
);
    lua["CONSTRAINT_POINT"] = Urho3D::ConstraintType::CONSTRAINT_POINT;
    lua["CONSTRAINT_HINGE"] = Urho3D::ConstraintType::CONSTRAINT_HINGE;
    lua["CONSTRAINT_SLIDER"] = Urho3D::ConstraintType::CONSTRAINT_SLIDER;
    lua["CONSTRAINT_CONETWIST"] = Urho3D::ConstraintType::CONSTRAINT_CONETWIST;
        
lua.new_enum<Urho3D::CollisionEventMode>( "CollisionEventMode", { 
    { "COLLISION_NEVER", Urho3D::CollisionEventMode::COLLISION_NEVER },
    { "COLLISION_ACTIVE", Urho3D::CollisionEventMode::COLLISION_ACTIVE },
    { "COLLISION_ALWAYS", Urho3D::CollisionEventMode::COLLISION_ALWAYS } }
);
    lua["COLLISION_NEVER"] = Urho3D::CollisionEventMode::COLLISION_NEVER;
    lua["COLLISION_ACTIVE"] = Urho3D::CollisionEventMode::COLLISION_ACTIVE;
    lua["COLLISION_ALWAYS"] = Urho3D::CollisionEventMode::COLLISION_ALWAYS;
        
lua.new_enum<Urho3D::BodyType2D>( "BodyType2D", { 
    { "BT_STATIC", Urho3D::BodyType2D::BT_STATIC },
    { "BT_KINEMATIC", Urho3D::BodyType2D::BT_KINEMATIC },
    { "BT_DYNAMIC", Urho3D::BodyType2D::BT_DYNAMIC } }
);
    lua["BT_STATIC"] = Urho3D::BodyType2D::BT_STATIC;
    lua["BT_KINEMATIC"] = Urho3D::BodyType2D::BT_KINEMATIC;
    lua["BT_DYNAMIC"] = Urho3D::BodyType2D::BT_DYNAMIC;
        
lua.new_enum<Urho3D::CompressedFormat>( "CompressedFormat", { 
    { "CF_NONE", Urho3D::CompressedFormat::CF_NONE },
    { "CF_RGBA", Urho3D::CompressedFormat::CF_RGBA },
    { "CF_DXT1", Urho3D::CompressedFormat::CF_DXT1 },
    { "CF_DXT3", Urho3D::CompressedFormat::CF_DXT3 },
    { "CF_DXT5", Urho3D::CompressedFormat::CF_DXT5 },
    { "CF_ETC1", Urho3D::CompressedFormat::CF_ETC1 },
    { "CF_ETC2_RGB", Urho3D::CompressedFormat::CF_ETC2_RGB },
    { "CF_ETC2_RGBA", Urho3D::CompressedFormat::CF_ETC2_RGBA },
    { "CF_PVRTC_RGB_2BPP", Urho3D::CompressedFormat::CF_PVRTC_RGB_2BPP },
    { "CF_PVRTC_RGBA_2BPP", Urho3D::CompressedFormat::CF_PVRTC_RGBA_2BPP },
    { "CF_PVRTC_RGB_4BPP", Urho3D::CompressedFormat::CF_PVRTC_RGB_4BPP },
    { "CF_PVRTC_RGBA_4BPP", Urho3D::CompressedFormat::CF_PVRTC_RGBA_4BPP } }
);
    lua["CF_NONE"] = Urho3D::CompressedFormat::CF_NONE;
    lua["CF_RGBA"] = Urho3D::CompressedFormat::CF_RGBA;
    lua["CF_DXT1"] = Urho3D::CompressedFormat::CF_DXT1;
    lua["CF_DXT3"] = Urho3D::CompressedFormat::CF_DXT3;
    lua["CF_DXT5"] = Urho3D::CompressedFormat::CF_DXT5;
    lua["CF_ETC1"] = Urho3D::CompressedFormat::CF_ETC1;
    lua["CF_ETC2_RGB"] = Urho3D::CompressedFormat::CF_ETC2_RGB;
    lua["CF_ETC2_RGBA"] = Urho3D::CompressedFormat::CF_ETC2_RGBA;
    lua["CF_PVRTC_RGB_2BPP"] = Urho3D::CompressedFormat::CF_PVRTC_RGB_2BPP;
    lua["CF_PVRTC_RGBA_2BPP"] = Urho3D::CompressedFormat::CF_PVRTC_RGBA_2BPP;
    lua["CF_PVRTC_RGB_4BPP"] = Urho3D::CompressedFormat::CF_PVRTC_RGB_4BPP;
    lua["CF_PVRTC_RGBA_4BPP"] = Urho3D::CompressedFormat::CF_PVRTC_RGBA_4BPP;
        
lua.new_enum<Urho3D::JSONValueType>( "JSONValueType", { 
    { "JSON_NULL", Urho3D::JSONValueType::JSON_NULL },
    { "JSON_BOOL", Urho3D::JSONValueType::JSON_BOOL },
    { "JSON_NUMBER", Urho3D::JSONValueType::JSON_NUMBER },
    { "JSON_STRING", Urho3D::JSONValueType::JSON_STRING },
    { "JSON_ARRAY", Urho3D::JSONValueType::JSON_ARRAY },
    { "JSON_OBJECT", Urho3D::JSONValueType::JSON_OBJECT } }
);
    lua["JSON_NULL"] = Urho3D::JSONValueType::JSON_NULL;
    lua["JSON_BOOL"] = Urho3D::JSONValueType::JSON_BOOL;
    lua["JSON_NUMBER"] = Urho3D::JSONValueType::JSON_NUMBER;
    lua["JSON_STRING"] = Urho3D::JSONValueType::JSON_STRING;
    lua["JSON_ARRAY"] = Urho3D::JSONValueType::JSON_ARRAY;
    lua["JSON_OBJECT"] = Urho3D::JSONValueType::JSON_OBJECT;
        
lua.new_enum<Urho3D::JSONNumberType>( "JSONNumberType", { 
    { "JSONNT_NAN", Urho3D::JSONNumberType::JSONNT_NAN },
    { "JSONNT_INT", Urho3D::JSONNumberType::JSONNT_INT },
    { "JSONNT_UINT", Urho3D::JSONNumberType::JSONNT_UINT },
    { "JSONNT_FLOAT_DOUBLE", Urho3D::JSONNumberType::JSONNT_FLOAT_DOUBLE } }
);
    lua["JSONNT_NAN"] = Urho3D::JSONNumberType::JSONNT_NAN;
    lua["JSONNT_INT"] = Urho3D::JSONNumberType::JSONNT_INT;
    lua["JSONNT_UINT"] = Urho3D::JSONNumberType::JSONNT_UINT;
    lua["JSONNT_FLOAT_DOUBLE"] = Urho3D::JSONNumberType::JSONNT_FLOAT_DOUBLE;
        
lua.new_enum<Urho3D::PListValueType>( "PListValueType", { 
    { "PLVT_NONE", Urho3D::PListValueType::PLVT_NONE },
    { "PLVT_INT", Urho3D::PListValueType::PLVT_INT },
    { "PLVT_BOOL", Urho3D::PListValueType::PLVT_BOOL },
    { "PLVT_FLOAT", Urho3D::PListValueType::PLVT_FLOAT },
    { "PLVT_STRING", Urho3D::PListValueType::PLVT_STRING },
    { "PLVT_VALUEMAP", Urho3D::PListValueType::PLVT_VALUEMAP },
    { "PLVT_VALUEVECTOR", Urho3D::PListValueType::PLVT_VALUEVECTOR } }
);
    lua["PLVT_NONE"] = Urho3D::PListValueType::PLVT_NONE;
    lua["PLVT_INT"] = Urho3D::PListValueType::PLVT_INT;
    lua["PLVT_BOOL"] = Urho3D::PListValueType::PLVT_BOOL;
    lua["PLVT_FLOAT"] = Urho3D::PListValueType::PLVT_FLOAT;
    lua["PLVT_STRING"] = Urho3D::PListValueType::PLVT_STRING;
    lua["PLVT_VALUEMAP"] = Urho3D::PListValueType::PLVT_VALUEMAP;
    lua["PLVT_VALUEVECTOR"] = Urho3D::PListValueType::PLVT_VALUEVECTOR;
        
lua.new_enum<Urho3D::AsyncLoadState>( "AsyncLoadState", { 
    { "ASYNC_DONE", Urho3D::AsyncLoadState::ASYNC_DONE },
    { "ASYNC_QUEUED", Urho3D::AsyncLoadState::ASYNC_QUEUED },
    { "ASYNC_LOADING", Urho3D::AsyncLoadState::ASYNC_LOADING },
    { "ASYNC_SUCCESS", Urho3D::AsyncLoadState::ASYNC_SUCCESS },
    { "ASYNC_FAIL", Urho3D::AsyncLoadState::ASYNC_FAIL } }
);
    lua["ASYNC_DONE"] = Urho3D::AsyncLoadState::ASYNC_DONE;
    lua["ASYNC_QUEUED"] = Urho3D::AsyncLoadState::ASYNC_QUEUED;
    lua["ASYNC_LOADING"] = Urho3D::AsyncLoadState::ASYNC_LOADING;
    lua["ASYNC_SUCCESS"] = Urho3D::AsyncLoadState::ASYNC_SUCCESS;
    lua["ASYNC_FAIL"] = Urho3D::AsyncLoadState::ASYNC_FAIL;
        
lua.new_enum<Urho3D::ResourceRequest>( "ResourceRequest", { 
    { "RESOURCE_CHECKEXISTS", Urho3D::ResourceRequest::RESOURCE_CHECKEXISTS },
    { "RESOURCE_GETFILE", Urho3D::ResourceRequest::RESOURCE_GETFILE } }
);
    lua["RESOURCE_CHECKEXISTS"] = Urho3D::ResourceRequest::RESOURCE_CHECKEXISTS;
    lua["RESOURCE_GETFILE"] = Urho3D::ResourceRequest::RESOURCE_GETFILE;
        
lua.new_enum<Urho3D::WrapMode>( "WrapMode", { 
    { "WM_LOOP", Urho3D::WrapMode::WM_LOOP },
    { "WM_ONCE", Urho3D::WrapMode::WM_ONCE },
    { "WM_CLAMP", Urho3D::WrapMode::WM_CLAMP } }
);
    lua["WM_LOOP"] = Urho3D::WrapMode::WM_LOOP;
    lua["WM_ONCE"] = Urho3D::WrapMode::WM_ONCE;
    lua["WM_CLAMP"] = Urho3D::WrapMode::WM_CLAMP;
        
lua.new_enum<Urho3D::AutoRemoveMode>( "AutoRemoveMode", { 
    { "REMOVE_DISABLED", Urho3D::AutoRemoveMode::REMOVE_DISABLED },
    { "REMOVE_COMPONENT", Urho3D::AutoRemoveMode::REMOVE_COMPONENT },
    { "REMOVE_NODE", Urho3D::AutoRemoveMode::REMOVE_NODE } }
);
    lua["REMOVE_DISABLED"] = Urho3D::AutoRemoveMode::REMOVE_DISABLED;
    lua["REMOVE_COMPONENT"] = Urho3D::AutoRemoveMode::REMOVE_COMPONENT;
    lua["REMOVE_NODE"] = Urho3D::AutoRemoveMode::REMOVE_NODE;
        
lua.new_enum<Urho3D::UpdateEvent>( "UpdateEvent", { 
    { "USE_NO_EVENT", Urho3D::UpdateEvent::USE_NO_EVENT },
    { "USE_UPDATE", Urho3D::UpdateEvent::USE_UPDATE },
    { "USE_POSTUPDATE", Urho3D::UpdateEvent::USE_POSTUPDATE },
    { "USE_FIXEDUPDATE", Urho3D::UpdateEvent::USE_FIXEDUPDATE },
    { "USE_FIXEDPOSTUPDATE", Urho3D::UpdateEvent::USE_FIXEDPOSTUPDATE } }
);
    lua["USE_NO_EVENT"] = Urho3D::UpdateEvent::USE_NO_EVENT;
    lua["USE_UPDATE"] = Urho3D::UpdateEvent::USE_UPDATE;
    lua["USE_POSTUPDATE"] = Urho3D::UpdateEvent::USE_POSTUPDATE;
    lua["USE_FIXEDUPDATE"] = Urho3D::UpdateEvent::USE_FIXEDUPDATE;
    lua["USE_FIXEDPOSTUPDATE"] = Urho3D::UpdateEvent::USE_FIXEDPOSTUPDATE;
        
lua.new_enum<Urho3D::CreateMode>( "CreateMode", { 
    { "REPLICATED", Urho3D::CreateMode::REPLICATED },
    { "LOCAL", Urho3D::CreateMode::LOCAL } }
);
    lua["REPLICATED"] = Urho3D::CreateMode::REPLICATED;
    lua["LOCAL"] = Urho3D::CreateMode::LOCAL;
        
lua.new_enum<Urho3D::TransformSpace>( "TransformSpace", { 
    { "TS_LOCAL", Urho3D::TransformSpace::TS_LOCAL },
    { "TS_PARENT", Urho3D::TransformSpace::TS_PARENT },
    { "TS_WORLD", Urho3D::TransformSpace::TS_WORLD } }
);
    lua["TS_LOCAL"] = Urho3D::TransformSpace::TS_LOCAL;
    lua["TS_PARENT"] = Urho3D::TransformSpace::TS_PARENT;
    lua["TS_WORLD"] = Urho3D::TransformSpace::TS_WORLD;
        
lua.new_enum<Urho3D::LoadMode>( "LoadMode", { 
    { "LOAD_RESOURCES_ONLY", Urho3D::LoadMode::LOAD_RESOURCES_ONLY },
    { "LOAD_SCENE", Urho3D::LoadMode::LOAD_SCENE },
    { "LOAD_SCENE_AND_RESOURCES", Urho3D::LoadMode::LOAD_SCENE_AND_RESOURCES } }
);
    lua["LOAD_RESOURCES_ONLY"] = Urho3D::LoadMode::LOAD_RESOURCES_ONLY;
    lua["LOAD_SCENE"] = Urho3D::LoadMode::LOAD_SCENE;
    lua["LOAD_SCENE_AND_RESOURCES"] = Urho3D::LoadMode::LOAD_SCENE_AND_RESOURCES;
        
lua.new_enum<Urho3D::SmoothingType>( "SmoothingType", { 
    { "SMOOTH_NONE", Urho3D::SmoothingType::SMOOTH_NONE },
    { "SMOOTH_POSITION", Urho3D::SmoothingType::SMOOTH_POSITION },
    { "SMOOTH_ROTATION", Urho3D::SmoothingType::SMOOTH_ROTATION } }
);
    lua["SMOOTH_NONE"] = Urho3D::SmoothingType::SMOOTH_NONE;
    lua["SMOOTH_POSITION"] = Urho3D::SmoothingType::SMOOTH_POSITION;
    lua["SMOOTH_ROTATION"] = Urho3D::SmoothingType::SMOOTH_ROTATION;
        
lua.new_enum<Urho3D::InterpMethod>( "InterpMethod", { 
    { "IM_NONE", Urho3D::InterpMethod::IM_NONE },
    { "IM_LINEAR", Urho3D::InterpMethod::IM_LINEAR },
    { "IM_SPLINE", Urho3D::InterpMethod::IM_SPLINE } }
);
    lua["IM_NONE"] = Urho3D::InterpMethod::IM_NONE;
    lua["IM_LINEAR"] = Urho3D::InterpMethod::IM_LINEAR;
    lua["IM_SPLINE"] = Urho3D::InterpMethod::IM_SPLINE;
        
lua.new_enum<Urho3D::CursorShape>( "CursorShape", { 
    { "CS_NORMAL", Urho3D::CursorShape::CS_NORMAL },
    { "CS_IBEAM", Urho3D::CursorShape::CS_IBEAM },
    { "CS_CROSS", Urho3D::CursorShape::CS_CROSS },
    { "CS_RESIZEVERTICAL", Urho3D::CursorShape::CS_RESIZEVERTICAL },
    { "CS_RESIZEDIAGONAL_TOPRIGHT", Urho3D::CursorShape::CS_RESIZEDIAGONAL_TOPRIGHT },
    { "CS_RESIZEHORIZONTAL", Urho3D::CursorShape::CS_RESIZEHORIZONTAL },
    { "CS_RESIZEDIAGONAL_TOPLEFT", Urho3D::CursorShape::CS_RESIZEDIAGONAL_TOPLEFT },
    { "CS_RESIZE_ALL", Urho3D::CursorShape::CS_RESIZE_ALL },
    { "CS_ACCEPTDROP", Urho3D::CursorShape::CS_ACCEPTDROP },
    { "CS_REJECTDROP", Urho3D::CursorShape::CS_REJECTDROP },
    { "CS_BUSY", Urho3D::CursorShape::CS_BUSY },
    { "CS_BUSY_ARROW", Urho3D::CursorShape::CS_BUSY_ARROW },
    { "CS_MAX_SHAPES", Urho3D::CursorShape::CS_MAX_SHAPES } }
);
    lua["CS_NORMAL"] = Urho3D::CursorShape::CS_NORMAL;
    lua["CS_IBEAM"] = Urho3D::CursorShape::CS_IBEAM;
    lua["CS_CROSS"] = Urho3D::CursorShape::CS_CROSS;
    lua["CS_RESIZEVERTICAL"] = Urho3D::CursorShape::CS_RESIZEVERTICAL;
    lua["CS_RESIZEDIAGONAL_TOPRIGHT"] = Urho3D::CursorShape::CS_RESIZEDIAGONAL_TOPRIGHT;
    lua["CS_RESIZEHORIZONTAL"] = Urho3D::CursorShape::CS_RESIZEHORIZONTAL;
    lua["CS_RESIZEDIAGONAL_TOPLEFT"] = Urho3D::CursorShape::CS_RESIZEDIAGONAL_TOPLEFT;
    lua["CS_RESIZE_ALL"] = Urho3D::CursorShape::CS_RESIZE_ALL;
    lua["CS_ACCEPTDROP"] = Urho3D::CursorShape::CS_ACCEPTDROP;
    lua["CS_REJECTDROP"] = Urho3D::CursorShape::CS_REJECTDROP;
    lua["CS_BUSY"] = Urho3D::CursorShape::CS_BUSY;
    lua["CS_BUSY_ARROW"] = Urho3D::CursorShape::CS_BUSY_ARROW;
    lua["CS_MAX_SHAPES"] = Urho3D::CursorShape::CS_MAX_SHAPES;
        
lua.new_enum<Urho3D::FontType>( "FontType", { 
    { "FONT_NONE", Urho3D::FontType::FONT_NONE },
    { "FONT_FREETYPE", Urho3D::FontType::FONT_FREETYPE },
    { "FONT_BITMAP", Urho3D::FontType::FONT_BITMAP },
    { "MAX_FONT_TYPES", Urho3D::FontType::MAX_FONT_TYPES } }
);
    lua["FONT_NONE"] = Urho3D::FontType::FONT_NONE;
    lua["FONT_FREETYPE"] = Urho3D::FontType::FONT_FREETYPE;
    lua["FONT_BITMAP"] = Urho3D::FontType::FONT_BITMAP;
    lua["MAX_FONT_TYPES"] = Urho3D::FontType::MAX_FONT_TYPES;
        
lua.new_enum<Urho3D::HighlightMode>( "HighlightMode", { 
    { "HM_NEVER", Urho3D::HighlightMode::HM_NEVER },
    { "HM_FOCUS", Urho3D::HighlightMode::HM_FOCUS },
    { "HM_ALWAYS", Urho3D::HighlightMode::HM_ALWAYS } }
);
    lua["HM_NEVER"] = Urho3D::HighlightMode::HM_NEVER;
    lua["HM_FOCUS"] = Urho3D::HighlightMode::HM_FOCUS;
    lua["HM_ALWAYS"] = Urho3D::HighlightMode::HM_ALWAYS;
        
lua.new_enum<Urho3D::TextEffect>( "TextEffect", { 
    { "TE_NONE", Urho3D::TextEffect::TE_NONE },
    { "TE_SHADOW", Urho3D::TextEffect::TE_SHADOW },
    { "TE_STROKE", Urho3D::TextEffect::TE_STROKE } }
);
    lua["TE_NONE"] = Urho3D::TextEffect::TE_NONE;
    lua["TE_SHADOW"] = Urho3D::TextEffect::TE_SHADOW;
    lua["TE_STROKE"] = Urho3D::TextEffect::TE_STROKE;
        
lua.new_enum<Urho3D::FontHintLevel>( "FontHintLevel", { 
    { "FONT_HINT_LEVEL_NONE", Urho3D::FontHintLevel::FONT_HINT_LEVEL_NONE },
    { "FONT_HINT_LEVEL_LIGHT", Urho3D::FontHintLevel::FONT_HINT_LEVEL_LIGHT },
    { "FONT_HINT_LEVEL_NORMAL", Urho3D::FontHintLevel::FONT_HINT_LEVEL_NORMAL } }
);
    lua["FONT_HINT_LEVEL_NONE"] = Urho3D::FontHintLevel::FONT_HINT_LEVEL_NONE;
    lua["FONT_HINT_LEVEL_LIGHT"] = Urho3D::FontHintLevel::FONT_HINT_LEVEL_LIGHT;
    lua["FONT_HINT_LEVEL_NORMAL"] = Urho3D::FontHintLevel::FONT_HINT_LEVEL_NORMAL;
        
lua.new_enum<Urho3D::HorizontalAlignment>( "HorizontalAlignment", { 
    { "HA_LEFT", Urho3D::HorizontalAlignment::HA_LEFT },
    { "HA_CENTER", Urho3D::HorizontalAlignment::HA_CENTER },
    { "HA_RIGHT", Urho3D::HorizontalAlignment::HA_RIGHT },
    { "HA_CUSTOM", Urho3D::HorizontalAlignment::HA_CUSTOM } }
);
    lua["HA_LEFT"] = Urho3D::HorizontalAlignment::HA_LEFT;
    lua["HA_CENTER"] = Urho3D::HorizontalAlignment::HA_CENTER;
    lua["HA_RIGHT"] = Urho3D::HorizontalAlignment::HA_RIGHT;
    lua["HA_CUSTOM"] = Urho3D::HorizontalAlignment::HA_CUSTOM;
        
lua.new_enum<Urho3D::VerticalAlignment>( "VerticalAlignment", { 
    { "VA_TOP", Urho3D::VerticalAlignment::VA_TOP },
    { "VA_CENTER", Urho3D::VerticalAlignment::VA_CENTER },
    { "VA_BOTTOM", Urho3D::VerticalAlignment::VA_BOTTOM },
    { "VA_CUSTOM", Urho3D::VerticalAlignment::VA_CUSTOM } }
);
    lua["VA_TOP"] = Urho3D::VerticalAlignment::VA_TOP;
    lua["VA_CENTER"] = Urho3D::VerticalAlignment::VA_CENTER;
    lua["VA_BOTTOM"] = Urho3D::VerticalAlignment::VA_BOTTOM;
    lua["VA_CUSTOM"] = Urho3D::VerticalAlignment::VA_CUSTOM;
        
lua.new_enum<Urho3D::Corner>( "Corner", { 
    { "C_TOPLEFT", Urho3D::Corner::C_TOPLEFT },
    { "C_TOPRIGHT", Urho3D::Corner::C_TOPRIGHT },
    { "C_BOTTOMLEFT", Urho3D::Corner::C_BOTTOMLEFT },
    { "C_BOTTOMRIGHT", Urho3D::Corner::C_BOTTOMRIGHT },
    { "MAX_UIELEMENT_CORNERS", Urho3D::Corner::MAX_UIELEMENT_CORNERS } }
);
    lua["C_TOPLEFT"] = Urho3D::Corner::C_TOPLEFT;
    lua["C_TOPRIGHT"] = Urho3D::Corner::C_TOPRIGHT;
    lua["C_BOTTOMLEFT"] = Urho3D::Corner::C_BOTTOMLEFT;
    lua["C_BOTTOMRIGHT"] = Urho3D::Corner::C_BOTTOMRIGHT;
    lua["MAX_UIELEMENT_CORNERS"] = Urho3D::Corner::MAX_UIELEMENT_CORNERS;
        
lua.new_enum<Urho3D::Orientation>( "Orientation", { 
    { "O_HORIZONTAL", Urho3D::Orientation::O_HORIZONTAL },
    { "O_VERTICAL", Urho3D::Orientation::O_VERTICAL } }
);
    lua["O_HORIZONTAL"] = Urho3D::Orientation::O_HORIZONTAL;
    lua["O_VERTICAL"] = Urho3D::Orientation::O_VERTICAL;
        
lua.new_enum<Urho3D::FocusMode>( "FocusMode", { 
    { "FM_NOTFOCUSABLE", Urho3D::FocusMode::FM_NOTFOCUSABLE },
    { "FM_RESETFOCUS", Urho3D::FocusMode::FM_RESETFOCUS },
    { "FM_FOCUSABLE", Urho3D::FocusMode::FM_FOCUSABLE },
    { "FM_FOCUSABLE_DEFOCUSABLE", Urho3D::FocusMode::FM_FOCUSABLE_DEFOCUSABLE } }
);
    lua["FM_NOTFOCUSABLE"] = Urho3D::FocusMode::FM_NOTFOCUSABLE;
    lua["FM_RESETFOCUS"] = Urho3D::FocusMode::FM_RESETFOCUS;
    lua["FM_FOCUSABLE"] = Urho3D::FocusMode::FM_FOCUSABLE;
    lua["FM_FOCUSABLE_DEFOCUSABLE"] = Urho3D::FocusMode::FM_FOCUSABLE_DEFOCUSABLE;
        
lua.new_enum<Urho3D::LayoutMode>( "LayoutMode", { 
    { "LM_FREE", Urho3D::LayoutMode::LM_FREE },
    { "LM_HORIZONTAL", Urho3D::LayoutMode::LM_HORIZONTAL },
    { "LM_VERTICAL", Urho3D::LayoutMode::LM_VERTICAL } }
);
    lua["LM_FREE"] = Urho3D::LayoutMode::LM_FREE;
    lua["LM_HORIZONTAL"] = Urho3D::LayoutMode::LM_HORIZONTAL;
    lua["LM_VERTICAL"] = Urho3D::LayoutMode::LM_VERTICAL;
        
lua.new_enum<Urho3D::TraversalMode>( "TraversalMode", { 
    { "TM_BREADTH_FIRST", Urho3D::TraversalMode::TM_BREADTH_FIRST },
    { "TM_DEPTH_FIRST", Urho3D::TraversalMode::TM_DEPTH_FIRST } }
);
    lua["TM_BREADTH_FIRST"] = Urho3D::TraversalMode::TM_BREADTH_FIRST;
    lua["TM_DEPTH_FIRST"] = Urho3D::TraversalMode::TM_DEPTH_FIRST;
        
lua.new_enum<Urho3D::DragAndDropMode>( "DragAndDropMode", { 
    { "DD_DISABLED", Urho3D::DragAndDropMode::DD_DISABLED },
    { "DD_SOURCE", Urho3D::DragAndDropMode::DD_SOURCE },
    { "DD_TARGET", Urho3D::DragAndDropMode::DD_TARGET },
    { "DD_SOURCE_AND_TARGET", Urho3D::DragAndDropMode::DD_SOURCE_AND_TARGET } }
);
    lua["DD_DISABLED"] = Urho3D::DragAndDropMode::DD_DISABLED;
    lua["DD_SOURCE"] = Urho3D::DragAndDropMode::DD_SOURCE;
    lua["DD_TARGET"] = Urho3D::DragAndDropMode::DD_TARGET;
    lua["DD_SOURCE_AND_TARGET"] = Urho3D::DragAndDropMode::DD_SOURCE_AND_TARGET;
        
lua.new_enum<Urho3D::WindowDragMode>( "WindowDragMode", { 
    { "DRAG_NONE", Urho3D::WindowDragMode::DRAG_NONE },
    { "DRAG_MOVE", Urho3D::WindowDragMode::DRAG_MOVE },
    { "DRAG_RESIZE_TOPLEFT", Urho3D::WindowDragMode::DRAG_RESIZE_TOPLEFT },
    { "DRAG_RESIZE_TOP", Urho3D::WindowDragMode::DRAG_RESIZE_TOP },
    { "DRAG_RESIZE_TOPRIGHT", Urho3D::WindowDragMode::DRAG_RESIZE_TOPRIGHT },
    { "DRAG_RESIZE_RIGHT", Urho3D::WindowDragMode::DRAG_RESIZE_RIGHT },
    { "DRAG_RESIZE_BOTTOMRIGHT", Urho3D::WindowDragMode::DRAG_RESIZE_BOTTOMRIGHT },
    { "DRAG_RESIZE_BOTTOM", Urho3D::WindowDragMode::DRAG_RESIZE_BOTTOM },
    { "DRAG_RESIZE_BOTTOMLEFT", Urho3D::WindowDragMode::DRAG_RESIZE_BOTTOMLEFT },
    { "DRAG_RESIZE_LEFT", Urho3D::WindowDragMode::DRAG_RESIZE_LEFT } }
);
    lua["DRAG_NONE"] = Urho3D::WindowDragMode::DRAG_NONE;
    lua["DRAG_MOVE"] = Urho3D::WindowDragMode::DRAG_MOVE;
    lua["DRAG_RESIZE_TOPLEFT"] = Urho3D::WindowDragMode::DRAG_RESIZE_TOPLEFT;
    lua["DRAG_RESIZE_TOP"] = Urho3D::WindowDragMode::DRAG_RESIZE_TOP;
    lua["DRAG_RESIZE_TOPRIGHT"] = Urho3D::WindowDragMode::DRAG_RESIZE_TOPRIGHT;
    lua["DRAG_RESIZE_RIGHT"] = Urho3D::WindowDragMode::DRAG_RESIZE_RIGHT;
    lua["DRAG_RESIZE_BOTTOMRIGHT"] = Urho3D::WindowDragMode::DRAG_RESIZE_BOTTOMRIGHT;
    lua["DRAG_RESIZE_BOTTOM"] = Urho3D::WindowDragMode::DRAG_RESIZE_BOTTOM;
    lua["DRAG_RESIZE_BOTTOMLEFT"] = Urho3D::WindowDragMode::DRAG_RESIZE_BOTTOMLEFT;
    lua["DRAG_RESIZE_LEFT"] = Urho3D::WindowDragMode::DRAG_RESIZE_LEFT;
        
lua.new_enum<Urho3D::LoopMode2D>( "LoopMode2D", { 
    { "LM_DEFAULT", Urho3D::LoopMode2D::LM_DEFAULT },
    { "LM_FORCE_LOOPED", Urho3D::LoopMode2D::LM_FORCE_LOOPED },
    { "LM_FORCE_CLAMPED", Urho3D::LoopMode2D::LM_FORCE_CLAMPED } }
);
    lua["LM_DEFAULT"] = Urho3D::LoopMode2D::LM_DEFAULT;
    lua["LM_FORCE_LOOPED"] = Urho3D::LoopMode2D::LM_FORCE_LOOPED;
    lua["LM_FORCE_CLAMPED"] = Urho3D::LoopMode2D::LM_FORCE_CLAMPED;
        
lua.new_enum<Urho3D::EmitterType2D>( "EmitterType2D", { 
    { "EMITTER_TYPE_GRAVITY", Urho3D::EmitterType2D::EMITTER_TYPE_GRAVITY },
    { "EMITTER_TYPE_RADIAL", Urho3D::EmitterType2D::EMITTER_TYPE_RADIAL } }
);
    lua["EMITTER_TYPE_GRAVITY"] = Urho3D::EmitterType2D::EMITTER_TYPE_GRAVITY;
    lua["EMITTER_TYPE_RADIAL"] = Urho3D::EmitterType2D::EMITTER_TYPE_RADIAL;
        
lua.new_enum<Urho3D::Orientation2D>( "Orientation2D", { 
    { "O_ORTHOGONAL", Urho3D::Orientation2D::O_ORTHOGONAL },
    { "O_ISOMETRIC", Urho3D::Orientation2D::O_ISOMETRIC },
    { "O_STAGGERED", Urho3D::Orientation2D::O_STAGGERED },
    { "O_HEXAGONAL", Urho3D::Orientation2D::O_HEXAGONAL } }
);
    lua["O_ORTHOGONAL"] = Urho3D::Orientation2D::O_ORTHOGONAL;
    lua["O_ISOMETRIC"] = Urho3D::Orientation2D::O_ISOMETRIC;
    lua["O_STAGGERED"] = Urho3D::Orientation2D::O_STAGGERED;
    lua["O_HEXAGONAL"] = Urho3D::Orientation2D::O_HEXAGONAL;
        
lua.new_enum<Urho3D::TileMapLayerType2D>( "TileMapLayerType2D", { 
    { "LT_TILE_LAYER", Urho3D::TileMapLayerType2D::LT_TILE_LAYER },
    { "LT_OBJECT_GROUP", Urho3D::TileMapLayerType2D::LT_OBJECT_GROUP },
    { "LT_IMAGE_LAYER", Urho3D::TileMapLayerType2D::LT_IMAGE_LAYER },
    { "LT_INVALID", Urho3D::TileMapLayerType2D::LT_INVALID } }
);
    lua["LT_TILE_LAYER"] = Urho3D::TileMapLayerType2D::LT_TILE_LAYER;
    lua["LT_OBJECT_GROUP"] = Urho3D::TileMapLayerType2D::LT_OBJECT_GROUP;
    lua["LT_IMAGE_LAYER"] = Urho3D::TileMapLayerType2D::LT_IMAGE_LAYER;
    lua["LT_INVALID"] = Urho3D::TileMapLayerType2D::LT_INVALID;
        
lua.new_enum<Urho3D::TileMapObjectType2D>( "TileMapObjectType2D", { 
    { "OT_RECTANGLE", Urho3D::TileMapObjectType2D::OT_RECTANGLE },
    { "OT_ELLIPSE", Urho3D::TileMapObjectType2D::OT_ELLIPSE },
    { "OT_POLYGON", Urho3D::TileMapObjectType2D::OT_POLYGON },
    { "OT_POLYLINE", Urho3D::TileMapObjectType2D::OT_POLYLINE },
    { "OT_TILE", Urho3D::TileMapObjectType2D::OT_TILE },
    { "OT_INVALID", Urho3D::TileMapObjectType2D::OT_INVALID } }
);
    lua["OT_RECTANGLE"] = Urho3D::TileMapObjectType2D::OT_RECTANGLE;
    lua["OT_ELLIPSE"] = Urho3D::TileMapObjectType2D::OT_ELLIPSE;
    lua["OT_POLYGON"] = Urho3D::TileMapObjectType2D::OT_POLYGON;
    lua["OT_POLYLINE"] = Urho3D::TileMapObjectType2D::OT_POLYLINE;
    lua["OT_TILE"] = Urho3D::TileMapObjectType2D::OT_TILE;
    lua["OT_INVALID"] = Urho3D::TileMapObjectType2D::OT_INVALID;

}

