
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/Cursor.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/Cursor.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Texture.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Resource/Image.h>
#include <Urho3D/UI/BorderImage.h>
#include <Urho3D/UI/UIBatch.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Cursor(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Cursor::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Cursor::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Cursor>((Urho3D::Cursor*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Cursor>( "Cursor"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::BorderImage,Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Cursor>(context);
        });

// Members

    /*Return  UI rendering batches.*//*(PODVector< UIBatch > &batches, PODVector< float > &vertexData, const IntRect &currentScissor) override*/
    type["GetBatches"] = static_cast<void (Urho3D::Cursor::*)(PODVector<  UIBatch > &, PODVector< float > &, const  IntRect &)>(&Urho3D::Cursor::GetBatches) ;
    /*Set whether to use system default shapes. Is only possible when the OS mouse cursor has been set visible from the  Input subsystem. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetUseSystemShapes"] = static_cast<void (Urho3D::Cursor::*)(bool)>(&Urho3D::Cursor::SetUseSystemShapes) ;
    /*Get current shape. BIND_AS_PROPERTY*//*() const*/
    type["GetShape"] = static_cast<const String& (Urho3D::Cursor::*)() const>(&Urho3D::Cursor::GetShape) ;
    /*Return whether is using system default shapes. BIND_AS_PROPERTY*//*() const*/
    type["GetUseSystemShapes"] = static_cast<bool (Urho3D::Cursor::*)() const>(&Urho3D::Cursor::GetUseSystemShapes) ;
    /*Set shapes attribute.*//*(const VariantVector &value)*/
    type["SetShapesAttr"] = static_cast<void (Urho3D::Cursor::*)(const  VariantVector &)>(&Urho3D::Cursor::SetShapesAttr) ;
    /*Return shapes attribute.*//*() const*/
    type["GetShapesAttr"] = static_cast<VariantVector (Urho3D::Cursor::*)() const>(&Urho3D::Cursor::GetShapesAttr) ;
    /*Apply pending OS cursor shape. Called by  UI. No-op when the OS mouse pointer is not used.*//*()*/
    type["ApplyOSCursorShape"] = static_cast<void (Urho3D::Cursor::*)()>(&Urho3D::Cursor::ApplyOSCursorShape) ;
    type["DefineShape"] = sol::overload(
        static_cast<void (Urho3D::Cursor::*)(const  String &, Image *, const  IntRect &, const  IntVector2 &)>(&Urho3D::Cursor::DefineShape) ,
        static_cast<void (Urho3D::Cursor::*)(CursorShape, Image *, const  IntRect &, const  IntVector2 &)>(&Urho3D::Cursor::DefineShape)  );
    type["SetShape"] = sol::overload(
        static_cast<void (Urho3D::Cursor::*)(const  String &)>(&Urho3D::Cursor::SetShape) ,
        static_cast<void (Urho3D::Cursor::*)(CursorShape)>(&Urho3D::Cursor::SetShape)  );
    type["shape"] = sol::property(static_cast<const String& (Urho3D::Cursor::*)() const>(&Urho3D::Cursor::GetShape) 
        , static_cast<void (Urho3D::Cursor::*)(const  String &)>(&Urho3D::Cursor::SetShape) );
    type["useSystemShapes"] = sol::property(static_cast<bool (Urho3D::Cursor::*)() const>(&Urho3D::Cursor::GetUseSystemShapes) 
        , static_cast<void (Urho3D::Cursor::*)(bool)>(&Urho3D::Cursor::SetUseSystemShapes) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/Cursor.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/Cursor.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Graphics/Texture.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Resource/Image.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CursorShapeInfo(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::CursorShapeInfo>( "CursorShapeInfo"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    type[sol::call_constructor] = sol::constructors<
        Urho3D::CursorShapeInfo(),
        Urho3D::CursorShapeInfo(int)>();

// Members

    type["image_"] = &Urho3D::CursorShapeInfo::image_;
    type["texture_"] = &Urho3D::CursorShapeInfo::texture_;
    type["imageRect_"] = &Urho3D::CursorShapeInfo::imageRect_;
    type["hotSpot_"] = &Urho3D::CursorShapeInfo::hotSpot_;
# if 0 // SKIPPED
    type["osCursor_"] = &Urho3D::CursorShapeInfo::osCursor_;
# endif
    type["systemDefined_"] = &Urho3D::CursorShapeInfo::systemDefined_;
    type["systemCursor_"] = &Urho3D::CursorShapeInfo::systemCursor_;

}

