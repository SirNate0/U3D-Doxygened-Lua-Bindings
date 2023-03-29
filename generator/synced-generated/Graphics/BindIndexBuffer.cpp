
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/IndexBuffer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/IndexBuffer.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Core/Context.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_IndexBuffer(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::IndexBuffer::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::IndexBuffer::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::IndexBuffer>((Urho3D::IndexBuffer*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::IndexBuffer>( "IndexBuffer"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted,Urho3D::GPUObject>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context, bool forceHeadless=false) { 
            return Urho3D::MakeShared<Urho3D::IndexBuffer>(context, forceHeadless);
        },[](Context * context) { 
            return Urho3D::MakeShared<Urho3D::IndexBuffer>(context);
        });

// Members

    /*Mark the buffer destroyed on graphics context destruction. May be a no-op depending on the API.*//*() override*/
    type["OnDeviceLost"] = static_cast<void (Urho3D::IndexBuffer::*)()>(&Urho3D::IndexBuffer::OnDeviceLost) ;
    /*Recreate the buffer and restore data if applicable. May be a no-op depending on the API.*//*() override*/
    type["OnDeviceReset"] = static_cast<void (Urho3D::IndexBuffer::*)()>(&Urho3D::IndexBuffer::OnDeviceReset) ;
    /*Release buffer.*//*() override*/
    type["Release"] = static_cast<void (Urho3D::IndexBuffer::*)()>(&Urho3D::IndexBuffer::Release) ;
    /*Enable shadowing in CPU memory. Shadowing is forced on if the graphics subsystem does not exist. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetShadowed"] = static_cast<void (Urho3D::IndexBuffer::*)(bool)>(&Urho3D::IndexBuffer::SetShadowed) ;
    /*Set all data in the buffer.*//*(const void *data)*/
    type["SetData"] = static_cast<bool (Urho3D::IndexBuffer::*)(const void *)>(&Urho3D::IndexBuffer::SetData) ;
    /*Unlock the buffer and apply changes to the GPU buffer.*//*()*/
    type["Unlock"] = static_cast<void (Urho3D::IndexBuffer::*)()>(&Urho3D::IndexBuffer::Unlock) ;
    /*Return whether CPU memory shadowing is enabled. BIND_AS_PROPERTY*//*() const*/
    type["IsShadowed"] = static_cast<bool (Urho3D::IndexBuffer::*)() const>(&Urho3D::IndexBuffer::IsShadowed) ;
    /*Return whether is dynamic. BIND_AS_PROPERTY*//*() const*/
    type["IsDynamic"] = static_cast<bool (Urho3D::IndexBuffer::*)() const>(&Urho3D::IndexBuffer::IsDynamic) ;
    /*Return whether is currently locked.*//*() const*/
    type["IsLocked"] = static_cast<bool (Urho3D::IndexBuffer::*)() const>(&Urho3D::IndexBuffer::IsLocked) ;
    /*Return number of indices. BIND_AS_PROPERTY*//*() const*/
    type["GetIndexCount"] = static_cast<unsigned (Urho3D::IndexBuffer::*)() const>(&Urho3D::IndexBuffer::GetIndexCount) ;
    /*Return index size in bytes. BIND_AS_PROPERTY*//*() const*/
    type["GetIndexSize"] = static_cast<unsigned (Urho3D::IndexBuffer::*)() const>(&Urho3D::IndexBuffer::GetIndexSize) ;
#if 0 // INVALID: NeedsWrap(unsigned &)NeedsWrap(unsigned &)
    /*Return used vertex range from index range.*//*(unsigned start, unsigned count, unsigned &minVertex, unsigned &vertexCount)*/
    type["GetUsedVertexRange"] = static_cast<bool (Urho3D::IndexBuffer::*)(unsigned, unsigned, unsigned &, unsigned &)>(&Urho3D::IndexBuffer::GetUsedVertexRange) ;
#endif
        
    /*Return CPU memory shadow data.*//*() const*/
    type["GetShadowData"] = static_cast<unsigned char* (Urho3D::IndexBuffer::*)() const>(&Urho3D::IndexBuffer::GetShadowData) ;
    /*Return shared array pointer to the CPU memory shadow data.*//*() const*/
    type["GetShadowDataShared"] = static_cast<SharedArrayPtr<unsigned char> (Urho3D::IndexBuffer::*)() const>(&Urho3D::IndexBuffer::GetShadowDataShared) ;
    type["SetSize"] = sol::overload(
        static_cast<bool (Urho3D::IndexBuffer::*)(unsigned, bool, bool)>(&Urho3D::IndexBuffer::SetSize) ,
        [](Urho3D::IndexBuffer& self, unsigned indexCount, bool largeIndices){ return self.SetSize(indexCount, largeIndices); } );
    type["SetDataRange"] = sol::overload(
        static_cast<bool (Urho3D::IndexBuffer::*)(const void *, unsigned, unsigned, bool)>(&Urho3D::IndexBuffer::SetDataRange) ,
        [](Urho3D::IndexBuffer& self, const void * data, unsigned start, unsigned count){ return self.SetDataRange(data, start, count); } );
    type["Lock"] = sol::overload(
        static_cast<void* (Urho3D::IndexBuffer::*)(unsigned, unsigned, bool)>(&Urho3D::IndexBuffer::Lock) ,
        [](Urho3D::IndexBuffer& self, unsigned start, unsigned count){ return self.Lock(start, count); } );
    type["dynamic"] = sol::property(static_cast<bool (Urho3D::IndexBuffer::*)() const>(&Urho3D::IndexBuffer::IsDynamic) );
    type["indexCount"] = sol::property(static_cast<unsigned (Urho3D::IndexBuffer::*)() const>(&Urho3D::IndexBuffer::GetIndexCount) );
    type["indexSize"] = sol::property(static_cast<unsigned (Urho3D::IndexBuffer::*)() const>(&Urho3D::IndexBuffer::GetIndexSize) );
    type["shadowed"] = sol::property(static_cast<bool (Urho3D::IndexBuffer::*)() const>(&Urho3D::IndexBuffer::IsShadowed) 
        , static_cast<void (Urho3D::IndexBuffer::*)(bool)>(&Urho3D::IndexBuffer::SetShadowed) );

}

