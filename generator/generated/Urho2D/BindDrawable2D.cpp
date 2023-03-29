
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/Drawable2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/Drawable2D.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Urho2D/Drawable2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Drawable2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Drawable2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Drawable2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Drawable2D>((Urho3D::Drawable2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Drawable2D>( "Drawable2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    /*ABSTRACT*/

// Members

    /*Handle enabled/disabled state change.*//*() override*/
    type["OnSetEnabled"] = static_cast<void (Urho3D::Drawable2D::*)()>(&Urho3D::Drawable2D::OnSetEnabled) ;
    /*Set layer. BIND_AS_PROPERTY*//*(int layer)*/
    type["SetLayer"] = static_cast<void (Urho3D::Drawable2D::*)(int)>(&Urho3D::Drawable2D::SetLayer) ;
    /*Set order in layer. BIND_AS_PROPERTY*//*(int orderInLayer)*/
    type["SetOrderInLayer"] = static_cast<void (Urho3D::Drawable2D::*)(int)>(&Urho3D::Drawable2D::SetOrderInLayer) ;
    /*Return layer. BIND_AS_PROPERTY*//*() const*/
    type["GetLayer"] = static_cast<int (Urho3D::Drawable2D::*)() const>(&Urho3D::Drawable2D::GetLayer) ;
    /*Return order in layer. BIND_AS_PROPERTY*//*() const*/
    type["GetOrderInLayer"] = static_cast<int (Urho3D::Drawable2D::*)() const>(&Urho3D::Drawable2D::GetOrderInLayer) ;
    /*Return all source batches (called by  Renderer2D).*//*()*/
    type["GetSourceBatches"] = static_cast<const Vector<SourceBatch2D>& (Urho3D::Drawable2D::*)()>(&Urho3D::Drawable2D::GetSourceBatches) ;
    type["layer"] = sol::property(static_cast<int (Urho3D::Drawable2D::*)() const>(&Urho3D::Drawable2D::GetLayer) 
        , static_cast<void (Urho3D::Drawable2D::*)(int)>(&Urho3D::Drawable2D::SetLayer) );
    type["orderInLayer"] = sol::property(static_cast<int (Urho3D::Drawable2D::*)() const>(&Urho3D::Drawable2D::GetOrderInLayer) 
        , static_cast<void (Urho3D::Drawable2D::*)(int)>(&Urho3D::Drawable2D::SetOrderInLayer) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/Drawable2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/Drawable2D.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Vertex2D(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::Vertex2D>( "Vertex2D"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["position_"] = &Urho3D::Vertex2D::position_;
    type["color_"] = &Urho3D::Vertex2D::color_;
    type["uv_"] = &Urho3D::Vertex2D::uv_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Urho2D/Drawable2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Urho2D/Drawable2D.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Urho2D/Drawable2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_SourceBatch2D(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::SourceBatch2D>( "SourceBatch2D"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::SourceBatch2D()>();

// Members

    type["owner_"] = &Urho3D::SourceBatch2D::owner_;
    type["distance_"] = &Urho3D::SourceBatch2D::distance_;
    type["drawOrder_"] = &Urho3D::SourceBatch2D::drawOrder_;
    type["material_"] = &Urho3D::SourceBatch2D::material_;
    type["vertices_"] = &Urho3D::SourceBatch2D::vertices_;

}

