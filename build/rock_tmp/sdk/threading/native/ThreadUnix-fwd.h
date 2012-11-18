/* threading/native/ThreadUnix header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___threading_native_ThreadUnix_fwd___
#define ___threading_native_ThreadUnix_fwd___

#include <unistd.h>
#if ((defined(__unix__)) || (defined(__APPLE__)))
#include <pthread.h>
#endif

#if ((defined(__unix__)) || (defined(__APPLE__)))
typedef pthread_t threading_native_ThreadUnix__PThread;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_ThreadUnix__ThreadUnix;
typedef struct _threading_native_ThreadUnix__ThreadUnix threading_native_ThreadUnix__ThreadUnix;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_ThreadUnix__PThreadClass;
typedef struct _threading_native_ThreadUnix__PThreadClass threading_native_ThreadUnix__PThreadClass;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_ThreadUnix__ThreadUnixClass;
typedef struct _threading_native_ThreadUnix__ThreadUnixClass threading_native_ThreadUnix__ThreadUnixClass;
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
#include <sdk/threading/Thread-fwd.h>
#if ((defined(__unix__)) || (defined(__APPLE__)))
threading_native_ThreadUnix__PThreadClass *threading_native_ThreadUnix__PThread_class();
void threading_native_ThreadUnix__PThread___load__();
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
threading_native_ThreadUnix__ThreadUnixClass *threading_native_ThreadUnix__ThreadUnix_class();
threading_native_ThreadUnix__ThreadUnix* threading_native_ThreadUnix__ThreadUnix_new_unix(lang_types__Closure _code);
void threading_native_ThreadUnix__ThreadUnix_init_unix(threading_native_ThreadUnix__ThreadUnix* this, lang_types__Closure _code);
lang_Numbers__Int threading_native_ThreadUnix__ThreadUnix_start(threading_native_ThreadUnix__ThreadUnix* this);
lang_Numbers__Int threading_native_ThreadUnix__ThreadUnix_start_impl(threading_native_ThreadUnix__ThreadUnix* this);
lang_Numbers__Int threading_native_ThreadUnix__ThreadUnix_wait(threading_native_ThreadUnix__ThreadUnix* this);
lang_Numbers__Int threading_native_ThreadUnix__ThreadUnix_wait_impl(threading_native_ThreadUnix__ThreadUnix* this);
void threading_native_ThreadUnix__ThreadUnix___defaults__(threading_native_ThreadUnix__ThreadUnix* this);
void threading_native_ThreadUnix__ThreadUnix___defaults___impl(threading_native_ThreadUnix__ThreadUnix* this);
void threading_native_ThreadUnix__ThreadUnix___load__();
#endif
void threading_native_ThreadUnix_load();
#if ((((defined(__unix__)) || (defined(__APPLE__)))) && (defined(__OOC_USE_GC__)))
#define threading_native_ThreadUnix__pthread_create GC_pthread_create

#endif
#if ((((defined(__unix__)) || (defined(__APPLE__)))) && (!(defined(__OOC_USE_GC__))))
#define threading_native_ThreadUnix__pthread_create pthread_create

#endif
#if ((((defined(__unix__)) || (defined(__APPLE__)))) && (defined(__OOC_USE_GC__)))
#define threading_native_ThreadUnix__pthread_join GC_pthread_join

#endif
#if ((((defined(__unix__)) || (defined(__APPLE__)))) && (!(defined(__OOC_USE_GC__))))
#define threading_native_ThreadUnix__pthread_join pthread_join

#endif

#endif // ___threading_native_ThreadUnix_fwd___
