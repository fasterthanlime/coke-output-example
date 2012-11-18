/* threading/native/MutexWin32 source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/threading/native/MutexWin32.h>
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
#include <sdk/native/win32/types.h>
#include <sdk/native/win32/errors.h>

#if defined(__WIN32__) || defined(__WIN64__)

void threading_native_MutexWin32__MutexWin32_init(threading_native_MutexWin32__MutexWin32* this) {
    threading_Thread__Mutex_init((threading_Thread__Mutex*) this);
}

void threading_native_MutexWin32__MutexWin32___defaults___impl(threading_native_MutexWin32__MutexWin32* this) {
    threading_Thread__Mutex___defaults___impl((threading_Thread__Mutex*) this);
}

void threading_native_MutexWin32__MutexWin32___defaults__(threading_native_MutexWin32__MutexWin32* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
threading_Thread__Mutex* threading_native_MutexWin32__MutexWin32_new() {
    
    native_win32_types__Handle mut = threading_native_MutexWin32__CreateMutex(NULL, false, NULL);
    return ((threading_Thread__Mutex*) (mut));
}
void threading_native_MutexWin32__MutexWin32___load__() {
    threading_Thread__Mutex___load__();
}

threading_native_MutexWin32__MutexWin32Class *threading_native_MutexWin32__MutexWin32_class(){
    static _Bool __done__ = false;
    static threading_native_MutexWin32__MutexWin32Class class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(threading_native_MutexWin32__MutexWin32),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) threading_native_MutexWin32__MutexWin32___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) threading_native_MutexWin32__MutexWin32___load__,
                },
            },
            .new = (void*) threading_native_MutexWin32__MutexWin32_new,
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) threading_Thread__Mutex_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("MutexWin32", 10);
    }
    return &class;
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)

void threading_native_MutexWin32__RecursiveMutexWin32_init(threading_native_MutexWin32__RecursiveMutexWin32* this) {
    threading_Thread__Mutex_init((threading_Thread__Mutex*) this);
}

void threading_native_MutexWin32__RecursiveMutexWin32___defaults___impl(threading_native_MutexWin32__RecursiveMutexWin32* this) {
    threading_Thread__Mutex___defaults___impl((threading_Thread__Mutex*) this);
}

void threading_native_MutexWin32__RecursiveMutexWin32___defaults__(threading_native_MutexWin32__RecursiveMutexWin32* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
threading_Thread__RecursiveMutex* threading_native_MutexWin32__RecursiveMutexWin32_new() {
    
    native_win32_types__Handle mut = threading_native_MutexWin32__CreateMutex(NULL, false, NULL);
    return ((threading_Thread__RecursiveMutex*) (mut));
}
void threading_native_MutexWin32__RecursiveMutexWin32___load__() {
    threading_Thread__Mutex___load__();
}

threading_native_MutexWin32__RecursiveMutexWin32Class *threading_native_MutexWin32__RecursiveMutexWin32_class(){
    static _Bool __done__ = false;
    static threading_native_MutexWin32__RecursiveMutexWin32Class class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(threading_native_MutexWin32__RecursiveMutexWin32),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) threading_native_MutexWin32__RecursiveMutexWin32___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) threading_native_MutexWin32__RecursiveMutexWin32___load__,
                },
            },
            .new = (void*) threading_native_MutexWin32__RecursiveMutexWin32_new,
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) threading_Thread__Mutex_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("RecursiveMutexWin32", 19);
    }
    return &class;
}
#endif
void threading_native_MutexWin32_load() {
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
        native_win32_types_load();
        native_win32_errors_load();
        #if defined(__WIN32__) || defined(__WIN64__)
        threading_native_MutexWin32__MutexWin32___load__();
        #endif
        #if defined(__WIN32__) || defined(__WIN64__)
        threading_native_MutexWin32__RecursiveMutexWin32___load__();
        #endif
        
        #if defined(__WIN32__) || defined(__WIN64__)
        ;
        #endif
    }
}

#if defined(__WIN32__) || defined(__WIN64__)

void ooc_mutex_lock(threading_Thread__Mutex* m) {
    threading_native_MutexWin32__WaitForSingleObject(((native_win32_types__Handle) (m)), INFINITE);
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)

void ooc_mutex_unlock(threading_Thread__Mutex* m) {
    threading_native_MutexWin32__ReleaseMutex(((native_win32_types__Handle) (m)));
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)

void ooc_mutex_destroy(threading_Thread__Mutex* m) {
    threading_native_MutexWin32__CloseHandle(((native_win32_types__Handle) (m)));
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)

void ooc_recursive_mutex_lock(threading_Thread__RecursiveMutex* m) {
    threading_native_MutexWin32__WaitForSingleObject(((native_win32_types__Handle) (m)), INFINITE);
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)

void ooc_recursive_mutex_unlock(threading_Thread__RecursiveMutex* m) {
    threading_native_MutexWin32__ReleaseMutex(((native_win32_types__Handle) (m)));
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)

void ooc_recursive_mutex_destroy(threading_Thread__RecursiveMutex* m) {
    threading_native_MutexWin32__CloseHandle(((native_win32_types__Handle) (m)));
}
#endif
