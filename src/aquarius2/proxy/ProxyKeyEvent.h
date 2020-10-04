#pragma once
#include "../def/def.h"

class AQUADLL ProxyKeyEvent : public refcounted {
public:
    ProxyKeyEvent(void* ptr);
    ~ProxyKeyEvent();

public:
    static shrewd_ptr<ProxyKeyEvent> Create();

public:
    // is valid
    bool IsValid();


  ///
  // The type of keyboard event.
  ///
  void SetType(int type);

  ///
  // Bit flags describing any pressed modifier keys. See
  // cef_event_flags_t for values.
  ///
  void SetModifiers(int modifiers);

  ///
  // The Windows key code for the key event. This value is used by the DOM
  // specification. Sometimes it comes directly from the event (i.e. on
  // Windows) and sometimes it's determined using a mapping function. See
  // WebCore/platform/chromium/KeyboardCodes.h for the list of values.
  ///
  void SetWindowsKeyCode(int windows_key_code);

  ///
  // The actual key code genenerated by the platform.
  ///
  void SetNativeKeyCode(int native_key_code);

  ///
  // Indicates whether the event is considered a "system key" event (see
  // http://msdn.microsoft.com/en-us/library/ms646286(VS.85).aspx for details).
  // This value will always be false on non-Windows platforms.
  ///
  void SetIsSystemKey(int is_system_key);

  ///
  // The character generated by the keystroke.
  ///
  void SetCharacter(int character);

  ///
  // Same as |character| but unmodified by any concurrently-held modifiers
  // (except shift). This is useful for working out shortcut keys.
  ///
  void SetUnmodifiedCharacter(int unmodified_character);

  ///
  // True if the focus is currently on an editable field on the page. This is
  // useful for determining if standard key events should be intercepted.
  ///
  void SetFocusOnEditableField(int focus_on_editable_field);

public:
    PRIME_IMPLEMENT_REFCOUNTING(ProxyKeyEvent);
    AQUA_DECL_PUBLIC_ORIGIN;

private:
    void* _rawptr;
};