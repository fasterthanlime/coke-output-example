/* threading/native/ThreadLocalWin32 header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___threading_native_ThreadLocalWin32___
#define ___threading_native_ThreadLocalWin32___

#include <sdk/threading/native/ThreadLocalWin32-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/threading/Thread.h>

#if defined(__WIN32__) || defined(__WIN64__)
struct _threading_native_ThreadLocalWin32__ThreadLocalWin32 {
    struct _threading_Thread__ThreadLocal __super__;
    structs_HashMap__HashMap* values;
    threading_Thread__Mutex* valuesMutex;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _threading_native_ThreadLocalWin32__ThreadLocalWin32Class {
    struct _threading_Thread__ThreadLocalClass __super__;
    threading_native_ThreadLocalWin32__ThreadLocalWin32* (*new_windows)(lang_types__Class*);
    void (*init_windows)(threading_native_ThreadLocalWin32__ThreadLocalWin32*);
};


#endif
#ifdef OOC_FROM_C
#define GetCurrentThreadId() threading_native_ThreadLocalWin32__GetCurrentThreadId()
#define ThreadLocalWin32 threading_native_ThreadLocalWin32__ThreadLocalWin32
#define ThreadLocalWin32_class() threading_native_ThreadLocalWin32__ThreadLocalWin32_class()
#define ThreadLocalWin32Class threading_native_ThreadLocalWin32__ThreadLocalWin32Class
#define ThreadLocalWin32Class_class() threading_native_ThreadLocalWin32__ThreadLocalWin32Class_class()
#define ThreadLocalWin32_new_windows() (void*) threading_native_ThreadLocalWin32__ThreadLocalWin32_new_windows()
#define ThreadLocalWin32_init_windows(_this_) threading_native_ThreadLocalWin32__ThreadLocalWin32_init_windows((void*) (_this_))
#define ThreadLocalWin32_set(_this_, value) threading_native_ThreadLocalWin32__ThreadLocalWin32_set((void*) (_this_), (value))
#define ThreadLocalWin32_get(_this_, __genericReturn94) threading_native_ThreadLocalWin32__ThreadLocalWin32_get((void*) (_this_), (__genericReturn94))
#define ThreadLocalWin32_hasValue__quest(_this_) threading_native_ThreadLocalWin32__ThreadLocalWin32_hasValue__quest((void*) (_this_))
#define ThreadLocalWin32___defaults__(_this_) threading_native_ThreadLocalWin32__ThreadLocalWin32___defaults__((void*) (_this_))
#define ThreadLocalWin32___load__() threading_native_ThreadLocalWin32__ThreadLocalWin32___load__()
#endif

#endif // ___threading_native_ThreadLocalWin32___
