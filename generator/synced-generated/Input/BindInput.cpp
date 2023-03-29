
// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Input/Input.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Input/Input.h>
#include <Urho3D/Container/FlagSet.h>
#include <Urho3D/Container/HashSet.h>
#include <Urho3D/Container/List.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Core/Context.h>
#include <Urho3D/Core/Mutex.h>
#include <Urho3D/Core/Object.h>
#include <Urho3D/IO/Deserializer.h>
#include <Urho3D/IO/Serializer.h>
#include <Urho3D/Input/Input.h>
#include <Urho3D/Input/InputEvents.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/Resource/XMLFile.h>
#include <Urho3D/UI/Cursor.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_Input(sol::state_view& lua)
{
    
using namespace Urho3D;


    casters[Urho3D::Input::GetTypeStatic()] = [](Object*o,sol::state_view lua)->sol::object{
        if (o->IsInstanceOf(Urho3D::Input::GetTypeStatic()))
            return sol::make_object(lua,SharedPtr<Urho3D::Input>((Urho3D::Input*)o));
        return sol::nil;
    };


auto type = lua.new_usertype<Urho3D::Input>( "Input"
// Base Classes
    , sol::base_classes, sol::bases<Urho3D::Object,Urho3D::RefCounted>()

);

// Constructors

    type[sol::call_constructor] = sol::factories([](Context *context) { 
            return Urho3D::MakeShared<Urho3D::Input>(context);
        });

// Members

    /*Poll for window messages. Called by HandleBeginFrame().*//*()*/
    type["Update"] = static_cast<void (Urho3D::Input::*)()>(&Urho3D::Input::Update) ;
    /*Set whether ALT-ENTER fullscreen toggle is enabled. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetToggleFullscreen"] = static_cast<void (Urho3D::Input::*)(bool)>(&Urho3D::Input::SetToggleFullscreen) ;
    /*Reset last mouse visibility that was not suppressed in SetMouseVisible.*//*()*/
    type["ResetMouseVisible"] = static_cast<void (Urho3D::Input::*)()>(&Urho3D::Input::ResetMouseVisible) ;
    /*Reset the mouse grabbed to the last unsuppressed SetMouseGrabbed call.*//*()*/
    type["ResetMouseGrabbed"] = static_cast<void (Urho3D::Input::*)()>(&Urho3D::Input::ResetMouseGrabbed) ;
    /*Reset the last mouse mode that wasn't suppressed in SetMouseMode.*//*()*/
    type["ResetMouseMode"] = static_cast<void (Urho3D::Input::*)()>(&Urho3D::Input::ResetMouseMode) ;
    /*Remove screen joystick by instance ID.Return true if successful.
 This method should only be called in main thread.*//*(SDL_JoystickID id)*/
    type["RemoveScreenJoystick"] = static_cast<bool (Urho3D::Input::*)(SDL_JoystickID)>(&Urho3D::Input::RemoveScreenJoystick) ;
    /*Set whether the virtual joystick is visible. BIND_AS_PROPERTY*//*(SDL_JoystickID id, bool enable)*/
    type["SetScreenJoystickVisible"] = static_cast<void (Urho3D::Input::*)(SDL_JoystickID, bool)>(&Urho3D::Input::SetScreenJoystickVisible) ;
    /*Show or hide on-screen keyboard on platforms that support it. When shown, keypresses from it are delivered as key events. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetScreenKeyboardVisible"] = static_cast<void (Urho3D::Input::*)(bool)>(&Urho3D::Input::SetScreenKeyboardVisible) ;
    /*Set touch emulation by mouse. Only available on desktop platforms. When enabled, actual mouse events are no longer sent and the mouse cursor is forced visible. BIND_AS_PROPERTY*//*(bool enable)*/
    type["SetTouchEmulation"] = static_cast<void (Urho3D::Input::*)(bool)>(&Urho3D::Input::SetTouchEmulation) ;
    /*Begin recording a touch gesture. Return true if successful. The E_GESTURERECORDED event (which contains the ID for the new gesture) will be sent when recording finishes.*//*()*/
    type["RecordGesture"] = static_cast<bool (Urho3D::Input::*)()>(&Urho3D::Input::RecordGesture) ;
    /*Save all in-memory touch gestures. Return true if successful.*//*(Serializer &dest)*/
    type["SaveGestures"] = static_cast<bool (Urho3D::Input::*)(Serializer &)>(&Urho3D::Input::SaveGestures) ;
    /*Save a specific in-memory touch gesture to a file. Return true if successful.*//*(Serializer &dest, unsigned gestureID)*/
    type["SaveGesture"] = static_cast<bool (Urho3D::Input::*)(Serializer &, unsigned)>(&Urho3D::Input::SaveGesture) ;
    /*Load touch gestures from a file. Return number of loaded gestures, or 0 on failure.*//*(Deserializer &source)*/
    type["LoadGestures"] = static_cast<unsigned (Urho3D::Input::*)(Deserializer &)>(&Urho3D::Input::LoadGestures) ;
    /*Remove an in-memory gesture by ID. Return true if was found.*//*(unsigned gestureID)*/
    type["RemoveGesture"] = static_cast<bool (Urho3D::Input::*)(unsigned)>(&Urho3D::Input::RemoveGesture) ;
    /*Remove all in-memory gestures.*//*()*/
    type["RemoveAllGestures"] = static_cast<void (Urho3D::Input::*)()>(&Urho3D::Input::RemoveAllGestures) ;
    /*Set the mouse cursor position. Uses the backbuffer ( Graphics width/height) coordinates. BIND_AS_PROPERTY*//*(const IntVector2 &position)*/
    type["SetMousePosition"] = static_cast<void (Urho3D::Input::*)(const  IntVector2 &)>(&Urho3D::Input::SetMousePosition) ;
    /*Center the mouse position.*//*()*/
    type["CenterMousePosition"] = static_cast<void (Urho3D::Input::*)()>(&Urho3D::Input::CenterMousePosition) ;
    /*Return keycode from key name.*//*(const String &name) const*/
    type["GetKeyFromName"] = static_cast<Key (Urho3D::Input::*)(const  String &) const>(&Urho3D::Input::GetKeyFromName) ;
    /*Return keycode from scancode.*//*(Scancode scancode) const*/
    type["GetKeyFromScancode"] = static_cast<Key (Urho3D::Input::*)(Scancode) const>(&Urho3D::Input::GetKeyFromScancode) ;
    /*Return name of key from keycode.*//*(Key key) const*/
    type["GetKeyName"] = static_cast<String (Urho3D::Input::*)(Key) const>(&Urho3D::Input::GetKeyName) ;
    /*Return scancode from keycode.*//*(Key key) const*/
    type["GetScancodeFromKey"] = static_cast<Scancode (Urho3D::Input::*)(Key) const>(&Urho3D::Input::GetScancodeFromKey) ;
    /*Return scancode from key name.*//*(const String &name) const*/
    type["GetScancodeFromName"] = static_cast<Scancode (Urho3D::Input::*)(const  String &) const>(&Urho3D::Input::GetScancodeFromName) ;
    /*Return name of key from scancode.*//*(Scancode scancode) const*/
    type["GetScancodeName"] = static_cast<String (Urho3D::Input::*)(Scancode) const>(&Urho3D::Input::GetScancodeName) ;
    /*Check if a key is held down. BIND_AS_PROPERTY*//*(Key key) const*/
    type["GetKeyDown"] = static_cast<bool (Urho3D::Input::*)(Key) const>(&Urho3D::Input::GetKeyDown) ;
    /*Check if a key has been pressed on this frame. BIND_AS_PROPERTY*//*(Key key) const*/
    type["GetKeyPress"] = static_cast<bool (Urho3D::Input::*)(Key) const>(&Urho3D::Input::GetKeyPress) ;
    /*Check if a key is held down by scancode. BIND_AS_PROPERTY*//*(Scancode scancode) const*/
    type["GetScancodeDown"] = static_cast<bool (Urho3D::Input::*)(Scancode) const>(&Urho3D::Input::GetScancodeDown) ;
    /*Check if a key has been pressed on this frame by scancode. BIND_AS_PROPERTY*//*(Scancode scancode) const*/
    type["GetScancodePress"] = static_cast<bool (Urho3D::Input::*)(Scancode) const>(&Urho3D::Input::GetScancodePress) ;
    /*Check if a mouse button is held down. BIND_AS_PROPERTY*//*(MouseButtonFlags button) const*/
    type["GetMouseButtonDown"] = static_cast<bool (Urho3D::Input::*)(MouseButtonFlags) const>(&Urho3D::Input::GetMouseButtonDown) ;
    /*Check if a mouse button has been pressed on this frame. BIND_AS_PROPERTY*//*(MouseButtonFlags button) const*/
    type["GetMouseButtonPress"] = static_cast<bool (Urho3D::Input::*)(MouseButtonFlags) const>(&Urho3D::Input::GetMouseButtonPress) ;
    /*Check if a qualifier key is held down. BIND_AS_PROPERTY*//*(Qualifier qualifier) const*/
    type["GetQualifierDown"] = static_cast<bool (Urho3D::Input::*)(Qualifier) const>(&Urho3D::Input::GetQualifierDown) ;
    /*Check if a qualifier key has been pressed on this frame. BIND_AS_PROPERTY*//*(Qualifier qualifier) const*/
    type["GetQualifierPress"] = static_cast<bool (Urho3D::Input::*)(Qualifier) const>(&Urho3D::Input::GetQualifierPress) ;
    /*Return the currently held down qualifiers. BIND_AS_PROPERTY*//*() const*/
    type["GetQualifiers"] = static_cast<QualifierFlags (Urho3D::Input::*)() const>(&Urho3D::Input::GetQualifiers) ;
    /*Return mouse position within window. Should only be used with a visible mouse cursor. Uses the backbuffer ( Graphics width/height) coordinates. BIND_AS_PROPERTY*//*() const*/
    type["GetMousePosition"] = static_cast<IntVector2 (Urho3D::Input::*)() const>(&Urho3D::Input::GetMousePosition) ;
    /*Return mouse movement since last frame. BIND_AS_PROPERTY*//*() const*/
    type["GetMouseMove"] = static_cast<IntVector2 (Urho3D::Input::*)() const>(&Urho3D::Input::GetMouseMove) ;
    /*Return horizontal mouse movement since last frame. BIND_AS_PROPERTY*//*() const*/
    type["GetMouseMoveX"] = static_cast<int (Urho3D::Input::*)() const>(&Urho3D::Input::GetMouseMoveX) ;
    /*Return vertical mouse movement since last frame. BIND_AS_PROPERTY*//*() const*/
    type["GetMouseMoveY"] = static_cast<int (Urho3D::Input::*)() const>(&Urho3D::Input::GetMouseMoveY) ;
    /*Return mouse wheel movement since last frame. BIND_AS_PROPERTY*//*() const*/
    type["GetMouseMoveWheel"] = static_cast<int (Urho3D::Input::*)() const>(&Urho3D::Input::GetMouseMoveWheel) ;
    /*Return input coordinate scaling. Should return non-unity on High DPI display. BIND_AS_PROPERTY*//*() const*/
    type["GetInputScale"] = static_cast<Vector2 (Urho3D::Input::*)() const>(&Urho3D::Input::GetInputScale) ;
    /*Return number of active finger touches. BIND_AS_PROPERTY*//*() const*/
    type["GetNumTouches"] = static_cast<unsigned (Urho3D::Input::*)() const>(&Urho3D::Input::GetNumTouches) ;
    /*Return active finger touch by index. BIND_AS_ALIAS_get_touches*//*(unsigned index) const*/
    type["GetTouch"] = static_cast<TouchState* (Urho3D::Input::*)(unsigned) const>(&Urho3D::Input::GetTouch) ;
    /*Return number of connected joysticks. BIND_AS_PROPERTY*//*() const*/
    type["GetNumJoysticks"] = static_cast<unsigned (Urho3D::Input::*)() const>(&Urho3D::Input::GetNumJoysticks) ;
    /*Return joystick state by ID, or null if does not exist. BIND_AS_ALIAS_get_joysticks*//*(SDL_JoystickID id)*/
    type["GetJoystick"] = static_cast<JoystickState* (Urho3D::Input::*)(SDL_JoystickID)>(&Urho3D::Input::GetJoystick) ;
    /*Return joystick state by index, or null if does not exist. 0 = first connected joystick. BIND_AS_ALIAS_get_joysticksByIndex*//*(unsigned index)*/
    type["GetJoystickByIndex"] = static_cast<JoystickState* (Urho3D::Input::*)(unsigned)>(&Urho3D::Input::GetJoystickByIndex) ;
    /*Return joystick state by name, or null if does not exist. BIND_AS_ALIAS_get_joysticksByName*//*(const String &name)*/
    type["GetJoystickByName"] = static_cast<JoystickState* (Urho3D::Input::*)(const  String &)>(&Urho3D::Input::GetJoystickByName) ;
    /*Return whether fullscreen toggle is enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetToggleFullscreen"] = static_cast<bool (Urho3D::Input::*)() const>(&Urho3D::Input::GetToggleFullscreen) ;
    /*Return whether a virtual joystick is visible. BIND_AS_PROPERTY*//*(SDL_JoystickID id) const*/
    type["IsScreenJoystickVisible"] = static_cast<bool (Urho3D::Input::*)(SDL_JoystickID) const>(&Urho3D::Input::IsScreenJoystickVisible) ;
    /*Return whether on-screen keyboard is supported. BIND_AS_PROPERTY*//*() const*/
    type["GetScreenKeyboardSupport"] = static_cast<bool (Urho3D::Input::*)() const>(&Urho3D::Input::GetScreenKeyboardSupport) ;
    /*Return whether on-screen keyboard is being shown. BIND_AS_PROPERTY*//*() const*/
    type["IsScreenKeyboardVisible"] = static_cast<bool (Urho3D::Input::*)() const>(&Urho3D::Input::IsScreenKeyboardVisible) ;
    /*Return whether touch emulation is enabled. BIND_AS_PROPERTY*//*() const*/
    type["GetTouchEmulation"] = static_cast<bool (Urho3D::Input::*)() const>(&Urho3D::Input::GetTouchEmulation) ;
    /*Return whether the operating system mouse cursor is visible. BIND_AS_PROPERTY*//*() const*/
    type["IsMouseVisible"] = static_cast<bool (Urho3D::Input::*)() const>(&Urho3D::Input::IsMouseVisible) ;
    /*Return whether the mouse is currently being grabbed by an operation. BIND_AS_PROPERTY*//*() const*/
    type["IsMouseGrabbed"] = static_cast<bool (Urho3D::Input::*)() const>(&Urho3D::Input::IsMouseGrabbed) ;
    /*Return whether the mouse is locked to the window. BIND_AS_PROPERTY*//*() const*/
    type["IsMouseLocked"] = static_cast<bool (Urho3D::Input::*)() const>(&Urho3D::Input::IsMouseLocked) ;
    /*Return the mouse mode. BIND_AS_PROPERTY*//*() const*/
    type["GetMouseMode"] = static_cast<MouseMode (Urho3D::Input::*)() const>(&Urho3D::Input::GetMouseMode) ;
    /*Return whether application window has input focus. BIND_AS_ALIAS_get_focus*//*()*/
    type["HasFocus"] = static_cast<bool (Urho3D::Input::*)()>(&Urho3D::Input::HasFocus) ;
    /*Return whether application window is minimized. BIND_AS_PROPERTY*//*() const*/
    type["IsMinimized"] = static_cast<bool (Urho3D::Input::*)() const>(&Urho3D::Input::IsMinimized) ;
    type["SetMouseVisible"] = sol::overload(
        static_cast<void (Urho3D::Input::*)(bool, bool)>(&Urho3D::Input::SetMouseVisible) ,
        [](Urho3D::Input& self, bool enable){ self.SetMouseVisible(enable); } );
    type["SetMouseGrabbed"] = sol::overload(
        static_cast<void (Urho3D::Input::*)(bool, bool)>(&Urho3D::Input::SetMouseGrabbed) ,
        [](Urho3D::Input& self, bool grab){ self.SetMouseGrabbed(grab); } );
    type["SetMouseMode"] = sol::overload(
        static_cast<void (Urho3D::Input::*)(MouseMode, bool)>(&Urho3D::Input::SetMouseMode) ,
        [](Urho3D::Input& self, MouseMode mode){ self.SetMouseMode(mode); } );
    type["AddScreenJoystick"] = sol::overload(
        static_cast<SDL_JoystickID (Urho3D::Input::*)(XMLFile *, XMLFile *)>(&Urho3D::Input::AddScreenJoystick) ,
        [](Urho3D::Input& self, XMLFile * layoutFile){ return self.AddScreenJoystick(layoutFile); },
        [](Urho3D::Input& self){ return self.AddScreenJoystick(); } );
    type["hasFocus"] = sol::property(static_cast<bool (Urho3D::Input::*)()>(&Urho3D::Input::HasFocus) );
    type["inputScale"] = sol::property(static_cast<Vector2 (Urho3D::Input::*)() const>(&Urho3D::Input::GetInputScale) );
    type["joystick"] = sol::property(static_cast<JoystickState* (Urho3D::Input::*)(SDL_JoystickID)>(&Urho3D::Input::GetJoystick) );
    type["joystickByIndex"] = sol::property(static_cast<JoystickState* (Urho3D::Input::*)(unsigned)>(&Urho3D::Input::GetJoystickByIndex) );
    type["joystickByName"] = sol::property(static_cast<JoystickState* (Urho3D::Input::*)(const  String &)>(&Urho3D::Input::GetJoystickByName) );
    type["keyDown"] = sol::property(static_cast<bool (Urho3D::Input::*)(Key) const>(&Urho3D::Input::GetKeyDown) );
    type["keyPress"] = sol::property(static_cast<bool (Urho3D::Input::*)(Key) const>(&Urho3D::Input::GetKeyPress) );
    type["minimized"] = sol::property(static_cast<bool (Urho3D::Input::*)() const>(&Urho3D::Input::IsMinimized) );
    type["mouseButtonDown"] = sol::property(static_cast<bool (Urho3D::Input::*)(MouseButtonFlags) const>(&Urho3D::Input::GetMouseButtonDown) );
    type["mouseButtonPress"] = sol::property(static_cast<bool (Urho3D::Input::*)(MouseButtonFlags) const>(&Urho3D::Input::GetMouseButtonPress) );
    type["mouseGrabbed"] = sol::property(static_cast<bool (Urho3D::Input::*)() const>(&Urho3D::Input::IsMouseGrabbed) );
    type["mouseLocked"] = sol::property(static_cast<bool (Urho3D::Input::*)() const>(&Urho3D::Input::IsMouseLocked) );
    type["mouseMode"] = sol::property(static_cast<MouseMode (Urho3D::Input::*)() const>(&Urho3D::Input::GetMouseMode) );
    type["mouseMove"] = sol::property(static_cast<IntVector2 (Urho3D::Input::*)() const>(&Urho3D::Input::GetMouseMove) );
    type["mouseMoveWheel"] = sol::property(static_cast<int (Urho3D::Input::*)() const>(&Urho3D::Input::GetMouseMoveWheel) );
    type["mouseMoveX"] = sol::property(static_cast<int (Urho3D::Input::*)() const>(&Urho3D::Input::GetMouseMoveX) );
    type["mouseMoveY"] = sol::property(static_cast<int (Urho3D::Input::*)() const>(&Urho3D::Input::GetMouseMoveY) );
    type["mousePosition"] = sol::property(static_cast<IntVector2 (Urho3D::Input::*)() const>(&Urho3D::Input::GetMousePosition) 
        , static_cast<void (Urho3D::Input::*)(const  IntVector2 &)>(&Urho3D::Input::SetMousePosition) );
    type["mouseVisible"] = sol::property(static_cast<bool (Urho3D::Input::*)() const>(&Urho3D::Input::IsMouseVisible) );
    type["numJoysticks"] = sol::property(static_cast<unsigned (Urho3D::Input::*)() const>(&Urho3D::Input::GetNumJoysticks) );
    type["numTouches"] = sol::property(static_cast<unsigned (Urho3D::Input::*)() const>(&Urho3D::Input::GetNumTouches) );
    type["qualifierDown"] = sol::property(static_cast<bool (Urho3D::Input::*)(Qualifier) const>(&Urho3D::Input::GetQualifierDown) );
    type["qualifierPress"] = sol::property(static_cast<bool (Urho3D::Input::*)(Qualifier) const>(&Urho3D::Input::GetQualifierPress) );
    type["qualifiers"] = sol::property(static_cast<QualifierFlags (Urho3D::Input::*)() const>(&Urho3D::Input::GetQualifiers) );
    type["scancodeDown"] = sol::property(static_cast<bool (Urho3D::Input::*)(Scancode) const>(&Urho3D::Input::GetScancodeDown) );
    type["scancodePress"] = sol::property(static_cast<bool (Urho3D::Input::*)(Scancode) const>(&Urho3D::Input::GetScancodePress) );
    type["screenJoystickVisible"] = sol::property(static_cast<bool (Urho3D::Input::*)(SDL_JoystickID) const>(&Urho3D::Input::IsScreenJoystickVisible) 
        , static_cast<void (Urho3D::Input::*)(SDL_JoystickID, bool)>(&Urho3D::Input::SetScreenJoystickVisible) );
    type["screenKeyboardSupport"] = sol::property(static_cast<bool (Urho3D::Input::*)() const>(&Urho3D::Input::GetScreenKeyboardSupport) );
    type["screenKeyboardVisible"] = sol::property(static_cast<bool (Urho3D::Input::*)() const>(&Urho3D::Input::IsScreenKeyboardVisible) 
        , static_cast<void (Urho3D::Input::*)(bool)>(&Urho3D::Input::SetScreenKeyboardVisible) );
    type["toggleFullscreen"] = sol::property(static_cast<bool (Urho3D::Input::*)() const>(&Urho3D::Input::GetToggleFullscreen) 
        , static_cast<void (Urho3D::Input::*)(bool)>(&Urho3D::Input::SetToggleFullscreen) );
    type["touch"] = sol::property(static_cast<TouchState* (Urho3D::Input::*)(unsigned) const>(&Urho3D::Input::GetTouch) );
    type["touchEmulation"] = sol::property(static_cast<bool (Urho3D::Input::*)() const>(&Urho3D::Input::GetTouchEmulation) 
        , static_cast<void (Urho3D::Input::*)(bool)>(&Urho3D::Input::SetTouchEmulation) );

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Input/Input.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Input/Input.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D/Container/Vector.h>
#include <Urho3D/UI/UIElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_JoystickState(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::JoystickState>( "JoystickState"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    /*Initialize the number of buttons, axes and hats and set them to neutral state.*//*(unsigned numButtons, unsigned numAxes, unsigned numHats)*/
    type["Initialize"] = static_cast<void (Urho3D::JoystickState::*)(unsigned, unsigned, unsigned)>(&Urho3D::JoystickState::Initialize) ;
    /*Reset button, axis and hat states to neutral.*//*()*/
    type["Reset"] = static_cast<void (Urho3D::JoystickState::*)()>(&Urho3D::JoystickState::Reset) ;
    /*Return whether is a game controller. Game controllers will use standardized axis and button mappings. BIND_AS_PROPERTY*//*() const*/
    type["IsController"] = static_cast<bool (Urho3D::JoystickState::*)() const>(&Urho3D::JoystickState::IsController) ;
    /*Return number of buttons. BIND_AS_PROPERTY*//*() const*/
    type["GetNumButtons"] = static_cast<unsigned (Urho3D::JoystickState::*)() const>(&Urho3D::JoystickState::GetNumButtons) ;
    /*Return number of axes. BIND_AS_PROPERTY*//*() const*/
    type["GetNumAxes"] = static_cast<unsigned (Urho3D::JoystickState::*)() const>(&Urho3D::JoystickState::GetNumAxes) ;
    /*Return number of hats. BIND_AS_PROPERTY*//*() const*/
    type["GetNumHats"] = static_cast<unsigned (Urho3D::JoystickState::*)() const>(&Urho3D::JoystickState::GetNumHats) ;
    /*Check if a button is held down. BIND_AS_PROPERTY*//*(unsigned index) const*/
    type["GetButtonDown"] = static_cast<bool (Urho3D::JoystickState::*)(unsigned) const>(&Urho3D::JoystickState::GetButtonDown) ;
    /*Check if a button has been pressed on this frame. BIND_AS_PROPERTY*//*(unsigned index) const*/
    type["GetButtonPress"] = static_cast<bool (Urho3D::JoystickState::*)(unsigned) const>(&Urho3D::JoystickState::GetButtonPress) ;
    /*Return axis position. BIND_AS_PROPERTY*//*(unsigned index) const*/
    type["GetAxisPosition"] = static_cast<float (Urho3D::JoystickState::*)(unsigned) const>(&Urho3D::JoystickState::GetAxisPosition) ;
    /*Return hat position. BIND_AS_PROPERTY*//*(unsigned index) const*/
    type["GetHatPosition"] = static_cast<int (Urho3D::JoystickState::*)(unsigned) const>(&Urho3D::JoystickState::GetHatPosition) ;
    type["axisPosition"] = sol::property(static_cast<float (Urho3D::JoystickState::*)(unsigned) const>(&Urho3D::JoystickState::GetAxisPosition) );
    type["buttonDown"] = sol::property(static_cast<bool (Urho3D::JoystickState::*)(unsigned) const>(&Urho3D::JoystickState::GetButtonDown) );
    type["buttonPress"] = sol::property(static_cast<bool (Urho3D::JoystickState::*)(unsigned) const>(&Urho3D::JoystickState::GetButtonPress) );
    type["controller"] = sol::property(static_cast<bool (Urho3D::JoystickState::*)() const>(&Urho3D::JoystickState::IsController) );
    type["hatPosition"] = sol::property(static_cast<int (Urho3D::JoystickState::*)(unsigned) const>(&Urho3D::JoystickState::GetHatPosition) );
    type["numAxes"] = sol::property(static_cast<unsigned (Urho3D::JoystickState::*)() const>(&Urho3D::JoystickState::GetNumAxes) );
    type["numButtons"] = sol::property(static_cast<unsigned (Urho3D::JoystickState::*)() const>(&Urho3D::JoystickState::GetNumButtons) );
    type["numHats"] = sol::property(static_cast<unsigned (Urho3D::JoystickState::*)() const>(&Urho3D::JoystickState::GetNumHats) );
# if 0 // SKIPPED
    type["joystick_"] = &Urho3D::JoystickState::joystick_;
# endif
    type["joystickID_"] = &Urho3D::JoystickState::joystickID_;
# if 0 // SKIPPED
    type["controller_"] = &Urho3D::JoystickState::controller_;
# endif
    type["screenJoystick_"] = &Urho3D::JoystickState::screenJoystick_;
    type["name_"] = &Urho3D::JoystickState::name_;
    type["buttons_"] = &Urho3D::JoystickState::buttons_;
    type["buttonPress_"] = &Urho3D::JoystickState::buttonPress_;
    type["axes_"] = &Urho3D::JoystickState::axes_;
    type["hats_"] = &Urho3D::JoystickState::hats_;

}


// Generated File
// Based on: /home/nathan/Projects/u3d/Source/Urho3D/Input/Input.h


#define SOL_ALL_SAFETIES_ON 1
#define SOL_PRINT_ERRORS    1

#include <sol-urho.h>

#include <Urho3D/Input/Input.h>
#include <Urho3D/Container/Ptr.h>
#include <Urho3D/Math/Vector2.h>
#include <Urho3D/UI/UIElement.h>

extern Urho3D::HashMap<Urho3D::StringHash, std::function<sol::object(Urho3D::Object*,sol::state_view)>> casters;


void bindClass_Urho3D_TouchState(sol::state_view& lua)
{
    
using namespace Urho3D;

auto type = lua.new_usertype<Urho3D::TouchState>( "TouchState"
// Base Classes
    , sol::base_classes, sol::bases<>()

);

// Constructors

    /*NONE*/

// Members

    /*Return last touched  UI element, used by scripting integration. BIND_AS_PROPERTY*//*()*/
    type["GetTouchedElement"] = [](Urho3D::TouchState& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTouchedElement());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        };
    type["touchedElement"] = sol::property([](Urho3D::TouchState& self, sol::this_state sol_state)->sol::object{
            auto o = SharedPtr<Urho3D::Object>(self.GetTouchedElement());
            sol::state_view lua(sol_state);
            auto real_type = o->GetType();
            if (!o || !casters.Contains(real_type))
                return sol::nil;
            return casters[real_type](o,lua);
        });
    type["touchID_"] = &Urho3D::TouchState::touchID_;
    type["position_"] = &Urho3D::TouchState::position_;
    type["lastPosition_"] = &Urho3D::TouchState::lastPosition_;
    type["delta_"] = &Urho3D::TouchState::delta_;
    type["pressure_"] = &Urho3D::TouchState::pressure_;
    type["touchedElement_"] = &Urho3D::TouchState::touchedElement_;

}

