/* threading/native/ThreadWin32 header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___threading_native_ThreadWin32_fwd___
#define ___threading_native_ThreadWin32_fwd___

#if defined(__WIN32__) || defined(__WIN64__)
#include <windows.h>
#endif

#if defined(__WIN32__) || defined(__WIN64__)
struct _threading_native_ThreadWin32__ThreadWin32;
typedef struct _threading_native_ThreadWin32__ThreadWin32 threading_native_ThreadWin32__ThreadWin32;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _threading_native_ThreadWin32__ThreadWin32Class;
typedef struct _threading_native_ThreadWin32__ThreadWin32Class threading_native_ThreadWin32__ThreadWin32Class;
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
#include <sdk/threading/Thread-fwd.h>
#include <sdk/native/win32/types-fwd.h>
#include <sdk/native/win32/errors-fwd.h>
#if defined(__WIN32__) || defined(__WIN64__)
threading_native_ThreadWin32__ThreadWin32Class *threading_native_ThreadWin32__ThreadWin32_class();
threading_native_ThreadWin32__ThreadWin32* threading_native_ThreadWin32__ThreadWin32_new_win(lang_types__Closure _code);
void threading_native_ThreadWin32__ThreadWin32_init_win(threading_native_ThreadWin32__ThreadWin32* this, lang_types__Closure _code);
lang_Numbers__Int threading_native_ThreadWin32__ThreadWin32_start(threading_native_ThreadWin32__ThreadWin32* this);
lang_Numbers__Int threading_native_ThreadWin32__ThreadWin32_start_impl(threading_native_ThreadWin32__ThreadWin32* this);
lang_Numbers__Int threading_native_ThreadWin32__ThreadWin32_wait(threading_native_ThreadWin32__ThreadWin32* this);
lang_Numbers__Int threading_native_ThreadWin32__ThreadWin32_wait_impl(threading_native_ThreadWin32__ThreadWin32* this);
void threading_native_ThreadWin32__ThreadWin32___defaults__(threading_native_ThreadWin32__ThreadWin32* this);
void threading_native_ThreadWin32__ThreadWin32___defaults___impl(threading_native_ThreadWin32__ThreadWin32* this);
void threading_native_ThreadWin32__ThreadWin32___load__();
#endif
void threading_native_ThreadWin32_load();
#if defined(__WIN32__) || defined(__WIN64__)
#define threading_native_ThreadWin32__CreateThread CreateThread

#endif
#if defined(__WIN32__) || defined(__WIN64__)
#define threading_native_ThreadWin32__WaitForSingleObject WaitForSingleObject

#endif

#endif // ___threading_native_ThreadWin32_fwd___
