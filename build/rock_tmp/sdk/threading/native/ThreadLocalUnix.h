/* threading/native/ThreadLocalUnix header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___threading_native_ThreadLocalUnix___
#define ___threading_native_ThreadLocalUnix___

#include <sdk/threading/native/ThreadLocalUnix-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/threading/Thread.h>

#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_ThreadLocalUnix__ThreadLocalUnix {
    struct _threading_Thread__ThreadLocal __super__;
    structs_HashMap__HashMap* values;
    threading_Thread__Mutex* valuesMutex;
};


#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_ThreadLocalUnix__ThreadLocalUnixClass {
    struct _threading_Thread__ThreadLocalClass __super__;
    threading_native_ThreadLocalUnix__ThreadLocalUnix* (*new_unix)(lang_types__Class*);
    void (*init_unix)(threading_native_ThreadLocalUnix__ThreadLocalUnix*);
};


#endif
#ifdef OOC_FROM_C
#define pthread_self() threading_native_ThreadLocalUnix__pthread_self()
#define ThreadLocalUnix threading_native_ThreadLocalUnix__ThreadLocalUnix
#define ThreadLocalUnix_class() threading_native_ThreadLocalUnix__ThreadLocalUnix_class()
#define ThreadLocalUnixClass threading_native_ThreadLocalUnix__ThreadLocalUnixClass
#define ThreadLocalUnixClass_class() threading_native_ThreadLocalUnix__ThreadLocalUnixClass_class()
#define ThreadLocalUnix_new_unix() (void*) threading_native_ThreadLocalUnix__ThreadLocalUnix_new_unix()
#define ThreadLocalUnix_init_unix(_this_) threading_native_ThreadLocalUnix__ThreadLocalUnix_init_unix((void*) (_this_))
#define ThreadLocalUnix_set(_this_, value) threading_native_ThreadLocalUnix__ThreadLocalUnix_set((void*) (_this_), (value))
#define ThreadLocalUnix_get(_this_, __genericReturn93) threading_native_ThreadLocalUnix__ThreadLocalUnix_get((void*) (_this_), (__genericReturn93))
#define ThreadLocalUnix_hasValue__quest(_this_) threading_native_ThreadLocalUnix__ThreadLocalUnix_hasValue__quest((void*) (_this_))
#define ThreadLocalUnix___defaults__(_this_) threading_native_ThreadLocalUnix__ThreadLocalUnix___defaults__((void*) (_this_))
#define ThreadLocalUnix___load__() threading_native_ThreadLocalUnix__ThreadLocalUnix___load__()
#endif

#endif // ___threading_native_ThreadLocalUnix___
