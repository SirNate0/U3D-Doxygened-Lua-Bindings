
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/IO/VectorBuffer.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/IO/VectorBuffer.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/IO/Deserializer.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_VectorBuffer(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::VectorBuffer>( "VectorBuffer"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::AbstractFile,Urho3D::Deserializer,Urho3D::Serializer>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::VectorBuffer(),
        Urho3D::VectorBuffer(const  PODVector< unsigned char > &),
        Urho3D::VectorBuffer(const void *, unsigned),
        Urho3D::VectorBuffer(Deserializer &, unsigned)>();

// Members

    /*Read bytes from the buffer. Return number of bytes actually read.*//*(void *dest, unsigned size) override*/
    type["Read"] = static_cast<unsigned (Urho3D::VectorBuffer::*)(void *, unsigned)>(&Urho3D::VectorBuffer::Read) ;
    /*Set position from the beginning of the buffer. Return actual new position.*//*(unsigned position) override*/
    type["Seek"] = static_cast<unsigned (Urho3D::VectorBuffer::*)(unsigned)>(&Urho3D::VectorBuffer::Seek) ;
    /*Write bytes to the buffer. Return number of bytes actually written.*//*(const void *data, unsigned size) override*/
    type["Write"] = static_cast<unsigned (Urho3D::VectorBuffer::*)(const void *, unsigned)>(&Urho3D::VectorBuffer::Write) ;
    /*Reset to zero size.*//*()*/
    type["Clear"] = static_cast<void (Urho3D::VectorBuffer::*)()>(&Urho3D::VectorBuffer::Clear) ;
    /*Set size.*//*(unsigned size)*/
    type["Resize"] = static_cast<void (Urho3D::VectorBuffer::*)(unsigned)>(&Urho3D::VectorBuffer::Resize) ;
    /*Return data.*//*() const*/
    type["GetData"] = static_cast<const unsigned char* (Urho3D::VectorBuffer::*)() const>(&Urho3D::VectorBuffer::GetData) ;
    /*Return non-const data.*//*()*/
    type["GetModifiableData"] = static_cast<unsigned char* (Urho3D::VectorBuffer::*)()>(&Urho3D::VectorBuffer::GetModifiableData) ;
    /*Return the buffer.*//*() const*/
    type["GetBuffer"] = static_cast<const PODVector<unsigned char>& (Urho3D::VectorBuffer::*)() const>(&Urho3D::VectorBuffer::GetBuffer) ;
    type["SetData"] = sol::overload(
        static_cast<void (Urho3D::VectorBuffer::*)(const  PODVector< unsigned char > &)>(&Urho3D::VectorBuffer::SetData) ,
        static_cast<void (Urho3D::VectorBuffer::*)(const void *, unsigned)>(&Urho3D::VectorBuffer::SetData) ,
        static_cast<void (Urho3D::VectorBuffer::*)(Deserializer &, unsigned)>(&Urho3D::VectorBuffer::SetData)  );

}

