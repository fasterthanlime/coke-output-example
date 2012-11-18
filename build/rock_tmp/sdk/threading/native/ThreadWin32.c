/* threading/native/ThreadWin32 source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/threading/native/ThreadWin32.h>
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

void threading_native_ThreadWin32__ThreadWin32_init_win(threading_native_ThreadWin32__ThreadWin32* this, lang_types__Closure _code) {
    ((threading_Thread__Thread*)this)->_code = _code;
}

lang_Numbers__Int threading_native_ThreadWin32__ThreadWin32_start_impl(threading_native_ThreadWin32__ThreadWin32* this) {
    this->handle = threading_native_ThreadWin32__CreateThread(NULL, 0, ((lang_types__Closure) (((threading_Thread__Thread*)this)->_code)).thunk, ((lang_types__Closure) (((threading_Thread__Thread*)this)->_code)).context, 0, &(this->threadID));
    return ((lang_Numbers__Int) ((this->handle == INVALID_HANDLE_VALUE ? -1 : 0)));
}

lang_Numbers__Int threading_native_ThreadWin32__ThreadWin32_wait_impl(threading_native_ThreadWin32__ThreadWin32* this) {
    return ((lang_Numbers__Int) (threading_native_ThreadWin32__WaitForSingleObject(this->handle, INFINITE) == WAIT_OBJECT_0 ? 0 : -1));
}

void threading_native_ThreadWin32__ThreadWin32___defaults___impl(threading_native_ThreadWin32__ThreadWin32* this) {
    threading_Thread__Thread___defaults___impl((threading_Thread__Thread*) this);
}

lang_Numbers__Int threading_native_ThreadWin32__ThreadWin32_start(threading_native_ThreadWin32__ThreadWin32* this) {
    return (lang_Numbers__Int) ((threading_Thread__ThreadClass *)((lang_types__Object *)this)->class)->start((threading_Thread__Thread*)this);
}

lang_Numbers__Int threading_native_ThreadWin32__ThreadWin32_wait(threading_native_ThreadWin32__ThreadWin32* this) {
    return (lang_Numbers__Int) ((threading_Thread__ThreadClass *)((lang_types__Object *)this)->class)->wait((threading_Thread__Thread*)this);
}

void threading_native_ThreadWin32__ThreadWin32___defaults__(threading_native_ThreadWin32__ThreadWin32* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
threading_native_ThreadWin32__ThreadWin32* threading_native_ThreadWin32__ThreadWin32_new_win(lang_types__Closure _code) {
    
    threading_native_ThreadWin32__ThreadWin32* this = ((threading_native_ThreadWin32__ThreadWin32*) (lang_types__Class_alloc__class((lang_types__Class*) threading_native_ThreadWin32__ThreadWin32_class())));
    threading_native_ThreadWin32__ThreadWin32___defaults__(this);
    threading_native_ThreadWin32__ThreadWin32_init_win((threading_native_ThreadWin32__ThreadWin32*) this, _code);
    return this;
}
void threading_native_ThreadWin32__ThreadWin32___load__() {
    threading_Thread__Thread___load__();
}

threading_native_ThreadWin32__ThreadWin32Class *threading_native_ThreadWin32__ThreadWin32_class(){
    static _Bool __done__ = false;
    static threading_native_ThreadWin32__ThreadWin32Class class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(threading_native_ThreadWin32__ThreadWin32),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) threading_native_ThreadWin32__ThreadWin32___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) threading_native_ThreadWin32__ThreadWin32___load__,
                },
            },
            .new = (void*) threading_Thread__Thread_new,
            .start = (void*) threading_native_ThreadWin32__ThreadWin32_start_impl,
            .wait = (void*) threading_native_ThreadWin32__ThreadWin32_wait_impl,
        },
        .new_win = (void*) threading_native_ThreadWin32__ThreadWin32_new_win,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) threading_Thread__Thread_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("ThreadWin32", 11);
    }
    return &class;
}
#endif
void threading_native_ThreadWin32_load() {
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
        threading_native_ThreadWin32__ThreadWin32___load__();
        #endif
        
        #if defined(__WIN32__) || defined(__WIN64__)
        ;
        #endif
        
        #if defined(__WIN32__) || defined(__WIN64__)
        ;
        #endif
    }
}

