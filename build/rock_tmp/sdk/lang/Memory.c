/* lang/Memory source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/Memory.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/BufferIterator.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Character.h>
#include <sdk/lang/VarArgs.h>
#include <sdk/lang/types.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Buffer.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Abstractions.h>
#include <sdk/lang/Format.h>
#include <sdk/lang/IO.h>

void lang_Memory_load() {
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
        lang_String_load();
        lang_Buffer_load();
        lang_Numbers_load();
        lang_Abstractions_load();
        lang_Format_load();
        lang_IO_load();
        
        #if defined(__OOC_USE_GC__)
        ;
        #endif
    }
}

#if !(defined(__OOC_USE_GC__))

lang_types__Pointer lang_Memory__gc_malloc(lang_Numbers__SizeT size) {
    return lang_Memory__gc_calloc(1, size);
}
#endif
#if defined(__OOC_USE_GC__)

lang_types__Pointer lang_Memory__gc_calloc(lang_Numbers__SizeT nmemb, lang_Numbers__SizeT size) {
    return lang_Memory__gc_malloc(nmemb * size);
}
#endif
#if defined(__OOC_USE_GC__)

lang_types__Pointer lang_Memory__gc_malloc_for_generics(lang_Numbers__SizeT size) {
    return lang_Memory__gc_malloc(size);
}
#endif
