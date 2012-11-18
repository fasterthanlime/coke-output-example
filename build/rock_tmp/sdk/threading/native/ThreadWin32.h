/* threading/native/ThreadWin32 header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___threading_native_ThreadWin32___
#define ___threading_native_ThreadWin32___

#include <sdk/threading/native/ThreadWin32-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/threading/Thread.h>

#if defined(__WIN32__) || defined(__WIN64__)
struct _threading_native_ThreadWin32__ThreadWin32 {
    struct _threading_Thread__Thread __super__;
    native_win32_types__Handle handle;
    lang_Numbers__Long threadID;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _threading_native_ThreadWin32__ThreadWin32Class {
    struct _threading_Thread__ThreadClass __super__;
    threading_native_ThreadWin32__ThreadWin32* (*new_win)(lang_types__Closure);
    void (*init_win)(threading_native_ThreadWin32__ThreadWin32*, lang_types__Closure);
};


#endif
#ifdef OOC_FROM_C
#define CreateThread(...) threading_native_ThreadWin32__CreateThread(__VA_ARGS__)
#define WaitForSingleObject(...) threading_native_ThreadWin32__WaitForSingleObject(__VA_ARGS__)
#define ThreadWin32 threading_native_ThreadWin32__ThreadWin32
#define ThreadWin32_class() threading_native_ThreadWin32__ThreadWin32_class()
#define ThreadWin32Class threading_native_ThreadWin32__ThreadWin32Class
#define ThreadWin32Class_class() threading_native_ThreadWin32__ThreadWin32Class_class()
#define ThreadWin32_new_win(_code) (void*) threading_native_ThreadWin32__ThreadWin32_new_win((_code))
#define ThreadWin32_init_win(_this_, _code) threading_native_ThreadWin32__ThreadWin32_init_win((void*) (_this_), (_code))
#define ThreadWin32_start(_this_) threading_native_ThreadWin32__ThreadWin32_start((void*) (_this_))
#define ThreadWin32_wait(_this_) threading_native_ThreadWin32__ThreadWin32_wait((void*) (_this_))
#define ThreadWin32___defaults__(_this_) threading_native_ThreadWin32__ThreadWin32___defaults__((void*) (_this_))
#define ThreadWin32___load__() threading_native_ThreadWin32__ThreadWin32___load__()
#endif

#endif // ___threading_native_ThreadWin32___
