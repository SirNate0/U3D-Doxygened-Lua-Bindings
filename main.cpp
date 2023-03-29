#include <Urho3D/Core/Context.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Engine/Application.h>
#include <Urho3D/Engine/EngineDefs.h>
#include <Urho3D/LuaScript/LuaScript.h>
#include <sol/types.hpp>
#include <Urho3D/ThirdParty/LuaJIT/lua.hpp>

using namespace Urho3D;


void Test(lua_State* ls);
int use_sol2(lua_State* L);
Urho3D::Context* globalContext = nullptr;



# if 1

class TestApp : public Application
{
    URHO3D_OBJECT(TestApp, Application);
public:
    TestApp(Context* context) : Application(context) {}

    void Setup() override
    {
        engineParameters_[EP_FULL_SCREEN] = false;

    }

    void Start() override
    {
        auto luaScript = context_->GetSubsystem<LuaScript>();
        if (!luaScript)
        {
            luaScript = new LuaScript(context_);
            context_->RegisterSubsystem(luaScript);
        }
        auto ls = luaScript->GetState();
        globalContext = GetContext();
        use_sol2(ls);
    }

};

URHO3D_DEFINE_APPLICATION_MAIN(TestApp);

#else

int main()
{
    SharedPtr<Context> context_{new Context()};
    
    auto luaScript = context_->GetSubsystem<LuaScript>();
    if (!luaScript)
    {
        luaScript = new LuaScript(context_);
        context_->RegisterSubsystem(luaScript);
    }
    auto ls = luaScript->GetState();
    globalContext = context_.Get();
    
    
    use_sol2(ls);
    
    return 0;
}


#endif
