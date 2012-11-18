/* threading/native/MutexUnix header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___threading_native_MutexUnix___
#define ___threading_native_MutexUnix___

#include <sdk/threading/native/MutexUnix-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/threading/Thread.h>

#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_MutexUnix__MutexUnix {
    struct _threading_Thread__Mutex __super__;
};


#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_MutexUnix__RecursiveMutexUnix {
    struct _threading_Thread__Mutex __super__;
};


#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_MutexUnix__PThreadMutexClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_MutexUnix__PThreadMutexAttrClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_MutexUnix__MutexUnixClass {
    struct _threading_Thread__MutexClass __super__;
};


#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_MutexUnix__RecursiveMutexUnixClass {
    struct _threading_Thread__MutexClass __super__;
};


#endif
#ifdef OOC_FROM_C
#define pthread_mutex_lock() threading_native_MutexUnix__pthread_mutex_lock(())
#define pthread_mutex_unlock() threading_native_MutexUnix__pthread_mutex_unlock(())
#define pthread_mutex_init(, ) threading_native_MutexUnix__pthread_mutex_init((), ())
#define pthread_mutex_destroy() threading_native_MutexUnix__pthread_mutex_destroy(())
#define pthread_mutexattr_init() threading_native_MutexUnix__pthread_mutexattr_init(())
#define pthread_mutexattr_settype(, ) threading_native_MutexUnix__pthread_mutexattr_settype((), ())
#define PThreadMutex threading_native_MutexUnix__PThreadMutex
#define PThreadMutex_class() threading_native_MutexUnix__PThreadMutex_class()
#define PThreadMutexClass threading_native_MutexUnix__PThreadMutexClass
#define PThreadMutexClass_class() threading_native_MutexUnix__PThreadMutexClass_class()
#define PThreadMutex___load__() threading_native_MutexUnix__PThreadMutex___load__()
#define PThreadMutexAttr threading_native_MutexUnix__PThreadMutexAttr
#define PThreadMutexAttr_class() threading_native_MutexUnix__PThreadMutexAttr_class()
#define PThreadMutexAttrClass threading_native_MutexUnix__PThreadMutexAttrClass
#define PThreadMutexAttrClass_class() threading_native_MutexUnix__PThreadMutexAttrClass_class()
#define PThreadMutexAttr___load__() threading_native_MutexUnix__PThreadMutexAttr___load__()
#define MutexUnix threading_native_MutexUnix__MutexUnix
#define MutexUnix_class() threading_native_MutexUnix__MutexUnix_class()
#define MutexUnixClass threading_native_MutexUnix__MutexUnixClass
#define MutexUnixClass_class() threading_native_MutexUnix__MutexUnixClass_class()
#define MutexUnix_init(_this_) threading_native_MutexUnix__MutexUnix_init((void*) (_this_))
#define MutexUnix_new() (void*) threading_native_MutexUnix__MutexUnix_new()
#define MutexUnix___defaults__(_this_) threading_native_MutexUnix__MutexUnix___defaults__((void*) (_this_))
#define MutexUnix___load__() threading_native_MutexUnix__MutexUnix___load__()
#define RecursiveMutexUnix threading_native_MutexUnix__RecursiveMutexUnix
#define RecursiveMutexUnix_class() threading_native_MutexUnix__RecursiveMutexUnix_class()
#define RecursiveMutexUnixClass threading_native_MutexUnix__RecursiveMutexUnixClass
#define RecursiveMutexUnixClass_class() threading_native_MutexUnix__RecursiveMutexUnixClass_class()
#define RecursiveMutexUnix_init(_this_) threading_native_MutexUnix__RecursiveMutexUnix_init((void*) (_this_))
#define RecursiveMutexUnix_new() (void*) threading_native_MutexUnix__RecursiveMutexUnix_new()
#define RecursiveMutexUnix___defaults__(_this_) threading_native_MutexUnix__RecursiveMutexUnix___defaults__((void*) (_this_))
#define RecursiveMutexUnix___load__() threading_native_MutexUnix__RecursiveMutexUnix___load__()
#endif

#endif // ___threading_native_MutexUnix___
