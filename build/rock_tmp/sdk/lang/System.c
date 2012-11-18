/* lang/System source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/System.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/BufferIterator.h>
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

void lang_System__VaList___load__() {
    lang_types__Class___load__();
}

lang_System__VaListClass *lang_System__VaList_class(){
    static _Bool __done__ = false;
    static lang_System__VaListClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_System__VaList),
                    .size = sizeof(lang_System__VaList)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_System__VaList___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("VaList", 6);
    }
    return &class;
}
void lang_System_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Exception_load();
        lang_BufferIterator_load();
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
        lang_System__VaList___load__();
    }
}

