/* lang/BufferIterator source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/BufferIterator.h>
#include <sdk/lang/Exception.h>
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


void lang_BufferIterator__BufferIterator_init_withStr(lang_BufferIterator__BufferIterator* this, lang_Buffer__Buffer* str) {
    this->str = str;
}

lang_types__Bool lang_BufferIterator__BufferIterator_hasNext__quest_impl(lang_BufferIterator__BufferIterator* this) {
    return this->i < (lang_Numbers__SSizeT) this->str->size;
}

void lang_BufferIterator__BufferIterator_next_impl(lang_BufferIterator__BufferIterator* this, uint8_t* __genericReturn11) {
    lang_Character__Char c = (*((this->str->data + this->i)));
    this->i += 1;
    if (__genericReturn11) {
        lang_Memory__memcpy(__genericReturn11, &(c), ((lang_types__Class*)lang_Character__Char_class())->size);
    }
    return;
}

lang_types__Bool lang_BufferIterator__BufferIterator_hasPrev__quest_impl(lang_BufferIterator__BufferIterator* this) {
    return this->i > 0;
}

void lang_BufferIterator__BufferIterator_prev_impl(lang_BufferIterator__BufferIterator* this, uint8_t* __genericReturn12) {
    this->i -= 1;
    lang_Character__Char __returnVal175 = (*((this->str->data + this->i)));
    if (__genericReturn12) {
        lang_Memory__memcpy(__genericReturn12, &(__returnVal175), ((lang_types__Class*)lang_Character__Char_class())->size);
    }
    return;
}

lang_types__Bool lang_BufferIterator__BufferIterator_remove_impl(lang_BufferIterator__BufferIterator* this) {
    return false;
}

void lang_BufferIterator__BufferIterator___defaults___impl(lang_BufferIterator__BufferIterator* this) {
    lang_Iterators__BackIterator___defaults___impl((lang_Iterators__BackIterator*) this);
    this->i = 0;
}

lang_types__Bool lang_BufferIterator__BufferIterator_hasNext__quest(lang_BufferIterator__BufferIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->hasNext__quest((lang_Iterators__Iterator*)this);
}

void lang_BufferIterator__BufferIterator_next(lang_BufferIterator__BufferIterator* this, uint8_t* __genericReturn11) {
    ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->next((lang_Iterators__Iterator*)this, __genericReturn11);
}

lang_types__Bool lang_BufferIterator__BufferIterator_hasPrev__quest(lang_BufferIterator__BufferIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->hasPrev__quest((lang_Iterators__BackIterator*)this);
}

void lang_BufferIterator__BufferIterator_prev(lang_BufferIterator__BufferIterator* this, uint8_t* __genericReturn12) {
    ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->prev((lang_Iterators__BackIterator*)this, __genericReturn12);
}

lang_types__Bool lang_BufferIterator__BufferIterator_remove(lang_BufferIterator__BufferIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->remove((lang_Iterators__Iterator*)this);
}

void lang_BufferIterator__BufferIterator___defaults__(lang_BufferIterator__BufferIterator* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_BufferIterator__BufferIterator* lang_BufferIterator__BufferIterator_new_withStr(lang_types__Class* T, lang_Buffer__Buffer* str) {
    
    lang_BufferIterator__BufferIterator* this = ((lang_BufferIterator__BufferIterator*) (lang_types__Class_alloc__class((lang_types__Class*) lang_BufferIterator__BufferIterator_class())));
    ((lang_Iterators__Iterable*)this)->T = T;
    lang_BufferIterator__BufferIterator___defaults__(this);
    lang_BufferIterator__BufferIterator_init_withStr((lang_BufferIterator__BufferIterator*) this, str);
    return this;
}
void lang_BufferIterator__BufferIterator___load__() {
    lang_Iterators__BackIterator___load__();
}

lang_BufferIterator__BufferIteratorClass *lang_BufferIterator__BufferIterator_class(){
    static _Bool __done__ = false;
    static lang_BufferIterator__BufferIteratorClass class = 
    {
        {
            {
                {
                    {
                        {
                            {
                                .instanceSize = sizeof(lang_BufferIterator__BufferIterator),
                                .size = sizeof(void*)
                            },
                            .__defaults__ = (void*) lang_BufferIterator__BufferIterator___defaults___impl,
                            .__destroy__ = (void*) lang_types__Object___destroy___impl,
                            .__load__ = (void*) lang_BufferIterator__BufferIterator___load__,
                        },
                    },
                    .iterator = (void*) lang_Iterators__BackIterator_iterator_impl,
                    .toList = (void*) lang_Iterators__Iterable_toList_impl,
                    .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
                    .each = (void*) lang_Iterators__Iterable_each_impl,
                    .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
                    .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
                },
                .hasNext__quest = (void*) lang_BufferIterator__BufferIterator_hasNext__quest_impl,
                .next = (void*) lang_BufferIterator__BufferIterator_next_impl,
                .remove = (void*) lang_BufferIterator__BufferIterator_remove_impl,
            },
            .hasPrev__quest = (void*) lang_BufferIterator__BufferIterator_hasPrev__quest_impl,
            .prev = (void*) lang_BufferIterator__BufferIterator_prev_impl,
            .reversed = (void*) lang_Iterators__BackIterator_reversed_impl,
        },
        .new_withStr = (void*) lang_BufferIterator__BufferIterator_new_withStr,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__BackIterator_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("BufferIterator", 14);
    }
    return &class;
}
void lang_BufferIterator_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Exception_load();
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
        lang_BufferIterator__BufferIterator___load__();
    }
}

