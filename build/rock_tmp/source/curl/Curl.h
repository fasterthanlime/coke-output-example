/* curl/Curl header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___curl_Curl___
#define ___curl_Curl___

#include <source/curl/Curl-fwd.h>
#include <sdk/lang/types.h>

struct _curl_Curl__CurlOpt {
};

struct _curl_Curl__CurlForm {
};

struct _curl_Curl__CurlInfo {
};

struct _curl_Curl___MultiMsgData {
    lang_types__Pointer whatever;
    lang_Numbers__Int result;
};

struct _curl_Curl__MultiOpt {
};

struct _curl_Curl__CURLoptionClass {
    struct _lang_types__ClassClass __super__;
};


struct _curl_Curl__CURLcodeClass {
    struct _lang_types__ClassClass __super__;
};


struct _curl_Curl__CURLformoptionClass {
    struct _lang_types__ClassClass __super__;
};


struct _curl_Curl__CURLINFOClass {
    struct _lang_types__ClassClass __super__;
};


struct _curl_Curl__CurlClass {
    struct _lang_types__ClassClass __super__;
    lang_String__String* (*escape)(lang_String__String*);
    lang_String__String* (*unescape)(lang_String__String*);
};


struct _curl_Curl__CurlSListClass {
    struct _lang_types__ClassClass __super__;
    curl_Curl__CurlSList (*new)();
};


struct _curl_Curl__CurlOptClass {
    struct _lang_types__ClassClass __super__;
};


struct _curl_Curl__CurlFormClass {
    struct _lang_types__ClassClass __super__;
};


struct _curl_Curl__HTTPPostClass {
    struct _lang_types__ClassClass __super__;
};


struct _curl_Curl__CurlInfoClass {
    struct _lang_types__ClassClass __super__;
};


struct _curl_Curl__CURLMcodeClass {
    struct _lang_types__ClassClass __super__;
};


struct _curl_Curl__MultiMsgTypeClass {
    struct _lang_types__ClassClass __super__;
    curl_Curl__MultiMsgType none;
    curl_Curl__MultiMsgType done;
    curl_Curl__MultiMsgType last;
};


struct _curl_Curl___MultiMsgDataClass {
    struct _lang_types__ClassClass __super__;
};


struct _curl_Curl__MultiMsgClass {
    struct _lang_types__ClassClass __super__;
};


struct _curl_Curl__CURLSocketClass {
    struct _lang_types__ClassClass __super__;
};


struct _curl_Curl__CURLMoptionClass {
    struct _lang_types__ClassClass __super__;
};


struct _curl_Curl__MultiErrorCodeClass {
    struct _lang_types__ClassClass __super__;
    curl_Curl__MultiErrorCode callMultiPerform;
    curl_Curl__MultiErrorCode ok;
    curl_Curl__MultiErrorCode badHandle;
    curl_Curl__MultiErrorCode badEasyHandle;
    curl_Curl__MultiErrorCode outOfMemory;
    curl_Curl__MultiErrorCode internalError;
    curl_Curl__MultiErrorCode badSocket;
    curl_Curl__MultiErrorCode unknownOption;
    curl_Curl__MultiErrorCode last;
};


struct _curl_Curl__PollClass {
    struct _lang_types__ClassClass __super__;
    curl_Curl__Poll none;
    curl_Curl__Poll in;
    curl_Curl__Poll out;
    curl_Curl__Poll inout;
    curl_Curl__Poll remove;
};


struct _curl_Curl__MultiOptClass {
    struct _lang_types__ClassClass __super__;
};


struct _curl_Curl__MultiClass {
    struct _lang_types__ClassClass __super__;
};


#ifdef OOC_FROM_C
#define curl_global_init(flags) curl_Curl__curl_global_init((flags))
#define curl_global_init_mem(flags, malloc, free, realloc, strdup, calloc) curl_Curl__curl_global_init_mem((flags), (void*) (malloc), (void*) (free), (void*) (realloc), (void*) (strdup), (void*) (calloc))
#define formAdd(firstitem, lastitem, ...) curl_Curl__formAdd((firstitem), (lastitem), __VA_ARGS__)
#define formFree(form) curl_Curl__formFree((form))
#define CURLoptionClass curl_Curl__CURLoptionClass
#define CURLoptionClass_class() curl_Curl__CURLoptionClass_class()
#define CURLoption___load__() CURLoption___load__()
#define CURLcodeClass curl_Curl__CURLcodeClass
#define CURLcodeClass_class() curl_Curl__CURLcodeClass_class()
#define CURLcode___load__() CURLcode___load__()
#define CURLformoptionClass curl_Curl__CURLformoptionClass
#define CURLformoptionClass_class() curl_Curl__CURLformoptionClass_class()
#define CURLformoption___load__() CURLformoption___load__()
#define CURLINFOClass curl_Curl__CURLINFOClass
#define CURLINFOClass_class() curl_Curl__CURLINFOClass_class()
#define CURLINFO___load__() CURLINFO___load__()
#define Curl curl_Curl__Curl
#define Curl_class() curl_Curl__Curl_class()
#define CurlClass curl_Curl__CurlClass
#define CurlClass_class() curl_Curl__CurlClass_class()
#define Curl_new() curl_Curl__Curl_new()
#define Curl_setOpt(_this_, , ...) curl_Curl__Curl_setOpt((void*) (_this_), (), __VA_ARGS__)
#define Curl_perform(_this_) curl_Curl__Curl_perform((void*) (_this_))
#define Curl_cleanup(_this_) curl_Curl__Curl_cleanup((void*) (_this_))
#define Curl_getInfo(_this_, , ...) curl_Curl__Curl_getInfo((void*) (_this_), (), __VA_ARGS__)
#define Curl_escape_lowlevel(, , ) curl_Curl__Curl_escape_lowlevel((), (), ())
#define Curl_escape(url) (void*) curl_Curl__Curl_escape((void*) (url))
#define Curl_unescape_lowlevel(, , , ) curl_Curl__Curl_unescape_lowlevel((), (), (), ())
#define Curl_unescape(url) (void*) curl_Curl__Curl_unescape((void*) (url))
#define Curl___load__() curl_Curl__Curl___load__()
#define CurlSList curl_Curl__CurlSList
#define CurlSList_class() curl_Curl__CurlSList_class()
#define CurlSListClass curl_Curl__CurlSListClass
#define CurlSListClass_class() curl_Curl__CurlSListClass_class()
#define CurlSList_new() curl_Curl__CurlSList_new()
#define CurlSList_append(_this_, s) curl_Curl__CurlSList_append((void*) (_this_), (s))
#define CurlSList_free(_this_) curl_Curl__CurlSList_free((void*) (_this_))
#define CurlSList___load__() curl_Curl__CurlSList___load__()
#define CurlOpt curl_Curl__CurlOpt
#define CurlOpt_class() curl_Curl__CurlOpt_class()
#define CurlOptClass curl_Curl__CurlOptClass
#define CurlOptClass_class() curl_Curl__CurlOptClass_class()
#define CurlOpt___load__() curl_Curl__CurlOpt___load__()
#define CurlForm curl_Curl__CurlForm
#define CurlForm_class() curl_Curl__CurlForm_class()
#define CurlFormClass curl_Curl__CurlFormClass
#define CurlFormClass_class() curl_Curl__CurlFormClass_class()
#define CurlForm___load__() curl_Curl__CurlForm___load__()
#define HTTPPost curl_Curl__HTTPPost
#define HTTPPost_class() curl_Curl__HTTPPost_class()
#define HTTPPostClass curl_Curl__HTTPPostClass
#define HTTPPostClass_class() curl_Curl__HTTPPostClass_class()
#define HTTPPost___load__() curl_Curl__HTTPPost___load__()
#define CurlInfo curl_Curl__CurlInfo
#define CurlInfo_class() curl_Curl__CurlInfo_class()
#define CurlInfoClass curl_Curl__CurlInfoClass
#define CurlInfoClass_class() curl_Curl__CurlInfoClass_class()
#define CurlInfo___load__() curl_Curl__CurlInfo___load__()
#define CURLMcodeClass curl_Curl__CURLMcodeClass
#define CURLMcodeClass_class() curl_Curl__CURLMcodeClass_class()
#define CURLMcode___load__() CURLMcode___load__()
#define MultiMsgType curl_Curl__MultiMsgType
#define MultiMsgType_class() curl_Curl__MultiMsgType_class()
#define MultiMsgTypeClass curl_Curl__MultiMsgTypeClass
#define MultiMsgTypeClass_class() curl_Curl__MultiMsgTypeClass_class()
#define _MultiMsgData curl_Curl___MultiMsgData
#define _MultiMsgData_class() curl_Curl___MultiMsgData_class()
#define _MultiMsgDataClass curl_Curl___MultiMsgDataClass
#define _MultiMsgDataClass_class() curl_Curl___MultiMsgDataClass_class()
#define _MultiMsgData___load__() curl_Curl___MultiMsgData___load__()
#define MultiMsg curl_Curl__MultiMsg
#define MultiMsg_class() curl_Curl__MultiMsg_class()
#define MultiMsgClass curl_Curl__MultiMsgClass
#define MultiMsgClass_class() curl_Curl__MultiMsgClass_class()
#define MultiMsg___load__() curl_Curl__MultiMsg___load__()
#define CURLSocketClass curl_Curl__CURLSocketClass
#define CURLSocketClass_class() curl_Curl__CURLSocketClass_class()
#define CURLSocket___load__() CURLSocket___load__()
#define CURLMoptionClass curl_Curl__CURLMoptionClass
#define CURLMoptionClass_class() curl_Curl__CURLMoptionClass_class()
#define CURLMoption___load__() CURLMoption___load__()
#define MultiErrorCode curl_Curl__MultiErrorCode
#define MultiErrorCode_class() curl_Curl__MultiErrorCode_class()
#define MultiErrorCodeClass curl_Curl__MultiErrorCodeClass
#define MultiErrorCodeClass_class() curl_Curl__MultiErrorCodeClass_class()
#define Poll curl_Curl__Poll
#define Poll_class() curl_Curl__Poll_class()
#define PollClass curl_Curl__PollClass
#define PollClass_class() curl_Curl__PollClass_class()
#define MultiOpt curl_Curl__MultiOpt
#define MultiOpt_class() curl_Curl__MultiOpt_class()
#define MultiOptClass curl_Curl__MultiOptClass
#define MultiOptClass_class() curl_Curl__MultiOptClass_class()
#define MultiOpt___load__() curl_Curl__MultiOpt___load__()
#define Multi curl_Curl__Multi
#define Multi_class() curl_Curl__Multi_class()
#define MultiClass curl_Curl__MultiClass
#define MultiClass_class() curl_Curl__MultiClass_class()
#define Multi_new() curl_Curl__Multi_new()
#define Multi_addHandle(_this_, ) curl_Curl__Multi_addHandle((void*) (_this_), ())
#define Multi_removeHandle(_this_, ) curl_Curl__Multi_removeHandle((void*) (_this_), ())
#define Multi_fdset(_this_, , , , ) curl_Curl__Multi_fdset((void*) (_this_), (), (), (), ())
#define Multi_perform(_this_, ) curl_Curl__Multi_perform((void*) (_this_), ())
#define Multi_cleanup(_this_) curl_Curl__Multi_cleanup((void*) (_this_))
#define Multi_infoRead(_this_, ) curl_Curl__Multi_infoRead((void*) (_this_), ())
#define Multi_strerror() curl_Curl__Multi_strerror(())
#define Multi_setOpt(_this_, , ...) curl_Curl__Multi_setOpt((void*) (_this_), (), __VA_ARGS__)
#define Multi_assign(_this_, , ) curl_Curl__Multi_assign((void*) (_this_), (), (void*) ())
#define Multi_timeout(_this_, ) curl_Curl__Multi_timeout((void*) (_this_), ())
#define Multi_socket(_this_, , ) curl_Curl__Multi_socket((void*) (_this_), (), ())
#define Multi_socketAction(_this_, , , ) curl_Curl__Multi_socketAction((void*) (_this_), (), (), ())
#define Multi_socketAll(_this_, ) curl_Curl__Multi_socketAll((void*) (_this_), ())
#define Multi___load__() curl_Curl__Multi___load__()
#endif

#endif // ___curl_Curl___
