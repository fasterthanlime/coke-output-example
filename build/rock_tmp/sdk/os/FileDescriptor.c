/* os/FileDescriptor source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/os/FileDescriptor.h>
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
#include <sdk/os/unistd.h>

static lang_String__String* __strLit116;

lang_Numbers__Int os_FileDescriptor__FileDescriptor_write_string(os_FileDescriptor__FileDescriptor this, lang_String__String* str) {
    return os_FileDescriptor__FileDescriptor_write(this, lang_String__String_toCString(str), lang_String__String___getsize__(str));
}

lang_types__Pointer os_FileDescriptor__FileDescriptor_read_evilAlloc(os_FileDescriptor__FileDescriptor this, lang_Numbers__Int len) {
    lang_types__Pointer buf = lang_Memory__gc_malloc(len);
    os_FileDescriptor__FileDescriptor_read(this, buf, len);
    return buf;
}

void os_FileDescriptor__FileDescriptor__errMsg(os_FileDescriptor__FileDescriptor this, lang_Numbers__Int var, lang_String__String* funcName) {
    if (var < (lang_Numbers__Int) 0) {
        lang_IO__printf(lang_String____OP_AS_String__Char__star(__strLit116), lang_String__String_toCString(funcName));
    }
}
void os_FileDescriptor__FileDescriptor___load__() {
    lang_types__Class___load__();
}

os_FileDescriptor__FileDescriptorClass *os_FileDescriptor__FileDescriptor_class(){
    static _Bool __done__ = false;
    static os_FileDescriptor__FileDescriptorClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_FileDescriptor__FileDescriptor),
                    .size = sizeof(os_FileDescriptor__FileDescriptor)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_FileDescriptor__FileDescriptor___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("FileDescriptor", 14);
    }
    return &class;
}
void os_FileDescriptor_load() {
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
        os_unistd_load();
        os_FileDescriptor__FileDescriptor___load__();
        __strLit116 = (void*) lang_String__makeStringLiteral("Error in FileDescriptor : %s\n", 29);
    }
}

