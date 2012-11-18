/* os/native/PipeWin32 header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___os_native_PipeWin32_fwd___
#define ___os_native_PipeWin32_fwd___

#if defined(__WIN32__) || defined(__WIN64__)
#include <windows.h>
#endif

#if defined(__WIN32__) || defined(__WIN64__)
typedef SECURITY_ATTRIBUTES os_native_PipeWin32__SecurityAttributes;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _os_native_PipeWin32__PipeWin32;
typedef struct _os_native_PipeWin32__PipeWin32 os_native_PipeWin32__PipeWin32;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _os_native_PipeWin32__SecurityAttributesClass;
typedef struct _os_native_PipeWin32__SecurityAttributesClass os_native_PipeWin32__SecurityAttributesClass;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _os_native_PipeWin32__PipeWin32Class;
typedef struct _os_native_PipeWin32__PipeWin32Class os_native_PipeWin32__PipeWin32Class;
#endif

#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/BufferIterator-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Character-fwd.h>
#include <sdk/lang/VarArgs-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Buffer-fwd.h>
#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/Abstractions-fwd.h>
#include <sdk/lang/Format-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/os/Pipe-fwd.h>
#include <sdk/native/win32/types-fwd.h>
#include <sdk/native/win32/errors-fwd.h>
#if defined(__WIN32__) || defined(__WIN64__)
os_native_PipeWin32__SecurityAttributesClass *os_native_PipeWin32__SecurityAttributes_class();
void os_native_PipeWin32__SecurityAttributes___load__();
#endif
#if defined(__WIN32__) || defined(__WIN64__)
os_native_PipeWin32__PipeWin32Class *os_native_PipeWin32__PipeWin32_class();
os_native_PipeWin32__PipeWin32* os_native_PipeWin32__PipeWin32_new_twos();
void os_native_PipeWin32__PipeWin32_init_twos(os_native_PipeWin32__PipeWin32* this);
lang_types__Pointer os_native_PipeWin32__PipeWin32_read(os_native_PipeWin32__PipeWin32* this, lang_Numbers__Int bytesRequested);
lang_types__Pointer os_native_PipeWin32__PipeWin32_read_impl(os_native_PipeWin32__PipeWin32* this, lang_Numbers__Int bytesRequested);
lang_Numbers__Int os_native_PipeWin32__PipeWin32_write(os_native_PipeWin32__PipeWin32* this, lang_types__Pointer data, lang_Numbers__Int len);
lang_Numbers__Int os_native_PipeWin32__PipeWin32_write_impl(os_native_PipeWin32__PipeWin32* this, lang_types__Pointer data, lang_Numbers__Int len);
lang_Numbers__Int os_native_PipeWin32__PipeWin32_close(os_native_PipeWin32__PipeWin32* this, lang_Character__Char mode);
lang_Numbers__Int os_native_PipeWin32__PipeWin32_close_impl(os_native_PipeWin32__PipeWin32* this, lang_Character__Char mode);
void os_native_PipeWin32__PipeWin32___defaults__(os_native_PipeWin32__PipeWin32* this);
void os_native_PipeWin32__PipeWin32___defaults___impl(os_native_PipeWin32__PipeWin32* this);
void os_native_PipeWin32__PipeWin32___load__();
#endif
void os_native_PipeWin32_load();
#if defined(__WIN32__) || defined(__WIN64__)
#define os_native_PipeWin32__CreatePipe CreatePipe

#endif
#if defined(__WIN32__) || defined(__WIN64__)
#define os_native_PipeWin32__ReadFile ReadFile

#endif
#if defined(__WIN32__) || defined(__WIN64__)
#define os_native_PipeWin32__WriteFile WriteFile

#endif
#if defined(__WIN32__) || defined(__WIN64__)
#define os_native_PipeWin32__CloseHandle CloseHandle

#endif
#if defined(__WIN32__) || defined(__WIN64__)
#define os_native_PipeWin32__PeekNamedPipe PeekNamedPipe

#endif

#endif // ___os_native_PipeWin32_fwd___
