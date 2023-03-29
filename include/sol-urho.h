#pragma once

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol/sol.hpp>
#include <sol/unique_usertype_traits.hpp>

#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>

#include <Urho3D/Math/StringHash.h>
#include <Urho3D/Core/Object.h> // For casters

// These need to be included before the binding code or it can cause lots of strange errors.

namespace Urho3D {

template<class T>
struct WrapReturnSharedPtr
{
};

template<class R, class... Args>
struct WrapReturnSharedPtr<R*(Args...)>
{
    using type = std::function<R*(Args...)>;

    template <
        std::enable_if_t<std::is_base_of<Urho3D::RefCounted,R>::value, bool> = true
        >
    static type Wrap(type f) {
        return [f](Args... args) {
            return SharedPtr(f(args...));
        };
    }

    template <
        std::enable_if_t<!std::is_base_of<Urho3D::RefCounted,R>::value, bool> = false
        >
    static type Wrap(type f) {
        return f;
    }

};

template<class T>
Vector<SharedPtr<T>> WrapSharedPointer(const Vector<T*>& in)
{
    Vector<SharedPtr<T>> out{in.Size()};
    auto idx = 0;
    for (auto& i : in)
        out[idx++] = SharedPtr(i);
    return out;
}

namespace Wrapped
{
struct Bool { using type=bool; Bool()=default; Bool(type v): value{v} {} type value{0}; };

struct F32 { using type=float; F32()=default; F32(type v): value{v} {} type value{0}; };
struct F64 { using type=double; F64()=default; F64(type v): value{v} {} type value{0}; };

struct I8 { using type=int8_t; I8()=default; I8(type v): value{v} {} type value{0}; };
struct I16 { using type=int16_t; I16()=default; I16(type v): value{v} {} type value{0}; };
struct I32 { using type=int32_t; I32()=default; I32(type v): value{v} {} type value{0}; };
struct I64 { using type=int64_t; I64()=default; I64(type v): value{v} {} type value{0}; };

struct U8 { using type=uint8_t; U8()=default; U8(type v): value{v} {} type value{0}; };
struct U16 { using type=uint16_t; U16()=default; U16(type v): value{v} {} type value{0}; };
struct U32 { using type=uint32_t; U32()=default; U32(type v): value{v} {} type value{0}; };
struct U64 { using type=uint64_t; U64()=default; U64(type v): value{v} {} type value{0}; };

struct Str { using type=String; Str()=default; Str(type v): value{v} {} type value{0}; };

inline void bindWrappers_Urho3D_Wrapped(sol::state_view& lua)
{
    using namespace Wrapped;
    lua.new_usertype<F32>( "F32"
                           ,sol::call_constructor,sol::constructors<F32(),F32(F32::type)>()
                           ,"value",&F32::value);
}
}

}

namespace sol {
        template <typename T>
        struct unique_usertype_traits< ::Urho3D::SharedPtr<T>> {
                typedef T type;
                typedef Urho3D::SharedPtr<T> actual_type;
                static const bool value = true;

                static bool is_null(const actual_type& ptr) {
                        return ptr == nullptr;
                }

                static type* get (const actual_type& ptr) {
                        return ptr.Get();
                }
        };

        template <typename T>
        struct unique_usertype_traits< ::Urho3D::WeakPtr<T>> {
                typedef T type;
                typedef Urho3D::WeakPtr<T> actual_type;
                static const bool value = true;

                static bool is_null(const actual_type& ptr) {
                        return ptr.Expired();
                }

                static type* get (const actual_type& ptr) {
                        return ptr.Get();
                }
        };

//        template <typename T>
//        struct unique_usertype_traits< ::Urho3D::UniquePtr<T>> {
//                typedef T type;
//                typedef Urho3D::UniquePtr<T> actual_type;
//                static const bool value = true;

//                static bool is_null(const actual_type& ptr) {
//                        return ptr == nullptr;
//                }

//                static type* get (const actual_type& ptr) {
//                        return ptr.Get();
//                }
//        };
}


namespace sol {
inline void _()
{
//    static_assert(meta::meta_detail::is_adl_sol_lua_check_access_v<Urho3D::Node>);
//    static_assert(meta::meta_detail::is_adl_sol_lua_check_access_v<Urho3D::Node&>);
}

/// Convert Strings to and from LUA
template <>
struct lua_type_of<Urho3D::String> : std::integral_constant<type, type::string> { };

namespace stack {

template <>
struct unqualified_pusher<Urho3D::String> {
    static int push(lua_State* L, const Urho3D::String& str) {
        return stack::push(L, str.CString(), str.Length());
    }

    static int push(lua_State* L, const Urho3D::String& str, std::size_t sz) {
        return stack::push(L, str.CString(), sz);
    }
};

template <>
struct unqualified_getter<Urho3D::String> {
    static Urho3D::String get(lua_State* L, int index, record& tracking) {
        tracking.use(1);
        size_t sz;
        const char* str = lua_tolstring(L, index, &sz);
        return Urho3D::String(str, sz);
    }
};

}

/// Convert string hash to and from lua. Will try to convert from a Lua number or string, and always to a number. This way we don't need to wrap strings in StringHash().
template <>
struct lua_type_of<Urho3D::StringHash> : std::integral_constant<type, type::poly> { };


namespace stack {

template <>
struct unqualified_checker<Urho3D::StringHash,type::poly> {

    template <typename Handler>
    static bool check(lua_State* L_, int index, Handler&& handler, record& tracking) {
        {
            record temp_tracking = tracking;
            if (stack::check<const char*>(L_, index, &no_panic, temp_tracking)) {
                tracking = temp_tracking;
                return true;
            }

            if (stack::check<unsigned int>(L_, index, &no_panic, temp_tracking)) {
                tracking = temp_tracking;
                return true;
            }
        }
        tracking.use(1);
        handler(L_, index, type::poly, type_of(L_, index), "value cannot be coerced into a stringhash");
        return false;
    }
};

template <>
struct unqualified_pusher<Urho3D::StringHash> {
    static int push(lua_State* L, const Urho3D::StringHash& str) {
        return stack::push(L, str.Value());
    }
};

template <>
struct unqualified_getter<Urho3D::StringHash> {
    static Urho3D::StringHash get(lua_State* L, int index, record& tracking) {
        tracking.use(1);
        size_t sz;
        if (lua_isnumber(L,index))
            return Urho3D::StringHash(static_cast<unsigned int>(lua_tointeger(L,index)));
        const char* str = lua_tolstring(L, index, &sz);
        return Urho3D::StringHash(str);
    }
};
}
}
