/* structs/List source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/structs/List.h>
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
#include <sdk/math/Random.h>
#include <sdk/structs/ArrayList.h>
#include <sdk/structs/HashMap.h>

static lang_String__String* __strLit217;
static lang_String__String* __strLit73;

void structs_List__List_init(structs_List__List* this) {
    lang_Iterators__BackIterable_init((lang_Iterators__BackIterable*) this);
}

void structs_List__List_addAll_impl(structs_List__List* this, lang_Iterators__Iterable* list) {
    structs_List__List_addAll_atStart(this, 0, list);
}

void structs_List__List_addAll_atStart_impl(structs_List__List* this, lang_Numbers__SSizeT start, lang_Iterators__Iterable* list) {
    if (start == 0) {
        
        {
            uint8_t* element = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
            
            {
                lang_Iterators__Iterator* __iter74 = lang_Iterators__Iterable_iterator(list);
                while (lang_Iterators__Iterator_hasNext__quest(__iter74)) {
                    lang_Iterators__Iterator_next(__iter74, element);
                    structs_List__List_add(this, (uint8_t*) element);
                }
            }
        }
        return;
    }
    lang_Numbers__SSizeT index = 0;
    lang_Iterators__Iterator* iter = lang_Iterators__Iterable_iterator(list);
    while (index < start) {
        lang_Iterators__Iterator_next(iter, NULL);
        index += 1;
    }
    while (lang_Iterators__Iterator_hasNext__quest(iter)) {
        uint8_t* __genCall75 = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
        structs_List__List_add(this, (uint8_t*) (lang_Iterators__Iterator_next(iter, __genCall75), __genCall75));
    }
}

lang_types__Bool structs_List__List_removeLast_impl(structs_List__List* this) {
    lang_Numbers__SizeT mysize = structs_List__List_getSize(this);
    if (mysize > (lang_Numbers__SizeT) 0) {
        structs_List__List_removeAt(this, NULL, mysize - 1);
        return true;
    }
    return false;
}

lang_types__Bool structs_List__List_contains__quest_impl(structs_List__List* this, uint8_t* element) {
    return structs_List__List_indexOf(this, (uint8_t*) element) != (lang_Numbers__Int) -1;
}

lang_types__Bool structs_List__List_contains__quest_filter_impl(structs_List__List* this, lang_types__Closure f) {
    lang_types__Bool result = false;
    __structs_List_closure262_ctx* __ctx263 = lang_Memory__gc_malloc(((lang_types__Class*)__structs_List_closure262_ctx_class())->size);
    (*(__ctx263)) = (__structs_List_closure262_ctx) { 
        f, 
        &(result)
    };
    lang_types__Closure __closure264 = (lang_types__Closure) { 
        structs_List____structs_List_closure262_thunk, 
        __ctx263
    };
    lang_Iterators__Iterable_eachUntil((lang_Iterators__Iterable*) this, __closure264);
    return result;
}

lang_types__Bool structs_List__List_replace_impl(structs_List__List* this, uint8_t* oldie, uint8_t* kiddo) {
    lang_Numbers__Int idx = structs_List__List_indexOf(this, (uint8_t*) oldie);
    if (idx == (lang_Numbers__Int) -1) {
        return false;
    }
    structs_List__List_set(this, NULL, idx, (uint8_t*) kiddo);
    return true;
}

lang_types__Bool structs_List__List_empty__quest_impl(structs_List__List* this) {
    return structs_List__List_getSize(this) == (lang_Numbers__SizeT) 0;
}

structs_List__List* structs_List__List_emptyClone_defaults_impl(structs_List__List* this) {
    return structs_List__List_emptyClone(this, ((lang_Iterators__Iterable*)this)->T);
}

void structs_List__List_split_impl(structs_List__List* this, lang_types__Closure f, structs_List__List** list1, structs_List__List** list2) {
    (*list1) = structs_List__List_emptyClone_defaults(this);
    (*list2) = structs_List__List_clone(this);
    
    {
        uint8_t* x = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
        
        {
            lang_Iterators__BackIterator* __iter76 = structs_List__List_iterator(this);
            while (lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) __iter76)) {
                lang_Iterators__Iterator_next((lang_Iterators__Iterator*) __iter76, x);
                if (((lang_types__Bool (*)(uint8_t*, void*)) f.thunk)((uint8_t*) x, f.context)) {
                    structs_List__List_remove((structs_List__List*) (*list2), (uint8_t*) x);
                    structs_List__List_add((structs_List__List*) (*list1), (uint8_t*) x);
                }
            }
        }
    }
}

structs_List__List* structs_List__List_shuffle_impl(structs_List__List* this) {
    structs_List__List* shuffled = structs_List__List_emptyClone_defaults(this);
    structs_ArrayList__ArrayList* indexes = structs_ArrayList__ArrayList_new((lang_types__Class*)lang_Numbers__SSizeT_class());
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < structs_List__List_getSize(this); i++) {
            structs_ArrayList__ArrayList_add(indexes, (uint8_t*) &(i));
        }
    }
    while (!structs_List__List_empty__quest((structs_List__List*) indexes)) {
        lang_Numbers__Int i = math_Random__Random_randRange(0, structs_ArrayList__ArrayList_getSize(indexes));
        lang_Numbers__SSizeT __genCall215;
        uint8_t* __genCall216 = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
        structs_List__List_add(shuffled, (uint8_t*) (structs_List____OP_IDX_List_SSizeT__T(__genCall216, (lang_types__Class*)((lang_Iterators__Iterable*)this)->T, this, ((lang_Numbers__SSizeT) ((structs_ArrayList__ArrayList_removeAt(indexes, (uint8_t*) &(__genCall215), i), __genCall215)))), __genCall216));
    }
    return shuffled;
}

void structs_List__List_first_impl(structs_List__List* this, uint8_t* __genericReturn70) {
    structs_List__List_get(this, __genericReturn70, 0);
    return;
}

void structs_List__List_last_impl(structs_List__List* this, uint8_t* __genericReturn71) {
    structs_List__List_get(this, __genericReturn71, structs_List__List_lastIndex(this));
    return;
}

lang_Numbers__SSizeT structs_List__List_lastIndex_impl(structs_List__List* this) {
    return ((lang_Numbers__SSizeT) (structs_List__List_getSize(this) - 1));
}

void structs_List__List_reverse__bang_impl(structs_List__List* this) {
    lang_Numbers__SSizeT i = 0;
    lang_Numbers__SSizeT j = structs_List__List___getsize__(this) - 1;
    lang_Numbers__SSizeT limit = j / 2;
    while (i <= limit) {
        uint8_t* __genCall72 = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
        uint8_t* __genCall77 = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
        structs_List__List_set(this, NULL, i, (uint8_t*) (structs_List__List_set(this, __genCall77, j, (uint8_t*) (structs_List__List_get(this, __genCall72, i), __genCall72)), __genCall77));
        i += 1;
        j -= 1;
    }
}

structs_List__List* structs_List__List_reverse_impl(structs_List__List* this) {
    structs_List__List* copy = structs_List__List_clone(this);
    structs_List__List_reverse__bang(copy);
    return copy;
}

lang_types__Pointer structs_List__List_toArray_impl(structs_List__List* this) {
    uint8_t* arr = lang_Memory__gc_malloc(structs_List__List_getSize(this) * ((lang_Iterators__Iterable*)this)->T->size);
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < structs_List__List_getSize(this); i++) {
            structs_List____OP_IDX_List_SSizeT__T(&(arr[(i) * ((lang_Iterators__Iterable*)this)->T->size]), (lang_types__Class*)((lang_Iterators__Iterable*)this)->T, this, i);
        }
    }
    return ((lang_types__Pointer) (arr));
}

structs_List__List* structs_List__List_map_impl(structs_List__List* this, lang_types__Class* K, lang_types__Closure f) {
    structs_List__List* copy = structs_List__List_emptyClone(this, K);
    __structs_List_closure265_ctx* __ctx266 = lang_Memory__gc_malloc(((lang_types__Class*)__structs_List_closure265_ctx_class())->size);
    (*(__ctx266)) = (__structs_List_closure265_ctx) { 
        f, 
        copy, 
        K
    };
    lang_types__Closure __closure267 = (lang_types__Closure) { 
        structs_List____structs_List_closure265_thunk, 
        __ctx266
    };
    lang_Iterators__Iterable_each((lang_Iterators__Iterable*) this, __closure267);
    return copy;
}

structs_List__List* structs_List__List_filter_impl(structs_List__List* this, lang_types__Closure f) {
    structs_List__List* copy = structs_List__List_emptyClone_defaults(this);
    __structs_List_closure268_ctx* __ctx269 = lang_Memory__gc_malloc(((lang_types__Class*)__structs_List_closure268_ctx_class())->size);
    (*(__ctx269)) = (__structs_List_closure268_ctx) { 
        f, 
        copy
    };
    lang_types__Closure __closure270 = (lang_types__Closure) { 
        structs_List____structs_List_closure268_thunk, 
        __ctx269
    };
    lang_Iterators__Iterable_each((lang_Iterators__Iterable*) this, __closure270);
    return copy;
}

void structs_List__List_filterEach_impl(structs_List__List* this, lang_types__Closure f, lang_types__Closure g) {
    lang_Iterators__Iterable_each((lang_Iterators__Iterable*) structs_List__List_filter(this, f), g);
}

lang_Numbers__SizeT structs_List__List_itemsSizeInBytes_impl(structs_List__List* this) {
    lang_Numbers__SSizeT result = 0;
    
    {
        uint8_t* item = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
        
        {
            lang_Iterators__BackIterator* __iter78 = structs_List__List_iterator(this);
            while (lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) __iter78)) {
                lang_Iterators__Iterator_next((lang_Iterators__Iterator*) __iter78, item);
                if (((lang_Iterators__Iterable*)this)->T == (lang_types__Class*) lang_String__String_class()) {
                    result += (* (lang_String__String**)item)->_buffer->size;
                }
                else if (((lang_Iterators__Iterable*)this)->T == (lang_types__Class*) lang_Buffer__Buffer_class()) {
                    result += (* (lang_Buffer__Buffer**)item)->size;
                }
                else if (((lang_Iterators__Iterable*)this)->T == (lang_types__Class*) lang_Character__Char_class()) {
                    result += 1;
                }
                else {
                    result += ((lang_Iterators__Iterable*)this)->T->size;
                }
            }
        }
    }
    return ((lang_Numbers__SizeT) (result));
}

lang_String__String* structs_List__List_join_stringDefault_impl(structs_List__List* this) {
    return structs_List__List_join_string(this, __strLit73);
}

lang_String__String* structs_List__List_join_string_impl(structs_List__List* this, lang_String__String* str) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_new(structs_List__List_itemsSizeInBytes(this));
    lang_types__Bool first = true;
    
    {
        uint8_t* item = lang_Memory__gc_malloc(((lang_Iterators__Iterable*)this)->T->size);
        
        {
            lang_Iterators__BackIterator* __iter79 = structs_List__List_iterator(this);
            while (lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) __iter79)) {
                lang_Iterators__Iterator_next((lang_Iterators__Iterator*) __iter79, item);
                if (first) {
                    first = false;
                }
                else {
                    lang_Buffer__Buffer_append_buf(result, str->_buffer);
                }
                if (((lang_Iterators__Iterable*)this)->T == (lang_types__Class*) lang_String__String_class()){
                    lang_Buffer__Buffer_append_buf(result, ((* (lang_String__String**)item))->_buffer);
                } else if (((lang_Iterators__Iterable*)this)->T == (lang_types__Class*) lang_Buffer__Buffer_class()){
                    lang_Buffer__Buffer_append_buf(result, (* (lang_Buffer__Buffer**)item));
                } else if (((lang_Iterators__Iterable*)this)->T == (lang_types__Class*) lang_Character__Char_class()){
                    lang_Buffer__Buffer_append_char(result, (* (lang_Character__Char*)item));
                } else {
                    struct { 
                        lang_types__Pointer __f1;
                        lang_Character__CString __f2;
                    } ____va_args260 = { 
                        lang_Character__CString_class(), 
                        lang_String__String_toCString(((lang_Iterators__Iterable*)this)->T->name)
                    };
                    lang_VarArgs__VarArgs ____va261 = (lang_VarArgs__VarArgs) { 
                        (void*) &(____va_args260), 
                        NULL, 
                        1
                    };
                    lang_Exception__Exception_throw(lang_Exception__Exception_new_noOrigin(lang_String__String_format((lang_String__String*) __strLit217, ____va261)));
                };
            }
        }
    }
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* structs_List__List_join_char_impl(structs_List__List* this, lang_Character__Char chr) {
    return structs_List__List_join_string(this, lang_Character__Char_toString(chr));
}

lang_Numbers__SSizeT structs_List__List___getsize___impl(structs_List__List* this) {
    return ((lang_Numbers__SSizeT) (structs_List__List_getSize(this)));
}

void structs_List__List___defaults___impl(structs_List__List* this) {
    lang_Iterators__BackIterable___defaults___impl((lang_Iterators__BackIterable*) this);
    this->equals__quest = structs_HashMap__getStandardEquals(((lang_Iterators__Iterable*)this)->T);
}

void structs_List__List_add(structs_List__List* this, uint8_t* element) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->add((structs_List__List*)this, element);
}

void structs_List__List_add_withIndex(structs_List__List* this, lang_Numbers__SSizeT index, uint8_t* element) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->add_withIndex((structs_List__List*)this, index, element);
}

void structs_List__List_addAll(structs_List__List* this, lang_Iterators__Iterable* list) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->addAll((structs_List__List*)this, list);
}

void structs_List__List_addAll_atStart(structs_List__List* this, lang_Numbers__SSizeT start, lang_Iterators__Iterable* list) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->addAll_atStart((structs_List__List*)this, start, list);
}

void structs_List__List_clear(structs_List__List* this) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->clear((structs_List__List*)this);
}

lang_types__Bool structs_List__List_removeLast(structs_List__List* this) {
    return (lang_types__Bool) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->removeLast((structs_List__List*)this);
}

lang_types__Bool structs_List__List_contains__quest(structs_List__List* this, uint8_t* element) {
    return (lang_types__Bool) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->contains__quest((structs_List__List*)this, element);
}

lang_types__Bool structs_List__List_contains__quest_filter(structs_List__List* this, lang_types__Closure f) {
    return (lang_types__Bool) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->contains__quest_filter((structs_List__List*)this, f);
}

lang_types__Bool structs_List__List_replace(structs_List__List* this, uint8_t* oldie, uint8_t* kiddo) {
    return (lang_types__Bool) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->replace((structs_List__List*)this, oldie, kiddo);
}

void structs_List__List_get(structs_List__List* this, uint8_t* __genericReturn67, lang_Numbers__SSizeT index) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->get((structs_List__List*)this, __genericReturn67, index);
}

lang_Numbers__Int structs_List__List_indexOf(structs_List__List* this, uint8_t* element) {
    return (lang_Numbers__Int) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->indexOf((structs_List__List*)this, element);
}

lang_types__Bool structs_List__List_empty__quest(structs_List__List* this) {
    return (lang_types__Bool) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->empty__quest((structs_List__List*)this);
}

lang_Numbers__Int structs_List__List_lastIndexOf(structs_List__List* this, uint8_t* element) {
    return (lang_Numbers__Int) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->lastIndexOf((structs_List__List*)this, element);
}

void structs_List__List_removeAt(structs_List__List* this, uint8_t* __genericReturn68, lang_Numbers__SSizeT index) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->removeAt((structs_List__List*)this, __genericReturn68, index);
}

lang_types__Bool structs_List__List_remove(structs_List__List* this, uint8_t* element) {
    return (lang_types__Bool) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->remove((structs_List__List*)this, element);
}

void structs_List__List_set(structs_List__List* this, uint8_t* __genericReturn69, lang_Numbers__SSizeT index, uint8_t* element) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->set((structs_List__List*)this, __genericReturn69, index, element);
}

lang_Numbers__SizeT structs_List__List_getSize(structs_List__List* this) {
    return (lang_Numbers__SizeT) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->getSize((structs_List__List*)this);
}

lang_Iterators__BackIterator* structs_List__List_iterator(structs_List__List* this) {
    return (lang_Iterators__BackIterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

structs_List__List* structs_List__List_clone(structs_List__List* this) {
    return (structs_List__List*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->clone((structs_List__List*)this);
}

structs_List__List* structs_List__List_emptyClone(structs_List__List* this, lang_types__Class* K) {
    return (structs_List__List*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->emptyClone((structs_List__List*)this, K);
}

structs_List__List* structs_List__List_emptyClone_defaults(structs_List__List* this) {
    return (structs_List__List*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->emptyClone_defaults((structs_List__List*)this);
}

void structs_List__List_split(structs_List__List* this, lang_types__Closure f, structs_List__List** list1, structs_List__List** list2) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->split((structs_List__List*)this, f, list1, list2);
}

structs_List__List* structs_List__List_shuffle(structs_List__List* this) {
    return (structs_List__List*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->shuffle((structs_List__List*)this);
}

void structs_List__List_first(structs_List__List* this, uint8_t* __genericReturn70) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->first((structs_List__List*)this, __genericReturn70);
}

void structs_List__List_last(structs_List__List* this, uint8_t* __genericReturn71) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->last((structs_List__List*)this, __genericReturn71);
}

lang_Numbers__SSizeT structs_List__List_lastIndex(structs_List__List* this) {
    return (lang_Numbers__SSizeT) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->lastIndex((structs_List__List*)this);
}

void structs_List__List_reverse__bang(structs_List__List* this) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->reverse__bang((structs_List__List*)this);
}

structs_List__List* structs_List__List_reverse(structs_List__List* this) {
    return (structs_List__List*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->reverse((structs_List__List*)this);
}

lang_types__Pointer structs_List__List_toArray(structs_List__List* this) {
    return (lang_types__Pointer) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->toArray((structs_List__List*)this);
}

structs_List__List* structs_List__List_map(structs_List__List* this, lang_types__Class* K, lang_types__Closure f) {
    return (structs_List__List*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->map((structs_List__List*)this, K, f);
}

structs_List__List* structs_List__List_filter(structs_List__List* this, lang_types__Closure f) {
    return (structs_List__List*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->filter((structs_List__List*)this, f);
}

void structs_List__List_filterEach(structs_List__List* this, lang_types__Closure f, lang_types__Closure g) {
    ((structs_List__ListClass *)((lang_types__Object *)this)->class)->filterEach((structs_List__List*)this, f, g);
}

lang_Numbers__SizeT structs_List__List_itemsSizeInBytes(structs_List__List* this) {
    return (lang_Numbers__SizeT) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->itemsSizeInBytes((structs_List__List*)this);
}

lang_String__String* structs_List__List_join_stringDefault(structs_List__List* this) {
    return (lang_String__String*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->join_stringDefault((structs_List__List*)this);
}

lang_String__String* structs_List__List_join_string(structs_List__List* this, lang_String__String* str) {
    return (lang_String__String*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->join_string((structs_List__List*)this, str);
}

lang_String__String* structs_List__List_join_char(structs_List__List* this, lang_Character__Char chr) {
    return (lang_String__String*) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->join_char((structs_List__List*)this, chr);
}

lang_Numbers__SSizeT structs_List__List___getsize__(structs_List__List* this) {
    return (lang_Numbers__SSizeT) ((structs_List__ListClass *)((lang_types__Object *)this)->class)->__getsize__((structs_List__List*)this);
}

void structs_List__List___defaults__(structs_List__List* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
void structs_List__List___load__() {
    lang_Iterators__BackIterable___load__();
}

structs_List__ListClass *structs_List__List_class(){
    static _Bool __done__ = false;
    static structs_List__ListClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(structs_List__List),
                            .size = sizeof(void*)
                        },
                        .__defaults__ = (void*) structs_List__List___defaults___impl,
                        .__destroy__ = (void*) lang_types__Object___destroy___impl,
                        .__load__ = (void*) structs_List__List___load__,
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
        },
        .add = (void*) structs_List__List_add,
        .add_withIndex = (void*) structs_List__List_add_withIndex,
        .addAll = (void*) structs_List__List_addAll_impl,
        .addAll_atStart = (void*) structs_List__List_addAll_atStart_impl,
        .clear = (void*) structs_List__List_clear,
        .removeLast = (void*) structs_List__List_removeLast_impl,
        .contains__quest = (void*) structs_List__List_contains__quest_impl,
        .contains__quest_filter = (void*) structs_List__List_contains__quest_filter_impl,
        .replace = (void*) structs_List__List_replace_impl,
        .get = (void*) structs_List__List_get,
        .indexOf = (void*) structs_List__List_indexOf,
        .empty__quest = (void*) structs_List__List_empty__quest_impl,
        .lastIndexOf = (void*) structs_List__List_lastIndexOf,
        .removeAt = (void*) structs_List__List_removeAt,
        .remove = (void*) structs_List__List_remove,
        .set = (void*) structs_List__List_set,
        .getSize = (void*) structs_List__List_getSize,
        .clone = (void*) structs_List__List_clone,
        .emptyClone = (void*) structs_List__List_emptyClone,
        .emptyClone_defaults = (void*) structs_List__List_emptyClone_defaults_impl,
        .split = (void*) structs_List__List_split_impl,
        .shuffle = (void*) structs_List__List_shuffle_impl,
        .first = (void*) structs_List__List_first_impl,
        .last = (void*) structs_List__List_last_impl,
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
        .__getsize__ = (void*) structs_List__List___getsize___impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__BackIterable_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("List", 4);
    }
    return &class;
}
void __structs_List_closure262_ctx___load__() {
    lang_types__Class___load__();
}

__structs_List_closure262_ctxClass *__structs_List_closure262_ctx_class(){
    static _Bool __done__ = false;
    static __structs_List_closure262_ctxClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(__structs_List_closure262_ctx),
                    .size = sizeof(__structs_List_closure262_ctx)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) __structs_List_closure262_ctx___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("__structs_List_closure262_ctx", 29);
    }
    return &class;
}
void __structs_List_closure265_ctx___load__() {
    lang_types__Class___load__();
}

__structs_List_closure265_ctxClass *__structs_List_closure265_ctx_class(){
    static _Bool __done__ = false;
    static __structs_List_closure265_ctxClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(__structs_List_closure265_ctx),
                    .size = sizeof(__structs_List_closure265_ctx)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) __structs_List_closure265_ctx___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("__structs_List_closure265_ctx", 29);
    }
    return &class;
}
void __structs_List_closure268_ctx___load__() {
    lang_types__Class___load__();
}

__structs_List_closure268_ctxClass *__structs_List_closure268_ctx_class(){
    static _Bool __done__ = false;
    static __structs_List_closure268_ctxClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(__structs_List_closure268_ctx),
                    .size = sizeof(__structs_List_closure268_ctx)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) __structs_List_closure268_ctx___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("__structs_List_closure268_ctx", 29);
    }
    return &class;
}
void structs_List_load() {
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
        math_Random_load();
        structs_ArrayList_load();
        structs_HashMap_load();
        structs_List__List___load__();
        __structs_List_closure262_ctx___load__();
        __structs_List_closure265_ctx___load__();
        __structs_List_closure268_ctx___load__();
        __strLit217 = (void*) lang_String__makeStringLiteral("You cannot use `List join` with %s instances.", 45);
        __strLit73 = (void*) lang_String__makeStringLiteral("", 0);
    }
}


lang_types__Bool structs_List____structs_List_closure262(lang_types__Closure f, lang_types__Bool* result, uint8_t* elem) {
    (*result) |= ((lang_types__Bool (*)(uint8_t*, void*)) f.thunk)((uint8_t*) elem, f.context);
    return !(*result);
}

lang_types__Bool structs_List____structs_List_closure262_thunk(uint8_t* elem, __structs_List_closure262_ctx* __context__) {
    return structs_List____structs_List_closure262((*__context__).f, (*__context__).result, (uint8_t*) elem);
}

void structs_List____structs_List_closure265(lang_types__Closure f, structs_List__List* copy, lang_types__Class* K, uint8_t* x) {
    uint8_t* __genCall219 = lang_Memory__gc_malloc(K->size);
    structs_List__List_add(copy, (uint8_t*) (((void (*)(uint8_t*, uint8_t*, void*)) f.thunk)(__genCall219, (uint8_t*) x, f.context), __genCall219));
}

void structs_List____structs_List_closure265_thunk(uint8_t* x, __structs_List_closure265_ctx* __context__) {
    structs_List____structs_List_closure265((*__context__).f, (*__context__).copy, (*__context__).K, (uint8_t*) x);
}

void structs_List____structs_List_closure268(lang_types__Closure f, structs_List__List* copy, uint8_t* x) {
    if (((lang_types__Bool (*)(uint8_t*, void*)) f.thunk)((uint8_t*) x, f.context)) {
        structs_List__List_add(copy, (uint8_t*) x);
    }
}

void structs_List____structs_List_closure268_thunk(uint8_t* x, __structs_List_closure268_ctx* __context__) {
    structs_List____structs_List_closure268((*__context__).f, (*__context__).copy, (uint8_t*) x);
}

void structs_List____OP_IDX_List_SSizeT__T(uint8_t* __genericReturn66, lang_types__Class* T, structs_List__List* list, lang_Numbers__SSizeT i) {
    structs_List__List_get(list, __genericReturn66, i);
    return;
}

void structs_List____OP_IDX_ASS_List_SSizeT_T(lang_types__Class* T, structs_List__List* list, lang_Numbers__SSizeT i, uint8_t* element) {
    structs_List__List_set(list, NULL, i, (uint8_t*) element);
}

void structs_List____OP_ADD_ASS_List_T(lang_types__Class* T, structs_List__List* list, uint8_t* element) {
    structs_List__List_add(list, (uint8_t*) element);
}

lang_types__Bool structs_List____OP_SUB_ASS_List_T__Bool(lang_types__Class* T, structs_List__List* list, uint8_t* element) {
    return structs_List__List_remove(list, (uint8_t*) element);
}
