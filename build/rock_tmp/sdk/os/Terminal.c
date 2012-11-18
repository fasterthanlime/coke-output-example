/* os/Terminal source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/os/Terminal.h>
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
#include <sdk/os/FileDescriptor.h>
#include <sdk/os/unistd.h>
#include <sdk/native/win32/types.h>

lang_String__String* os_Terminal__COLOR_FORMAT_STRING;

void os_Terminal__Attr_init(os_Terminal__Attr* this) {
}

void os_Terminal__Attr___defaults___impl(os_Terminal__Attr* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void os_Terminal__Attr___defaults__(os_Terminal__Attr* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
os_Terminal__Attr* os_Terminal__Attr_new() {
    
    os_Terminal__Attr* this = ((os_Terminal__Attr*) (lang_types__Class_alloc__class((lang_types__Class*) os_Terminal__Attr_class())));
    os_Terminal__Attr___defaults__(this);
    os_Terminal__Attr_init((os_Terminal__Attr*) this);
    return this;
}
void os_Terminal__Attr___load__() {
    lang_types__Class___load__();
    os_Terminal__Attr_class()->reset = 0;
    os_Terminal__Attr_class()->bright = 1;
    os_Terminal__Attr_class()->dim = 2;
    os_Terminal__Attr_class()->under = 4;
    os_Terminal__Attr_class()->blink = 5;
    os_Terminal__Attr_class()->reverse = 7;
    os_Terminal__Attr_class()->hidden = 8;
}

os_Terminal__AttrClass *os_Terminal__Attr_class(){
    static _Bool __done__ = false;
    static os_Terminal__AttrClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Terminal__Attr),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) os_Terminal__Attr___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_Terminal__Attr___load__,
            },
        },
        .new = (void*) os_Terminal__Attr_new,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Attr", 4);
    }
    return &class;
}
#if ((defined(__unix__)) || (defined(__APPLE__)))

void os_Terminal__Color_init(os_Terminal__Color* this) {
}

void os_Terminal__Color___defaults___impl(os_Terminal__Color* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void os_Terminal__Color___defaults__(os_Terminal__Color* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
os_Terminal__Color* os_Terminal__Color_new() {
    
    os_Terminal__Color* this = ((os_Terminal__Color*) (lang_types__Class_alloc__class((lang_types__Class*) os_Terminal__Color_class())));
    os_Terminal__Color___defaults__(this);
    os_Terminal__Color_init((os_Terminal__Color*) this);
    return this;
}
void os_Terminal__Color___load__() {
    lang_types__Class___load__();
    os_Terminal__Color_class()->black = 30;
    os_Terminal__Color_class()->red = 31;
    os_Terminal__Color_class()->green = 32;
    os_Terminal__Color_class()->yellow = 33;
    os_Terminal__Color_class()->blue = 34;
    os_Terminal__Color_class()->magenta = 35;
    os_Terminal__Color_class()->cyan = 36;
    os_Terminal__Color_class()->grey = 37;
    os_Terminal__Color_class()->white = 38;
}

os_Terminal__ColorClass *os_Terminal__Color_class(){
    static _Bool __done__ = false;
    static os_Terminal__ColorClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Terminal__Color),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) os_Terminal__Color___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_Terminal__Color___load__,
            },
        },
        .new = (void*) os_Terminal__Color_new,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Color", 5);
    }
    return &class;
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)

void os_Terminal__Color_init(os_Terminal__Color* this) {
}

void os_Terminal__Color___defaults___impl(os_Terminal__Color* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void os_Terminal__Color___defaults__(os_Terminal__Color* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
os_Terminal__Color* os_Terminal__Color_new() {
    
    os_Terminal__Color* this = ((os_Terminal__Color*) (lang_types__Class_alloc__class((lang_types__Class*) os_Terminal__Color_class())));
    os_Terminal__Color___defaults__(this);
    os_Terminal__Color_init((os_Terminal__Color*) this);
    return this;
}
void os_Terminal__Color___load__() {
    lang_types__Class___load__();
    os_Terminal__Color_class()->black = 0;
    os_Terminal__Color_class()->grey = 7;
    os_Terminal__Color_class()->blue = 9;
    os_Terminal__Color_class()->red = 12;
    os_Terminal__Color_class()->yellow = 14;
    os_Terminal__Color_class()->white = 31;
    os_Terminal__Color_class()->green = 10;
    os_Terminal__Color_class()->magenta = 13;
    os_Terminal__Color_class()->cyan = 11;
}

os_Terminal__ColorClass *os_Terminal__Color_class(){
    static _Bool __done__ = false;
    static os_Terminal__ColorClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Terminal__Color),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) os_Terminal__Color___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_Terminal__Color___load__,
            },
        },
        .new = (void*) os_Terminal__Color_new,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Color", 5);
    }
    return &class;
}
#endif
#if !(((defined(__unix__)) || (((defined(__APPLE__)) || (defined(__WIN32__) || defined(__WIN64__))))))

void os_Terminal__Color_init(os_Terminal__Color* this) {
}

void os_Terminal__Color___defaults___impl(os_Terminal__Color* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void os_Terminal__Color___defaults__(os_Terminal__Color* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
os_Terminal__Color* os_Terminal__Color_new() {
    
    os_Terminal__Color* this = ((os_Terminal__Color*) (lang_types__Class_alloc__class((lang_types__Class*) os_Terminal__Color_class())));
    os_Terminal__Color___defaults__(this);
    os_Terminal__Color_init((os_Terminal__Color*) this);
    return this;
}
void os_Terminal__Color___load__() {
    lang_types__Class___load__();
    os_Terminal__Color_class()->black = 30;
    os_Terminal__Color_class()->red = 31;
    os_Terminal__Color_class()->green = 32;
    os_Terminal__Color_class()->yellow = 33;
    os_Terminal__Color_class()->blue = 34;
    os_Terminal__Color_class()->magenta = 35;
    os_Terminal__Color_class()->cyan = 36;
    os_Terminal__Color_class()->grey = 37;
    os_Terminal__Color_class()->white = 38;
}

os_Terminal__ColorClass *os_Terminal__Color_class(){
    static _Bool __done__ = false;
    static os_Terminal__ColorClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Terminal__Color),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) os_Terminal__Color___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_Terminal__Color___load__,
            },
        },
        .new = (void*) os_Terminal__Color_new,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Color", 5);
    }
    return &class;
}
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))

void os_Terminal__Terminal_init(os_Terminal__Terminal* this) {
}

void os_Terminal__Terminal___defaults___impl(os_Terminal__Terminal* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void os_Terminal__Terminal___defaults__(os_Terminal__Terminal* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
os_Terminal__Terminal* os_Terminal__Terminal_new() {
    
    os_Terminal__Terminal* this = ((os_Terminal__Terminal*) (lang_types__Class_alloc__class((lang_types__Class*) os_Terminal__Terminal_class())));
    os_Terminal__Terminal___defaults__(this);
    os_Terminal__Terminal_init((os_Terminal__Terminal*) this);
    return this;
}
void os_Terminal__Terminal_output(lang_String__String* fmt, ...) {
    
    if (os_unistd__isatty(STDOUT_FILENO)) {
        lang_System__VaList va;
        lang_System__va_start(va, fmt);
        lang_IO__vprintf(lang_String__String_toCString(fmt), va);
        lang_System__va_end(va);
    }
    lang_IO__fflush(stdout);
}
void os_Terminal__Terminal_setColor(lang_Numbers__Int f, lang_Numbers__Int b) {
    
    os_Terminal__Terminal_setFgColor(f);
    os_Terminal__Terminal_setBgColor(b);
}
void os_Terminal__Terminal_setFgColor(lang_Numbers__Int c) {
    
    if (c >= (lang_Numbers__Int) 30 && c <= (lang_Numbers__Int) 37) {
        os_Terminal__Terminal_output(os_Terminal__COLOR_FORMAT_STRING, c);
    }
}
void os_Terminal__Terminal_setBgColor(lang_Numbers__Int c) {
    
    if (c >= (lang_Numbers__Int) 30 && c <= (lang_Numbers__Int) 37) {
        os_Terminal__Terminal_output(os_Terminal__COLOR_FORMAT_STRING, c + 10);
    }
}
void os_Terminal__Terminal_setAttr(lang_Numbers__Int att) {
    
    if (att >= (lang_Numbers__Int) 0 && att <= (lang_Numbers__Int) 8) {
        os_Terminal__Terminal_output(os_Terminal__COLOR_FORMAT_STRING, att);
    }
}
void os_Terminal__Terminal_reset() {
    
    os_Terminal__Terminal_setAttr(os_Terminal__Attr_class()->reset);
}
void os_Terminal__Terminal___load__() {
    lang_types__Class___load__();
}

os_Terminal__TerminalClass *os_Terminal__Terminal_class(){
    static _Bool __done__ = false;
    static os_Terminal__TerminalClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Terminal__Terminal),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) os_Terminal__Terminal___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_Terminal__Terminal___load__,
            },
        },
        .new = (void*) os_Terminal__Terminal_new,
        .output = (void*) os_Terminal__Terminal_output,
        .setColor = (void*) os_Terminal__Terminal_setColor,
        .setFgColor = (void*) os_Terminal__Terminal_setFgColor,
        .setBgColor = (void*) os_Terminal__Terminal_setBgColor,
        .setAttr = (void*) os_Terminal__Terminal_setAttr,
        .reset = (void*) os_Terminal__Terminal_reset,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Terminal", 8);
    }
    return &class;
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)

void os_Terminal__Terminal_init(os_Terminal__Terminal* this) {
}

void os_Terminal__Terminal___defaults___impl(os_Terminal__Terminal* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void os_Terminal__Terminal___defaults__(os_Terminal__Terminal* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
os_Terminal__Terminal* os_Terminal__Terminal_new() {
    
    os_Terminal__Terminal* this = ((os_Terminal__Terminal*) (lang_types__Class_alloc__class((lang_types__Class*) os_Terminal__Terminal_class())));
    os_Terminal__Terminal___defaults__(this);
    os_Terminal__Terminal_init((os_Terminal__Terminal*) this);
    return this;
}
void os_Terminal__Terminal_output(lang_String__String* fmt, ...) {
    
}
void os_Terminal__Terminal_setColor(lang_Numbers__Int f, lang_Numbers__Int b) {
    
    os_Terminal__Terminal_class()->fg = f;
    os_Terminal__Terminal_class()->bg = b;
    lang_Numbers__UShort wColor = ((b & 15) << 4) + (f & 15);
    native_win32_types__Handle hStdOut = os_Terminal__GetStdHandle(STD_OUTPUT_HANDLE);
    os_Terminal__SetConsoleTextAttribute(hStdOut, wColor);
}
void os_Terminal__Terminal_setFgColor(lang_Numbers__Int c) {
    
    os_Terminal__Terminal_setColor(c, os_Terminal__Terminal_class()->bg);
}
void os_Terminal__Terminal_setBgColor(lang_Numbers__Int c) {
    
    os_Terminal__Terminal_setColor(os_Terminal__Terminal_class()->fg, c);
}
void os_Terminal__Terminal_setAttr(lang_Numbers__Int att) {
    
    if (att == os_Terminal__Attr_class()->reset) {
        os_Terminal__Terminal_reset();
    }
}
void os_Terminal__Terminal_reset() {
    
    os_Terminal__Terminal_setColor(os_Terminal__Color_class()->grey, os_Terminal__Color_class()->black);
}
void os_Terminal__Terminal___load__() {
    lang_types__Class___load__();
}

os_Terminal__TerminalClass *os_Terminal__Terminal_class(){
    static _Bool __done__ = false;
    static os_Terminal__TerminalClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Terminal__Terminal),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) os_Terminal__Terminal___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_Terminal__Terminal___load__,
            },
        },
        .new = (void*) os_Terminal__Terminal_new,
        .output = (void*) os_Terminal__Terminal_output,
        .setColor = (void*) os_Terminal__Terminal_setColor,
        .setFgColor = (void*) os_Terminal__Terminal_setFgColor,
        .setBgColor = (void*) os_Terminal__Terminal_setBgColor,
        .setAttr = (void*) os_Terminal__Terminal_setAttr,
        .reset = (void*) os_Terminal__Terminal_reset,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Terminal", 8);
    }
    return &class;
}
#endif
#if !(((defined(__unix__)) || (((defined(__APPLE__)) || (defined(__WIN32__) || defined(__WIN64__))))))

void os_Terminal__Terminal_init(os_Terminal__Terminal* this) {
}

void os_Terminal__Terminal___defaults___impl(os_Terminal__Terminal* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void os_Terminal__Terminal___defaults__(os_Terminal__Terminal* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
os_Terminal__Terminal* os_Terminal__Terminal_new() {
    
    os_Terminal__Terminal* this = ((os_Terminal__Terminal*) (lang_types__Class_alloc__class((lang_types__Class*) os_Terminal__Terminal_class())));
    os_Terminal__Terminal___defaults__(this);
    os_Terminal__Terminal_init((os_Terminal__Terminal*) this);
    return this;
}
void os_Terminal__Terminal_output(lang_String__String* fmt, ...) {
    
}
void os_Terminal__Terminal_setColor(lang_Numbers__Int f, lang_Numbers__Int b) {
    
}
void os_Terminal__Terminal_setFgColor(lang_Numbers__Int c) {
    
}
void os_Terminal__Terminal_setBgColor(lang_Numbers__Int c) {
    
}
void os_Terminal__Terminal_setAttr(lang_Numbers__Int att) {
    
}
void os_Terminal__Terminal_reset() {
    
}
void os_Terminal__Terminal___load__() {
    lang_types__Class___load__();
}

os_Terminal__TerminalClass *os_Terminal__Terminal_class(){
    static _Bool __done__ = false;
    static os_Terminal__TerminalClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Terminal__Terminal),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) os_Terminal__Terminal___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_Terminal__Terminal___load__,
            },
        },
        .new = (void*) os_Terminal__Terminal_new,
        .output = (void*) os_Terminal__Terminal_output,
        .setColor = (void*) os_Terminal__Terminal_setColor,
        .setFgColor = (void*) os_Terminal__Terminal_setFgColor,
        .setBgColor = (void*) os_Terminal__Terminal_setBgColor,
        .setAttr = (void*) os_Terminal__Terminal_setAttr,
        .reset = (void*) os_Terminal__Terminal_reset,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Terminal", 8);
    }
    return &class;
}
#endif
void os_Terminal_load() {
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
        os_FileDescriptor_load();
        os_unistd_load();
        native_win32_types_load();
        os_Terminal__Attr___load__();
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        os_Terminal__Color___load__();
        #endif
        #if defined(__WIN32__) || defined(__WIN64__)
        os_Terminal__Color___load__();
        #endif
        #if !(((defined(__unix__)) || (((defined(__APPLE__)) || (defined(__WIN32__) || defined(__WIN64__))))))
        os_Terminal__Color___load__();
        #endif
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        os_Terminal__Terminal___load__();
        #endif
        #if defined(__WIN32__) || defined(__WIN64__)
        os_Terminal__Terminal___load__();
        #endif
        #if !(((defined(__unix__)) || (((defined(__APPLE__)) || (defined(__WIN32__) || defined(__WIN64__))))))
        os_Terminal__Terminal___load__();
        #endif
        os_Terminal__COLOR_FORMAT_STRING = (void*) lang_String__makeStringLiteral("\033[%dm", 5);
        
        #if defined(__WIN32__) || defined(__WIN64__)
        ;
        #endif
    }
}

