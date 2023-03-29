
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Scene/SplinePath.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Scene/SplinePath.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Math/Vector4.h>
#include <Urho3D/Scene/Node.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_SplinePath(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::SplinePath::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::SplinePath::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::SplinePath>((Urho3D::SplinePath*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::SplinePath>( "SplinePath"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::SplinePath>(context);
        });

// Members

    /*Apply Attributes to the  SplinePath.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::SplinePath::*)()>(&Urho3D::SplinePath::ApplyAttributes) ;
    /*Draw the Debug  Geometry.*//*(DebugRenderer *debug, bool depthTest) override*/
    type["DrawDebugGeometry"] = static_cast<void (Urho3D::SplinePath::*)(DebugRenderer *, bool)>(&Urho3D::SplinePath::DrawDebugGeometry) ;
    /*Remove a  Node Control Point from the  SplinePath.*//*(Node *point)*/
    type["RemoveControlPoint"] = static_cast<void (Urho3D::SplinePath::*)(Node *)>(&Urho3D::SplinePath::RemoveControlPoint) ;
    /*Clear the Control Points from the  SplinePath.*//*()*/
    type["ClearControlPoints"] = static_cast<void (Urho3D::SplinePath::*)()>(&Urho3D::SplinePath::ClearControlPoints) ;
    /*Set the Interpolation Mode. BIND_AS_PROPERTY*//*(InterpolationMode interpolationMode)*/
    type["SetInterpolationMode"] = static_cast<void (Urho3D::SplinePath::*)(InterpolationMode)>(&Urho3D::SplinePath::SetInterpolationMode) ;
    /*Set the movement Speed. BIND_AS_PROPERTY*//*(float speed)*/
    type["SetSpeed"] = static_cast<void (Urho3D::SplinePath::*)(float)>(&Urho3D::SplinePath::SetSpeed) ;
    /*Set the controlled  Node's position on the  SplinePath.*//*(float factor)*/
    type["SetPosition"] = static_cast<void (Urho3D::SplinePath::*)(float)>(&Urho3D::SplinePath::SetPosition) ;
    /*Set the  Node to be moved along the  SplinePath. BIND_AS_PROPERTY*//*(Node *controlled)*/
    type["SetControlledNode"] = static_cast<void (Urho3D::SplinePath::*)(Node *)>(&Urho3D::SplinePath::SetControlledNode) ;
    /*Get the Interpolation Mode. BIND_AS_PROPERTY*//*() const*/
    type["GetInterpolationMode"] = static_cast<InterpolationMode (Urho3D::SplinePath::*)() const>(&Urho3D::SplinePath::GetInterpolationMode) ;
    /*Get the movement Speed. BIND_AS_PROPERTY*//*() const*/
    type["GetSpeed"] = static_cast<float (Urho3D::SplinePath::*)() const>(&Urho3D::SplinePath::GetSpeed) ;
    /*Get the length of  SplinePath. BIND_AS_PROPERTY*//*() const*/
    type["GetLength"] = static_cast<float (Urho3D::SplinePath::*)() const>(&Urho3D::SplinePath::GetLength) ;
    /*Get the parent  Node's last position on the spline.*//*() const*/
    type["GetPosition"] = static_cast<Vector3 (Urho3D::SplinePath::*)() const>(&Urho3D::SplinePath::GetPosition) ;
    /*Get the controlled  Node. BIND_AS_PROPERTY*//*() const*/
    type["GetControlledNode"] = [](Urho3D::SplinePath& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetControlledNode());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Get a point on the  SplinePath from 0.f to 1.f where 0 is the start and 1 is the end.*//*(float factor) const*/
    type["GetPoint"] = static_cast<Vector3 (Urho3D::SplinePath::*)(float) const>(&Urho3D::SplinePath::GetPoint) ;
    /*Move the controlled  Node to the next position along the  SplinePath based off the Speed value.*//*(float timeStep)*/
    type["Move"] = static_cast<void (Urho3D::SplinePath::*)(float)>(&Urho3D::SplinePath::Move) ;
    /*Reset movement along the path.*//*()*/
    type["Reset"] = static_cast<void (Urho3D::SplinePath::*)()>(&Urho3D::SplinePath::Reset) ;
    /*Returns whether the movement along the  SplinePath is complete. BIND_AS_ALIAS_get_isFinished*//*() const*/
    type["IsFinished"] = static_cast<bool (Urho3D::SplinePath::*)() const>(&Urho3D::SplinePath::IsFinished) ;
    /*Set Control Point  Node IDs attribute.*//*(const VariantVector &value)*/
    type["SetControlPointIdsAttr"] = static_cast<void (Urho3D::SplinePath::*)(const  VariantVector &)>(&Urho3D::SplinePath::SetControlPointIdsAttr) ;
    /*Return Control Point  Node IDs attribute.*//*() const*/
    type["GetControlPointIdsAttr"] = static_cast<const VariantVector& (Urho3D::SplinePath::*)() const>(&Urho3D::SplinePath::GetControlPointIdsAttr) ;
    /*Set Controlled  Node ID attribute.*//*(unsigned value)*/
    type["SetControlledIdAttr"] = static_cast<void (Urho3D::SplinePath::*)(unsigned)>(&Urho3D::SplinePath::SetControlledIdAttr) ;
    /*Get Controlled  Node ID attribute.*//*() const*/
    type["GetControlledIdAttr"] = static_cast<unsigned (Urho3D::SplinePath::*)() const>(&Urho3D::SplinePath::GetControlledIdAttr) ;
    type["AddControlPoint"] = sol::overload(
        static_cast<void (Urho3D::SplinePath::*)(Node *, unsigned)>(&Urho3D::SplinePath::AddControlPoint) ,
        [](Urho3D::SplinePath& self, Node * point){ self.AddControlPoint(point); } );
    type["controlledNode"] = sol::property([](Urho3D::SplinePath& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetControlledNode());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::SplinePath::*)(Node *)>(&Urho3D::SplinePath::SetControlledNode) );
    type["finished"] = sol::property(static_cast<bool (Urho3D::SplinePath::*)() const>(&Urho3D::SplinePath::IsFinished) );
    type["interpolationMode"] = sol::property(static_cast<InterpolationMode (Urho3D::SplinePath::*)() const>(&Urho3D::SplinePath::GetInterpolationMode) 
        , static_cast<void (Urho3D::SplinePath::*)(InterpolationMode)>(&Urho3D::SplinePath::SetInterpolationMode) );
    type["length"] = sol::property(static_cast<float (Urho3D::SplinePath::*)() const>(&Urho3D::SplinePath::GetLength) );
    type["speed"] = sol::property(static_cast<float (Urho3D::SplinePath::*)() const>(&Urho3D::SplinePath::GetSpeed) 
        , static_cast<void (Urho3D::SplinePath::*)(float)>(&Urho3D::SplinePath::SetSpeed) );

}

