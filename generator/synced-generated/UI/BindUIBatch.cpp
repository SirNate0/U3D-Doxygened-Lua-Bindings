
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/UIBatch.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/UIBatch.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/Texture.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/UI/UIBatch.h>
#include <Urho3D/UI/UIElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_UIBatch(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::UIBatch>( "UIBatch"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::UIBatch(),
        Urho3D::UIBatch(UIElement *, BlendMode, const  IntRect &, Texture *, PODVector< float > *)>();

// Members

    /*Restore  UI element's default color.*//*()*/
    type["SetDefaultColor"] = static_cast<void (Urho3D::UIBatch::*)()>(&Urho3D::UIBatch::SetDefaultColor) ;
    /*Merge with another batch.*//*(const UIBatch &batch)*/
    type["Merge"] = static_cast<bool (Urho3D::UIBatch::*)(const  UIBatch &)>(&Urho3D::UIBatch::Merge) ;
    /*Return an interpolated color for the  UI element.*//*(float x, float y)*/
    type["GetInterpolatedColor"] = static_cast<unsigned (Urho3D::UIBatch::*)(float, float)>(&Urho3D::UIBatch::GetInterpolatedColor) ;
    type["SetColor"] = sol::overload(
        static_cast<void (Urho3D::UIBatch::*)(const  Color &, bool)>(&Urho3D::UIBatch::SetColor) ,
        [](Urho3D::UIBatch& self, const  Color & color){ self.SetColor(color); } );
    type["AddQuad"] = sol::overload(
        static_cast<void (Urho3D::UIBatch::*)(float, float, float, float, int, int, int, int)>(&Urho3D::UIBatch::AddQuad) ,
        [](Urho3D::UIBatch& self, float x, float y, float width, float height, int texOffsetX, int texOffsetY, int texWidth){ self.AddQuad(x, y, width, height, texOffsetX, texOffsetY, texWidth); },
        [](Urho3D::UIBatch& self, float x, float y, float width, float height, int texOffsetX, int texOffsetY){ self.AddQuad(x, y, width, height, texOffsetX, texOffsetY); },
        static_cast<void (Urho3D::UIBatch::*)(const  Matrix3x4 &, int, int, int, int, int, int, int, int)>(&Urho3D::UIBatch::AddQuad) ,
        [](Urho3D::UIBatch& self, const  Matrix3x4 & transform, int x, int y, int width, int height, int texOffsetX, int texOffsetY, int texWidth){ self.AddQuad(transform, x, y, width, height, texOffsetX, texOffsetY, texWidth); },
        [](Urho3D::UIBatch& self, const  Matrix3x4 & transform, int x, int y, int width, int height, int texOffsetX, int texOffsetY){ self.AddQuad(transform, x, y, width, height, texOffsetX, texOffsetY); },
        static_cast<void (Urho3D::UIBatch::*)(int, int, int, int, int, int, int, int, bool)>(&Urho3D::UIBatch::AddQuad) ,
        static_cast<void (Urho3D::UIBatch::*)(const  Matrix3x4 &, const  IntVector2 &, const  IntVector2 &, const  IntVector2 &, const  IntVector2 &, const  IntVector2 &, const  IntVector2 &, const  IntVector2 &, const  IntVector2 &)>(&Urho3D::UIBatch::AddQuad) ,
        static_cast<void (Urho3D::UIBatch::*)(const  Matrix3x4 &, const  IntVector2 &, const  IntVector2 &, const  IntVector2 &, const  IntVector2 &, const  IntVector2 &, const  IntVector2 &, const  IntVector2 &, const  IntVector2 &, const  Color &, const  Color &, const  Color &, const  Color &)>(&Urho3D::UIBatch::AddQuad)  );
    type["element_"] = &Urho3D::UIBatch::element_;
    type["blendMode_"] = &Urho3D::UIBatch::blendMode_;
    type["scissor_"] = &Urho3D::UIBatch::scissor_;
    type["texture_"] = &Urho3D::UIBatch::texture_;
    type["invTextureSize_"] = &Urho3D::UIBatch::invTextureSize_;
    type["vertexData_"] = &Urho3D::UIBatch::vertexData_;
    type["vertexStart_"] = &Urho3D::UIBatch::vertexStart_;
    type["vertexEnd_"] = &Urho3D::UIBatch::vertexEnd_;
    type["color_"] = &Urho3D::UIBatch::color_;
    type["useGradient_"] = &Urho3D::UIBatch::useGradient_;
    type["customMaterial_"] = &Urho3D::UIBatch::customMaterial_;

}

