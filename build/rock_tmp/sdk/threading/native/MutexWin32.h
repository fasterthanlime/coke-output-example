/* threading/native/MutexWin32 header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___threading_native_MutexWin32___
#define ___threading_native_MutexWin32___

#include <sdk/threading/native/MutexWin32-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/threading/Thread.h>

#if defined(__WIN32__) || defined(__WIN64__)
struct _threading_native_MutexWin32__MutexWin32 {
    struct _threading_Thread__Mutex __super__;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _threading_native_MutexWin32__RecursiveMutexWin32 {
    struct _threading_Thread__Mutex __super__;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _threading_native_MutexWin32__MutexWin32Class {
    struct _threading_Thread__MutexClass __super__;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _threading_native_MutexWin32__RecursiveMutexWin32Class {
    struct _threading_Thread__MutexClass __super__;
};


#endif
#ifdef OOC_FROM_C
#define CreateMutex(, , ) threading_native_MutexWin32__CreateMutex((void*) (), (), (void*) ())
#define ReleaseMutex() threading_native_MutexWin32__ReleaseMutex(())
#define CloseHandle() threading_native_MutexWin32__CloseHandle(())
#define WaitForSingleObject(...) threading_native_MutexWin32__WaitForSingleObject(__VA_ARGS__)
#define MutexWin32 threading_native_MutexWin32__MutexWin32
#define MutexWin32_class() threading_native_MutexWin32__MutexWin32_class()
#define MutexWin32Class threading_native_MutexWin32__MutexWin32Class
#define MutexWin32Class_class() threading_native_MutexWin32__MutexWin32Class_class()
#define MutexWin32_init(_this_) threading_native_MutexWin32__MutexWin32_init((void*) (_this_))
#define MutexWin32_new() (void*) threading_native_MutexWin32__MutexWin32_new()
#define MutexWin32___defaults__(_this_) threading_native_MutexWin32__MutexWin32___defaults__((void*) (_this_))
#define MutexWin32___load__() threading_native_MutexWin32__MutexWin32___load__()
#define RecursiveMutexWin32 threading_native_MutexWin32__RecursiveMutexWin32
#define RecursiveMutexWin32_class() threading_native_MutexWin32__RecursiveMutexWin32_class()
#define RecursiveMutexWin32Class threading_native_MutexWin32__RecursiveMutexWin32Class
#define RecursiveMutexWin32Class_class() threading_native_MutexWin32__RecursiveMutexWin32Class_class()
#define RecursiveMutexWin32_init(_this_) threading_native_MutexWin32__RecursiveMutexWin32_init((void*) (_this_))
#define RecursiveMutexWin32_new() (void*) threading_native_MutexWin32__RecursiveMutexWin32_new()
#define RecursiveMutexWin32___defaults__(_this_) threading_native_MutexWin32__RecursiveMutexWin32___defaults__((void*) (_this_))
#define RecursiveMutexWin32___load__() threading_native_MutexWin32__RecursiveMutexWin32___load__()
#endif

#endif // ___threading_native_MutexWin32___
