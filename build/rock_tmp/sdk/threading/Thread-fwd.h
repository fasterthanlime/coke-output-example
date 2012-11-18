/* threading/Thread header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___threading_Thread_fwd___
#define ___threading_Thread_fwd___

struct _threading_Thread__Thread;
typedef struct _threading_Thread__Thread threading_Thread__Thread;
struct _threading_Thread__Mutex;
typedef struct _threading_Thread__Mutex threading_Thread__Mutex;
struct _threading_Thread__RecursiveMutex;
typedef struct _threading_Thread__RecursiveMutex threading_Thread__RecursiveMutex;
struct _threading_Thread__ThreadLocal;
typedef struct _threading_Thread__ThreadLocal threading_Thread__ThreadLocal;
struct _threading_Thread__ThreadClass;
typedef struct _threading_Thread__ThreadClass threading_Thread__ThreadClass;
struct _threading_Thread__MutexClass;
typedef struct _threading_Thread__MutexClass threading_Thread__MutexClass;
struct _threading_Thread__RecursiveMutexClass;
typedef struct _threading_Thread__RecursiveMutexClass threading_Thread__RecursiveMutexClass;
struct _threading_Thread__ThreadLocalClass;
typedef struct _threading_Thread__ThreadLocalClass threading_Thread__ThreadLocalClass;

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
#include <sdk/threading/native/ThreadUnix-fwd.h>
#include <sdk/threading/native/ThreadWin32-fwd.h>
#include <sdk/threading/native/MutexUnix-fwd.h>
#include <sdk/threading/native/MutexWin32-fwd.h>
#include <sdk/threading/native/ThreadLocalUnix-fwd.h>
#include <sdk/threading/native/ThreadLocalWin32-fwd.h>

#ifndef __FUNC____DEFINE
#define __FUNC____DEFINE

typedef void (*__FUNC__)(void*);

#endif

threading_Thread__ThreadClass *threading_Thread__Thread_class();
void threading_Thread__Thread_init(threading_Thread__Thread* this);
threading_Thread__Thread* threading_Thread__Thread_new(lang_types__Closure _code);
lang_Numbers__Int threading_Thread__Thread_start(threading_Thread__Thread* this);
lang_Numbers__Int threading_Thread__Thread_wait(threading_Thread__Thread* this);
void threading_Thread__Thread___defaults__(threading_Thread__Thread* this);
void threading_Thread__Thread___defaults___impl(threading_Thread__Thread* this);
void threading_Thread__Thread___load__();
threading_Thread__MutexClass *threading_Thread__Mutex_class();
void threading_Thread__Mutex_init(threading_Thread__Mutex* this);
threading_Thread__Mutex* threading_Thread__Mutex_new();
void threading_Thread__Mutex_destroy(threading_Thread__Mutex* this);
void threading_Thread__Mutex_lock(threading_Thread__Mutex* this);
void threading_Thread__Mutex_unlock(threading_Thread__Mutex* this);
void threading_Thread__Mutex___defaults__(threading_Thread__Mutex* this);
void threading_Thread__Mutex___defaults___impl(threading_Thread__Mutex* this);
void threading_Thread__Mutex___load__();
threading_Thread__RecursiveMutexClass *threading_Thread__RecursiveMutex_class();
void threading_Thread__RecursiveMutex_init(threading_Thread__RecursiveMutex* this);
threading_Thread__RecursiveMutex* threading_Thread__RecursiveMutex_new();
void threading_Thread__RecursiveMutex_destroy(threading_Thread__RecursiveMutex* this);
void threading_Thread__RecursiveMutex_lock(threading_Thread__RecursiveMutex* this);
void threading_Thread__RecursiveMutex_unlock(threading_Thread__RecursiveMutex* this);
void threading_Thread__RecursiveMutex___defaults__(threading_Thread__RecursiveMutex* this);
void threading_Thread__RecursiveMutex___defaults___impl(threading_Thread__RecursiveMutex* this);
void threading_Thread__RecursiveMutex___load__();
threading_Thread__ThreadLocalClass *threading_Thread__ThreadLocal_class();
void threading_Thread__ThreadLocal_init(threading_Thread__ThreadLocal* this);
threading_Thread__ThreadLocal* threading_Thread__ThreadLocal_new(lang_types__Class* T);
void threading_Thread__ThreadLocal_set(threading_Thread__ThreadLocal* this, uint8_t* value);
void threading_Thread__ThreadLocal_get(threading_Thread__ThreadLocal* this, uint8_t* __genericReturn92);
lang_types__Bool threading_Thread__ThreadLocal_hasValue__quest(threading_Thread__ThreadLocal* this);
void threading_Thread__ThreadLocal___defaults__(threading_Thread__ThreadLocal* this);
void threading_Thread__ThreadLocal___defaults___impl(threading_Thread__ThreadLocal* this);
void threading_Thread__ThreadLocal___load__();
void threading_Thread_load();

#endif // ___threading_Thread_fwd___
