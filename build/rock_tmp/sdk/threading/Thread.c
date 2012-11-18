/* threading/Thread source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/threading/Thread.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/BufferIterator.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Character.h>
#include <sdk/lang/VarArgs.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/Memory.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Buffer.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Abstractions.h>
#include <sdk/lang/Format.h>
#include <sdk/lang/IO.h>
#include <sdk/threading/native/ThreadUnix.h>
#include <sdk/threading/native/ThreadWin32.h>
#include <sdk/threading/native/MutexUnix.h>
#include <sdk/threading/native/MutexWin32.h>
#include <sdk/threading/native/ThreadLocalUnix.h>
#include <sdk/threading/native/ThreadLocalWin32.h>

static lang_String__String* __strLit91;
static lang_String__String* __strLit90;
static lang_String__String* __strLit89;
static lang_String__String* __strLit88;

void threading_Thread__Thread_init(threading_Thread__Thread* this) {
}

void threading_Thread__Thread___defaults___impl(threading_Thread__Thread* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

lang_Numbers__Int threading_Thread__Thread_start(threading_Thread__Thread* this) {
    return (lang_Numbers__Int) ((threading_Thread__ThreadClass *)((lang_types__Object *)this)->class)->start((threading_Thread__Thread*)this);
}

lang_Numbers__Int threading_Thread__Thread_wait(threading_Thread__Thread* this) {
    return (lang_Numbers__Int) ((threading_Thread__ThreadClass *)((lang_types__Object *)this)->class)->wait((threading_Thread__Thread*)this);
}

void threading_Thread__Thread___defaults__(threading_Thread__Thread* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
threading_Thread__Thread* threading_Thread__Thread_new(lang_types__Closure _code) {
    
    
    #if ((defined(__unix__)) || (defined(__APPLE__)))
    return ((threading_Thread__Thread*) (threading_native_ThreadUnix__ThreadUnix_new_unix(_code)));
    #endif
    
    #if defined(__WIN32__) || defined(__WIN64__)
    return ((threading_Thread__Thread*) (threading_native_ThreadWin32__ThreadWin32_new_win(_code)));
    #endif
    lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (threading_Thread__Thread_class()), __strLit88));
    return ((threading_Thread__Thread*) (NULL));
}
void threading_Thread__Thread___load__() {
    lang_types__Class___load__();
}

threading_Thread__ThreadClass *threading_Thread__Thread_class(){
    static _Bool __done__ = false;
    static threading_Thread__ThreadClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(threading_Thread__Thread),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) threading_Thread__Thread___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) threading_Thread__Thread___load__,
            },
        },
        .new = (void*) threading_Thread__Thread_new,
        .start = (void*) threading_Thread__Thread_start,
        .wait = (void*) threading_Thread__Thread_wait,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Thread", 6);
    }
    return &class;
}

void threading_Thread__Mutex_init(threading_Thread__Mutex* this) {
}

void threading_Thread__Mutex_destroy(threading_Thread__Mutex* this) {
    ooc_mutex_destroy(this);
}

void threading_Thread__Mutex_lock(threading_Thread__Mutex* this) {
    ooc_mutex_lock(this);
}

void threading_Thread__Mutex_unlock(threading_Thread__Mutex* this) {
    ooc_mutex_unlock(this);
}

void threading_Thread__Mutex___defaults___impl(threading_Thread__Mutex* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void threading_Thread__Mutex___defaults__(threading_Thread__Mutex* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
threading_Thread__Mutex* threading_Thread__Mutex_new() {
    
    
    #if ((defined(__unix__)) || (defined(__APPLE__)))
    return threading_native_MutexUnix__MutexUnix_new();
    #endif
    
    #if defined(__WIN32__) || defined(__WIN64__)
    return threading_native_MutexWin32__MutexWin32_new();
    #endif
    lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (threading_Thread__Mutex_class()), __strLit89));
    return ((threading_Thread__Mutex*) (NULL));
}
void threading_Thread__Mutex___load__() {
    lang_types__Class___load__();
}

threading_Thread__MutexClass *threading_Thread__Mutex_class(){
    static _Bool __done__ = false;
    static threading_Thread__MutexClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(threading_Thread__Mutex),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) threading_Thread__Mutex___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) threading_Thread__Mutex___load__,
            },
        },
        .new = (void*) threading_Thread__Mutex_new,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Mutex", 5);
    }
    return &class;
}

void threading_Thread__RecursiveMutex_init(threading_Thread__RecursiveMutex* this) {
}

void threading_Thread__RecursiveMutex_destroy(threading_Thread__RecursiveMutex* this) {
    ooc_recursive_mutex_destroy(this);
}

void threading_Thread__RecursiveMutex_lock(threading_Thread__RecursiveMutex* this) {
    ooc_recursive_mutex_lock(this);
}

void threading_Thread__RecursiveMutex_unlock(threading_Thread__RecursiveMutex* this) {
    ooc_recursive_mutex_unlock(this);
}

void threading_Thread__RecursiveMutex___defaults___impl(threading_Thread__RecursiveMutex* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void threading_Thread__RecursiveMutex___defaults__(threading_Thread__RecursiveMutex* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
threading_Thread__RecursiveMutex* threading_Thread__RecursiveMutex_new() {
    
    
    #if ((defined(__unix__)) || (defined(__APPLE__)))
    return threading_native_MutexUnix__RecursiveMutexUnix_new();
    #endif
    
    #if defined(__WIN32__) || defined(__WIN64__)
    return threading_native_MutexWin32__RecursiveMutexWin32_new();
    #endif
    lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (threading_Thread__RecursiveMutex_class()), __strLit90));
    return ((threading_Thread__RecursiveMutex*) (NULL));
}
void threading_Thread__RecursiveMutex___load__() {
    lang_types__Class___load__();
}

threading_Thread__RecursiveMutexClass *threading_Thread__RecursiveMutex_class(){
    static _Bool __done__ = false;
    static threading_Thread__RecursiveMutexClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(threading_Thread__RecursiveMutex),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) threading_Thread__RecursiveMutex___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) threading_Thread__RecursiveMutex___load__,
            },
        },
        .new = (void*) threading_Thread__RecursiveMutex_new,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("RecursiveMutex", 14);
    }
    return &class;
}

void threading_Thread__ThreadLocal_init(threading_Thread__ThreadLocal* this) {
}

void threading_Thread__ThreadLocal___defaults___impl(threading_Thread__ThreadLocal* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void threading_Thread__ThreadLocal_set(threading_Thread__ThreadLocal* this, uint8_t* value) {
    ((threading_Thread__ThreadLocalClass *)((lang_types__Object *)this)->class)->set((threading_Thread__ThreadLocal*)this, value);
}

void threading_Thread__ThreadLocal_get(threading_Thread__ThreadLocal* this, uint8_t* __genericReturn92) {
    ((threading_Thread__ThreadLocalClass *)((lang_types__Object *)this)->class)->get((threading_Thread__ThreadLocal*)this, __genericReturn92);
}

lang_types__Bool threading_Thread__ThreadLocal_hasValue__quest(threading_Thread__ThreadLocal* this) {
    return (lang_types__Bool) ((threading_Thread__ThreadLocalClass *)((lang_types__Object *)this)->class)->hasValue__quest((threading_Thread__ThreadLocal*)this);
}

void threading_Thread__ThreadLocal___defaults__(threading_Thread__ThreadLocal* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
threading_Thread__ThreadLocal* threading_Thread__ThreadLocal_new(lang_types__Class* T) {
    
    
    #if ((defined(__unix__)) || (defined(__APPLE__)))
    return ((threading_Thread__ThreadLocal*) (threading_native_ThreadLocalUnix__ThreadLocalUnix_new_unix((lang_types__Class*)T)));
    #endif
    
    #if defined(__WIN32__) || defined(__WIN64__)
    return ((threading_Thread__ThreadLocal*) (threading_native_ThreadLocalWin32__ThreadLocalWin32_new_windows((lang_types__Class*)T)));
    #endif
    lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (threading_Thread__ThreadLocal_class()), __strLit91));
    return ((threading_Thread__ThreadLocal*) (NULL));
}
void threading_Thread__ThreadLocal___load__() {
    lang_types__Class___load__();
}

threading_Thread__ThreadLocalClass *threading_Thread__ThreadLocal_class(){
    static _Bool __done__ = false;
    static threading_Thread__ThreadLocalClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(threading_Thread__ThreadLocal),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) threading_Thread__ThreadLocal___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) threading_Thread__ThreadLocal___load__,
            },
        },
        .new = (void*) threading_Thread__ThreadLocal_new,
        .set = (void*) threading_Thread__ThreadLocal_set,
        .get = (void*) threading_Thread__ThreadLocal_get,
        .hasValue__quest = (void*) threading_Thread__ThreadLocal_hasValue__quest,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("ThreadLocal", 11);
    }
    return &class;
}
void threading_Thread_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Exception_load();
        lang_BufferIterator_load();
        lang_System_load();
        lang_Character_load();
        lang_VarArgs_load();
        lang_types_load();
        lang_Iterators_load();
        lang_Memory_load();
        lang_String_load();
        lang_Buffer_load();
        lang_Numbers_load();
        lang_Abstractions_load();
        lang_Format_load();
        lang_IO_load();
        threading_native_ThreadUnix_load();
        threading_native_ThreadWin32_load();
        threading_native_MutexUnix_load();
        threading_native_MutexWin32_load();
        threading_native_ThreadLocalUnix_load();
        threading_native_ThreadLocalWin32_load();
        threading_Thread__Thread___load__();
        threading_Thread__Mutex___load__();
        threading_Thread__RecursiveMutex___load__();
        threading_Thread__ThreadLocal___load__();
        __strLit91 = (void*) lang_String__makeStringLiteral("Unsupported platform!\n", 22);
        __strLit90 = (void*) lang_String__makeStringLiteral("Unsupported platform!\n", 22);
        __strLit89 = (void*) lang_String__makeStringLiteral("Unsupported platform!\n", 22);
        __strLit88 = (void*) lang_String__makeStringLiteral("Unsupported platform!\n", 22);
    }
}

