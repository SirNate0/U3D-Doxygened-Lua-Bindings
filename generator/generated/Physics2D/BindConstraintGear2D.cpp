
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/ConstraintGear2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/ConstraintGear2D.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Physics2D/Constraint2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ConstraintGear2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ConstraintGear2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ConstraintGear2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ConstraintGear2D>((Urho3D::ConstraintGear2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ConstraintGear2D>( "ConstraintGear2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Constraint2D,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ConstraintGear2D>(context);
        });

// Members

    /*Set owner constraint. BIND_AS_PROPERTY*//*(Constraint2D *constraint)*/
    type["SetOwnerConstraint"] = static_cast<void (Urho3D::ConstraintGear2D::*)(Constraint2D *)>(&Urho3D::ConstraintGear2D::SetOwnerConstraint) ;
    /*Set other constraint. BIND_AS_PROPERTY*//*(Constraint2D *constraint)*/
    type["SetOtherConstraint"] = static_cast<void (Urho3D::ConstraintGear2D::*)(Constraint2D *)>(&Urho3D::ConstraintGear2D::SetOtherConstraint) ;
    /*Set ratio. BIND_AS_PROPERTY*//*(float ratio)*/
    type["SetRatio"] = static_cast<void (Urho3D::ConstraintGear2D::*)(float)>(&Urho3D::ConstraintGear2D::SetRatio) ;
    /*Return owner constraint. BIND_AS_PROPERTY*//*() const*/
    type["GetOwnerConstraint"] = [](Urho3D::ConstraintGear2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOwnerConstraint());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return other constraint. BIND_AS_PROPERTY*//*() const*/
    type["GetOtherConstraint"] = [](Urho3D::ConstraintGear2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOtherConstraint());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return ratio. BIND_AS_PROPERTY*//*() const*/
    type["GetRatio"] = static_cast<float (Urho3D::ConstraintGear2D::*)() const>(&Urho3D::ConstraintGear2D::GetRatio) ;
    type["otherConstraint"] = sol::property([](Urho3D::ConstraintGear2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOtherConstraint());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::ConstraintGear2D::*)(Constraint2D *)>(&Urho3D::ConstraintGear2D::SetOtherConstraint) );
    type["ownerConstraint"] = sol::property([](Urho3D::ConstraintGear2D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetOwnerConstraint());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::ConstraintGear2D::*)(Constraint2D *)>(&Urho3D::ConstraintGear2D::SetOwnerConstraint) );
    type["ratio"] = sol::property(static_cast<float (Urho3D::ConstraintGear2D::*)() const>(&Urho3D::ConstraintGear2D::GetRatio) 
        , static_cast<void (Urho3D::ConstraintGear2D::*)(float)>(&Urho3D::ConstraintGear2D::SetRatio) );

}

