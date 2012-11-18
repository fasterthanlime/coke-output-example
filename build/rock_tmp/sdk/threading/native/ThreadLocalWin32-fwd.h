/* threading/native/ThreadLocalWin32 header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___threading_native_ThreadLocalWin32_fwd___
#define ___threading_native_ThreadLocalWin32_fwd___

#include <unistd.h>
#if defined(__WIN32__) || defined(__WIN64__)
#include <windows.h>
#endif

#if defined(__WIN32__) || defined(__WIN64__)
struct _threading_native_ThreadLocalWin32__ThreadLocalWin32;
typedef struct _threading_native_ThreadLocalWin32__ThreadLocalWin32 threading_native_ThreadLocalWin32__ThreadLocalWin32;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _threading_native_ThreadLocalWin32__ThreadLocalWin32Class;
typedef struct _threading_native_ThreadLocalWin32__ThreadLocalWin32Class threading_native_ThreadLocalWin32__ThreadLocalWin32Class;
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
#include <sdk/structs/HashMap-fwd.h>
#include <sdk/threading/Thread-fwd.h>
#include <sdk/threading/native/ThreadWin32-fwd.h>
#if defined(__WIN32__) || defined(__WIN64__)
threading_native_ThreadLocalWin32__ThreadLocalWin32Class *threading_native_ThreadLocalWin32__ThreadLocalWin32_class();
threading_native_ThreadLocalWin32__ThreadLocalWin32* threading_native_ThreadLocalWin32__ThreadLocalWin32_new_windows(lang_types__Class* T);
void threading_native_ThreadLocalWin32__ThreadLocalWin32_init_windows(threading_native_ThreadLocalWin32__ThreadLocalWin32* this);
void threading_native_ThreadLocalWin32__ThreadLocalWin32_set(threading_native_ThreadLocalWin32__ThreadLocalWin32* this, uint8_t* value);
void threading_native_ThreadLocalWin32__ThreadLocalWin32_set_impl(threading_native_ThreadLocalWin32__ThreadLocalWin32* this, uint8_t* value);
void threading_native_ThreadLocalWin32__ThreadLocalWin32_get(threading_native_ThreadLocalWin32__ThreadLocalWin32* this, uint8_t* __genericReturn94);
void threading_native_ThreadLocalWin32__ThreadLocalWin32_get_impl(threading_native_ThreadLocalWin32__ThreadLocalWin32* this, uint8_t* __genericReturn94);
lang_types__Bool threading_native_ThreadLocalWin32__ThreadLocalWin32_hasValue__quest(threading_native_ThreadLocalWin32__ThreadLocalWin32* this);
lang_types__Bool threading_native_ThreadLocalWin32__ThreadLocalWin32_hasValue__quest_impl(threading_native_ThreadLocalWin32__ThreadLocalWin32* this);
void threading_native_ThreadLocalWin32__ThreadLocalWin32___defaults__(threading_native_ThreadLocalWin32__ThreadLocalWin32* this);
void threading_native_ThreadLocalWin32__ThreadLocalWin32___defaults___impl(threading_native_ThreadLocalWin32__ThreadLocalWin32* this);
void threading_native_ThreadLocalWin32__ThreadLocalWin32___load__();
#endif
void threading_native_ThreadLocalWin32_load();
#if defined(__WIN32__) || defined(__WIN64__)
#define threading_native_ThreadLocalWin32__GetCurrentThreadId GetCurrentThreadId

#endif

#endif // ___threading_native_ThreadLocalWin32_fwd___
