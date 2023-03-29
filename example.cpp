

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cassert>

// #include "luaaa.h"
#include <lua.hpp>

#define LOG printf



//void bindToLUA(lua_State *);

void runLuaExample(lua_State * ls)
{
//	bindToLUA(ls);

    LOG("------------------------------------------\n");
    std::stringstream buffer;
    std::ifstream file("example.lua");
    if (file)
    {
        buffer << file.rdbuf();
        file.close();
    }
    else
    {
        LOG("Could not load file");
    }


    int err = luaL_loadbuffer(ls, buffer.str().c_str(), buffer.str().length(), "console");
    if (err == 0)
    {
        err = lua_pcall(ls, 0, 0, 0);
    }

    if (err)
    {
        LOG("lua err: %s", lua_tostring(ls, -1));
        lua_pop(ls, 1);
    }
    else
    {
        LOG("Successfull execution");
    }
		

	
}


//int main()
//{
//	const luaL_Reg lualibs[] = {
//		{ LUA_COLIBNAME, luaopen_base },
//		{ LUA_LOADLIBNAME, luaopen_package },
//		{ LUA_TABLIBNAME, luaopen_table },
//		{ LUA_IOLIBNAME, luaopen_io },
//		{ LUA_OSLIBNAME, luaopen_os },
//		{ LUA_STRLIBNAME, luaopen_string },
//		{ LUA_MATHLIBNAME, luaopen_math },
//		{ LUA_DBLIBNAME, luaopen_debug },
//		{ NULL, NULL }
//	};

//	auto ls = luaL_newstate();

//	if (ls != NULL)
//	{
//		const luaL_Reg *lib = lualibs;
//		for (; lib->func; lib++) {
//			lua_pushcfunction(ls, lib->func);
//			lua_pushstring(ls, lib->name);
//			lua_call(ls, 1, 0);
//		}
	
//		runLuaExample(ls);

//		lua_close(ls);
//	}
//	return 0;
//}

//#include <sol/sol.hpp>

#include <sol-urho.h>

#include <iostream>

#include <cassert>

#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Object.h>
#include <Urho3D/Core/StringUtils.h>
#include <Urho3D/Scene/Component.h>
#include <Urho3D/Scene/Node.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/IO/FileSystem.h>
#include <Urho3D/IO/Log.h>
#include <Urho3D/Graphics/Graphics.h>
#include <Urho3D/Graphics/Renderer.h>
#include <Urho3D/Graphics/StaticModel.h>
#include <Urho3D/Resource/ResourceCache.h>
#include <Urho3D/Input/Input.h>
#include <Urho3D/UI/UI.h>
#include <Urho3D/Engine/Console.h>
#include <Urho3D/Engine/DebugHud.h>
#include <Urho3D/Engine/Engine.h>

extern Urho3D::Context* globalContext;

//void sol_lua_check_access(sol::types<Urho3D::Node>, lua_State* L, int index, sol::stack::record& tracking) {
//    sol::optional<Urho3D::WeakPtr<Urho3D::Node>&> maybe_checked = sol::stack::check_get<Urho3D::WeakPtr<Urho3D::Node>&>(L, index, sol::no_panic, tracking);
//    if (!maybe_checked.has_value()) {
//        return;
//    }
//    Urho3D::WeakPtr<Urho3D::Node>& checked = *maybe_checked;
//    if (checked.Expired()) {
//        // freak out in whatever way is appropriate, here
//        throw std::runtime_error("You dun goofed");
//    }
//}
//void sol_lua_check_access(sol::types<Urho3D::Node&>, lua_State* L, int index, sol::stack::record& tracking) {
//    sol::optional<Urho3D::WeakPtr<Urho3D::Node>&> maybe_checked = sol::stack::check_get<Urho3D::WeakPtr<Urho3D::Node>&>(L, index, sol::no_panic, tracking);
//    if (!maybe_checked.has_value()) {
//        return;
//    }
//    Urho3D::WeakPtr<Urho3D::Node>& checked = *maybe_checked;
//    if (checked.Expired()) {
//        // freak out in whatever way is appropriate, here
//        throw std::runtime_error("You dun goofed &version");
//    }
//}


struct A { void foo() const { } };
void bindClass_Urho3D_Node(sol::state_view& lua);
void bindClass_Urho3D_Vector3(sol::state_view& lua);
void bindClass_Urho3D_ALL(sol::state_view& lua);

Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;

void testObject(sol::state_view& lua)
{
    sol::_();
    using namespace Urho3D;

    lua["context"] = globalContext;

//    lua.new_usertype<Urho3D::String>( "String", sol::no_constructor
//        ,sol::meta_function::to_string, &Urho3D::String::CString
//        ,"new",sol::factories(Urho3D::MakeShared<Urho3D::Object>)
//    );

//    static HashMap<StringHash, std::function<sol::lua_value(Object*)>> casters;
//    casters["StaticModel"] = [](Object*o)->sol::lua_value{
//        if (o->IsInstanceOf(StaticModel::GetTypeStatic()))
//            return SharedPtr<StaticModel>((StaticModel*)o);
//        return nullptr;
//    };

//    lua["Cast"] = [](Object* o, const String& castTo)->sol::lua_value{//, const Urho3D::String& s){
//                  if (!o || !o->IsInstanceOf(castTo) || !casters.Contains(castTo))
//                      return sol::nil;
//                  return casters[castTo](o);
//              };
//    static HashMap<StringHash, std::function<sol::object(Object*,sol::state_view)>> casters;
    casters["StaticModel"] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(StaticModel::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<StaticModel>((StaticModel*)o));
        return sol::nil;
    };

    lua["Cast"] = [](Object* o, const String& castTo,sol::this_state s)->sol::object{
                  sol::state_view lua(s);
                  if (!o || !o->IsInstanceOf(castTo) || !casters.Contains(castTo))
                      return sol::nil;
                  return casters[castTo](o,lua);
              };

    lua.new_usertype<Urho3D::Object>( "Object", sol::no_constructor
        ,"GetTypeName", &Urho3D::Object::GetTypeName
//        ,"new",sol::factories(Urho3D::MakeShared<Urho3D::Object>)
    );

//    bindClass_Urho3D_Node(lua);
//    bindClass_Urho3D_Vector3(lua);

//    lua.new_usertype<Urho3D::Node>( "Node"
//        ,"GetTypeName", &Urho3D::Object::GetTypeName,
//            sol::base_classes, sol::bases<Urho3D::Object>(),
//                                        "new",sol::factories([](Context* c){
//            return SharedPtr<Node>(new Node(c));
//        })
//        ,"CreateChild",[](Node& n){//, const Urho3D::String& s){
//            return SharedPtr<Node>(n.CreateChild());
//        }
//        ,"CreateChildNamed",[](Node& n, const Urho3D::String& s){
//            return SharedPtr<Node>(n.CreateChild(s));
//        }
////        ,"CreateComponent",[](Node& n, String type){//, const Urho3D::String& s){
////            return SharedPtr<Component>(n.CreateComponent(type));
////        }
//        ,"CreateComponent",[](Node& n, String type,sol::this_state s)->sol::object{//, const Urho3D::String& s){
//            auto o = SharedPtr<Component>(n.CreateComponent(type));
//            sol::state_view lua(s);
//            if (!o || !casters.Contains(type))
//                return sol::nil;
//            return casters[type](o,lua);
//        }
//        ,"CreateModel",[](Node& n){//, const Urho3D::String& s){
//            return SharedPtr(n.CreateComponent<StaticModel>());
//        }

//    ,"SetWorldTransform", sol::overload(
//        static_cast<void (Urho3D::Node::*)(const Vector3 &position, const Quaternion &rotation)>(&Urho3D::Node::SetWorldTransform),
//        static_cast<void (Urho3D::Node::*)(const Vector3 &position, const Quaternion &rotation, float scale)>(&Urho3D::Node::SetWorldTransform),
//        static_cast<void (Urho3D::Node::*)(const Vector3 &position, const Quaternion &rotation, const Vector3 &scale)>(&Urho3D::Node::SetWorldTransform),
//        static_cast<void (Urho3D::Node::*)(const Matrix3x4 &worldTransform)>(&Urho3D::Node::SetWorldTransform) )
//    ,"SetWorldTransform2D", sol::overload(
//        static_cast<void (Urho3D::Node::*)(const Vector2 &position, float rotation)>(&Urho3D::Node::SetWorldTransform2D),
//        static_cast<void (Urho3D::Node::*)(const Vector2 &position, float rotation, float scale)>(&Urho3D::Node::SetWorldTransform2D),
//        static_cast<void (Urho3D::Node::*)(const Vector2 &position, float rotation, const Vector2 &scale)>(&Urho3D::Node::SetWorldTransform2D) )

//        ,"TestIsType",[](sol::object a,sol::this_state s)->sol::object{//, const Urho3D::String& s){
//            sol::state_view lua(s);
//            if (a.is<sol::type>())
//                return sol::make_object(lua, sol::type_name(lua,a.as<sol::type>()));
//            else
//                return sol::make_object(lua,false);
//        }
//    );


    lua.new_usertype<Urho3D::Component>( "Component",
        "GetTypeName", &Urho3D::Object::GetTypeName,
            sol::base_classes, sol::bases<Urho3D::Object>(),
        "new",sol::factories([](Context* c){
            return SharedPtr<Component>(new Component(c));
        })
        ,"GetNode",[](Urho3D::Component& c){//, const Urho3D::String& s){
            return c.GetNode();
        }
    );


    lua.new_usertype<StaticModel>( "StaticModel",
        "GetTypeName", &Urho3D::Object::GetTypeName,
            sol::base_classes, sol::bases<Component,Object>(),
                                        "new",sol::factories([](Context* c){
            return SharedPtr<StaticModel>(new StaticModel(c));
        })
        ,"GetNode",[](Urho3D::StaticModel& c){//, const Urho3D::String& s){
            return c.GetNode();
        }
        ,"IsModel",[](){
            return true;
        }
    );

    /// Things that need casts:
    /// Object -> Any type for Context::CreateObject<T>
    /// Component -> Components for Node::CreateComponent<T>
    /// Resource -> Resources for ResourceCache::GetResource<T>
    ///
    /// One Approach:
/*
We go from
    local planeObject = planeNode:CreateComponent("StaticModel")
    planeObject.model = cache:GetResource("Model", "Models/Plane.mdl")
    planeObject.material = cache:GetResource("Material", "Materials/StoneTiled.xml")
to
    local planeObject = planeNode:CreateComponent(StaticModel)
    planeObject.model = cache:GetResource(Model, "Models/Plane.mdl")
    planeObject.material = cache:GetResource(Material, "Materials/StoneTiled.xml")
and execute the construction in Lua instead. Basically, reimplementing the functions in Lua (well, in sol C++ calling Lua)
 */
/* //One approach: https://github.com/ThePhD/sol2/issues/1302
#include <sol/sol.hpp>
#include <functional>
#include <map>

typedef std::function<sol::lua_value(void*)> caster;

namespace component
{

struct Model
{
    std::size_t id = 15;
};

}

std::map<std::string, caster> casters;

template<typename T>
void register_caster(std::string name)
{
    casters[name] = [](void * ptr) -> sol::lua_value {
        return static_cast<T*>(ptr);
    };
}

sol::lua_value cast_as(std::string name, void* data) {
    if (!casters.count(name))
        throw std::runtime_error("Type caster not registered");

    return casters.at(name)(data);
}

int main()
{
    sol::state lua;
    lua.open_libraries(sol::lib::base);
    lua["cast_as"] = &cast_as;

    sol::usertype<component::Model> type = lua.new_usertype<component::Model>("Model");
    type["id"] = &component::Model::id;
    register_caster<component::Model>("Model");

    void* data = new component::Model();
    lua["component_ref"] = data;

    lua.safe_script(R"(
local model = cast_as("Model", component_ref)
print(model.id)
)");
}
 */

    lua["printtype"] = [](Object* o){
        URHO3D_LOGINFO(o->GetTypeName());
    };
}


struct object {
    int value = 0;
};

struct objectRT {
    int value = 0;
};

Urho3D::Context* bindlua_NEL_GetContext(lua_State* L)
{
    sol::state_view lua(L);
    Urho3D::Context* context = lua["context"];
    return context;
}

int bindlua_NEL(lua_State* L,Urho3D::Context* context)
{
    sol::state_view lua(L);

    bindClass_Urho3D_ALL(lua);
    lua["context"] = context;
    // To match the old API
//    lua[".context"] = context;
//    ::SetContext(L, context);
    lua["cache"] = context->GetSubsystem<Urho3D::ResourceCache>();
    lua["console"] = context->GetSubsystem<Urho3D::Console>();
    lua["debugHud"] = context->GetSubsystem<Urho3D::DebugHud>();
    lua["engine"] = context->GetSubsystem<Urho3D::Engine>();
    lua["fileSystem"] = context->GetSubsystem<Urho3D::FileSystem>();
    lua["graphics"] = context->GetSubsystem<Urho3D::Graphics>();
    lua["input"] = context->GetSubsystem<Urho3D::Input>();
//    lua["localization"] = context->GetSubsystem<Urho3D::Localization>();
    lua["log"] = context->GetSubsystem<Urho3D::Log>();
    lua["renderer"] = context->GetSubsystem<Urho3D::Renderer>();
    lua["ui"] = context->GetSubsystem<Urho3D::UI>();
    /*
     * https://urho3d.io/documentation/HEAD/_lua_script_a_p_i.html#LuaScriptAPI_GlobalProperties
    Audio* audio (readonly)
    ResourceCache* cache (readonly)
    Console* console (readonly)
    Context* context (readonly)
    Database* database (readonly)
    DebugHud* debugHud (readonly)
    Engine* engine (readonly)
    EventHandler* eventHandler (readonly)
    EventSender* eventSender (readonly)
    FileSystem* fileSystem (readonly)
    Graphics* graphics (readonly)
    Input* input (readonly)
    Localization* localization (readonly)
    Log* log (readonly)
    Network* network (readonly)
    Renderer* renderer (readonly)
    Time* time (readonly)
    UI* ui (readonly)
*/

    auto fs = context->GetSubsystem<Urho3D::FileSystem>();
    if (fs->FileExists("coroutine-debug.lua"))
    {
        lua.script_file("coroutine-debug.lua");
    }
    else
        lua.script(R"(
local totalTime_ = 0
local sleepedCoroutines_ = {}
local waitEventCoroutines_ = {}

function coroutine.start(func)
   if func == nil then
       return nil
   end

   local co = coroutine.create(func)
   return coroutine.resume(co)
end

function coroutine.sleep(time)
   local co = coroutine.running()
   if co == nil then
       return
   end

   sleepedCoroutines_[co] = totalTime_ + time

   return coroutine.yield(co)
end

function coroutine.update(steptime)
   totalTime_ = totalTime_ + steptime

   local coroutines = {}
   for co, wakeupTime in pairs(sleepedCoroutines_) do
       if wakeupTime < totalTime_ then
           table.insert(coroutines, co)
       end
   end

   for _, co in ipairs(coroutines) do
       sleepedCoroutines_[co] = nil
       coroutine.resume(co)
   end
end

function coroutine.waitevent(event)
   local co = coroutine.running()
   if co == nil then
       return
   end

   if waitEventCoroutines_[event] == nil then
       waitEventCoroutines_[event] = { co }
   else
       table.insert(waitEventCoroutines_[event], co)
   end

   return coroutine.yield(co)
end

function coroutine.sendevent(event)
   local coroutines = waitEventCoroutines_[event]
   if coroutines == nil then
       return
   end

   waitEventCoroutines_[event] = nil

   for _, co in ipairs(coroutines) do
       coroutine.resume(co)
   end
end)");
    return 0;

}

int use_sol2(lua_State* L) {
    sol::state_view lua(L);
    lua.script("print('bark bark bark!')");
    if (0)
    {
        auto type = lua.new_usertype<object>( "staticObject"
                , "func", [](object& o) { return o.value; }
                , "new", sol::factories([]() { return object{}; })
            );
        type["func1"] = [](object& o) { return o.value + 1; };
        lua["o"] = new object();
        lua.script(R"(
                print(o:func())
                print(o:func1())

                print('input',input)
                print(input.__type,input.__type.name, input:GetTypeName());
            )");
    }
    if (0)
    lua.script(R"(

               scene_ = Scene(context);
               print("GOOD - Scene Made")


               -- Create octree, use default volume (-1000, -1000, -1000) to (1000, 1000, 1000)
               -- Create a physics simulation world with default parameters, which will update at 60ps. Like the Octree must
               -- exist before creating drawable components, the PhysicsWorld must exist before creating physics components.
               -- Finally, create a DebugRenderer component so that we can draw physics debug geometry
               scene_:CreateComponent("Octree")
               scene_:CreateComponent("PhysicsWorld")
               scene_:CreateComponent("DebugRenderer")

               print("GOOD - Scene Components Made")

               -- Create a Zone component for ambient lighting & fog control
               local zoneNode = scene_:CreateChild("Zone")
               local zone = zoneNode:CreateComponent("Zone")
               zone.boundingBox = BoundingBox(-1000.0, 1000.0)
               zone.ambientColor = Color(0.15, 0.15, 0.15)
               zone.fogColor = Color(0.5, 0.5, 0.7)
               zone.fogStart = 100.0
               zone.fogEnd = 300.0

               print("GOOD - Zone Made")

               -- Create a directional light to the world. Enable cascaded shadows on it
               local lightNode = scene_:CreateChild("DirectionalLight")
               lightNode.direction = Vector3(0.6, -1.0, 0.8)
               local light = lightNode:CreateComponent("Light")
               light.lightType = LIGHT_DIRECTIONAL
               light.castShadows = true
               light.shadowBias = BiasParameters(0.00025, 0.5)
               -- Set cascade splits at 10, 50 and 200 world units, fade shadows out at 80% of maximum shadow distance
               light.shadowCascade = CascadeParameters(10.0, 50.0, 200.0, 0.0, 0.8)

               print("GOOD - Light Made")

               exit()
               )");



    if (1) // We must only run this code and not re-bind everything, or lots of errors will be given, as the global subsystems will use the old usertypes. I think.
    {
        lua.script_file("Data/run.lua");
        lua.script(R"(print(coroutine.update))");
        return 0;
    }


    lua.new_usertype<object>( "staticObject"
            , "func", [](object& o) { return o.value; }
            , "new", sol::factories([]() { return object{}; })
        );


    auto rto = lua.new_usertype<objectRT>( "runtimeObject"
                                           , "new",sol::factories( []() { return object{}; } ));
    // runtime additions: through the sol API
    lua["runtimeObject"]["func"] = [](object& o) { return o.value; };
    rto["set"] = [](object& o, int v) { o.value = v; return o.value; };



    auto bad_code_result = lua.script("123 herp.derp", [](lua_State*, sol::protected_function_result pfr) {
        // pfr will contain things that went wrong, for either loading or executing the script
        // Can throw your own custom error
        // You can also just return it, and let the call-site handle the error if necessary.
        return pfr;
    });
    // it did not work
    assert(!bad_code_result.valid());

//    testObject(lua);
    bindClass_Urho3D_ALL(lua);
    lua["context"] = globalContext;



    lua["Cast"] = [](Urho3D::Object* o, const Urho3D::String& castTo,sol::this_state s)->sol::object{
                  sol::state_view lua(s);
                  if (!o || !o->IsInstanceOf(castTo) || !casters.Contains(castTo))
                      return sol::nil;
                  return casters[castTo](o,lua);
              };

    lua.script_file("Data/run.lua");
    lua.script(R"(print(coroutine.update))");
    return 0;
    lua.script(R"(

               scene_ = Scene(context);
               print("GOOD - Scene Made")


               -- Create octree, use default volume (-1000, -1000, -1000) to (1000, 1000, 1000)
               -- Create a physics simulation world with default parameters, which will update at 60ps. Like the Octree must
               -- exist before creating drawable components, the PhysicsWorld must exist before creating physics components.
               -- Finally, create a DebugRenderer component so that we can draw physics debug geometry
               scene_:CreateComponent("Octree")
               scene_:CreateComponent("PhysicsWorld")
               scene_:CreateComponent("DebugRenderer")

               print("GOOD - Scene Components Made")

               -- Create a Zone component for ambient lighting & fog control
               local zoneNode = scene_:CreateChild("Zone")
               local zone = zoneNode:CreateComponent("Zone")
               zone.boundingBox = BoundingBox(-1000.0, 1000.0)
               zone.ambientColor = Color(0.15, 0.15, 0.15)
               zone.fogColor = Color(0.5, 0.5, 0.7)
               zone.fogStart = 100.0
               zone.fogEnd = 300.0

               print("GOOD - Zone Made")

               -- Create a directional light to the world. Enable cascaded shadows on it
               local lightNode = scene_:CreateChild("DirectionalLight")
               lightNode.direction = Vector3(0.6, -1.0, 0.8)
               local light = lightNode:CreateComponent("Light")
               light.lightType = LIGHT_DIRECTIONAL
               light.castShadows = true
               light.shadowBias = BiasParameters(0.00025, 0.5)
               -- Set cascade splits at 10, 50 and 200 world units, fade shadows out at 80% of maximum shadow distance
               light.shadowCascade = CascadeParameters(10.0, 50.0, 200.0, 0.0, 0.8)

               print("GOOD - Light Made")
               )");

    lua.script(R"(
    n = Node(context);
    --n = Node.new(context);
               print(n:GetTypeName());
    printtype(n);

               child = n:CreateChildNamed('hello');
               printtype(child);
               print(Node);
               print('^^ print(Node)')
               for i, v in pairs(Node) do print(i,v) end

               sm = child:CreateComponent("StaticModel");
               print(sm:GetTypeName());
               print(child.Position);
               v1 = child.Position; print(v1);
               v2 = Vector3.new(); print(v2);
               v3 = Vector3(1,2,3); print(v3);

               --print(child.Position:ToString());
               )");



    lua.script(R"(
               fail = child:CreateComponent("NotCompoennt");
               -- print(fail:GetTypeName());
               -- Fails - table expected, got userdata. for i, v in pairs(sm) do print(i,v) end
               -- Nil field called print(sm:IsModel());
               sm2 = child:CreateModel();
               sm3 = Cast(sm,'StaticModel');
               print(sm2.IsModel())
               print(sm3.IsModel())
               )");


//    lua.script(R"(
//               print(sm.__type,Component);
//               print(sm2.__type,StaticModel);
//               for i, v in pairs(sm.__type) do print(i,v) end
//               )");

    lua.script(R"(
               print('sm',sm.__type.name, sm:GetTypeName());
               print('sm2',sm2.__type.name, sm2:GetTypeName());
               print('sm3',sm3.__type.name, sm3:GetTypeName());

               print(Node.TestIsType(Node));
               print(Node.TestIsType("Node"));
               )");

    using namespace Urho3D;
    {
        SharedPtr<Node> n{(Node*)lua["child"]};

        auto tst = n->CreateChild("Test");
        URHO3D_LOGINFO(ToString("Test parent's name: %s",tst->GetParent()->GetName().CString()));
        n->Remove();
        URHO3D_LOGINFO(ToString("Refs: %d",n.Refs()));
        URHO3D_LOGINFO(ToString("Components: %d",n->GetNumComponents()));
    }

    lua.script(R"(
                print(child == nil);
               c2 = child:CreateChild();
               )");

    sol::type t = lua["Node"]["__type"];
    URHO3D_LOGINFO(sol::type_name(L,t).c_str());
    Urho3D::String s = lua["Node"]["__name"];
    URHO3D_LOGINFO(s);

    return 0;
}

void Test(lua_State* ls)
{
    const luaL_Reg lualibs[] = {
        { LUA_COLIBNAME, luaopen_base },
        { LUA_LOADLIBNAME, luaopen_package },
        { LUA_TABLIBNAME, luaopen_table },
        { LUA_IOLIBNAME, luaopen_io },
        { LUA_OSLIBNAME, luaopen_os },
        { LUA_STRLIBNAME, luaopen_string },
        { LUA_MATHLIBNAME, luaopen_math },
        { LUA_DBLIBNAME, luaopen_debug },
        { NULL, NULL }
    };

    if (ls != NULL)
    {
        const luaL_Reg *lib = lualibs;
        for (; lib->func; lib++) {
            lua_pushcfunction(ls, lib->func);
            lua_pushstring(ls, lib->name);
            lua_call(ls, 1, 0);
        }

//        runLuaExample(ls);
        lua_pushcclosure(ls, &use_sol2, 0);
        lua_setglobal(ls, "use_sol2");

        if (luaL_dostring(ls, "use_sol2()")) {
            lua_error(ls);
            return;
        }


        lua_close(ls); // Probalby the source of the issue before with the infinite garbage collection.
    }
    else
        throw -1;
}

