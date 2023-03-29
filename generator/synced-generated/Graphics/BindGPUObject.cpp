
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/GPUObject.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/GPUObject.h>
#include <Urho3D/Graphics/Graphics.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_GPUObject(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::GPUObject>( "GPUObject"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::GPUObject(Graphics *)>();

// Members

    /*Mark the GPU resource destroyed on graphics context destruction.*//*()*/
    type["OnDeviceLost"] = static_cast<void (Urho3D::GPUObject::*)()>(&Urho3D::GPUObject::OnDeviceLost) ;
    /*Recreate the GPU resource and restore data if applicable.*//*()*/
    type["OnDeviceReset"] = static_cast<void (Urho3D::GPUObject::*)()>(&Urho3D::GPUObject::OnDeviceReset) ;
    /*Unconditionally release the GPU resource.*//*()*/
    type["Release"] = static_cast<void (Urho3D::GPUObject::*)()>(&Urho3D::GPUObject::Release) ;
    /*Clear the data lost flag.*//*()*/
    type["ClearDataLost"] = static_cast<void (Urho3D::GPUObject::*)()>(&Urho3D::GPUObject::ClearDataLost) ;
    /*Return the graphics subsystem associated with this GPU object.*//*() const*/
    type["GetGraphics"] = [](Urho3D::GPUObject& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetGraphics());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the object pointer. Applicable only on Direct3D.*//*() const*/
    type["GetGPUObject"] = static_cast<void* (Urho3D::GPUObject::*)() const>(&Urho3D::GPUObject::GetGPUObject) ;
    /*Return the object name. Applicable only on OpenGL.*//*() const*/
    type["GetGPUObjectName"] = static_cast<unsigned (Urho3D::GPUObject::*)() const>(&Urho3D::GPUObject::GetGPUObjectName) ;
    /*Return whether data is lost due to context loss. BIND_AS_PROPERTY*//*() const*/
    type["IsDataLost"] = static_cast<bool (Urho3D::GPUObject::*)() const>(&Urho3D::GPUObject::IsDataLost) ;
    /*Return whether has pending data assigned while graphics context was lost.*//*() const*/
    type["HasPendingData"] = static_cast<bool (Urho3D::GPUObject::*)() const>(&Urho3D::GPUObject::HasPendingData) ;
    type["dataLost"] = sol::property(static_cast<bool (Urho3D::GPUObject::*)() const>(&Urho3D::GPUObject::IsDataLost) );

}

