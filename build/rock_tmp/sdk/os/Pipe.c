/* os/Pipe source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/os/Pipe.h>
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
#include <sdk/os/native/PipeUnix.h>
#include <sdk/os/native/PipeWin32.h>

static lang_String__String* __strLit154;

void os_Pipe__Pipe_init(os_Pipe__Pipe* this) {
}

lang_Numbers__Int os_Pipe__Pipe_write_string_impl(os_Pipe__Pipe* this, lang_String__String* str) {
    return os_Pipe__Pipe_write(this, lang_String__String_toCString(str), lang_String__String_length(str));
}

void os_Pipe__Pipe___defaults___impl(os_Pipe__Pipe* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

lang_types__Pointer os_Pipe__Pipe_read(os_Pipe__Pipe* this, lang_Numbers__Int len) {
    return (lang_types__Pointer) ((os_Pipe__PipeClass *)((lang_types__Object *)this)->class)->read((os_Pipe__Pipe*)this, len);
}

lang_Numbers__Int os_Pipe__Pipe_write_string(os_Pipe__Pipe* this, lang_String__String* str) {
    return (lang_Numbers__Int) ((os_Pipe__PipeClass *)((lang_types__Object *)this)->class)->write_string((os_Pipe__Pipe*)this, str);
}

lang_Numbers__Int os_Pipe__Pipe_write(os_Pipe__Pipe* this, lang_types__Pointer data, lang_Numbers__Int len) {
    return (lang_Numbers__Int) ((os_Pipe__PipeClass *)((lang_types__Object *)this)->class)->write((os_Pipe__Pipe*)this, data, len);
}

lang_Numbers__Int os_Pipe__Pipe_close(os_Pipe__Pipe* this, lang_Character__Char mode) {
    return (lang_Numbers__Int) ((os_Pipe__PipeClass *)((lang_types__Object *)this)->class)->close((os_Pipe__Pipe*)this, mode);
}

void os_Pipe__Pipe___defaults__(os_Pipe__Pipe* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
os_Pipe__Pipe* os_Pipe__Pipe_new() {
    
    
    #if ((defined(__unix__)) || (defined(__APPLE__)))
    return ((os_Pipe__Pipe*) (os_native_PipeUnix__PipeUnix_new_twos()));
    #endif
    
    #if defined(__WIN32__) || defined(__WIN64__)
    return ((os_Pipe__Pipe*) (os_native_PipeWin32__PipeWin32_new_twos()));
    #endif
    lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (os_Pipe__Pipe_class()), __strLit154));
    return ((os_Pipe__Pipe*) (NULL));
}
void os_Pipe__Pipe___load__() {
    lang_types__Class___load__();
}

os_Pipe__PipeClass *os_Pipe__Pipe_class(){
    static _Bool __done__ = false;
    static os_Pipe__PipeClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_Pipe__Pipe),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) os_Pipe__Pipe___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_Pipe__Pipe___load__,
            },
        },
        .new = (void*) os_Pipe__Pipe_new,
        .read = (void*) os_Pipe__Pipe_read,
        .write_string = (void*) os_Pipe__Pipe_write_string_impl,
        .write = (void*) os_Pipe__Pipe_write,
        .close = (void*) os_Pipe__Pipe_close,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Pipe", 4);
    }
    return &class;
}
void os_Pipe_load() {
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
        os_native_PipeUnix_load();
        os_native_PipeWin32_load();
        os_Pipe__Pipe___load__();
        __strLit154 = (void*) lang_String__makeStringLiteral("Unsupported platform!\n", 22);
    }
}

