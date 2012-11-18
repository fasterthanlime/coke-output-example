/* structs/ArrayList source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/structs/ArrayList.h>
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


void structs_ArrayList__ArrayList_init(structs_ArrayList__ArrayList* this) {
    structs_ArrayList__ArrayList_init_withCapacity((structs_ArrayList__ArrayList*) this, 10);
}

void structs_ArrayList__ArrayList_init_withCapacity(structs_ArrayList__ArrayList* this, lang_Numbers__SizeT capacity) {
    this->capacity = capacity;
    this->data = (void*) lang_Memory__gc_malloc(capacity * ((lang_Iterators__Iterable*)this)->T->size);
}

void structs_ArrayList__ArrayList_init_withData(structs_ArrayList__ArrayList* this, uint8_t* data, lang_Numbers__SizeT _size) {
    this->_size = _size;
    this->data = (void*) lang_Memory__gc_malloc(_size * ((lang_Iterators__Iterable*)this)->T->size);
    lang_Memory__memcpy(this->data, data, _size * ((lang_Iterators__Iterable*)this)->T->size);
    this->capacity = _size;
}

void structs_ArrayList__ArrayList_add_impl(structs_ArrayList__ArrayList* this, uint8_t* element) {
    structs_ArrayList__ArrayList_ensureCapacity(this, this->_size + 1);
    lang_Memory__memcpy(&(this->data[(this->_size) * ((lang_Iterators__Iterable*)this)->T->size]), element, ((lang_Iterators__Iterable*)this)->T->size);
    this->_size += 1;
}

void structs_ArrayList__ArrayList_add_withIndex_impl(structs_ArrayList__ArrayList* this, lang_Numbers__SSizeT index, uint8_t* element) {
    if (index < 0) {
        index = this->_size + index;
    }
    if (index < 0 || index > (lang_Numbers__SSizeT) this->_size) {
        lang_Exception__Exception_throw((lang_Exception__Exception*) lang_Exception__OutOfBoundsException_new((lang_types__Class*) (structs_ArrayList__ArrayList_class()), index, this->_size));
    }
    if (index == 0) {
        structs_ArrayList__ArrayList_ensureCapacity(this, this->_size + 1);
        lang_Numbers__Octet* dst;
        lang_Numbers__Octet* src;
        dst = this->data + (((lang_Iterators__Iterable*)this)->T->size);
        src = this->data;
        lang_Memory__memmove(dst, src, ((lang_Iterators__Iterable*)this)->T->size * this->_size);
        lang_Memory__memcpy(&(this->data[(0) * ((lang_Iterators__Iterable*)this)->T->size]), element, ((lang_Iterators__Iterable*)this)->T->size);
        this->_size += 1;
        return;
    }
    if (index == (lang_Numbers__SSizeT) this->_size) {
        structs_ArrayList__ArrayList_add(this, (uint8_t*) element);
        return;
    }
    structs_ArrayList__ArrayList_checkIndex(this, index);
    structs_ArrayList__ArrayList_ensureCapacity(this, this->_size + 1);
    lang_Numbers__Octet* dst;
    lang_Numbers__Octet* src;
    dst = this->data + (((lang_Iterators__Iterable*)this)->T->size * (index + 1));
    src = this->data + (((lang_Iterators__Iterable*)this)->T->size * index);
    lang_Numbers__SizeT bsize = (this->_size - index) * ((lang_Iterators__Iterable*)this)->T->size;
    lang_Memory__memmove(dst, src, bsize);
    lang_Memory__memcpy(&(this->data[(index) * ((lang_Iterators__Iterable*)this)->T->size]), element, ((lang_Iterators__Iterable*)this)->T->size);
    this->_size += 1;
}

void structs_ArrayList__ArrayList_clear_impl(structs_ArrayList__ArrayList* this) {
    this->_size = 0;
}

void structs_ArrayList__ArrayList_get_impl(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn61, lang_Numbers__SSizeT index) {
    if (index < 0) {
        index = this->_size + index;
    }
    if (index < 0 || index >= (lang_Numbers__SSizeT) this->_size) {
        lang_Exception__Exception_throw((lang_Exception__Exception*) lang_Exception__OutOfBoundsException_new((lang_types__Class*) (structs_ArrayList__ArrayList_class()), index, this->_size));
    }
    structs_ArrayList__ArrayList_checkIndex(this, index);
    if (__genericReturn61) {
        lang_Memory__memcpy(__genericReturn61, &(this->data[(index) * ((lang_Iterators__Iterable*)this)->T->size]), ((lang_Iterators__Iterable*)this)->T->size);
    }
    return;
}

lang_Numbers__SSizeT structs_ArrayList__ArrayList_indexOf_impl(structs_ArrayList__ArrayList* this, uint8_t* element) {
    lang_Numbers__SSizeT index = 0;
    while (index < (lang_Numbers__SSizeT) this->_size) {
        uint8_t* __genCall210 = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
        if (((lang_types__Bool (*)(lang_types__Class*, uint8_t*, uint8_t*, void*)) ((structs_List__List*) (this))->equals__quest.thunk)((lang_types__Class*)((lang_Iterators__Iterable*)this)->T, (uint8_t*) (structs_List____OP_IDX_List_SSizeT__T(__genCall210, (lang_types__Class*)((lang_Iterators__Iterable*)this)->T, (structs_List__List*) (this), index), __genCall210), (uint8_t*) element, ((structs_List__List*) (this))->equals__quest.context)) {
            return index;
        }
        index += 1;
    }
    return -1;
}

lang_Numbers__SSizeT structs_ArrayList__ArrayList_lastIndexOf_impl(structs_ArrayList__ArrayList* this, uint8_t* element) {
    lang_Numbers__SizeT index = this->_size;
    while (index > (lang_Numbers__SizeT) -1) {
        if (lang_Memory__memcmp(this->data + index * ((lang_Iterators__Iterable*)this)->T->size, element, ((lang_Iterators__Iterable*)this)->T->size) == (lang_Numbers__Int) 0) {
            return ((lang_Numbers__SSizeT) (index));
        }
        index -= 1;
    }
    return -1;
}

void structs_ArrayList__ArrayList_removeAt_impl(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn62, lang_Numbers__SSizeT index) {
    uint8_t* element = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
    lang_Memory__memcpy(element, &(this->data[(index) * ((lang_Iterators__Iterable*)this)->T->size]), ((lang_Iterators__Iterable*)this)->T->size);
    lang_Memory__memmove(this->data + (index * ((lang_Iterators__Iterable*)this)->T->size), this->data + ((index + 1) * ((lang_Iterators__Iterable*)this)->T->size), (this->_size - index) * ((lang_Iterators__Iterable*)this)->T->size);
    this->_size -= 1;
    if (__genericReturn62) {
        lang_Memory__memcpy(__genericReturn62, element, ((lang_Iterators__Iterable*)this)->T->size);
    }
    return;
}

void structs_ArrayList__ArrayList_sort_impl(structs_ArrayList__ArrayList* this, lang_types__Closure greaterThan) {
    lang_types__Bool inOrder = false;
    while (!inOrder) {
        inOrder = true;
        
        {
            lang_Numbers__Int i;
            for (i = 0; i < structs_ArrayList__ArrayList___getsize__(this) - 1; i++) {
                uint8_t* __genCall211 = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
                uint8_t* __genCall212 = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
                if (((lang_types__Bool (*)(uint8_t*, uint8_t*, void*)) greaterThan.thunk)((uint8_t*) (structs_ArrayList____OP_IDX_ArrayList_Int__T(__genCall211, (lang_types__Class*)((lang_Iterators__Iterable*)this)->T, this, i), __genCall211), (uint8_t*) (structs_ArrayList____OP_IDX_ArrayList_Int__T(__genCall212, (lang_types__Class*)((lang_Iterators__Iterable*)this)->T, this, i + 1), __genCall212), greaterThan.context)) {
                    inOrder = false;
                    uint8_t* tmp = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
                    structs_ArrayList____OP_IDX_ArrayList_Int__T(tmp, (lang_types__Class*)((lang_Iterators__Iterable*)this)->T, this, i);
                    uint8_t* __genCall213 = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
                    structs_ArrayList____OP_IDX_ASS_ArrayList_Int_T((lang_types__Class*)((lang_Iterators__Iterable*)this)->T, this, i, (uint8_t*) (structs_ArrayList____OP_IDX_ArrayList_Int__T(__genCall213, (lang_types__Class*)((lang_Iterators__Iterable*)this)->T, this, i + 1), __genCall213));
                    structs_ArrayList____OP_IDX_ASS_ArrayList_Int_T((lang_types__Class*)((lang_Iterators__Iterable*)this)->T, this, i + 1, (uint8_t*) tmp);
                }
            }
        }
    }
}

lang_types__Bool structs_ArrayList__ArrayList_remove_impl(structs_ArrayList__ArrayList* this, uint8_t* element) {
    lang_Numbers__SSizeT index = structs_ArrayList__ArrayList_indexOf(this, (uint8_t*) element);
    if (index == -1) {
        return false;
    }
    else {
        structs_ArrayList__ArrayList_removeAt(this, NULL, index);
    }
    return true;
}

void structs_ArrayList__ArrayList_set_impl(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn63, lang_Numbers__Int index, uint8_t* element) {
    structs_ArrayList__ArrayList_checkIndex(this, index);
    uint8_t* old = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
    lang_Memory__memcpy(old, &(this->data[(index) * ((lang_Iterators__Iterable*)this)->T->size]), ((lang_Iterators__Iterable*)this)->T->size);
    lang_Memory__memcpy(&(this->data[(index) * ((lang_Iterators__Iterable*)this)->T->size]), element, ((lang_Iterators__Iterable*)this)->T->size);
    if (__genericReturn63) {
        lang_Memory__memcpy(__genericReturn63, old, ((lang_Iterators__Iterable*)this)->T->size);
    }
    return;
}

lang_Numbers__SizeT structs_ArrayList__ArrayList_getSize_impl(structs_ArrayList__ArrayList* this) {
    return this->_size;
}

void structs_ArrayList__ArrayList_ensureCapacity_impl(structs_ArrayList__ArrayList* this, lang_Numbers__SizeT newSize) {
    if (newSize > this->capacity) {
        this->capacity = newSize * (newSize > (lang_Numbers__SizeT) 50000 ? 2 : 4);
        lang_types__Pointer tmpData = lang_Memory__gc_realloc(this->data, this->capacity * ((lang_Iterators__Iterable*)this)->T->size);
        if (tmpData) {
            this->data = (void*) tmpData;
        }
        else {
            lang_Exception__Exception_throw((lang_Exception__Exception*) lang_Exception__OutOfMemoryException_new((lang_types__Class*) (structs_ArrayList__ArrayList_class())));
        }
    }
}

void structs_ArrayList__ArrayList_checkIndex_impl(structs_ArrayList__ArrayList* this, lang_Numbers__SSizeT index) {
    if (index >= (lang_Numbers__SSizeT) this->_size) {
        lang_Exception__Exception_throw((lang_Exception__Exception*) lang_Exception__OutOfBoundsException_new((lang_types__Class*) (structs_ArrayList__ArrayList_class()), index, this->_size));
    }
}

lang_Iterators__BackIterator* structs_ArrayList__ArrayList_iterator_impl(structs_ArrayList__ArrayList* this) {
    return ((lang_Iterators__BackIterator*) (structs_ArrayList__ArrayListIterator_new_iter((lang_types__Class*)((lang_Iterators__Iterable*)this)->T, this)));
}

lang_Iterators__BackIterator* structs_ArrayList__ArrayList_backIterator_impl(structs_ArrayList__ArrayList* this) {
    structs_ArrayList__ArrayListIterator* iter = structs_ArrayList__ArrayListIterator_new_iter((lang_types__Class*)((lang_Iterators__Iterable*)this)->T, this);
    iter->index = this->_size;
    return ((lang_Iterators__BackIterator*) (iter));
}

structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_clone_impl(structs_ArrayList__ArrayList* this) {
    structs_ArrayList__ArrayList* copy = structs_ArrayList__ArrayList_new_withCapacity((lang_types__Class*)((lang_Iterators__Iterable*)this)->T, structs_ArrayList__ArrayList___getsize__(this));
    structs_List__List_addAll((structs_List__List*) copy, (lang_Iterators__Iterable*) (this));
    return copy;
}

structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_emptyClone_impl(structs_ArrayList__ArrayList* this, lang_types__Class* K) {
    return structs_ArrayList__ArrayList_new((lang_types__Class*)K);
}

lang_types__Pointer structs_ArrayList__ArrayList_toArray_impl(structs_ArrayList__ArrayList* this) {
    return ((lang_types__Pointer) (this->data));
}

structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_slice_impl(structs_ArrayList__ArrayList* this, lang_Numbers__SSizeT min, lang_Numbers__SSizeT max) {
    if (min < 0) {
        min = this->_size + min;
    }
    if (min < 0 || min >= (lang_Numbers__SSizeT) this->_size) {
        lang_Exception__Exception_throw((lang_Exception__Exception*) lang_Exception__OutOfBoundsException_new((lang_types__Class*) (structs_ArrayList__ArrayList_class()), min, this->_size));
    }
    if (max < 0) {
        max = this->_size + max;
    }
    if (max < 0 || max >= (lang_Numbers__SSizeT) this->_size) {
        lang_Exception__Exception_throw((lang_Exception__Exception*) lang_Exception__OutOfBoundsException_new((lang_types__Class*) (structs_ArrayList__ArrayList_class()), max, this->_size));
    }
    lang_Numbers__SSizeT retSize = max - min + 1;
    structs_ArrayList__ArrayList* ret = structs_ArrayList__ArrayList_new_withCapacity((lang_types__Class*)((lang_Iterators__Iterable*)this)->T, retSize);
    lang_Memory__memcpy(ret->data, this->data + (min * ((lang_Iterators__Iterable*)this)->T->size), (retSize) * ((lang_Iterators__Iterable*)this)->T->size);
    ret->_size = retSize;
    ret->capacity = retSize;
    return ret;
}

structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_slice_withRange_impl(structs_ArrayList__ArrayList* this, lang_Numbers__Range r) {
    return structs_ArrayList__ArrayList_slice(this, r.min, r.max);
}

lang_Numbers__SSizeT structs_ArrayList__ArrayList___getsize___impl(structs_ArrayList__ArrayList* this) {
    return ((lang_Numbers__SSizeT) (this->_size));
}

void structs_ArrayList__ArrayList___defaults___impl(structs_ArrayList__ArrayList* this) {
    structs_List__List___defaults___impl((structs_List__List*) this);
    this->_size = 0;
}

void structs_ArrayList__ArrayList_add(structs_ArrayList__ArrayList* this, uint8_t* element) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->add((structs_List__List*)this, element);
}

void structs_ArrayList__ArrayList_add_withIndex(structs_ArrayList__ArrayList* this, lang_Numbers__SSizeT index, uint8_t* element) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->add_withIndex((structs_List__List*)this, index, element);
}

void structs_ArrayList__ArrayList_clear(structs_ArrayList__ArrayList* this) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->clear((structs_List__List*)this);
}

void structs_ArrayList__ArrayList_get(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn61, lang_Numbers__SSizeT index) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->get((structs_List__List*)this, __genericReturn61, index);
}

lang_Numbers__SSizeT structs_ArrayList__ArrayList_indexOf(structs_ArrayList__ArrayList* this, uint8_t* element) {
    return (lang_Numbers__SSizeT) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->indexOf((structs_List__List*)this, element);
}

lang_Numbers__SSizeT structs_ArrayList__ArrayList_lastIndexOf(structs_ArrayList__ArrayList* this, uint8_t* element) {
    return (lang_Numbers__SSizeT) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->lastIndexOf((structs_List__List*)this, element);
}

void structs_ArrayList__ArrayList_removeAt(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn62, lang_Numbers__SSizeT index) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->removeAt((structs_List__List*)this, __genericReturn62, index);
}

void structs_ArrayList__ArrayList_sort(structs_ArrayList__ArrayList* this, lang_types__Closure greaterThan) {
    ((structs_ArrayList__ArrayListClass *)((lang_types__Object *)this)->class)->sort((structs_ArrayList__ArrayList*)this, greaterThan);
}

lang_types__Bool structs_ArrayList__ArrayList_remove(structs_ArrayList__ArrayList* this, uint8_t* element) {
    return (lang_types__Bool) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->remove((structs_List__List*)this, element);
}

void structs_ArrayList__ArrayList_set(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn63, lang_Numbers__Int index, uint8_t* element) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->set((structs_List__List*)this, __genericReturn63, index, element);
}

lang_Numbers__SizeT structs_ArrayList__ArrayList_getSize(structs_ArrayList__ArrayList* this) {
    return (lang_Numbers__SizeT) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->getSize((structs_List__List*)this);
}

void structs_ArrayList__ArrayList_ensureCapacity(structs_ArrayList__ArrayList* this, lang_Numbers__SizeT newSize) {
    ((structs_ArrayList__ArrayListClass *)((lang_types__Object *)this)->class)->ensureCapacity((structs_ArrayList__ArrayList*)this, newSize);
}

void structs_ArrayList__ArrayList_checkIndex(structs_ArrayList__ArrayList* this, lang_Numbers__SSizeT index) {
    ((structs_ArrayList__ArrayListClass *)((lang_types__Object *)this)->class)->checkIndex((structs_ArrayList__ArrayList*)this, index);
}

lang_Iterators__BackIterator* structs_ArrayList__ArrayList_iterator(structs_ArrayList__ArrayList* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

lang_Iterators__BackIterator* structs_ArrayList__ArrayList_backIterator(structs_ArrayList__ArrayList* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__BackIterableClass *)((lang_types__Object *)this)->class)->backIterator((lang_Iterators__BackIterable*)this);
}

structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_clone(structs_ArrayList__ArrayList* this) {
    return (structs_ArrayList__ArrayList*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->clone((structs_List__List*)this);
}

structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_emptyClone(structs_ArrayList__ArrayList* this, lang_types__Class* K) {
    return (structs_ArrayList__ArrayList*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->emptyClone((structs_List__List*)this, K);
}

lang_types__Pointer structs_ArrayList__ArrayList_toArray(structs_ArrayList__ArrayList* this) {
    return (lang_types__Pointer) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->toArray((structs_List__List*)this);
}

structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_slice(structs_ArrayList__ArrayList* this, lang_Numbers__SSizeT min, lang_Numbers__SSizeT max) {
    return (structs_ArrayList__ArrayList*) ((structs_ArrayList__ArrayListClass *)((lang_types__Object *)this)->class)->slice((structs_ArrayList__ArrayList*)this, min, max);
}

structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_slice_withRange(structs_ArrayList__ArrayList* this, lang_Numbers__Range r) {
    return (structs_ArrayList__ArrayList*) ((structs_ArrayList__ArrayListClass *)((lang_types__Object *)this)->class)->slice_withRange((structs_ArrayList__ArrayList*)this, r);
}

lang_Numbers__SSizeT structs_ArrayList__ArrayList___getsize__(structs_ArrayList__ArrayList* this) {
    return (lang_Numbers__SSizeT) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->__getsize__((structs_List__List*)this);
}

void structs_ArrayList__ArrayList___defaults__(structs_ArrayList__ArrayList* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_new(lang_types__Class* T) {
    
    structs_ArrayList__ArrayList* this = ((structs_ArrayList__ArrayList*) (lang_types__Class_alloc__class((lang_types__Class*) structs_ArrayList__ArrayList_class())));
    ((lang_Iterators__Iterable*)this)->T = T;
    structs_ArrayList__ArrayList___defaults__(this);
    structs_ArrayList__ArrayList_init((structs_ArrayList__ArrayList*) this);
    return this;
}
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_new_withCapacity(lang_types__Class* T, lang_Numbers__SizeT capacity) {
    
    structs_ArrayList__ArrayList* this = ((structs_ArrayList__ArrayList*) (lang_types__Class_alloc__class((lang_types__Class*) structs_ArrayList__ArrayList_class())));
    ((lang_Iterators__Iterable*)this)->T = T;
    structs_ArrayList__ArrayList___defaults__(this);
    structs_ArrayList__ArrayList_init_withCapacity((structs_ArrayList__ArrayList*) this, capacity);
    return this;
}
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_new_withData(lang_types__Class* T, uint8_t* data, lang_Numbers__SizeT _size) {
    
    structs_ArrayList__ArrayList* this = ((structs_ArrayList__ArrayList*) (lang_types__Class_alloc__class((lang_types__Class*) structs_ArrayList__ArrayList_class())));
    ((lang_Iterators__Iterable*)this)->T = T;
    structs_ArrayList__ArrayList___defaults__(this);
    structs_ArrayList__ArrayList_init_withData((structs_ArrayList__ArrayList*) this, (uint8_t*) data, _size);
    return this;
}
void structs_ArrayList__ArrayList___load__() {
    structs_List__List___load__();
}

structs_ArrayList__ArrayListClass *structs_ArrayList__ArrayList_class(){
    static _Bool __done__ = false;
    static structs_ArrayList__ArrayListClass class = 
    {
        {
            {
                {
                    {
                        {
                            {
                                .instanceSize = sizeof(structs_ArrayList__ArrayList),
                                .size = sizeof(void*)
                            },
                            .__defaults__ = (void*) structs_ArrayList__ArrayList___defaults___impl,
                            .__destroy__ = (void*) lang_types__Object___destroy___impl,
                            .__load__ = (void*) structs_ArrayList__ArrayList___load__,
                        },
                    },
                    .iterator = (void*) structs_ArrayList__ArrayList_iterator_impl,
                    .toList = (void*) lang_Iterators__Iterable_toList_impl,
                    .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
                    .each = (void*) lang_Iterators__Iterable_each_impl,
                    .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
                    .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
                },
                .backIterator = (void*) structs_ArrayList__ArrayList_backIterator_impl,
                .forward = (void*) lang_Iterators__BackIterable_forward_impl,
                .backward = (void*) lang_Iterators__BackIterable_backward_impl,
            },
            .add = (void*) structs_ArrayList__ArrayList_add_impl,
            .add_withIndex = (void*) structs_ArrayList__ArrayList_add_withIndex_impl,
            .addAll = (void*) structs_List__List_addAll_impl,
            .addAll_atStart = (void*) structs_List__List_addAll_atStart_impl,
            .clear = (void*) structs_ArrayList__ArrayList_clear_impl,
            .removeLast = (void*) structs_List__List_removeLast_impl,
            .contains__quest = (void*) structs_List__List_contains__quest_impl,
            .contains__quest_filter = (void*) structs_List__List_contains__quest_filter_impl,
            .replace = (void*) structs_List__List_replace_impl,
            .get = (void*) structs_ArrayList__ArrayList_get_impl,
            .indexOf = (void*) structs_ArrayList__ArrayList_indexOf_impl,
            .empty__quest = (void*) structs_List__List_empty__quest_impl,
            .lastIndexOf = (void*) structs_ArrayList__ArrayList_lastIndexOf_impl,
            .removeAt = (void*) structs_ArrayList__ArrayList_removeAt_impl,
            .remove = (void*) structs_ArrayList__ArrayList_remove_impl,
            .set = (void*) structs_ArrayList__ArrayList_set_impl,
            .getSize = (void*) structs_ArrayList__ArrayList_getSize_impl,
            .clone = (void*) structs_ArrayList__ArrayList_clone_impl,
            .emptyClone = (void*) structs_ArrayList__ArrayList_emptyClone_impl,
            .emptyClone_defaults = (void*) structs_List__List_emptyClone_defaults_impl,
            .split = (void*) structs_List__List_split_impl,
            .shuffle = (void*) structs_List__List_shuffle_impl,
            .first = (void*) structs_List__List_first_impl,
            .last = (void*) structs_List__List_last_impl,
            .lastIndex = (void*) structs_List__List_lastIndex_impl,
            .reverse__bang = (void*) structs_List__List_reverse__bang_impl,
            .reverse = (void*) structs_List__List_reverse_impl,
            .toArray = (void*) structs_ArrayList__ArrayList_toArray_impl,
            .map = (void*) structs_List__List_map_impl,
            .filter = (void*) structs_List__List_filter_impl,
            .filterEach = (void*) structs_List__List_filterEach_impl,
            .itemsSizeInBytes = (void*) structs_List__List_itemsSizeInBytes_impl,
            .join_stringDefault = (void*) structs_List__List_join_stringDefault_impl,
            .join_string = (void*) structs_List__List_join_string_impl,
            .join_char = (void*) structs_List__List_join_char_impl,
            .__getsize__ = (void*) structs_ArrayList__ArrayList___getsize___impl,
        },
        .new = (void*) structs_ArrayList__ArrayList_new,
        .new_withCapacity = (void*) structs_ArrayList__ArrayList_new_withCapacity,
        .new_withData = (void*) structs_ArrayList__ArrayList_new_withData,
        .sort = (void*) structs_ArrayList__ArrayList_sort_impl,
        .ensureCapacity = (void*) structs_ArrayList__ArrayList_ensureCapacity_impl,
        .checkIndex = (void*) structs_ArrayList__ArrayList_checkIndex_impl,
        .slice = (void*) structs_ArrayList__ArrayList_slice_impl,
        .slice_withRange = (void*) structs_ArrayList__ArrayList_slice_withRange_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) structs_List__List_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("ArrayList", 9);
    }
    return &class;
}

void structs_ArrayList__ArrayListIterator_init_iter(structs_ArrayList__ArrayListIterator* this, structs_ArrayList__ArrayList* list) {
    this->list = list;
}

lang_types__Bool structs_ArrayList__ArrayListIterator_hasNext__quest_impl(structs_ArrayList__ArrayListIterator* this) {
    return this->index < structs_ArrayList__ArrayList___getsize__(this->list);
}

void structs_ArrayList__ArrayListIterator_next_impl(structs_ArrayList__ArrayListIterator* this, uint8_t* __genericReturn64) {
    this->index += 1;
    structs_ArrayList__ArrayList_get(this->list, __genericReturn64, this->index - 1);
    return;
}

lang_types__Bool structs_ArrayList__ArrayListIterator_hasPrev__quest_impl(structs_ArrayList__ArrayListIterator* this) {
    return this->index > 0;
}

void structs_ArrayList__ArrayListIterator_prev_impl(structs_ArrayList__ArrayListIterator* this, uint8_t* __genericReturn65) {
    this->index -= 1;
    structs_ArrayList__ArrayList_get(this->list, __genericReturn65, this->index);
    return;
}

lang_types__Bool structs_ArrayList__ArrayListIterator_remove_impl(structs_ArrayList__ArrayListIterator* this) {
    uint8_t* __genCall214 = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
    if ((structs_ArrayList__ArrayList_removeAt(this->list, __genCall214, this->index - 1), __genCall214) == (uint8_t*) NULL) {
        return false;
    }
    if (this->index <= structs_ArrayList__ArrayList___getsize__(this->list)) {
        this->index -= 1;
    }
    return true;
}

void structs_ArrayList__ArrayListIterator___defaults___impl(structs_ArrayList__ArrayListIterator* this) {
    lang_Iterators__BackIterator___defaults___impl((lang_Iterators__BackIterator*) this);
    this->index = 0;
}

lang_types__Bool structs_ArrayList__ArrayListIterator_hasNext__quest(structs_ArrayList__ArrayListIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->hasNext__quest((lang_Iterators__Iterator*)this);
}

void structs_ArrayList__ArrayListIterator_next(structs_ArrayList__ArrayListIterator* this, uint8_t* __genericReturn64) {
    ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->next((lang_Iterators__Iterator*)this, __genericReturn64);
}

lang_types__Bool structs_ArrayList__ArrayListIterator_hasPrev__quest(structs_ArrayList__ArrayListIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->hasPrev__quest((lang_Iterators__BackIterator*)this);
}

void structs_ArrayList__ArrayListIterator_prev(structs_ArrayList__ArrayListIterator* this, uint8_t* __genericReturn65) {
    ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->prev((lang_Iterators__BackIterator*)this, __genericReturn65);
}

lang_types__Bool structs_ArrayList__ArrayListIterator_remove(structs_ArrayList__ArrayListIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->remove((lang_Iterators__Iterator*)this);
}

void structs_ArrayList__ArrayListIterator___defaults__(structs_ArrayList__ArrayListIterator* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
structs_ArrayList__ArrayListIterator* structs_ArrayList__ArrayListIterator_new_iter(lang_types__Class* T, structs_ArrayList__ArrayList* list) {
    
    structs_ArrayList__ArrayListIterator* this = ((structs_ArrayList__ArrayListIterator*) (lang_types__Class_alloc__class((lang_types__Class*) structs_ArrayList__ArrayListIterator_class())));
    ((lang_Iterators__Iterable*)this)->T = T;
    structs_ArrayList__ArrayListIterator___defaults__(this);
    structs_ArrayList__ArrayListIterator_init_iter((structs_ArrayList__ArrayListIterator*) this, list);
    return this;
}
void structs_ArrayList__ArrayListIterator___load__() {
    lang_Iterators__BackIterator___load__();
}

structs_ArrayList__ArrayListIteratorClass *structs_ArrayList__ArrayListIterator_class(){
    static _Bool __done__ = false;
    static structs_ArrayList__ArrayListIteratorClass class = 
    {
        {
            {
                {
                    {
                        {
                            {
                                .instanceSize = sizeof(structs_ArrayList__ArrayListIterator),
                                .size = sizeof(void*)
                            },
                            .__defaults__ = (void*) structs_ArrayList__ArrayListIterator___defaults___impl,
                            .__destroy__ = (void*) lang_types__Object___destroy___impl,
                            .__load__ = (void*) structs_ArrayList__ArrayListIterator___load__,
                        },
                    },
                    .iterator = (void*) lang_Iterators__BackIterator_iterator_impl,
                    .toList = (void*) lang_Iterators__Iterable_toList_impl,
                    .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
                    .each = (void*) lang_Iterators__Iterable_each_impl,
                    .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
                    .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
                },
                .hasNext__quest = (void*) structs_ArrayList__ArrayListIterator_hasNext__quest_impl,
                .next = (void*) structs_ArrayList__ArrayListIterator_next_impl,
                .remove = (void*) structs_ArrayList__ArrayListIterator_remove_impl,
            },
            .hasPrev__quest = (void*) structs_ArrayList__ArrayListIterator_hasPrev__quest_impl,
            .prev = (void*) structs_ArrayList__ArrayListIterator_prev_impl,
            .reversed = (void*) lang_Iterators__BackIterator_reversed_impl,
        },
        .new_iter = (void*) structs_ArrayList__ArrayListIterator_new_iter,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__BackIterator_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("ArrayListIterator", 17);
    }
    return &class;
}
void structs_ArrayList_load() {
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
        structs_List_load();
        structs_ArrayList__ArrayList___load__();
        structs_ArrayList__ArrayListIterator___load__();
    }
}


structs_ArrayList__ArrayList* structs_ArrayList____OP_IDX_ArrayList_Range__ArrayList(lang_types__Class* T, structs_ArrayList__ArrayList* list, lang_Numbers__Range r) {
    return structs_ArrayList__ArrayList_slice_withRange(list, r);
}

void structs_ArrayList____OP_IDX_ArrayList_Int__T(uint8_t* __genericReturn60, lang_types__Class* T, structs_ArrayList__ArrayList* list, lang_Numbers__Int i) {
    structs_ArrayList__ArrayList_get(list, __genericReturn60, i);
    return;
}

void structs_ArrayList____OP_IDX_ASS_ArrayList_Int_T(lang_types__Class* T, structs_ArrayList__ArrayList* list, lang_Numbers__Int i, uint8_t* element) {
    structs_ArrayList__ArrayList_set(list, NULL, i, (uint8_t*) element);
}

void structs_ArrayList____OP_ADD_ASS_ArrayList_T(lang_types__Class* T, structs_ArrayList__ArrayList* list, uint8_t* element) {
    structs_ArrayList__ArrayList_add(list, (uint8_t*) element);
}

lang_types__Bool structs_ArrayList____OP_SUB_ASS_ArrayList_T__Bool(lang_types__Class* T, structs_ArrayList__ArrayList* list, uint8_t* element) {
    return structs_ArrayList__ArrayList_remove(list, (uint8_t*) element);
}

structs_ArrayList__ArrayList* structs_ArrayList____OP_AS_T__array__ArrayList(lang_types__Class* T, _lang_array__Array array) {
    return structs_ArrayList__ArrayList_new_withData((lang_types__Class*)T, (uint8_t*) array.data, array.length);
}
