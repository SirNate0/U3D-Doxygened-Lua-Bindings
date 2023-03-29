
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Graphics/Geometry.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Graphics/Geometry.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashBase.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Graphics/Graphics.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Graphics/IndexBuffer.h>
#include <Urho3D/Graphics/VertexBuffer.h>
#include <Urho3D/Math/Ray.h>
#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Geometry(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Geometry::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Geometry::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Geometry>((Urho3D::Geometry*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Geometry>( "Geometry"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Geometry>(context);
        });

// Members

    /*Set number of vertex buffers. BIND_AS_PROPERTY*//*(unsigned num)*/
    type["SetNumVertexBuffers"] = static_cast<bool (Urho3D::Geometry::*)(unsigned)>(&Urho3D::Geometry::SetNumVertexBuffers) ;
    /*Set a vertex buffer by index.*//*(unsigned index, VertexBuffer *buffer)*/
    type["SetVertexBuffer"] = static_cast<bool (Urho3D::Geometry::*)(unsigned, VertexBuffer *)>(&Urho3D::Geometry::SetVertexBuffer) ;
    /*Set the index buffer. BIND_AS_PROPERTY*//*(IndexBuffer *buffer)*/
    type["SetIndexBuffer"] = static_cast<void (Urho3D::Geometry::*)(IndexBuffer *)>(&Urho3D::Geometry::SetIndexBuffer) ;
    /*Set the LOD distance. BIND_AS_PROPERTY*//*(float distance)*/
    type["SetLodDistance"] = static_cast<void (Urho3D::Geometry::*)(float)>(&Urho3D::Geometry::SetLodDistance) ;
    /*Override raw index data to be returned for CPU-side operations.*//*(const SharedArrayPtr< unsigned char > &data, unsigned indexSize)*/
    type["SetRawIndexData"] = static_cast<void (Urho3D::Geometry::*)(const  SharedArrayPtr< unsigned char > &, unsigned)>(&Urho3D::Geometry::SetRawIndexData) ;
    /*Draw.*//*(Graphics *graphics)*/
    type["Draw"] = static_cast<void (Urho3D::Geometry::*)(Graphics *)>(&Urho3D::Geometry::Draw) ;
    /*Return all vertex buffers.*//*() const*/
    type["GetVertexBuffers"] = static_cast<const Vector<SharedPtr<VertexBuffer>>& (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::GetVertexBuffers) ;
    /*Return number of vertex buffers. BIND_AS_PROPERTY*//*() const*/
    type["GetNumVertexBuffers"] = static_cast<unsigned (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::GetNumVertexBuffers) ;
    /*Return vertex buffer by index. BIND_AS_ALIAS_get_vertexBuffers*//*(unsigned index) const*/
    type["GetVertexBuffer"] = [](Urho3D::Geometry& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetVertexBuffer(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return the index buffer. BIND_AS_PROPERTY*//*() const*/
    type["GetIndexBuffer"] = [](Urho3D::Geometry& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetIndexBuffer());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    /*Return primitive type. BIND_AS_PROPERTY*//*() const*/
    type["GetPrimitiveType"] = static_cast<PrimitiveType (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::GetPrimitiveType) ;
    /*Return start index. BIND_AS_PROPERTY*//*() const*/
    type["GetIndexStart"] = static_cast<unsigned (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::GetIndexStart) ;
    /*Return number of indices. BIND_AS_PROPERTY*//*() const*/
    type["GetIndexCount"] = static_cast<unsigned (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::GetIndexCount) ;
    /*Return first used vertex. BIND_AS_PROPERTY*//*() const*/
    type["GetVertexStart"] = static_cast<unsigned (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::GetVertexStart) ;
    /*Return number of used vertices. BIND_AS_PROPERTY*//*() const*/
    type["GetVertexCount"] = static_cast<unsigned (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::GetVertexCount) ;
    /*Return LOD distance. BIND_AS_PROPERTY*//*() const*/
    type["GetLodDistance"] = static_cast<float (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::GetLodDistance) ;
    /*Return buffers' combined hash value for state sorting.*//*() const*/
    type["GetBufferHash"] = static_cast<unsigned short (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::GetBufferHash) ;
#if 0 // INVALID: NeedsWrap(unsigned &)NeedsWrap(unsigned &)
    /*Return raw vertex and index data for CPU operations, or null pointers if not available. Will return data of the first vertex buffer if override data not set.*//*(const unsigned char *&vertexData, unsigned &vertexSize, const unsigned char *&indexData, unsigned &indexSize, const PODVector< VertexElement > *&elements) const*/
    type["GetRawData"] = static_cast<void (Urho3D::Geometry::*)(const unsigned char *&, unsigned &, const unsigned char *&, unsigned &, const  PODVector<  VertexElement > *&) const>(&Urho3D::Geometry::GetRawData) ;
#endif
        
#if 0 // INVALID: NeedsWrap(unsigned &)NeedsWrap(unsigned &)
    /*Return raw vertex and index data for CPU operations, or null pointers if not available. Will return data of the first vertex buffer if override data not set.*//*(SharedArrayPtr< unsigned char > &vertexData, unsigned &vertexSize, SharedArrayPtr< unsigned char > &indexData, unsigned &indexSize, const PODVector< VertexElement > *&elements) const*/
    type["GetRawDataShared"] = static_cast<void (Urho3D::Geometry::*)(SharedArrayPtr< unsigned char > &, unsigned &, SharedArrayPtr< unsigned char > &, unsigned &, const  PODVector<  VertexElement > *&) const>(&Urho3D::Geometry::GetRawDataShared) ;
#endif
        
    /*Return whether or not the ray is inside geometry.*//*(const Ray &ray) const*/
    type["IsInside"] = static_cast<bool (Urho3D::Geometry::*)(const  Ray &) const>(&Urho3D::Geometry::IsInside) ;
    /*Return whether has empty draw range. BIND_AS_PROPERTY*//*() const*/
    type["IsEmpty"] = static_cast<bool (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::IsEmpty) ;
    type["SetDrawRange"] = sol::overload(
        static_cast<bool (Urho3D::Geometry::*)(PrimitiveType, unsigned, unsigned, bool)>(&Urho3D::Geometry::SetDrawRange) ,
        [](Urho3D::Geometry& self, PrimitiveType type, unsigned indexStart, unsigned indexCount){ return self.SetDrawRange(type, indexStart, indexCount); },
        static_cast<bool (Urho3D::Geometry::*)(PrimitiveType, unsigned, unsigned, unsigned, unsigned, bool)>(&Urho3D::Geometry::SetDrawRange) ,
        [](Urho3D::Geometry& self, PrimitiveType type, unsigned indexStart, unsigned indexCount, unsigned vertexStart, unsigned vertexCount){ return self.SetDrawRange(type, indexStart, indexCount, vertexStart, vertexCount); } );
    type["SetRawVertexData"] = sol::overload(
        static_cast<void (Urho3D::Geometry::*)(const  SharedArrayPtr< unsigned char > &, const  PODVector<  VertexElement > &)>(&Urho3D::Geometry::SetRawVertexData) ,
        static_cast<void (Urho3D::Geometry::*)(const  SharedArrayPtr< unsigned char > &, unsigned)>(&Urho3D::Geometry::SetRawVertexData)  );
    type["GetHitDistance"] = sol::overload(
        static_cast<float (Urho3D::Geometry::*)(const  Ray &, Vector3 *, Vector2 *) const>(&Urho3D::Geometry::GetHitDistance) ,
        [](Urho3D::Geometry& self, const  Ray & ray, Vector3 * outNormal){ return self.GetHitDistance(ray, outNormal); },
        [](Urho3D::Geometry& self, const  Ray & ray){ return self.GetHitDistance(ray); } );
    type["empty"] = sol::property(static_cast<bool (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::IsEmpty) );
    type["indexBuffer"] = sol::property([](Urho3D::Geometry& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetIndexBuffer());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        }
        , static_cast<void (Urho3D::Geometry::*)(IndexBuffer *)>(&Urho3D::Geometry::SetIndexBuffer) );
    type["indexCount"] = sol::property(static_cast<unsigned (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::GetIndexCount) );
    type["indexStart"] = sol::property(static_cast<unsigned (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::GetIndexStart) );
    type["lodDistance"] = sol::property(static_cast<float (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::GetLodDistance) 
        , static_cast<void (Urho3D::Geometry::*)(float)>(&Urho3D::Geometry::SetLodDistance) );
    type["numVertexBuffers"] = sol::property(static_cast<unsigned (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::GetNumVertexBuffers) 
        , static_cast<bool (Urho3D::Geometry::*)(unsigned)>(&Urho3D::Geometry::SetNumVertexBuffers) );
    type["primitiveType"] = sol::property(static_cast<PrimitiveType (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::GetPrimitiveType) );
    type["vertexBuffer"] = sol::property([](Urho3D::Geometry& self, unsigned index, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetVertexBuffer(index));
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["vertexCount"] = sol::property(static_cast<unsigned (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::GetVertexCount) );
    type["vertexStart"] = sol::property(static_cast<unsigned (Urho3D::Geometry::*)() const>(&Urho3D::Geometry::GetVertexStart) );

}

