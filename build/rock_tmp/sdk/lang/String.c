/* lang/String source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/String.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/BufferIterator.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Character.h>
#include <sdk/lang/VarArgs.h>
#include <sdk/lang/Memory.h>
#include <sdk/lang/Buffer.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Abstractions.h>
#include <sdk/lang/Format.h>
#include <sdk/lang/IO.h>
#include <sdk/structs/ArrayList.h>


void lang_String__String_init_withBuffer(lang_String__String* this, lang_Buffer__Buffer* _buffer) {
    this->_buffer = _buffer;
}

void lang_String__String_init_withCStr(lang_String__String* this, lang_Character__CString s) {
    lang_String__String_init_withCStrAndLength((lang_String__String*) this, s, lang_Character__CString_length(s));
}

void lang_String__String_init_withCStrAndLength(lang_String__String* this, lang_Character__CString s, lang_Numbers__SizeT length) {
    this->_buffer = lang_Buffer__Buffer_new_cStrWithLength(s, length, false);
}

lang_Numbers__SizeT lang_String__String_length_impl(lang_String__String* this) {
    return this->_buffer->size;
}

lang_types__Bool lang_String__String_equals__quest(lang_String__String* this, lang_String__String* other) {
    if (this == (lang_String__String*) NULL) {
        return (other == (lang_String__String*) NULL);
    }
    if (other == (lang_String__String*) NULL) {
        return false;
    }
    return lang_Buffer__Buffer_equals__quest((lang_Buffer__Buffer*) this->_buffer, other->_buffer);
}

lang_String__String* lang_String__String_clone_impl(lang_String__String* this) {
    return lang_String__String_new_withBuffer(lang_Buffer__Buffer_clone(this->_buffer));
}

lang_String__String* lang_String__String_substring_tillEnd_impl(lang_String__String* this, lang_Numbers__SizeT start) {
    return lang_String__String_substring(this, start, lang_String__String___getsize__(this));
}

lang_String__String* lang_String__String_substring_impl(lang_String__String* this, lang_Numbers__SizeT start, lang_Numbers__SizeT end) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_substring(result, start, end);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_times_impl(lang_String__String* this, lang_Numbers__SizeT count) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone_withMinimum(this->_buffer, lang_String__String___getsize__(this) * count);
    lang_Buffer__Buffer_times(result, count);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_append_str_impl(lang_String__String* this, lang_String__String* other) {
    if (!other) {
        return this;
    }
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone_withMinimum(this->_buffer, lang_String__String___getsize__(this) + lang_String__String___getsize__(other));
    lang_Buffer__Buffer_append_buf(result, other->_buffer);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_append_char_impl(lang_String__String* this, lang_Character__Char other) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone_withMinimum(this->_buffer, lang_String__String___getsize__(this) + 1);
    lang_Buffer__Buffer_append_char(result, other);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_append_cStr_impl(lang_String__String* this, lang_Character__CString other) {
    lang_Numbers__Int l = lang_Character__CString_length(other);
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone_withMinimum(this->_buffer, lang_String__String___getsize__(this) + l);
    lang_Buffer__Buffer_append_pointer(result, other, l);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_prepend_str_impl(lang_String__String* this, lang_String__String* other) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_prepend_buf(result, other->_buffer);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_prepend_char_impl(lang_String__String* this, lang_Character__Char other) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_prepend_char(result, other);
    return lang_Buffer__Buffer_toString(result);
}

lang_types__Bool lang_String__String_empty__quest_impl(lang_String__String* this) {
    return lang_Buffer__Buffer_empty__quest(this->_buffer);
}

lang_types__Bool lang_String__String_startsWith__quest_impl(lang_String__String* this, lang_String__String* s) {
    return lang_Buffer__Buffer_startsWith__quest(this->_buffer, s->_buffer);
}

lang_types__Bool lang_String__String_startsWith__quest_char_impl(lang_String__String* this, lang_Character__Char c) {
    return lang_Buffer__Buffer_startsWith__quest_char(this->_buffer, c);
}

lang_types__Bool lang_String__String_endsWith__quest_impl(lang_String__String* this, lang_String__String* s) {
    return lang_Buffer__Buffer_endsWith__quest(this->_buffer, s->_buffer);
}

lang_types__Bool lang_String__String_endsWith__quest_char_impl(lang_String__String* this, lang_Character__Char c) {
    return lang_Buffer__Buffer_endsWith__quest_char(this->_buffer, c);
}

lang_Numbers__SSizeT lang_String__String_find_impl(lang_String__String* this, lang_String__String* what, lang_Numbers__SSizeT offset, lang_types__Bool searchCaseSensitive) {
    return lang_Buffer__Buffer_find(this->_buffer, what->_buffer, offset, searchCaseSensitive);
}

structs_ArrayList__ArrayList* lang_String__String_findAll_impl(lang_String__String* this, lang_String__String* what, lang_types__Bool searchCaseSensitive) {
    return lang_Buffer__Buffer_findAll_withCase(this->_buffer, what->_buffer, searchCaseSensitive);
}

lang_String__String* lang_String__String_replaceAll_str_impl(lang_String__String* this, lang_String__String* what, lang_String__String* whit, lang_types__Bool searchCaseSensitive) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_replaceAll_buf(result, what->_buffer, whit->_buffer, searchCaseSensitive);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_replaceAll_char_impl(lang_String__String* this, lang_Character__Char oldie, lang_Character__Char kiddo) {
    lang_Buffer__Buffer* __callRoot32 = (lang_Buffer__Buffer_clone(this->_buffer));
    lang_Buffer__Buffer_replaceAll_char(__callRoot32, oldie, kiddo);
    return lang_Buffer__Buffer_toString(__callRoot32);
}

lang_String__String* lang_String__String_map_impl(lang_String__String* this, lang_types__Closure f) {
    lang_Buffer__Buffer* __callRoot33 = (lang_Buffer__Buffer_clone(this->_buffer));
    lang_Buffer__Buffer_map(__callRoot33, f);
    return lang_Buffer__Buffer_toString(__callRoot33);
}

structs_ArrayList__ArrayList* lang_String__String__bufArrayListToStrArrayList_impl(lang_String__String* this, structs_ArrayList__ArrayList* x) {
    structs_ArrayList__ArrayList* result = structs_ArrayList__ArrayList_new_withCapacity((lang_types__Class*)lang_String__String_class(), structs_ArrayList__ArrayList___getsize__(x));
    
    {
        lang_Buffer__Buffer* i = NULL;
        
        {
            lang_Iterators__BackIterator* __iter253 = structs_ArrayList__ArrayList_iterator(x);
            while (lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) __iter253)) {
                lang_Iterators__Iterator_next((lang_Iterators__Iterator*) __iter253, (uint8_t*) &(i));
                lang_String__String* __genArg254 = lang_Buffer__Buffer_toString(i);
                structs_ArrayList__ArrayList_add(result, (uint8_t*) &(__genArg254));
            }
        }
    }
    return result;
}

lang_String__String* lang_String__String_toLower_impl(lang_String__String* this) {
    lang_Buffer__Buffer* __callRoot34 = (lang_Buffer__Buffer_clone(this->_buffer));
    lang_Buffer__Buffer_toLower(__callRoot34);
    return lang_Buffer__Buffer_toString(__callRoot34);
}

lang_String__String* lang_String__String_toUpper_impl(lang_String__String* this) {
    lang_Buffer__Buffer* __callRoot35 = (lang_Buffer__Buffer_clone(this->_buffer));
    lang_Buffer__Buffer_toUpper(__callRoot35);
    return lang_Buffer__Buffer_toString(__callRoot35);
}

lang_Numbers__SSizeT lang_String__String_indexOf_char_impl(lang_String__String* this, lang_Character__Char c, lang_Numbers__SSizeT start) {
    return lang_Buffer__Buffer_indexOf_char(this->_buffer, c, start);
}

lang_Numbers__SSizeT lang_String__String_indexOf_string_impl(lang_String__String* this, lang_String__String* s, lang_Numbers__SSizeT start) {
    return lang_Buffer__Buffer_indexOf_buf(this->_buffer, s->_buffer, start);
}

lang_types__Bool lang_String__String_contains__quest_char_impl(lang_String__String* this, lang_Character__Char c) {
    return lang_Buffer__Buffer_contains__quest_char(this->_buffer, c);
}

lang_types__Bool lang_String__String_contains__quest_string_impl(lang_String__String* this, lang_String__String* s) {
    return lang_Buffer__Buffer_contains__quest_buf(this->_buffer, s->_buffer);
}

lang_String__String* lang_String__String_trim_pointer_impl(lang_String__String* this, lang_Character__Char* s, lang_Numbers__SizeT sLength) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_trim_pointer(result, s, sLength);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_trim_string_impl(lang_String__String* this, lang_String__String* s) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_trim_buf(result, s->_buffer);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_trim_char_impl(lang_String__String* this, lang_Character__Char c) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_trim_char(result, c);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_trim_whitespace_impl(lang_String__String* this) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_trim_whitespace(result);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_trimLeft_space_impl(lang_String__String* this) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_trimLeft_space(result);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_trimLeft_char_impl(lang_String__String* this, lang_Character__Char c) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_trimLeft_char(result, c);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_trimLeft_string_impl(lang_String__String* this, lang_String__String* s) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_trimLeft_buf(result, s->_buffer);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_trimLeft_pointer_impl(lang_String__String* this, lang_Character__Char* s, lang_Numbers__SizeT sLength) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_trimLeft_pointer(result, s, sLength);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_trimRight_space_impl(lang_String__String* this) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_trimRight_space(result);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_trimRight_char_impl(lang_String__String* this, lang_Character__Char c) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_trimRight_char(result, c);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_trimRight_string_impl(lang_String__String* this, lang_String__String* s) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_trimRight_buf(result, s->_buffer);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_trimRight_pointer_impl(lang_String__String* this, lang_Character__Char* s, lang_Numbers__SizeT sLength) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_trimRight_pointer(result, s, sLength);
    return lang_Buffer__Buffer_toString(result);
}

lang_String__String* lang_String__String_reverse_impl(lang_String__String* this) {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_clone(this->_buffer);
    lang_Buffer__Buffer_reverse(result);
    return lang_Buffer__Buffer_toString(result);
}

lang_Numbers__SizeT lang_String__String_count_impl(lang_String__String* this, lang_Character__Char what) {
    return lang_Buffer__Buffer_count(this->_buffer, what);
}

lang_Numbers__SizeT lang_String__String_count_string_impl(lang_String__String* this, lang_String__String* what) {
    return lang_Buffer__Buffer_count_buf(this->_buffer, what->_buffer);
}

lang_Numbers__SSizeT lang_String__String_lastIndexOf_impl(lang_String__String* this, lang_Character__Char c) {
    return lang_Buffer__Buffer_lastIndexOf(this->_buffer, c);
}

void lang_String__String_print_impl(lang_String__String* this) {
    lang_Buffer__Buffer_print(this->_buffer);
}

void lang_String__String_println_impl(lang_String__String* this) {
    if (this->_buffer != (lang_Buffer__Buffer*) NULL) {
        lang_Buffer__Buffer_println(this->_buffer);
    }
}

void lang_String__String_println_withStream_impl(lang_String__String* this, lang_IO__FStream stream) {
    if (this->_buffer != (lang_Buffer__Buffer*) NULL) {
        lang_Buffer__Buffer_println_withStream(this->_buffer, stream);
    }
}

lang_Numbers__Int lang_String__String_toInt_impl(lang_String__String* this) {
    return lang_Buffer__Buffer_toInt(this->_buffer);
}

lang_Numbers__Int lang_String__String_toInt_withBase_impl(lang_String__String* this, lang_Numbers__Int base) {
    return lang_Buffer__Buffer_toInt_withBase(this->_buffer, base);
}

lang_Numbers__Long lang_String__String_toLong_impl(lang_String__String* this) {
    return lang_Buffer__Buffer_toLong(this->_buffer);
}

lang_Numbers__Long lang_String__String_toLong_withBase_impl(lang_String__String* this, lang_Numbers__Long base) {
    return lang_Buffer__Buffer_toLong_withBase(this->_buffer, base);
}

lang_Numbers__LLong lang_String__String_toLLong_impl(lang_String__String* this) {
    return lang_Buffer__Buffer_toLLong(this->_buffer);
}

lang_Numbers__LLong lang_String__String_toLLong_withBase_impl(lang_String__String* this, lang_Numbers__LLong base) {
    return lang_Buffer__Buffer_toLLong_withBase(this->_buffer, base);
}

lang_Numbers__ULong lang_String__String_toULong_impl(lang_String__String* this) {
    return lang_Buffer__Buffer_toULong(this->_buffer);
}

lang_Numbers__ULong lang_String__String_toULong_withBase_impl(lang_String__String* this, lang_Numbers__ULong base) {
    return lang_Buffer__Buffer_toULong_withBase(this->_buffer, base);
}

lang_Numbers__Float lang_String__String_toFloat_impl(lang_String__String* this) {
    return lang_Buffer__Buffer_toFloat(this->_buffer);
}

lang_Numbers__Double lang_String__String_toDouble_impl(lang_String__String* this) {
    return lang_Buffer__Buffer_toDouble(this->_buffer);
}

lang_Numbers__LDouble lang_String__String_toLDouble_impl(lang_String__String* this) {
    return lang_Buffer__Buffer_toLDouble(this->_buffer);
}

lang_BufferIterator__BufferIterator* lang_String__String_iterator_impl(lang_String__String* this) {
    return lang_Buffer__Buffer_iterator(this->_buffer);
}

lang_BufferIterator__BufferIterator* lang_String__String_forward_impl(lang_String__String* this) {
    return lang_Buffer__Buffer_forward(this->_buffer);
}

lang_Iterators__BackIterator* lang_String__String_backward_impl(lang_String__String* this) {
    return lang_Buffer__Buffer_backward(this->_buffer);
}

lang_BufferIterator__BufferIterator* lang_String__String_backIterator_impl(lang_String__String* this) {
    return lang_Buffer__Buffer_backIterator(this->_buffer);
}

lang_String__String* lang_String__String_cformat_str(lang_String__String* this, ...) {
    lang_System__VaList list;
    lang_System__va_start(list, this);
    lang_Numbers__Int numBytes = lang_IO__vsnprintf(NULL, 0, this->_buffer->data, list);
    lang_System__va_end(list);
    lang_Buffer__Buffer* copy = lang_Buffer__Buffer_new(numBytes);
    copy->size = numBytes;
    lang_System__va_start(list, this);
    lang_IO__vsnprintf(copy->data, numBytes + 1, this->_buffer->data, list);
    lang_System__va_end(list);
    return lang_String__String_new_withBuffer(copy);
}

lang_Character__CString lang_String__String_toCString_impl(lang_String__String* this) {
    return ((lang_Character__CString) (this->_buffer->data));
}

lang_Numbers__SSizeT lang_String__String___getsize___impl(lang_String__String* this) {
    return ((lang_Numbers__SSizeT) (this->_buffer->size));
}

void lang_String__String___defaults___impl(lang_String__String* this) {
    ((lang_Iterators__Iterable*) this)->T = (void*) lang_Character__Char_class();
    lang_Iterators__Iterable___defaults___impl((lang_Iterators__Iterable*) this);
}

lang_Numbers__SizeT lang_String__String_length(lang_String__String* this) {
    return (lang_Numbers__SizeT) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->length((lang_String__String*)this);
}

lang_String__String* lang_String__String_clone(lang_String__String* this) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->clone((lang_String__String*)this);
}

lang_String__String* lang_String__String_substring_tillEnd(lang_String__String* this, lang_Numbers__SizeT start) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->substring_tillEnd((lang_String__String*)this, start);
}

lang_String__String* lang_String__String_substring(lang_String__String* this, lang_Numbers__SizeT start, lang_Numbers__SizeT end) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->substring((lang_String__String*)this, start, end);
}

lang_String__String* lang_String__String_times(lang_String__String* this, lang_Numbers__SizeT count) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->times((lang_String__String*)this, count);
}

lang_String__String* lang_String__String_append_str(lang_String__String* this, lang_String__String* other) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->append_str((lang_String__String*)this, other);
}

lang_String__String* lang_String__String_append_char(lang_String__String* this, lang_Character__Char other) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->append_char((lang_String__String*)this, other);
}

lang_String__String* lang_String__String_append_cStr(lang_String__String* this, lang_Character__CString other) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->append_cStr((lang_String__String*)this, other);
}

lang_String__String* lang_String__String_prepend_str(lang_String__String* this, lang_String__String* other) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->prepend_str((lang_String__String*)this, other);
}

lang_String__String* lang_String__String_prepend_char(lang_String__String* this, lang_Character__Char other) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->prepend_char((lang_String__String*)this, other);
}

lang_types__Bool lang_String__String_empty__quest(lang_String__String* this) {
    return (lang_types__Bool) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->empty__quest((lang_String__String*)this);
}

lang_types__Bool lang_String__String_startsWith__quest(lang_String__String* this, lang_String__String* s) {
    return (lang_types__Bool) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->startsWith__quest((lang_String__String*)this, s);
}

lang_types__Bool lang_String__String_startsWith__quest_char(lang_String__String* this, lang_Character__Char c) {
    return (lang_types__Bool) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->startsWith__quest_char((lang_String__String*)this, c);
}

lang_types__Bool lang_String__String_endsWith__quest(lang_String__String* this, lang_String__String* s) {
    return (lang_types__Bool) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->endsWith__quest((lang_String__String*)this, s);
}

lang_types__Bool lang_String__String_endsWith__quest_char(lang_String__String* this, lang_Character__Char c) {
    return (lang_types__Bool) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->endsWith__quest_char((lang_String__String*)this, c);
}

lang_Numbers__SSizeT lang_String__String_find(lang_String__String* this, lang_String__String* what, lang_Numbers__SSizeT offset, lang_types__Bool searchCaseSensitive) {
    return (lang_Numbers__SSizeT) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->find((lang_String__String*)this, what, offset, searchCaseSensitive);
}

structs_ArrayList__ArrayList* lang_String__String_findAll(lang_String__String* this, lang_String__String* what, lang_types__Bool searchCaseSensitive) {
    return (structs_ArrayList__ArrayList*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->findAll((lang_String__String*)this, what, searchCaseSensitive);
}

lang_String__String* lang_String__String_replaceAll_str(lang_String__String* this, lang_String__String* what, lang_String__String* whit, lang_types__Bool searchCaseSensitive) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->replaceAll_str((lang_String__String*)this, what, whit, searchCaseSensitive);
}

lang_String__String* lang_String__String_replaceAll_char(lang_String__String* this, lang_Character__Char oldie, lang_Character__Char kiddo) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->replaceAll_char((lang_String__String*)this, oldie, kiddo);
}

lang_String__String* lang_String__String_map(lang_String__String* this, lang_types__Closure f) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->map((lang_String__String*)this, f);
}

structs_ArrayList__ArrayList* lang_String__String__bufArrayListToStrArrayList(lang_String__String* this, structs_ArrayList__ArrayList* x) {
    return (structs_ArrayList__ArrayList*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->_bufArrayListToStrArrayList((lang_String__String*)this, x);
}

lang_String__String* lang_String__String_toLower(lang_String__String* this) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->toLower((lang_String__String*)this);
}

lang_String__String* lang_String__String_toUpper(lang_String__String* this) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->toUpper((lang_String__String*)this);
}

lang_Numbers__SSizeT lang_String__String_indexOf_char(lang_String__String* this, lang_Character__Char c, lang_Numbers__SSizeT start) {
    return (lang_Numbers__SSizeT) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->indexOf_char((lang_String__String*)this, c, start);
}

lang_Numbers__SSizeT lang_String__String_indexOf_string(lang_String__String* this, lang_String__String* s, lang_Numbers__SSizeT start) {
    return (lang_Numbers__SSizeT) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->indexOf_string((lang_String__String*)this, s, start);
}

lang_types__Bool lang_String__String_contains__quest_char(lang_String__String* this, lang_Character__Char c) {
    return (lang_types__Bool) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->contains__quest_char((lang_String__String*)this, c);
}

lang_types__Bool lang_String__String_contains__quest_string(lang_String__String* this, lang_String__String* s) {
    return (lang_types__Bool) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->contains__quest_string((lang_String__String*)this, s);
}

lang_String__String* lang_String__String_trim_pointer(lang_String__String* this, lang_Character__Char* s, lang_Numbers__SizeT sLength) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->trim_pointer((lang_String__String*)this, s, sLength);
}

lang_String__String* lang_String__String_trim_string(lang_String__String* this, lang_String__String* s) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->trim_string((lang_String__String*)this, s);
}

lang_String__String* lang_String__String_trim_char(lang_String__String* this, lang_Character__Char c) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->trim_char((lang_String__String*)this, c);
}

lang_String__String* lang_String__String_trim_whitespace(lang_String__String* this) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->trim_whitespace((lang_String__String*)this);
}

lang_String__String* lang_String__String_trimLeft_space(lang_String__String* this) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->trimLeft_space((lang_String__String*)this);
}

lang_String__String* lang_String__String_trimLeft_char(lang_String__String* this, lang_Character__Char c) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->trimLeft_char((lang_String__String*)this, c);
}

lang_String__String* lang_String__String_trimLeft_string(lang_String__String* this, lang_String__String* s) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->trimLeft_string((lang_String__String*)this, s);
}

lang_String__String* lang_String__String_trimLeft_pointer(lang_String__String* this, lang_Character__Char* s, lang_Numbers__SizeT sLength) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->trimLeft_pointer((lang_String__String*)this, s, sLength);
}

lang_String__String* lang_String__String_trimRight_space(lang_String__String* this) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->trimRight_space((lang_String__String*)this);
}

lang_String__String* lang_String__String_trimRight_char(lang_String__String* this, lang_Character__Char c) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->trimRight_char((lang_String__String*)this, c);
}

lang_String__String* lang_String__String_trimRight_string(lang_String__String* this, lang_String__String* s) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->trimRight_string((lang_String__String*)this, s);
}

lang_String__String* lang_String__String_trimRight_pointer(lang_String__String* this, lang_Character__Char* s, lang_Numbers__SizeT sLength) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->trimRight_pointer((lang_String__String*)this, s, sLength);
}

lang_String__String* lang_String__String_reverse(lang_String__String* this) {
    return (lang_String__String*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->reverse((lang_String__String*)this);
}

lang_Numbers__SizeT lang_String__String_count(lang_String__String* this, lang_Character__Char what) {
    return (lang_Numbers__SizeT) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->count((lang_String__String*)this, what);
}

lang_Numbers__SizeT lang_String__String_count_string(lang_String__String* this, lang_String__String* what) {
    return (lang_Numbers__SizeT) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->count_string((lang_String__String*)this, what);
}

lang_Numbers__SSizeT lang_String__String_lastIndexOf(lang_String__String* this, lang_Character__Char c) {
    return (lang_Numbers__SSizeT) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->lastIndexOf((lang_String__String*)this, c);
}

void lang_String__String_print(lang_String__String* this) {
    ((lang_String__StringClass *)((lang_types__Object *)this)->class)->print((lang_String__String*)this);
}

void lang_String__String_println(lang_String__String* this) {
    ((lang_String__StringClass *)((lang_types__Object *)this)->class)->println((lang_String__String*)this);
}

void lang_String__String_println_withStream(lang_String__String* this, lang_IO__FStream stream) {
    ((lang_String__StringClass *)((lang_types__Object *)this)->class)->println_withStream((lang_String__String*)this, stream);
}

lang_Numbers__Int lang_String__String_toInt(lang_String__String* this) {
    return (lang_Numbers__Int) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->toInt((lang_String__String*)this);
}

lang_Numbers__Int lang_String__String_toInt_withBase(lang_String__String* this, lang_Numbers__Int base) {
    return (lang_Numbers__Int) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->toInt_withBase((lang_String__String*)this, base);
}

lang_Numbers__Long lang_String__String_toLong(lang_String__String* this) {
    return (lang_Numbers__Long) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->toLong((lang_String__String*)this);
}

lang_Numbers__Long lang_String__String_toLong_withBase(lang_String__String* this, lang_Numbers__Long base) {
    return (lang_Numbers__Long) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->toLong_withBase((lang_String__String*)this, base);
}

lang_Numbers__LLong lang_String__String_toLLong(lang_String__String* this) {
    return (lang_Numbers__LLong) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->toLLong((lang_String__String*)this);
}

lang_Numbers__LLong lang_String__String_toLLong_withBase(lang_String__String* this, lang_Numbers__LLong base) {
    return (lang_Numbers__LLong) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->toLLong_withBase((lang_String__String*)this, base);
}

lang_Numbers__ULong lang_String__String_toULong(lang_String__String* this) {
    return (lang_Numbers__ULong) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->toULong((lang_String__String*)this);
}

lang_Numbers__ULong lang_String__String_toULong_withBase(lang_String__String* this, lang_Numbers__ULong base) {
    return (lang_Numbers__ULong) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->toULong_withBase((lang_String__String*)this, base);
}

lang_Numbers__Float lang_String__String_toFloat(lang_String__String* this) {
    return (lang_Numbers__Float) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->toFloat((lang_String__String*)this);
}

lang_Numbers__Double lang_String__String_toDouble(lang_String__String* this) {
    return (lang_Numbers__Double) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->toDouble((lang_String__String*)this);
}

lang_Numbers__LDouble lang_String__String_toLDouble(lang_String__String* this) {
    return (lang_Numbers__LDouble) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->toLDouble((lang_String__String*)this);
}

lang_BufferIterator__BufferIterator* lang_String__String_iterator(lang_String__String* this) {
    return (lang_BufferIterator__BufferIterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

lang_BufferIterator__BufferIterator* lang_String__String_forward(lang_String__String* this) {
    return (lang_BufferIterator__BufferIterator*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->forward((lang_String__String*)this);
}

lang_Iterators__BackIterator* lang_String__String_backward(lang_String__String* this) {
    return (lang_Iterators__BackIterator*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->backward((lang_String__String*)this);
}

lang_BufferIterator__BufferIterator* lang_String__String_backIterator(lang_String__String* this) {
    return (lang_BufferIterator__BufferIterator*) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->backIterator((lang_String__String*)this);
}

lang_Character__CString lang_String__String_toCString(lang_String__String* this) {
    return (lang_Character__CString) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->toCString((lang_String__String*)this);
}

lang_Numbers__SSizeT lang_String__String___getsize__(lang_String__String* this) {
    return (lang_Numbers__SSizeT) ((lang_String__StringClass *)((lang_types__Object *)this)->class)->__getsize__((lang_String__String*)this);
}

void lang_String__String___defaults__(lang_String__String* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_String__String* lang_String__String_new_withBuffer(lang_Buffer__Buffer* _buffer) {
    
    lang_String__String* this = ((lang_String__String*) (lang_types__Class_alloc__class((lang_types__Class*) lang_String__String_class())));
    lang_String__String___defaults__(this);
    lang_String__String_init_withBuffer((lang_String__String*) this, _buffer);
    return this;
}
lang_String__String* lang_String__String_new_withCStr(lang_Character__CString s) {
    
    lang_String__String* this = ((lang_String__String*) (lang_types__Class_alloc__class((lang_types__Class*) lang_String__String_class())));
    lang_String__String___defaults__(this);
    lang_String__String_init_withCStr((lang_String__String*) this, s);
    return this;
}
lang_String__String* lang_String__String_new_withCStrAndLength(lang_Character__CString s, lang_Numbers__SizeT length) {
    
    lang_String__String* this = ((lang_String__String*) (lang_types__Class_alloc__class((lang_types__Class*) lang_String__String_class())));
    lang_String__String___defaults__(this);
    lang_String__String_init_withCStrAndLength((lang_String__String*) this, s, length);
    return this;
}
void lang_String__String___load__() {
    lang_Iterators__Iterable___load__();
}

lang_String__StringClass *lang_String__String_class(){
    static _Bool __done__ = false;
    static lang_String__StringClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_String__String),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) lang_String__String___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_String__String___load__,
                },
            },
            .iterator = (void*) lang_String__String_iterator_impl,
            .toList = (void*) lang_Iterators__Iterable_toList_impl,
            .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
            .each = (void*) lang_Iterators__Iterable_each_impl,
            .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
            .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
        },
        .new_withBuffer = (void*) lang_String__String_new_withBuffer,
        .new_withCStr = (void*) lang_String__String_new_withCStr,
        .new_withCStrAndLength = (void*) lang_String__String_new_withCStrAndLength,
        .length = (void*) lang_String__String_length_impl,
        .clone = (void*) lang_String__String_clone_impl,
        .substring_tillEnd = (void*) lang_String__String_substring_tillEnd_impl,
        .substring = (void*) lang_String__String_substring_impl,
        .times = (void*) lang_String__String_times_impl,
        .append_str = (void*) lang_String__String_append_str_impl,
        .append_char = (void*) lang_String__String_append_char_impl,
        .append_cStr = (void*) lang_String__String_append_cStr_impl,
        .prepend_str = (void*) lang_String__String_prepend_str_impl,
        .prepend_char = (void*) lang_String__String_prepend_char_impl,
        .empty__quest = (void*) lang_String__String_empty__quest_impl,
        .startsWith__quest = (void*) lang_String__String_startsWith__quest_impl,
        .startsWith__quest_char = (void*) lang_String__String_startsWith__quest_char_impl,
        .endsWith__quest = (void*) lang_String__String_endsWith__quest_impl,
        .endsWith__quest_char = (void*) lang_String__String_endsWith__quest_char_impl,
        .find = (void*) lang_String__String_find_impl,
        .findAll = (void*) lang_String__String_findAll_impl,
        .replaceAll_str = (void*) lang_String__String_replaceAll_str_impl,
        .replaceAll_char = (void*) lang_String__String_replaceAll_char_impl,
        .map = (void*) lang_String__String_map_impl,
        ._bufArrayListToStrArrayList = (void*) lang_String__String__bufArrayListToStrArrayList_impl,
        .toLower = (void*) lang_String__String_toLower_impl,
        .toUpper = (void*) lang_String__String_toUpper_impl,
        .indexOf_char = (void*) lang_String__String_indexOf_char_impl,
        .indexOf_string = (void*) lang_String__String_indexOf_string_impl,
        .contains__quest_char = (void*) lang_String__String_contains__quest_char_impl,
        .contains__quest_string = (void*) lang_String__String_contains__quest_string_impl,
        .trim_pointer = (void*) lang_String__String_trim_pointer_impl,
        .trim_string = (void*) lang_String__String_trim_string_impl,
        .trim_char = (void*) lang_String__String_trim_char_impl,
        .trim_whitespace = (void*) lang_String__String_trim_whitespace_impl,
        .trimLeft_space = (void*) lang_String__String_trimLeft_space_impl,
        .trimLeft_char = (void*) lang_String__String_trimLeft_char_impl,
        .trimLeft_string = (void*) lang_String__String_trimLeft_string_impl,
        .trimLeft_pointer = (void*) lang_String__String_trimLeft_pointer_impl,
        .trimRight_space = (void*) lang_String__String_trimRight_space_impl,
        .trimRight_char = (void*) lang_String__String_trimRight_char_impl,
        .trimRight_string = (void*) lang_String__String_trimRight_string_impl,
        .trimRight_pointer = (void*) lang_String__String_trimRight_pointer_impl,
        .reverse = (void*) lang_String__String_reverse_impl,
        .count = (void*) lang_String__String_count_impl,
        .count_string = (void*) lang_String__String_count_string_impl,
        .lastIndexOf = (void*) lang_String__String_lastIndexOf_impl,
        .print = (void*) lang_String__String_print_impl,
        .println = (void*) lang_String__String_println_impl,
        .println_withStream = (void*) lang_String__String_println_withStream_impl,
        .toInt = (void*) lang_String__String_toInt_impl,
        .toInt_withBase = (void*) lang_String__String_toInt_withBase_impl,
        .toLong = (void*) lang_String__String_toLong_impl,
        .toLong_withBase = (void*) lang_String__String_toLong_withBase_impl,
        .toLLong = (void*) lang_String__String_toLLong_impl,
        .toLLong_withBase = (void*) lang_String__String_toLLong_withBase_impl,
        .toULong = (void*) lang_String__String_toULong_impl,
        .toULong_withBase = (void*) lang_String__String_toULong_withBase_impl,
        .toFloat = (void*) lang_String__String_toFloat_impl,
        .toDouble = (void*) lang_String__String_toDouble_impl,
        .toLDouble = (void*) lang_String__String_toLDouble_impl,
        .forward = (void*) lang_String__String_forward_impl,
        .backward = (void*) lang_String__String_backward_impl,
        .backIterator = (void*) lang_String__String_backIterator_impl,
        .toCString = (void*) lang_String__String_toCString_impl,
        .__getsize__ = (void*) lang_String__String___getsize___impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__Iterable_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("String", 6);
    }
    return &class;
}
void __lang_String_closure280_ctx___load__() {
    lang_types__Class___load__();
}

__lang_String_closure280_ctxClass *__lang_String_closure280_ctx_class(){
    static _Bool __done__ = false;
    static __lang_String_closure280_ctxClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(__lang_String_closure280_ctx),
                    .size = sizeof(__lang_String_closure280_ctx)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) __lang_String_closure280_ctx___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("__lang_String_closure280_ctx", 28);
    }
    return &class;
}
void lang_String_load() {
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
        lang_Buffer_load();
        lang_Numbers_load();
        lang_Abstractions_load();
        lang_Format_load();
        lang_IO_load();
        structs_ArrayList_load();
        lang_String__String___load__();
        __lang_String_closure280_ctx___load__();
    }
}


lang_String__String* lang_String__makeStringLiteral(lang_Character__CString str, lang_Numbers__SizeT strLen) {
    return lang_String__String_new_withBuffer(lang_Buffer__Buffer_new_cStrWithLength(str, strLen, true));
}

structs_ArrayList__ArrayList* lang_String__strArrayListFromCString(lang_Numbers__Int argc, lang_Character__Char** argv) {
    structs_ArrayList__ArrayList* result = structs_ArrayList__ArrayList_new((lang_types__Class*)lang_String__String_class());
    __lang_String_closure280_ctx* __ctx281 = lang_Memory__gc_malloc(((lang_types__Class*)__lang_String_closure280_ctx_class())->size);
    (*(__ctx281)) = (__lang_String_closure280_ctx) { 
        argv, 
        result
    };
    lang_types__Closure __closure282 = (lang_types__Closure) { 
        lang_String____lang_String_closure280_thunk, 
        __ctx281
    };
    lang_Numbers__LLong_times_withIndex((lang_Numbers__LLong) argc, __closure282);
    return result;
}

structs_ArrayList__ArrayList* lang_String__strArrayListFromCString_hack(lang_Numbers__Int argc, lang_String__String** argv) {
    return lang_String__strArrayListFromCString(argc, ((lang_Character__Char**) (argv)));
}

lang_String__String** lang_String__cStringPtrToStringPtr(lang_Character__CString* cstr, lang_Numbers__SizeT len) {
    lang_String__String** toRet = lang_Memory__gc_malloc(((lang_types__Class*)lang_types__Pointer_class())->size * len);
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < len; i++) {
            toRet[i] = lang_String__makeStringLiteral(cstr[i], lang_Character__CString_length(cstr[i]));
        }
    }
    return toRet;
}

void lang_String____lang_String_closure280(lang_Character__Char** argv, structs_ArrayList__ArrayList* result, lang_Numbers__LLong i) {
    lang_String__String* __genArg255 = lang_Character__CString_toString(((lang_Character__CString) (argv[i])));
    structs_ArrayList__ArrayList_add(result, (uint8_t*) &(__genArg255));
}

void lang_String____lang_String_closure280_thunk(lang_Numbers__LLong i, __lang_String_closure280_ctx* __context__) {
    lang_String____lang_String_closure280((*__context__).argv, (*__context__).result, i);
}

lang_String__String* lang_String____OP_AS_Char__star__String(lang_Character__Char* c) {
    return c ? lang_String__String_new_withCStrAndLength(c, lang_Character__strlen(c)) : NULL;
}

lang_String__String* lang_String____OP_AS_CString__String(lang_Character__CString c) {
    return c ? lang_String__String_new_withCStrAndLength(c, lang_Character__strlen(c)) : NULL;
}

lang_Character__Char* lang_String____OP_AS_String__Char__star(lang_String__String* s) {
    return ((lang_Character__Char*) (s ? lang_String__String_toCString(s) : NULL));
}

lang_Character__CString lang_String____OP_AS_String__CString(lang_String__String* s) {
    return s ? lang_String__String_toCString(s) : NULL;
}

lang_types__Bool lang_String____OP_EQ_String_String__Bool(lang_String__String* str1, lang_String__String* str2) {
    return lang_String__String_equals__quest((lang_String__String*) str1, str2);
}

lang_types__Bool lang_String____OP_NE_String_String__Bool(lang_String__String* str1, lang_String__String* str2) {
    return !lang_String__String_equals__quest((lang_String__String*) str1, str2);
}

lang_Character__Char lang_String____OP_IDX_String_SSizeT__Char(lang_String__String* string, lang_Numbers__SSizeT index) {
    return lang_Buffer____OP_IDX_Buffer_SSizeT__Char(string->_buffer, index);
}

lang_String__String* lang_String____OP_IDX_String_Range__String(lang_String__String* string, lang_Numbers__Range range) {
    return lang_String__String_substring(string, range.min, range.max);
}

lang_String__String* lang_String____OP_MUL_String_SizeT__String(lang_String__String* string, lang_Numbers__SizeT count) {
    return lang_String__String_times(string, count);
}

lang_String__String* lang_String____OP_ADD_String_String__String(lang_String__String* left, lang_String__String* right) {
    return lang_String__String_append_str(left, right);
}

lang_String__String* lang_String____OP_ADD_String_CString__String(lang_String__String* left, lang_Character__CString right) {
    return lang_String__String_append_cStr(left, right);
}

lang_String__String* lang_String____OP_ADD_String_Char__String(lang_String__String* left, lang_Character__Char right) {
    return lang_String__String_append_char(left, right);
}

lang_String__String* lang_String____OP_ADD_Char_String__String(lang_Character__Char left, lang_String__String* right) {
    return lang_String__String_prepend_char(right, left);
}
