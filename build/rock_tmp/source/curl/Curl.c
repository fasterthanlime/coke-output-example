/* curl/Curl source file, generated with rock, the ooc compiler written in ooc */

#include <source/curl/Curl.h>
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
#include <sdk/net/berkeley.h>

void CURLoption___load__() {
    lang_types__Class___load__();
}
void CURLcode___load__() {
    lang_types__Class___load__();
}
void CURLformoption___load__() {
    lang_types__Class___load__();
}
void CURLINFO___load__() {
    lang_types__Class___load__();
}
lang_String__String* curl_Curl__Curl_escape(lang_String__String* url) {
    
    return lang_Character__CString_toString(curl_Curl__Curl_escape_lowlevel(NULL, lang_String__String_toCString(url), lang_String__String___getsize__(url)));
}
lang_String__String* curl_Curl__Curl_unescape(lang_String__String* url) {
    
    lang_Numbers__Int outlength;
    lang_Character__CString cstr = curl_Curl__Curl_unescape_lowlevel(NULL, lang_String__String_toCString(url), lang_String__String___getsize__(url), &(outlength));
    return lang_String__String_new_withCStrAndLength(cstr, outlength);
}
void curl_Curl__Curl___load__() {
    lang_types__Class___load__();
}

curl_Curl__CurlClass *curl_Curl__Curl_class(){
    static _Bool __done__ = false;
    static curl_Curl__CurlClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(curl_Curl__Curl),
                    .size = sizeof(curl_Curl__Curl)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) curl_Curl__Curl___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Curl", 4);
    }
    return &class;
}
curl_Curl__CurlSList curl_Curl__CurlSList_new() {
    
    return ((curl_Curl__CurlSList) (NULL));
}
void curl_Curl__CurlSList___load__() {
    lang_types__Class___load__();
}

curl_Curl__CurlSListClass *curl_Curl__CurlSList_class(){
    static _Bool __done__ = false;
    static curl_Curl__CurlSListClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(curl_Curl__CurlSList),
                    .size = sizeof(curl_Curl__CurlSList)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) curl_Curl__CurlSList___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("CurlSList", 9);
    }
    return &class;
}
void curl_Curl__CurlOpt___load__() {
    lang_types__Class___load__();
}

curl_Curl__CurlOptClass *curl_Curl__CurlOpt_class(){
    static _Bool __done__ = false;
    static curl_Curl__CurlOptClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(curl_Curl__CurlOpt),
                    .size = sizeof(curl_Curl__CurlOpt)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) curl_Curl__CurlOpt___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("CurlOpt", 7);
    }
    return &class;
}
void curl_Curl__CurlForm___load__() {
    lang_types__Class___load__();
}

curl_Curl__CurlFormClass *curl_Curl__CurlForm_class(){
    static _Bool __done__ = false;
    static curl_Curl__CurlFormClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(curl_Curl__CurlForm),
                    .size = sizeof(curl_Curl__CurlForm)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) curl_Curl__CurlForm___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("CurlForm", 8);
    }
    return &class;
}
void curl_Curl__HTTPPost___load__() {
    lang_types__Class___load__();
}

curl_Curl__HTTPPostClass *curl_Curl__HTTPPost_class(){
    static _Bool __done__ = false;
    static curl_Curl__HTTPPostClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(curl_Curl__HTTPPost),
                    .size = sizeof(curl_Curl__HTTPPost)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) curl_Curl__HTTPPost___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("HTTPPost", 8);
    }
    return &class;
}
void curl_Curl__CurlInfo___load__() {
    lang_types__Class___load__();
}

curl_Curl__CurlInfoClass *curl_Curl__CurlInfo_class(){
    static _Bool __done__ = false;
    static curl_Curl__CurlInfoClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(curl_Curl__CurlInfo),
                    .size = sizeof(curl_Curl__CurlInfo)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) curl_Curl__CurlInfo___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("CurlInfo", 8);
    }
    return &class;
}
void CURLMcode___load__() {
    lang_types__Class___load__();
}

curl_Curl__MultiMsgTypeClass *curl_Curl__MultiMsgType_class(){
    static _Bool __done__ = false;
    static curl_Curl__MultiMsgTypeClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(int),
                    .size = sizeof(int)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_types__Class___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("MultiMsgType", 12);
    }
    return &class;
}
void curl_Curl___MultiMsgData___load__() {
    lang_types__Class___load__();
}

curl_Curl___MultiMsgDataClass *curl_Curl___MultiMsgData_class(){
    static _Bool __done__ = false;
    static curl_Curl___MultiMsgDataClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(curl_Curl___MultiMsgData),
                    .size = sizeof(curl_Curl___MultiMsgData)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) curl_Curl___MultiMsgData___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("_MultiMsgData", 13);
    }
    return &class;
}
void curl_Curl__MultiMsg___load__() {
    lang_types__Class___load__();
}

curl_Curl__MultiMsgClass *curl_Curl__MultiMsg_class(){
    static _Bool __done__ = false;
    static curl_Curl__MultiMsgClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(curl_Curl__MultiMsg),
                    .size = sizeof(curl_Curl__MultiMsg)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) curl_Curl__MultiMsg___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("MultiMsg", 8);
    }
    return &class;
}
void CURLSocket___load__() {
    lang_types__Class___load__();
}
void CURLMoption___load__() {
    lang_types__Class___load__();
}

curl_Curl__MultiErrorCodeClass *curl_Curl__MultiErrorCode_class(){
    static _Bool __done__ = false;
    static curl_Curl__MultiErrorCodeClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(int),
                    .size = sizeof(int)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_types__Class___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("MultiErrorCode", 14);
    }
    return &class;
}

curl_Curl__PollClass *curl_Curl__Poll_class(){
    static _Bool __done__ = false;
    static curl_Curl__PollClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(int),
                    .size = sizeof(int)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_types__Class___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Poll", 4);
    }
    return &class;
}
void curl_Curl__MultiOpt___load__() {
    lang_types__Class___load__();
}

curl_Curl__MultiOptClass *curl_Curl__MultiOpt_class(){
    static _Bool __done__ = false;
    static curl_Curl__MultiOptClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(curl_Curl__MultiOpt),
                    .size = sizeof(curl_Curl__MultiOpt)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) curl_Curl__MultiOpt___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("MultiOpt", 8);
    }
    return &class;
}
void curl_Curl__Multi___load__() {
    lang_types__Class___load__();
}

curl_Curl__MultiClass *curl_Curl__Multi_class(){
    static _Bool __done__ = false;
    static curl_Curl__MultiClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(curl_Curl__Multi),
                    .size = sizeof(curl_Curl__Multi)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) curl_Curl__Multi___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Multi", 5);
    }
    return &class;
}
void curl_Curl_load() {
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
        net_berkeley_load();
        CURLoption___load__();
        CURLcode___load__();
        CURLformoption___load__();
        CURLINFO___load__();
        curl_Curl__Curl___load__();
        curl_Curl__CurlSList___load__();
        curl_Curl__CurlOpt___load__();
        curl_Curl__CurlForm___load__();
        curl_Curl__HTTPPost___load__();
        curl_Curl__CurlInfo___load__();
        CURLMcode___load__();
        lang_types__Class___load__();
        curl_Curl___MultiMsgData___load__();
        curl_Curl__MultiMsg___load__();
        CURLSocket___load__();
        CURLMoption___load__();
        lang_types__Class___load__();
        lang_types__Class___load__();
        curl_Curl__MultiOpt___load__();
        curl_Curl__Multi___load__();
        
        #if defined(__OOC_USE_GC__)
        curl_Curl__curl_global_init_mem(CURL_GLOBAL_ALL, lang_Memory__gc_malloc, lang_Memory__gc_free, lang_Memory__gc_realloc, lang_Memory__gc_strdup, lang_Memory__gc_calloc);
        #endif
        
        #if !(defined(__OOC_USE_GC__))
        curl_Curl__curl_global_init(CURL_GLOBAL_ALL);
        #endif
    }
}

