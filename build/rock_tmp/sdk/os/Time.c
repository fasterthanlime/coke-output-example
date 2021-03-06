/* os/Time source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/os/Time.h>
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

static lang_String__String* __strLit81;
#if defined(__WIN32__) || defined(__WIN64__)
void os_Time__SystemTime___load__() {
    lang_types__Class___load__();
}

os_Time__SystemTimeClass *os_Time__SystemTime_class(){
    static _Bool __done__ = false;
    static os_Time__SystemTimeClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Time__SystemTime),
                    .size = sizeof(os_Time__SystemTime)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_Time__SystemTime___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("SystemTime", 10);
    }
    return &class;
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)
void os_Time__LocaleId___load__() {
    lang_types__Class___load__();
}

os_Time__LocaleIdClass *os_Time__LocaleId_class(){
    static _Bool __done__ = false;
    static os_Time__LocaleIdClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Time__LocaleId),
                    .size = sizeof(os_Time__LocaleId)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_Time__LocaleId___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("LocaleId", 8);
    }
    return &class;
}
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
void os_Time__TimeT___load__() {
    lang_types__Class___load__();
}

os_Time__TimeTClass *os_Time__TimeT_class(){
    static _Bool __done__ = false;
    static os_Time__TimeTClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Time__TimeT),
                    .size = sizeof(os_Time__TimeT)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_Time__TimeT___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("TimeT", 5);
    }
    return &class;
}
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
void os_Time__TimeZone___load__() {
    lang_types__Class___load__();
}

os_Time__TimeZoneClass *os_Time__TimeZone_class(){
    static _Bool __done__ = false;
    static os_Time__TimeZoneClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Time__TimeZone),
                    .size = sizeof(os_Time__TimeZone)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_Time__TimeZone___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("TimeZone", 8);
    }
    return &class;
}
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
void os_Time__TMStruct___load__() {
    lang_types__Class___load__();
}

os_Time__TMStructClass *os_Time__TMStruct_class(){
    static _Bool __done__ = false;
    static os_Time__TMStructClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Time__TMStruct),
                    .size = sizeof(os_Time__TMStruct)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_Time__TMStruct___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("TMStruct", 8);
    }
    return &class;
}
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
void os_Time__TimeVal___load__() {
    lang_types__Class___load__();
}

os_Time__TimeValClass *os_Time__TimeVal_class(){
    static _Bool __done__ = false;
    static os_Time__TimeValClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Time__TimeVal),
                    .size = sizeof(os_Time__TimeVal)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_Time__TimeVal___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("TimeVal", 7);
    }
    return &class;
}
#endif

void os_Time__Time_init(os_Time__Time* this) {
}

void os_Time__Time___defaults___impl(os_Time__Time* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void os_Time__Time___defaults__(os_Time__Time* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
os_Time__Time* os_Time__Time_new() {
    
    os_Time__Time* this = ((os_Time__Time*) (lang_types__Class_alloc__class((lang_types__Class*) os_Time__Time_class())));
    os_Time__Time___defaults__(this);
    os_Time__Time_init((os_Time__Time*) this);
    return this;
}
lang_String__String* os_Time__Time_dateTime() {
    
    
    #if defined(__WIN32__) || defined(__WIN64__)
    lang_Numbers__Int length = os_Time__GetTimeFormat(LOCALE_USER_DEFAULT, 0, NULL, NULL, NULL, 0);
    lang_Character__Char* buffer = ((lang_Character__Char*) (lang_Memory__gc_malloc(length + 1)));
    os_Time__GetTimeFormat(LOCALE_USER_DEFAULT, 0, NULL, NULL, buffer, length);
    return lang_String__String_new_withCStrAndLength(buffer, length);
    #endif
    
    #if !(defined(__WIN32__) || defined(__WIN64__))
    os_Time__TimeT tm;
    os_Time__time(&(tm));
    return os_Time__asctime(os_Time__localtime(&(tm)));
    #endif
    return __strLit81;
}
lang_Numbers__LLong os_Time__Time_microtime() {
    
    return ((lang_Numbers__LLong) (os_Time__Time_microsec())) + (((lang_Numbers__LLong) (os_Time__Time_sec()))) * 1000000;
}
lang_Numbers__UInt os_Time__Time_microsec() {
    
    
    #if defined(__WIN32__) || defined(__WIN64__)
    os_Time__SystemTime st;
    os_Time__GetLocalTime(&(st));
    return ((lang_Numbers__UInt) (st.wMilliseconds * 1000));
    #endif
    
    #if !(defined(__WIN32__) || defined(__WIN64__))
    os_Time__TimeVal tv;
    os_Time__gettimeofday(&(tv), NULL);
    return ((lang_Numbers__UInt) (tv.tv_usec));
    #endif
    return ((lang_Numbers__UInt) (-1));
}
lang_Numbers__UInt os_Time__Time_measure(lang_types__Closure action) {
    
    lang_Numbers__UInt t1 = os_Time__Time___getrunTime__();
    ((void (*)(void*)) action.thunk)(action.context);
    lang_Numbers__UInt t2 = os_Time__Time___getrunTime__();
    return t2 - t1;
}
lang_Numbers__UInt os_Time__Time_sec() {
    
    
    #if defined(__WIN32__) || defined(__WIN64__)
    os_Time__SystemTime st;
    os_Time__GetLocalTime(&(st));
    return ((lang_Numbers__UInt) (st.wSecond));
    #endif
    
    #if !(defined(__WIN32__) || defined(__WIN64__))
    os_Time__TimeT tt = os_Time__time(NULL);
    os_Time__TMStruct* val = os_Time__localtime(&(tt));
    return ((lang_Numbers__UInt) ((*(val)).tm_sec));
    #endif
    return ((lang_Numbers__UInt) (-1));
}
lang_Numbers__UInt os_Time__Time_min() {
    
    
    #if defined(__WIN32__) || defined(__WIN64__)
    os_Time__SystemTime st;
    os_Time__GetLocalTime(&(st));
    return ((lang_Numbers__UInt) (st.wMinute));
    #endif
    
    #if !(defined(__WIN32__) || defined(__WIN64__))
    os_Time__TimeT tt = os_Time__time(NULL);
    os_Time__TMStruct* val = os_Time__localtime(&(tt));
    return ((lang_Numbers__UInt) ((*(val)).tm_min));
    #endif
    return ((lang_Numbers__UInt) (-1));
}
lang_Numbers__UInt os_Time__Time_hour() {
    
    
    #if defined(__WIN32__) || defined(__WIN64__)
    os_Time__SystemTime st;
    os_Time__GetLocalTime(&(st));
    return ((lang_Numbers__UInt) (st.wHour));
    #endif
    
    #if !(defined(__WIN32__) || defined(__WIN64__))
    os_Time__TimeT tt = os_Time__time(NULL);
    os_Time__TMStruct* val = os_Time__localtime(&(tt));
    return ((lang_Numbers__UInt) ((*(val)).tm_hour));
    #endif
    return ((lang_Numbers__UInt) (-1));
}
void os_Time__Time_sleepSec(lang_Numbers__Float duration) {
    
    os_Time__Time_sleepMicro(duration * 1000000);
}
void os_Time__Time_sleepMilli(lang_Numbers__UInt duration) {
    
    os_Time__Time_sleepMicro(duration * 1000);
}
void os_Time__Time_sleepMicro(lang_Numbers__UInt duration) {
    
    
    #if defined(__WIN32__) || defined(__WIN64__)
    os_Time__Sleep(duration / 1000);
    #endif
    
    #if !(defined(__WIN32__) || defined(__WIN64__))
    os_Time__usleep(duration);
    #endif
}
void os_Time__Time___load__() {
    lang_types__Class___load__();
    os_Time__Time_class()->__time_millisec_base = os_Time__Time___getrunTime__();
}
lang_Numbers__UInt os_Time__Time___getrunTime__() {
    
    
    #if defined(__WIN32__) || defined(__WIN64__)
    native_win32_types__LargeInteger counter;
    native_win32_types__LargeInteger frequency;
    os_Time__QueryPerformanceCounter(&(counter));
    os_Time__QueryPerformanceFrequency(&(frequency));
    return ((lang_Numbers__UInt) (((counter.QuadPart * 1000) / frequency.QuadPart) - os_Time__Time_class()->__time_millisec_base));
    #endif
    
    #if !(defined(__WIN32__) || defined(__WIN64__))
    os_Time__TimeVal tv;
    os_Time__gettimeofday(&(tv), NULL);
    return ((lang_Numbers__UInt) (((tv.tv_usec / 1000 + tv.tv_sec * 1000) - os_Time__Time_class()->__time_millisec_base)));
    #endif
    return ((lang_Numbers__UInt) (-1));
}

os_Time__TimeClass *os_Time__Time_class(){
    static _Bool __done__ = false;
    static os_Time__TimeClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Time__Time),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) os_Time__Time___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_Time__Time___load__,
            },
        },
        .new = (void*) os_Time__Time_new,
        .dateTime = (void*) os_Time__Time_dateTime,
        .microtime = (void*) os_Time__Time_microtime,
        .microsec = (void*) os_Time__Time_microsec,
        .measure = (void*) os_Time__Time_measure,
        .sec = (void*) os_Time__Time_sec,
        .min = (void*) os_Time__Time_min,
        .hour = (void*) os_Time__Time_hour,
        .sleepSec = (void*) os_Time__Time_sleepSec,
        .sleepMilli = (void*) os_Time__Time_sleepMilli,
        .sleepMicro = (void*) os_Time__Time_sleepMicro,
        .__getrunTime__ = (void*) os_Time__Time___getrunTime__,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Time", 4);
    }
    return &class;
}
void os_Time_load() {
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
        native_win32_types_load();
        #if defined(__WIN32__) || defined(__WIN64__)
        os_Time__SystemTime___load__();
        #endif
        #if defined(__WIN32__) || defined(__WIN64__)
        os_Time__LocaleId___load__();
        #endif
        #if !(defined(__WIN32__) || defined(__WIN64__))
        os_Time__TimeT___load__();
        #endif
        #if !(defined(__WIN32__) || defined(__WIN64__))
        os_Time__TimeZone___load__();
        #endif
        #if !(defined(__WIN32__) || defined(__WIN64__))
        os_Time__TMStruct___load__();
        #endif
        #if !(defined(__WIN32__) || defined(__WIN64__))
        os_Time__TimeVal___load__();
        #endif
        os_Time__Time___load__();
        __strLit81 = (void*) lang_String__makeStringLiteral("<unsupported platform>", 22);
        
        #if defined(__WIN32__) || defined(__WIN64__)
        ;
        #endif
    }
}

#if !(defined(__WIN32__) || defined(__WIN64__))

lang_String__String* os_Time__asctime(os_Time__TMStruct* timePtr) {
    lang_Character__CString cStr = os_Time___asctime(timePtr);
    return lang_String__String_new_withCStrAndLength(cStr, lang_Character__CString_length(cStr) - 1);
}
#endif
