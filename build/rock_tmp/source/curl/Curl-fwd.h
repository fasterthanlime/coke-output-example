/* curl/Curl header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___curl_Curl_fwd___
#define ___curl_Curl_fwd___

#include <curl/curl.h>
#include <curl/easy.h>

typedef CURL* curl_Curl__Curl;
typedef void* curl_Curl__CurlSList;
typedef struct _curl_Curl__CurlOpt curl_Curl__CurlOpt;
typedef struct _curl_Curl__CurlForm curl_Curl__CurlForm;
typedef struct curl_httppost* curl_Curl__HTTPPost;
typedef struct _curl_Curl__CurlInfo curl_Curl__CurlInfo;
typedef struct _curl_Curl___MultiMsgData curl_Curl___MultiMsgData;
typedef CURLMsg curl_Curl__MultiMsg;
typedef struct _curl_Curl__MultiOpt curl_Curl__MultiOpt;
typedef CURLM* curl_Curl__Multi;
struct _curl_Curl__CURLoptionClass;
typedef struct _curl_Curl__CURLoptionClass curl_Curl__CURLoptionClass;
struct _curl_Curl__CURLcodeClass;
typedef struct _curl_Curl__CURLcodeClass curl_Curl__CURLcodeClass;
struct _curl_Curl__CURLformoptionClass;
typedef struct _curl_Curl__CURLformoptionClass curl_Curl__CURLformoptionClass;
struct _curl_Curl__CURLINFOClass;
typedef struct _curl_Curl__CURLINFOClass curl_Curl__CURLINFOClass;
struct _curl_Curl__CurlClass;
typedef struct _curl_Curl__CurlClass curl_Curl__CurlClass;
struct _curl_Curl__CurlSListClass;
typedef struct _curl_Curl__CurlSListClass curl_Curl__CurlSListClass;
struct _curl_Curl__CurlOptClass;
typedef struct _curl_Curl__CurlOptClass curl_Curl__CurlOptClass;
struct _curl_Curl__CurlFormClass;
typedef struct _curl_Curl__CurlFormClass curl_Curl__CurlFormClass;
struct _curl_Curl__HTTPPostClass;
typedef struct _curl_Curl__HTTPPostClass curl_Curl__HTTPPostClass;
struct _curl_Curl__CurlInfoClass;
typedef struct _curl_Curl__CurlInfoClass curl_Curl__CurlInfoClass;
struct _curl_Curl__CURLMcodeClass;
typedef struct _curl_Curl__CURLMcodeClass curl_Curl__CURLMcodeClass;
struct _curl_Curl__MultiMsgTypeClass;
typedef struct _curl_Curl__MultiMsgTypeClass curl_Curl__MultiMsgTypeClass;
struct _curl_Curl___MultiMsgDataClass;
typedef struct _curl_Curl___MultiMsgDataClass curl_Curl___MultiMsgDataClass;
struct _curl_Curl__MultiMsgClass;
typedef struct _curl_Curl__MultiMsgClass curl_Curl__MultiMsgClass;
struct _curl_Curl__CURLSocketClass;
typedef struct _curl_Curl__CURLSocketClass curl_Curl__CURLSocketClass;
struct _curl_Curl__CURLMoptionClass;
typedef struct _curl_Curl__CURLMoptionClass curl_Curl__CURLMoptionClass;
struct _curl_Curl__MultiErrorCodeClass;
typedef struct _curl_Curl__MultiErrorCodeClass curl_Curl__MultiErrorCodeClass;
struct _curl_Curl__PollClass;
typedef struct _curl_Curl__PollClass curl_Curl__PollClass;
struct _curl_Curl__MultiOptClass;
typedef struct _curl_Curl__MultiOptClass curl_Curl__MultiOptClass;
struct _curl_Curl__MultiClass;
typedef struct _curl_Curl__MultiClass curl_Curl__MultiClass;

#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/BufferIterator-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Character-fwd.h>
#include <sdk/lang/VarArgs-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Buffer-fwd.h>
#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/Abstractions-fwd.h>
#include <sdk/lang/Format-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/net/berkeley-fwd.h>
typedef int curl_Curl__MultiMsgType;
typedef int curl_Curl__MultiErrorCode;
typedef int curl_Curl__Poll;
curl_Curl__CURLoptionClass *CURLoption_class();
void CURLoption___load__();
curl_Curl__CURLcodeClass *CURLcode_class();
void CURLcode___load__();
curl_Curl__CURLformoptionClass *CURLformoption_class();
void CURLformoption___load__();
curl_Curl__CURLINFOClass *CURLINFO_class();
void CURLINFO___load__();
curl_Curl__CurlClass *curl_Curl__Curl_class();
#define curl_Curl__Curl_new curl_easy_init

#define curl_Curl__Curl_setOpt curl_easy_setopt

#define curl_Curl__Curl_perform curl_easy_perform

#define curl_Curl__Curl_cleanup curl_easy_cleanup

#define curl_Curl__Curl_getInfo curl_easy_getinfo

#define curl_Curl__Curl_escape_lowlevel curl_easy_escape

lang_String__String* curl_Curl__Curl_escape(lang_String__String* url);
#define curl_Curl__Curl_unescape_lowlevel curl_easy_unescape

lang_String__String* curl_Curl__Curl_unescape(lang_String__String* url);
void curl_Curl__Curl___load__();
#define curl_Curl__Curl_new curl_easy_init

#define curl_Curl__Curl_escape_lowlevel curl_easy_escape

#define curl_Curl__Curl_unescape_lowlevel curl_easy_unescape

curl_Curl__CurlSListClass *curl_Curl__CurlSList_class();
curl_Curl__CurlSList curl_Curl__CurlSList_new();
#define curl_Curl__CurlSList_append curl_slist_append

#define curl_Curl__CurlSList_free curl_slist_free_all

void curl_Curl__CurlSList___load__();
curl_Curl__CurlOptClass *curl_Curl__CurlOpt_class();
void curl_Curl__CurlOpt___load__();
curl_Curl__CurlFormClass *curl_Curl__CurlForm_class();
void curl_Curl__CurlForm___load__();
curl_Curl__HTTPPostClass *curl_Curl__HTTPPost_class();
void curl_Curl__HTTPPost___load__();
curl_Curl__CurlInfoClass *curl_Curl__CurlInfo_class();
void curl_Curl__CurlInfo___load__();
curl_Curl__CURLMcodeClass *CURLMcode_class();
void CURLMcode___load__();
curl_Curl__MultiMsgTypeClass *curl_Curl__MultiMsgType_class();
curl_Curl___MultiMsgDataClass *curl_Curl___MultiMsgData_class();
void curl_Curl___MultiMsgData___load__();
curl_Curl__MultiMsgClass *curl_Curl__MultiMsg_class();
void curl_Curl__MultiMsg___load__();
curl_Curl__CURLSocketClass *CURLSocket_class();
void CURLSocket___load__();
curl_Curl__CURLMoptionClass *CURLMoption_class();
void CURLMoption___load__();
curl_Curl__MultiErrorCodeClass *curl_Curl__MultiErrorCode_class();
curl_Curl__PollClass *curl_Curl__Poll_class();
curl_Curl__MultiOptClass *curl_Curl__MultiOpt_class();
void curl_Curl__MultiOpt___load__();
curl_Curl__MultiClass *curl_Curl__Multi_class();
#define curl_Curl__Multi_new curl_multi_init

#define curl_Curl__Multi_addHandle curl_multi_add_handle

#define curl_Curl__Multi_removeHandle curl_multi_remove_handle

#define curl_Curl__Multi_fdset curl_multi_fdset

#define curl_Curl__Multi_perform curl_multi_perform

#define curl_Curl__Multi_cleanup curl_multi_cleanup

#define curl_Curl__Multi_infoRead curl_multi_info_read

#define curl_Curl__Multi_strerror curl_multi_strerror

#define curl_Curl__Multi_setOpt curl_multi_setopt

#define curl_Curl__Multi_assign curl_multi_assign

#define curl_Curl__Multi_timeout curl_multi_timeout

#define curl_Curl__Multi_socket curl_multi_socket

#define curl_Curl__Multi_socketAction curl_multi_socket_action

#define curl_Curl__Multi_socketAll curl_multi_socket_all

void curl_Curl__Multi___load__();
#define curl_Curl__Multi_new curl_multi_init

#define curl_Curl__Multi_strerror curl_multi_strerror

void curl_Curl_load();
#define curl_Curl__curl_global_init curl_global_init

#define curl_Curl__curl_global_init_mem curl_global_init_mem

#define curl_Curl__formAdd curl_formadd

#define curl_Curl__formFree curl_formfree


#endif // ___curl_Curl_fwd___
