/* threading/native/ThreadLocalWin32 source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/threading/native/ThreadLocalWin32.h>
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
#include <sdk/structs/HashMap.h>
#include <sdk/threading/native/ThreadWin32.h>

#if defined(__WIN32__) || defined(__WIN64__)

void threading_native_ThreadLocalWin32__ThreadLocalWin32_init_windows(threading_native_ThreadLocalWin32__ThreadLocalWin32* this) {
}

void threading_native_ThreadLocalWin32__ThreadLocalWin32_set_impl(threading_native_ThreadLocalWin32__ThreadLocalWin32* this, uint8_t* value) {
    threading_Thread__Mutex_lock((threading_Thread__Mutex*) this->valuesMutex);
    lang_Numbers__Long __genArg228 = threading_native_ThreadLocalWin32__GetCurrentThreadId();
    structs_HashMap__HashMap_put(this->values, (uint8_t*) &(__genArg228), (uint8_t*) value);
    threading_Thread__Mutex_unlock((threading_Thread__Mutex*) this->valuesMutex);
}

void threading_native_ThreadLocalWin32__ThreadLocalWin32_get_impl(threading_native_ThreadLocalWin32__ThreadLocalWin32* this, uint8_t* __genericReturn94) {
    threading_Thread__Mutex_lock((threading_Thread__Mutex*) this->valuesMutex);
    lang_Numbers__Long __genArg229 = threading_native_ThreadLocalWin32__GetCurrentThreadId();
    uint8_t* value = lang_Memory__gc_malloc(((threading_Thread__ThreadLocal*)this)->T->size);
    structs_HashMap__HashMap_get(this->values, value, (uint8_t*) &(__genArg229));
    threading_Thread__Mutex_unlock((threading_Thread__Mutex*) this->valuesMutex);
    if (__genericReturn94) {
        lang_Memory__memcpy(__genericReturn94, value, ((threading_Thread__ThreadLocal*)this)->T->size);
    }
    return;
}

lang_types__Bool threading_native_ThreadLocalWin32__ThreadLocalWin32_hasValue__quest_impl(threading_native_ThreadLocalWin32__ThreadLocalWin32* this) {
    threading_Thread__Mutex_lock((threading_Thread__Mutex*) this->valuesMutex);
    lang_Numbers__Long __genArg230 = threading_native_ThreadLocalWin32__GetCurrentThreadId();
    lang_types__Bool has = structs_HashMap__HashMap_contains__quest(this->values, (uint8_t*) &(__genArg230));
    threading_Thread__Mutex_unlock((threading_Thread__Mutex*) this->valuesMutex);
    return has;
}

void threading_native_ThreadLocalWin32__ThreadLocalWin32___defaults___impl(threading_native_ThreadLocalWin32__ThreadLocalWin32* this) {
    threading_Thread__ThreadLocal___defaults___impl((threading_Thread__ThreadLocal*) this);
    this->values = structs_HashMap__HashMap_new((lang_types__Class*)lang_Numbers__Long_class(), (lang_types__Class*)((threading_Thread__ThreadLocal*)this)->T);
    this->valuesMutex = threading_Thread__Mutex_new();
}

void threading_native_ThreadLocalWin32__ThreadLocalWin32_set(threading_native_ThreadLocalWin32__ThreadLocalWin32* this, uint8_t* value) {
    ((threading_Thread__ThreadLocalClass *)((lang_types__Object *)this)->class)->set((threading_Thread__ThreadLocal*)this, value);
}

void threading_native_ThreadLocalWin32__ThreadLocalWin32_get(threading_native_ThreadLocalWin32__ThreadLocalWin32* this, uint8_t* __genericReturn94) {
    ((threading_Thread__ThreadLocalClass *)((lang_types__Object *)this)->class)->get((threading_Thread__ThreadLocal*)this, __genericReturn94);
}

lang_types__Bool threading_native_ThreadLocalWin32__ThreadLocalWin32_hasValue__quest(threading_native_ThreadLocalWin32__ThreadLocalWin32* this) {
    return (lang_types__Bool) ((threading_Thread__ThreadLocalClass *)((lang_types__Object *)this)->class)->hasValue__quest((threading_Thread__ThreadLocal*)this);
}

void threading_native_ThreadLocalWin32__ThreadLocalWin32___defaults__(threading_native_ThreadLocalWin32__ThreadLocalWin32* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
threading_native_ThreadLocalWin32__ThreadLocalWin32* threading_native_ThreadLocalWin32__ThreadLocalWin32_new_windows(lang_types__Class* T) {
    
    threading_native_ThreadLocalWin32__ThreadLocalWin32* this = ((threading_native_ThreadLocalWin32__ThreadLocalWin32*) (lang_types__Class_alloc__class((lang_types__Class*) threading_native_ThreadLocalWin32__ThreadLocalWin32_class())));
    ((threading_Thread__ThreadLocal*)this)->T = T;
    threading_native_ThreadLocalWin32__ThreadLocalWin32___defaults__(this);
    threading_native_ThreadLocalWin32__ThreadLocalWin32_init_windows((threading_native_ThreadLocalWin32__ThreadLocalWin32*) this);
    return this;
}
void threading_native_ThreadLocalWin32__ThreadLocalWin32___load__() {
    threading_Thread__ThreadLocal___load__();
}

threading_native_ThreadLocalWin32__ThreadLocalWin32Class *threading_native_ThreadLocalWin32__ThreadLocalWin32_class(){
    static _Bool __done__ = false;
    static threading_native_ThreadLocalWin32__ThreadLocalWin32Class class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(threading_native_ThreadLocalWin32__ThreadLocalWin32),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) threading_native_ThreadLocalWin32__ThreadLocalWin32___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) threading_native_ThreadLocalWin32__ThreadLocalWin32___load__,
                },
            },
            .new = (void*) threading_Thread__ThreadLocal_new,
            .set = (void*) threading_native_ThreadLocalWin32__ThreadLocalWin32_set_impl,
            .get = (void*) threading_native_ThreadLocalWin32__ThreadLocalWin32_get_impl,
            .hasValue__quest = (void*) threading_native_ThreadLocalWin32__ThreadLocalWin32_hasValue__quest_impl,
        },
        .new_windows = (void*) threading_native_ThreadLocalWin32__ThreadLocalWin32_new_windows,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) threading_Thread__ThreadLocal_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("ThreadLocalWin32", 16);
    }
    return &class;
}
#endif
void threading_native_ThreadLocalWin32_load() {
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
        structs_HashMap_load();
        threading_Thread_load();
        threading_native_ThreadWin32_load();
        #if defined(__WIN32__) || defined(__WIN64__)
        threading_native_ThreadLocalWin32__ThreadLocalWin32___load__();
        #endif
    }
}

