
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/UI/BorderImage.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/UI/BorderImage.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/Texture.h>
#include <Urho3D/Math/Rect.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/UI/UIBatch.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_BorderImage(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::BorderImage::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::BorderImage::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::BorderImage>((Urho3D::BorderImage*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::BorderImage>( "BorderImage"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::UIElement,Urho3D::Animatable,Urho3D::Serializable,Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::BorderImage>(context);
        });

// Members

    /*Return  UI rendering batches.*//*(PODVector< UIBatch > &batches, PODVector< float > &vertexData, const IntRect &currentScissor) override*/
    type["GetBatches"] = static_cast<void (Urho3D::BorderImage::*)(PODVector<  UIBatch > &, PODVector< float > &, const  IntRect &)>(&Urho3D::BorderImage::GetBatches) ;
    /*Set texture. BIND_AS_PROPERTY*//*(Texture *texture)*/
    type["SetTexture"] = static_cast<void (Urho3D::BorderImage::*)(Texture *)>(&Urho3D::BorderImage::SetTexture) ;
    /*Set part of texture to use as the image. BIND_AS_PROPERTY*//*(const IntRect &rect)*/
    type["SetImageRect"] = static_cast<void (Urho3D::BorderImage::*)(const  IntRect &)>(&Urho3D::BorderImage::SetImageRect) ;
    /*Use whole texture as the image.*//*()*/
    type["SetFullImageRect"] = static_cast<void (Urho3D::BorderImage::*)()>(&Urho3D::BorderImage::SetFullImageRect) ;
    /*Set border dimensions on the screen. BIND_AS_PROPERTY*//*(const IntRect &rect)*/
    type["SetBorder"] = static_cast<void (Urho3D::BorderImage::*)(const  IntRect &)>(&Urho3D::BorderImage::SetBorder) ;
    /*Set border dimensions on the image. If zero (default) uses the screen dimensions, resulting in pixel-perfect borders. BIND_AS_PROPERTY*//*(const IntRect &rect)*/
    type["SetImageBorder"] = static_cast<void (Urho3D::BorderImage::*)(const  IntRect &)>(&Urho3D::BorderImage::SetImageBorder) ;
    /*Set blend mode. BIND_AS_PROPERTY*//*(BlendMode mode)*/
    type["SetBlendMode"] = static_cast<void (Urho3D::BorderImage::*)(BlendMode)>(&Urho3D::BorderImage::SetBlendMode) ;
    /*Set tiled mode. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetTiled"] = static_cast<void (Urho3D::BorderImage::*)(bool)>(&Urho3D::BorderImage::SetTiled) ;
    /*Set material for custom rendering. BIND_AS_PROPERTY*//*(Material *material)*/
    type["SetMaterial"] = static_cast<void (Urho3D::BorderImage::*)(Material *)>(&Urho3D::BorderImage::SetMaterial) ;
    /*Return texture. BIND_AS_PROPERTY*//*() const*/
    type["GetTexture"] = [](Urho3D::BorderImage& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return image rectangle. BIND_AS_PROPERTY*//*() const*/
    type["GetImageRect"] = static_cast<const IntRect& (Urho3D::BorderImage::*)() const>(&Urho3D::BorderImage::GetImageRect) ;
    /*Return border screen dimensions. BIND_AS_PROPERTY*//*() const*/
    type["GetBorder"] = static_cast<const IntRect& (Urho3D::BorderImage::*)() const>(&Urho3D::BorderImage::GetBorder) ;
    /*Return border image dimensions. Zero rect uses border screen dimensions. BIND_AS_PROPERTY*//*() const*/
    type["GetImageBorder"] = static_cast<const IntRect& (Urho3D::BorderImage::*)() const>(&Urho3D::BorderImage::GetImageBorder) ;
    /*Return offset to image rectangle used on hover. BIND_AS_PROPERTY*//*() const*/
    type["GetHoverOffset"] = static_cast<const IntVector2& (Urho3D::BorderImage::*)() const>(&Urho3D::BorderImage::GetHoverOffset) ;
    /*Return offset to image rectangle used when disabled. BIND_AS_PROPERTY*//*() const*/
    type["GetDisabledOffset"] = static_cast<const IntVector2& (Urho3D::BorderImage::*)() const>(&Urho3D::BorderImage::GetDisabledOffset) ;
    /*Return blend mode. BIND_AS_PROPERTY*//*() const*/
    type["GetBlendMode"] = static_cast<BlendMode (Urho3D::BorderImage::*)() const>(&Urho3D::BorderImage::GetBlendMode) ;
    /*Return whether is tiled. BIND_AS_PROPERTY*//*() const*/
    type["IsTiled"] = static_cast<bool (Urho3D::BorderImage::*)() const>(&Urho3D::BorderImage::IsTiled) ;
    /*Get material used for custom rendering. BIND_AS_PROPERTY*//*() const*/
    type["GetMaterial"] = [](Urho3D::BorderImage& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Set texture attribute.*//*(const ResourceRef &value)*/
    type["SetTextureAttr"] = static_cast<void (Urho3D::BorderImage::*)(const  ResourceRef &)>(&Urho3D::BorderImage::SetTextureAttr) ;
    /*Return texture attribute.*//*() const*/
    type["GetTextureAttr"] = static_cast<ResourceRef (Urho3D::BorderImage::*)() const>(&Urho3D::BorderImage::GetTextureAttr) ;
    /*Set material attribute.*//*(const ResourceRef &value)*/
    type["SetMaterialAttr"] = static_cast<void (Urho3D::BorderImage::*)(const  ResourceRef &)>(&Urho3D::BorderImage::SetMaterialAttr) ;
    /*Get material attribute.*//*() const*/
    type["GetMaterialAttr"] = static_cast<ResourceRef (Urho3D::BorderImage::*)() const>(&Urho3D::BorderImage::GetMaterialAttr) ;
    type["SetHoverOffset"] = sol::overload(
        static_cast<void (Urho3D::BorderImage::*)(const  IntVector2 &)>(&Urho3D::BorderImage::SetHoverOffset) ,
        static_cast<void (Urho3D::BorderImage::*)(int, int)>(&Urho3D::BorderImage::SetHoverOffset)  );
    type["SetDisabledOffset"] = sol::overload(
        static_cast<void (Urho3D::BorderImage::*)(const  IntVector2 &)>(&Urho3D::BorderImage::SetDisabledOffset) ,
        static_cast<void (Urho3D::BorderImage::*)(int, int)>(&Urho3D::BorderImage::SetDisabledOffset)  );
    type["blendMode"] = sol::property(static_cast<BlendMode (Urho3D::BorderImage::*)() const>(&Urho3D::BorderImage::GetBlendMode) 
        , static_cast<void (Urho3D::BorderImage::*)(BlendMode)>(&Urho3D::BorderImage::SetBlendMode) );
    type["border"] = sol::property(static_cast<const IntRect& (Urho3D::BorderImage::*)() const>(&Urho3D::BorderImage::GetBorder) 
        , static_cast<void (Urho3D::BorderImage::*)(const  IntRect &)>(&Urho3D::BorderImage::SetBorder) );
    type["disabledOffset"] = sol::property(static_cast<const IntVector2& (Urho3D::BorderImage::*)() const>(&Urho3D::BorderImage::GetDisabledOffset) 
        , static_cast<void (Urho3D::BorderImage::*)(const  IntVector2 &)>(&Urho3D::BorderImage::SetDisabledOffset) );
    type["hoverOffset"] = sol::property(static_cast<const IntVector2& (Urho3D::BorderImage::*)() const>(&Urho3D::BorderImage::GetHoverOffset) 
        , static_cast<void (Urho3D::BorderImage::*)(const  IntVector2 &)>(&Urho3D::BorderImage::SetHoverOffset) );
    type["imageBorder"] = sol::property(static_cast<const IntRect& (Urho3D::BorderImage::*)() const>(&Urho3D::BorderImage::GetImageBorder) 
        , static_cast<void (Urho3D::BorderImage::*)(const  IntRect &)>(&Urho3D::BorderImage::SetImageBorder) );
    type["imageRect"] = sol::property(static_cast<const IntRect& (Urho3D::BorderImage::*)() const>(&Urho3D::BorderImage::GetImageRect) 
        , static_cast<void (Urho3D::BorderImage::*)(const  IntRect &)>(&Urho3D::BorderImage::SetImageRect) );
    type["material"] = sol::property([](Urho3D::BorderImage& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetMaterial());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::BorderImage::*)(Material *)>(&Urho3D::BorderImage::SetMaterial) );
    type["texture"] = sol::property([](Urho3D::BorderImage& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTexture());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::BorderImage::*)(Texture *)>(&Urho3D::BorderImage::SetTexture) );
    type["tiled"] = sol::property(static_cast<bool (Urho3D::BorderImage::*)() const>(&Urho3D::BorderImage::IsTiled) 
        , static_cast<void (Urho3D::BorderImage::*)(bool)>(&Urho3D::BorderImage::SetTiled) );

}

