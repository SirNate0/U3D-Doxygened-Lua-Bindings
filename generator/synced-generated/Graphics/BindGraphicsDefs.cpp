
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/GraphicsDefs.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Math/StringHash.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_VertexElement(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::VertexElement>( "VertexElement"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::VertexElement(),
        Urho3D::VertexElement(VertexElementType, VertexElementSemantic, unsigned char, bool),
        Urho3D::VertexElement(VertexElementType, VertexElementSemantic, unsigned char),
        Urho3D::VertexElement(VertexElementType, VertexElementSemantic)>();

// Members

    /*Test for equality with another vertex element. Offset is intentionally not compared, as it's relevant only when an element exists within a vertex buffer.*//*(const VertexElement &rhs) const*/
    type["__eq"] = static_cast<bool (Urho3D::VertexElement::*)(const  VertexElement &) const>(&Urho3D::VertexElement::operator==) ;
    /*Test for inequality with another vertex element.*//*(const VertexElement &rhs) const*/
    type["operator_neq"] = static_cast<bool (Urho3D::VertexElement::*)(const  VertexElement &) const>(&Urho3D::VertexElement::operator!=) ;
    type["type_"] = &Urho3D::VertexElement::type_;
    type["semantic_"] = &Urho3D::VertexElement::semantic_;
    type["index_"] = &Urho3D::VertexElement::index_;
    type["perInstance_"] = &Urho3D::VertexElement::perInstance_;
    type["offset_"] = &Urho3D::VertexElement::offset_;

}

