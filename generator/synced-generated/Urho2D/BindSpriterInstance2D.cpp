
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/SpriterInstance2D.h


#if 0 // Forbidden file: Urho2D/SpriterInstance2D.h

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/SpriterInstance2D.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Scene/Component.h>
#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Spriter_SpriterInstance(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Spriter::SpriterInstance>( "SpriterInstance"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::Spriter::SpriterInstance(Component *, SpriterData *)>();

// Members

    /*Update animation.*//*(float deltaTime)*/
    type["Update"] = static_cast<void (Urho3D::Spriter::SpriterInstance::*)(float)>(&Urho3D::Spriter::SpriterInstance::Update) ;
    /*Return current entity.*//*() const*/
    type["GetEntity"] = static_cast<Entity* (Urho3D::Spriter::SpriterInstance::*)() const>(&Urho3D::Spriter::SpriterInstance::GetEntity) ;
    /*Return current animation.*//*() const*/
    type["GetAnimation"] = static_cast<Animation* (Urho3D::Spriter::SpriterInstance::*)() const>(&Urho3D::Spriter::SpriterInstance::GetAnimation) ;
    /*Return root spatial info.*//*() const*/
    type["GetSpatialInfo"] = static_cast<const SpatialInfo& (Urho3D::Spriter::SpriterInstance::*)() const>(&Urho3D::Spriter::SpriterInstance::GetSpatialInfo) ;
    /*Return animation result timeline keys.*//*() const*/
    type["GetTimelineKeys"] = static_cast<const PODVector<SpatialTimelineKey*>& (Urho3D::Spriter::SpriterInstance::*)() const>(&Urho3D::Spriter::SpriterInstance::GetTimelineKeys) ;
    type["SetEntity"] = sol::overload(
        static_cast<bool (Urho3D::Spriter::SpriterInstance::*)(int)>(&Urho3D::Spriter::SpriterInstance::SetEntity) ,
        static_cast<bool (Urho3D::Spriter::SpriterInstance::*)(const  String &)>(&Urho3D::Spriter::SpriterInstance::SetEntity)  );
    type["SetAnimation"] = sol::overload(
        static_cast<bool (Urho3D::Spriter::SpriterInstance::*)(int, LoopMode)>(&Urho3D::Spriter::SpriterInstance::SetAnimation) ,
        [](Urho3D::Spriter::SpriterInstance& self, int index){ return self.SetAnimation(index); },
        static_cast<bool (Urho3D::Spriter::SpriterInstance::*)(const  String &, LoopMode)>(&Urho3D::Spriter::SpriterInstance::SetAnimation) ,
        [](Urho3D::Spriter::SpriterInstance& self, const  String & animationName){ return self.SetAnimation(animationName); } );
    type["setSpatialInfo"] = sol::overload(
        static_cast<void (Urho3D::Spriter::SpriterInstance::*)(const  SpatialInfo &)>(&Urho3D::Spriter::SpriterInstance::setSpatialInfo) ,
        static_cast<void (Urho3D::Spriter::SpriterInstance::*)(float, float, float, float, float)>(&Urho3D::Spriter::SpriterInstance::setSpatialInfo)  );

}


#endif // Forbidden file: Urho2D/SpriterInstance2D.h
