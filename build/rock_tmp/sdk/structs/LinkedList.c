/* structs/LinkedList source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/structs/LinkedList.h>
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
#include <sdk/os/Terminal.h>

static lang_String__String* __strLit112;
static lang_String__String* __strLit111;
static lang_String__String* __strLit107;
static lang_String__String* __strLit106;
static lang_String__String* __strLit104;
static lang_String__String* __strLit103;

void structs_LinkedList__LinkedList_init(structs_LinkedList__LinkedList* this) {
    this->head = structs_LinkedList__Node_new((lang_types__Class*)((lang_Iterators__Iterable*)this)->T);
    this->head->prev = this->head;
    this->head->next = this->head;
}

void structs_LinkedList__LinkedList_add_impl(structs_LinkedList__LinkedList* this, uint8_t* data) {
    structs_LinkedList__Node* node = structs_LinkedList__Node_new_withParams((lang_types__Class*)((lang_Iterators__Iterable*)this)->T, this->head->prev, this->head, (uint8_t*) data);
    this->head->prev->next = node;
    this->head->prev = node;
    this->_size += 1;
}

void structs_LinkedList__LinkedList_add_withIndex_impl(structs_LinkedList__LinkedList* this, lang_Numbers__SSizeT index, uint8_t* data) {
    if (index > 0 && index <= structs_List__List_lastIndex((structs_List__List*) this)) {
        structs_LinkedList__Node* prevNode = structs_LinkedList__LinkedList_getNode(this, index - 1);
        structs_LinkedList__Node* nextNode = prevNode->next;
        structs_LinkedList__Node* node = structs_LinkedList__Node_new_withParams((lang_types__Class*)((lang_Iterators__Iterable*)this)->T, prevNode, nextNode, (uint8_t*) data);
        prevNode->next = node;
        nextNode->prev = node;
        this->_size += 1;
    }
    else if (index > 0 && index == (lang_Numbers__SSizeT) this->_size) {
        structs_LinkedList__LinkedList_add(this, (uint8_t*) data);
    }
    else if (index == 0) {
        structs_LinkedList__Node* node = structs_LinkedList__Node_new_withParams((lang_types__Class*)((lang_Iterators__Iterable*)this)->T, this->head, this->head->next, (uint8_t*) data);
        this->head->next->prev = node;
        this->head->next = node;
        this->_size += 1;
    }
    else {
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (structs_LinkedList__LinkedList_class()), lang_String____OP_ADD_String_String__String(lang_String____OP_ADD_String_String__String(lang_String____OP_ADD_String_String__String(__strLit103, lang_Numbers__SSizeT_toString(index)), __strLit104), lang_Numbers__ULLong_toString((lang_Numbers__ULLong) structs_LinkedList__LinkedList___getsize__(this)))));
    }
}

void structs_LinkedList__LinkedList_get_impl(structs_LinkedList__LinkedList* this, uint8_t* __genericReturn105, lang_Numbers__SSizeT index) {
    if (__genericReturn105) {
        lang_Memory__memcpy(__genericReturn105, structs_LinkedList__LinkedList_getNode(this, index)->data, ((lang_Iterators__Iterable*)this)->T->size);
    }
    return;
}

structs_LinkedList__Node* structs_LinkedList__LinkedList_getNode_impl(structs_LinkedList__LinkedList* this, lang_Numbers__SSizeT index) {
    if (index < 0 || index >= (lang_Numbers__SSizeT) this->_size) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (structs_LinkedList__LinkedList_class()), lang_String____OP_ADD_String_String__String(lang_String____OP_ADD_String_String__String(lang_String____OP_ADD_String_String__String(__strLit106, lang_Numbers__SSizeT_toString(index)), __strLit107), lang_Numbers__ULLong_toString((lang_Numbers__ULLong) structs_LinkedList__LinkedList___getsize__(this)))));
    }
    lang_Numbers__Int i = 0;
    structs_LinkedList__Node* current = this->head->next;
    while (current->next != this->head && i < (lang_Numbers__Int) index) {
        current = current->next;
        i += 1;
    }
    return current;
}

void structs_LinkedList__LinkedList_clear_impl(structs_LinkedList__LinkedList* this) {
    this->head->next = this->head;
    this->head->prev = this->head;
    this->_size = 0;
}

lang_Numbers__SSizeT structs_LinkedList__LinkedList_indexOf_impl(structs_LinkedList__LinkedList* this, uint8_t* data) {
    structs_LinkedList__Node* current = this->head->next;
    lang_Numbers__SSizeT i = 0;
    while (current != this->head) {
        if (lang_Memory__memcmp(current->data, data, ((lang_Iterators__Iterable*)this)->T->size) == (lang_Numbers__Int) 0) {
            return i;
        }
        i += 1;
        current = current->next;
    }
    return -1;
}

lang_Numbers__SSizeT structs_LinkedList__LinkedList_lastIndexOf_impl(structs_LinkedList__LinkedList* this, uint8_t* data) {
    structs_LinkedList__Node* current = this->head->prev;
    lang_Numbers__SizeT i = this->_size - 1;
    while (current != this->head) {
        if (lang_Memory__memcmp(current->data, data, ((lang_Iterators__Iterable*)this)->T->size) == (lang_Numbers__Int) 0) {
            return ((lang_Numbers__SSizeT) (i));
        }
        i -= 1;
        current = current->prev;
    }
    return -1;
}

void structs_LinkedList__LinkedList_first_impl(structs_LinkedList__LinkedList* this, uint8_t* __genericReturn108) {
    if (this->head->next != this->head) {
        if (__genericReturn108) {
            lang_Memory__memcpy(__genericReturn108, this->head->next->data, ((lang_Iterators__Iterable*)this)->T->size);
        }
        return;
    }
    else {
        if (__genericReturn108) {
            lang_types__Pointer __unreferencable236 = NULL;
            lang_Memory__memcpy(__genericReturn108, &(__unreferencable236), ((lang_types__Class*)lang_types__Pointer_class())->size);
        }
        return;
    }
}

void structs_LinkedList__LinkedList_last_impl(structs_LinkedList__LinkedList* this, uint8_t* __genericReturn109) {
    if (this->head->prev != this->head) {
        if (__genericReturn109) {
            lang_Memory__memcpy(__genericReturn109, this->head->prev->data, ((lang_Iterators__Iterable*)this)->T->size);
        }
        return;
    }
    else {
        if (__genericReturn109) {
            lang_types__Pointer __unreferencable237 = NULL;
            lang_Memory__memcpy(__genericReturn109, &(__unreferencable237), ((lang_types__Class*)lang_types__Pointer_class())->size);
        }
        return;
    }
}

void structs_LinkedList__LinkedList_removeAt_impl(structs_LinkedList__LinkedList* this, uint8_t* __genericReturn110, lang_Numbers__SSizeT index) {
    if (this->head->next != this->head && 0 <= index && index < (lang_Numbers__SSizeT) this->_size) {
        structs_LinkedList__Node* toRemove = structs_LinkedList__LinkedList_getNode(this, index);
        structs_LinkedList__LinkedList_removeNode(this, toRemove);
        if (__genericReturn110) {
            lang_Memory__memcpy(__genericReturn110, toRemove->data, ((lang_Iterators__Iterable*)this)->T->size);
        }
        return;
    }
    lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (structs_LinkedList__LinkedList_class()), lang_String____OP_ADD_String_String__String(lang_String____OP_ADD_String_String__String(lang_String____OP_ADD_String_String__String(__strLit111, lang_Numbers__SSizeT_toString(index)), __strLit112), lang_Numbers__ULLong_toString((lang_Numbers__ULLong) structs_LinkedList__LinkedList___getsize__(this)))));
}

lang_types__Bool structs_LinkedList__LinkedList_remove_impl(structs_LinkedList__LinkedList* this, uint8_t* data) {
    lang_Numbers__SSizeT i = structs_LinkedList__LinkedList_indexOf(this, (uint8_t*) data);
    if (i != -1) {
        structs_LinkedList__LinkedList_removeAt(this, NULL, i);
        return true;
    }
    return false;
}

void structs_LinkedList__LinkedList_removeNode_impl(structs_LinkedList__LinkedList* this, structs_LinkedList__Node* toRemove) {
    toRemove->prev->next = toRemove->next;
    toRemove->next->prev = toRemove->prev;
    toRemove->prev = (void*) NULL;
    toRemove->next = (void*) NULL;
    this->_size -= 1;
}

lang_types__Bool structs_LinkedList__LinkedList_removeLast_impl(structs_LinkedList__LinkedList* this) {
    if (this->head->prev != this->head) {
        structs_LinkedList__LinkedList_removeNode(this, this->head->prev);
        return true;
    }
    return false;
}

void structs_LinkedList__LinkedList_set_impl(structs_LinkedList__LinkedList* this, uint8_t* __genericReturn113, lang_Numbers__SSizeT index, uint8_t* data) {
    structs_LinkedList__Node* node = structs_LinkedList__LinkedList_getNode(this, index);
    uint8_t* ret = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
    lang_Memory__memcpy(ret, node->data, ((lang_Iterators__Iterable*)this)->T->size);
    lang_Memory__memcpy(node->data, data, ((lang_Iterators__Iterable*)this)->T->size);
    if (__genericReturn113) {
        lang_Memory__memcpy(__genericReturn113, ret, ((lang_Iterators__Iterable*)this)->T->size);
    }
    return;
}

lang_Numbers__SSizeT structs_LinkedList__LinkedList_getSize_impl(structs_LinkedList__LinkedList* this) {
    return ((lang_Numbers__SSizeT) (this->_size));
}

structs_LinkedList__LinkedListIterator* structs_LinkedList__LinkedList_iterator_impl(structs_LinkedList__LinkedList* this) {
    return structs_LinkedList__LinkedListIterator_new_ll((lang_types__Class*)((lang_Iterators__Iterable*)this)->T, this);
}

structs_LinkedList__LinkedListIterator* structs_LinkedList__LinkedList_backIterator_impl(structs_LinkedList__LinkedList* this) {
    structs_LinkedList__LinkedListIterator* iter = structs_LinkedList__LinkedListIterator_new_ll((lang_types__Class*)((lang_Iterators__Iterable*)this)->T, this);
    iter->current = this->head->prev;
    return iter;
}

structs_LinkedList__LinkedList* structs_LinkedList__LinkedList_clone_impl(structs_LinkedList__LinkedList* this) {
    structs_LinkedList__LinkedList* list = structs_LinkedList__LinkedList_new((lang_types__Class*)((lang_Iterators__Iterable*)this)->T);
    if (this->head->next != this->head) {
        structs_LinkedList__LinkedListIterator* iter = structs_LinkedList__LinkedList_iterator(this);
        while (structs_LinkedList__LinkedListIterator_hasNext__quest(iter)) {
            uint8_t* __genCall235 = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
            structs_LinkedList__LinkedList_add(list, (uint8_t*) (structs_LinkedList__LinkedListIterator_next(iter, __genCall235), __genCall235));
        }
    }
    return list;
}

structs_LinkedList__LinkedList* structs_LinkedList__LinkedList_emptyClone_impl(structs_LinkedList__LinkedList* this, lang_types__Class* K) {
    return structs_LinkedList__LinkedList_new((lang_types__Class*)K);
}

lang_Numbers__SizeT structs_LinkedList__LinkedList___getsize___impl(structs_LinkedList__LinkedList* this) {
    return this->_size;
}

void structs_LinkedList__LinkedList___defaults___impl(structs_LinkedList__LinkedList* this) {
    structs_List__List___defaults___impl((structs_List__List*) this);
    this->_size = 0;
}

void structs_LinkedList__LinkedList_add(structs_LinkedList__LinkedList* this, uint8_t* data) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->add((structs_List__List*)this, data);
}

void structs_LinkedList__LinkedList_add_withIndex(structs_LinkedList__LinkedList* this, lang_Numbers__SSizeT index, uint8_t* data) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->add_withIndex((structs_List__List*)this, index, data);
}

void structs_LinkedList__LinkedList_get(structs_LinkedList__LinkedList* this, uint8_t* __genericReturn105, lang_Numbers__SSizeT index) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->get((structs_List__List*)this, __genericReturn105, index);
}

structs_LinkedList__Node* structs_LinkedList__LinkedList_getNode(structs_LinkedList__LinkedList* this, lang_Numbers__SSizeT index) {
    return (structs_LinkedList__Node*) ((structs_LinkedList__LinkedListClass *)((lang_types__Object *)this)->class)->getNode((structs_LinkedList__LinkedList*)this, index);
}

void structs_LinkedList__LinkedList_clear(structs_LinkedList__LinkedList* this) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->clear((structs_List__List*)this);
}

lang_Numbers__SSizeT structs_LinkedList__LinkedList_indexOf(structs_LinkedList__LinkedList* this, uint8_t* data) {
    return (lang_Numbers__SSizeT) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->indexOf((structs_List__List*)this, data);
}

lang_Numbers__SSizeT structs_LinkedList__LinkedList_lastIndexOf(structs_LinkedList__LinkedList* this, uint8_t* data) {
    return (lang_Numbers__SSizeT) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->lastIndexOf((structs_List__List*)this, data);
}

void structs_LinkedList__LinkedList_first(structs_LinkedList__LinkedList* this, uint8_t* __genericReturn108) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->first((structs_List__List*)this, __genericReturn108);
}

void structs_LinkedList__LinkedList_last(structs_LinkedList__LinkedList* this, uint8_t* __genericReturn109) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->last((structs_List__List*)this, __genericReturn109);
}

void structs_LinkedList__LinkedList_removeAt(structs_LinkedList__LinkedList* this, uint8_t* __genericReturn110, lang_Numbers__SSizeT index) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->removeAt((structs_List__List*)this, __genericReturn110, index);
}

lang_types__Bool structs_LinkedList__LinkedList_remove(structs_LinkedList__LinkedList* this, uint8_t* data) {
    return (lang_types__Bool) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->remove((structs_List__List*)this, data);
}

void structs_LinkedList__LinkedList_removeNode(structs_LinkedList__LinkedList* this, structs_LinkedList__Node* toRemove) {
    ((structs_LinkedList__LinkedListClass *)((lang_types__Object *)this)->class)->removeNode((structs_LinkedList__LinkedList*)this, toRemove);
}

lang_types__Bool structs_LinkedList__LinkedList_removeLast(structs_LinkedList__LinkedList* this) {
    return (lang_types__Bool) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->removeLast((structs_List__List*)this);
}

void structs_LinkedList__LinkedList_set(structs_LinkedList__LinkedList* this, uint8_t* __genericReturn113, lang_Numbers__SSizeT index, uint8_t* data) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->set((structs_List__List*)this, __genericReturn113, index, data);
}

lang_Numbers__SSizeT structs_LinkedList__LinkedList_getSize(structs_LinkedList__LinkedList* this) {
    return (lang_Numbers__SSizeT) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->getSize((structs_List__List*)this);
}

structs_LinkedList__LinkedListIterator* structs_LinkedList__LinkedList_iterator(structs_LinkedList__LinkedList* this) {
    return (structs_LinkedList__LinkedListIterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

structs_LinkedList__LinkedListIterator* structs_LinkedList__LinkedList_backIterator(structs_LinkedList__LinkedList* this) {
    return (structs_LinkedList__LinkedListIterator*) ((lang_Iterators__BackIterableClass *)((lang_types__Object *)this)->class)->backIterator((lang_Iterators__BackIterable*)this);
}

structs_LinkedList__LinkedList* structs_LinkedList__LinkedList_clone(structs_LinkedList__LinkedList* this) {
    return (structs_LinkedList__LinkedList*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->clone((structs_List__List*)this);
}

structs_LinkedList__LinkedList* structs_LinkedList__LinkedList_emptyClone(structs_LinkedList__LinkedList* this, lang_types__Class* K) {
    return (structs_LinkedList__LinkedList*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->emptyClone((structs_List__List*)this, K);
}

lang_Numbers__SizeT structs_LinkedList__LinkedList___getsize__(structs_LinkedList__LinkedList* this) {
    return (lang_Numbers__SizeT) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->__getsize__((structs_List__List*)this);
}

void structs_LinkedList__LinkedList___defaults__(structs_LinkedList__LinkedList* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
structs_LinkedList__LinkedList* structs_LinkedList__LinkedList_new(lang_types__Class* T) {
    
    structs_LinkedList__LinkedList* this = ((structs_LinkedList__LinkedList*) (lang_types__Class_alloc__class((lang_types__Class*) structs_LinkedList__LinkedList_class())));
    ((lang_Iterators__Iterable*)this)->T = T;
    structs_LinkedList__LinkedList___defaults__(this);
    structs_LinkedList__LinkedList_init((structs_LinkedList__LinkedList*) this);
    return this;
}
void structs_LinkedList__LinkedList___load__() {
    structs_List__List___load__();
}

structs_LinkedList__LinkedListClass *structs_LinkedList__LinkedList_class(){
    static _Bool __done__ = false;
    static structs_LinkedList__LinkedListClass class = 
    {
        {
            {
                {
                    {
                        {
                            {
                                .instanceSize = sizeof(structs_LinkedList__LinkedList),
                                .size = sizeof(void*)
                            },
                            .__defaults__ = (void*) structs_LinkedList__LinkedList___defaults___impl,
                            .__destroy__ = (void*) lang_types__Object___destroy___impl,
                            .__load__ = (void*) structs_LinkedList__LinkedList___load__,
                        },
                    },
                    .iterator = (void*) structs_LinkedList__LinkedList_iterator_impl,
                    .toList = (void*) lang_Iterators__Iterable_toList_impl,
                    .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
                    .each = (void*) lang_Iterators__Iterable_each_impl,
                    .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
                    .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
                },
                .backIterator = (void*) structs_LinkedList__LinkedList_backIterator_impl,
                .forward = (void*) lang_Iterators__BackIterable_forward_impl,
                .backward = (void*) lang_Iterators__BackIterable_backward_impl,
            },
            .add = (void*) structs_LinkedList__LinkedList_add_impl,
            .add_withIndex = (void*) structs_LinkedList__LinkedList_add_withIndex_impl,
            .addAll = (void*) structs_List__List_addAll_impl,
            .addAll_atStart = (void*) structs_List__List_addAll_atStart_impl,
            .clear = (void*) structs_LinkedList__LinkedList_clear_impl,
            .removeLast = (void*) structs_LinkedList__LinkedList_removeLast_impl,
            .contains__quest = (void*) structs_List__List_contains__quest_impl,
            .contains__quest_filter = (void*) structs_List__List_contains__quest_filter_impl,
            .replace = (void*) structs_List__List_replace_impl,
            .get = (void*) structs_LinkedList__LinkedList_get_impl,
            .indexOf = (void*) structs_LinkedList__LinkedList_indexOf_impl,
            .empty__quest = (void*) structs_List__List_empty__quest_impl,
            .lastIndexOf = (void*) structs_LinkedList__LinkedList_lastIndexOf_impl,
            .removeAt = (void*) structs_LinkedList__LinkedList_removeAt_impl,
            .remove = (void*) structs_LinkedList__LinkedList_remove_impl,
            .set = (void*) structs_LinkedList__LinkedList_set_impl,
            .getSize = (void*) structs_LinkedList__LinkedList_getSize_impl,
            .clone = (void*) structs_LinkedList__LinkedList_clone_impl,
            .emptyClone = (void*) structs_LinkedList__LinkedList_emptyClone_impl,
            .emptyClone_defaults = (void*) structs_List__List_emptyClone_defaults_impl,
            .split = (void*) structs_List__List_split_impl,
            .shuffle = (void*) structs_List__List_shuffle_impl,
            .first = (void*) structs_LinkedList__LinkedList_first_impl,
            .last = (void*) structs_LinkedList__LinkedList_last_impl,
            .lastIndex = (void*) structs_List__List_lastIndex_impl,
            .reverse__bang = (void*) structs_List__List_reverse__bang_impl,
            .reverse = (void*) structs_List__List_reverse_impl,
            .toArray = (void*) structs_List__List_toArray_impl,
            .map = (void*) structs_List__List_map_impl,
            .filter = (void*) structs_List__List_filter_impl,
            .filterEach = (void*) structs_List__List_filterEach_impl,
            .itemsSizeInBytes = (void*) structs_List__List_itemsSizeInBytes_impl,
            .join_stringDefault = (void*) structs_List__List_join_stringDefault_impl,
            .join_string = (void*) structs_List__List_join_string_impl,
            .join_char = (void*) structs_List__List_join_char_impl,
            .__getsize__ = (void*) structs_LinkedList__LinkedList___getsize___impl,
        },
        .new = (void*) structs_LinkedList__LinkedList_new,
        .getNode = (void*) structs_LinkedList__LinkedList_getNode_impl,
        .removeNode = (void*) structs_LinkedList__LinkedList_removeNode_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) structs_List__List_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("LinkedList", 10);
    }
    return &class;
}

void structs_LinkedList__Node_init(structs_LinkedList__Node* this) {
}

void structs_LinkedList__Node_init_withParams(structs_LinkedList__Node* this, structs_LinkedList__Node* prev, structs_LinkedList__Node* next, uint8_t* data) {
    lang_Memory__memcpy(this->data, data, this->T->size);
    this->next = next;
    this->prev = prev;
}

void structs_LinkedList__Node___defaults___impl(structs_LinkedList__Node* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
    this->data = lang_Memory__gc_malloc(this->T->size);
}

void structs_LinkedList__Node___defaults__(structs_LinkedList__Node* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
structs_LinkedList__Node* structs_LinkedList__Node_new(lang_types__Class* T) {
    
    structs_LinkedList__Node* this = ((structs_LinkedList__Node*) (lang_types__Class_alloc__class((lang_types__Class*) structs_LinkedList__Node_class())));
    this->T = T;
    structs_LinkedList__Node___defaults__(this);
    structs_LinkedList__Node_init((structs_LinkedList__Node*) this);
    return this;
}
structs_LinkedList__Node* structs_LinkedList__Node_new_withParams(lang_types__Class* T, structs_LinkedList__Node* prev, structs_LinkedList__Node* next, uint8_t* data) {
    
    structs_LinkedList__Node* this = ((structs_LinkedList__Node*) (lang_types__Class_alloc__class((lang_types__Class*) structs_LinkedList__Node_class())));
    this->T = T;
    structs_LinkedList__Node___defaults__(this);
    structs_LinkedList__Node_init_withParams((structs_LinkedList__Node*) this, prev, next, (uint8_t*) data);
    return this;
}
void structs_LinkedList__Node___load__() {
    lang_types__Class___load__();
}

structs_LinkedList__NodeClass *structs_LinkedList__Node_class(){
    static _Bool __done__ = false;
    static structs_LinkedList__NodeClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(structs_LinkedList__Node),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) structs_LinkedList__Node___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) structs_LinkedList__Node___load__,
            },
        },
        .new = (void*) structs_LinkedList__Node_new,
        .new_withParams = (void*) structs_LinkedList__Node_new_withParams,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Node", 4);
    }
    return &class;
}

void structs_LinkedList__LinkedListIterator_init_ll(structs_LinkedList__LinkedListIterator* this, structs_LinkedList__LinkedList* list) {
    this->list = list;
    this->current = list->head;
}

lang_types__Bool structs_LinkedList__LinkedListIterator_hasNext__quest_impl(structs_LinkedList__LinkedListIterator* this) {
    return (this->current->next != this->list->head);
}

void structs_LinkedList__LinkedListIterator_next_impl(structs_LinkedList__LinkedListIterator* this, uint8_t* __genericReturn114) {
    this->current = this->current->next;
    if (__genericReturn114) {
        lang_Memory__memcpy(__genericReturn114, this->current->data, ((lang_Iterators__Iterable*)this)->T->size);
    }
    return;
}

lang_types__Bool structs_LinkedList__LinkedListIterator_hasPrev__quest_impl(structs_LinkedList__LinkedListIterator* this) {
    return (this->current != this->list->head);
}

void structs_LinkedList__LinkedListIterator_prev_impl(structs_LinkedList__LinkedListIterator* this, uint8_t* __genericReturn115) {
    structs_LinkedList__Node* last = this->current;
    this->current = this->current->prev;
    if (__genericReturn115) {
        lang_Memory__memcpy(__genericReturn115, last->data, ((lang_Iterators__Iterable*)this)->T->size);
    }
    return;
}

lang_types__Bool structs_LinkedList__LinkedListIterator_remove_impl(structs_LinkedList__LinkedListIterator* this) {
    if (this->current == this->list->head) {
        return false;
    }
    structs_LinkedList__Node* old = this->current;
    if (structs_LinkedList__LinkedListIterator_hasNext__quest(this)) {
        this->current = this->current->next;
    }
    else {
        this->current = this->current->prev;
    }
    structs_LinkedList__LinkedList_removeNode(this->list, old);
    return true;
}

void structs_LinkedList__LinkedListIterator___defaults___impl(structs_LinkedList__LinkedListIterator* this) {
    lang_Iterators__BackIterator___defaults___impl((lang_Iterators__BackIterator*) this);
}

lang_types__Bool structs_LinkedList__LinkedListIterator_hasNext__quest(structs_LinkedList__LinkedListIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->hasNext__quest((lang_Iterators__Iterator*)this);
}

void structs_LinkedList__LinkedListIterator_next(structs_LinkedList__LinkedListIterator* this, uint8_t* __genericReturn114) {
    ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->next((lang_Iterators__Iterator*)this, __genericReturn114);
}

lang_types__Bool structs_LinkedList__LinkedListIterator_hasPrev__quest(structs_LinkedList__LinkedListIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->hasPrev__quest((lang_Iterators__BackIterator*)this);
}

void structs_LinkedList__LinkedListIterator_prev(structs_LinkedList__LinkedListIterator* this, uint8_t* __genericReturn115) {
    ((lang_Iterators__BackIteratorClass *)((lang_types__Object *)this)->class)->prev((lang_Iterators__BackIterator*)this, __genericReturn115);
}

lang_types__Bool structs_LinkedList__LinkedListIterator_remove(structs_LinkedList__LinkedListIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->remove((lang_Iterators__Iterator*)this);
}

void structs_LinkedList__LinkedListIterator___defaults__(structs_LinkedList__LinkedListIterator* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
structs_LinkedList__LinkedListIterator* structs_LinkedList__LinkedListIterator_new_ll(lang_types__Class* T, structs_LinkedList__LinkedList* list) {
    
    structs_LinkedList__LinkedListIterator* this = ((structs_LinkedList__LinkedListIterator*) (lang_types__Class_alloc__class((lang_types__Class*) structs_LinkedList__LinkedListIterator_class())));
    ((lang_Iterators__Iterable*)this)->T = T;
    structs_LinkedList__LinkedListIterator___defaults__(this);
    structs_LinkedList__LinkedListIterator_init_ll((structs_LinkedList__LinkedListIterator*) this, list);
    return this;
}
void structs_LinkedList__LinkedListIterator___load__() {
    lang_Iterators__BackIterator___load__();
}

structs_LinkedList__LinkedListIteratorClass *structs_LinkedList__LinkedListIterator_class(){
    static _Bool __done__ = false;
    static structs_LinkedList__LinkedListIteratorClass class = 
    {
        {
            {
                {
                    {
                        {
                            {
                                .instanceSize = sizeof(structs_LinkedList__LinkedListIterator),
                                .size = sizeof(void*)
                            },
                            .__defaults__ = (void*) structs_LinkedList__LinkedListIterator___defaults___impl,
                            .__destroy__ = (void*) lang_types__Object___destroy___impl,
                            .__load__ = (void*) structs_LinkedList__LinkedListIterator___load__,
                        },
                    },
                    .iterator = (void*) lang_Iterators__BackIterator_iterator_impl,
                    .toList = (void*) lang_Iterators__Iterable_toList_impl,
                    .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
                    .each = (void*) lang_Iterators__Iterable_each_impl,
                    .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
                    .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
                },
                .hasNext__quest = (void*) structs_LinkedList__LinkedListIterator_hasNext__quest_impl,
                .next = (void*) structs_LinkedList__LinkedListIterator_next_impl,
                .remove = (void*) structs_LinkedList__LinkedListIterator_remove_impl,
            },
            .hasPrev__quest = (void*) structs_LinkedList__LinkedListIterator_hasPrev__quest_impl,
            .prev = (void*) structs_LinkedList__LinkedListIterator_prev_impl,
            .reversed = (void*) lang_Iterators__BackIterator_reversed_impl,
        },
        .new_ll = (void*) structs_LinkedList__LinkedListIterator_new_ll,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__BackIterator_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("LinkedListIterator", 18);
    }
    return &class;
}
void structs_LinkedList_load() {
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
        os_Terminal_load();
        structs_LinkedList__LinkedList___load__();
        structs_LinkedList__Node___load__();
        structs_LinkedList__LinkedListIterator___load__();
        __strLit112 = (void*) lang_String__makeStringLiteral(" < ", 3);
        __strLit111 = (void*) lang_String__makeStringLiteral("Check index: 0 <= ", 18);
        __strLit107 = (void*) lang_String__makeStringLiteral(" < ", 3);
        __strLit106 = (void*) lang_String__makeStringLiteral("Check index: 0 <= ", 18);
        __strLit104 = (void*) lang_String__makeStringLiteral(" < ", 3);
        __strLit103 = (void*) lang_String__makeStringLiteral("Check index: 0 <= ", 18);
    }
}


void structs_LinkedList____OP_IDX_LinkedList_Int__T(uint8_t* __genericReturn102, lang_types__Class* T, structs_LinkedList__LinkedList* list, lang_Numbers__Int index) {
    structs_LinkedList__LinkedList_get(list, __genericReturn102, index);
    return;
}
