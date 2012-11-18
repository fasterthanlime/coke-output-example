/* threading/native/ThreadLocalUnix header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___threading_native_ThreadLocalUnix_fwd___
#define ___threading_native_ThreadLocalUnix_fwd___

#include <unistd.h>
#if ((defined(__unix__)) || (defined(__APPLE__)))
#include <pthread.h>
#endif

#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_ThreadLocalUnix__ThreadLocalUnix;
typedef struct _threading_native_ThreadLocalUnix__ThreadLocalUnix threading_native_ThreadLocalUnix__ThreadLocalUnix;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_ThreadLocalUnix__ThreadLocalUnixClass;
typedef struct _threading_native_ThreadLocalUnix__ThreadLocalUnixClass threading_native_ThreadLocalUnix__ThreadLocalUnixClass;
#endif

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
#include <sdk/structs/HashMap-fwd.h>
#include <sdk/threading/Thread-fwd.h>
#include <sdk/threading/native/ThreadUnix-fwd.h>
#if ((defined(__unix__)) || (defined(__APPLE__)))
threading_native_ThreadLocalUnix__ThreadLocalUnixClass *threading_native_ThreadLocalUnix__ThreadLocalUnix_class();
threading_native_ThreadLocalUnix__ThreadLocalUnix* threading_native_ThreadLocalUnix__ThreadLocalUnix_new_unix(lang_types__Class* T);
void threading_native_ThreadLocalUnix__ThreadLocalUnix_init_unix(threading_native_ThreadLocalUnix__ThreadLocalUnix* this);
void threading_native_ThreadLocalUnix__ThreadLocalUnix_set(threading_native_ThreadLocalUnix__ThreadLocalUnix* this, uint8_t* value);
void threading_native_ThreadLocalUnix__ThreadLocalUnix_set_impl(threading_native_ThreadLocalUnix__ThreadLocalUnix* this, uint8_t* value);
void threading_native_ThreadLocalUnix__ThreadLocalUnix_get(threading_native_ThreadLocalUnix__ThreadLocalUnix* this, uint8_t* __genericReturn93);
void threading_native_ThreadLocalUnix__ThreadLocalUnix_get_impl(threading_native_ThreadLocalUnix__ThreadLocalUnix* this, uint8_t* __genericReturn93);
lang_types__Bool threading_native_ThreadLocalUnix__ThreadLocalUnix_hasValue__quest(threading_native_ThreadLocalUnix__ThreadLocalUnix* this);
lang_types__Bool threading_native_ThreadLocalUnix__ThreadLocalUnix_hasValue__quest_impl(threading_native_ThreadLocalUnix__ThreadLocalUnix* this);
void threading_native_ThreadLocalUnix__ThreadLocalUnix___defaults__(threading_native_ThreadLocalUnix__ThreadLocalUnix* this);
void threading_native_ThreadLocalUnix__ThreadLocalUnix___defaults___impl(threading_native_ThreadLocalUnix__ThreadLocalUnix* this);
void threading_native_ThreadLocalUnix__ThreadLocalUnix___load__();
#endif
void threading_native_ThreadLocalUnix_load();
#if ((defined(__unix__)) || (defined(__APPLE__)))
#define threading_native_ThreadLocalUnix__pthread_self pthread_self

#endif

#endif // ___threading_native_ThreadLocalUnix_fwd___
