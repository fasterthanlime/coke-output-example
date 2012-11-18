/* threading/native/MutexWin32 header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___threading_native_MutexWin32_fwd___
#define ___threading_native_MutexWin32_fwd___

#if defined(__WIN32__) || defined(__WIN64__)
#include <windows.h>
#endif

#if defined(__WIN32__) || defined(__WIN64__)
struct _threading_native_MutexWin32__MutexWin32;
typedef struct _threading_native_MutexWin32__MutexWin32 threading_native_MutexWin32__MutexWin32;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _threading_native_MutexWin32__RecursiveMutexWin32;
typedef struct _threading_native_MutexWin32__RecursiveMutexWin32 threading_native_MutexWin32__RecursiveMutexWin32;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _threading_native_MutexWin32__MutexWin32Class;
typedef struct _threading_native_MutexWin32__MutexWin32Class threading_native_MutexWin32__MutexWin32Class;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _threading_native_MutexWin32__RecursiveMutexWin32Class;
typedef struct _threading_native_MutexWin32__RecursiveMutexWin32Class threading_native_MutexWin32__RecursiveMutexWin32Class;
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
threading_native_MutexWin32__MutexWin32Class *threading_native_MutexWin32__MutexWin32_class();
void threading_native_MutexWin32__MutexWin32_init(threading_native_MutexWin32__MutexWin32* this);
threading_Thread__Mutex* threading_native_MutexWin32__MutexWin32_new();
void threading_native_MutexWin32__MutexWin32___defaults__(threading_native_MutexWin32__MutexWin32* this);
void threading_native_MutexWin32__MutexWin32___defaults___impl(threading_native_MutexWin32__MutexWin32* this);
void threading_native_MutexWin32__MutexWin32___load__();
#endif
#if defined(__WIN32__) || defined(__WIN64__)
threading_native_MutexWin32__RecursiveMutexWin32Class *threading_native_MutexWin32__RecursiveMutexWin32_class();
void threading_native_MutexWin32__RecursiveMutexWin32_init(threading_native_MutexWin32__RecursiveMutexWin32* this);
threading_Thread__RecursiveMutex* threading_native_MutexWin32__RecursiveMutexWin32_new();
void threading_native_MutexWin32__RecursiveMutexWin32___defaults__(threading_native_MutexWin32__RecursiveMutexWin32* this);
void threading_native_MutexWin32__RecursiveMutexWin32___defaults___impl(threading_native_MutexWin32__RecursiveMutexWin32* this);
void threading_native_MutexWin32__RecursiveMutexWin32___load__();
#endif
void threading_native_MutexWin32_load();
#if defined(__WIN32__) || defined(__WIN64__)
#define threading_native_MutexWin32__CreateMutex CreateMutex

#endif
#if defined(__WIN32__) || defined(__WIN64__)
#define threading_native_MutexWin32__ReleaseMutex ReleaseMutex

#endif
#if defined(__WIN32__) || defined(__WIN64__)
#define threading_native_MutexWin32__CloseHandle CloseHandle

#endif
#if defined(__WIN32__) || defined(__WIN64__)
#define threading_native_MutexWin32__WaitForSingleObject WaitForSingleObject

#endif
#if defined(__WIN32__) || defined(__WIN64__)
void ooc_mutex_lock(threading_Thread__Mutex* m);
#endif
#if defined(__WIN32__) || defined(__WIN64__)
void ooc_mutex_unlock(threading_Thread__Mutex* m);
#endif
#if defined(__WIN32__) || defined(__WIN64__)
void ooc_mutex_destroy(threading_Thread__Mutex* m);
#endif
#if defined(__WIN32__) || defined(__WIN64__)
void ooc_recursive_mutex_lock(threading_Thread__RecursiveMutex* m);
#endif
#if defined(__WIN32__) || defined(__WIN64__)
void ooc_recursive_mutex_unlock(threading_Thread__RecursiveMutex* m);
#endif
#if defined(__WIN32__) || defined(__WIN64__)
void ooc_recursive_mutex_destroy(threading_Thread__RecursiveMutex* m);
#endif

#endif // ___threading_native_MutexWin32_fwd___
