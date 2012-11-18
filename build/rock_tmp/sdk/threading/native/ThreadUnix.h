/* threading/native/ThreadUnix header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___threading_native_ThreadUnix___
#define ___threading_native_ThreadUnix___

#include <sdk/threading/native/ThreadUnix-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/threading/Thread.h>

#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_ThreadUnix__ThreadUnix {
    struct _threading_Thread__Thread __super__;
    threading_native_ThreadUnix__PThread pthread;
};


#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_ThreadUnix__PThreadClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_ThreadUnix__ThreadUnixClass {
    struct _threading_Thread__ThreadClass __super__;
    threading_native_ThreadUnix__ThreadUnix* (*new_unix)(lang_types__Closure);
    void (*init_unix)(threading_native_ThreadUnix__ThreadUnix*, lang_types__Closure);
};


#endif
#ifdef OOC_FROM_C
#define pthread_create(, Pointer, startRoutine, userArgument) threading_native_ThreadUnix__pthread_create((), (void*) (Pointer), (void*) (startRoutine), (void*) (userArgument))
#define pthread_create(, Pointer, startRoutine, userArgument) threading_native_ThreadUnix__pthread_create((), (void*) (Pointer), (void*) (startRoutine), (void*) (userArgument))
#define pthread_join(thread, retval) threading_native_ThreadUnix__pthread_join((thread), (retval))
#define pthread_join(thread, retval) threading_native_ThreadUnix__pthread_join((thread), (retval))
#define PThread threading_native_ThreadUnix__PThread
#define PThread_class() threading_native_ThreadUnix__PThread_class()
#define PThreadClass threading_native_ThreadUnix__PThreadClass
#define PThreadClass_class() threading_native_ThreadUnix__PThreadClass_class()
#define PThread___load__() threading_native_ThreadUnix__PThread___load__()
#define ThreadUnix threading_native_ThreadUnix__ThreadUnix
#define ThreadUnix_class() threading_native_ThreadUnix__ThreadUnix_class()
#define ThreadUnixClass threading_native_ThreadUnix__ThreadUnixClass
#define ThreadUnixClass_class() threading_native_ThreadUnix__ThreadUnixClass_class()
#define ThreadUnix_new_unix(_code) (void*) threading_native_ThreadUnix__ThreadUnix_new_unix((_code))
#define ThreadUnix_init_unix(_this_, _code) threading_native_ThreadUnix__ThreadUnix_init_unix((void*) (_this_), (_code))
#define ThreadUnix_start(_this_) threading_native_ThreadUnix__ThreadUnix_start((void*) (_this_))
#define ThreadUnix_wait(_this_) threading_native_ThreadUnix__ThreadUnix_wait((void*) (_this_))
#define ThreadUnix___defaults__(_this_) threading_native_ThreadUnix__ThreadUnix___defaults__((void*) (_this_))
#define ThreadUnix___load__() threading_native_ThreadUnix__ThreadUnix___load__()
#endif

#endif // ___threading_native_ThreadUnix___
