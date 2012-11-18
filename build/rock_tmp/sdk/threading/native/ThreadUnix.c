/* threading/native/ThreadUnix source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/threading/native/ThreadUnix.h>
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
void threading_native_ThreadUnix__PThread___load__() {
    lang_types__Class___load__();
}

threading_native_ThreadUnix__PThreadClass *threading_native_ThreadUnix__PThread_class(){
    static _Bool __done__ = false;
    static threading_native_ThreadUnix__PThreadClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(threading_native_ThreadUnix__PThread),
                    .size = sizeof(threading_native_ThreadUnix__PThread)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) threading_native_ThreadUnix__PThread___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("PThread", 7);
    }
    return &class;
}
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))

void threading_native_ThreadUnix__ThreadUnix_init_unix(threading_native_ThreadUnix__ThreadUnix* this, lang_types__Closure _code) {
    ((threading_Thread__Thread*)this)->_code = _code;
}

lang_Numbers__Int threading_native_ThreadUnix__ThreadUnix_start_impl(threading_native_ThreadUnix__ThreadUnix* this) {
    return threading_native_ThreadUnix__pthread_create(&(this->pthread), NULL, ((lang_types__Closure) (((threading_Thread__Thread*)this)->_code)).thunk, ((lang_types__Closure) (((threading_Thread__Thread*)this)->_code)).context);
}

lang_Numbers__Int threading_native_ThreadUnix__ThreadUnix_wait_impl(threading_native_ThreadUnix__ThreadUnix* this) {
    return threading_native_ThreadUnix__pthread_join(this->pthread, NULL);
}

void threading_native_ThreadUnix__ThreadUnix___defaults___impl(threading_native_ThreadUnix__ThreadUnix* this) {
    threading_Thread__Thread___defaults___impl((threading_Thread__Thread*) this);
}

lang_Numbers__Int threading_native_ThreadUnix__ThreadUnix_start(threading_native_ThreadUnix__ThreadUnix* this) {
    return (lang_Numbers__Int) ((threading_Thread__ThreadClass *)((lang_types__Object *)this)->class)->start((threading_Thread__Thread*)this);
}

lang_Numbers__Int threading_native_ThreadUnix__ThreadUnix_wait(threading_native_ThreadUnix__ThreadUnix* this) {
    return (lang_Numbers__Int) ((threading_Thread__ThreadClass *)((lang_types__Object *)this)->class)->wait((threading_Thread__Thread*)this);
}

void threading_native_ThreadUnix__ThreadUnix___defaults__(threading_native_ThreadUnix__ThreadUnix* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
threading_native_ThreadUnix__ThreadUnix* threading_native_ThreadUnix__ThreadUnix_new_unix(lang_types__Closure _code) {
    
    threading_native_ThreadUnix__ThreadUnix* this = ((threading_native_ThreadUnix__ThreadUnix*) (lang_types__Class_alloc__class((lang_types__Class*) threading_native_ThreadUnix__ThreadUnix_class())));
    threading_native_ThreadUnix__ThreadUnix___defaults__(this);
    threading_native_ThreadUnix__ThreadUnix_init_unix((threading_native_ThreadUnix__ThreadUnix*) this, _code);
    return this;
}
void threading_native_ThreadUnix__ThreadUnix___load__() {
    threading_Thread__Thread___load__();
}

threading_native_ThreadUnix__ThreadUnixClass *threading_native_ThreadUnix__ThreadUnix_class(){
    static _Bool __done__ = false;
    static threading_native_ThreadUnix__ThreadUnixClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(threading_native_ThreadUnix__ThreadUnix),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) threading_native_ThreadUnix__ThreadUnix___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) threading_native_ThreadUnix__ThreadUnix___load__,
                },
            },
            .new = (void*) threading_Thread__Thread_new,
            .start = (void*) threading_native_ThreadUnix__ThreadUnix_start_impl,
            .wait = (void*) threading_native_ThreadUnix__ThreadUnix_wait_impl,
        },
        .new_unix = (void*) threading_native_ThreadUnix__ThreadUnix_new_unix,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) threading_Thread__Thread_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("ThreadUnix", 10);
    }
    return &class;
}
#endif
void threading_native_ThreadUnix_load() {
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
        threading_native_ThreadUnix__PThread___load__();
        #endif
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        threading_native_ThreadUnix__ThreadUnix___load__();
        #endif
    }
}

