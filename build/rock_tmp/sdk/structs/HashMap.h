/* structs/HashMap header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___structs_HashMap___
#define ___structs_HashMap___

#include <sdk/structs/HashMap-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/lang/Iterators.h>

struct _structs_HashMap__HashEntry {
    lang_types__Pointer key;
    lang_types__Pointer value;
    structs_HashMap__HashEntry* next;
};

struct _structs_HashMap__HashMap {
    struct _lang_Iterators__BackIterable __super__;
    lang_types__Class* K;
    lang_types__Class* V;
    lang_Numbers__SizeT _size;
    lang_Numbers__SizeT capacity;
    lang_types__Closure keyEquals;
    lang_types__Closure hashKey;
    _lang_array__Array buckets;
    structs_ArrayList__ArrayList* keys;
};


struct _structs_HashMap__HashMapValueIterator {
    struct _lang_Iterators__BackIterator __super__;
    lang_types__Class* K;
    structs_HashMap__HashMap* map;
    lang_Numbers__SSizeT index;
};


struct ___structs_HashMap_closure271_ctx {
    structs_HashMap__HashMap* this;
};

struct ___structs_HashMap_closure274_ctx {
    structs_HashMap__HashMap* copy;
};

struct _structs_HashMap__HashEntryClass {
    struct _lang_types__ClassClass __super__;
    structs_HashMap__HashEntry (*new_keyVal)(lang_types__Pointer, lang_types__Pointer);
    void (*init_keyVal)(structs_HashMap__HashEntry*, lang_types__Pointer, lang_types__Pointer);
};


struct _structs_HashMap__HashMapClass {
    struct _lang_Iterators__BackIterableClass __super__;
    structs_HashMap__HashMap* (*new)(lang_types__Class*, lang_types__Class*);
    structs_HashMap__HashMap* (*new_withCapacity)(lang_types__Class*, lang_types__Class*, lang_Numbers__SizeT);
    void (*init_withCapacity)(structs_HashMap__HashMap*, lang_Numbers__SizeT);
    lang_types__Bool (*getEntry)(structs_HashMap__HashMap*, uint8_t*, structs_HashMap__HashEntry*);
    lang_types__Bool (*getEntryForHash)(structs_HashMap__HashMap*, uint8_t*, lang_Numbers__SizeT, structs_HashMap__HashEntry*);
    structs_HashMap__HashMap* (*clone)(structs_HashMap__HashMap*);
    structs_HashMap__HashMap* (*merge)(structs_HashMap__HashMap*, structs_HashMap__HashMap*);
    structs_HashMap__HashMap* (*merge__bang)(structs_HashMap__HashMap*, structs_HashMap__HashMap*);
    lang_types__Bool (*put)(structs_HashMap__HashMap*, uint8_t*, uint8_t*);
    lang_types__Bool (*add)(structs_HashMap__HashMap*, uint8_t*, uint8_t*);
    void (*get)(structs_HashMap__HashMap*, uint8_t*, uint8_t*);
    lang_types__Bool (*empty__quest)(structs_HashMap__HashMap*);
    lang_types__Bool (*contains__quest)(structs_HashMap__HashMap*, uint8_t*);
    lang_types__Bool (*remove)(structs_HashMap__HashMap*, uint8_t*);
    lang_types__Bool (*resize)(structs_HashMap__HashMap*, lang_Numbers__SizeT);
    void (*clear)(structs_HashMap__HashMap*);
    lang_Numbers__SSizeT (*getSize)(structs_HashMap__HashMap*);
    structs_ArrayList__ArrayList* (*getKeys)(structs_HashMap__HashMap*);
    void (*each_withKeys)(structs_HashMap__HashMap*, lang_types__Closure);
    void (*each)(structs_HashMap__HashMap*, lang_types__Closure);
    lang_Numbers__SizeT (*__getsize__)(structs_HashMap__HashMap*);
};


struct _structs_HashMap__HashMapValueIteratorClass {
    struct _lang_Iterators__BackIteratorClass __super__;
    structs_HashMap__HashMapValueIterator* (*new_withMap)(lang_types__Class*, lang_types__Class*, structs_HashMap__HashMap*);
    void (*init_withMap)(structs_HashMap__HashMapValueIterator*, structs_HashMap__HashMap*);
    lang_types__Bool (*hasNext__quest)(structs_HashMap__HashMapValueIterator*);
    void (*next)(structs_HashMap__HashMapValueIterator*, uint8_t*);
    lang_types__Bool (*remove)(structs_HashMap__HashMapValueIterator*);
};


struct ___structs_HashMap_closure271_ctxClass {
    struct _lang_types__ClassClass __super__;
};


struct ___structs_HashMap_closure274_ctxClass {
    struct _lang_types__ClassClass __super__;
};


#ifdef OOC_FROM_C
#define stringEquals(k1, k2) structs_HashMap__stringEquals((k1), (k2))
#define cstringEquals(k1, k2) structs_HashMap__cstringEquals((k1), (k2))
#define pointerEquals(k1, k2) structs_HashMap__pointerEquals((k1), (k2))
#define intEquals(k1, k2) structs_HashMap__intEquals((k1), (k2))
#define charEquals(k1, k2) structs_HashMap__charEquals((k1), (k2))
#define genericEquals(k1, k2) structs_HashMap__genericEquals((k1), (k2))
#define intHash(key) structs_HashMap__intHash((key))
#define pointerHash(key) structs_HashMap__pointerHash((key))
#define charHash(key) structs_HashMap__charHash((key))
#define murmurHash(keyTagazok) structs_HashMap__murmurHash((keyTagazok))
#define ac_X31_hash(key) structs_HashMap__ac_X31_hash((key))
#define getStandardEquals(T, T) structs_HashMap__getStandardEquals((T), (void*) (T))
#define getStandardHashFunc(T, T) structs_HashMap__getStandardHashFunc((T), (void*) (T))
#define __structs_HashMap_closure271(this, k, v) structs_HashMap____structs_HashMap_closure271((void*) (this), (k), (v))
#define __structs_HashMap_closure271_thunk(k, v, __context__) structs_HashMap____structs_HashMap_closure271_thunk((k), (v), (__context__))
#define __structs_HashMap_closure274(copy, k, v) structs_HashMap____structs_HashMap_closure274((void*) (copy), (k), (v))
#define __structs_HashMap_closure274_thunk(k, v, __context__) structs_HashMap____structs_HashMap_closure274_thunk((k), (v), (__context__))
#define HashEntry structs_HashMap__HashEntry
#define HashEntry_class() structs_HashMap__HashEntry_class()
#define HashEntryClass structs_HashMap__HashEntryClass
#define HashEntryClass_class() structs_HashMap__HashEntryClass_class()
#define HashEntry_new_keyVal(key, value) structs_HashMap__HashEntry_new_keyVal((void*) (key), (void*) (value))
#define HashEntry_init_keyVal(_this_, key, value) structs_HashMap__HashEntry_init_keyVal((void*) (_this_), (void*) (key), (void*) (value))
#define HashEntry___load__() structs_HashMap__HashEntry___load__()
#define HashMap structs_HashMap__HashMap
#define HashMap_class() structs_HashMap__HashMap_class()
#define HashMapClass structs_HashMap__HashMapClass
#define HashMapClass_class() structs_HashMap__HashMapClass_class()
#define HashMap_new() (void*) structs_HashMap__HashMap_new()
#define HashMap_init(_this_) structs_HashMap__HashMap_init((void*) (_this_))
#define HashMap_new_withCapacity(capaArg) (void*) structs_HashMap__HashMap_new_withCapacity((capaArg))
#define HashMap_init_withCapacity(_this_, capaArg) structs_HashMap__HashMap_init_withCapacity((void*) (_this_), (capaArg))
#define HashMap_getEntry(_this_, key, result) structs_HashMap__HashMap_getEntry((void*) (_this_), (key), (result))
#define HashMap_getEntryForHash(_this_, key, hash, result) structs_HashMap__HashMap_getEntryForHash((void*) (_this_), (key), (hash), (result))
#define HashMap_clone(_this_) (void*) structs_HashMap__HashMap_clone((void*) (_this_))
#define HashMap_merge(_this_, other) (void*) structs_HashMap__HashMap_merge((void*) (_this_), (void*) (other))
#define HashMap_merge__bang(_this_, other) (void*) structs_HashMap__HashMap_merge__bang((void*) (_this_), (void*) (other))
#define HashMap_put(_this_, key, value) structs_HashMap__HashMap_put((void*) (_this_), (key), (value))
#define HashMap_add(_this_, key, value) structs_HashMap__HashMap_add((void*) (_this_), (key), (value))
#define HashMap_get(_this_, __genericReturn83, key) structs_HashMap__HashMap_get((void*) (_this_), (__genericReturn83), (key))
#define HashMap_empty__quest(_this_) structs_HashMap__HashMap_empty__quest((void*) (_this_))
#define HashMap_contains__quest(_this_, key) structs_HashMap__HashMap_contains__quest((void*) (_this_), (key))
#define HashMap_remove(_this_, key) structs_HashMap__HashMap_remove((void*) (_this_), (key))
#define HashMap_resize(_this_, _capacity) structs_HashMap__HashMap_resize((void*) (_this_), (_capacity))
#define HashMap_iterator(_this_) (void*) structs_HashMap__HashMap_iterator((void*) (_this_))
#define HashMap_backIterator(_this_) (void*) structs_HashMap__HashMap_backIterator((void*) (_this_))
#define HashMap_clear(_this_) structs_HashMap__HashMap_clear((void*) (_this_))
#define HashMap_getSize(_this_) structs_HashMap__HashMap_getSize((void*) (_this_))
#define HashMap_getKeys(_this_) (void*) structs_HashMap__HashMap_getKeys((void*) (_this_))
#define HashMap_each_withKeys(_this_, f) structs_HashMap__HashMap_each_withKeys((void*) (_this_), (f))
#define HashMap_each(_this_, f) structs_HashMap__HashMap_each((void*) (_this_), (f))
#define HashMap___getsize__(_this_) structs_HashMap__HashMap___getsize__((void*) (_this_))
#define HashMap___defaults__(_this_) structs_HashMap__HashMap___defaults__((void*) (_this_))
#define HashMap___load__() structs_HashMap__HashMap___load__()
#define HashMapValueIterator structs_HashMap__HashMapValueIterator
#define HashMapValueIterator_class() structs_HashMap__HashMapValueIterator_class()
#define HashMapValueIteratorClass structs_HashMap__HashMapValueIteratorClass
#define HashMapValueIteratorClass_class() structs_HashMap__HashMapValueIteratorClass_class()
#define HashMapValueIterator_new_withMap(map) (void*) structs_HashMap__HashMapValueIterator_new_withMap((void*) (map))
#define HashMapValueIterator_init_withMap(_this_, map) structs_HashMap__HashMapValueIterator_init_withMap((void*) (_this_), (void*) (map))
#define HashMapValueIterator_hasNext__quest(_this_) structs_HashMap__HashMapValueIterator_hasNext__quest((void*) (_this_))
#define HashMapValueIterator_next(_this_, __genericReturn85) structs_HashMap__HashMapValueIterator_next((void*) (_this_), (__genericReturn85))
#define HashMapValueIterator_hasPrev__quest(_this_) structs_HashMap__HashMapValueIterator_hasPrev__quest((void*) (_this_))
#define HashMapValueIterator_prev(_this_, __genericReturn86) structs_HashMap__HashMapValueIterator_prev((void*) (_this_), (__genericReturn86))
#define HashMapValueIterator_remove(_this_) structs_HashMap__HashMapValueIterator_remove((void*) (_this_))
#define HashMapValueIterator___defaults__(_this_) structs_HashMap__HashMapValueIterator___defaults__((void*) (_this_))
#define HashMapValueIterator___load__() structs_HashMap__HashMapValueIterator___load__()
#endif

#endif // ___structs_HashMap___
