/* structs/LinkedList header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___structs_LinkedList___
#define ___structs_LinkedList___

#include <sdk/structs/LinkedList-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/lang/Iterators.h>
#include <sdk/structs/List.h>

struct _structs_LinkedList__LinkedList {
    struct _structs_List__List __super__;
    lang_Numbers__SizeT _size;
    structs_LinkedList__Node* head;
};


struct _structs_LinkedList__Node {
    struct _lang_types__Object __super__;
    lang_types__Class* T;
    structs_LinkedList__Node* prev;
    structs_LinkedList__Node* next;
    uint8_t* data;
};


struct _structs_LinkedList__LinkedListIterator {
    struct _lang_Iterators__BackIterator __super__;
    structs_LinkedList__Node* current;
    structs_LinkedList__LinkedList* list;
};


struct _structs_LinkedList__LinkedListClass {
    struct _structs_List__ListClass __super__;
    structs_LinkedList__LinkedList* (*new)(lang_types__Class*);
    structs_LinkedList__Node* (*getNode)(structs_LinkedList__LinkedList*, lang_Numbers__SSizeT);
    void (*removeNode)(structs_LinkedList__LinkedList*, structs_LinkedList__Node*);
    structs_LinkedList__LinkedListIterator* (*backIterator)(structs_LinkedList__LinkedList*);
};


struct _structs_LinkedList__NodeClass {
    struct _lang_types__ClassClass __super__;
    structs_LinkedList__Node* (*new)(lang_types__Class*);
    void (*init)(structs_LinkedList__Node*);
    structs_LinkedList__Node* (*new_withParams)(lang_types__Class*, structs_LinkedList__Node*, structs_LinkedList__Node*, uint8_t*);
    void (*init_withParams)(structs_LinkedList__Node*, structs_LinkedList__Node*, structs_LinkedList__Node*, uint8_t*);
};


struct _structs_LinkedList__LinkedListIteratorClass {
    struct _lang_Iterators__BackIteratorClass __super__;
    structs_LinkedList__LinkedListIterator* (*new_ll)(lang_types__Class*, structs_LinkedList__LinkedList*);
    void (*init_ll)(structs_LinkedList__LinkedListIterator*, structs_LinkedList__LinkedList*);
    lang_types__Bool (*hasNext__quest)(structs_LinkedList__LinkedListIterator*);
    void (*next)(structs_LinkedList__LinkedListIterator*, uint8_t*);
    lang_types__Bool (*remove)(structs_LinkedList__LinkedListIterator*);
};


#ifdef OOC_FROM_C
#define getchar() structs_LinkedList__getchar()
#define LinkedList structs_LinkedList__LinkedList
#define LinkedList_class() structs_LinkedList__LinkedList_class()
#define LinkedListClass structs_LinkedList__LinkedListClass
#define LinkedListClass_class() structs_LinkedList__LinkedListClass_class()
#define LinkedList_new() (void*) structs_LinkedList__LinkedList_new()
#define LinkedList_init(_this_) structs_LinkedList__LinkedList_init((void*) (_this_))
#define LinkedList_add(_this_, data) structs_LinkedList__LinkedList_add((void*) (_this_), (data))
#define LinkedList_add_withIndex(_this_, index, data) structs_LinkedList__LinkedList_add_withIndex((void*) (_this_), (index), (data))
#define LinkedList_get(_this_, __genericReturn105, index) structs_LinkedList__LinkedList_get((void*) (_this_), (__genericReturn105), (index))
#define LinkedList_getNode(_this_, index) (void*) structs_LinkedList__LinkedList_getNode((void*) (_this_), (index))
#define LinkedList_clear(_this_) structs_LinkedList__LinkedList_clear((void*) (_this_))
#define LinkedList_indexOf(_this_, data) structs_LinkedList__LinkedList_indexOf((void*) (_this_), (data))
#define LinkedList_lastIndexOf(_this_, data) structs_LinkedList__LinkedList_lastIndexOf((void*) (_this_), (data))
#define LinkedList_first(_this_, __genericReturn108) structs_LinkedList__LinkedList_first((void*) (_this_), (__genericReturn108))
#define LinkedList_last(_this_, __genericReturn109) structs_LinkedList__LinkedList_last((void*) (_this_), (__genericReturn109))
#define LinkedList_removeAt(_this_, __genericReturn110, index) structs_LinkedList__LinkedList_removeAt((void*) (_this_), (__genericReturn110), (index))
#define LinkedList_remove(_this_, data) structs_LinkedList__LinkedList_remove((void*) (_this_), (data))
#define LinkedList_removeNode(_this_, toRemove) structs_LinkedList__LinkedList_removeNode((void*) (_this_), (void*) (toRemove))
#define LinkedList_removeLast(_this_) structs_LinkedList__LinkedList_removeLast((void*) (_this_))
#define LinkedList_set(_this_, __genericReturn113, index, data) structs_LinkedList__LinkedList_set((void*) (_this_), (__genericReturn113), (index), (data))
#define LinkedList_getSize(_this_) structs_LinkedList__LinkedList_getSize((void*) (_this_))
#define LinkedList_iterator(_this_) (void*) structs_LinkedList__LinkedList_iterator((void*) (_this_))
#define LinkedList_backIterator(_this_) (void*) structs_LinkedList__LinkedList_backIterator((void*) (_this_))
#define LinkedList_clone(_this_) (void*) structs_LinkedList__LinkedList_clone((void*) (_this_))
#define LinkedList_emptyClone(_this_) (void*) structs_LinkedList__LinkedList_emptyClone((void*) (_this_))
#define LinkedList___getsize__(_this_) structs_LinkedList__LinkedList___getsize__((void*) (_this_))
#define LinkedList___defaults__(_this_) structs_LinkedList__LinkedList___defaults__((void*) (_this_))
#define LinkedList___load__() structs_LinkedList__LinkedList___load__()
#define Node structs_LinkedList__Node
#define Node_class() structs_LinkedList__Node_class()
#define NodeClass structs_LinkedList__NodeClass
#define NodeClass_class() structs_LinkedList__NodeClass_class()
#define Node_new() (void*) structs_LinkedList__Node_new()
#define Node_init(_this_) structs_LinkedList__Node_init((void*) (_this_))
#define Node_new_withParams(prev, next, data) (void*) structs_LinkedList__Node_new_withParams((void*) (prev), (void*) (next), (data))
#define Node_init_withParams(_this_, prev, next, data) structs_LinkedList__Node_init_withParams((void*) (_this_), (void*) (prev), (void*) (next), (data))
#define Node___defaults__(_this_) structs_LinkedList__Node___defaults__((void*) (_this_))
#define Node___load__() structs_LinkedList__Node___load__()
#define LinkedListIterator structs_LinkedList__LinkedListIterator
#define LinkedListIterator_class() structs_LinkedList__LinkedListIterator_class()
#define LinkedListIteratorClass structs_LinkedList__LinkedListIteratorClass
#define LinkedListIteratorClass_class() structs_LinkedList__LinkedListIteratorClass_class()
#define LinkedListIterator_new_ll(list) (void*) structs_LinkedList__LinkedListIterator_new_ll((void*) (list))
#define LinkedListIterator_init_ll(_this_, list) structs_LinkedList__LinkedListIterator_init_ll((void*) (_this_), (void*) (list))
#define LinkedListIterator_hasNext__quest(_this_) structs_LinkedList__LinkedListIterator_hasNext__quest((void*) (_this_))
#define LinkedListIterator_next(_this_, __genericReturn114) structs_LinkedList__LinkedListIterator_next((void*) (_this_), (__genericReturn114))
#define LinkedListIterator_hasPrev__quest(_this_) structs_LinkedList__LinkedListIterator_hasPrev__quest((void*) (_this_))
#define LinkedListIterator_prev(_this_, __genericReturn115) structs_LinkedList__LinkedListIterator_prev((void*) (_this_), (__genericReturn115))
#define LinkedListIterator_remove(_this_) structs_LinkedList__LinkedListIterator_remove((void*) (_this_))
#define LinkedListIterator___defaults__(_this_) structs_LinkedList__LinkedListIterator___defaults__((void*) (_this_))
#define LinkedListIterator___load__() structs_LinkedList__LinkedListIterator___load__()
#endif

#endif // ___structs_LinkedList___
