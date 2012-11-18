/* lang/Memory header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Memory___
#define ___lang_Memory___

#include <sdk/lang/Memory-fwd.h>

#ifdef OOC_FROM_C
#define gc_malloc(size) (void*) lang_Memory__gc_malloc((size))
#define gc_malloc(size) (void*) lang_Memory__gc_malloc((size))
#define gc_malloc_atomic(size) (void*) lang_Memory__gc_malloc_atomic((size))
#define gc_malloc_atomic(size) (void*) lang_Memory__gc_malloc_atomic((size))
#define gc_strdup(str) lang_Memory__gc_strdup((str))
#define gc_strdup(str) lang_Memory__gc_strdup((str))
#define gc_realloc(ptr, size) (void*) lang_Memory__gc_realloc((void*) (ptr), (size))
#define gc_realloc(ptr, size) (void*) lang_Memory__gc_realloc((void*) (ptr), (size))
#define gc_calloc(nmemb, size) (void*) lang_Memory__gc_calloc((nmemb), (size))
#define gc_calloc(nmemb, size) (void*) lang_Memory__gc_calloc((nmemb), (size))
#define gc_free(ptr) lang_Memory__gc_free((void*) (ptr))
#define gc_free(ptr) lang_Memory__gc_free((void*) (ptr))
#define gc_malloc_for_generics(size) (void*) lang_Memory__gc_malloc_for_generics((size))
#define GC_add_roots(, ) lang_Memory__GC_add_roots((void*) (), (void*) ())
#define GC_remove_roots(, ) lang_Memory__GC_remove_roots((void*) (), (void*) ())
#define memset(, , ) (void*) lang_Memory__memset((void*) (), (), ())
#define memcmp(, , ) lang_Memory__memcmp((void*) (), (void*) (), ())
#define memmove(, , ) lang_Memory__memmove((void*) (), (void*) (), ())
#define memcpy(, , ) lang_Memory__memcpy((void*) (), (void*) (), ())
#define free() lang_Memory__free((void*) ())
#endif

#endif // ___lang_Memory___
