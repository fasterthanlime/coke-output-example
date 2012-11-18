/* structs/Stack source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/structs/Stack.h>
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

static lang_String__String* __strLit101;
static lang_String__String* __strLit100;
static lang_String__String* __strLit98;
static lang_String__String* __strLit96;

void structs_Stack__Stack_init(structs_Stack__Stack* this) {
    this->data = structs_ArrayList__ArrayList_new((lang_types__Class*)((lang_Iterators__Iterable*)this)->T);
}

void structs_Stack__Stack_push_impl(structs_Stack__Stack* this, uint8_t* element) {
    structs_ArrayList__ArrayList_add(this->data, (uint8_t*) element);
}

void structs_Stack__Stack_pop_impl(structs_Stack__Stack* this, uint8_t* __genericReturn95) {
    if (structs_Stack__Stack_empty__quest(this)) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (structs_Stack__Stack_class()), __strLit96));
    }
    structs_ArrayList__ArrayList_removeAt(this->data, __genericReturn95, structs_Stack__Stack_lastIndex(this));
    return;
}

void structs_Stack__Stack_peek_impl(structs_Stack__Stack* this, uint8_t* __genericReturn97) {
    if (structs_Stack__Stack_empty__quest(this)) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (structs_Stack__Stack_class()), __strLit98));
    }
    structs_List__List_last((structs_List__List*) this->data, __genericReturn97);
    return;
}

void structs_Stack__Stack_peek_index_impl(structs_Stack__Stack* this, uint8_t* __genericReturn99, lang_Numbers__SSizeT index) {
    lang_Numbers__SSizeT mysize = structs_ArrayList__ArrayList___getsize__(this->data);
    if (index < 1) {
        struct { 
            lang_types__Pointer __f1;
            lang_Numbers__SSizeT __f2;
        } ____va_args231 = { 
            lang_Numbers__SSizeT_class(), 
            index
        };
        lang_VarArgs__VarArgs ____va232 = (lang_VarArgs__VarArgs) { 
            (void*) &(____va_args231), 
            NULL, 
            1
        };
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (structs_Stack__Stack_class()), lang_String__String_format((lang_String__String*) __strLit100, ____va232)));
    }
    if (index > mysize) {
        struct { 
            lang_types__Pointer __f1;
            lang_Numbers__SSizeT __f2;
            lang_types__Pointer __f3;
            lang_Numbers__SSizeT __f4;
        } ____va_args233 = { 
            lang_Numbers__SSizeT_class(), 
            index, 
            lang_Numbers__SSizeT_class(), 
            mysize
        };
        lang_VarArgs__VarArgs ____va234 = (lang_VarArgs__VarArgs) { 
            (void*) &(____va_args233), 
            NULL, 
            2
        };
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (structs_Stack__Stack_class()), lang_String__String_format((lang_String__String*) __strLit101, ____va234)));
    }
    structs_ArrayList__ArrayList_get(this->data, __genericReturn99, mysize - index);
    return;
}

lang_Numbers__SSizeT structs_Stack__Stack_indexOf_impl(structs_Stack__Stack* this, uint8_t* element) {
    return structs_ArrayList__ArrayList_indexOf(this->data, (uint8_t*) element);
}

lang_Numbers__SSizeT structs_Stack__Stack_getSize_impl(structs_Stack__Stack* this) {
    return structs_ArrayList__ArrayList___getsize__(this->data);
}

lang_types__Bool structs_Stack__Stack_empty__quest_impl(structs_Stack__Stack* this) {
    return structs_List__List_empty__quest((structs_List__List*) this->data);
}

lang_Numbers__Int structs_Stack__Stack_lastIndex_impl(structs_Stack__Stack* this) {
    return ((lang_Numbers__Int) (structs_Stack__Stack___getsize__(this) - 1));
}

void structs_Stack__Stack_clear_impl(structs_Stack__Stack* this) {
    structs_ArrayList__ArrayList_clear(this->data);
}

lang_Iterators__BackIterator* structs_Stack__Stack_iterator_impl(structs_Stack__Stack* this) {
    return structs_ArrayList__ArrayList_iterator(this->data);
}

lang_Iterators__BackIterator* structs_Stack__Stack_backIterator_impl(structs_Stack__Stack* this) {
    return structs_ArrayList__ArrayList_backIterator(this->data);
}

lang_Numbers__SSizeT structs_Stack__Stack___getsize___impl(structs_Stack__Stack* this) {
    return this->data != (structs_ArrayList__ArrayList*) NULL ? structs_ArrayList__ArrayList___getsize__(this->data) : 0;
}

void structs_Stack__Stack___defaults___impl(structs_Stack__Stack* this) {
    lang_Iterators__BackIterable___defaults___impl((lang_Iterators__BackIterable*) this);
}

void structs_Stack__Stack_push(structs_Stack__Stack* this, uint8_t* element) {
    ((structs_Stack__StackClass *)((lang_types__Object *)this)->class)->push((structs_Stack__Stack*)this, element);
}

void structs_Stack__Stack_pop(structs_Stack__Stack* this, uint8_t* __genericReturn95) {
    ((structs_Stack__StackClass *)((lang_types__Object *)this)->class)->pop((structs_Stack__Stack*)this, __genericReturn95);
}

void structs_Stack__Stack_peek(structs_Stack__Stack* this, uint8_t* __genericReturn97) {
    ((structs_Stack__StackClass *)((lang_types__Object *)this)->class)->peek((structs_Stack__Stack*)this, __genericReturn97);
}

void structs_Stack__Stack_peek_index(structs_Stack__Stack* this, uint8_t* __genericReturn99, lang_Numbers__SSizeT index) {
    ((structs_Stack__StackClass *)((lang_types__Object *)this)->class)->peek_index((structs_Stack__Stack*)this, __genericReturn99, index);
}

lang_Numbers__SSizeT structs_Stack__Stack_indexOf(structs_Stack__Stack* this, uint8_t* element) {
    return (lang_Numbers__SSizeT) ((structs_Stack__StackClass *)((lang_types__Object *)this)->class)->indexOf((structs_Stack__Stack*)this, element);
}

lang_Numbers__SSizeT structs_Stack__Stack_getSize(structs_Stack__Stack* this) {
    return (lang_Numbers__SSizeT) ((structs_Stack__StackClass *)((lang_types__Object *)this)->class)->getSize((structs_Stack__Stack*)this);
}

lang_types__Bool structs_Stack__Stack_empty__quest(structs_Stack__Stack* this) {
    return (lang_types__Bool) ((structs_Stack__StackClass *)((lang_types__Object *)this)->class)->empty__quest((structs_Stack__Stack*)this);
}

lang_Numbers__Int structs_Stack__Stack_lastIndex(structs_Stack__Stack* this) {
    return (lang_Numbers__Int) ((structs_Stack__StackClass *)((lang_types__Object *)this)->class)->lastIndex((structs_Stack__Stack*)this);
}

void structs_Stack__Stack_clear(structs_Stack__Stack* this) {
    ((structs_Stack__StackClass *)((lang_types__Object *)this)->class)->clear((structs_Stack__Stack*)this);
}

lang_Iterators__BackIterator* structs_Stack__Stack_iterator(structs_Stack__Stack* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

lang_Iterators__BackIterator* structs_Stack__Stack_backIterator(structs_Stack__Stack* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__BackIterableClass *)((lang_types__Object *)this)->class)->backIterator((lang_Iterators__BackIterable*)this);
}

lang_Numbers__SSizeT structs_Stack__Stack___getsize__(structs_Stack__Stack* this) {
    return (lang_Numbers__SSizeT) ((structs_Stack__StackClass *)((lang_types__Object *)this)->class)->__getsize__((structs_Stack__Stack*)this);
}

void structs_Stack__Stack___defaults__(structs_Stack__Stack* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
structs_Stack__Stack* structs_Stack__Stack_new(lang_types__Class* T) {
    
    structs_Stack__Stack* this = ((structs_Stack__Stack*) (lang_types__Class_alloc__class((lang_types__Class*) structs_Stack__Stack_class())));
    ((lang_Iterators__Iterable*)this)->T = T;
    structs_Stack__Stack___defaults__(this);
    structs_Stack__Stack_init((structs_Stack__Stack*) this);
    return this;
}
void structs_Stack__Stack___load__() {
    lang_Iterators__BackIterable___load__();
}

structs_Stack__StackClass *structs_Stack__Stack_class(){
    static _Bool __done__ = false;
    static structs_Stack__StackClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(structs_Stack__Stack),
                            .size = sizeof(void*)
                        },
                        .__defaults__ = (void*) structs_Stack__Stack___defaults___impl,
                        .__destroy__ = (void*) lang_types__Object___destroy___impl,
                        .__load__ = (void*) structs_Stack__Stack___load__,
                    },
                },
                .iterator = (void*) structs_Stack__Stack_iterator_impl,
                .toList = (void*) lang_Iterators__Iterable_toList_impl,
                .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
                .each = (void*) lang_Iterators__Iterable_each_impl,
                .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
                .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
            },
            .backIterator = (void*) structs_Stack__Stack_backIterator_impl,
            .forward = (void*) lang_Iterators__BackIterable_forward_impl,
            .backward = (void*) lang_Iterators__BackIterable_backward_impl,
        },
        .new = (void*) structs_Stack__Stack_new,
        .push = (void*) structs_Stack__Stack_push_impl,
        .pop = (void*) structs_Stack__Stack_pop_impl,
        .peek = (void*) structs_Stack__Stack_peek_impl,
        .peek_index = (void*) structs_Stack__Stack_peek_index_impl,
        .indexOf = (void*) structs_Stack__Stack_indexOf_impl,
        .getSize = (void*) structs_Stack__Stack_getSize_impl,
        .empty__quest = (void*) structs_Stack__Stack_empty__quest_impl,
        .lastIndex = (void*) structs_Stack__Stack_lastIndex_impl,
        .clear = (void*) structs_Stack__Stack_clear_impl,
        .__getsize__ = (void*) structs_Stack__Stack___getsize___impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__BackIterable_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Stack", 5);
    }
    return &class;
}
void structs_Stack_load() {
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
        structs_Stack__Stack___load__();
        __strLit101 = (void*) lang_String__makeStringLiteral("Trying to peek(%d) a stack of size %d", 37);
        __strLit100 = (void*) lang_String__makeStringLiteral("Trying to peek(%d)! index must be >= 1 <= size", 46);
        __strLit98 = (void*) lang_String__makeStringLiteral("Trying to peek an empty stack.", 30);
        __strLit96 = (void*) lang_String__makeStringLiteral("Trying to pop an empty stack.", 29);
    }
}

