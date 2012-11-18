/* threading/native/MutexUnix source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/threading/native/MutexUnix.h>
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

#if ((defined(__unix__)) || (defined(__APPLE__)))
void threading_native_MutexUnix__PThreadMutex___load__() {
    lang_types__Class___load__();
}

threading_native_MutexUnix__PThreadMutexClass *threading_native_MutexUnix__PThreadMutex_class(){
    static _Bool __done__ = false;
    static threading_native_MutexUnix__PThreadMutexClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(threading_native_MutexUnix__PThreadMutex),
                    .size = sizeof(threading_native_MutexUnix__PThreadMutex)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) threading_native_MutexUnix__PThreadMutex___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("PThreadMutex", 12);
    }
    return &class;
}
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
void threading_native_MutexUnix__PThreadMutexAttr___load__() {
    lang_types__Class___load__();
}

threading_native_MutexUnix__PThreadMutexAttrClass *threading_native_MutexUnix__PThreadMutexAttr_class(){
    static _Bool __done__ = false;
    static threading_native_MutexUnix__PThreadMutexAttrClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(threading_native_MutexUnix__PThreadMutexAttr),
                    .size = sizeof(threading_native_MutexUnix__PThreadMutexAttr)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) threading_native_MutexUnix__PThreadMutexAttr___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("PThreadMutexAttr", 16);
    }
    return &class;
}
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))

void threading_native_MutexUnix__MutexUnix_init(threading_native_MutexUnix__MutexUnix* this) {
    threading_Thread__Mutex_init((threading_Thread__Mutex*) this);
}

void threading_native_MutexUnix__MutexUnix___defaults___impl(threading_native_MutexUnix__MutexUnix* this) {
    threading_Thread__Mutex___defaults___impl((threading_Thread__Mutex*) this);
}

void threading_native_MutexUnix__MutexUnix___defaults__(threading_native_MutexUnix__MutexUnix* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
threading_Thread__Mutex* threading_native_MutexUnix__MutexUnix_new() {
    
    threading_native_MutexUnix__PThreadMutex* mut = ((threading_native_MutexUnix__PThreadMutex*) (lang_Memory__gc_malloc(((lang_types__Class*)threading_native_MutexUnix__PThreadMutex_class())->size)));
    threading_native_MutexUnix__pthread_mutex_init(mut, NULL);
    return ((threading_Thread__Mutex*) (mut));
}
void threading_native_MutexUnix__MutexUnix___load__() {
    threading_Thread__Mutex___load__();
}

threading_native_MutexUnix__MutexUnixClass *threading_native_MutexUnix__MutexUnix_class(){
    static _Bool __done__ = false;
    static threading_native_MutexUnix__MutexUnixClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(threading_native_MutexUnix__MutexUnix),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) threading_native_MutexUnix__MutexUnix___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) threading_native_MutexUnix__MutexUnix___load__,
                },
            },
            .new = (void*) threading_native_MutexUnix__MutexUnix_new,
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) threading_Thread__Mutex_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("MutexUnix", 9);
    }
    return &class;
}
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))

void threading_native_MutexUnix__RecursiveMutexUnix_init(threading_native_MutexUnix__RecursiveMutexUnix* this) {
    threading_Thread__Mutex_init((threading_Thread__Mutex*) this);
}

void threading_native_MutexUnix__RecursiveMutexUnix___defaults___impl(threading_native_MutexUnix__RecursiveMutexUnix* this) {
    threading_Thread__Mutex___defaults___impl((threading_Thread__Mutex*) this);
}

void threading_native_MutexUnix__RecursiveMutexUnix___defaults__(threading_native_MutexUnix__RecursiveMutexUnix* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
threading_Thread__RecursiveMutex* threading_native_MutexUnix__RecursiveMutexUnix_new() {
    
    threading_native_MutexUnix__PThreadMutex* mut = ((threading_native_MutexUnix__PThreadMutex*) (lang_Memory__gc_malloc(((lang_types__Class*)threading_native_MutexUnix__PThreadMutex_class())->size)));
    threading_native_MutexUnix__PThreadMutexAttr attr;
    threading_native_MutexUnix__pthread_mutexattr_init(&(attr));
    threading_native_MutexUnix__pthread_mutexattr_settype(&(attr), PTHREAD_MUTEX_RECURSIVE);
    threading_native_MutexUnix__pthread_mutex_init(mut, &(attr));
    return ((threading_Thread__RecursiveMutex*) (mut));
}
void threading_native_MutexUnix__RecursiveMutexUnix___load__() {
    threading_Thread__Mutex___load__();
}

threading_native_MutexUnix__RecursiveMutexUnixClass *threading_native_MutexUnix__RecursiveMutexUnix_class(){
    static _Bool __done__ = false;
    static threading_native_MutexUnix__RecursiveMutexUnixClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(threading_native_MutexUnix__RecursiveMutexUnix),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) threading_native_MutexUnix__RecursiveMutexUnix___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) threading_native_MutexUnix__RecursiveMutexUnix___load__,
                },
            },
            .new = (void*) threading_native_MutexUnix__RecursiveMutexUnix_new,
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) threading_Thread__Mutex_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("RecursiveMutexUnix", 18);
    }
    return &class;
}
#endif
void threading_native_MutexUnix_load() {
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
        threading_Thread_load();
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        threading_native_MutexUnix__PThreadMutex___load__();
        #endif
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        threading_native_MutexUnix__PThreadMutexAttr___load__();
        #endif
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        threading_native_MutexUnix__MutexUnix___load__();
        #endif
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        threading_native_MutexUnix__RecursiveMutexUnix___load__();
        #endif
        
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        ;
        #endif
    }
}

#if ((defined(__unix__)) || (defined(__APPLE__)))

void ooc_mutex_lock(threading_Thread__Mutex* m) {
    threading_native_MutexUnix__pthread_mutex_lock(((threading_native_MutexUnix__PThreadMutex*) (m)));
}
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))

void ooc_mutex_unlock(threading_Thread__Mutex* m) {
    threading_native_MutexUnix__pthread_mutex_unlock(((threading_native_MutexUnix__PThreadMutex*) (m)));
}
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))

void ooc_mutex_destroy(threading_Thread__Mutex* m) {
    threading_native_MutexUnix__pthread_mutex_destroy(((threading_native_MutexUnix__PThreadMutex*) (m)));
}
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))

void ooc_recursive_mutex_lock(threading_Thread__RecursiveMutex* m) {
    threading_native_MutexUnix__pthread_mutex_lock(((threading_native_MutexUnix__PThreadMutex*) (m)));
}
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))

void ooc_recursive_mutex_unlock(threading_Thread__RecursiveMutex* m) {
    threading_native_MutexUnix__pthread_mutex_unlock(((threading_native_MutexUnix__PThreadMutex*) (m)));
}
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))

void ooc_recursive_mutex_destroy(threading_Thread__RecursiveMutex* m) {
    threading_native_MutexUnix__pthread_mutex_destroy(((threading_native_MutexUnix__PThreadMutex*) (m)));
}
#endif
