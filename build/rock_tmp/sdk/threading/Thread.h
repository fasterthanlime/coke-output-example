/* threading/Thread header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___threading_Thread___
#define ___threading_Thread___

#include <sdk/threading/Thread-fwd.h>
#include <sdk/lang/types.h>

struct _threading_Thread__Thread {
    struct _lang_types__Object __super__;
    lang_types__Closure _code;
};


struct _threading_Thread__Mutex {
    struct _lang_types__Object __super__;
};


struct _threading_Thread__RecursiveMutex {
    struct _lang_types__Object __super__;
};


struct _threading_Thread__ThreadLocal {
    struct _lang_types__Object __super__;
    lang_types__Class* T;
};


struct _threading_Thread__ThreadClass {
    struct _lang_types__ClassClass __super__;
    void (*init)(threading_Thread__Thread*);
    threading_Thread__Thread* (*new)(lang_types__Closure);
    lang_Numbers__Int (*start)(threading_Thread__Thread*);
    lang_Numbers__Int (*wait)(threading_Thread__Thread*);
};


struct _threading_Thread__MutexClass {
    struct _lang_types__ClassClass __super__;
    void (*init)(threading_Thread__Mutex*);
    threading_Thread__Mutex* (*new)();
    void (*destroy)(threading_Thread__Mutex*);
    void (*lock)(threading_Thread__Mutex*);
    void (*unlock)(threading_Thread__Mutex*);
};


struct _threading_Thread__RecursiveMutexClass {
    struct _lang_types__ClassClass __super__;
    void (*init)(threading_Thread__RecursiveMutex*);
    threading_Thread__RecursiveMutex* (*new)();
    void (*destroy)(threading_Thread__RecursiveMutex*);
    void (*lock)(threading_Thread__RecursiveMutex*);
    void (*unlock)(threading_Thread__RecursiveMutex*);
};


struct _threading_Thread__ThreadLocalClass {
    struct _lang_types__ClassClass __super__;
    void (*init)(threading_Thread__ThreadLocal*);
    threading_Thread__ThreadLocal* (*new)(lang_types__Class*);
    void (*set)(threading_Thread__ThreadLocal*, uint8_t*);
    void (*get)(threading_Thread__ThreadLocal*, uint8_t*);
    lang_types__Bool (*hasValue__quest)(threading_Thread__ThreadLocal*);
};


#ifdef OOC_FROM_C
#define Thread threading_Thread__Thread
#define Thread_class() threading_Thread__Thread_class()
#define ThreadClass threading_Thread__ThreadClass
#define ThreadClass_class() threading_Thread__ThreadClass_class()
#define Thread_init(_this_) threading_Thread__Thread_init((void*) (_this_))
#define Thread_new(_code) (void*) threading_Thread__Thread_new((_code))
#define Thread_start(_this_) threading_Thread__Thread_start((void*) (_this_))
#define Thread_wait(_this_) threading_Thread__Thread_wait((void*) (_this_))
#define Thread___defaults__(_this_) threading_Thread__Thread___defaults__((void*) (_this_))
#define Thread___load__() threading_Thread__Thread___load__()
#define Mutex threading_Thread__Mutex
#define Mutex_class() threading_Thread__Mutex_class()
#define MutexClass threading_Thread__MutexClass
#define MutexClass_class() threading_Thread__MutexClass_class()
#define Mutex_init(_this_) threading_Thread__Mutex_init((void*) (_this_))
#define Mutex_new() (void*) threading_Thread__Mutex_new()
#define Mutex_destroy(_this_) threading_Thread__Mutex_destroy((void*) (_this_))
#define Mutex_lock(_this_) threading_Thread__Mutex_lock((void*) (_this_))
#define Mutex_unlock(_this_) threading_Thread__Mutex_unlock((void*) (_this_))
#define Mutex___defaults__(_this_) threading_Thread__Mutex___defaults__((void*) (_this_))
#define Mutex___load__() threading_Thread__Mutex___load__()
#define RecursiveMutex threading_Thread__RecursiveMutex
#define RecursiveMutex_class() threading_Thread__RecursiveMutex_class()
#define RecursiveMutexClass threading_Thread__RecursiveMutexClass
#define RecursiveMutexClass_class() threading_Thread__RecursiveMutexClass_class()
#define RecursiveMutex_init(_this_) threading_Thread__RecursiveMutex_init((void*) (_this_))
#define RecursiveMutex_new() (void*) threading_Thread__RecursiveMutex_new()
#define RecursiveMutex_destroy(_this_) threading_Thread__RecursiveMutex_destroy((void*) (_this_))
#define RecursiveMutex_lock(_this_) threading_Thread__RecursiveMutex_lock((void*) (_this_))
#define RecursiveMutex_unlock(_this_) threading_Thread__RecursiveMutex_unlock((void*) (_this_))
#define RecursiveMutex___defaults__(_this_) threading_Thread__RecursiveMutex___defaults__((void*) (_this_))
#define RecursiveMutex___load__() threading_Thread__RecursiveMutex___load__()
#define ThreadLocal threading_Thread__ThreadLocal
#define ThreadLocal_class() threading_Thread__ThreadLocal_class()
#define ThreadLocalClass threading_Thread__ThreadLocalClass
#define ThreadLocalClass_class() threading_Thread__ThreadLocalClass_class()
#define ThreadLocal_init(_this_) threading_Thread__ThreadLocal_init((void*) (_this_))
#define ThreadLocal_new() (void*) threading_Thread__ThreadLocal_new()
#define ThreadLocal_set(_this_, value) threading_Thread__ThreadLocal_set((void*) (_this_), (value))
#define ThreadLocal_get(_this_, __genericReturn92) threading_Thread__ThreadLocal_get((void*) (_this_), (__genericReturn92))
#define ThreadLocal_hasValue__quest(_this_) threading_Thread__ThreadLocal_hasValue__quest((void*) (_this_))
#define ThreadLocal___defaults__(_this_) threading_Thread__ThreadLocal___defaults__((void*) (_this_))
#define ThreadLocal___load__() threading_Thread__ThreadLocal___load__()
#endif

#endif // ___threading_Thread___
