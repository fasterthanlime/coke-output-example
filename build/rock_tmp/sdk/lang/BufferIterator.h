/* lang/BufferIterator header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_BufferIterator___
#define ___lang_BufferIterator___

#include <sdk/lang/BufferIterator-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/lang/Iterators.h>

struct _lang_BufferIterator__BufferIterator {
    struct _lang_Iterators__BackIterator __super__;
    lang_Numbers__SSizeT i;
    lang_Buffer__Buffer* str;
};


struct _lang_BufferIterator__BufferIteratorClass {
    struct _lang_Iterators__BackIteratorClass __super__;
    lang_BufferIterator__BufferIterator* (*new_withStr)(lang_types__Class*, lang_Buffer__Buffer*);
    void (*init_withStr)(lang_BufferIterator__BufferIterator*, lang_Buffer__Buffer*);
    lang_types__Bool (*hasNext__quest)(lang_BufferIterator__BufferIterator*);
    void (*next)(lang_BufferIterator__BufferIterator*, uint8_t*);
    lang_types__Bool (*remove)(lang_BufferIterator__BufferIterator*);
};


#ifdef OOC_FROM_C
#define BufferIterator lang_BufferIterator__BufferIterator
#define BufferIterator_class() lang_BufferIterator__BufferIterator_class()
#define BufferIteratorClass lang_BufferIterator__BufferIteratorClass
#define BufferIteratorClass_class() lang_BufferIterator__BufferIteratorClass_class()
#define BufferIterator_new_withStr(str) (void*) lang_BufferIterator__BufferIterator_new_withStr((void*) (str))
#define BufferIterator_init_withStr(_this_, str) lang_BufferIterator__BufferIterator_init_withStr((void*) (_this_), (void*) (str))
#define BufferIterator_hasNext__quest(_this_) lang_BufferIterator__BufferIterator_hasNext__quest((void*) (_this_))
#define BufferIterator_next(_this_, __genericReturn11) lang_BufferIterator__BufferIterator_next((void*) (_this_), (__genericReturn11))
#define BufferIterator_hasPrev__quest(_this_) lang_BufferIterator__BufferIterator_hasPrev__quest((void*) (_this_))
#define BufferIterator_prev(_this_, __genericReturn12) lang_BufferIterator__BufferIterator_prev((void*) (_this_), (__genericReturn12))
#define BufferIterator_remove(_this_) lang_BufferIterator__BufferIterator_remove((void*) (_this_))
#define BufferIterator___defaults__(_this_) lang_BufferIterator__BufferIterator___defaults__((void*) (_this_))
#define BufferIterator___load__() lang_BufferIterator__BufferIterator___load__()
#endif

#endif // ___lang_BufferIterator___
