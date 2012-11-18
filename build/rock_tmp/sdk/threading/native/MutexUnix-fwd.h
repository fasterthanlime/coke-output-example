/* threading/native/MutexUnix header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___threading_native_MutexUnix_fwd___
#define ___threading_native_MutexUnix_fwd___

#if ((defined(__unix__)) || (defined(__APPLE__)))
#ifndef _XOPEN_SOURCE
#define _XOPEN_SOURCE 500
#define _XOPEN_SOURCE___defined
#endif
#include <pthread.h>
#ifdef _XOPEN_SOURCE___defined
#undef _XOPEN_SOURCE
#undef _XOPEN_SOURCE___defined
#endif
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
#include <unistd.h>
#endif

#if ((defined(__unix__)) || (defined(__APPLE__)))
typedef pthread_mutex_t threading_native_MutexUnix__PThreadMutex;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
typedef pthread_mutexattr_t threading_native_MutexUnix__PThreadMutexAttr;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_MutexUnix__MutexUnix;
typedef struct _threading_native_MutexUnix__MutexUnix threading_native_MutexUnix__MutexUnix;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_MutexUnix__RecursiveMutexUnix;
typedef struct _threading_native_MutexUnix__RecursiveMutexUnix threading_native_MutexUnix__RecursiveMutexUnix;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_MutexUnix__PThreadMutexClass;
typedef struct _threading_native_MutexUnix__PThreadMutexClass threading_native_MutexUnix__PThreadMutexClass;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_MutexUnix__PThreadMutexAttrClass;
typedef struct _threading_native_MutexUnix__PThreadMutexAttrClass threading_native_MutexUnix__PThreadMutexAttrClass;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_MutexUnix__MutexUnixClass;
typedef struct _threading_native_MutexUnix__MutexUnixClass threading_native_MutexUnix__MutexUnixClass;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _threading_native_MutexUnix__RecursiveMutexUnixClass;
typedef struct _threading_native_MutexUnix__RecursiveMutexUnixClass threading_native_MutexUnix__RecursiveMutexUnixClass;
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
threading_native_MutexUnix__PThreadMutexClass *threading_native_MutexUnix__PThreadMutex_class();
void threading_native_MutexUnix__PThreadMutex___load__();
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
threading_native_MutexUnix__PThreadMutexAttrClass *threading_native_MutexUnix__PThreadMutexAttr_class();
void threading_native_MutexUnix__PThreadMutexAttr___load__();
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
threading_native_MutexUnix__MutexUnixClass *threading_native_MutexUnix__MutexUnix_class();
void threading_native_MutexUnix__MutexUnix_init(threading_native_MutexUnix__MutexUnix* this);
threading_Thread__Mutex* threading_native_MutexUnix__MutexUnix_new();
void threading_native_MutexUnix__MutexUnix___defaults__(threading_native_MutexUnix__MutexUnix* this);
void threading_native_MutexUnix__MutexUnix___defaults___impl(threading_native_MutexUnix__MutexUnix* this);
void threading_native_MutexUnix__MutexUnix___load__();
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
threading_native_MutexUnix__RecursiveMutexUnixClass *threading_native_MutexUnix__RecursiveMutexUnix_class();
void threading_native_MutexUnix__RecursiveMutexUnix_init(threading_native_MutexUnix__RecursiveMutexUnix* this);
threading_Thread__RecursiveMutex* threading_native_MutexUnix__RecursiveMutexUnix_new();
void threading_native_MutexUnix__RecursiveMutexUnix___defaults__(threading_native_MutexUnix__RecursiveMutexUnix* this);
void threading_native_MutexUnix__RecursiveMutexUnix___defaults___impl(threading_native_MutexUnix__RecursiveMutexUnix* this);
void threading_native_MutexUnix__RecursiveMutexUnix___load__();
#endif
void threading_native_MutexUnix_load();
#if ((defined(__unix__)) || (defined(__APPLE__)))
#define threading_native_MutexUnix__pthread_mutex_lock pthread_mutex_lock

#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
#define threading_native_MutexUnix__pthread_mutex_unlock pthread_mutex_unlock

#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
#define threading_native_MutexUnix__pthread_mutex_init pthread_mutex_init

#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
#define threading_native_MutexUnix__pthread_mutex_destroy pthread_mutex_destroy

#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
#define threading_native_MutexUnix__pthread_mutexattr_init pthread_mutexattr_init

#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
#define threading_native_MutexUnix__pthread_mutexattr_settype pthread_mutexattr_settype

#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
void ooc_mutex_lock(threading_Thread__Mutex* m);
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
void ooc_mutex_unlock(threading_Thread__Mutex* m);
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
void ooc_mutex_destroy(threading_Thread__Mutex* m);
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
void ooc_recursive_mutex_lock(threading_Thread__RecursiveMutex* m);
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
void ooc_recursive_mutex_unlock(threading_Thread__RecursiveMutex* m);
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
void ooc_recursive_mutex_destroy(threading_Thread__RecursiveMutex* m);
#endif

#endif // ___threading_native_MutexUnix_fwd___
