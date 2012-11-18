/* text/StringTokenizer header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___text_StringTokenizer___
#define ___text_StringTokenizer___

#include <sdk/text/StringTokenizer-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/lang/Iterators.h>

struct _text_StringTokenizer__StringTokenizer {
    struct _lang_Iterators__Iterable __super__;
    structs_ArrayList__ArrayList* splitted;
    lang_Numbers__SSizeT index;
};


struct _text_StringTokenizer__StringTokenizerIterator {
    struct _lang_Iterators__Iterator __super__;
    text_StringTokenizer__StringTokenizer* st;
    lang_Numbers__SSizeT index;
};


struct _text_StringTokenizer__StringTokenizerClass {
    struct _lang_Iterators__IterableClass __super__;
    text_StringTokenizer__StringTokenizer* (*new_withCharWithoutmaxTokens)(lang_String__String*, lang_Character__Char);
    void (*init_withCharWithoutmaxTokens)(text_StringTokenizer__StringTokenizer*, lang_String__String*, lang_Character__Char);
    text_StringTokenizer__StringTokenizer* (*new_withStringWithoutmaxTokens)(lang_String__String*, lang_String__String*);
    void (*init_withStringWithoutmaxTokens)(text_StringTokenizer__StringTokenizer*, lang_String__String*, lang_String__String*);
    text_StringTokenizer__StringTokenizer* (*new_withChar)(lang_String__String*, lang_Character__Char, lang_Numbers__SSizeT);
    void (*init_withChar)(text_StringTokenizer__StringTokenizer*, lang_String__String*, lang_Character__Char, lang_Numbers__SSizeT);
    text_StringTokenizer__StringTokenizer* (*new_withString)(lang_String__String*, lang_String__String*, lang_Numbers__SSizeT);
    void (*init_withString)(text_StringTokenizer__StringTokenizer*, lang_String__String*, lang_String__String*, lang_Numbers__SSizeT);
    lang_types__Bool (*hasNext__quest)(text_StringTokenizer__StringTokenizer*);
    lang_String__String* (*nextToken)(text_StringTokenizer__StringTokenizer*);
};


struct _text_StringTokenizer__StringTokenizerIteratorClass {
    struct _lang_Iterators__IteratorClass __super__;
    text_StringTokenizer__StringTokenizerIterator* (*new_sti)(lang_types__Class*, text_StringTokenizer__StringTokenizer*);
    void (*init_sti)(text_StringTokenizer__StringTokenizerIterator*, text_StringTokenizer__StringTokenizer*);
    lang_types__Bool (*hasPrev__quest)(text_StringTokenizer__StringTokenizerIterator*);
    void (*prev)(text_StringTokenizer__StringTokenizerIterator*, uint8_t*);
};


#ifdef OOC_FROM_C
#define StringTokenizer text_StringTokenizer__StringTokenizer
#define StringTokenizer_class() text_StringTokenizer__StringTokenizer_class()
#define StringTokenizerClass text_StringTokenizer__StringTokenizerClass
#define StringTokenizerClass_class() text_StringTokenizer__StringTokenizerClass_class()
#define StringTokenizer_new_withCharWithoutmaxTokens(input, delim) (void*) text_StringTokenizer__StringTokenizer_new_withCharWithoutmaxTokens((void*) (input), (delim))
#define StringTokenizer_init_withCharWithoutmaxTokens(_this_, input, delim) text_StringTokenizer__StringTokenizer_init_withCharWithoutmaxTokens((void*) (_this_), (void*) (input), (delim))
#define StringTokenizer_new_withStringWithoutmaxTokens(input, delim) (void*) text_StringTokenizer__StringTokenizer_new_withStringWithoutmaxTokens((void*) (input), (void*) (delim))
#define StringTokenizer_init_withStringWithoutmaxTokens(_this_, input, delim) text_StringTokenizer__StringTokenizer_init_withStringWithoutmaxTokens((void*) (_this_), (void*) (input), (void*) (delim))
#define StringTokenizer_new_withChar(input, delim, maxTokens) (void*) text_StringTokenizer__StringTokenizer_new_withChar((void*) (input), (delim), (maxTokens))
#define StringTokenizer_init_withChar(_this_, input, delim, maxTokens) text_StringTokenizer__StringTokenizer_init_withChar((void*) (_this_), (void*) (input), (delim), (maxTokens))
#define StringTokenizer_new_withString(input, delim, maxTokens) (void*) text_StringTokenizer__StringTokenizer_new_withString((void*) (input), (void*) (delim), (maxTokens))
#define StringTokenizer_init_withString(_this_, input, delim, maxTokens) text_StringTokenizer__StringTokenizer_init_withString((void*) (_this_), (void*) (input), (void*) (delim), (maxTokens))
#define StringTokenizer_iterator(_this_) (void*) text_StringTokenizer__StringTokenizer_iterator((void*) (_this_))
#define StringTokenizer_hasNext__quest(_this_) text_StringTokenizer__StringTokenizer_hasNext__quest((void*) (_this_))
#define StringTokenizer_nextToken(_this_) (void*) text_StringTokenizer__StringTokenizer_nextToken((void*) (_this_))
#define StringTokenizer___defaults__(_this_) text_StringTokenizer__StringTokenizer___defaults__((void*) (_this_))
#define StringTokenizer___load__() text_StringTokenizer__StringTokenizer___load__()
#define StringTokenizerIterator text_StringTokenizer__StringTokenizerIterator
#define StringTokenizerIterator_class() text_StringTokenizer__StringTokenizerIterator_class()
#define StringTokenizerIteratorClass text_StringTokenizer__StringTokenizerIteratorClass
#define StringTokenizerIteratorClass_class() text_StringTokenizer__StringTokenizerIteratorClass_class()
#define StringTokenizerIterator_new_sti(st) (void*) text_StringTokenizer__StringTokenizerIterator_new_sti((void*) (st))
#define StringTokenizerIterator_init_sti(_this_, st) text_StringTokenizer__StringTokenizerIterator_init_sti((void*) (_this_), (void*) (st))
#define StringTokenizerIterator_hasNext__quest(_this_) text_StringTokenizer__StringTokenizerIterator_hasNext__quest((void*) (_this_))
#define StringTokenizerIterator_next(_this_, __genericReturn151) text_StringTokenizer__StringTokenizerIterator_next((void*) (_this_), (__genericReturn151))
#define StringTokenizerIterator_hasPrev__quest(_this_) text_StringTokenizer__StringTokenizerIterator_hasPrev__quest((void*) (_this_))
#define StringTokenizerIterator_prev(_this_, __genericReturn152) text_StringTokenizer__StringTokenizerIterator_prev((void*) (_this_), (__genericReturn152))
#define StringTokenizerIterator_remove(_this_) text_StringTokenizer__StringTokenizerIterator_remove((void*) (_this_))
#define StringTokenizerIterator___defaults__(_this_) text_StringTokenizer__StringTokenizerIterator___defaults__((void*) (_this_))
#define StringTokenizerIterator___load__() text_StringTokenizer__StringTokenizerIterator___load__()
#endif

#endif // ___text_StringTokenizer___
