/* text/StringTokenizer source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/text/StringTokenizer.h>
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


void text_StringTokenizer__StringTokenizer_init_withCharWithoutmaxTokens(text_StringTokenizer__StringTokenizer* this, lang_String__String* input, lang_Character__Char delim) {
    text_StringTokenizer__StringTokenizer_init_withChar((text_StringTokenizer__StringTokenizer*) this, input, delim, -1);
}

void text_StringTokenizer__StringTokenizer_init_withStringWithoutmaxTokens(text_StringTokenizer__StringTokenizer* this, lang_String__String* input, lang_String__String* delim) {
    text_StringTokenizer__StringTokenizer_init_withString((text_StringTokenizer__StringTokenizer*) this, input, delim, -1);
}

void text_StringTokenizer__StringTokenizer_init_withChar(text_StringTokenizer__StringTokenizer* this, lang_String__String* input, lang_Character__Char delim, lang_Numbers__SSizeT maxTokens) {
    text_StringTokenizer__StringTokenizer_init_withString((text_StringTokenizer__StringTokenizer*) this, input, lang_Character__Char_toString(delim), maxTokens);
}

void text_StringTokenizer__StringTokenizer_init_withString(text_StringTokenizer__StringTokenizer* this, lang_String__String* input, lang_String__String* delim, lang_Numbers__SSizeT maxTokens) {
    this->splitted = lang_String__String_split_str((lang_String__String*) input, delim, maxTokens);
}

lang_Iterators__Iterator* text_StringTokenizer__StringTokenizer_iterator_impl(text_StringTokenizer__StringTokenizer* this) {
    return ((lang_Iterators__Iterator*) (text_StringTokenizer__StringTokenizerIterator_new_sti((lang_types__Class*)lang_String__String_class(), this)));
}

lang_types__Bool text_StringTokenizer__StringTokenizer_hasNext__quest_impl(text_StringTokenizer__StringTokenizer* this) {
    return this->index < structs_ArrayList__ArrayList___getsize__(this->splitted);
}

lang_String__String* text_StringTokenizer__StringTokenizer_nextToken_impl(text_StringTokenizer__StringTokenizer* this) {
    if (!text_StringTokenizer__StringTokenizer_hasNext__quest(this)) {
        return lang_Character____OP_AS_Char__star__String(NULL);
    }
    this->index += 1;
    lang_String__String* __genCall246 = NULL;
    return (structs_ArrayList____OP_IDX_ArrayList_Int__T((uint8_t*) &(__genCall246), (lang_types__Class*)lang_String__String_class(), this->splitted, this->index - 1), __genCall246);
}

void text_StringTokenizer__StringTokenizer___defaults___impl(text_StringTokenizer__StringTokenizer* this) {
    ((lang_Iterators__Iterable*) this)->T = (void*) lang_String__String_class();
    lang_Iterators__Iterable___defaults___impl((lang_Iterators__Iterable*) this);
    this->index = 0;
}

lang_Iterators__Iterator* text_StringTokenizer__StringTokenizer_iterator(text_StringTokenizer__StringTokenizer* this) {
    return (lang_Iterators__Iterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

lang_types__Bool text_StringTokenizer__StringTokenizer_hasNext__quest(text_StringTokenizer__StringTokenizer* this) {
    return (lang_types__Bool) ((text_StringTokenizer__StringTokenizerClass *)((lang_types__Object *)this)->class)->hasNext__quest((text_StringTokenizer__StringTokenizer*)this);
}

lang_String__String* text_StringTokenizer__StringTokenizer_nextToken(text_StringTokenizer__StringTokenizer* this) {
    return (lang_String__String*) ((text_StringTokenizer__StringTokenizerClass *)((lang_types__Object *)this)->class)->nextToken((text_StringTokenizer__StringTokenizer*)this);
}

void text_StringTokenizer__StringTokenizer___defaults__(text_StringTokenizer__StringTokenizer* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
text_StringTokenizer__StringTokenizer* text_StringTokenizer__StringTokenizer_new_withCharWithoutmaxTokens(lang_String__String* input, lang_Character__Char delim) {
    
    text_StringTokenizer__StringTokenizer* this = ((text_StringTokenizer__StringTokenizer*) (lang_types__Class_alloc__class((lang_types__Class*) text_StringTokenizer__StringTokenizer_class())));
    text_StringTokenizer__StringTokenizer___defaults__(this);
    text_StringTokenizer__StringTokenizer_init_withCharWithoutmaxTokens((text_StringTokenizer__StringTokenizer*) this, input, delim);
    return this;
}
text_StringTokenizer__StringTokenizer* text_StringTokenizer__StringTokenizer_new_withStringWithoutmaxTokens(lang_String__String* input, lang_String__String* delim) {
    
    text_StringTokenizer__StringTokenizer* this = ((text_StringTokenizer__StringTokenizer*) (lang_types__Class_alloc__class((lang_types__Class*) text_StringTokenizer__StringTokenizer_class())));
    text_StringTokenizer__StringTokenizer___defaults__(this);
    text_StringTokenizer__StringTokenizer_init_withStringWithoutmaxTokens((text_StringTokenizer__StringTokenizer*) this, input, delim);
    return this;
}
text_StringTokenizer__StringTokenizer* text_StringTokenizer__StringTokenizer_new_withChar(lang_String__String* input, lang_Character__Char delim, lang_Numbers__SSizeT maxTokens) {
    
    text_StringTokenizer__StringTokenizer* this = ((text_StringTokenizer__StringTokenizer*) (lang_types__Class_alloc__class((lang_types__Class*) text_StringTokenizer__StringTokenizer_class())));
    text_StringTokenizer__StringTokenizer___defaults__(this);
    text_StringTokenizer__StringTokenizer_init_withChar((text_StringTokenizer__StringTokenizer*) this, input, delim, maxTokens);
    return this;
}
text_StringTokenizer__StringTokenizer* text_StringTokenizer__StringTokenizer_new_withString(lang_String__String* input, lang_String__String* delim, lang_Numbers__SSizeT maxTokens) {
    
    text_StringTokenizer__StringTokenizer* this = ((text_StringTokenizer__StringTokenizer*) (lang_types__Class_alloc__class((lang_types__Class*) text_StringTokenizer__StringTokenizer_class())));
    text_StringTokenizer__StringTokenizer___defaults__(this);
    text_StringTokenizer__StringTokenizer_init_withString((text_StringTokenizer__StringTokenizer*) this, input, delim, maxTokens);
    return this;
}
void text_StringTokenizer__StringTokenizer___load__() {
    lang_Iterators__Iterable___load__();
}

text_StringTokenizer__StringTokenizerClass *text_StringTokenizer__StringTokenizer_class(){
    static _Bool __done__ = false;
    static text_StringTokenizer__StringTokenizerClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(text_StringTokenizer__StringTokenizer),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) text_StringTokenizer__StringTokenizer___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) text_StringTokenizer__StringTokenizer___load__,
                },
            },
            .iterator = (void*) text_StringTokenizer__StringTokenizer_iterator_impl,
            .toList = (void*) lang_Iterators__Iterable_toList_impl,
            .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
            .each = (void*) lang_Iterators__Iterable_each_impl,
            .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
            .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
        },
        .new_withCharWithoutmaxTokens = (void*) text_StringTokenizer__StringTokenizer_new_withCharWithoutmaxTokens,
        .new_withStringWithoutmaxTokens = (void*) text_StringTokenizer__StringTokenizer_new_withStringWithoutmaxTokens,
        .new_withChar = (void*) text_StringTokenizer__StringTokenizer_new_withChar,
        .new_withString = (void*) text_StringTokenizer__StringTokenizer_new_withString,
        .hasNext__quest = (void*) text_StringTokenizer__StringTokenizer_hasNext__quest_impl,
        .nextToken = (void*) text_StringTokenizer__StringTokenizer_nextToken_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__Iterable_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("StringTokenizer", 15);
    }
    return &class;
}

void text_StringTokenizer__StringTokenizerIterator_init_sti(text_StringTokenizer__StringTokenizerIterator* this, text_StringTokenizer__StringTokenizer* st) {
    this->st = st;
}

lang_types__Bool text_StringTokenizer__StringTokenizerIterator_hasNext__quest_impl(text_StringTokenizer__StringTokenizerIterator* this) {
    return text_StringTokenizer__StringTokenizer_hasNext__quest(this->st);
}

void text_StringTokenizer__StringTokenizerIterator_next_impl(text_StringTokenizer__StringTokenizerIterator* this, uint8_t* __genericReturn151) {
    lang_String__String* __returnVal153 = text_StringTokenizer__StringTokenizer_nextToken(this->st);
    if (__genericReturn151) {
        lang_Memory__memcpy(__genericReturn151, &(__returnVal153), ((lang_types__Class*)lang_String__String_class())->size);
    }
    return;
}

lang_types__Bool text_StringTokenizer__StringTokenizerIterator_hasPrev__quest_impl(text_StringTokenizer__StringTokenizerIterator* this) {
    return false;
}

void text_StringTokenizer__StringTokenizerIterator_prev_impl(text_StringTokenizer__StringTokenizerIterator* this, uint8_t* __genericReturn152) {
    if (__genericReturn152) {
        lang_types__Pointer __unreferencable247 = NULL;
        lang_Memory__memcpy(__genericReturn152, &(__unreferencable247), ((lang_types__Class*)lang_types__Pointer_class())->size);
    }
    return;
}

lang_types__Bool text_StringTokenizer__StringTokenizerIterator_remove_impl(text_StringTokenizer__StringTokenizerIterator* this) {
    return false;
}

void text_StringTokenizer__StringTokenizerIterator___defaults___impl(text_StringTokenizer__StringTokenizerIterator* this) {
    lang_Iterators__Iterator___defaults___impl((lang_Iterators__Iterator*) this);
    this->index = 0;
}

lang_types__Bool text_StringTokenizer__StringTokenizerIterator_hasNext__quest(text_StringTokenizer__StringTokenizerIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->hasNext__quest((lang_Iterators__Iterator*)this);
}

void text_StringTokenizer__StringTokenizerIterator_next(text_StringTokenizer__StringTokenizerIterator* this, uint8_t* __genericReturn151) {
    ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->next((lang_Iterators__Iterator*)this, __genericReturn151);
}

lang_types__Bool text_StringTokenizer__StringTokenizerIterator_hasPrev__quest(text_StringTokenizer__StringTokenizerIterator* this) {
    return (lang_types__Bool) ((text_StringTokenizer__StringTokenizerIteratorClass *)((lang_types__Object *)this)->class)->hasPrev__quest((text_StringTokenizer__StringTokenizerIterator*)this);
}

void text_StringTokenizer__StringTokenizerIterator_prev(text_StringTokenizer__StringTokenizerIterator* this, uint8_t* __genericReturn152) {
    ((text_StringTokenizer__StringTokenizerIteratorClass *)((lang_types__Object *)this)->class)->prev((text_StringTokenizer__StringTokenizerIterator*)this, __genericReturn152);
}

lang_types__Bool text_StringTokenizer__StringTokenizerIterator_remove(text_StringTokenizer__StringTokenizerIterator* this) {
    return (lang_types__Bool) ((lang_Iterators__IteratorClass *)((lang_types__Object *)this)->class)->remove((lang_Iterators__Iterator*)this);
}

void text_StringTokenizer__StringTokenizerIterator___defaults__(text_StringTokenizer__StringTokenizerIterator* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
text_StringTokenizer__StringTokenizerIterator* text_StringTokenizer__StringTokenizerIterator_new_sti(lang_types__Class* T, text_StringTokenizer__StringTokenizer* st) {
    
    text_StringTokenizer__StringTokenizerIterator* this = ((text_StringTokenizer__StringTokenizerIterator*) (lang_types__Class_alloc__class((lang_types__Class*) text_StringTokenizer__StringTokenizerIterator_class())));
    ((lang_Iterators__Iterable*)this)->T = T;
    text_StringTokenizer__StringTokenizerIterator___defaults__(this);
    text_StringTokenizer__StringTokenizerIterator_init_sti((text_StringTokenizer__StringTokenizerIterator*) this, st);
    return this;
}
void text_StringTokenizer__StringTokenizerIterator___load__() {
    lang_Iterators__Iterator___load__();
}

text_StringTokenizer__StringTokenizerIteratorClass *text_StringTokenizer__StringTokenizerIterator_class(){
    static _Bool __done__ = false;
    static text_StringTokenizer__StringTokenizerIteratorClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(text_StringTokenizer__StringTokenizerIterator),
                            .size = sizeof(void*)
                        },
                        .__defaults__ = (void*) text_StringTokenizer__StringTokenizerIterator___defaults___impl,
                        .__destroy__ = (void*) lang_types__Object___destroy___impl,
                        .__load__ = (void*) text_StringTokenizer__StringTokenizerIterator___load__,
                    },
                },
                .iterator = (void*) lang_Iterators__Iterator_iterator_impl,
                .toList = (void*) lang_Iterators__Iterable_toList_impl,
                .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
                .each = (void*) lang_Iterators__Iterable_each_impl,
                .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
                .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
            },
            .hasNext__quest = (void*) text_StringTokenizer__StringTokenizerIterator_hasNext__quest_impl,
            .next = (void*) text_StringTokenizer__StringTokenizerIterator_next_impl,
            .remove = (void*) text_StringTokenizer__StringTokenizerIterator_remove_impl,
        },
        .new_sti = (void*) text_StringTokenizer__StringTokenizerIterator_new_sti,
        .hasPrev__quest = (void*) text_StringTokenizer__StringTokenizerIterator_hasPrev__quest_impl,
        .prev = (void*) text_StringTokenizer__StringTokenizerIterator_prev_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__Iterator_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("StringTokenizerIterator", 23);
    }
    return &class;
}
void text_StringTokenizer_load() {
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
        text_StringTokenizer__StringTokenizer___load__();
        text_StringTokenizer__StringTokenizerIterator___load__();
    }
}


structs_ArrayList__ArrayList* lang_Buffer__Buffer_split_withChar(lang_Buffer__Buffer* this, lang_Character__Char c, lang_Numbers__SSizeT maxTokens) {
    return lang_Buffer__Buffer_split_pointer((lang_Buffer__Buffer*) this, &(c), 1, maxTokens);
}

structs_ArrayList__ArrayList* lang_Buffer__Buffer_split_withStringWithoutmaxTokens(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s) {
    return lang_Buffer__Buffer_split_pointer((lang_Buffer__Buffer*) this, s->data, s->size, -1);
}

structs_ArrayList__ArrayList* lang_Buffer__Buffer_split_withCharWithoutmaxTokens(lang_Buffer__Buffer* this, lang_Character__Char c) {
    return lang_Buffer__Buffer_split_pointer((lang_Buffer__Buffer*) this, &(c), 1, -1);
}

structs_ArrayList__ArrayList* lang_Buffer__Buffer_split_withBufWithEmpties(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s, lang_types__Bool empties) {
    return lang_Buffer__Buffer_split_pointer((lang_Buffer__Buffer*) this, s->data, s->size, empties ? -1 : 0);
}

structs_ArrayList__ArrayList* lang_Buffer__Buffer_split_withCharWithEmpties(lang_Buffer__Buffer* this, lang_Character__Char c, lang_types__Bool empties) {
    return lang_Buffer__Buffer_split_pointer((lang_Buffer__Buffer*) this, &(c), 1, empties ? -1 : 0);
}

structs_ArrayList__ArrayList* lang_Buffer__Buffer_split_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* delimiter, lang_Numbers__SSizeT maxTokens) {
    return lang_Buffer__Buffer_split_pointer((lang_Buffer__Buffer*) this, delimiter->data, delimiter->size, maxTokens);
}

structs_ArrayList__ArrayList* lang_Buffer__Buffer_split_pointer(lang_Buffer__Buffer* this, lang_Character__Char* delimiter, lang_Numbers__SizeT delimiterLength, lang_Numbers__SSizeT maxTokens) {
    structs_ArrayList__ArrayList* findResults = lang_Buffer__Buffer_findAll_pointer(this, delimiter, delimiterLength, true);
    lang_Numbers__SSizeT maxItems = ((maxTokens <= 0) || (maxTokens > structs_ArrayList__ArrayList___getsize__(findResults) + 1)) ? structs_ArrayList__ArrayList___getsize__(findResults) + 1 : maxTokens;
    structs_ArrayList__ArrayList* result = structs_ArrayList__ArrayList_new_withCapacity((lang_types__Class*)lang_Buffer__Buffer_class(), maxItems);
    lang_Numbers__SizeT sstart = 0;
    
    {
        lang_Numbers__SizeT item;
        
        {
            lang_Iterators__BackIterator* __iter248 = structs_ArrayList__ArrayList_iterator(findResults);
            while (lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) __iter248)) {
                lang_Iterators__Iterator_next((lang_Iterators__Iterator*) __iter248, (uint8_t*) &(item));
                if ((maxTokens > 0) && (structs_ArrayList__ArrayList___getsize__(result) == maxItems - 1)) {
                    break;
                }
                lang_Numbers__SizeT sdist = item - sstart;
                if (maxTokens != 0 || sdist > (lang_Numbers__SizeT) 0) {
                    lang_Buffer__Buffer* b = lang_Buffer__Buffer_new_cStrWithLength(((lang_Character__CString) ((this->data + sstart))), sdist, false);
                    structs_ArrayList__ArrayList_add(result, (uint8_t*) &(b));
                }
                sstart += sdist + delimiterLength;
            }
        }
    }
    if (structs_ArrayList__ArrayList___getsize__(result) < maxItems) {
        lang_Numbers__SizeT sdist = this->size - sstart;
        lang_Buffer__Buffer* b = lang_Buffer__Buffer_new_cStrWithLength(((lang_Character__CString) ((this->data + sstart))), sdist, false);
        structs_ArrayList__ArrayList_add(result, (uint8_t*) &(b));
    }
    return result;
}

structs_ArrayList__ArrayList* lang_String__String_split_withChar(lang_String__String* this, lang_Character__Char c, lang_Numbers__SSizeT maxTokens) {
    return lang_String__String__bufArrayListToStrArrayList(this, lang_Buffer__Buffer_split_withChar((lang_Buffer__Buffer*) this->_buffer, c, maxTokens));
}

structs_ArrayList__ArrayList* lang_String__String_split_withStringWithoutmaxTokens(lang_String__String* this, lang_String__String* s) {
    return lang_String__String__bufArrayListToStrArrayList(this, lang_Buffer__Buffer_split_buf((lang_Buffer__Buffer*) this->_buffer, s->_buffer, -1));
}

structs_ArrayList__ArrayList* lang_String__String_split_withCharWithoutmaxTokens(lang_String__String* this, lang_Character__Char c) {
    return lang_String__String__bufArrayListToStrArrayList(this, lang_Buffer__Buffer_split_withCharWithoutmaxTokens((lang_Buffer__Buffer*) this->_buffer, c));
}

structs_ArrayList__ArrayList* lang_String__String_split_withStringWithEmpties(lang_String__String* this, lang_String__String* s, lang_types__Bool empties) {
    return lang_String__String__bufArrayListToStrArrayList(this, lang_Buffer__Buffer_split_withBufWithEmpties((lang_Buffer__Buffer*) this->_buffer, s->_buffer, empties));
}

structs_ArrayList__ArrayList* lang_String__String_split_withCharWithEmpties(lang_String__String* this, lang_Character__Char c, lang_types__Bool empties) {
    return lang_String__String__bufArrayListToStrArrayList(this, lang_Buffer__Buffer_split_withCharWithEmpties((lang_Buffer__Buffer*) this->_buffer, c, empties));
}

structs_ArrayList__ArrayList* lang_String__String_split_str(lang_String__String* this, lang_String__String* delimiter, lang_Numbers__SSizeT maxTokens) {
    return lang_String__String__bufArrayListToStrArrayList(this, lang_Buffer__Buffer_split_buf((lang_Buffer__Buffer*) this->_buffer, delimiter->_buffer, maxTokens));
}
