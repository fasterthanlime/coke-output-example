/* lang/Memory header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Memory_fwd___
#define ___lang_Memory_fwd___

#include <string.h>
#if defined(__OOC_USE_GC__)
#ifndef GC_THREADS
#define GC_THREADS GC_THREADS
#define GC_THREADS___defined
#endif
#include <gc/gc.h>
#ifdef GC_THREADS___defined
#undef GC_THREADS
#undef GC_THREADS___defined
#endif
#endif
#if defined(__OOC_USE_GC__)
#ifndef GC_NO_THREAD_REDIRECTS
#define GC_NO_THREAD_REDIRECTS GC_NO_THREAD_REDIRECTS
#define GC_NO_THREAD_REDIRECTS___defined
#endif
#include <gc/gc_pthread_redirects.h>
#ifdef GC_NO_THREAD_REDIRECTS___defined
#undef GC_NO_THREAD_REDIRECTS
#undef GC_NO_THREAD_REDIRECTS___defined
#endif
#endif

#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/BufferIterator-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Character-fwd.h>
#include <sdk/lang/VarArgs-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Buffer-fwd.h>
#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/Abstractions-fwd.h>
#include <sdk/lang/Format-fwd.h>
#include <sdk/lang/IO-fwd.h>
void lang_Memory_load();
#if !(defined(__OOC_USE_GC__))
lang_types__Pointer lang_Memory__gc_malloc(lang_Numbers__SizeT size);
#endif
#if defined(__OOC_USE_GC__)
#define lang_Memory__gc_malloc GC_malloc

#endif
#if !(defined(__OOC_USE_GC__))
#define lang_Memory__gc_malloc_atomic malloc

#endif
#if defined(__OOC_USE_GC__)
#define lang_Memory__gc_malloc_atomic GC_malloc_atomic

#endif
#if !(defined(__OOC_USE_GC__))
#define lang_Memory__gc_strdup strdup

#endif
#if defined(__OOC_USE_GC__)
#define lang_Memory__gc_strdup GC_strdup

#endif
#if !(defined(__OOC_USE_GC__))
#define lang_Memory__gc_realloc realloc

#endif
#if defined(__OOC_USE_GC__)
#define lang_Memory__gc_realloc GC_realloc

#endif
#if !(defined(__OOC_USE_GC__))
#define lang_Memory__gc_calloc calloc

#endif
#if defined(__OOC_USE_GC__)
lang_types__Pointer lang_Memory__gc_calloc(lang_Numbers__SizeT nmemb, lang_Numbers__SizeT size);
#endif
#if !(defined(__OOC_USE_GC__))
#define lang_Memory__gc_free free

#endif
#if defined(__OOC_USE_GC__)
#define lang_Memory__gc_free GC_free

#endif
#if defined(__OOC_USE_GC__)
lang_types__Pointer lang_Memory__gc_malloc_for_generics(lang_Numbers__SizeT size);
#endif
#if defined(__OOC_USE_GC__)
#define lang_Memory__GC_add_roots GC_add_roots

#endif
#if defined(__OOC_USE_GC__)
#define lang_Memory__GC_remove_roots GC_remove_roots

#endif
#define lang_Memory__memset memset

#define lang_Memory__memcmp memcmp

#define lang_Memory__memmove memmove

#define lang_Memory__memcpy memcpy

#define lang_Memory__free free


#endif // ___lang_Memory_fwd___
