# Set CMake minimum version and CMake policy required by UrhoCommon module
cmake_minimum_required (VERSION 3.10.2)
if (COMMAND cmake_policy)
    # Libraries linked via full path no longer produce linker search paths
    cmake_policy (SET CMP0003 NEW)
    # INTERFACE_LINK_LIBRARIES defines the link interface
    cmake_policy (SET CMP0022 NEW)
    # Disallow use of the LOCATION target property - so we set to OLD as we still need it
    cmake_policy (SET CMP0026 OLD)
    # MACOSX_RPATH is enabled by default
    cmake_policy (SET CMP0042 NEW)
    # Honor the visibility properties for SHARED target types only
    cmake_policy (SET CMP0063 OLD)
endif ()

# Set project name
project (Sol3-Test)

# Set CMake modules search path
set (CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/CMake/Modules)

# Include UrhoCommon.cmake module after setting project name
include (UrhoCommon)

# Define target name
set (TARGET_NAME test-sol3)

# Turn on C++14 (Learned this from UrhoX) 
set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS ON)

include_directories(
#    Urhox
#    Urhox/ThirdParty
    Archival
    ~/Projects/u3d/Build/include/Urho3D/ThirdParty/LuaJIT/
)

# Turn on C++14
# SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++14 -DURHO3D_FMT" )

# Add UrhoX
# Your-external "UrhoX", add GLOBAL if the imported library is located in directories above the current.
#add_library( UrhoX STATIC IMPORTED )
# You can define two import-locations: one for debug and one for release.
#set_target_properties( UrhoX PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/lib/libUrhox.a )


include_directories(include)

# Define source files
define_source_files (GLOB_CPP_PATTERNS *.cpp *.inl include/*.h include/sol/*.hpp
    virtualGizmo3D/*.cpp *.h virtualGizmo3D/*.h
    implot/*.cpp implot/*.h
    Archival/*cpp Archival/*.h
    Archival/*/*.h Archival/*/*.cpp
    generated/*cpp generated/*.h
    generated/*/*.h generated/*/*.cpp
    generated/*/*/*.h generated/*/*/*.cpp)


# disable grouping (maybe) NEL
#set_property(GLOBAL PROPERTY USE_FOLDERS OFF)
source_group(TREE ${CMAKE_SOURCE_DIR} FILES ${SOURCE_FILES})

# Setup target with resource copying
setup_main_executable ()

message ("CMAKE CXX STANDARD = ${CMAKE_CXX_STANDARD}")

#TARGET_LINK_LIBRARIES(${TARGET_NAME} UrhoX)

# Setup test cases
if (URHO3D_ANGELSCRIPT)
    setup_test (NAME ExternalLibAS OPTIONS Scripts/12_PhysicsStressTest.as -w)
endif ()
if (URHO3D_LUA)
    setup_test (NAME ExternalLibLua OPTIONS LuaScripts/12_PhysicsStressTest.lua -w)
endif ()

# Urho3D documentation
# add_subdirectory (Docs)
