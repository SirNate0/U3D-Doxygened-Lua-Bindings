
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/ConstantBuffer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/ConstantBuffer.h>
#include <Urho3D/Core/Context.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_ConstantBuffer(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::ConstantBuffer::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::ConstantBuffer::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::ConstantBuffer>((Urho3D::ConstantBuffer*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::ConstantBuffer>( "ConstantBuffer"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted,Urho3D::GPUObject>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::ConstantBuffer>(context);
        });

// Members

    /*Recreate the GPU resource and restore data if applicable.*//*() override*/
    type["OnDeviceReset"] = static_cast<void (Urho3D::ConstantBuffer::*)()>(&Urho3D::ConstantBuffer::OnDeviceReset) ;
    /*Release the buffer.*//*() override*/
    type["Release"] = static_cast<void (Urho3D::ConstantBuffer::*)()>(&Urho3D::ConstantBuffer::Release) ;
    /*Set size and create GPU-side buffer. Return true on success.*//*(unsigned size)*/
    type["SetSize"] = static_cast<bool (Urho3D::ConstantBuffer::*)(unsigned)>(&Urho3D::ConstantBuffer::SetSize) ;
    /*Set a generic parameter and mark buffer dirty.*//*(unsigned offset, unsigned size, const void *data)*/
    type["SetParameter"] = static_cast<void (Urho3D::ConstantBuffer::*)(unsigned, unsigned, const void *)>(&Urho3D::ConstantBuffer::SetParameter) ;
    /*Set a  Vector3 array parameter and mark buffer dirty.*//*(unsigned offset, unsigned rows, const void *data)*/
    type["SetVector3ArrayParameter"] = static_cast<void (Urho3D::ConstantBuffer::*)(unsigned, unsigned, const void *)>(&Urho3D::ConstantBuffer::SetVector3ArrayParameter) ;
    /*Apply to GPU.*//*()*/
    type["Apply"] = static_cast<void (Urho3D::ConstantBuffer::*)()>(&Urho3D::ConstantBuffer::Apply) ;
    /*Return size.*//*() const*/
    type["GetSize"] = static_cast<unsigned (Urho3D::ConstantBuffer::*)() const>(&Urho3D::ConstantBuffer::GetSize) ;
    /*Return whether has unapplied data.*//*() const*/
    type["IsDirty"] = static_cast<bool (Urho3D::ConstantBuffer::*)() const>(&Urho3D::ConstantBuffer::IsDirty) ;

}

