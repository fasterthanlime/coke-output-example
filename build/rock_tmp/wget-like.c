/* wget-like source file, generated with rock, the ooc compiler written in ooc */

#include <./wget-like.h>
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
#include <sdk/lang/Abstractions.h>
#include <sdk/lang/Format.h>
#include <sdk/lang/IO.h>
#include <source/curl/Curl.h>
#include <sdk/io/FileWriter.h>
#include <sdk/structs/ArrayList.h>

static lang_String__String* __strLit1;
void wget_like_load() {
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
        curl_Curl_load();
        io_FileWriter_load();
        structs_ArrayList_load();
        __strLit1 = (void*) lang_String__makeStringLiteral("Usage: %s URL\n", 14);
    }
}


void wget_like__writecb(lang_types__Pointer buffer, lang_Numbers__SizeT size, lang_Numbers__SizeT nmemb, io_FileWriter__FileWriter* fw) {
    io_FileWriter__FileWriter_write(fw, ((lang_Character__CString) (buffer)), nmemb);
}

lang_Numbers__Int main(lang_Numbers__Int argc, lang_Character__CString* argv) {
    GC_INIT();
    wget_like_load();
    structs_ArrayList__ArrayList* wget_like__args = lang_String__strArrayListFromCString(argc, argv);
    if (structs_ArrayList__ArrayList___getsize__(wget_like__args) <= 1) {
        lang_String__String* __genCall249 = NULL;
        struct { 
            lang_types__Pointer __f1;
            lang_String__String* __f2;
        } ____va_args250 = { 
            lang_String__String_class(), 
            (structs_ArrayList____OP_IDX_ArrayList_Int__T((uint8_t*) &(__genCall249), (lang_types__Class*)lang_String__String_class(), wget_like__args, 0), __genCall249)
        };
        lang_VarArgs__VarArgs ____va251 = (lang_VarArgs__VarArgs) { 
            (void*) &(____va_args250), 
            NULL, 
            1
        };
        lang_String__String_printfln((lang_String__String*) __strLit1, ____va251);
        lang_System__exit(0);
    }
    lang_String__String* url = NULL;
    structs_ArrayList__ArrayList_get(wget_like__args, (uint8_t*) &(url), 1);
    lang_String__String* fName = (void*) lang_String__makeStringLiteral("tmp.html", 8);
    io_FileWriter__FileWriter* fw = io_FileWriter__FileWriter_new_withNameOverwrite(fName);
    curl_Curl__Curl handle = curl_Curl__Curl_new();
    curl_Curl__Curl_setOpt(handle, CURLOPT_URL, lang_String__String_toCString(url));
    curl_Curl__Curl_setOpt(handle, CURLOPT_WRITEDATA, fw);
    curl_Curl__Curl_setOpt(handle, CURLOPT_WRITEFUNCTION, wget_like__writecb);
    curl_Curl__Curl_perform(handle);
    curl_Curl__Curl_cleanup(handle);
    io_FileWriter__FileWriter_close(fw);
    return ((lang_Numbers__Int) (0));
}
