
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Audio/SoundStream.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Audio/SoundStream.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_SoundStream(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::SoundStream>( "SoundStream"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::RefCounted>()

);

// Constructors

    /*ABSTRACT*/

// Members

    /*Seek to sample number. Return true on success. Need not be implemented by all streams.*//*(unsigned sample_number)*/
    type["Seek"] = static_cast<bool (Urho3D::SoundStream::*)(unsigned)>(&Urho3D::SoundStream::Seek) ;
    /*Produce sound data into destination. Return number of bytes produced. Called by  SoundSource from the mixing thread.*//*(signed char *dest, unsigned numBytes)=0*/
    type["GetData"] = static_cast<unsigned (Urho3D::SoundStream::*)(signed char *, unsigned)>(&Urho3D::SoundStream::GetData) ;
    /*Set sound data format.*//*(unsigned frequency, bool sixteenBit, bool stereo)*/
    type["SetFormat"] = static_cast<void (Urho3D::SoundStream::*)(unsigned, bool, bool)>(&Urho3D::SoundStream::SetFormat) ;
    /*Set whether playback should stop when no more data. Default false.*//*(bool enable)*/
    type["SetStopAtEnd"] = static_cast<void (Urho3D::SoundStream::*)(bool)>(&Urho3D::SoundStream::SetStopAtEnd) ;
    /*Return sample size.*//*() const*/
    type["GetSampleSize"] = static_cast<unsigned (Urho3D::SoundStream::*)() const>(&Urho3D::SoundStream::GetSampleSize) ;
    /*Return default frequency as a float.*//*() const*/
    type["GetFrequency"] = static_cast<float (Urho3D::SoundStream::*)() const>(&Urho3D::SoundStream::GetFrequency) ;
    /*Return default frequency as an integer.*//*() const*/
    type["GetIntFrequency"] = static_cast<unsigned (Urho3D::SoundStream::*)() const>(&Urho3D::SoundStream::GetIntFrequency) ;
    /*Return whether playback should stop when no more data.*//*() const*/
    type["GetStopAtEnd"] = static_cast<bool (Urho3D::SoundStream::*)() const>(&Urho3D::SoundStream::GetStopAtEnd) ;
    /*Return whether data is sixteen bit.*//*() const*/
    type["IsSixteenBit"] = static_cast<bool (Urho3D::SoundStream::*)() const>(&Urho3D::SoundStream::IsSixteenBit) ;
    /*Return whether data is stereo.*//*() const*/
    type["IsStereo"] = static_cast<bool (Urho3D::SoundStream::*)() const>(&Urho3D::SoundStream::IsStereo) ;

}

