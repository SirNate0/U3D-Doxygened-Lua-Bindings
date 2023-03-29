
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/VertexBuffer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/VertexBuffer.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_VertexBuffer(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::VertexBuffer::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::VertexBuffer::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::VertexBuffer>((Urho3D::VertexBuffer*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::VertexBuffer>( "VertexBuffer"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted,Urho3D::GPUObject>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context, bool forceHeadless=false) { 
            return Urho3D::MakeShared<Urho3D::VertexBuffer>(context, forceHeadless);
        },[](Context * context) { 
            return Urho3D::MakeShared<Urho3D::VertexBuffer>(context);
        });

// Members

    /*Mark the buffer destroyed on graphics context destruction. May be a no-op depending on the API.*//*() override*/
    type["OnDeviceLost"] = static_cast<void (Urho3D::VertexBuffer::*)()>(&Urho3D::VertexBuffer::OnDeviceLost) ;
    /*Recreate the buffer and restore data if applicable. May be a no-op depending on the API.*//*() override*/
    type["OnDeviceReset"] = static_cast<void (Urho3D::VertexBuffer::*)()>(&Urho3D::VertexBuffer::OnDeviceReset) ;
    /*Release buffer.*//*() override*/
    type["Release"] = static_cast<void (Urho3D::VertexBuffer::*)()>(&Urho3D::VertexBuffer::Release) ;
    /*Enable shadowing in CPU memory. Shadowing is forced on if the graphics subsystem does not exist. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetShadowed"] = static_cast<void (Urho3D::VertexBuffer::*)(bool)>(&Urho3D::VertexBuffer::SetShadowed) ;
    /*Set all data in the buffer.*//*(const void *data)*/
    type["SetData"] = static_cast<bool (Urho3D::VertexBuffer::*)(const void *)>(&Urho3D::VertexBuffer::SetData) ;
    /*Unlock the buffer and apply changes to the GPU buffer.*//*()*/
    type["Unlock"] = static_cast<void (Urho3D::VertexBuffer::*)()>(&Urho3D::VertexBuffer::Unlock) ;
    /*Return whether CPU memory shadowing is enabled. BIND_AS_PROPERTY*//*() const*/
    type["IsShadowed"] = static_cast<bool (Urho3D::VertexBuffer::*)() const>(&Urho3D::VertexBuffer::IsShadowed) ;
    /*Return whether is dynamic. BIND_AS_PROPERTY*//*() const*/
    type["IsDynamic"] = static_cast<bool (Urho3D::VertexBuffer::*)() const>(&Urho3D::VertexBuffer::IsDynamic) ;
    /*Return whether is currently locked.*//*() const*/
    type["IsLocked"] = static_cast<bool (Urho3D::VertexBuffer::*)() const>(&Urho3D::VertexBuffer::IsLocked) ;
    /*Return number of vertices. BIND_AS_PROPERTY*//*() const*/
    type["GetVertexCount"] = static_cast<unsigned (Urho3D::VertexBuffer::*)() const>(&Urho3D::VertexBuffer::GetVertexCount) ;
    /*Return vertex size in bytes. BIND_AS_PROPERTY*//*() const*/
    type["GetVertexSize"] = static_cast<unsigned (Urho3D::VertexBuffer::*)() const>(&Urho3D::VertexBuffer::GetVertexSize) ;
    /*Return vertex elements. BIND_AS_PROPERTY*//*() const*/
    type["GetElements"] = static_cast<const PODVector<VertexElement>& (Urho3D::VertexBuffer::*)() const>(&Urho3D::VertexBuffer::GetElements) ;
    /*Return legacy vertex element mask. Note that both semantic and type must match the legacy element for a mask bit to be set. BIND_AS_PROPERTY*//*() const*/
    type["GetElementMask"] = static_cast<VertexMaskFlags (Urho3D::VertexBuffer::*)() const>(&Urho3D::VertexBuffer::GetElementMask) ;
    /*Return CPU memory shadow data.*//*() const*/
    type["GetShadowData"] = static_cast<unsigned char* (Urho3D::VertexBuffer::*)() const>(&Urho3D::VertexBuffer::GetShadowData) ;
    /*Return shared array pointer to the CPU memory shadow data.*//*() const*/
    type["GetShadowDataShared"] = static_cast<SharedArrayPtr<unsigned char> (Urho3D::VertexBuffer::*)() const>(&Urho3D::VertexBuffer::GetShadowDataShared) ;
    /*Return buffer hash for building vertex declarations. Used internally.*//*(unsigned streamIndex)*/
    type["GetBufferHash"] = static_cast<unsigned long long (Urho3D::VertexBuffer::*)(unsigned)>(&Urho3D::VertexBuffer::GetBufferHash) ;
    type["SetSize"] = sol::overload(
        static_cast<bool (Urho3D::VertexBuffer::*)(unsigned, const  PODVector<  VertexElement > &, bool)>(&Urho3D::VertexBuffer::SetSize) ,
        [](Urho3D::VertexBuffer& self, unsigned vertexCount, const  PODVector<  VertexElement > & elements){ return self.SetSize(vertexCount, elements); },
        static_cast<bool (Urho3D::VertexBuffer::*)(unsigned, unsigned, bool)>(&Urho3D::VertexBuffer::SetSize) ,
        [](Urho3D::VertexBuffer& self, unsigned vertexCount, unsigned elementMask){ return self.SetSize(vertexCount, elementMask); } );
    type["SetDataRange"] = sol::overload(
        static_cast<bool (Urho3D::VertexBuffer::*)(const void *, unsigned, unsigned, bool)>(&Urho3D::VertexBuffer::SetDataRange) ,
        [](Urho3D::VertexBuffer& self, const void * data, unsigned start, unsigned count){ return self.SetDataRange(data, start, count); } );
    type["Lock"] = sol::overload(
        static_cast<void* (Urho3D::VertexBuffer::*)(unsigned, unsigned, bool)>(&Urho3D::VertexBuffer::Lock) ,
        [](Urho3D::VertexBuffer& self, unsigned start, unsigned count){ return self.Lock(start, count); } );
    type["GetElement"] = sol::overload(
        static_cast<const VertexElement* (Urho3D::VertexBuffer::*)(VertexElementSemantic, unsigned char) const>(&Urho3D::VertexBuffer::GetElement) ,
        [](Urho3D::VertexBuffer& self, VertexElementSemantic semantic){ return self.GetElement(semantic); },
        static_cast<const VertexElement* (Urho3D::VertexBuffer::*)(VertexElementType, VertexElementSemantic, unsigned char) const>(&Urho3D::VertexBuffer::GetElement) ,
        [](Urho3D::VertexBuffer& self, VertexElementType type, VertexElementSemantic semantic){ return self.GetElement(type, semantic); } );
    type["HasElement"] = sol::overload(
        static_cast<bool (Urho3D::VertexBuffer::*)(VertexElementSemantic, unsigned char) const>(&Urho3D::VertexBuffer::HasElement) ,
        [](Urho3D::VertexBuffer& self, VertexElementSemantic semantic){ return self.HasElement(semantic); },
        static_cast<bool (Urho3D::VertexBuffer::*)(VertexElementType, VertexElementSemantic, unsigned char) const>(&Urho3D::VertexBuffer::HasElement) ,
        [](Urho3D::VertexBuffer& self, VertexElementType type, VertexElementSemantic semantic){ return self.HasElement(type, semantic); } );
    type["GetElementOffset"] = sol::overload(
        static_cast<unsigned (Urho3D::VertexBuffer::*)(VertexElementSemantic, unsigned char) const>(&Urho3D::VertexBuffer::GetElementOffset) ,
        [](Urho3D::VertexBuffer& self, VertexElementSemantic semantic){ return self.GetElementOffset(semantic); },
        static_cast<unsigned (Urho3D::VertexBuffer::*)(VertexElementType, VertexElementSemantic, unsigned char) const>(&Urho3D::VertexBuffer::GetElementOffset) ,
        [](Urho3D::VertexBuffer& self, VertexElementType type, VertexElementSemantic semantic){ return self.GetElementOffset(type, semantic); } );
    type["dynamic"] = sol::property(static_cast<bool (Urho3D::VertexBuffer::*)() const>(&Urho3D::VertexBuffer::IsDynamic) );
    type["elementMask"] = sol::property(static_cast<VertexMaskFlags (Urho3D::VertexBuffer::*)() const>(&Urho3D::VertexBuffer::GetElementMask) );
    type["elements"] = sol::property(static_cast<const PODVector<VertexElement>& (Urho3D::VertexBuffer::*)() const>(&Urho3D::VertexBuffer::GetElements) );
    type["shadowed"] = sol::property(static_cast<bool (Urho3D::VertexBuffer::*)() const>(&Urho3D::VertexBuffer::IsShadowed) 
        , static_cast<void (Urho3D::VertexBuffer::*)(bool)>(&Urho3D::VertexBuffer::SetShadowed) );
    type["vertexCount"] = sol::property(static_cast<unsigned (Urho3D::VertexBuffer::*)() const>(&Urho3D::VertexBuffer::GetVertexCount) );
    type["vertexSize"] = sol::property(static_cast<unsigned (Urho3D::VertexBuffer::*)() const>(&Urho3D::VertexBuffer::GetVertexSize) );

}

