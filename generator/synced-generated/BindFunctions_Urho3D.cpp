
// Generated File

#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>
#include <Urho3D/Base/Algorithm.h>
#include <Urho3D/Container/Allocator.h>
#include <Urho3D/Container/ArrayPtr.h>
#include <Urho3D/Container/Hash.h>
#include <Urho3D/Container/HashMap.h>
#include <Urho3D/Container/HashSet.h>
#include <Urho3D/Container/List.h>
#include <Urho3D/Container/Pair.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Container/Sort.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Swap.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/Core/Attribute.h>
#include <Urho3D/Core/Object.h>
#include <Urho3D/Core/ProcessUtils.h>
#include <Urho3D/Core/StringUtils.h>
#include <Urho3D/Core/Variant.h>
#include <Urho3D/Graphics/Animation.h>
#include <Urho3D/Graphics/Camera.h>
#include <Urho3D/Graphics/Drawable.h>
#include <Urho3D/Graphics/GraphicsDefs.h>
#include <Urho3D/Graphics/Light.h>
#include <Urho3D/Graphics/Material.h>
#include <Urho3D/Graphics/Skeleton.h>
#include <Urho3D/Graphics/Tangent.h>
#include <Urho3D/IK/IKConverters.h>
#include <Urho3D/IO/Compression.h>
#include <Urho3D/IO/FileSystem.h>
#include <Urho3D/Input/InputConstants.h>
#include <Urho3D/LibraryInfo.h>
#include <Urho3D/Math/Color.h>
#include <Urho3D/Math/MathDefs.h>
#include <Urho3D/Math/Matrix2.h>
#include <Urho3D/Math/Matrix3.h>
#include <Urho3D/Math/Matrix3x4.h>
#include <Urho3D/Math/Matrix4.h>
#include <Urho3D/Math/Random.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Math/Vector3.h>
#include <Urho3D/Math/Vector4.h>
#include <Urho3D/Physics/PhysicsUtils.h>
#include <Urho3D/Physics2D/PhysicsUtils2D.h>
#include <Urho3D/Resource/Decompress.h>
#include <Urho3D/Resource/Resource.h>
#include <Urho3D/Scene/LogicComponent.h>
#include <Urho3D/Scene/Serializable.h>
#include <Urho3D/Scene/SmoothedTransform.h>
#include <Urho3D/UI/UIElement.h>

void bindFunctions_Urho3D(sol::state_view& lua)
{
    
using namespace Urho3D;

// Binding code uses type["NAME"] by default. We can use a reference to not have to change it.
// If we want to put the namespace functions in another table we could also do that.
auto& type = lua;
    

#if 0 // INVALID: NoBind!
    /*Register  Audio library objects. NO_BIND*//*(Context *context)*/
    type["RegisterAudioLibrary"] = static_cast<void (*)(Context *)>(&Urho3D::RegisterAudioLibrary) ;
#endif
        
#if 0 // INVALID: if
    /*Sound playback finished. Sent through the  SoundSource's  Node.All  ParticleEmitter2D particles have been removed.
 Emitting  ParticleEmitter2D particles stopped.
 A file was drag-dropped into the application window. Includes also coordinates and  UI element if applicable.
 Drag of a  UI Element was canceled by pressing ESC.
 Drag behavior of a  UI Element has finished.
 Drag behavior of a  UI Element when the input device has moved.
 Drag behavior of a  UI Element has started.
 Hovering on an  UI element has ended.
 Hovering on an  UI element has started.
 A child element is about to be removed from an element. Sent by the  UI root element, or element-event-sender if set.
 A child element has been added to an element. Sent by the  UI root element, or element-event-sender if set.
 MessageBox acknowlegement.
 Fileselector choice.
 LineEdit or  ListView unhandled key pressed.
 Listview item double clicked.
 Listview item clicked. If this is a left-click, also ItemSelected event will be sent. If this is a right-click, only this event is sent.
 Listview selection change finished.
 Listview item deselected.
 Listview or  DropDownList item selected.
 Menu selected.
 Text editing finished (enter pressed on a  LineEdit).
 Editable text changed.
 Text entry into a  LineEdit. The text can be modified in the event data.
 UI modal changed (currently only  Window has modal flag).
 UI scrollview position changed.
 UI scrollbar value changed.
 UI progressbar value changed.
 UI slider being paged.
 UI slider value changed.
 UI checkbox toggled.
 UI button was pressed, then released.
 UI button pressed.
 UI element layout updated.
 UI element defocused.
 UI element focused.
 UI element visibility changed.
 UI element positioned.
 UI element resized.
 UI element name changed.
 Focus element changed.
 Drag and drop finish.
 Drag and drop test.
 Mouse double click on a  UI element. Parameters are same as in UIMouseDoubleClick event, but is sent by the element.
 Mouse click end on a  UI element. Parameters are same as in UIMouseClickEnd event, but is sent by the element.
 Mouse click on a  UI element. Parameters are same as in UIMouseClick event, but is sent by the element.
 Global mouse double click in the  UI. Sent by the  UI subsystem.
 Global mouse click end in the  UI. Sent by the  UI subsystem.
 Global mouse click in the  UI. Sent by the  UI subsystem.
 A network attribute update from the server has been intercepted.
 A component has been cloned.
 A node (and its children and components) has been cloned.
 A serializable's temporary state has changed.
 A component's enabled state has changed.
 A node's tag has been removed.
 A node's tag has been added.
 A node's enabled state has changed.
 A node's name has changed.
 A component is about to be removed from a node.
 A component has been created to a node.
 A child node is about to be removed from a parent node. Note that individual component removal events will not be sent.
 A child node has been added to a parent node.
 Asynchronous scene loading finished.
 Asynchronous scene loading progress.
 Variable timestep scene post-update.
 Attribute animation removed from object animation.
 Attribute animation added to object animation.
 Scene attribute animation update.
 SmoothedTransform target position changed.
 Scene drawable update finished. Custom animation (eg. IK) can be done at this point.
 Scene transform smoothing update.
 Scene subsystem update.
 Variable timestep scene update.
 Language changed.
 Resource background loading finished.
 Unknown resource type.
 Resource not found.
 Resource loading failed.
 Tracked file changed in the resource directories.
 Resource reloading failed.
 Resource reloading finished successfully.
 Resource reloading started.
 Node end contact. Sent by scene nodes participating in a collision.
 Node begin contact. Sent by scene nodes participating in a collision.
 Node update contact. Sent by scene nodes participating in a collision.
 Physics end contact. Global event sent by  PhysicsWorld2D.
 Physics begin contact. Global event sent by  PhysicsWorld2D.
 Physics update contact. Global event sent by  PhysicsWorld2D.
 Node's physics collision ended. Sent by scene nodes participating in a collision.
 Node's physics collision ongoing. Sent by scene nodes participating in a collision.
 Node's physics collision started. Sent by scene nodes participating in a collision.
 Physics collision ended. Global event sent by the  PhysicsWorld.
 Physics collision ongoing. Global event sent by the  PhysicsWorld.
 Physics collision started. Global event sent by the  PhysicsWorld.
 Physics world has been stepped.
 Physics world is about to be stepped.
 Disconnected from NAT master server.
 Connecting to NAT master server succeeded.
 Connecting to NAT master server failed.
 NAT punchtrough fails.
 NAT punchtrough succeeds.
 When LAN discovery found hosted server.
 Server refuses connection because of invalid password.
 Server refuses client connection because of the ban.
 Remote event: adds  Connection parameter to the event data.
 Scene load failed, either due to file not found or checksum error.
 Network update has been sent on the client or server.
 About to send network update on the client or server.
 Unhandled network message received.
 Client has informed to have loaded the scene.
 Client has sent identity: identity map is in the event data.
 Client connection disconnected.
 New client connection established.
 Server connection failed because its already connected or tries to connect already.
 Server connection failed.
 Server connection disconnected.
 Server connection established.
 Removal of obstacle from dynamic navigation mesh.
 Addition of obstacle to dynamic navigation mesh.
 Crowd agent's state has been changed.
 Crowd agent's internal state has become invalidated. This is a special case of CrowdAgentStateChanged event.
 Crowd agent has been repositioned, specific to a node.
 Crowd agent has been repositioned.
 Crowd agent formation specific to a node.
 Crowd agent formation.
 All mesh tiles are removed from navigation mesh.
 Mesh tile is removed from navigation mesh.
 Mesh tile is added to navigation mesh.
 Partial bounding box rebuild of navigation mesh.
 Complete rebuild of navigation mesh.
 Async system command execution finished.
 Log message event.
 Input handling ends.
 Input handling begins.
 Raw SDL input event.
 Application exit requested.
 Mouse mode changed.
 OS mouse cursor visibility changed.
 Application input focus or minimization changed.
 A file was drag-dropped into the application window.
 Pinch/rotate multi-finger touch gesture motion update.
 A recognized touch gesture was input by the user.
 A touch gesture finished recording.
 Finger moved on the screen.
 Finger released from the screen.
 Finger pressed on the screen.
 Joystick POV hat moved.
 Joystick axis moved.
 Joystick button released.
 Joystick button pressed.
 Joystick disconnected.
 Joystick connected.
 Text editing event.
 Text input event.
 Key released.
 Key pressed.
 Mouse wheel moved.
 Mouse moved.
 Mouse button released.
 Mouse button pressed.
 Graphics context has been recreated after being lost. GPU objects in the "data lost" state can be restored now.
 Graphics context has been lost. Some or all (depending on the API) GPU objects have lost their contents.
 A render path event has occurred.
 Render of all views is finished for the frame.
 Render of a view ended. Its screen buffers are still accessible if needed.
 A view has set global shader parameters for a new combination of vertex/pixel shaders. Custom global parameters can now be set.
 A view has allocated its screen buffers for rendering. They can be accessed now with  View::FindNamedTexture().
 Render of a view started.
 Update of a view ended.
 Update of a view started.
 Frame rendering ended.
 Frame rendering started.
 Request for queuing rendersurfaces either in manual or always-update mode.
 Window position changed.
 New screen mode set.
 Terrain geometry created.
 Particle effect finished.
 AnimatedModel animation finished or looped.
 AnimatedModel animation trigger.
 AnimatedModel bone hierarchy created.
 A command has been entered on the console.
 Database cursor. Event handler could set P_FILTER to true to filter out a row from resultset and P_ABORT to true to stop further cursor events.
 Work item completed event.
 Frame end event.
 Post-render update event.
 Render update event.
 Application-wide logic post-update event.
 Application-wide logic update event.
 Frame begin event.*//*(0)*/
    type["if"] = static_cast< (*)(0)>(&Urho3D::if) ;
#endif
        
    /*Initialize a fixed-size allocator with the node size and initial capacity.*//*(unsigned nodeSize, unsigned initialCapacity=1)*/
    type["AllocatorInitialize"] = static_cast<AllocatorBlock* (*)(unsigned, unsigned)>(&Urho3D::AllocatorInitialize) ;
    /*Uninitialize a fixed-size allocator. Frees all blocks in the chain.*//*(AllocatorBlock *allocator)*/
    type["AllocatorUninitialize"] = static_cast<void (*)(AllocatorBlock *)>(&Urho3D::AllocatorUninitialize) ;
    /*Reserve a node. Creates a new block if necessary.*//*(AllocatorBlock *allocator)*/
    type["AllocatorReserve"] = static_cast<void* (*)(AllocatorBlock *)>(&Urho3D::AllocatorReserve) ;
    /*Free a node. Does not free any blocks.*//*(AllocatorBlock *allocator, void *ptr)*/
    type["AllocatorFree"] = static_cast<void (*)(AllocatorBlock *, void *)>(&Urho3D::AllocatorFree) ;
#if 0 // INVALID: NeedsWrap(unsigned &)
    /*Combine hash into result value.*//*(unsigned &result, unsigned hash)*/
    type["CombineHash"] = static_cast<void (*)(unsigned &, unsigned)>(&Urho3D::CombineHash) ;
#endif
        
    type["__add"] = sol::overload(
        static_cast<String (*)(const char *, const  String &)>(&Urho3D::operator+) ,
        static_cast<String (*)(const wchar_t *, const  String &)>(&Urho3D::operator+)  );
    type["__bor"] = sol::overload(
        static_cast<Urho3D::FlagSet<AttributeMode> (*)(const  AttributeMode, const  AttributeMode)>(&Urho3D::operator|) ,
        static_cast<Urho3D::FlagSet<AnimationChannel> (*)(const AnimationChannel, const AnimationChannel)>(&Urho3D::operator|) ,
        static_cast<Urho3D::FlagSet<ViewOverride> (*)(const ViewOverride, const ViewOverride)>(&Urho3D::operator|) ,
        static_cast<Urho3D::FlagSet<ClearTarget> (*)(const ClearTarget, const ClearTarget)>(&Urho3D::operator|) ,
        static_cast<Urho3D::FlagSet<VertexMask> (*)(const VertexMask, const VertexMask)>(&Urho3D::operator|) ,
        static_cast<Urho3D::FlagSet<BoneCollisionShape> (*)(const BoneCollisionShape, const BoneCollisionShape)>(&Urho3D::operator|) ,
        static_cast<Urho3D::FlagSet<MouseButton> (*)(const MouseButton, const MouseButton)>(&Urho3D::operator|) ,
        static_cast<Urho3D::FlagSet<Qualifier> (*)(const Qualifier, const Qualifier)>(&Urho3D::operator|) ,
        static_cast<Urho3D::FlagSet<UpdateEvent> (*)(const  UpdateEvent, const  UpdateEvent)>(&Urho3D::operator|) ,
        static_cast<Urho3D::FlagSet<SmoothingType> (*)(const  SmoothingType, const  SmoothingType)>(&Urho3D::operator|) ,
        static_cast<Urho3D::FlagSet<DragAndDropMode> (*)(const  DragAndDropMode, const  DragAndDropMode)>(&Urho3D::operator|)  );
    type["__band"] = sol::overload(
        static_cast<Urho3D::FlagSet<AttributeMode> (*)(const  AttributeMode, const  AttributeMode)>(&Urho3D::operator&) ,
        static_cast<Urho3D::FlagSet<AnimationChannel> (*)(const AnimationChannel, const AnimationChannel)>(&Urho3D::operator&) ,
        static_cast<Urho3D::FlagSet<ViewOverride> (*)(const ViewOverride, const ViewOverride)>(&Urho3D::operator&) ,
        static_cast<Urho3D::FlagSet<ClearTarget> (*)(const ClearTarget, const ClearTarget)>(&Urho3D::operator&) ,
        static_cast<Urho3D::FlagSet<VertexMask> (*)(const VertexMask, const VertexMask)>(&Urho3D::operator&) ,
        static_cast<Urho3D::FlagSet<BoneCollisionShape> (*)(const BoneCollisionShape, const BoneCollisionShape)>(&Urho3D::operator&) ,
        static_cast<Urho3D::FlagSet<MouseButton> (*)(const MouseButton, const MouseButton)>(&Urho3D::operator&) ,
        static_cast<Urho3D::FlagSet<Qualifier> (*)(const Qualifier, const Qualifier)>(&Urho3D::operator&) ,
        static_cast<Urho3D::FlagSet<UpdateEvent> (*)(const  UpdateEvent, const  UpdateEvent)>(&Urho3D::operator&) ,
        static_cast<Urho3D::FlagSet<SmoothingType> (*)(const  SmoothingType, const  SmoothingType)>(&Urho3D::operator&) ,
        static_cast<Urho3D::FlagSet<DragAndDropMode> (*)(const  DragAndDropMode, const  DragAndDropMode)>(&Urho3D::operator&)  );
    type["__bxor"] = sol::overload(
        static_cast<Urho3D::FlagSet<AttributeMode> (*)(const  AttributeMode, const  AttributeMode)>(&Urho3D::operator^) ,
        static_cast<Urho3D::FlagSet<AnimationChannel> (*)(const AnimationChannel, const AnimationChannel)>(&Urho3D::operator^) ,
        static_cast<Urho3D::FlagSet<ViewOverride> (*)(const ViewOverride, const ViewOverride)>(&Urho3D::operator^) ,
        static_cast<Urho3D::FlagSet<ClearTarget> (*)(const ClearTarget, const ClearTarget)>(&Urho3D::operator^) ,
        static_cast<Urho3D::FlagSet<VertexMask> (*)(const VertexMask, const VertexMask)>(&Urho3D::operator^) ,
        static_cast<Urho3D::FlagSet<BoneCollisionShape> (*)(const BoneCollisionShape, const BoneCollisionShape)>(&Urho3D::operator^) ,
        static_cast<Urho3D::FlagSet<MouseButton> (*)(const MouseButton, const MouseButton)>(&Urho3D::operator^) ,
        static_cast<Urho3D::FlagSet<Qualifier> (*)(const Qualifier, const Qualifier)>(&Urho3D::operator^) ,
        static_cast<Urho3D::FlagSet<UpdateEvent> (*)(const  UpdateEvent, const  UpdateEvent)>(&Urho3D::operator^) ,
        static_cast<Urho3D::FlagSet<SmoothingType> (*)(const  SmoothingType, const  SmoothingType)>(&Urho3D::operator^) ,
        static_cast<Urho3D::FlagSet<DragAndDropMode> (*)(const  DragAndDropMode, const  DragAndDropMode)>(&Urho3D::operator^)  );
    type["__bnot"] = sol::overload(
        static_cast<Urho3D::FlagSet<AttributeMode> (*)(const  AttributeMode)>(&Urho3D::operator~) ,
        static_cast<Urho3D::FlagSet<AnimationChannel> (*)(const AnimationChannel)>(&Urho3D::operator~) ,
        static_cast<Urho3D::FlagSet<ViewOverride> (*)(const ViewOverride)>(&Urho3D::operator~) ,
        static_cast<Urho3D::FlagSet<ClearTarget> (*)(const ClearTarget)>(&Urho3D::operator~) ,
        static_cast<Urho3D::FlagSet<VertexMask> (*)(const VertexMask)>(&Urho3D::operator~) ,
        static_cast<Urho3D::FlagSet<BoneCollisionShape> (*)(const BoneCollisionShape)>(&Urho3D::operator~) ,
        static_cast<Urho3D::FlagSet<MouseButton> (*)(const MouseButton)>(&Urho3D::operator~) ,
        static_cast<Urho3D::FlagSet<Qualifier> (*)(const Qualifier)>(&Urho3D::operator~) ,
        static_cast<Urho3D::FlagSet<UpdateEvent> (*)(const  UpdateEvent)>(&Urho3D::operator~) ,
        static_cast<Urho3D::FlagSet<SmoothingType> (*)(const  SmoothingType)>(&Urho3D::operator~) ,
        static_cast<Urho3D::FlagSet<DragAndDropMode> (*)(const  DragAndDropMode)>(&Urho3D::operator~)  );
    /*Get register of event names.*//*()*/
    type["GetEventNameRegister"] = static_cast<StringHashRegister& (*)()>(&Urho3D::GetEventNameRegister) ;
    /*Initialize the FPU to round-to-nearest, single precision mode.*//*()*/
    type["InitFPU"] = static_cast<void (*)()>(&Urho3D::InitFPU) ;
    /*Display an error dialog with the specified title and message.*//*(const String &title, const String &message)*/
    type["ErrorDialog"] = static_cast<void (*)(const  String &, const  String &)>(&Urho3D::ErrorDialog) ;
    /*Exit the application with an error message to the console.*//*(const String &message=String::EMPTY, int exitCode=EXIT_FAILURE)*/
    type["ErrorExit"] = static_cast<void (*)(const  String &, int)>(&Urho3D::ErrorExit) ;
    /*Open a console window.*//*()*/
    type["OpenConsoleWindow"] = static_cast<void (*)()>(&Urho3D::OpenConsoleWindow) ;
    /*Print Unicode text to the console. Will not be printed to the MSVC output window.*//*(const String &str, bool error=false)*/
    type["PrintUnicode"] = static_cast<void (*)(const  String &, bool)>(&Urho3D::PrintUnicode) ;
    /*Print Unicode text to the console with a newline appended. Will not be printed to the MSVC output window.*//*(const String &str, bool error=false)*/
    type["PrintUnicodeLine"] = static_cast<void (*)(const  String &, bool)>(&Urho3D::PrintUnicodeLine) ;
    type["PrintLine"] = sol::overload(
        static_cast<void (*)(const  String &, bool)>(&Urho3D::PrintLine) ,
        static_cast<void (*)(const char *, bool)>(&Urho3D::PrintLine)  );
    type["ParseArguments"] = sol::overload(
        static_cast<const Vector<String>& (*)(const  String &, bool)>(&Urho3D::ParseArguments) ,
        static_cast<const Vector<String>& (*)(const char *)>(&Urho3D::ParseArguments) ,
        static_cast<const Vector<String>& (*)(const  WString &)>(&Urho3D::ParseArguments) ,
        static_cast<const Vector<String>& (*)(const wchar_t *)>(&Urho3D::ParseArguments) ,
        static_cast<const Vector<String>& (*)(int, char **)>(&Urho3D::ParseArguments)  );
    /*Return previously parsed arguments.*//*()*/
    type["GetArguments"] = static_cast<const Vector<String>& (*)()>(&Urho3D::GetArguments) ;
    /*Read input from the console window. Return empty if no input.*//*()*/
    type["GetConsoleInput"] = static_cast<String (*)()>(&Urho3D::GetConsoleInput) ;
    /*Return the runtime platform identifier, or (?) if not identified.*//*()*/
    type["GetPlatform"] = static_cast<String (*)()>(&Urho3D::GetPlatform) ;
    /*Return the number of physical CPU cores.*//*()*/
    type["GetNumPhysicalCPUs"] = static_cast<unsigned (*)()>(&Urho3D::GetNumPhysicalCPUs) ;
    /*Return the number of logical CPUs (different from physical if hyperthreading is used).*//*()*/
    type["GetNumLogicalCPUs"] = static_cast<unsigned (*)()>(&Urho3D::GetNumLogicalCPUs) ;
    /*Set minidump write location as an absolute path. If empty, uses default (UserProfile/AppData/Roaming/urho3D/crashdumps) Minidumps are only supported on MSVC compiler.*//*(const String &pathName)*/
    type["SetMiniDumpDir"] = static_cast<void (*)(const  String &)>(&Urho3D::SetMiniDumpDir) ;
    /*Return minidump write location.*//*()*/
    type["GetMiniDumpDir"] = static_cast<String (*)()>(&Urho3D::GetMiniDumpDir) ;
    /*Return the total amount of usable memory in bytes.*//*()*/
    type["GetTotalMemory"] = static_cast<unsigned long long (*)()>(&Urho3D::GetTotalMemory) ;
    /*Return the name of the currently logged in user, or (?) if not identified.*//*()*/
    type["GetLoginName"] = static_cast<String (*)()>(&Urho3D::GetLoginName) ;
    /*Return the name of the running machine.*//*()*/
    type["GetHostName"] = static_cast<String (*)()>(&Urho3D::GetHostName) ;
    /*Return the version of the currently running OS, or (?) if not identified.*//*()*/
    type["GetOSVersion"] = static_cast<String (*)()>(&Urho3D::GetOSVersion) ;
    type["ToBool"] = sol::overload(
        static_cast<bool (*)(const  String &)>(&Urho3D::ToBool) ,
        static_cast<bool (*)(const char *)>(&Urho3D::ToBool)  );
    type["ToFloat"] = sol::overload(
        static_cast<float (*)(const  String &)>(&Urho3D::ToFloat) ,
        static_cast<float (*)(const char *)>(&Urho3D::ToFloat)  );
    type["ToDouble"] = sol::overload(
        static_cast<double (*)(const  String &)>(&Urho3D::ToDouble) ,
        static_cast<double (*)(const char *)>(&Urho3D::ToDouble)  );
    type["ToInt"] = sol::overload(
        static_cast<int (*)(const  String &, int)>(&Urho3D::ToInt) ,
        static_cast<int (*)(const char *, int)>(&Urho3D::ToInt)  );
    type["ToUInt"] = sol::overload(
        static_cast<unsigned (*)(const  String &, int)>(&Urho3D::ToUInt) ,
        static_cast<unsigned (*)(const char *, int)>(&Urho3D::ToUInt)  );
    type["ToInt64"] = sol::overload(
        static_cast<long long (*)(const  String &, int)>(&Urho3D::ToInt64) ,
        static_cast<long long (*)(const char *, int)>(&Urho3D::ToInt64)  );
    type["ToUInt64"] = sol::overload(
        static_cast<unsigned long long (*)(const  String &, int)>(&Urho3D::ToUInt64) ,
        static_cast<unsigned long long (*)(const char *, int)>(&Urho3D::ToUInt64)  );
    type["ToColor"] = sol::overload(
        static_cast<Color (*)(const  String &)>(&Urho3D::ToColor) ,
        static_cast<Color (*)(const char *)>(&Urho3D::ToColor) ,
        static_cast<Color (*)(const b2Color &)>(&Urho3D::ToColor)  );
    type["ToIntRect"] = sol::overload(
        static_cast<IntRect (*)(const  String &)>(&Urho3D::ToIntRect) ,
        static_cast<IntRect (*)(const char *)>(&Urho3D::ToIntRect)  );
    type["ToIntVector2"] = sol::overload(
        static_cast<IntVector2 (*)(const  String &)>(&Urho3D::ToIntVector2) ,
        static_cast<IntVector2 (*)(const char *)>(&Urho3D::ToIntVector2)  );
    type["ToIntVector3"] = sol::overload(
        static_cast<IntVector3 (*)(const  String &)>(&Urho3D::ToIntVector3) ,
        static_cast<IntVector3 (*)(const char *)>(&Urho3D::ToIntVector3)  );
    type["ToQuaternion"] = sol::overload(
        static_cast<Quaternion (*)(const  String &)>(&Urho3D::ToQuaternion) ,
        static_cast<Quaternion (*)(const char *)>(&Urho3D::ToQuaternion) ,
        static_cast<Quaternion (*)(const btQuaternion &)>(&Urho3D::ToQuaternion)  );
    type["ToRect"] = sol::overload(
        static_cast<Rect (*)(const  String &)>(&Urho3D::ToRect) ,
        static_cast<Rect (*)(const char *)>(&Urho3D::ToRect)  );
    type["ToVector2"] = sol::overload(
        static_cast<Vector2 (*)(const  String &)>(&Urho3D::ToVector2) ,
        static_cast<Vector2 (*)(const char *)>(&Urho3D::ToVector2) ,
        static_cast<Vector2 (*)(const b2Vec2 &)>(&Urho3D::ToVector2)  );
    type["ToVector3"] = sol::overload(
        static_cast<Vector3 (*)(const  String &)>(&Urho3D::ToVector3) ,
        static_cast<Vector3 (*)(const char *)>(&Urho3D::ToVector3) ,
        static_cast<Vector3 (*)(const btVector3 &)>(&Urho3D::ToVector3) ,
        static_cast<Vector3 (*)(const b2Vec2 &)>(&Urho3D::ToVector3)  );
    type["ToVector4"] = sol::overload(
        static_cast<Vector4 (*)(const  String &, bool)>(&Urho3D::ToVector4) ,
        static_cast<Vector4 (*)(const char *, bool)>(&Urho3D::ToVector4)  );
    type["ToVectorVariant"] = sol::overload(
        static_cast<Variant (*)(const  String &)>(&Urho3D::ToVectorVariant) ,
        static_cast<Variant (*)(const char *)>(&Urho3D::ToVectorVariant)  );
    type["ToMatrix3"] = sol::overload(
        static_cast<Matrix3 (*)(const  String &)>(&Urho3D::ToMatrix3) ,
        static_cast<Matrix3 (*)(const char *)>(&Urho3D::ToMatrix3)  );
    type["ToMatrix3x4"] = sol::overload(
        static_cast<Matrix3x4 (*)(const  String &)>(&Urho3D::ToMatrix3x4) ,
        static_cast<Matrix3x4 (*)(const char *)>(&Urho3D::ToMatrix3x4)  );
    type["ToMatrix4"] = sol::overload(
        static_cast<Matrix4 (*)(const  String &)>(&Urho3D::ToMatrix4) ,
        static_cast<Matrix4 (*)(const char *)>(&Urho3D::ToMatrix4)  );
    type["__tostring"] = sol::overload(
        static_cast<String (*)(void *)>(&Urho3D::ToString) ,
        static_cast<String (*)(const char *, ...)>(&Urho3D::ToString)  );
    /*Convert an unsigned integer to string as hexadecimal.*//*(unsigned value)*/
    type["ToStringHex"] = static_cast<String (*)(unsigned)>(&Urho3D::ToStringHex) ;
#if 0 // INVALID: NeedsWrap(String &)
    /*Convert a byte buffer to a string.*//*(String &dest, const void *data, unsigned size)*/
    type["BufferToString"] = static_cast<void (*)(String &, const void *, unsigned)>(&Urho3D::BufferToString) ;
#endif
        
    type["StringToBuffer"] = sol::overload(
        static_cast<void (*)(PODVector< unsigned char > &, const  String &)>(&Urho3D::StringToBuffer) ,
        static_cast<void (*)(PODVector< unsigned char > &, const char *)>(&Urho3D::StringToBuffer)  );
    type["GetStringListIndex"] = sol::overload(
        static_cast<unsigned (*)(const  String &, const  String *, unsigned, bool)>(&Urho3D::GetStringListIndex) ,
        static_cast<unsigned (*)(const char *, const  String *, unsigned, bool)>(&Urho3D::GetStringListIndex) ,
        static_cast<unsigned (*)(const char *, const char **, unsigned, bool)>(&Urho3D::GetStringListIndex)  );
    /*Return whether a char is an alphabet letter.*//*(unsigned ch)*/
    type["IsAlpha"] = static_cast<bool (*)(unsigned)>(&Urho3D::IsAlpha) ;
    /*Return whether a char is a digit.*//*(unsigned ch)*/
    type["IsDigit"] = static_cast<bool (*)(unsigned)>(&Urho3D::IsDigit) ;
    /*Return char in uppercase.*//*(unsigned ch)*/
    type["ToUpper"] = static_cast<unsigned (*)(unsigned)>(&Urho3D::ToUpper) ;
    /*Return char in lowercase.*//*(unsigned ch)*/
    type["ToLower"] = static_cast<unsigned (*)(unsigned)>(&Urho3D::ToLower) ;
    /*Convert a memory size into a formatted size string, of the style "1.5 Mb".*//*(unsigned long long memorySize)*/
    type["GetFileSizeString"] = static_cast<String (*)(unsigned long long)>(&Urho3D::GetFileSizeString) ;
    /*Decode a base64-encoded string into buffer.*//*(String encodedString)*/
    type["DecodeBase64"] = static_cast<PODVector<unsigned char> (*)(String)>(&Urho3D::DecodeBase64) ;
#if 0 // INVALID: NoBind!
    /*The function that actually handles the string formatting. Per the fmt documentation, splitting it this way should improve compile time and reduce binary code size compared to a fully parameterized version.  https://fmt.dev/9.1.0/api.html#argument-lists NO_BIND*//*(fmt::string_view format, fmt::format_args args)*/
    type["VFormatString"] = static_cast<String (*)(fmt::string_view, fmt::format_args)>(&Urho3D::VFormatString) ;
#endif
        
    /**//*(Drawable *lhs, Drawable *rhs)*/
    type["CompareDrawables"] = static_cast<bool (*)(Drawable *, Drawable *)>(&Urho3D::CompareDrawables) ;
    /**//*(const PODVector< Drawable * > &drawables, File *outputFile, bool asZUp, bool asRightHanded, bool writeLightmapUV=false)*/
    type["WriteDrawablesToOBJ"] = static_cast<bool (*)(const  PODVector<  Drawable * > &, File *, bool, bool, bool)>(&Urho3D::WriteDrawablesToOBJ) ;
#if 0 // INVALID: NoBind!
    /*Register  Graphics library objects. NO_BIND*//*(Context *context)*/
    type["RegisterGraphicsLibrary"] = static_cast<void (*)(Context *)>(&Urho3D::RegisterGraphicsLibrary) ;
#endif
        
    /**//*(Light *lhs, Light *rhs)*/
    type["CompareLights"] = static_cast<bool (*)(Light *, Light *)>(&Urho3D::CompareLights) ;
    /*Generate tangents to indexed geometry.*//*(void *vertexData, unsigned vertexSize, const void *indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount, unsigned normalOffset, unsigned texCoordOffset, unsigned tangentOffset)*/
    type["GenerateTangents"] = static_cast<void (*)(void *, unsigned, const void *, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned)>(&Urho3D::GenerateTangents) ;
#if 0 // INVALID: NoBind!
    /*Registers all IK systems to the specified context. NO_BIND*//*(Context *context)*/
    type["RegisterIKLibrary"] = static_cast<void (*)(Context *)>(&Urho3D::RegisterIKLibrary) ;
#endif
        
    /*Converts from an Urho3D  Vector3 to an IK vec3_t.*//*(const Vector3 &urho)*/
    type["Vec3Urho2IK"] = static_cast<vec3_t (*)(const  Vector3 &)>(&Urho3D::Vec3Urho2IK) ;
    /*Converts from an IK vec3_t to an Urho3D  Vector3.*//*(const vec3_t *ik)*/
    type["Vec3IK2Urho"] = static_cast<Vector3 (*)(const vec3_t *)>(&Urho3D::Vec3IK2Urho) ;
    /*Converts from an Urho3D quaternion to an IK quat_t.*//*(const Quaternion &urho)*/
    type["QuatUrho2IK"] = static_cast<quat_t (*)(const  Quaternion &)>(&Urho3D::QuatUrho2IK) ;
    /*Converts from an IK quat_t to an Urho3D quaternion.*//*(const quat_t *ik)*/
    type["QuatIK2Urho"] = static_cast<Quaternion (*)(const quat_t *)>(&Urho3D::QuatIK2Urho) ;
    /*Estimate and return worst case LZ4 compressed output size in bytes for given input size.*//*(unsigned srcSize)*/
    type["EstimateCompressBound"] = static_cast<unsigned (*)(unsigned)>(&Urho3D::EstimateCompressBound) ;
    /*Compress data using the LZ4 algorithm and return the compressed data size. The needed destination buffer worst-case size is given by EstimateCompressBound().*//*(void *dest, const void *src, unsigned srcSize)*/
    type["CompressData"] = static_cast<unsigned (*)(void *, const void *, unsigned)>(&Urho3D::CompressData) ;
    /*Uncompress data using the LZ4 algorithm. The uncompressed data size must be known. Return the number of compressed data bytes consumed.*//*(void *dest, const void *src, unsigned destSize)*/
    type["DecompressData"] = static_cast<unsigned (*)(void *, const void *, unsigned)>(&Urho3D::DecompressData) ;
    /*Compress a source stream (from current position to the end) to the destination stream using the LZ4 algorithm. Return true on success.*//*(Serializer &dest, Deserializer &src)*/
    type["CompressStream"] = static_cast<bool (*)(Serializer &, Deserializer &)>(&Urho3D::CompressStream) ;
    /*Decompress a compressed source stream produced using CompressStream() to the destination stream. Return true on success.*//*(Serializer &dest, Deserializer &src)*/
    type["DecompressStream"] = static_cast<bool (*)(Serializer &, Deserializer &)>(&Urho3D::DecompressStream) ;
    /*Compress a  VectorBuffer using the LZ4 algorithm and return the compressed result buffer.*//*(VectorBuffer &src)*/
    type["CompressVectorBuffer"] = static_cast<VectorBuffer (*)(VectorBuffer &)>(&Urho3D::CompressVectorBuffer) ;
    /*Decompress a  VectorBuffer produced using CompressVectorBuffer().*//*(VectorBuffer &src)*/
    type["DecompressVectorBuffer"] = static_cast<VectorBuffer (*)(VectorBuffer &)>(&Urho3D::DecompressVectorBuffer) ;
#if 0 // INVALID: NeedsWrap(String &)NeedsWrap(String &)NeedsWrap(String &)
    /*Split a full path to path, filename and extension. The extension will be converted to lowercase by default.*//*(const String &fullPath, String &pathName, String &fileName, String &extension, bool lowercaseExtension=true)*/
    type["SplitPath"] = static_cast<void (*)(const  String &, String &, String &, String &, bool)>(&Urho3D::SplitPath) ;
#endif
        
    /*Return the path from a full path.*//*(const String &fullPath)*/
    type["GetPath"] = static_cast<String (*)(const  String &)>(&Urho3D::GetPath) ;
    /*Return the filename from a full path.*//*(const String &fullPath)*/
    type["GetFileName"] = static_cast<String (*)(const  String &)>(&Urho3D::GetFileName) ;
    /*Return the extension from a full path, converted to lowercase by default.*//*(const String &fullPath, bool lowercaseExtension=true)*/
    type["GetExtension"] = static_cast<String (*)(const  String &, bool)>(&Urho3D::GetExtension) ;
    /*Return the filename and extension from a full path. The case of the extension is preserved by default, so that the file can be opened in case-sensitive operating systems.*//*(const String &fileName, bool lowercaseExtension=false)*/
    type["GetFileNameAndExtension"] = static_cast<String (*)(const  String &, bool)>(&Urho3D::GetFileNameAndExtension) ;
    /*Replace the extension of a file name with another.*//*(const String &fullPath, const String &newExtension)*/
    type["ReplaceExtension"] = static_cast<String (*)(const  String &, const  String &)>(&Urho3D::ReplaceExtension) ;
    /*Add a slash at the end of the path if missing and convert to internal format (use slashes).*//*(const String &pathName)*/
    type["AddTrailingSlash"] = static_cast<String (*)(const  String &)>(&Urho3D::AddTrailingSlash) ;
    /*Remove the slash from the end of a path if exists and convert to internal format (use slashes).*//*(const String &pathName)*/
    type["RemoveTrailingSlash"] = static_cast<String (*)(const  String &)>(&Urho3D::RemoveTrailingSlash) ;
    /*Return the parent path, or the path itself if not available.*//*(const String &path)*/
    type["GetParentPath"] = static_cast<String (*)(const  String &)>(&Urho3D::GetParentPath) ;
    /*Convert a path to internal format (use slashes).*//*(const String &pathName)*/
    type["GetInternalPath"] = static_cast<String (*)(const  String &)>(&Urho3D::GetInternalPath) ;
    /*Convert a path to the format required by the operating system.*//*(const String &pathName)*/
    type["GetNativePath"] = static_cast<String (*)(const  String &)>(&Urho3D::GetNativePath) ;
    /*Convert a path to the format required by the operating system in wide characters.*//*(const String &pathName)*/
    type["GetWideNativePath"] = static_cast<WString (*)(const  String &)>(&Urho3D::GetWideNativePath) ;
    /*Return whether a path is absolute.*//*(const String &pathName)*/
    type["IsAbsolutePath"] = static_cast<bool (*)(const  String &)>(&Urho3D::IsAbsolutePath) ;
    /*Return git description of the HEAD when building the library.*//*()*/
    type["GetRevision"] = static_cast<const char* (*)()>(&Urho3D::GetRevision) ;
    /*Return baked-in compiler defines used when building the library.*//*()*/
    type["GetCompilerDefines"] = static_cast<const char* (*)()>(&Urho3D::GetCompilerDefines) ;
    type["__mul"] = sol::overload(
        static_cast<Color (*)(float, const  Color &)>(&Urho3D::operator*) ,
        static_cast<Matrix2 (*)(float, const  Matrix2 &)>(&Urho3D::operator*) ,
        static_cast<Matrix3 (*)(float, const  Matrix3 &)>(&Urho3D::operator*) ,
        static_cast<Matrix3x4 (*)(float, const  Matrix3x4 &)>(&Urho3D::operator*) ,
        static_cast<Matrix4 (*)(float, const  Matrix4 &)>(&Urho3D::operator*) ,
        static_cast<Vector2 (*)(float, const  Vector2 &)>(&Urho3D::operator*) ,
        static_cast<IntVector2 (*)(int, const  IntVector2 &)>(&Urho3D::operator*) ,
        static_cast<Vector3 (*)(float, const  Vector3 &)>(&Urho3D::operator*) ,
        static_cast<IntVector3 (*)(int, const  IntVector3 &)>(&Urho3D::operator*) ,
        static_cast<Vector4 (*)(float, const  Vector4 &)>(&Urho3D::operator*)  );
    /*Return a representation of the specified floating-point value as a single format bit layout.*//*(float value)*/
    type["FloatToRawIntBits"] = static_cast<unsigned (*)(float)>(&Urho3D::FloatToRawIntBits) ;
    /*Check whether an unsigned integer is a power of two.*//*(unsigned value)*/
    type["IsPowerOfTwo"] = static_cast<bool (*)(unsigned)>(&Urho3D::IsPowerOfTwo) ;
    /*Round up to next power of two.*//*(unsigned value)*/
    type["NextPowerOfTwo"] = static_cast<unsigned (*)(unsigned)>(&Urho3D::NextPowerOfTwo) ;
    /*Round up or down to the closest power of two.*//*(unsigned value)*/
    type["ClosestPowerOfTwo"] = static_cast<unsigned (*)(unsigned)>(&Urho3D::ClosestPowerOfTwo) ;
    /*Return log base two or the MSB position of the given value.*//*(unsigned value)*/
    type["LogBaseTwo"] = static_cast<unsigned (*)(unsigned)>(&Urho3D::LogBaseTwo) ;
    /*Count the number of set bits in a mask.*//*(unsigned value)*/
    type["CountSetBits"] = static_cast<unsigned (*)(unsigned)>(&Urho3D::CountSetBits) ;
    /*Update a hash with the given 8-bit value using the SDBM algorithm.*//*(unsigned hash, unsigned char c)*/
    type["SDBMHash"] = static_cast<unsigned (*)(unsigned, unsigned char)>(&Urho3D::SDBMHash) ;
    type["Random"] = sol::overload(
        static_cast<float (*)()>(&Urho3D::Random) ,
        static_cast<float (*)(float)>(&Urho3D::Random) ,
        static_cast<float (*)(float, float)>(&Urho3D::Random)  );
    type["RandomInt"] = sol::overload(
        static_cast<int (*)(int)>(&Urho3D::Random) ,
        static_cast<int (*)(int, int)>(&Urho3D::Random) ,
        static_cast<int (*)()>(&Urho3D::Rand)  );
    /*Return a random normal distributed number with the given mean value and variance.*//*(float meanValue, float variance)*/
    type["RandomNormal"] = static_cast<float (*)(float, float)>(&Urho3D::RandomNormal) ;
    /*Convert float to half float. From  https://gist.github.com/martinkallman/5049614.*//*(float value)*/
    type["FloatToHalf"] = static_cast<unsigned short (*)(float)>(&Urho3D::FloatToHalf) ;
    /*Convert half float to float. From  https://gist.github.com/martinkallman/5049614.*//*(unsigned short value)*/
    type["HalfToFloat"] = static_cast<float (*)(unsigned short)>(&Urho3D::HalfToFloat) ;
#if 0 // INVALID: NeedsWrap(float &)NeedsWrap(float &)
    /*Calculate both sine and cosine, with angle in degrees.*//*(float angle, float &sin, float &cos)*/
    type["SinCos"] = static_cast<void (*)(float, float &, float &)>(&Urho3D::SinCos) ;
#endif
        
    /*Set the random seed. The default seed is 1.*//*(unsigned seed)*/
    type["SetRandomSeed"] = static_cast<void (*)(unsigned)>(&Urho3D::SetRandomSeed) ;
    /*Return the current random seed.*//*()*/
    type["GetRandomSeed"] = static_cast<unsigned (*)()>(&Urho3D::GetRandomSeed) ;
    /*Return a standard normal distributed number.*//*()*/
    type["RandStandardNormal"] = static_cast<float (*)()>(&Urho3D::RandStandardNormal) ;
    type["VectorLerp"] = sol::overload(
        static_cast<Vector2 (*)(const  Vector2 &, const  Vector2 &, const  Vector2 &)>(&Urho3D::VectorLerp) ,
        static_cast<Vector3 (*)(const  Vector3 &, const  Vector3 &, const  Vector3 &)>(&Urho3D::VectorLerp) ,
        static_cast<Vector4 (*)(const  Vector4 &, const  Vector4 &, const  Vector4 &)>(&Urho3D::VectorLerp)  );
    type["VectorMin"] = sol::overload(
        static_cast<Vector2 (*)(const  Vector2 &, const  Vector2 &)>(&Urho3D::VectorMin) ,
        static_cast<IntVector2 (*)(const  IntVector2 &, const  IntVector2 &)>(&Urho3D::VectorMin) ,
        static_cast<Vector3 (*)(const  Vector3 &, const  Vector3 &)>(&Urho3D::VectorMin) ,
        static_cast<IntVector3 (*)(const  IntVector3 &, const  IntVector3 &)>(&Urho3D::VectorMin) ,
        static_cast<Vector4 (*)(const  Vector4 &, const  Vector4 &)>(&Urho3D::VectorMin)  );
    type["VectorMax"] = sol::overload(
        static_cast<Vector2 (*)(const  Vector2 &, const  Vector2 &)>(&Urho3D::VectorMax) ,
        static_cast<IntVector2 (*)(const  IntVector2 &, const  IntVector2 &)>(&Urho3D::VectorMax) ,
        static_cast<Vector3 (*)(const  Vector3 &, const  Vector3 &)>(&Urho3D::VectorMax) ,
        static_cast<IntVector3 (*)(const  IntVector3 &, const  IntVector3 &)>(&Urho3D::VectorMax) ,
        static_cast<Vector4 (*)(const  Vector4 &, const  Vector4 &)>(&Urho3D::VectorMax)  );
    type["VectorFloor"] = sol::overload(
        static_cast<Vector2 (*)(const  Vector2 &)>(&Urho3D::VectorFloor) ,
        static_cast<Vector3 (*)(const  Vector3 &)>(&Urho3D::VectorFloor) ,
        static_cast<Vector4 (*)(const  Vector4 &)>(&Urho3D::VectorFloor)  );
    type["VectorRound"] = sol::overload(
        static_cast<Vector2 (*)(const  Vector2 &)>(&Urho3D::VectorRound) ,
        static_cast<Vector3 (*)(const  Vector3 &)>(&Urho3D::VectorRound) ,
        static_cast<Vector4 (*)(const  Vector4 &)>(&Urho3D::VectorRound)  );
    type["VectorCeil"] = sol::overload(
        static_cast<Vector2 (*)(const  Vector2 &)>(&Urho3D::VectorCeil) ,
        static_cast<Vector3 (*)(const  Vector3 &)>(&Urho3D::VectorCeil) ,
        static_cast<Vector4 (*)(const  Vector4 &)>(&Urho3D::VectorCeil)  );
    type["VectorAbs"] = sol::overload(
        static_cast<Vector2 (*)(const  Vector2 &)>(&Urho3D::VectorAbs) ,
        static_cast<IntVector2 (*)(const  IntVector2 &)>(&Urho3D::VectorAbs) ,
        static_cast<Vector3 (*)(const  Vector3 &)>(&Urho3D::VectorAbs) ,
        static_cast<IntVector3 (*)(const  IntVector3 &)>(&Urho3D::VectorAbs)  );
    type["VectorFloorToInt"] = sol::overload(
        static_cast<IntVector2 (*)(const  Vector2 &)>(&Urho3D::VectorFloorToInt) ,
        static_cast<IntVector3 (*)(const  Vector3 &)>(&Urho3D::VectorFloorToInt)  );
    type["VectorRoundToInt"] = sol::overload(
        static_cast<IntVector2 (*)(const  Vector2 &)>(&Urho3D::VectorRoundToInt) ,
        static_cast<IntVector3 (*)(const  Vector3 &)>(&Urho3D::VectorRoundToInt)  );
    type["VectorCeilToInt"] = sol::overload(
        static_cast<IntVector2 (*)(const  Vector2 &)>(&Urho3D::VectorCeilToInt) ,
        static_cast<IntVector3 (*)(const  Vector3 &)>(&Urho3D::VectorCeilToInt)  );
    type["StableRandom"] = sol::overload(
        static_cast<float (*)(const  Vector2 &)>(&Urho3D::StableRandom) ,
        static_cast<float (*)(float)>(&Urho3D::StableRandom) ,
        static_cast<float (*)(const  Vector3 &)>(&Urho3D::StableRandom)  );
#if 0 // INVALID: NoBind!
    /*Register Navigation library objects. NO_BIND*//*(Context *context)*/
    type["RegisterNavigationLibrary"] = static_cast<void (*)(Context *)>(&Urho3D::RegisterNavigationLibrary) ;
#endif
        
#if 0 // INVALID: NoBind!
    /*Register  Network library objects. NO_BIND*//*(Context *context)*/
    type["RegisterNetworkLibrary"] = static_cast<void (*)(Context *)>(&Urho3D::RegisterNetworkLibrary) ;
#endif
        
    /**//*(const Vector3 &vector)*/
    type["ToBtVector3"] = static_cast<btVector3 (*)(const  Vector3 &)>(&Urho3D::ToBtVector3) ;
    /**//*(const Quaternion &quaternion)*/
    type["ToBtQuaternion"] = static_cast<btQuaternion (*)(const  Quaternion &)>(&Urho3D::ToBtQuaternion) ;
    /**//*(const Vector3 &oldWorldScale, const Vector3 &newWorldScale)*/
    type["HasWorldScaleChanged"] = static_cast<bool (*)(const  Vector3 &, const  Vector3 &)>(&Urho3D::HasWorldScaleChanged) ;
#if 0 // INVALID: NoBind!
    /*Register Physics library objects. NO_BIND*//*(Context *context)*/
    type["RegisterPhysicsLibrary"] = static_cast<void (*)(Context *)>(&Urho3D::RegisterPhysicsLibrary) ;
#endif
        
#if 0 // INVALID: NoBind!
    /*Register Physics2D library objects. NO_BIND*//*(Context *context)*/
    type["RegisterPhysics2DLibrary"] = static_cast<void (*)(Context *)>(&Urho3D::RegisterPhysics2DLibrary) ;
#endif
        
    type["ToB2Vec2"] = sol::overload(
        static_cast<b2Vec2 (*)(const  Vector2 &)>(&Urho3D::ToB2Vec2) ,
        static_cast<b2Vec2 (*)(const  Vector3 &)>(&Urho3D::ToB2Vec2)  );
    /*Decompress a DXT compressed image to RGBA.*//*(unsigned char *rgba, const void *blocks, int width, int height, int depth, CompressedFormat format)*/
    type["DecompressImageDXT"] = static_cast<void (*)(unsigned char *, const void *, int, int, int, CompressedFormat)>(&Urho3D::DecompressImageDXT) ;
    /*Decompress an ETC1/ETC2 compressed image to RGBA.*//*(unsigned char *dstImage, const void *blocks, int width, int height, bool hasAlpha)*/
    type["DecompressImageETC"] = static_cast<void (*)(unsigned char *, const void *, int, int, bool)>(&Urho3D::DecompressImageETC) ;
    /*Decompress a PVRTC compressed image to RGBA.*//*(unsigned char *rgba, const void *blocks, int width, int height, CompressedFormat format)*/
    type["DecompressImagePVRTC"] = static_cast<void (*)(unsigned char *, const void *, int, int, CompressedFormat)>(&Urho3D::DecompressImagePVRTC) ;
    /*Flip a compressed block vertically.*//*(unsigned char *dest, const unsigned char *src, CompressedFormat format)*/
    type["FlipBlockVertical"] = static_cast<void (*)(unsigned char *, const unsigned char *, CompressedFormat)>(&Urho3D::FlipBlockVertical) ;
    /*Flip a compressed block horizontally.*//*(unsigned char *dest, const unsigned char *src, CompressedFormat format)*/
    type["FlipBlockHorizontal"] = static_cast<void (*)(unsigned char *, const unsigned char *, CompressedFormat)>(&Urho3D::FlipBlockHorizontal) ;
    /**//*(Resource *resource)*/
    type["GetResourceName"] = static_cast<const String& (*)(Resource *)>(&Urho3D::GetResourceName) ;
    /**//*(Resource *resource, StringHash defaultType)*/
    type["GetResourceType"] = static_cast<StringHash (*)(Resource *, StringHash)>(&Urho3D::GetResourceType) ;
    /**//*(Resource *resource, StringHash defaultType)*/
    type["GetResourceRef"] = static_cast<ResourceRef (*)(Resource *, StringHash)>(&Urho3D::GetResourceRef) ;
#if 0 // INVALID: NoBind!
    /*Register  Resource library subsystems and objects. NO_BIND*//*(Context *context)*/
    type["RegisterResourceLibrary"] = static_cast<void (*)(Context *)>(&Urho3D::RegisterResourceLibrary) ;
#endif
        
#if 0 // INVALID: NoBind!
    /*Register  Scene library objects. NO_BIND*//*(Context *context)*/
    type["RegisterSceneLibrary"] = static_cast<void (*)(Context *)>(&Urho3D::RegisterSceneLibrary) ;
#endif
        
#if 0 // INVALID: NoBind!
    /*Register  UI library objects. NO_BIND*//*(Context *context)*/
    type["RegisterUILibrary"] = static_cast<void (*)(Context *)>(&Urho3D::RegisterUILibrary) ;
#endif
        
#if 0 // INVALID: NoBind!
    /*Register Urho2D library objects. NO_BIND*//*(Context *context)*/
    type["RegisterUrho2DLibrary"] = static_cast<void (*)(Context *)>(&Urho3D::RegisterUrho2DLibrary) ;
#endif
        

}

