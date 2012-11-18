/* native/win32/types source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/native/win32/types.h>
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

#if defined(__WIN32__) || defined(__WIN64__)
void native_win32_types__LocaleId___load__() {
    lang_types__Class___load__();
}

native_win32_types__LocaleIdClass *native_win32_types__LocaleId_class(){
    static _Bool __done__ = false;
    static native_win32_types__LocaleIdClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(native_win32_types__LocaleId),
                    .size = sizeof(native_win32_types__LocaleId)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) native_win32_types__LocaleId___load__,
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
#if defined(__WIN32__) || defined(__WIN64__)
void native_win32_types__Handle___load__() {
    lang_types__Class___load__();
}

native_win32_types__HandleClass *native_win32_types__Handle_class(){
    static _Bool __done__ = false;
    static native_win32_types__HandleClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(native_win32_types__Handle),
                    .size = sizeof(native_win32_types__Handle)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) native_win32_types__Handle___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Handle", 6);
    }
    return &class;
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)
void native_win32_types__LargeInteger___load__() {
    lang_types__Class___load__();
}

native_win32_types__LargeIntegerClass *native_win32_types__LargeInteger_class(){
    static _Bool __done__ = false;
    static native_win32_types__LargeIntegerClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(native_win32_types__LargeInteger),
                    .size = sizeof(native_win32_types__LargeInteger)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) native_win32_types__LargeInteger___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("LargeInteger", 12);
    }
    return &class;
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)
void native_win32_types__ULargeInteger___load__() {
    lang_types__Class___load__();
}

native_win32_types__ULargeIntegerClass *native_win32_types__ULargeInteger_class(){
    static _Bool __done__ = false;
    static native_win32_types__ULargeIntegerClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(native_win32_types__ULargeInteger),
                    .size = sizeof(native_win32_types__ULargeInteger)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) native_win32_types__ULargeInteger___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("ULargeInteger", 13);
    }
    return &class;
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)
void native_win32_types__FileTime___load__() {
    lang_types__Class___load__();
}

native_win32_types__FileTimeClass *native_win32_types__FileTime_class(){
    static _Bool __done__ = false;
    static native_win32_types__FileTimeClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(native_win32_types__FileTime),
                    .size = sizeof(native_win32_types__FileTime)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) native_win32_types__FileTime___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("FileTime", 8);
    }
    return &class;
}
#endif
void native_win32_types_load() {
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
        #if defined(__WIN32__) || defined(__WIN64__)
        native_win32_types__LocaleId___load__();
        #endif
        #if defined(__WIN32__) || defined(__WIN64__)
        native_win32_types__Handle___load__();
        #endif
        #if defined(__WIN32__) || defined(__WIN64__)
        native_win32_types__LargeInteger___load__();
        #endif
        #if defined(__WIN32__) || defined(__WIN64__)
        native_win32_types__ULargeInteger___load__();
        #endif
        #if defined(__WIN32__) || defined(__WIN64__)
        native_win32_types__FileTime___load__();
        #endif
        
        #if defined(__WIN32__) || defined(__WIN64__)
        ;
        #endif
    }
}

#if defined(__WIN32__) || defined(__WIN64__)

lang_Numbers__LLong native_win32_types__toLLong_twoPartsLargeInteger(lang_Numbers__Long lowPart, lang_Numbers__Long highPart) {
    native_win32_types__LargeInteger li;
    li.LowPart = lowPart;
    li.HighPart = highPart;
    return li.QuadPart;
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)

lang_Numbers__ULLong native_win32_types__toULLong_twoPartsLargeInteger(lang_Numbers__Long lowPart, lang_Numbers__Long highPart) {
    native_win32_types__ULargeInteger li;
    li.LowPart = lowPart;
    li.HighPart = highPart;
    return ((lang_Numbers__ULLong) (li.QuadPart));
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)

lang_Numbers__Long native_win32_types__toTimestamp_fromFiletime(native_win32_types__FileTime fileTime) {
    native_win32_types__LargeInteger date;
    native_win32_types__LargeInteger adjust;
    date.LowPart = fileTime.dwLowDateTime;
    date.HighPart = fileTime.dwHighDateTime;
    adjust.QuadPart = (lang_Numbers__LLong) 817260544 * 10000;
    date.QuadPart -= adjust.QuadPart;
    return ((lang_Numbers__Long) (date.QuadPart / 10000000));
}
#endif
