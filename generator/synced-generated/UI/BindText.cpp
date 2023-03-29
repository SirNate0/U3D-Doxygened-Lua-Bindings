
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/Text.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/Text.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Input/InputConstants.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/Scene/Animatable.h>
#include <Urho3D/UI/Font.h>
#include <Urho3D/UI/UIBatch.h>
#include <Urho3D/UI/UISelectable.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Text(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Text::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Text::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Text>((Urho3D::Text*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Text>( "Text"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::UISelectable,Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Text>(context);
        });

// Members

    /*Apply attribute changes that can not be applied immediately.*//*() override*/
    type["ApplyAttributes"] = static_cast<void (Urho3D::Text::*)()>(&Urho3D::Text::ApplyAttributes) ;
    /*Return  UI rendering batches.*//*(PODVector< UIBatch > &batches, PODVector< float > &vertexData, const IntRect &currentScissor) override*/
    type["GetBatches"] = static_cast<void (Urho3D::Text::*)(PODVector<  UIBatch > &, PODVector< float > &, const  IntRect &)>(&Urho3D::Text::GetBatches) ;
    /*React to resize.*//*(const IntVector2 &newSize, const IntVector2 &delta) override*/
    type["OnResize"] = static_cast<void (Urho3D::Text::*)(const  IntVector2 &, const  IntVector2 &)>(&Urho3D::Text::OnResize) ;
    /*React to indent change.*//*() override*/
    type["OnIndentSet"] = static_cast<void (Urho3D::Text::*)()>(&Urho3D::Text::OnIndentSet) ;
    /*Set font size only while retaining the existing font. Return true if successful. BIND_AS_PROPERTY*//*(float size)*/
    type["SetFontSize"] = static_cast<bool (Urho3D::Text::*)(float)>(&Urho3D::Text::SetFontSize) ;
    /*Set text.  Text is assumed to be either ASCII or UTF8-encoded. BIND_AS_PROPERTY*//*(const String &text)*/
    type["SetText"] = static_cast<void (Urho3D::Text::*)(const  String &)>(&Urho3D::Text::SetText) ;
    /*Set row alignment. BIND_AS_PROPERTY*//*(HorizontalAlignment align)*/
    type["SetTextAlignment"] = static_cast<void (Urho3D::Text::*)(HorizontalAlignment)>(&Urho3D::Text::SetTextAlignment) ;
    /*Set row spacing, 1.0 for original font spacing. BIND_AS_PROPERTY*//*(float spacing)*/
    type["SetRowSpacing"] = static_cast<void (Urho3D::Text::*)(float)>(&Urho3D::Text::SetRowSpacing) ;
    /*Set wordwrap. In wordwrap mode the text element will respect its current width. Otherwise it resizes itself freely. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetWordwrap"] = static_cast<void (Urho3D::Text::*)(bool)>(&Urho3D::Text::SetWordwrap) ;
    /*The text will be automatically translated. The text value used as string identifier. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetAutoLocalizable"] = static_cast<void (Urho3D::Text::*)(bool)>(&Urho3D::Text::SetAutoLocalizable) ;
    /*Clear selection.*//*()*/
    type["ClearSelection"] = static_cast<void (Urho3D::Text::*)()>(&Urho3D::Text::ClearSelection) ;
    /*Set text effect. BIND_AS_PROPERTY*//*(TextEffect textEffect)*/
    type["SetTextEffect"] = static_cast<void (Urho3D::Text::*)(TextEffect)>(&Urho3D::Text::SetTextEffect) ;
    /*Set shadow offset. BIND_AS_PROPERTY*//*(const IntVector2 &offset)*/
    type["SetEffectShadowOffset"] = static_cast<void (Urho3D::Text::*)(const  IntVector2 &)>(&Urho3D::Text::SetEffectShadowOffset) ;
    /*Set stroke thickness. BIND_AS_PROPERTY*//*(int thickness)*/
    type["SetEffectStrokeThickness"] = static_cast<void (Urho3D::Text::*)(int)>(&Urho3D::Text::SetEffectStrokeThickness) ;
    /*Set stroke rounding. Corners of the font will be rounded off in the stroke so the stroke won't have corners. BIND_AS_PROPERTY*//*(bool roundStroke)*/
    type["SetEffectRoundStroke"] = static_cast<void (Urho3D::Text::*)(bool)>(&Urho3D::Text::SetEffectRoundStroke) ;
    /*Set effect color. BIND_AS_PROPERTY*//*(const Color &effectColor)*/
    type["SetEffectColor"] = static_cast<void (Urho3D::Text::*)(const  Color &)>(&Urho3D::Text::SetEffectColor) ;
    /*Return font. BIND_AS_PROPERTY*//*() const*/
    type["GetFont"] = [](Urho3D::Text& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFont());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return font size. BIND_AS_PROPERTY*//*() const*/
    type["GetFontSize"] = static_cast<float (Urho3D::Text::*)() const>(&Urho3D::Text::GetFontSize) ;
    /*Return text. BIND_AS_PROPERTY*//*() const*/
    type["GetText"] = static_cast<const String& (Urho3D::Text::*)() const>(&Urho3D::Text::GetText) ;
    /*Return row alignment. BIND_AS_PROPERTY*//*() const*/
    type["GetTextAlignment"] = static_cast<HorizontalAlignment (Urho3D::Text::*)() const>(&Urho3D::Text::GetTextAlignment) ;
    /*Return row spacing. BIND_AS_PROPERTY*//*() const*/
    type["GetRowSpacing"] = static_cast<float (Urho3D::Text::*)() const>(&Urho3D::Text::GetRowSpacing) ;
    /*Return wordwrap mode. BIND_AS_PROPERTY*//*() const*/
    type["GetWordwrap"] = static_cast<bool (Urho3D::Text::*)() const>(&Urho3D::Text::GetWordwrap) ;
    /*Return auto localizable mode. BIND_AS_PROPERTY*//*() const*/
    type["GetAutoLocalizable"] = static_cast<bool (Urho3D::Text::*)() const>(&Urho3D::Text::GetAutoLocalizable) ;
    /*Return selection start. BIND_AS_PROPERTY*//*() const*/
    type["GetSelectionStart"] = static_cast<unsigned (Urho3D::Text::*)() const>(&Urho3D::Text::GetSelectionStart) ;
    /*Return selection length. BIND_AS_PROPERTY*//*() const*/
    type["GetSelectionLength"] = static_cast<unsigned (Urho3D::Text::*)() const>(&Urho3D::Text::GetSelectionLength) ;
    /*Return text effect. BIND_AS_PROPERTY*//*() const*/
    type["GetTextEffect"] = static_cast<TextEffect (Urho3D::Text::*)() const>(&Urho3D::Text::GetTextEffect) ;
    /*Return effect shadow offset. BIND_AS_PROPERTY*//*() const*/
    type["GetEffectShadowOffset"] = static_cast<const IntVector2& (Urho3D::Text::*)() const>(&Urho3D::Text::GetEffectShadowOffset) ;
    /*Return effect stroke thickness. BIND_AS_PROPERTY*//*() const*/
    type["GetEffectStrokeThickness"] = static_cast<int (Urho3D::Text::*)() const>(&Urho3D::Text::GetEffectStrokeThickness) ;
    /*Return effect round stroke. BIND_AS_PROPERTY*//*() const*/
    type["GetEffectRoundStroke"] = static_cast<bool (Urho3D::Text::*)() const>(&Urho3D::Text::GetEffectRoundStroke) ;
    /*Return effect color. BIND_AS_PROPERTY*//*() const*/
    type["GetEffectColor"] = static_cast<const Color& (Urho3D::Text::*)() const>(&Urho3D::Text::GetEffectColor) ;
    /*Return row height. BIND_AS_PROPERTY*//*() const*/
    type["GetRowHeight"] = static_cast<float (Urho3D::Text::*)() const>(&Urho3D::Text::GetRowHeight) ;
    /*Return number of rows. BIND_AS_PROPERTY*//*() const*/
    type["GetNumRows"] = static_cast<unsigned (Urho3D::Text::*)() const>(&Urho3D::Text::GetNumRows) ;
    /*Return number of characters. BIND_AS_PROPERTY*//*() const*/
    type["GetNumChars"] = static_cast<unsigned (Urho3D::Text::*)() const>(&Urho3D::Text::GetNumChars) ;
    /*Return width of row by index. BIND_AS_ALIAS_get_rowWidths*//*(unsigned index) const*/
    type["GetRowWidth"] = static_cast<float (Urho3D::Text::*)(unsigned) const>(&Urho3D::Text::GetRowWidth) ;
    /*Return position of character by index relative to the text element origin. BIND_AS_ALIAS_get_charPositions*//*(unsigned index)*/
    type["GetCharPosition"] = static_cast<Vector2 (Urho3D::Text::*)(unsigned)>(&Urho3D::Text::GetCharPosition) ;
    /*Return size of character by index. BIND_AS_ALIAS_get_charSizes*//*(unsigned index)*/
    type["GetCharSize"] = static_cast<Vector2 (Urho3D::Text::*)(unsigned)>(&Urho3D::Text::GetCharSize) ;
    /*Set text effect Z bias. Zero by default, adjusted only in 3D mode.*//*(float bias)*/
    type["SetEffectDepthBias"] = static_cast<void (Urho3D::Text::*)(float)>(&Urho3D::Text::SetEffectDepthBias) ;
    /*Return effect Z bias.*//*() const*/
    type["GetEffectDepthBias"] = static_cast<float (Urho3D::Text::*)() const>(&Urho3D::Text::GetEffectDepthBias) ;
    /*Set font attribute.*//*(const ResourceRef &value)*/
    type["SetFontAttr"] = static_cast<void (Urho3D::Text::*)(const  ResourceRef &)>(&Urho3D::Text::SetFontAttr) ;
    /*Return font attribute.*//*() const*/
    type["GetFontAttr"] = static_cast<ResourceRef (Urho3D::Text::*)() const>(&Urho3D::Text::GetFontAttr) ;
    /*Set text attribute.*//*(const String &value)*/
    type["SetTextAttr"] = static_cast<void (Urho3D::Text::*)(const  String &)>(&Urho3D::Text::SetTextAttr) ;
    /*Return text attribute.*//*() const*/
    type["GetTextAttr"] = static_cast<String (Urho3D::Text::*)() const>(&Urho3D::Text::GetTextAttr) ;
    type["SetFont"] = sol::overload(
        static_cast<bool (Urho3D::Text::*)(const  String &, float)>(&Urho3D::Text::SetFont) ,
        [](Urho3D::Text& self, const  String & fontName){ return self.SetFont(fontName); },
        static_cast<bool (Urho3D::Text::*)(Font *, float)>(&Urho3D::Text::SetFont) ,
        [](Urho3D::Text& self, Font * font){ return self.SetFont(font); } );
    type["SetSelection"] = sol::overload(
        static_cast<void (Urho3D::Text::*)(unsigned, unsigned)>(&Urho3D::Text::SetSelection) ,
        [](Urho3D::Text& self, unsigned start){ self.SetSelection(start); } );
    type["autoLocalizable"] = sol::property(static_cast<bool (Urho3D::Text::*)() const>(&Urho3D::Text::GetAutoLocalizable) 
        , static_cast<void (Urho3D::Text::*)(bool)>(&Urho3D::Text::SetAutoLocalizable) );
    type["charPosition"] = sol::property(static_cast<Vector2 (Urho3D::Text::*)(unsigned)>(&Urho3D::Text::GetCharPosition) );
    type["charSize"] = sol::property(static_cast<Vector2 (Urho3D::Text::*)(unsigned)>(&Urho3D::Text::GetCharSize) );
    type["effectColor"] = sol::property(static_cast<const Color& (Urho3D::Text::*)() const>(&Urho3D::Text::GetEffectColor) 
        , static_cast<void (Urho3D::Text::*)(const  Color &)>(&Urho3D::Text::SetEffectColor) );
    type["effectRoundStroke"] = sol::property(static_cast<bool (Urho3D::Text::*)() const>(&Urho3D::Text::GetEffectRoundStroke) 
        , static_cast<void (Urho3D::Text::*)(bool)>(&Urho3D::Text::SetEffectRoundStroke) );
    type["effectShadowOffset"] = sol::property(static_cast<const IntVector2& (Urho3D::Text::*)() const>(&Urho3D::Text::GetEffectShadowOffset) 
        , static_cast<void (Urho3D::Text::*)(const  IntVector2 &)>(&Urho3D::Text::SetEffectShadowOffset) );
    type["effectStrokeThickness"] = sol::property(static_cast<int (Urho3D::Text::*)() const>(&Urho3D::Text::GetEffectStrokeThickness) 
        , static_cast<void (Urho3D::Text::*)(int)>(&Urho3D::Text::SetEffectStrokeThickness) );
    type["font"] = sol::property([](Urho3D::Text& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetFont());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["fontSize"] = sol::property(static_cast<float (Urho3D::Text::*)() const>(&Urho3D::Text::GetFontSize) 
        , static_cast<bool (Urho3D::Text::*)(float)>(&Urho3D::Text::SetFontSize) );
    type["numChars"] = sol::property(static_cast<unsigned (Urho3D::Text::*)() const>(&Urho3D::Text::GetNumChars) );
    type["numRows"] = sol::property(static_cast<unsigned (Urho3D::Text::*)() const>(&Urho3D::Text::GetNumRows) );
    type["rowHeight"] = sol::property(static_cast<float (Urho3D::Text::*)() const>(&Urho3D::Text::GetRowHeight) );
    type["rowSpacing"] = sol::property(static_cast<float (Urho3D::Text::*)() const>(&Urho3D::Text::GetRowSpacing) 
        , static_cast<void (Urho3D::Text::*)(float)>(&Urho3D::Text::SetRowSpacing) );
    type["rowWidth"] = sol::property(static_cast<float (Urho3D::Text::*)(unsigned) const>(&Urho3D::Text::GetRowWidth) );
    type["selectionLength"] = sol::property(static_cast<unsigned (Urho3D::Text::*)() const>(&Urho3D::Text::GetSelectionLength) );
    type["selectionStart"] = sol::property(static_cast<unsigned (Urho3D::Text::*)() const>(&Urho3D::Text::GetSelectionStart) );
    type["text"] = sol::property(static_cast<const String& (Urho3D::Text::*)() const>(&Urho3D::Text::GetText) 
        , static_cast<void (Urho3D::Text::*)(const  String &)>(&Urho3D::Text::SetText) );
    type["textAlignment"] = sol::property(static_cast<HorizontalAlignment (Urho3D::Text::*)() const>(&Urho3D::Text::GetTextAlignment) 
        , static_cast<void (Urho3D::Text::*)(HorizontalAlignment)>(&Urho3D::Text::SetTextAlignment) );
    type["textEffect"] = sol::property(static_cast<TextEffect (Urho3D::Text::*)() const>(&Urho3D::Text::GetTextEffect) 
        , static_cast<void (Urho3D::Text::*)(TextEffect)>(&Urho3D::Text::SetTextEffect) );
    type["wordwrap"] = sol::property(static_cast<bool (Urho3D::Text::*)() const>(&Urho3D::Text::GetWordwrap) 
        , static_cast<void (Urho3D::Text::*)(bool)>(&Urho3D::Text::SetWordwrap) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/Text.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/Text.h>
#include <Urho3D/Math/Vector2.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_CharLocation(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::CharLocation>( "CharLocation"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    type["position_"] = &Urho3D::CharLocation::position_;
    type["size_"] = &Urho3D::CharLocation::size_;

}

