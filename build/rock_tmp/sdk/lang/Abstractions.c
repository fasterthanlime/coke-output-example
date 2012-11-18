/* lang/Abstractions source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/Abstractions.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/BufferIterator.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Character.h>
#include <sdk/lang/VarArgs.h>
#include <sdk/lang/types.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/Memory.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Buffer.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Format.h>
#include <sdk/lang/IO.h>

void lang_Abstractions_load() {
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
        lang_Format_load();
        lang_IO_load();
    }
}


void lang_Abstractions__loop(lang_types__Closure f) {
    while (((lang_types__Bool (*)(void*)) f.thunk)(f.context)) {
    }
}
