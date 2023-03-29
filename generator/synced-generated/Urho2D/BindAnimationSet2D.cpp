
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/AnimationSet2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/AnimationSet2D.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/Urho2D/Sprite2D.h>
#include <Urho3D/Urho2D/SpriterData2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_AnimationSet2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::AnimationSet2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::AnimationSet2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::AnimationSet2D>((Urho3D::AnimationSet2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::AnimationSet2D>( "AnimationSet2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Resource,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::AnimationSet2D>(context);
        });

// Members

    /*Load resource from stream. May be called from a worker thread. Return true if successful.*//*(Deserializer &source) override*/
    type["BeginLoad"] = static_cast<bool (Urho3D::AnimationSet2D::*)(Deserializer &)>(&Urho3D::AnimationSet2D::BeginLoad) ;
    /*Finish resource loading. Always called from the main thread. Return true if successful.*//*() override*/
    type["EndLoad"] = static_cast<bool (Urho3D::AnimationSet2D::*)()>(&Urho3D::AnimationSet2D::EndLoad) ;
    /*Get number of animations. BIND_AS_PROPERTY*//*() const*/
    type["GetNumAnimations"] = static_cast<unsigned (Urho3D::AnimationSet2D::*)() const>(&Urho3D::AnimationSet2D::GetNumAnimations) ;
    /*Return animation name.*//*(unsigned index) const*/
    type["GetAnimation"] = static_cast<String (Urho3D::AnimationSet2D::*)(unsigned) const>(&Urho3D::AnimationSet2D::GetAnimation) ;
    /*Check has animation.*//*(const String &animationName) const*/
    type["HasAnimation"] = static_cast<bool (Urho3D::AnimationSet2D::*)(const  String &) const>(&Urho3D::AnimationSet2D::HasAnimation) ;
    /*Return sprite.*//*() const*/
    type["GetSprite"] = [](Urho3D::AnimationSet2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSprite());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return spriter data.*//*() const*/
    type["GetSpriterData"] = static_cast<Spriter::SpriterData* (Urho3D::AnimationSet2D::*)() const>(&Urho3D::AnimationSet2D::GetSpriterData) ;
    /*Return spriter file sprite.*//*(int folderId, int fileId) const*/
    type["GetSpriterFileSprite"] = [](Urho3D::AnimationSet2D& self, int folderId, int fileId, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetSpriterFileSprite(folderId, fileId));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*True if a spritesheet xml file was found during the loading of this animationSet.*//*() const*/
    type["HasSpriteSheet"] = static_cast<bool (Urho3D::AnimationSet2D::*)() const>(&Urho3D::AnimationSet2D::HasSpriteSheet) ;
    type["numAnimations"] = sol::property(static_cast<unsigned (Urho3D::AnimationSet2D::*)() const>(&Urho3D::AnimationSet2D::GetNumAnimations) );

}

