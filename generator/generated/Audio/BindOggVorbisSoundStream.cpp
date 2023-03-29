
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Audio/OggVorbisSoundStream.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Audio/OggVorbisSoundStream.h>
#include <Urho3D/Audio/Sound.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_OggVorbisSoundStream(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::OggVorbisSoundStream>( "OggVorbisSoundStream"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::SoundStream,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](const Sound *sound) { 
            return Urho3D::MakeShared<Urho3D::OggVorbisSoundStream>(sound);
        });

// Members

    /*Seek to sample number. Return true on success.*//*(unsigned sample_number) override*/
    type["Seek"] = static_cast<bool (Urho3D::OggVorbisSoundStream::*)(unsigned)>(&Urho3D::OggVorbisSoundStream::Seek) ;
    /*Produce sound data into destination. Return number of bytes produced. Called by  SoundSource from the mixing thread.*//*(signed char *dest, unsigned numBytes) override*/
    type["GetData"] = static_cast<unsigned (Urho3D::OggVorbisSoundStream::*)(signed char *, unsigned)>(&Urho3D::OggVorbisSoundStream::GetData) ;

}

