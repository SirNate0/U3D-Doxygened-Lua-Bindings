
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/PhysicsWorld2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/PhysicsWorld2D.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/DebugRenderer.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Physics2D/PhysicsWorld2D.h>
#include <Urho3D/Physics2D/RigidBody2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_PhysicsWorld2D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::PhysicsWorld2D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::PhysicsWorld2D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::PhysicsWorld2D>((Urho3D::PhysicsWorld2D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::PhysicsWorld2D>( "PhysicsWorld2D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted,b2ContactListener,b2Draw>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::PhysicsWorld2D>(context);
        });

// Members

    /*Called when two fixtures begin to touch.*//*(b2Contact *contact) override*/
    type["BeginContact"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(b2Contact *)>(&Urho3D::PhysicsWorld2D::BeginContact) ;
    /*Called when two fixtures cease to touch.*//*(b2Contact *contact) override*/
    type["EndContact"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(b2Contact *)>(&Urho3D::PhysicsWorld2D::EndContact) ;
    /*Called when contact is updated.*//*(b2Contact *contact, const b2Manifold *oldManifold) override*/
    type["PreSolve"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(b2Contact *, const b2Manifold *)>(&Urho3D::PhysicsWorld2D::PreSolve) ;
    /*Draw a closed polygon provided in CCW order.*//*(const b2Vec2 *vertices, int32 vertexCount, const b2Color &color) override*/
    type["DrawPolygon"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(const b2Vec2 *, int32, const b2Color &)>(&Urho3D::PhysicsWorld2D::DrawPolygon) ;
    /*Draw a solid closed polygon provided in CCW order.*//*(const b2Vec2 *vertices, int32 vertexCount, const b2Color &color) override*/
    type["DrawSolidPolygon"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(const b2Vec2 *, int32, const b2Color &)>(&Urho3D::PhysicsWorld2D::DrawSolidPolygon) ;
    /*Draw a circle.*//*(const b2Vec2 &center, float32 radius, const b2Color &color) override*/
    type["DrawCircle"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(const b2Vec2 &, float32, const b2Color &)>(&Urho3D::PhysicsWorld2D::DrawCircle) ;
    /*Draw a solid circle.*//*(const b2Vec2 &center, float32 radius, const b2Vec2 &axis, const b2Color &color) override*/
    type["DrawSolidCircle"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(const b2Vec2 &, float32, const b2Vec2 &, const b2Color &)>(&Urho3D::PhysicsWorld2D::DrawSolidCircle) ;
    /*Draw a line segment.*//*(const b2Vec2 &p1, const b2Vec2 &p2, const b2Color &color) override*/
    type["DrawSegment"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(const b2Vec2 &, const b2Vec2 &, const b2Color &)>(&Urho3D::PhysicsWorld2D::DrawSegment) ;
    /*Draw a transform. Choose your own length scale.*//*(const b2Transform &xf) override*/
    type["DrawTransform"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(const b2Transform &)>(&Urho3D::PhysicsWorld2D::DrawTransform) ;
    /*Draw a point.*//*(const b2Vec2 &p, float32 size, const b2Color &color) override*/
    type["DrawPoint"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(const b2Vec2 &, float32, const b2Color &)>(&Urho3D::PhysicsWorld2D::DrawPoint) ;
    /*Step the simulation forward.*//*(float timeStep)*/
    type["Update"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(float)>(&Urho3D::PhysicsWorld2D::Update) ;
    /*Enable or disable automatic physics simulation during scene update. Enabled by default. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetUpdateEnabled"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetUpdateEnabled) ;
    /*Set draw shape. BIND_AS_PROPERTY*//*(bool drawShape)*/
    type["SetDrawShape"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetDrawShape) ;
    /*Set draw joint. BIND_AS_PROPERTY*//*(bool drawJoint)*/
    type["SetDrawJoint"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetDrawJoint) ;
    /*Set draw aabb. BIND_AS_PROPERTY*//*(bool drawAabb)*/
    type["SetDrawAabb"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetDrawAabb) ;
    /*Set draw pair. BIND_AS_PROPERTY*//*(bool drawPair)*/
    type["SetDrawPair"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetDrawPair) ;
    /*Set draw center of mass. BIND_AS_PROPERTY*//*(bool drawCenterOfMass)*/
    type["SetDrawCenterOfMass"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetDrawCenterOfMass) ;
    /*Set allow sleeping. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetAllowSleeping"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetAllowSleeping) ;
    /*Set warm starting. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetWarmStarting"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetWarmStarting) ;
    /*Set continuous physics. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetContinuousPhysics"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetContinuousPhysics) ;
    /*Set sub stepping. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetSubStepping"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetSubStepping) ;
    /*Set gravity. BIND_AS_PROPERTY*//*(const Vector2 &gravity)*/
    type["SetGravity"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(const  Vector2 &)>(&Urho3D::PhysicsWorld2D::SetGravity) ;
    /*Set auto clear forces. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetAutoClearForces"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetAutoClearForces) ;
    /*Set velocity iterations. BIND_AS_PROPERTY*//*(int velocityIterations)*/
    type["SetVelocityIterations"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(int)>(&Urho3D::PhysicsWorld2D::SetVelocityIterations) ;
    /*Set position iterations. BIND_AS_PROPERTY*//*(int positionIterations)*/
    type["SetPositionIterations"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(int)>(&Urho3D::PhysicsWorld2D::SetPositionIterations) ;
    /*Add rigid body.*//*(RigidBody2D *rigidBody)*/
    type["AddRigidBody"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(RigidBody2D *)>(&Urho3D::PhysicsWorld2D::AddRigidBody) ;
    /*Remove rigid body.*//*(RigidBody2D *rigidBody)*/
    type["RemoveRigidBody"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(RigidBody2D *)>(&Urho3D::PhysicsWorld2D::RemoveRigidBody) ;
    /*Add a delayed world transform assignment. Called by  RigidBody2D.*//*(const DelayedWorldTransform2D &transform)*/
    type["AddDelayedWorldTransform"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(const  DelayedWorldTransform2D &)>(&Urho3D::PhysicsWorld2D::AddDelayedWorldTransform) ;
    /*Return whether physics world will automatically simulate during scene update. BIND_AS_PROPERTY*//*() const*/
    type["IsUpdateEnabled"] = static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::IsUpdateEnabled) ;
    /*Return draw shape. BIND_AS_PROPERTY*//*() const*/
    type["GetDrawShape"] = static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetDrawShape) ;
    /*Return draw joint. BIND_AS_PROPERTY*//*() const*/
    type["GetDrawJoint"] = static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetDrawJoint) ;
    /*Return draw aabb. BIND_AS_PROPERTY*//*() const*/
    type["GetDrawAabb"] = static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetDrawAabb) ;
    /*Return draw pair. BIND_AS_PROPERTY*//*() const*/
    type["GetDrawPair"] = static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetDrawPair) ;
    /*Return draw center of mass. BIND_AS_PROPERTY*//*() const*/
    type["GetDrawCenterOfMass"] = static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetDrawCenterOfMass) ;
    /*Return allow sleeping. BIND_AS_PROPERTY*//*() const*/
    type["GetAllowSleeping"] = static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetAllowSleeping) ;
    /*Return warm starting. BIND_AS_PROPERTY*//*() const*/
    type["GetWarmStarting"] = static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetWarmStarting) ;
    /*Return continuous physics. BIND_AS_PROPERTY*//*() const*/
    type["GetContinuousPhysics"] = static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetContinuousPhysics) ;
    /*Return sub stepping. BIND_AS_PROPERTY*//*() const*/
    type["GetSubStepping"] = static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetSubStepping) ;
    /*Return auto clear forces. BIND_AS_PROPERTY*//*() const*/
    type["GetAutoClearForces"] = static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetAutoClearForces) ;
    /*Return gravity. BIND_AS_PROPERTY*//*() const*/
    type["GetGravity"] = static_cast<const Vector2& (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetGravity) ;
    /*Return velocity iterations. BIND_AS_PROPERTY*//*() const*/
    type["GetVelocityIterations"] = static_cast<int (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetVelocityIterations) ;
    /*Return position iterations. BIND_AS_PROPERTY*//*() const*/
    type["GetPositionIterations"] = static_cast<int (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetPositionIterations) ;
    /*Return the Box2D physics world.*//*()*/
    type["GetWorld"] = static_cast<b2World* (Urho3D::PhysicsWorld2D::*)()>(&Urho3D::PhysicsWorld2D::GetWorld) ;
    /*Set node dirtying to be disregarded.*//*(bool enable)*/
    type["SetApplyingTransforms"] = static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetApplyingTransforms) ;
    /*Return whether node dirtying should be disregarded.*//*() const*/
    type["IsApplyingTransforms"] = static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::IsApplyingTransforms) ;
    type["DrawDebugGeometry"] = sol::overload(
        static_cast<void (Urho3D::PhysicsWorld2D::*)(DebugRenderer *, bool)>(&Urho3D::PhysicsWorld2D::DrawDebugGeometry) ,
        static_cast<void (Urho3D::PhysicsWorld2D::*)()>(&Urho3D::PhysicsWorld2D::DrawDebugGeometry)  );
    type["Raycast"] = sol::overload(
        static_cast<void (Urho3D::PhysicsWorld2D::*)(PODVector<  PhysicsRaycastResult2D > &, const  Vector2 &, const  Vector2 &, unsigned)>(&Urho3D::PhysicsWorld2D::Raycast) ,
        [](Urho3D::PhysicsWorld2D& self, PODVector<  PhysicsRaycastResult2D > & results, const  Vector2 & startPoint, const  Vector2 & endPoint){ self.Raycast(results, startPoint, endPoint); } );
    type["RaycastSingle"] = sol::overload(
        static_cast<void (Urho3D::PhysicsWorld2D::*)(PhysicsRaycastResult2D &, const  Vector2 &, const  Vector2 &, unsigned)>(&Urho3D::PhysicsWorld2D::RaycastSingle) ,
        [](Urho3D::PhysicsWorld2D& self, PhysicsRaycastResult2D & result, const  Vector2 & startPoint, const  Vector2 & endPoint){ self.RaycastSingle(result, startPoint, endPoint); } );
    type["GetRigidBody"] = sol::overload(
        [](Urho3D::PhysicsWorld2D& self, const Vector2 &point, unsigned collisionMask=M_MAX_UNSIGNED, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRigidBody(point, collisionMask));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::PhysicsWorld2D& self, const  Vector2 & point, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRigidBody(point));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::PhysicsWorld2D& self, int screenX, int screenY, unsigned collisionMask=M_MAX_UNSIGNED, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRigidBody(screenX, screenY, collisionMask));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        },
        [](Urho3D::PhysicsWorld2D& self, int screenX, int screenY, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetRigidBody(screenX, screenY));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        } );
    type["GetRigidBodies"] = sol::overload(
        static_cast<void (Urho3D::PhysicsWorld2D::*)(PODVector<  RigidBody2D * > &, const  Rect &, unsigned)>(&Urho3D::PhysicsWorld2D::GetRigidBodies) ,
        [](Urho3D::PhysicsWorld2D& self, PODVector<  RigidBody2D * > & results, const  Rect & aabb){ self.GetRigidBodies(results, aabb); } );
    type["allowSleeping"] = sol::property(static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetAllowSleeping) 
        , static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetAllowSleeping) );
    type["autoClearForces"] = sol::property(static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetAutoClearForces) 
        , static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetAutoClearForces) );
    type["continuousPhysics"] = sol::property(static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetContinuousPhysics) 
        , static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetContinuousPhysics) );
    type["drawAabb"] = sol::property(static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetDrawAabb) 
        , static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetDrawAabb) );
    type["drawCenterOfMass"] = sol::property(static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetDrawCenterOfMass) 
        , static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetDrawCenterOfMass) );
    type["drawJoint"] = sol::property(static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetDrawJoint) 
        , static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetDrawJoint) );
    type["drawPair"] = sol::property(static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetDrawPair) 
        , static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetDrawPair) );
    type["drawShape"] = sol::property(static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetDrawShape) 
        , static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetDrawShape) );
    type["gravity"] = sol::property(static_cast<const Vector2& (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetGravity) 
        , static_cast<void (Urho3D::PhysicsWorld2D::*)(const  Vector2 &)>(&Urho3D::PhysicsWorld2D::SetGravity) );
    type["positionIterations"] = sol::property(static_cast<int (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetPositionIterations) 
        , static_cast<void (Urho3D::PhysicsWorld2D::*)(int)>(&Urho3D::PhysicsWorld2D::SetPositionIterations) );
    type["subStepping"] = sol::property(static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetSubStepping) 
        , static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetSubStepping) );
    type["updateEnabled"] = sol::property(static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::IsUpdateEnabled) 
        , static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetUpdateEnabled) );
    type["velocityIterations"] = sol::property(static_cast<int (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetVelocityIterations) 
        , static_cast<void (Urho3D::PhysicsWorld2D::*)(int)>(&Urho3D::PhysicsWorld2D::SetVelocityIterations) );
    type["warmStarting"] = sol::property(static_cast<bool (Urho3D::PhysicsWorld2D::*)() const>(&Urho3D::PhysicsWorld2D::GetWarmStarting) 
        , static_cast<void (Urho3D::PhysicsWorld2D::*)(bool)>(&Urho3D::PhysicsWorld2D::SetWarmStarting) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/PhysicsWorld2D.h


#if 0 // Non-public class protected

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/PhysicsWorld2D.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/IO/VectorBuffer.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Physics2D/CollisionShape2D.h>
#include <Urho3D/Physics2D/RigidBody2D.h>
#include <Urho3D/Scene/Node.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_PhysicsWorld2D_ContactInfo(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::PhysicsWorld2D::ContactInfo>( "ContactInfo"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::PhysicsWorld2D::ContactInfo(),
        Urho3D::PhysicsWorld2D::ContactInfo(b2Contact *)>();

// Members

    /*Write contact info to buffer.*//*(VectorBuffer &buffer) const*/
    type["Serialize"] = static_cast<const PODVector<unsigned char>& (Urho3D::PhysicsWorld2D::ContactInfo::*)(VectorBuffer &) const>(&Urho3D::PhysicsWorld2D::ContactInfo::Serialize) ;
    type["bodyA_"] = &Urho3D::PhysicsWorld2D::ContactInfo::bodyA_;
    type["bodyB_"] = &Urho3D::PhysicsWorld2D::ContactInfo::bodyB_;
    type["nodeA_"] = &Urho3D::PhysicsWorld2D::ContactInfo::nodeA_;
    type["nodeB_"] = &Urho3D::PhysicsWorld2D::ContactInfo::nodeB_;
    type["shapeA_"] = &Urho3D::PhysicsWorld2D::ContactInfo::shapeA_;
    type["shapeB_"] = &Urho3D::PhysicsWorld2D::ContactInfo::shapeB_;
    type["numPoints_"] = &Urho3D::PhysicsWorld2D::ContactInfo::numPoints_;
    type["worldNormal_"] = &Urho3D::PhysicsWorld2D::ContactInfo::worldNormal_;
# if 0 // SKIPPED
    type["worldPositions_"] = &Urho3D::PhysicsWorld2D::ContactInfo::worldPositions_;
# endif
//invalid literal for int() with base 10: 'b2_maxManifoldPoints'
# if 0 // SKIPPED
    type["separations_"] = &Urho3D::PhysicsWorld2D::ContactInfo::separations_;
# endif
//invalid literal for int() with base 10: 'b2_maxManifoldPoints'

}


#endif // Non-public class protected

// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/PhysicsWorld2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/PhysicsWorld2D.h>
#include <Urho3D/Math/Quaternion.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Physics2D/RigidBody2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_DelayedWorldTransform2D(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::DelayedWorldTransform2D>( "DelayedWorldTransform2D"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["rigidBody_"] = &Urho3D::DelayedWorldTransform2D::rigidBody_;
    type["parentRigidBody_"] = &Urho3D::DelayedWorldTransform2D::parentRigidBody_;
    type["worldPosition_"] = &Urho3D::DelayedWorldTransform2D::worldPosition_;
    type["worldRotation_"] = &Urho3D::DelayedWorldTransform2D::worldRotation_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Physics2D/PhysicsWorld2D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Physics2D/PhysicsWorld2D.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Physics2D/PhysicsWorld2D.h>
#include <Urho3D/Physics2D/RigidBody2D.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_PhysicsRaycastResult2D(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::PhysicsRaycastResult2D>( "PhysicsRaycastResult2D"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    /*Test for inequality, added to prevent GCC from complaining.*//*(const PhysicsRaycastResult2D &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::PhysicsRaycastResult2D::*)(const  PhysicsRaycastResult2D &) const>(&Urho3D::PhysicsRaycastResult2D::operator!=) ;
    type["position_"] = &Urho3D::PhysicsRaycastResult2D::position_;
    type["normal_"] = &Urho3D::PhysicsRaycastResult2D::normal_;
    type["distance_"] = &Urho3D::PhysicsRaycastResult2D::distance_;
    type["body_"] = &Urho3D::PhysicsRaycastResult2D::body_;

}

