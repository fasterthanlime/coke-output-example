/* structs/Stack header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___structs_Stack___
#define ___structs_Stack___

#include <sdk/structs/Stack-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/lang/Iterators.h>

struct _structs_Stack__Stack {
    struct _lang_Iterators__BackIterable __super__;
    structs_ArrayList__ArrayList* data;
};


struct _structs_Stack__StackClass {
    struct _lang_Iterators__BackIterableClass __super__;
    structs_Stack__Stack* (*new)(lang_types__Class*);
    void (*push)(structs_Stack__Stack*, uint8_t*);
    void (*pop)(structs_Stack__Stack*, uint8_t*);
    void (*peek)(structs_Stack__Stack*, uint8_t*);
    void (*peek_index)(structs_Stack__Stack*, uint8_t*, lang_Numbers__SSizeT);
    lang_Numbers__SSizeT (*indexOf)(structs_Stack__Stack*, uint8_t*);
    lang_Numbers__SSizeT (*getSize)(structs_Stack__Stack*);
    lang_types__Bool (*empty__quest)(structs_Stack__Stack*);
    lang_Numbers__Int (*lastIndex)(structs_Stack__Stack*);
    void (*clear)(structs_Stack__Stack*);
    lang_Numbers__SSizeT (*__getsize__)(structs_Stack__Stack*);
};


#ifdef OOC_FROM_C
#define Stack structs_Stack__Stack
#define Stack_class() structs_Stack__Stack_class()
#define StackClass structs_Stack__StackClass
#define StackClass_class() structs_Stack__StackClass_class()
#define Stack_new() (void*) structs_Stack__Stack_new()
#define Stack_init(_this_) structs_Stack__Stack_init((void*) (_this_))
#define Stack_push(_this_, element) structs_Stack__Stack_push((void*) (_this_), (element))
#define Stack_pop(_this_, __genericReturn95) structs_Stack__Stack_pop((void*) (_this_), (__genericReturn95))
#define Stack_peek(_this_, __genericReturn97) structs_Stack__Stack_peek((void*) (_this_), (__genericReturn97))
#define Stack_peek_index(_this_, __genericReturn99, index) structs_Stack__Stack_peek_index((void*) (_this_), (__genericReturn99), (index))
#define Stack_indexOf(_this_, element) structs_Stack__Stack_indexOf((void*) (_this_), (element))
#define Stack_getSize(_this_) structs_Stack__Stack_getSize((void*) (_this_))
#define Stack_empty__quest(_this_) structs_Stack__Stack_empty__quest((void*) (_this_))
#define Stack_lastIndex(_this_) structs_Stack__Stack_lastIndex((void*) (_this_))
#define Stack_clear(_this_) structs_Stack__Stack_clear((void*) (_this_))
#define Stack_iterator(_this_) (void*) structs_Stack__Stack_iterator((void*) (_this_))
#define Stack_backIterator(_this_) (void*) structs_Stack__Stack_backIterator((void*) (_this_))
#define Stack___getsize__(_this_) structs_Stack__Stack___getsize__((void*) (_this_))
#define Stack___defaults__(_this_) structs_Stack__Stack___defaults__((void*) (_this_))
#define Stack___load__() structs_Stack__Stack___load__()
#endif

#endif // ___structs_Stack___
