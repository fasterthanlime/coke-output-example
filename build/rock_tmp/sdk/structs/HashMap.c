/* structs/HashMap source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/structs/HashMap.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/BufferIterator.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Character.h>
#include <sdk/lang/VarArgs.h>
#include <sdk/lang/Memory.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Buffer.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Abstractions.h>
#include <sdk/lang/Format.h>
#include <sdk/lang/IO.h>
#include <sdk/structs/ArrayList.h>

structs_HashMap__HashEntry structs_HashMap__nullHashEntry;

void structs_HashMap__HashEntry_init_keyVal(structs_HashMap__HashEntry* this, lang_types__Pointer key, lang_types__Pointer value) {
    (*this).value = (void*) value;
    (*this).key = (void*) key;
    (*this).next = (void*) NULL;
}
structs_HashMap__HashEntry structs_HashMap__HashEntry_new_keyVal(lang_types__Pointer key, lang_types__Pointer value) {
    
    structs_HashMap__HashEntry this;
    structs_HashMap__HashEntry_init_keyVal(&(this), key, value);
    return this;
}
void structs_HashMap__HashEntry___load__() {
    lang_types__Class___load__();
}

structs_HashMap__HashEntryClass *structs_HashMap__HashEntry_class(){
    static _Bool __done__ = false;
    static structs_HashMap__HashEntryClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(structs_HashMap__HashEntry),
                    .size = sizeof(structs_HashMap__HashEntry)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) structs_HashMap__HashEntry___load__,
            },
        },
        .new_keyVal = (void*) structs_HashMap__HashEntry_new_keyVal,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("HashEntry", 9);
    }
    return &class;
}

void structs_HashMap__HashMap_init(structs_HashMap__HashMap* this) {
    structs_HashMap__HashMap_init_withCapacity((structs_HashMap__HashMap*) this, 100);
}

void structs_HashMap__HashMap_init_withCapacity(structs_HashMap__HashMap* this, lang_Numbers__SizeT capaArg) {
    this->_size = 0;
    this->capacity = capaArg * 1.5;
    this->buckets = _lang_array__Array_new(structs_HashMap__HashEntry, this->capacity);
    this->keys = structs_ArrayList__ArrayList_new_withCapacity((lang_types__Class*)this->K, this->capacity);
    this->keyEquals = structs_HashMap__getStandardEquals(this->K);
    this->hashKey = structs_HashMap__getStandardHashFunc(this->K);
    ((lang_Iterators__Iterable*)this)->T = this->V;
}

lang_types__Bool structs_HashMap__HashMap_getEntry_impl(structs_HashMap__HashMap* this, uint8_t* key, structs_HashMap__HashEntry* result) {
    lang_Numbers__SizeT hash = ((lang_Numbers__SizeT (*)(lang_types__Class*, uint8_t*, void*)) this->hashKey.thunk)((lang_types__Class*)this->K, (uint8_t*) key, this->hashKey.context) % this->capacity;
    structs_HashMap__HashEntry entry = _lang_array__Array_get(this->buckets, hash, structs_HashMap__HashEntry);
    if (entry.key == NULL) {
        return false;
    }
    while (true) {
        if (((lang_types__Bool (*)(lang_types__Class*, uint8_t*, uint8_t*, void*)) this->keyEquals.thunk)((lang_types__Class*)this->K, (uint8_t*) ((uint8_t*) (entry.key)), (uint8_t*) key, this->keyEquals.context)) {
            if (result) {
                (*(result)) = entry;
            }
            return true;
        }
        if (entry.next) {
            entry = (*(entry.next));
        }
        else {
            return false;
        }
    }
    return false;
}

lang_types__Bool structs_HashMap__HashMap_getEntryForHash_impl(structs_HashMap__HashMap* this, uint8_t* key, lang_Numbers__SizeT hash, structs_HashMap__HashEntry* result) {
    structs_HashMap__HashEntry entry = _lang_array__Array_get(this->buckets, hash, structs_HashMap__HashEntry);
    if (entry.key == NULL) {
        return false;
    }
    while (true) {
        if (((lang_types__Bool (*)(lang_types__Class*, uint8_t*, uint8_t*, void*)) this->keyEquals.thunk)((lang_types__Class*)this->K, (uint8_t*) ((uint8_t*) (entry.key)), (uint8_t*) key, this->keyEquals.context)) {
            if (result) {
                (*(result)) = entry;
            }
            return true;
        }
        if (entry.next) {
            entry = (*(entry.next));
        }
        else {
            return false;
        }
    }
    return false;
}

structs_HashMap__HashMap* structs_HashMap__HashMap_clone_impl(structs_HashMap__HashMap* this) {
    structs_HashMap__HashMap* copy = structs_HashMap__HashMap_new((lang_types__Class*)this->K, (lang_types__Class*)this->V);
    __structs_HashMap_closure274_ctx* __ctx275 = lang_Memory__gc_malloc(((lang_types__Class*)__structs_HashMap_closure274_ctx_class())->size);
    (*(__ctx275)) = (__structs_HashMap_closure274_ctx) { 
        copy
    };
    lang_types__Closure __closure276 = (lang_types__Closure) { 
        structs_HashMap____structs_HashMap_closure274_thunk, 
        __ctx275
    };
    structs_HashMap__HashMap_each_withKeys(this, __closure276);
    return copy;
}

structs_HashMap__HashMap* structs_HashMap__HashMap_merge_impl(structs_HashMap__HashMap* this, structs_HashMap__HashMap* other) {
    structs_HashMap__HashMap* c = structs_HashMap__HashMap_clone(this);
    structs_HashMap__HashMap_merge__bang(c, other);
    return c;
}

structs_HashMap__HashMap* structs_HashMap__HashMap_merge__bang_impl(structs_HashMap__HashMap* this, structs_HashMap__HashMap* other) {
    __structs_HashMap_closure271_ctx* __ctx272 = lang_Memory__gc_malloc(((lang_types__Class*)__structs_HashMap_closure271_ctx_class())->size);
    (*(__ctx272)) = (__structs_HashMap_closure271_ctx) { 
        this
    };
    lang_types__Closure __closure273 = (lang_types__Closure) { 
        structs_HashMap____structs_HashMap_closure271_thunk, 
        __ctx272
    };
    structs_HashMap__HashMap_each_withKeys(other, __closure273);
    return this;
}

lang_types__Bool structs_HashMap__HashMap_put_impl(structs_HashMap__HashMap* this, uint8_t* key, uint8_t* value) {
    lang_Numbers__SizeT hash = ((lang_Numbers__SizeT (*)(lang_types__Class*, uint8_t*, void*)) this->hashKey.thunk)((lang_types__Class*)this->K, (uint8_t*) key, this->hashKey.context) % this->capacity;
    structs_HashMap__HashEntry entry;
    if (structs_HashMap__HashMap_getEntryForHash(this, (uint8_t*) key, hash, &(entry))) {
        lang_Memory__memcpy(entry.value, value, this->V->size);
    }
    else {
        structs_ArrayList__ArrayList_add(this->keys, (uint8_t*) key);
        structs_HashMap__HashEntry current = _lang_array__Array_get(this->buckets, hash, structs_HashMap__HashEntry);
        if (current.key != NULL) {
            structs_HashMap__HashEntry* currentPointer = &((((structs_HashMap__HashEntry*) (this->buckets.data)))[hash]);
            while ((*(currentPointer)).next) {
                currentPointer = (*(currentPointer)).next;
            }
            structs_HashMap__HashEntry* newEntry = ((structs_HashMap__HashEntry*) (lang_Memory__gc_malloc(((lang_types__Class*)structs_HashMap__HashEntry_class())->size)));
            (*(newEntry)).key = (void*) lang_Memory__gc_malloc(this->K->size);
            lang_Memory__memcpy((*(newEntry)).key, key, this->K->size);
            (*(newEntry)).value = (void*) lang_Memory__gc_malloc(this->V->size);
            lang_Memory__memcpy((*(newEntry)).value, value, this->V->size);
            (*(currentPointer)).next = newEntry;
        }
        else {
            entry.key = (void*) lang_Memory__gc_malloc(this->K->size);
            lang_Memory__memcpy(entry.key, key, this->K->size);
            entry.value = (void*) lang_Memory__gc_malloc(this->V->size);
            lang_Memory__memcpy(entry.value, value, this->V->size);
            entry.next = (void*) NULL;
            _lang_array__Array_set(this->buckets, hash, structs_HashMap__HashEntry, entry);
        }
        this->_size += 1;
        if ((((lang_Numbers__Float) (this->_size)) / ((lang_Numbers__Float) (this->capacity))) > 0.75) {
            structs_HashMap__HashMap_resize(this, this->_size * (this->_size > (lang_Numbers__SizeT) 50000 ? 2 : 4));
        }
    }
    return true;
}

lang_types__Bool structs_HashMap__HashMap_add_impl(structs_HashMap__HashMap* this, uint8_t* key, uint8_t* value) {
    return structs_HashMap__HashMap_put(this, (uint8_t*) key, (uint8_t*) value);
}

void structs_HashMap__HashMap_get_impl(structs_HashMap__HashMap* this, uint8_t* __genericReturn83, uint8_t* key) {
    structs_HashMap__HashEntry entry;
    if (structs_HashMap__HashMap_getEntry(this, (uint8_t*) key, &(entry))) {
        uint8_t* __returnVal84 = lang_Memory__gc_malloc(this->V->size);
        lang_Memory__memcpy(__returnVal84, ((uint8_t*) (entry.value)), this->V->size);
        if (__genericReturn83) {
            lang_Memory__memcpy(__genericReturn83, __returnVal84, this->V->size);
        }
        return;
    }
    if (__genericReturn83) {
        lang_types__Pointer __unreferencable222 = NULL;
        lang_Memory__memcpy(__genericReturn83, &(__unreferencable222), ((lang_types__Class*)lang_types__Pointer_class())->size);
    }
    return;
}

lang_types__Bool structs_HashMap__HashMap_empty__quest_impl(structs_HashMap__HashMap* this) {
    return structs_List__List_empty__quest((structs_List__List*) this->keys);
}

lang_types__Bool structs_HashMap__HashMap_contains__quest_impl(structs_HashMap__HashMap* this, uint8_t* key) {
    return structs_HashMap__HashMap_getEntry(this, (uint8_t*) key, NULL);
}

lang_types__Bool structs_HashMap__HashMap_remove_impl(structs_HashMap__HashMap* this, uint8_t* key) {
    lang_Numbers__SizeT hash = ((lang_Numbers__SizeT (*)(lang_types__Class*, uint8_t*, void*)) this->hashKey.thunk)((lang_types__Class*)this->K, (uint8_t*) key, this->hashKey.context) % this->capacity;
    structs_HashMap__HashEntry* prev = NULL;
    structs_HashMap__HashEntry entry = _lang_array__Array_get(this->buckets, hash, structs_HashMap__HashEntry);
    if (entry.key == NULL) {
        return false;
    }
    while (true) {
        if (((lang_types__Bool (*)(lang_types__Class*, uint8_t*, uint8_t*, void*)) this->keyEquals.thunk)((lang_types__Class*)this->K, (uint8_t*) ((uint8_t*) (entry.key)), (uint8_t*) key, this->keyEquals.context)) {
            if (prev) {
                (*(prev)).next = entry.next;
            }
            else {
                if (entry.next) {
                    _lang_array__Array_set(this->buckets, hash, structs_HashMap__HashEntry, (*(entry.next)));
                }
                else {
                    _lang_array__Array_set(this->buckets, hash, structs_HashMap__HashEntry, structs_HashMap__nullHashEntry);
                }
            }
            
            {
                lang_Numbers__Int i;
                for (i = 0; i < structs_ArrayList__ArrayList___getsize__(this->keys); i++) {
                    uint8_t* cKey = lang_Memory__gc_malloc(this->K->size);
                    structs_ArrayList__ArrayList_get(this->keys, cKey, i);
                    if (((lang_types__Bool (*)(lang_types__Class*, uint8_t*, uint8_t*, void*)) this->keyEquals.thunk)((lang_types__Class*)this->K, (uint8_t*) key, (uint8_t*) cKey, this->keyEquals.context)) {
                        structs_ArrayList__ArrayList_removeAt(this->keys, NULL, i);
                        break;
                    }
                }
            }
            this->_size -= 1;
            return true;
        }
        if (entry.next) {
            prev = &(entry);
            entry = (*(entry.next));
        }
        else {
            return false;
        }
    }
    return false;
}

lang_types__Bool structs_HashMap__HashMap_resize_impl(structs_HashMap__HashMap* this, lang_Numbers__SizeT _capacity) {
    lang_Numbers__SizeT oldCapacity = this->capacity;
    _lang_array__Array oldBuckets = this->buckets;
    structs_ArrayList__ArrayList_clear(this->keys);
    this->_size = 0;
    this->capacity = _capacity;
    this->buckets = _lang_array__Array_new(structs_HashMap__HashEntry, this->capacity);
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < oldCapacity; i++) {
            structs_HashMap__HashEntry entry = _lang_array__Array_get(oldBuckets, i, structs_HashMap__HashEntry);
            if (entry.key == NULL) {
                continue;
            }
            structs_HashMap__HashMap_put(this, (uint8_t*) ((uint8_t*) (entry.key)), (uint8_t*) ((uint8_t*) (entry.value)));
            while (entry.next) {
                entry = (*(entry.next));
                structs_HashMap__HashMap_put(this, (uint8_t*) ((uint8_t*) (entry.key)), (uint8_t*) ((uint8_t*) (entry.value)));
            }
        }
    }
    return true;
}

lang_Iterators__BackIterator* structs_HashMap__HashMap_iterator_impl(structs_HashMap__HashMap* this) {
    return ((lang_Iterators__BackIterator*) (structs_HashMap__HashMapValueIterator_new_withMap((lang_types__Class*)this->K, (lang_types__Class*)this->V, this)));
}

lang_Iterators__BackIterator* structs_HashMap__HashMap_backIterator_impl(structs_HashMap__HashMap* this) {
    structs_HashMap__HashMapValueIterator* iter = structs_HashMap__HashMapValueIterator_new_withMap((lang_types__Class*)this->K, (lang_types__Class*)this->V, this);
    iter->index = structs_ArrayList__ArrayList_getSize(this->keys);
    return ((lang_Iterators__BackIterator*) (iter));
}

void structs_HashMap__HashMap_clear_impl(structs_HashMap__HashMap* this) {
    structs_HashMap__HashMap_init_withCapacity((structs_HashMap__HashMap*) this, this->capacity);
}

lang_Numbers__SSizeT structs_HashMap__HashMap_getSize_impl(structs_HashMap__HashMap* this) {
    return ((lang_Numbers__SSizeT) (this->_size));
}

structs_ArrayList__ArrayList* structs_HashMap__HashMap_getKeys_impl(structs_HashMap__HashMap* this) {
    return this->keys;
}

void structs_HashMap__HashMap_each_withKeys_impl(structs_HashMap__HashMap* this, lang_types__Closure f) {
    
    {
        uint8_t* key = lang_Memory__gc_malloc(this->K->size);
        
        {
            lang_Iterators__BackIterator* __iter220 = structs_ArrayList__ArrayList_iterator(structs_HashMap__HashMap_getKeys(this));
            while (lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) __iter220)) {
                lang_Iterators__Iterator_next((lang_Iterators__Iterator*) __iter220, key);
                uint8_t* __genCall223 = lang_Memory__gc_malloc(this->V->size);
                ((void (*)(uint8_t*, uint8_t*, void*)) f.thunk)((uint8_t*) key, (uint8_t*) (structs_HashMap__HashMap_get(this, __genCall223, (uint8_t*) key), __genCall223), f.context);
            }
        }
    }
}

void structs_HashMap__HashMap_each_impl(structs_HashMap__HashMap* this, lang_types__Closure f) {
    
    {
        uint8_t* key = lang_Memory__gc_malloc(this->K->size);
        
        {
            lang_Iterators__BackIterator* __iter221 = structs_ArrayList__ArrayList_iterator(structs_HashMap__HashMap_getKeys(this));
            while (lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) __iter221)) {
                lang_Iterators__Iterator_next((lang_Iterators__Iterator*) __iter221, key);
                uint8_t* __genCall224 = lang_Memory__gc_malloc(this->V->size);
                ((void (*)(uint8_t*, void*)) f.thunk)((uint8_t*) (structs_HashMap__HashMap_get(this, __genCall224, (uint8_t*) key), __genCall224), f.context);
            }
        }
    }
}

lang_Numbers__SizeT structs_HashMap__HashMap___getsize___impl(structs_HashMap__HashMap* this) {
    return this->_size;
}

void structs_HashMap__HashMap___defaults___impl(structs_HashMap__HashMap* this) {
    lang_Iterators__BackIterable___defaults___impl((lang_Iterators__BackIterable*) this);
}

lang_types__Bool structs_HashMap__HashMap_getEntry(structs_HashMap__HashMap* this, uint8_t* key, structs_HashMap__HashEntry* result) {
    return (lang_types__Bool) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->getEntry((structs_HashMap__HashMap*)this, key, result);
}

lang_types__Bool structs_HashMap__HashMap_getEntryForHash(structs_HashMap__HashMap* this, uint8_t* key, lang_Numbers__SizeT hash, structs_HashMap__HashEntry* result) {
    return (lang_types__Bool) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->getEntryForHash((structs_HashMap__HashMap*)this, key, hash, result);
}

structs_HashMap__HashMap* structs_HashMap__HashMap_clone(structs_HashMap__HashMap* this) {
    return (structs_HashMap__HashMap*) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->clone((structs_HashMap__HashMap*)this);
}

structs_HashMap__HashMap* structs_HashMap__HashMap_merge(structs_HashMap__HashMap* this, structs_HashMap__HashMap* other) {
    return (structs_HashMap__HashMap*) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->merge((structs_HashMap__HashMap*)this, other);
}

structs_HashMap__HashMap* structs_HashMap__HashMap_merge__bang(structs_HashMap__HashMap* this, structs_HashMap__HashMap* other) {
    return (structs_HashMap__HashMap*) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->merge__bang((structs_HashMap__HashMap*)this, other);
}

lang_types__Bool structs_HashMap__HashMap_put(structs_HashMap__HashMap* this, uint8_t* key, uint8_t* value) {
    return (lang_types__Bool) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->put((structs_HashMap__HashMap*)this, key, value);
}

lang_types__Bool structs_HashMap__HashMap_add(structs_HashMap__HashMap* this, uint8_t* key, uint8_t* value) {
    return (lang_types__Bool) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->add((structs_HashMap__HashMap*)this, key, value);
}

void structs_HashMap__HashMap_get(structs_HashMap__HashMap* this, uint8_t* __genericReturn83, uint8_t* key) {
    ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->get((structs_HashMap__HashMap*)this, __genericReturn83, key);
}

lang_types__Bool structs_HashMap__HashMap_empty__quest(structs_HashMap__HashMap* this) {
    return (lang_types__Bool) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->empty__quest((structs_HashMap__HashMap*)this);
}

lang_types__Bool structs_HashMap__HashMap_contains__quest(structs_HashMap__HashMap* this, uint8_t* key) {
    return (lang_types__Bool) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->contains__quest((structs_HashMap__HashMap*)this, key);
}

lang_types__Bool structs_HashMap__HashMap_remove(structs_HashMap__HashMap* this, uint8_t* key) {
    return (lang_types__Bool) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->remove((structs_HashMap__HashMap*)this, key);
}

lang_types__Bool structs_HashMap__HashMap_resize(structs_HashMap__HashMap* this, lang_Numbers__SizeT _capacity) {
    return (lang_types__Bool) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->resize((structs_HashMap__HashMap*)this, _capacity);
}

lang_Iterators__BackIterator* structs_HashMap__HashMap_iterator(structs_HashMap__HashMap* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

lang_Iterators__BackIterator* structs_HashMap__HashMap_backIterator(structs_HashMap__HashMap* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__BackIterableClass *)((lang_types__Object *)this)->class)->backIterator((lang_Iterators__BackIterable*)this);
}

void structs_HashMap__HashMap_clear(structs_HashMap__HashMap* this) {
    ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->clear((structs_HashMap__HashMap*)this);
}

lang_Numbers__SSizeT structs_HashMap__HashMap_getSize(structs_HashMap__HashMap* this) {
    return (lang_Numbers__SSizeT) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->getSize((structs_HashMap__HashMap*)this);
}

structs_ArrayList__ArrayList* structs_HashMap__HashMap_getKeys(structs_HashMap__HashMap* this) {
    return (structs_ArrayList__ArrayList*) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->getKeys((structs_HashMap__HashMap*)this);
}

void structs_HashMap__HashMap_each_withKeys(structs_HashMap__HashMap* this, lang_types__Closure f) {
    ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->each_withKeys((structs_HashMap__HashMap*)this, f);
}

void structs_HashMap__HashMap_each(structs_HashMap__HashMap* this, lang_types__Closure f) {
    ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->each((lang_Iterators__Iterable*)this, f);
}

lang_Numbers__SizeT structs_HashMap__HashMap___getsize__(structs_HashMap__HashMap* this) {
    return (lang_Numbers__SizeT) ((structs_HashMap__HashMapClass *)((lang_types__Object *)this)->class)->__getsize__((structs_HashMap__HashMap*)this);
}

void structs_HashMap__HashMap___defaults__(structs_HashMap__HashMap* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
structs_HashMap__HashMap* structs_HashMap__HashMap_new(lang_types__Class* K, lang_types__Class* V) {
    
    structs_HashMap__HashMap* this = ((structs_HashMap__HashMap*) (lang_types__Class_alloc__class((lang_types__Class*) structs_HashMap__HashMap_class())));
    this->K = K;
    this->V = V;
    structs_HashMap__HashMap___defaults__(this);
    structs_HashMap__HashMap_init((structs_HashMap__HashMap*) this);
    return this;
}
structs_HashMap__HashMap* structs_HashMap__HashMap_new_withCapacity(lang_types__Class* K, lang_types__Class* V, lang_Numbers__SizeT capaArg) {
    
    structs_HashMap__HashMap* this = ((structs_HashMap__HashMap*) (lang_types__Class_alloc__class((lang_types__Class*) structs_HashMap__HashMap_class())));
    this->K = K;
    this->V = V;
    structs_HashMap__HashMap___defaults__(this);
    structs_HashMap__HashMap_init_withCapacity((structs_HashMap__HashMap*) this, capaArg);
    return this;
}
void structs_HashMap__HashMap___load__() {
    lang_Iterators__BackIterable___load__();
}

structs_HashMap__HashMapClass *structs_HashMap__HashMap_class(){
    static _Bool __done__ = false;
    static structs_HashMap__HashMapClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(structs_HashMap__HashMap),
                            .size = sizeof(void*)
                        },
                        .__defaults__ = (void*) structs_HashMap__HashMap___defaults___impl,
                        .__destroy__ = (void*) lang_types__Object___destroy___impl,
                        .__load__ = (void*) structs_HashMap__HashMap___load__,
                    },
                },
                .iterator = (void*) structs_HashMap__HashMap_iterator_impl,
                .toList = (void*) lang_Iterators__Iterable_toList_impl,
                .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
                .each = (void*) structs_HashMap__HashMap_each_impl,
                .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
                .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
            },
            .backIterator = (void*) structs_HashMap__HashMap_backIterator_impl,
            .forward = (void*) lang_Iterators__BackIterable_forward_impl,
            .backward = (void*) lang_Iterators__BackIterable_backward_impl,
        },
        .new = (void*) structs_HashMap__HashMap_new,
        .new_withCapacity = (void*) structs_HashMap__HashMap_new_withCapacity,
        .getEntry = (void*) structs_HashMap__HashMap_getEntry_impl,
        .getEntryForHash = (void*) structs_HashMap__HashMap_getEntryForHash_impl,
        .clone = (void*) structs_HashMap__HashMap_clone_impl,
        .merge = (void*) structs_HashMap__HashMap_merge_impl,
        .merge__bang = (void*) structs_HashMap__HashMap_merge__bang_impl,
        .put = (void*) structs_HashMap__HashMap_put_impl,
        .add = (void*) structs_HashMap__HashMap_add_impl,
        .get = (void*) structs_HashMap__HashMap_get_impl,
        .empty__quest = (void*) structs_HashMap__HashMap_empty__quest_impl,
        .contains__quest = (void*) structs_HashMap__HashMap_contains__quest_impl,
        .remove = (void*) structs_HashMap__HashMap_remove_impl,
        .resize = (void*) structs_HashMap__HashMap_resize_impl,
        .clear = (void*) structs_HashMap__HashMap_clear_impl,
        .getSize = (void*) structs_HashMap__HashMap_getSize_impl,
        .getKeys = (void*) structs_HashMap__HashMap_getKeys_impl,
        .each_withKeys = (void*) structs_HashMap__HashMap_each_withKeys_impl,
        .__getsize__ = (void*) structs_HashMap__HashMap___getsize___impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__BackIterable_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("HashMap", 7);
    }
    return &class;
}

void structs_HashMap__HashMapValueIterator_init_withMap(structs_HashMap__HashMapValueIterator* this, structs_HashMap__HashMap* map) {
    this->map = map;
}

lang_types__Bool structs_HashMap__HashMapValueIterator_hasNext__quest_impl(structs_HashMap__HashMapValueIterator* this) {
    return this->index < structs_ArrayList__ArrayList___getsize__(this->map->keys);
}

void structs_HashMap__HashMapValueIterator_next_impl(structs_HashMap__HashMapValueIterator* this, uint8_t* __genericReturn85) {
    uint8_t* key = lang_Memory__gc_malloc(this->K->size);
    structs_ArrayList__ArrayList_get(this->map->keys, key, this->index);
    this->index += 1;
    structs_HashMap__HashMap_get(this->map, __genericReturn85, (uint8_t*) key);
    return;
}

lang_types__Bool structs_HashMap__HashMapValueIterator_hasPrev__quest_impl(structs_HashMap__HashMapValueIterator* this) {
    return this->index > 0;
}

void structs_HashMap__HashMapValueIterator_prev_impl(structs_HashMap__HashMapValueIterator* this, uint8_t* __genericReturn86) {
    this->index -= 1;
    uint8_t* key = lang_Memory__gc_malloc(this->K->size);
    structs_ArrayList__ArrayList_get(this->map->keys, key, this->index);
    structs_HashMap__HashMap_get(this->map, __genericReturn86, (uint8_t*) key);
    return;
}

lang_types__Bool structs_HashMap__HashMapValueIterator_remove_impl(structs_HashMap__HashMapValueIterator* this) {
    uint8_t* __genCall87 = lang_Memory__gc_malloc(this->K->size);
    lang_types__Bool result = structs_HashMap__HashMap_remove(this->map, (uint8_t*) (structs_ArrayList__ArrayList_get(this->map->keys, __genCall87, this->index), __genCall87));
    if (this->index <= structs_ArrayList__ArrayList___getsize__(this->map->keys)) {
        this->index -= 1;
    }
    return result;
}

void structs_HashMap__HashMapValueIterator___defaults___impl(structs_HashMap__HashMapValueIterator* this) {
    lang_Iterators__BackIterator___defaults___impl((lang_Iterators__BackIterator*) this);
    this->index = 0;
}

lang_types__Bool structs_HashMap__HashMapValueIterator_hasNext__quest(structs_HashMap__HashMapValueIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->hasNext__quest((lang_Iterators__Iterator*)this);
}

void structs_HashMap__HashMapValueIterator_next(structs_HashMap__HashMapValueIterator* this, uint8_t* __genericReturn85) {
    ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->next((lang_Iterators__Iterator*)this, __genericReturn85);
}

lang_types__Bool structs_HashMap__HashMapValueIterator_hasPrev__quest(structs_HashMap__HashMapValueIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->hasPrev__quest((lang_Iterators__BackIterator*)this);
}

void structs_HashMap__HashMapValueIterator_prev(structs_HashMap__HashMapValueIterator* this, uint8_t* __genericReturn86) {
    ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->prev((lang_Iterators__BackIterator*)this, __genericReturn86);
}

lang_types__Bool structs_HashMap__HashMapValueIterator_remove(structs_HashMap__HashMapValueIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->remove((lang_Iterators__Iterator*)this);
}

void structs_HashMap__HashMapValueIterator___defaults__(structs_HashMap__HashMapValueIterator* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
structs_HashMap__HashMapValueIterator* structs_HashMap__HashMapValueIterator_new_withMap(lang_types__Class* K, lang_types__Class* T, structs_HashMap__HashMap* map) {
    
    structs_HashMap__HashMapValueIterator* this = ((structs_HashMap__HashMapValueIterator*) (lang_types__Class_alloc__class((lang_types__Class*) structs_HashMap__HashMapValueIterator_class())));
    this->K = K;
    ((lang_Iterators__Iterable*)this)->T = T;
    structs_HashMap__HashMapValueIterator___defaults__(this);
    structs_HashMap__HashMapValueIterator_init_withMap((structs_HashMap__HashMapValueIterator*) this, map);
    return this;
}
void structs_HashMap__HashMapValueIterator___load__() {
    lang_Iterators__BackIterator___load__();
}

structs_HashMap__HashMapValueIteratorClass *structs_HashMap__HashMapValueIterator_class(){
    static _Bool __done__ = false;
    static structs_HashMap__HashMapValueIteratorClass class = 
    {
        {
            {
                {
                    {
                        {
                            {
                                .instanceSize = sizeof(structs_HashMap__HashMapValueIterator),
                                .size = sizeof(void*)
                            },
                            .__defaults__ = (void*) structs_HashMap__HashMapValueIterator___defaults___impl,
                            .__destroy__ = (void*) lang_types__Object___destroy___impl,
                            .__load__ = (void*) structs_HashMap__HashMapValueIterator___load__,
                        },
                    },
                    .iterator = (void*) lang_Iterators__BackIterator_iterator_impl,
                    .toList = (void*) lang_Iterators__Iterable_toList_impl,
                    .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
                    .each = (void*) lang_Iterators__Iterable_each_impl,
                    .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
                    .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
                },
                .hasNext__quest = (void*) structs_HashMap__HashMapValueIterator_hasNext__quest_impl,
                .next = (void*) structs_HashMap__HashMapValueIterator_next_impl,
                .remove = (void*) structs_HashMap__HashMapValueIterator_remove_impl,
            },
            .hasPrev__quest = (void*) structs_HashMap__HashMapValueIterator_hasPrev__quest_impl,
            .prev = (void*) structs_HashMap__HashMapValueIterator_prev_impl,
            .reversed = (void*) lang_Iterators__BackIterator_reversed_impl,
        },
        .new_withMap = (void*) structs_HashMap__HashMapValueIterator_new_withMap,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__BackIterator_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("HashMapValueIterator", 20);
    }
    return &class;
}
void __structs_HashMap_closure271_ctx___load__() {
    lang_types__Class___load__();
}

__structs_HashMap_closure271_ctxClass *__structs_HashMap_closure271_ctx_class(){
    static _Bool __done__ = false;
    static __structs_HashMap_closure271_ctxClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(__structs_HashMap_closure271_ctx),
                    .size = sizeof(__structs_HashMap_closure271_ctx)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) __structs_HashMap_closure271_ctx___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("__structs_HashMap_closure271_ctx", 32);
    }
    return &class;
}
void __structs_HashMap_closure274_ctx___load__() {
    lang_types__Class___load__();
}

__structs_HashMap_closure274_ctxClass *__structs_HashMap_closure274_ctx_class(){
    static _Bool __done__ = false;
    static __structs_HashMap_closure274_ctxClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(__structs_HashMap_closure274_ctx),
                    .size = sizeof(__structs_HashMap_closure274_ctx)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) __structs_HashMap_closure274_ctx___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("__structs_HashMap_closure274_ctx", 32);
    }
    return &class;
}
void structs_HashMap_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Exception_load();
        lang_BufferIterator_load();
        lang_System_load();
        lang_Character_load();
        lang_VarArgs_load();
        lang_types_load();
        lang_Iterators_load();
        lang_Memory_load();
        lang_String_load();
        lang_Buffer_load();
        lang_Numbers_load();
        lang_Abstractions_load();
        lang_Format_load();
        lang_IO_load();
        structs_ArrayList_load();
        structs_HashMap__HashEntry___load__();
        structs_HashMap__HashMap___load__();
        structs_HashMap__HashMapValueIterator___load__();
        __structs_HashMap_closure271_ctx___load__();
        __structs_HashMap_closure274_ctx___load__();
        lang_Memory__memset(&(structs_HashMap__nullHashEntry), 0, ((lang_types__Class*)structs_HashMap__HashEntry_class())->size);
    }
}


lang_types__Bool structs_HashMap__stringEquals(lang_types__Class* K, uint8_t* k1, uint8_t* k2) {
    lang_Exception__assert(K == (lang_types__Class*) lang_String__String_class());
    return lang_String__String_equals__quest((lang_String__String*) (* (lang_String__String**)k1), (* (lang_String__String**)k2));
}

lang_types__Bool structs_HashMap__cstringEquals(lang_types__Class* K, uint8_t* k1, uint8_t* k2) {
    return lang_Character____OP_EQ_CString_CString__Bool((* (lang_Character__CString*)k1), (* (lang_Character__CString*)k2));
}

lang_types__Bool structs_HashMap__pointerEquals(lang_types__Class* K, uint8_t* k1, uint8_t* k2) {
    return (* (lang_types__Pointer*)k1) == (* (lang_types__Pointer*)k2);
}

lang_types__Bool structs_HashMap__intEquals(lang_types__Class* K, uint8_t* k1, uint8_t* k2) {
    return (* (lang_Numbers__Int*)k1) == (* (lang_Numbers__Int*)k2);
}

lang_types__Bool structs_HashMap__charEquals(lang_types__Class* K, uint8_t* k1, uint8_t* k2) {
    return (* (lang_Character__Char*)k1) == (* (lang_Character__Char*)k2);
}

lang_types__Bool structs_HashMap__genericEquals(lang_types__Class* K, uint8_t* k1, uint8_t* k2) {
    return lang_Memory__memcmp(k1, k2, K->size) == (lang_Numbers__Int) 0;
}

lang_Numbers__SizeT structs_HashMap__intHash(lang_types__Class* K, uint8_t* key) {
    lang_Numbers__SizeT result = (* (lang_Numbers__Int*)key);
    return result;
}

lang_Numbers__SizeT structs_HashMap__pointerHash(lang_types__Class* K, uint8_t* key) {
    return ((lang_Numbers__SizeT) (((* (lang_types__Pointer*)key))));
}

lang_Numbers__SizeT structs_HashMap__charHash(lang_types__Class* K, uint8_t* key) {
    return ((lang_Numbers__SizeT) (((* (lang_Character__Char*)key))));
}

lang_Numbers__SizeT structs_HashMap__murmurHash(lang_types__Class* K, uint8_t* keyTagazok) {
    lang_Numbers__SizeT seed = 1;
    lang_Numbers__SizeT len = K->size;
    lang_Numbers__SizeT m = 1540483477;
    lang_Numbers__SSizeT r = 24;
    lang_Numbers__SizeT l = len;
    lang_Numbers__SizeT h = seed ^ len;
    lang_Numbers__Octet* data = ((lang_Numbers__Octet*) ((keyTagazok)));
    while (true) {
        lang_Numbers__SizeT k = (*((((lang_Numbers__SizeT*) (data)))));
        k *= m;
        k ^= k >> r;
        k *= m;
        h *= m;
        h ^= k;
        data += 4;
        if (len < (lang_Numbers__SizeT) 4) {
            break;
        }
        len -= 4;
    }
    lang_Numbers__SSizeT t = 0;
    if (len == (lang_Numbers__SizeT) 3) {
        h ^= data[2] << 16;
    }
    if (len == (lang_Numbers__SizeT) 2) {
        h ^= data[1] << 8;
    }
    if (len == (lang_Numbers__SizeT) 1) {
        h ^= data[0];
    }
    t *= m;
    t ^= t >> r;
    t *= m;
    h *= m;
    h ^= t;
    l *= m;
    l ^= l >> r;
    l *= m;
    h *= m;
    h ^= l;
    h ^= h >> 13;
    h *= m;
    h ^= h >> 15;
    return h;
}

lang_Numbers__SizeT structs_HashMap__ac_X31_hash(lang_types__Class* K, uint8_t* key) {
    lang_Exception__assert(key != (uint8_t*) NULL);
    lang_Character__Char* s = (K == (lang_types__Class*) lang_String__String_class()) ? ((lang_Character__Char*) (lang_String__String_toCString(((* (lang_String__String**)key))))) : (* (lang_Character__Char**)key);
    lang_Numbers__SizeT h = (*(s));
    if (h) {
        s += 1;
        while ((*(s))) {
            h = (h << 5) - h + (*(s));
            s += 1;
        }
    }
    return h;
}

lang_types__Closure structs_HashMap__getStandardEquals(lang_types__Class* T) {
    if (T == (lang_types__Class*) lang_String__String_class()) {
        return (lang_types__Closure) { 
            structs_HashMap__stringEquals, 
            NULL
        };
    }
    else if (T == (lang_types__Class*) lang_Character__CString_class()) {
        return (lang_types__Closure) { 
            structs_HashMap__cstringEquals, 
            NULL
        };
    }
    else if (T->size == ((lang_types__Class*)lang_types__Pointer_class())->size) {
        return (lang_types__Closure) { 
            structs_HashMap__pointerEquals, 
            NULL
        };
    }
    else if (T->size == ((lang_types__Class*)lang_Numbers__UInt_class())->size) {
        return (lang_types__Closure) { 
            structs_HashMap__intEquals, 
            NULL
        };
    }
    else if (T->size == ((lang_types__Class*)lang_Character__Char_class())->size) {
        return (lang_types__Closure) { 
            structs_HashMap__charEquals, 
            NULL
        };
    }
    else {
        return (lang_types__Closure) { 
            structs_HashMap__genericEquals, 
            NULL
        };
    }
}

lang_types__Closure structs_HashMap__getStandardHashFunc(lang_types__Class* T) {
    if (T == (lang_types__Class*) lang_String__String_class() || T == (lang_types__Class*) lang_Character__CString_class()) {
        return (lang_types__Closure) { 
            structs_HashMap__ac_X31_hash, 
            NULL
        };
    }
    else if (T->size == ((lang_types__Class*)lang_types__Pointer_class())->size) {
        return (lang_types__Closure) { 
            structs_HashMap__pointerHash, 
            NULL
        };
    }
    else if (T->size == ((lang_types__Class*)lang_Numbers__UInt_class())->size) {
        return (lang_types__Closure) { 
            structs_HashMap__intHash, 
            NULL
        };
    }
    else if (T->size == ((lang_types__Class*)lang_Character__Char_class())->size) {
        return (lang_types__Closure) { 
            structs_HashMap__charHash, 
            NULL
        };
    }
    else {
        return (lang_types__Closure) { 
            structs_HashMap__murmurHash, 
            NULL
        };
    }
}

void structs_HashMap____structs_HashMap_closure271(structs_HashMap__HashMap* this, uint8_t* k, uint8_t* v) {
    ;
    ;
    structs_HashMap__HashMap_put(this, (uint8_t*) k, (uint8_t*) v);
}

void structs_HashMap____structs_HashMap_closure271_thunk(uint8_t* k, uint8_t* v, __structs_HashMap_closure271_ctx* __context__) {
    structs_HashMap____structs_HashMap_closure271((*__context__).this, (uint8_t*) k, (uint8_t*) v);
}

void structs_HashMap____structs_HashMap_closure274(structs_HashMap__HashMap* copy, uint8_t* k, uint8_t* v) {
    structs_HashMap__HashMap_put(copy, (uint8_t*) k, (uint8_t*) v);
}

void structs_HashMap____structs_HashMap_closure274_thunk(uint8_t* k, uint8_t* v, __structs_HashMap_closure274_ctx* __context__) {
    structs_HashMap____structs_HashMap_closure274((*__context__).copy, (uint8_t*) k, (uint8_t*) v);
}

void structs_HashMap____OP_IDX_HashMap_K__V(uint8_t* __genericReturn82, lang_types__Class* K, lang_types__Class* V, structs_HashMap__HashMap* map, uint8_t* key) {
    structs_HashMap__HashMap_get(map, __genericReturn82, (uint8_t*) key);
    return;
}

void structs_HashMap____OP_IDX_ASS_HashMap_K_V(lang_types__Class* K, lang_types__Class* V, structs_HashMap__HashMap* map, uint8_t* key, uint8_t* value) {
    structs_HashMap__HashMap_put(map, (uint8_t*) key, (uint8_t*) value);
}
