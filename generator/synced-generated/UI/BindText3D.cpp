
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/Text3D.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/Text3D.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Input/InputConstants.h>
#include <Urho3D/Math/BoundingBox.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/Scene/Animatable.h>
#include <Urho3D/Scene/Component.h>
#include <Urho3D/UI/Font.h>
#include <Urho3D/UI/UIBatch.h>
#include <Urho3D/UI/UISelectable.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Text3D(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Text3D::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Text3D::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Text3D>((Urho3D::Text3D*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Text3D>( "Text3D"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Drawable,Urho3D::Component,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Text3D>(context);
        });

// Members

    /*Apply attribute changes that can not be applied immediately.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::Text3D::*)()>(&Urho3D::Text3D::ApplyAttributes) ;
    /*Calculate distance and prepare batches for rendering. May be called from worker thread(s), possibly re-entrantly.*//*(const FrameInfo &frame) override*/
    type["UpdateBatches"] = static_cast<void (Urho3D::Text3D::*)(const  FrameInfo &)>(&Urho3D::Text3D::UpdateBatches) ;
    /*Prepare geometry for rendering. Called from a worker thread if possible (no GPU update).*//*(const FrameInfo &frame) override*/
    type["UpdateGeometry"] = static_cast<void (Urho3D::Text3D::*)(const  FrameInfo &)>(&Urho3D::Text3D::UpdateGeometry) ;
    /*Return whether a geometry update is necessary, and if it can happen in a worker thread.*//*() override*/
    type["GetUpdateGeometryType"] = static_cast<UpdateGeometryType (Urho3D::Text3D::*)()>(&Urho3D::Text3D::GetUpdateGeometryType) ;
    /*Set font size only while retaining the existing font. Return true if successful. BIND_AS_PROPERTY*//*(float size)*/
    type["SetFontSize"] = static_cast<bool (Urho3D::Text3D::*)(float)>(&Urho3D::Text3D::SetFontSize) ;
    /*Set material. BIND_AS_PROPERTY*//*(Material *material)*/
    type["SetMaterial"] = static_cast<void (Urho3D::Text3D::*)(Material *)>(&Urho3D::Text3D::SetMaterial) ;
    /*Set text.  Text is assumed to be either ASCII or UTF8-encoded. BIND_AS_PROPERTY*//*(const String &text)*/
    type["SetText"] = static_cast<void (Urho3D::Text3D::*)(const  String &)>(&Urho3D::Text3D::SetText) ;
    /*Set horizontal and vertical alignment.*//*(HorizontalAlignment hAlign, VerticalAlignment vAlign)*/
    type["SetAlignment"] = static_cast<void (Urho3D::Text3D::*)(HorizontalAlignment, VerticalAlignment)>(&Urho3D::Text3D::SetAlignment) ;
    /*Set horizontal alignment. BIND_AS_PROPERTY*//*(HorizontalAlignment align)*/
    type["SetHorizontalAlignment"] = static_cast<void (Urho3D::Text3D::*)(HorizontalAlignment)>(&Urho3D::Text3D::SetHorizontalAlignment) ;
    /*Set vertical alignment. BIND_AS_PROPERTY*//*(VerticalAlignment align)*/
    type["SetVerticalAlignment"] = static_cast<void (Urho3D::Text3D::*)(VerticalAlignment)>(&Urho3D::Text3D::SetVerticalAlignment) ;
    /*Set row alignment. BIND_AS_PROPERTY*//*(HorizontalAlignment align)*/
    type["SetTextAlignment"] = static_cast<void (Urho3D::Text3D::*)(HorizontalAlignment)>(&Urho3D::Text3D::SetTextAlignment) ;
    /*Set row spacing, 1.0 for original font spacing. BIND_AS_PROPERTY*//*(float spacing)*/
    type["SetRowSpacing"] = static_cast<void (Urho3D::Text3D::*)(float)>(&Urho3D::Text3D::SetRowSpacing) ;
    /*Set wordwrap. In wordwrap mode the text element will respect its current width. Otherwise it resizes itself freely. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetWordwrap"] = static_cast<void (Urho3D::Text3D::*)(bool)>(&Urho3D::Text3D::SetWordwrap) ;
    /*Set text effect. BIND_AS_PROPERTY*//*(TextEffect textEffect)*/
    type["SetTextEffect"] = static_cast<void (Urho3D::Text3D::*)(TextEffect)>(&Urho3D::Text3D::SetTextEffect) ;
    /*Set shadow offset. BIND_AS_PROPERTY*//*(const IntVector2 &offset)*/
    type["SetEffectShadowOffset"] = static_cast<void (Urho3D::Text3D::*)(const  IntVector2 &)>(&Urho3D::Text3D::SetEffectShadowOffset) ;
    /*Set stroke thickness. BIND_AS_PROPERTY*//*(int thickness)*/
    type["SetEffectStrokeThickness"] = static_cast<void (Urho3D::Text3D::*)(int)>(&Urho3D::Text3D::SetEffectStrokeThickness) ;
    /*Set stroke rounding. Corners of the font will be rounded off in the stroke so the stroke won't have corners. BIND_AS_PROPERTY*//*(bool roundStroke)*/
    type["SetEffectRoundStroke"] = static_cast<void (Urho3D::Text3D::*)(bool)>(&Urho3D::Text3D::SetEffectRoundStroke) ;
    /*Set effect color. BIND_AS_PROPERTY*//*(const Color &effectColor)*/
    type["SetEffectColor"] = static_cast<void (Urho3D::Text3D::*)(const  Color &)>(&Urho3D::Text3D::SetEffectColor) ;
    /*Set effect Z bias. BIND_AS_PROPERTY*//*(float bias)*/
    type["SetEffectDepthBias"] = static_cast<void (Urho3D::Text3D::*)(float)>(&Urho3D::Text3D::SetEffectDepthBias) ;
    /*Set text width. Only has effect in word wrap mode. BIND_AS_PROPERTY*//*(int width)*/
    type["SetWidth"] = static_cast<void (Urho3D::Text3D::*)(int)>(&Urho3D::Text3D::SetWidth) ;
    /*Set opacity. BIND_AS_PROPERTY*//*(float opacity)*/
    type["SetOpacity"] = static_cast<void (Urho3D::Text3D::*)(float)>(&Urho3D::Text3D::SetOpacity) ;
    /*Set whether text has fixed size on screen (pixel-perfect) regardless of distance to camera. Works best when combined with face camera rotation. Default false. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetFixedScreenSize"] = static_cast<void (Urho3D::Text3D::*)(bool)>(&Urho3D::Text3D::SetFixedScreenSize) ;
    /*Set how the text should rotate in relation to the camera. Default is to not rotate (FC_NONE). BIND_AS_PROPERTY*//*(FaceCameraMode mode)*/
    type["SetFaceCameraMode"] = static_cast<void (Urho3D::Text3D::*)(FaceCameraMode)>(&Urho3D::Text3D::SetFaceCameraMode) ;
    /*Return font. BIND_AS_PROPERTY*//*() const*/
    type["GetFont"] = [](Urho3D::Text3D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFont());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return font size. BIND_AS_PROPERTY*//*() const*/
    type["GetFontSize"] = static_cast<float (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetFontSize) ;
    /*Return material. BIND_AS_PROPERTY*//*() const*/
    type["GetMaterial"] = [](Urho3D::Text3D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return text. BIND_AS_PROPERTY*//*() const*/
    type["GetText"] = static_cast<const String& (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetText) ;
    /*Return row alignment. BIND_AS_PROPERTY*//*() const*/
    type["GetTextAlignment"] = static_cast<HorizontalAlignment (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetTextAlignment) ;
    /*Return horizontal alignment. BIND_AS_PROPERTY*//*() const*/
    type["GetHorizontalAlignment"] = static_cast<HorizontalAlignment (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetHorizontalAlignment) ;
    /*Return vertical alignment. BIND_AS_PROPERTY*//*() const*/
    type["GetVerticalAlignment"] = static_cast<VerticalAlignment (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetVerticalAlignment) ;
    /*Return row spacing. BIND_AS_PROPERTY*//*() const*/
    type["GetRowSpacing"] = static_cast<float (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetRowSpacing) ;
    /*Return wordwrap mode. BIND_AS_PROPERTY*//*() const*/
    type["GetWordwrap"] = static_cast<bool (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetWordwrap) ;
    /*Return text effect. BIND_AS_PROPERTY*//*() const*/
    type["GetTextEffect"] = static_cast<TextEffect (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetTextEffect) ;
    /*Return effect shadow offset. BIND_AS_PROPERTY*//*() const*/
    type["GetEffectShadowOffset"] = static_cast<const IntVector2& (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetEffectShadowOffset) ;
    /*Return effect stroke thickness. BIND_AS_PROPERTY*//*() const*/
    type["GetEffectStrokeThickness"] = static_cast<int (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetEffectStrokeThickness) ;
    /*Return effect round stroke. BIND_AS_PROPERTY*//*() const*/
    type["GetEffectRoundStroke"] = static_cast<bool (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetEffectRoundStroke) ;
    /*Return effect color. BIND_AS_PROPERTY*//*() const*/
    type["GetEffectColor"] = static_cast<const Color& (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetEffectColor) ;
    /*Return effect depth bias. BIND_AS_PROPERTY*//*() const*/
    type["GetEffectDepthBias"] = static_cast<float (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetEffectDepthBias) ;
    /*Return text width. BIND_AS_PROPERTY*//*() const*/
    type["GetWidth"] = static_cast<int (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetWidth) ;
    /*Return text height. BIND_AS_PROPERTY*//*() const*/
    type["GetHeight"] = static_cast<int (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetHeight) ;
    /*Return row height. BIND_AS_PROPERTY*//*() const*/
    type["GetRowHeight"] = static_cast<int (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetRowHeight) ;
    /*Return number of rows. BIND_AS_PROPERTY*//*() const*/
    type["GetNumRows"] = static_cast<unsigned (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetNumRows) ;
    /*Return number of characters. BIND_AS_PROPERTY*//*() const*/
    type["GetNumChars"] = static_cast<unsigned (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetNumChars) ;
    /*Return width of row by index. BIND_AS_ALIAS_get_rowWidths*//*(unsigned index) const*/
    type["GetRowWidth"] = static_cast<int (Urho3D::Text3D::*)(unsigned) const>(&Urho3D::Text3D::GetRowWidth) ;
    /*Return position of character by index relative to the text element origin. BIND_AS_ALIAS_get_charPositions*//*(unsigned index)*/
    type["GetCharPosition"] = static_cast<Vector2 (Urho3D::Text3D::*)(unsigned)>(&Urho3D::Text3D::GetCharPosition) ;
    /*Return size of character by index. BIND_AS_ALIAS_get_charSizes*//*(unsigned index)*/
    type["GetCharSize"] = static_cast<Vector2 (Urho3D::Text3D::*)(unsigned)>(&Urho3D::Text3D::GetCharSize) ;
    /*Return corner color. BIND_AS_ALIAS_get_colors*//*(Corner corner) const*/
    type["GetColor"] = static_cast<const Color& (Urho3D::Text3D::*)(Corner) const>(&Urho3D::Text3D::GetColor) ;
    /*Return opacity. BIND_AS_PROPERTY*//*() const*/
    type["GetOpacity"] = static_cast<float (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetOpacity) ;
    /*Return whether text has fixed screen size. BIND_AS_PROPERTY*//*() const*/
    type["IsFixedScreenSize"] = static_cast<bool (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::IsFixedScreenSize) ;
    /*Return how the text rotates in relation to the camera. BIND_AS_PROPERTY*//*() const*/
    type["GetFaceCameraMode"] = static_cast<FaceCameraMode (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetFaceCameraMode) ;
    /*Set font attribute.*//*(const ResourceRef &value)*/
    type["SetFontAttr"] = static_cast<void (Urho3D::Text3D::*)(const  ResourceRef &)>(&Urho3D::Text3D::SetFontAttr) ;
    /*Return font attribute.*//*() const*/
    type["GetFontAttr"] = static_cast<ResourceRef (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetFontAttr) ;
    /*Set material attribute.*//*(const ResourceRef &value)*/
    type["SetMaterialAttr"] = static_cast<void (Urho3D::Text3D::*)(const  ResourceRef &)>(&Urho3D::Text3D::SetMaterialAttr) ;
    /*Return material attribute.*//*() const*/
    type["GetMaterialAttr"] = static_cast<ResourceRef (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetMaterialAttr) ;
    /*Set text attribute.*//*(const String &value)*/
    type["SetTextAttr"] = static_cast<void (Urho3D::Text3D::*)(const  String &)>(&Urho3D::Text3D::SetTextAttr) ;
    /*Return text attribute.*//*() const*/
    type["GetTextAttr"] = static_cast<String (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetTextAttr) ;
    /*Get color attribute. Uses just the top-left color.*//*() const*/
    type["GetColorAttr"] = static_cast<const Color& (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetColorAttr) ;
    type["SetFont"] = sol::overload(
        static_cast<bool (Urho3D::Text3D::*)(const  String &, float)>(&Urho3D::Text3D::SetFont) ,
        [](Urho3D::Text3D& self, const  String & fontName){ return self.SetFont(fontName); },
        static_cast<bool (Urho3D::Text3D::*)(Font *, float)>(&Urho3D::Text3D::SetFont) ,
        [](Urho3D::Text3D& self, Font * font){ return self.SetFont(font); } );
    type["SetColor"] = sol::overload(
        static_cast<void (Urho3D::Text3D::*)(const  Color &)>(&Urho3D::Text3D::SetColor) ,
        static_cast<void (Urho3D::Text3D::*)(Corner, const  Color &)>(&Urho3D::Text3D::SetColor)  );
    type["charPosition"] = sol::property(static_cast<Vector2 (Urho3D::Text3D::*)(unsigned)>(&Urho3D::Text3D::GetCharPosition) );
    type["charSize"] = sol::property(static_cast<Vector2 (Urho3D::Text3D::*)(unsigned)>(&Urho3D::Text3D::GetCharSize) );
    type["color"] = sol::property(static_cast<const Color& (Urho3D::Text3D::*)(Corner) const>(&Urho3D::Text3D::GetColor) 
        , static_cast<void (Urho3D::Text3D::*)(Corner, const  Color &)>(&Urho3D::Text3D::SetColor) );
    type["effectColor"] = sol::property(static_cast<const Color& (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetEffectColor) 
        , static_cast<void (Urho3D::Text3D::*)(const  Color &)>(&Urho3D::Text3D::SetEffectColor) );
    type["effectDepthBias"] = sol::property(static_cast<float (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetEffectDepthBias) 
        , static_cast<void (Urho3D::Text3D::*)(float)>(&Urho3D::Text3D::SetEffectDepthBias) );
    type["effectRoundStroke"] = sol::property(static_cast<bool (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetEffectRoundStroke) 
        , static_cast<void (Urho3D::Text3D::*)(bool)>(&Urho3D::Text3D::SetEffectRoundStroke) );
    type["effectShadowOffset"] = sol::property(static_cast<const IntVector2& (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetEffectShadowOffset) 
        , static_cast<void (Urho3D::Text3D::*)(const  IntVector2 &)>(&Urho3D::Text3D::SetEffectShadowOffset) );
    type["effectStrokeThickness"] = sol::property(static_cast<int (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetEffectStrokeThickness) 
        , static_cast<void (Urho3D::Text3D::*)(int)>(&Urho3D::Text3D::SetEffectStrokeThickness) );
    type["faceCameraMode"] = sol::property(static_cast<FaceCameraMode (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetFaceCameraMode) 
        , static_cast<void (Urho3D::Text3D::*)(FaceCameraMode)>(&Urho3D::Text3D::SetFaceCameraMode) );
    type["fixedScreenSize"] = sol::property(static_cast<bool (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::IsFixedScreenSize) 
        , static_cast<void (Urho3D::Text3D::*)(bool)>(&Urho3D::Text3D::SetFixedScreenSize) );
    type["font"] = sol::property([](Urho3D::Text3D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFont());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["fontSize"] = sol::property(static_cast<float (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetFontSize) 
        , static_cast<bool (Urho3D::Text3D::*)(float)>(&Urho3D::Text3D::SetFontSize) );
    type["height"] = sol::property(static_cast<int (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetHeight) );
    type["horizontalAlignment"] = sol::property(static_cast<HorizontalAlignment (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetHorizontalAlignment) 
        , static_cast<void (Urho3D::Text3D::*)(HorizontalAlignment)>(&Urho3D::Text3D::SetHorizontalAlignment) );
    type["material"] = sol::property([](Urho3D::Text3D& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Text3D::*)(Material *)>(&Urho3D::Text3D::SetMaterial) );
    type["numChars"] = sol::property(static_cast<unsigned (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetNumChars) );
    type["numRows"] = sol::property(static_cast<unsigned (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetNumRows) );
    type["opacity"] = sol::property(static_cast<float (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetOpacity) 
        , static_cast<void (Urho3D::Text3D::*)(float)>(&Urho3D::Text3D::SetOpacity) );
    type["rowHeight"] = sol::property(static_cast<int (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetRowHeight) );
    type["rowSpacing"] = sol::property(static_cast<float (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetRowSpacing) 
        , static_cast<void (Urho3D::Text3D::*)(float)>(&Urho3D::Text3D::SetRowSpacing) );
    type["rowWidth"] = sol::property(static_cast<int (Urho3D::Text3D::*)(unsigned) const>(&Urho3D::Text3D::GetRowWidth) );
    type["text"] = sol::property(static_cast<const String& (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetText) 
        , static_cast<void (Urho3D::Text3D::*)(const  String &)>(&Urho3D::Text3D::SetText) );
    type["textAlignment"] = sol::property(static_cast<HorizontalAlignment (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetTextAlignment) 
        , static_cast<void (Urho3D::Text3D::*)(HorizontalAlignment)>(&Urho3D::Text3D::SetTextAlignment) );
    type["textEffect"] = sol::property(static_cast<TextEffect (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetTextEffect) 
        , static_cast<void (Urho3D::Text3D::*)(TextEffect)>(&Urho3D::Text3D::SetTextEffect) );
    type["verticalAlignment"] = sol::property(static_cast<VerticalAlignment (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetVerticalAlignment) 
        , static_cast<void (Urho3D::Text3D::*)(VerticalAlignment)>(&Urho3D::Text3D::SetVerticalAlignment) );
    type["width"] = sol::property(static_cast<int (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetWidth) 
        , static_cast<void (Urho3D::Text3D::*)(int)>(&Urho3D::Text3D::SetWidth) );
    type["wordwrap"] = sol::property(static_cast<bool (Urho3D::Text3D::*)() const>(&Urho3D::Text3D::GetWordwrap) 
        , static_cast<void (Urho3D::Text3D::*)(bool)>(&Urho3D::Text3D::SetWordwrap) );

}

