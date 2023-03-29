
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriterData2D.h


#if 0 // Forbidden file: Urho2D/SpriterData2D.h

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriterData2D.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spriter_Animation(sol::state_view& lua)
{
    
using namespace Urho3D;
using namespace Urho3D::Spriter;

auto type = lua.new_usertype<Urho3D::Spriter::Animation>( "Animation"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Spriter::Animation()>();

// Members

    /**//*()*/
    type["Reset"] = static_cast<void (Urho3D::Spriter::Animation::*)()>(&Urho3D::Spriter::Animation::Reset) ;
    /**//*(const pugi::xml_node &node)*/
    type["Load"] = static_cast<bool (Urho3D::Spriter::Animation::*)(const pugi::xml_node &)>(&Urho3D::Spriter::Animation::Load) ;
    type["id_"] = &Urho3D::Spriter::Animation::id_;
    type["name_"] = &Urho3D::Spriter::Animation::name_;
    type["length_"] = &Urho3D::Spriter::Animation::length_;
    type["looping_"] = &Urho3D::Spriter::Animation::looping_;
    type["mainlineKeys_"] = &Urho3D::Spriter::Animation::mainlineKeys_;
    type["timelines_"] = &Urho3D::Spriter::Animation::timelines_;

}


#endif // Forbidden file: Urho2D/SpriterData2D.h

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriterData2D.h


#if 0 // Forbidden file: Urho2D/SpriterData2D.h

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spriter_Ref(sol::state_view& lua)
{
    
using namespace Urho3D;
using namespace Urho3D::Spriter;

auto type = lua.new_usertype<Urho3D::Spriter::Ref>( "Ref"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Spriter::Ref()>();

// Members

    /**//*(const pugi::xml_node &node)*/
    type["Load"] = static_cast<bool (Urho3D::Spriter::Ref::*)(const pugi::xml_node &)>(&Urho3D::Spriter::Ref::Load) ;
    type["id_"] = &Urho3D::Spriter::Ref::id_;
    type["parent_"] = &Urho3D::Spriter::Ref::parent_;
    type["timeline_"] = &Urho3D::Spriter::Ref::timeline_;
    type["key_"] = &Urho3D::Spriter::Ref::key_;
    type["zIndex_"] = &Urho3D::Spriter::Ref::zIndex_;

}


#endif // Forbidden file: Urho2D/SpriterData2D.h

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriterData2D.h


#if 0 // Forbidden file: Urho2D/SpriterData2D.h

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriterData2D.h>
#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spriter_SpatialInfo(sol::state_view& lua)
{
    
using namespace Urho3D;
using SpatialInfo = Spriter::SpatialInfo;
using namespace Urho3D::Spriter;

auto type = lua.new_usertype<Urho3D::Spriter::SpatialInfo>( "SpatialInfo"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Spriter::SpatialInfo(float, float, float, float, float, float, int),
        Urho3D::Spriter::SpatialInfo(float, float, float, float, float, float),
        Urho3D::Spriter::SpatialInfo(float, float, float, float, float)>();

// Members

    /**//*(const SpatialInfo &parentInfo) const*/
    type["UnmapFromParent"] = static_cast<SpatialInfo (Urho3D::Spriter::SpatialInfo::*)(const  SpatialInfo &) const>(&Urho3D::Spriter::SpatialInfo::UnmapFromParent) ;
    /**//*(const SpatialInfo &other, float t)*/
    type["Interpolate"] = static_cast<void (Urho3D::Spriter::SpatialInfo::*)(const  SpatialInfo &, float)>(&Urho3D::Spriter::SpatialInfo::Interpolate) ;
    type["x_"] = &Urho3D::Spriter::SpatialInfo::x_;
    type["y_"] = &Urho3D::Spriter::SpatialInfo::y_;
    type["angle_"] = &Urho3D::Spriter::SpatialInfo::angle_;
    type["scaleX_"] = &Urho3D::Spriter::SpatialInfo::scaleX_;
    type["scaleY_"] = &Urho3D::Spriter::SpatialInfo::scaleY_;
    type["alpha_"] = &Urho3D::Spriter::SpatialInfo::alpha_;
    type["spin_"] = &Urho3D::Spriter::SpatialInfo::spin_;

}


#endif // Forbidden file: Urho2D/SpriterData2D.h

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriterData2D.h


#if 0 // Forbidden file: Urho2D/SpriterData2D.h

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriterData2D.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spriter_Timeline(sol::state_view& lua)
{
    
using namespace Urho3D;
using namespace Urho3D::Spriter;

auto type = lua.new_usertype<Urho3D::Spriter::Timeline>( "Timeline"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Spriter::Timeline()>();

// Members

    /**//*()*/
    type["Reset"] = static_cast<void (Urho3D::Spriter::Timeline::*)()>(&Urho3D::Spriter::Timeline::Reset) ;
    /**//*(const pugi::xml_node &node)*/
    type["Load"] = static_cast<bool (Urho3D::Spriter::Timeline::*)(const pugi::xml_node &)>(&Urho3D::Spriter::Timeline::Load) ;
    type["id_"] = &Urho3D::Spriter::Timeline::id_;
    type["name_"] = &Urho3D::Spriter::Timeline::name_;
    type["objectType_"] = &Urho3D::Spriter::Timeline::objectType_;
    type["keys_"] = &Urho3D::Spriter::Timeline::keys_;

}


#endif // Forbidden file: Urho2D/SpriterData2D.h

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriterData2D.h


#if 0 // Forbidden file: Urho2D/SpriterData2D.h

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriterData2D.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spriter_File(sol::state_view& lua)
{
    
using namespace Urho3D;
using namespace Urho3D::Spriter;

auto type = lua.new_usertype<Urho3D::Spriter::File>( "File"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Spriter::File(Folder *)>();

// Members

    /**//*(const pugi::xml_node &node)*/
    type["Load"] = static_cast<bool (Urho3D::Spriter::File::*)(const pugi::xml_node &)>(&Urho3D::Spriter::File::Load) ;
    type["folder_"] = &Urho3D::Spriter::File::folder_;
    type["id_"] = &Urho3D::Spriter::File::id_;
    type["name_"] = &Urho3D::Spriter::File::name_;
    type["width_"] = &Urho3D::Spriter::File::width_;
    type["height_"] = &Urho3D::Spriter::File::height_;
    type["pivotX_"] = &Urho3D::Spriter::File::pivotX_;
    type["pivotY_"] = &Urho3D::Spriter::File::pivotY_;

}


#endif // Forbidden file: Urho2D/SpriterData2D.h

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriterData2D.h


#if 0 // Forbidden file: Urho2D/SpriterData2D.h

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriterData2D.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spriter_MainlineKey(sol::state_view& lua)
{
    
using namespace Urho3D;
using namespace Urho3D::Spriter;

auto type = lua.new_usertype<Urho3D::Spriter::MainlineKey>( "MainlineKey"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Spriter::MainlineKey()>();

// Members

    /**//*()*/
    type["Reset"] = static_cast<void (Urho3D::Spriter::MainlineKey::*)()>(&Urho3D::Spriter::MainlineKey::Reset) ;
    /**//*(const pugi::xml_node &node)*/
    type["Load"] = static_cast<bool (Urho3D::Spriter::MainlineKey::*)(const pugi::xml_node &)>(&Urho3D::Spriter::MainlineKey::Load) ;
    type["id_"] = &Urho3D::Spriter::MainlineKey::id_;
    type["time_"] = &Urho3D::Spriter::MainlineKey::time_;
    type["boneRefs_"] = &Urho3D::Spriter::MainlineKey::boneRefs_;
    type["objectRefs_"] = &Urho3D::Spriter::MainlineKey::objectRefs_;

}


#endif // Forbidden file: Urho2D/SpriterData2D.h

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriterData2D.h


#if 0 // Forbidden file: Urho2D/SpriterData2D.h

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriterData2D.h>
#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spriter_SpatialTimelineKey(sol::state_view& lua)
{
    
using namespace Urho3D;
using TimelineKey = Spriter::SpatialTimelineKey
using namespace Urho3D::Spriter;

auto type = lua.new_usertype<Urho3D::Spriter::SpatialTimelineKey>( "SpatialTimelineKey"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Spriter::TimelineKey>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Spriter::SpatialTimelineKey(Timeline *)>();

// Members

    /**//*(const pugi::xml_node &node) override*/
    type["Load"] = static_cast<bool (Urho3D::Spriter::SpatialTimelineKey::*)(const pugi::xml_node &)>(&Urho3D::Spriter::SpatialTimelineKey::Load) ;
    /**//*(const TimelineKey &other, float t) override*/
    type["Interpolate"] = static_cast<void (Urho3D::Spriter::SpatialTimelineKey::*)(const  TimelineKey &, float)>(&Urho3D::Spriter::SpatialTimelineKey::Interpolate) ;
    /**//*(const SpatialTimelineKey &rhs)=default*/
    type["operator_assign"] = static_cast<SpatialTimelineKey& (Urho3D::Spriter::SpatialTimelineKey::*)(const  SpatialTimelineKey &)>(&Urho3D::Spriter::SpatialTimelineKey::operator=) ;
    type["info_"] = &Urho3D::Spriter::SpatialTimelineKey::info_;

}


#endif // Forbidden file: Urho2D/SpriterData2D.h

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriterData2D.h


#if 0 // Forbidden file: Urho2D/SpriterData2D.h

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriterData2D.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spriter_Folder(sol::state_view& lua)
{
    
using namespace Urho3D;
using namespace Urho3D::Spriter;

auto type = lua.new_usertype<Urho3D::Spriter::Folder>( "Folder"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Spriter::Folder()>();

// Members

    /**//*()*/
    type["Reset"] = static_cast<void (Urho3D::Spriter::Folder::*)()>(&Urho3D::Spriter::Folder::Reset) ;
    /**//*(const pugi::xml_node &node)*/
    type["Load"] = static_cast<bool (Urho3D::Spriter::Folder::*)(const pugi::xml_node &)>(&Urho3D::Spriter::Folder::Load) ;
    type["id_"] = &Urho3D::Spriter::Folder::id_;
    type["name_"] = &Urho3D::Spriter::Folder::name_;
    type["files_"] = &Urho3D::Spriter::Folder::files_;

}


#endif // Forbidden file: Urho2D/SpriterData2D.h

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriterData2D.h


#if 0 // Forbidden file: Urho2D/SpriterData2D.h

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriterData2D.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spriter_BoneTimelineKey(sol::state_view& lua)
{
    
using namespace Urho3D;
using namespace Urho3D::Spriter;

auto type = lua.new_usertype<Urho3D::Spriter::BoneTimelineKey>( "BoneTimelineKey"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Spriter::SpatialTimelineKey,Urho3D::Spriter::TimelineKey>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Spriter::BoneTimelineKey(Timeline *)>();

// Members

    /**//*() const override*/
    type["GetObjectType"] = static_cast<ObjectType (Urho3D::Spriter::BoneTimelineKey::*)() const>(&Urho3D::Spriter::BoneTimelineKey::GetObjectType) ;
    /**//*() const override*/
    type["Clone"] = static_cast<TimelineKey* (Urho3D::Spriter::BoneTimelineKey::*)() const>(&Urho3D::Spriter::BoneTimelineKey::Clone) ;
    /**//*(const pugi::xml_node &node) override*/
    type["Load"] = static_cast<bool (Urho3D::Spriter::BoneTimelineKey::*)(const pugi::xml_node &)>(&Urho3D::Spriter::BoneTimelineKey::Load) ;
    /**//*(const TimelineKey &other, float t) override*/
    type["Interpolate"] = static_cast<void (Urho3D::Spriter::BoneTimelineKey::*)(const  TimelineKey &, float)>(&Urho3D::Spriter::BoneTimelineKey::Interpolate) ;
    /**//*(const BoneTimelineKey &rhs)=default*/
    type["operator_assign"] = static_cast<BoneTimelineKey& (Urho3D::Spriter::BoneTimelineKey::*)(const  BoneTimelineKey &)>(&Urho3D::Spriter::BoneTimelineKey::operator=) ;
    type["length_"] = &Urho3D::Spriter::BoneTimelineKey::length_;
    type["width_"] = &Urho3D::Spriter::BoneTimelineKey::width_;

}


#endif // Forbidden file: Urho2D/SpriterData2D.h

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriterData2D.h


#if 0 // Forbidden file: Urho2D/SpriterData2D.h

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriterData2D.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spriter_SpriterData(sol::state_view& lua)
{
    
using namespace Urho3D;
using namespace Urho3D::Spriter;

auto type = lua.new_usertype<Urho3D::Spriter::SpriterData>( "SpriterData"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Spriter::SpriterData()>();

// Members

    /**//*()*/
    type["Reset"] = static_cast<void (Urho3D::Spriter::SpriterData::*)()>(&Urho3D::Spriter::SpriterData::Reset) ;
    type["Load"] = sol::overload(
        static_cast<bool (Urho3D::Spriter::SpriterData::*)(const pugi::xml_node &)>(&Urho3D::Spriter::SpriterData::Load) ,
        static_cast<bool (Urho3D::Spriter::SpriterData::*)(const void *, size_t)>(&Urho3D::Spriter::SpriterData::Load)  );
    type["scmlVersion_"] = &Urho3D::Spriter::SpriterData::scmlVersion_;
    type["generator_"] = &Urho3D::Spriter::SpriterData::generator_;
    type["generatorVersion_"] = &Urho3D::Spriter::SpriterData::generatorVersion_;
    type["folders_"] = &Urho3D::Spriter::SpriterData::folders_;
    type["entities_"] = &Urho3D::Spriter::SpriterData::entities_;

}


#endif // Forbidden file: Urho2D/SpriterData2D.h

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriterData2D.h


#if 0 // Forbidden file: Urho2D/SpriterData2D.h

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriterData2D.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spriter_TimelineKey(sol::state_view& lua)
{
    
using namespace Urho3D;
using namespace Urho3D::Spriter;

auto type = lua.new_usertype<Urho3D::Spriter::TimelineKey>( "TimelineKey"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*ABSTRACT*/

// Members

    /**//*() const =0*/
    type["GetObjectType"] = static_cast<ObjectType (Urho3D::Spriter::TimelineKey::*)() const >(&Urho3D::Spriter::TimelineKey::GetObjectType) ;
    /**//*() const =0*/
    type["Clone"] = static_cast<TimelineKey* (Urho3D::Spriter::TimelineKey::*)() const >(&Urho3D::Spriter::TimelineKey::Clone) ;
    /**//*(const pugi::xml_node &node)*/
    type["Load"] = static_cast<bool (Urho3D::Spriter::TimelineKey::*)(const pugi::xml_node &)>(&Urho3D::Spriter::TimelineKey::Load) ;
    /**//*(const TimelineKey &other, float t)=0*/
    type["Interpolate"] = static_cast<void (Urho3D::Spriter::TimelineKey::*)(const  TimelineKey &, float)>(&Urho3D::Spriter::TimelineKey::Interpolate) ;
    /**//*(const TimelineKey &rhs)*/
    type["operator_assign"] = static_cast<TimelineKey& (Urho3D::Spriter::TimelineKey::*)(const  TimelineKey &)>(&Urho3D::Spriter::TimelineKey::operator=) ;
    /**//*(float currentTime, float nextTimelineTime) const*/
    type["GetTByCurveType"] = static_cast<float (Urho3D::Spriter::TimelineKey::*)(float, float) const>(&Urho3D::Spriter::TimelineKey::GetTByCurveType) ;
    type["timeline_"] = &Urho3D::Spriter::TimelineKey::timeline_;
    type["id_"] = &Urho3D::Spriter::TimelineKey::id_;
    type["time_"] = &Urho3D::Spriter::TimelineKey::time_;
    type["curveType_"] = &Urho3D::Spriter::TimelineKey::curveType_;
    type["c1_"] = &Urho3D::Spriter::TimelineKey::c1_;
    type["c2_"] = &Urho3D::Spriter::TimelineKey::c2_;

}


#endif // Forbidden file: Urho2D/SpriterData2D.h

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriterData2D.h


#if 0 // Forbidden file: Urho2D/SpriterData2D.h

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spriter_MapInstruction(sol::state_view& lua)
{
    
using namespace Urho3D;
using namespace Urho3D::Spriter;

auto type = lua.new_usertype<Urho3D::Spriter::MapInstruction>( "MapInstruction"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Spriter::MapInstruction()>();

// Members

    /**//*(const pugi::xml_node &node)*/
    type["Load"] = static_cast<bool (Urho3D::Spriter::MapInstruction::*)(const pugi::xml_node &)>(&Urho3D::Spriter::MapInstruction::Load) ;
    type["folder_"] = &Urho3D::Spriter::MapInstruction::folder_;
    type["file_"] = &Urho3D::Spriter::MapInstruction::file_;
    type["targetFolder_"] = &Urho3D::Spriter::MapInstruction::targetFolder_;
    type["targetFile_"] = &Urho3D::Spriter::MapInstruction::targetFile_;

}


#endif // Forbidden file: Urho2D/SpriterData2D.h

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriterData2D.h


#if 0 // Forbidden file: Urho2D/SpriterData2D.h

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriterData2D.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spriter_SpriteTimelineKey(sol::state_view& lua)
{
    
using namespace Urho3D;
using namespace Urho3D::Spriter;

auto type = lua.new_usertype<Urho3D::Spriter::SpriteTimelineKey>( "SpriteTimelineKey"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Spriter::SpatialTimelineKey,Urho3D::Spriter::TimelineKey>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Spriter::SpriteTimelineKey(Timeline *)>();

// Members

    /**//*() const override*/
    type["GetObjectType"] = static_cast<ObjectType (Urho3D::Spriter::SpriteTimelineKey::*)() const>(&Urho3D::Spriter::SpriteTimelineKey::GetObjectType) ;
    /**//*() const override*/
    type["Clone"] = static_cast<TimelineKey* (Urho3D::Spriter::SpriteTimelineKey::*)() const>(&Urho3D::Spriter::SpriteTimelineKey::Clone) ;
    /**//*(const pugi::xml_node &node) override*/
    type["Load"] = static_cast<bool (Urho3D::Spriter::SpriteTimelineKey::*)(const pugi::xml_node &)>(&Urho3D::Spriter::SpriteTimelineKey::Load) ;
    /**//*(const TimelineKey &other, float t) override*/
    type["Interpolate"] = static_cast<void (Urho3D::Spriter::SpriteTimelineKey::*)(const  TimelineKey &, float)>(&Urho3D::Spriter::SpriteTimelineKey::Interpolate) ;
    /**//*(const SpriteTimelineKey &rhs)*/
    type["operator_assign"] = static_cast<SpriteTimelineKey& (Urho3D::Spriter::SpriteTimelineKey::*)(const  SpriteTimelineKey &)>(&Urho3D::Spriter::SpriteTimelineKey::operator=) ;
    type["folderId_"] = &Urho3D::Spriter::SpriteTimelineKey::folderId_;
    type["fileId_"] = &Urho3D::Spriter::SpriteTimelineKey::fileId_;
    type["useDefaultPivot_"] = &Urho3D::Spriter::SpriteTimelineKey::useDefaultPivot_;
    type["pivotX_"] = &Urho3D::Spriter::SpriteTimelineKey::pivotX_;
    type["pivotY_"] = &Urho3D::Spriter::SpriteTimelineKey::pivotY_;
    type["zIndex_"] = &Urho3D::Spriter::SpriteTimelineKey::zIndex_;

}


#endif // Forbidden file: Urho2D/SpriterData2D.h

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriterData2D.h


#if 0 // Forbidden file: Urho2D/SpriterData2D.h

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriterData2D.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spriter_CharacterMap(sol::state_view& lua)
{
    
using namespace Urho3D;
using namespace Urho3D::Spriter;

auto type = lua.new_usertype<Urho3D::Spriter::CharacterMap>( "CharacterMap"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Spriter::CharacterMap()>();

// Members

    /**//*()*/
    type["Reset"] = static_cast<void (Urho3D::Spriter::CharacterMap::*)()>(&Urho3D::Spriter::CharacterMap::Reset) ;
    /**//*(const pugi::xml_node &node)*/
    type["Load"] = static_cast<bool (Urho3D::Spriter::CharacterMap::*)(const pugi::xml_node &)>(&Urho3D::Spriter::CharacterMap::Load) ;
    type["id_"] = &Urho3D::Spriter::CharacterMap::id_;
    type["name_"] = &Urho3D::Spriter::CharacterMap::name_;
    type["maps_"] = &Urho3D::Spriter::CharacterMap::maps_;

}


#endif // Forbidden file: Urho2D/SpriterData2D.h

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriterData2D.h


#if 0 // Forbidden file: Urho2D/SpriterData2D.h

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriterData2D.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spriter_Entity(sol::state_view& lua)
{
    
using namespace Urho3D;
using namespace Urho3D::Spriter;

auto type = lua.new_usertype<Urho3D::Spriter::Entity>( "Entity"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Spriter::Entity()>();

// Members

    /**//*()*/
    type["Reset"] = static_cast<void (Urho3D::Spriter::Entity::*)()>(&Urho3D::Spriter::Entity::Reset) ;
    /**//*(const pugi::xml_node &node)*/
    type["Load"] = static_cast<bool (Urho3D::Spriter::Entity::*)(const pugi::xml_node &)>(&Urho3D::Spriter::Entity::Load) ;
    type["id_"] = &Urho3D::Spriter::Entity::id_;
    type["name_"] = &Urho3D::Spriter::Entity::name_;
    type["characterMaps_"] = &Urho3D::Spriter::Entity::characterMaps_;
    type["animations_"] = &Urho3D::Spriter::Entity::animations_;

}


#endif // Forbidden file: Urho2D/SpriterData2D.h
