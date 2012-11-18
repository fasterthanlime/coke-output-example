/* lang/Iterators source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/Iterators.h>
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
#include <sdk/structs/List.h>
#include <sdk/structs/ArrayList.h>


void lang_Iterators__Iterable_init(lang_Iterators__Iterable* this) {
}

structs_ArrayList__ArrayList* lang_Iterators__Iterable_toList_impl(lang_Iterators__Iterable* this) {
    structs_ArrayList__ArrayList* result = structs_ArrayList__ArrayList_new((lang_types__Class*)this->T);
    
    {
        uint8_t* elem = lang_Memory__gc_malloc(this->T->size);
        
        {
            lang_Iterators__Iterator* __iter180 = lang_Iterators__Iterable_iterator(this);
            while (lang_Iterators__Iterator_hasNext__quest(__iter180)) {
                lang_Iterators__Iterator_next(__iter180, elem);
                structs_ArrayList__ArrayList_add(result, (uint8_t*) elem);
            }
        }
    }
    return result;
}

void lang_Iterators__Iterable_reduce_impl(lang_Iterators__Iterable* this, uint8_t* __genericReturn22, lang_types__Closure f) {
    lang_Iterators__Iterator* iter = lang_Iterators__Iterable_iterator(this);
    uint8_t* __genCall181 = lang_Memory__gc_malloc(this->T->size);
    uint8_t* __genCall182 = lang_Memory__gc_malloc(this->T->size);
    uint8_t* acc = lang_Memory__gc_malloc(this->T->size);
    ((void (*)(uint8_t*, uint8_t*, uint8_t*, void*)) f.thunk)(acc, (uint8_t*) (lang_Iterators__Iterator_next(iter, __genCall181), __genCall181), (uint8_t*) (lang_Iterators__Iterator_next(iter, __genCall182), __genCall182), f.context);
    while (lang_Iterators__Iterator_hasNext__quest(iter)) {
        uint8_t* __genCall183 = lang_Memory__gc_malloc(this->T->size);
        ((void (*)(uint8_t*, uint8_t*, uint8_t*, void*)) f.thunk)(acc, (uint8_t*) acc, (uint8_t*) (lang_Iterators__Iterator_next(iter, __genCall183), __genCall183), f.context);
    }
    if (__genericReturn22) {
        lang_Memory__memcpy(__genericReturn22, acc, this->T->size);
    }
    return;
}

void lang_Iterators__Iterable_each_impl(lang_Iterators__Iterable* this, lang_types__Closure f) {
    
    {
        uint8_t* elem = lang_Memory__gc_malloc(this->T->size);
        
        {
            lang_Iterators__Iterator* __iter184 = lang_Iterators__Iterable_iterator(this);
            while (lang_Iterators__Iterator_hasNext__quest(__iter184)) {
                lang_Iterators__Iterator_next(__iter184, elem);
                ((void (*)(uint8_t*, void*)) f.thunk)((uint8_t*) elem, f.context);
            }
        }
    }
}

void lang_Iterators__Iterable_eachUntil_impl(lang_Iterators__Iterable* this, lang_types__Closure f) {
    
    {
        uint8_t* elem = lang_Memory__gc_malloc(this->T->size);
        
        {
            lang_Iterators__Iterator* __iter185 = lang_Iterators__Iterable_iterator(this);
            while (lang_Iterators__Iterator_hasNext__quest(__iter185)) {
                lang_Iterators__Iterator_next(__iter185, elem);
                if (!((lang_types__Bool (*)(uint8_t*, void*)) f.thunk)((uint8_t*) elem, f.context)) {
                    break;
                }
            }
        }
    }
}

void lang_Iterators__Iterable_each_withIndex_impl(lang_Iterators__Iterable* this, lang_types__Closure f) {
    lang_Numbers__SSizeT index = 0;
    
    {
        uint8_t* elem = lang_Memory__gc_malloc(this->T->size);
        
        {
            lang_Iterators__Iterator* __iter186 = lang_Iterators__Iterable_iterator(this);
            while (lang_Iterators__Iterator_hasNext__quest(__iter186)) {
                lang_Iterators__Iterator_next(__iter186, elem);
                ((void (*)(uint8_t*, lang_Numbers__Int, void*)) f.thunk)((uint8_t*) elem, index, f.context);
                index += 1;
            }
        }
    }
}

void lang_Iterators__Iterable___defaults___impl(lang_Iterators__Iterable* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

lang_Iterators__Iterator* lang_Iterators__Iterable_iterator(lang_Iterators__Iterable* this) {
    return (lang_Iterators__Iterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

structs_ArrayList__ArrayList* lang_Iterators__Iterable_toList(lang_Iterators__Iterable* this) {
    return (structs_ArrayList__ArrayList*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->toList((lang_Iterators__Iterable*)this);
}

void lang_Iterators__Iterable_reduce(lang_Iterators__Iterable* this, uint8_t* __genericReturn22, lang_types__Closure f) {
    ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->reduce((lang_Iterators__Iterable*)this, __genericReturn22, f);
}

void lang_Iterators__Iterable_each(lang_Iterators__Iterable* this, lang_types__Closure f) {
    ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->each((lang_Iterators__Iterable*)this, f);
}

void lang_Iterators__Iterable_eachUntil(lang_Iterators__Iterable* this, lang_types__Closure f) {
    ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->eachUntil((lang_Iterators__Iterable*)this, f);
}

void lang_Iterators__Iterable_each_withIndex(lang_Iterators__Iterable* this, lang_types__Closure f) {
    ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->each_withIndex((lang_Iterators__Iterable*)this, f);
}

void lang_Iterators__Iterable___defaults__(lang_Iterators__Iterable* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
void lang_Iterators__Iterable___load__() {
    lang_types__Class___load__();
}

lang_Iterators__IterableClass *lang_Iterators__Iterable_class(){
    static _Bool __done__ = false;
    static lang_Iterators__IterableClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Iterators__Iterable),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) lang_Iterators__Iterable___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_Iterators__Iterable___load__,
            },
        },
        .iterator = (void*) lang_Iterators__Iterable_iterator,
        .toList = (void*) lang_Iterators__Iterable_toList_impl,
        .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
        .each = (void*) lang_Iterators__Iterable_each_impl,
        .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
        .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Iterable", 8);
    }
    return &class;
}

void lang_Iterators__BackIterable_init(lang_Iterators__BackIterable* this) {
    lang_Iterators__Iterable_init((lang_Iterators__Iterable*) this);
}

lang_Iterators__BackIterator* lang_Iterators__BackIterable_backIterator_impl(lang_Iterators__BackIterable* this) {
    lang_Iterators__BackIterator* iter = lang_Iterators__BackIterable_iterator(this);
    while (lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) iter)) {
        lang_Iterators__Iterator_next((lang_Iterators__Iterator*) iter, NULL);
    }
    return iter;
}

lang_Iterators__BackIterator* lang_Iterators__BackIterable_forward_impl(lang_Iterators__BackIterable* this) {
    return lang_Iterators__BackIterable_iterator(this);
}

lang_Iterators__BackIterator* lang_Iterators__BackIterable_backward_impl(lang_Iterators__BackIterable* this) {
    return ((lang_Iterators__BackIterator*) (lang_Iterators__BackIterator_reversed(lang_Iterators__BackIterable_backIterator(this))));
}

void lang_Iterators__BackIterable___defaults___impl(lang_Iterators__BackIterable* this) {
    lang_Iterators__Iterable___defaults___impl((lang_Iterators__Iterable*) this);
}

lang_Iterators__BackIterator* lang_Iterators__BackIterable_iterator(lang_Iterators__BackIterable* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

lang_Iterators__BackIterator* lang_Iterators__BackIterable_backIterator(lang_Iterators__BackIterable* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__BackIterableClass *)((lang_types__Object *)this)->class)->backIterator((lang_Iterators__BackIterable*)this);
}

lang_Iterators__BackIterator* lang_Iterators__BackIterable_forward(lang_Iterators__BackIterable* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__BackIterableClass *)((lang_types__Object *)this)->class)->forward((lang_Iterators__BackIterable*)this);
}

lang_Iterators__BackIterator* lang_Iterators__BackIterable_backward(lang_Iterators__BackIterable* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__BackIterableClass *)((lang_types__Object *)this)->class)->backward((lang_Iterators__BackIterable*)this);
}

void lang_Iterators__BackIterable___defaults__(lang_Iterators__BackIterable* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
void lang_Iterators__BackIterable___load__() {
    lang_Iterators__Iterable___load__();
}

lang_Iterators__BackIterableClass *lang_Iterators__BackIterable_class(){
    static _Bool __done__ = false;
    static lang_Iterators__BackIterableClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Iterators__BackIterable),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) lang_Iterators__BackIterable___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Iterators__BackIterable___load__,
                },
            },
            .toList = (void*) lang_Iterators__Iterable_toList_impl,
            .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
            .each = (void*) lang_Iterators__Iterable_each_impl,
            .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
            .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
        },
        .backIterator = (void*) lang_Iterators__BackIterable_backIterator_impl,
        .forward = (void*) lang_Iterators__BackIterable_forward_impl,
        .backward = (void*) lang_Iterators__BackIterable_backward_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__Iterable_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("BackIterable", 12);
    }
    return &class;
}

void lang_Iterators__Iterator_init(lang_Iterators__Iterator* this) {
    lang_Iterators__Iterable_init((lang_Iterators__Iterable*) this);
}

lang_Iterators__Iterator* lang_Iterators__Iterator_iterator_impl(lang_Iterators__Iterator* this) {
    return this;
}

void lang_Iterators__Iterator___defaults___impl(lang_Iterators__Iterator* this) {
    lang_Iterators__Iterable___defaults___impl((lang_Iterators__Iterable*) this);
}

lang_types__Bool lang_Iterators__Iterator_hasNext__quest(lang_Iterators__Iterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->hasNext__quest((lang_Iterators__Iterator*)this);
}

void lang_Iterators__Iterator_next(lang_Iterators__Iterator* this, uint8_t* __genericReturn28) {
    ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->next((lang_Iterators__Iterator*)this, __genericReturn28);
}

lang_types__Bool lang_Iterators__Iterator_remove(lang_Iterators__Iterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->remove((lang_Iterators__Iterator*)this);
}

lang_Iterators__Iterator* lang_Iterators__Iterator_iterator(lang_Iterators__Iterator* this) {
    return (lang_Iterators__Iterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

void lang_Iterators__Iterator___defaults__(lang_Iterators__Iterator* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
void lang_Iterators__Iterator___load__() {
    lang_Iterators__Iterable___load__();
}

lang_Iterators__IteratorClass *lang_Iterators__Iterator_class(){
    static _Bool __done__ = false;
    static lang_Iterators__IteratorClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Iterators__Iterator),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) lang_Iterators__Iterator___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Iterators__Iterator___load__,
                },
            },
            .iterator = (void*) lang_Iterators__Iterator_iterator_impl,
            .toList = (void*) lang_Iterators__Iterable_toList_impl,
            .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
            .each = (void*) lang_Iterators__Iterable_each_impl,
            .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
            .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
        },
        .hasNext__quest = (void*) lang_Iterators__Iterator_hasNext__quest,
        .next = (void*) lang_Iterators__Iterator_next,
        .remove = (void*) lang_Iterators__Iterator_remove,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__Iterable_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Iterator", 8);
    }
    return &class;
}

void lang_Iterators__BackIterator_init(lang_Iterators__BackIterator* this) {
    lang_Iterators__Iterator_init((lang_Iterators__Iterator*) this);
}

lang_Iterators__BackIterator* lang_Iterators__BackIterator_iterator_impl(lang_Iterators__BackIterator* this) {
    return this;
}

lang_Iterators__ReverseIterator* lang_Iterators__BackIterator_reversed_impl(lang_Iterators__BackIterator* this) {
    lang_Iterators__ReverseIterator* iter = lang_Iterators__ReverseIterator_new((lang_types__Class*)((lang_Iterators__Iterable*)this)->T);
    iter->iterator = this;
    return iter;
}

void lang_Iterators__BackIterator___defaults___impl(lang_Iterators__BackIterator* this) {
    lang_Iterators__Iterator___defaults___impl((lang_Iterators__Iterator*) this);
}

lang_types__Bool lang_Iterators__BackIterator_hasPrev__quest(lang_Iterators__BackIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->hasPrev__quest((lang_Iterators__BackIterator*)this);
}

void lang_Iterators__BackIterator_prev(lang_Iterators__BackIterator* this, uint8_t* __genericReturn29) {
    ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->prev((lang_Iterators__BackIterator*)this, __genericReturn29);
}

lang_Iterators__BackIterator* lang_Iterators__BackIterator_iterator(lang_Iterators__BackIterator* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

lang_Iterators__ReverseIterator* lang_Iterators__BackIterator_reversed(lang_Iterators__BackIterator* this) {
    return (lang_Iterators__ReverseIterator*) ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->reversed((lang_Iterators__BackIterator*)this);
}

void lang_Iterators__BackIterator___defaults__(lang_Iterators__BackIterator* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
void lang_Iterators__BackIterator___load__() {
    lang_Iterators__Iterator___load__();
}

lang_Iterators__BackIteratorClass *lang_Iterators__BackIterator_class(){
    static _Bool __done__ = false;
    static lang_Iterators__BackIteratorClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Iterators__BackIterator),
                            .size = sizeof(void*)
                        },
                        .__defaults__ = (void*) lang_Iterators__BackIterator___defaults___impl,
                        .__destroy__ = (void*) lang_types__Object___destroy___impl,
                        .__load__ = (void*) lang_Iterators__BackIterator___load__,
                    },
                },
                .iterator = (void*) lang_Iterators__BackIterator_iterator_impl,
                .toList = (void*) lang_Iterators__Iterable_toList_impl,
                .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
                .each = (void*) lang_Iterators__Iterable_each_impl,
                .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
                .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
            },
        },
        .hasPrev__quest = (void*) lang_Iterators__BackIterator_hasPrev__quest,
        .prev = (void*) lang_Iterators__BackIterator_prev,
        .reversed = (void*) lang_Iterators__BackIterator_reversed_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__Iterator_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("BackIterator", 12);
    }
    return &class;
}

void lang_Iterators__ReverseIterator_init(lang_Iterators__ReverseIterator* this) {
    lang_Iterators__BackIterator_init((lang_Iterators__BackIterator*) this);
}

lang_types__Bool lang_Iterators__ReverseIterator_hasNext__quest_impl(lang_Iterators__ReverseIterator* this) {
    return lang_Iterators__BackIterator_hasPrev__quest(this->iterator);
}

void lang_Iterators__ReverseIterator_next_impl(lang_Iterators__ReverseIterator* this, uint8_t* __genericReturn30) {
    lang_Iterators__BackIterator_prev(this->iterator, __genericReturn30);
    return;
}

lang_types__Bool lang_Iterators__ReverseIterator_hasPrev__quest_impl(lang_Iterators__ReverseIterator* this) {
    return lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) this->iterator);
}

void lang_Iterators__ReverseIterator_prev_impl(lang_Iterators__ReverseIterator* this, uint8_t* __genericReturn31) {
    lang_Iterators__Iterator_next((lang_Iterators__Iterator*) this->iterator, __genericReturn31);
    return;
}

lang_types__Bool lang_Iterators__ReverseIterator_remove_impl(lang_Iterators__ReverseIterator* this) {
    return lang_Iterators__Iterator_remove((lang_Iterators__Iterator*) this->iterator);
}

lang_Iterators__BackIterator* lang_Iterators__ReverseIterator_reversed_impl(lang_Iterators__ReverseIterator* this) {
    return this->iterator;
}

lang_Iterators__ReverseIterator* lang_Iterators__ReverseIterator_iterator_impl(lang_Iterators__ReverseIterator* this) {
    return this;
}

void lang_Iterators__ReverseIterator___defaults___impl(lang_Iterators__ReverseIterator* this) {
    lang_Iterators__BackIterator___defaults___impl((lang_Iterators__BackIterator*) this);
    this->iterator = NULL;
}

lang_types__Bool lang_Iterators__ReverseIterator_hasNext__quest(lang_Iterators__ReverseIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->hasNext__quest((lang_Iterators__Iterator*)this);
}

void lang_Iterators__ReverseIterator_next(lang_Iterators__ReverseIterator* this, uint8_t* __genericReturn30) {
    ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->next((lang_Iterators__Iterator*)this, __genericReturn30);
}

lang_types__Bool lang_Iterators__ReverseIterator_hasPrev__quest(lang_Iterators__ReverseIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->hasPrev__quest((lang_Iterators__BackIterator*)this);
}

void lang_Iterators__ReverseIterator_prev(lang_Iterators__ReverseIterator* this, uint8_t* __genericReturn31) {
    ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->prev((lang_Iterators__BackIterator*)this, __genericReturn31);
}

lang_types__Bool lang_Iterators__ReverseIterator_remove(lang_Iterators__ReverseIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->remove((lang_Iterators__Iterator*)this);
}

lang_Iterators__BackIterator* lang_Iterators__ReverseIterator_reversed(lang_Iterators__ReverseIterator* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->reversed((lang_Iterators__BackIterator*)this);
}

lang_Iterators__ReverseIterator* lang_Iterators__ReverseIterator_iterator(lang_Iterators__ReverseIterator* this) {
    return (lang_Iterators__ReverseIterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

void lang_Iterators__ReverseIterator___defaults__(lang_Iterators__ReverseIterator* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_Iterators__ReverseIterator* lang_Iterators__ReverseIterator_new(lang_types__Class* T) {
    
    lang_Iterators__ReverseIterator* this = ((lang_Iterators__ReverseIterator*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Iterators__ReverseIterator_class())));
    ((lang_Iterators__Iterable*)this)->T = T;
    lang_Iterators__ReverseIterator___defaults__(this);
    lang_Iterators__ReverseIterator_init((lang_Iterators__ReverseIterator*) this);
    return this;
}
void lang_Iterators__ReverseIterator___load__() {
    lang_Iterators__BackIterator___load__();
}

lang_Iterators__ReverseIteratorClass *lang_Iterators__ReverseIterator_class(){
    static _Bool __done__ = false;
    static lang_Iterators__ReverseIteratorClass class = 
    {
        {
            {
                {
                    {
                        {
                            {
                                .instanceSize = sizeof(lang_Iterators__ReverseIterator),
                                .size = sizeof(void*)
                            },
                            .__defaults__ = (void*) lang_Iterators__ReverseIterator___defaults___impl,
                            .__destroy__ = (void*) lang_types__Object___destroy___impl,
                            .__load__ = (void*) lang_Iterators__ReverseIterator___load__,
                        },
                    },
                    .iterator = (void*) lang_Iterators__ReverseIterator_iterator_impl,
                    .toList = (void*) lang_Iterators__Iterable_toList_impl,
                    .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
                    .each = (void*) lang_Iterators__Iterable_each_impl,
                    .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
                    .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
                },
                .hasNext__quest = (void*) lang_Iterators__ReverseIterator_hasNext__quest_impl,
                .next = (void*) lang_Iterators__ReverseIterator_next_impl,
                .remove = (void*) lang_Iterators__ReverseIterator_remove_impl,
            },
            .hasPrev__quest = (void*) lang_Iterators__ReverseIterator_hasPrev__quest_impl,
            .prev = (void*) lang_Iterators__ReverseIterator_prev_impl,
            .reversed = (void*) lang_Iterators__ReverseIterator_reversed_impl,
        },
        .new = (void*) lang_Iterators__ReverseIterator_new,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__BackIterator_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("ReverseIterator", 15);
    }
    return &class;
}
void lang_Iterators_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Exception_load();
        lang_BufferIterator_load();
        lang_System_load();
        lang_Character_load();
        lang_VarArgs_load();
        lang_types_load();
        lang_Memory_load();
        lang_String_load();
        lang_Buffer_load();
        lang_Numbers_load();
        lang_Abstractions_load();
        lang_Format_load();
        lang_IO_load();
        structs_List_load();
        structs_ArrayList_load();
        lang_Iterators__Iterable___load__();
        lang_Iterators__BackIterable___load__();
        lang_Iterators__Iterator___load__();
        lang_Iterators__BackIterator___load__();
        lang_Iterators__ReverseIterator___load__();
    }
}

