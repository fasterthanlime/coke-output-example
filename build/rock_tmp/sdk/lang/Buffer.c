/* lang/Buffer source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/Buffer.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/BufferIterator.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Character.h>
#include <sdk/lang/VarArgs.h>
#include <sdk/lang/Memory.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Abstractions.h>
#include <sdk/lang/Format.h>
#include <sdk/lang/IO.h>
#include <sdk/structs/ArrayList.h>

static lang_String__String* __strLit36;

lang_Numbers__SizeT lang_Buffer__Buffer__rshift_impl(lang_Buffer__Buffer* this) {
    return ((lang_Numbers__SizeT) (this->mallocAddr == (lang_Character__Char*) NULL || this->data == (lang_Character__Char*) NULL ? 0 : ((lang_Numbers__SizeT) ((((lang_Numbers__SizeT) (this->data)) - ((lang_Numbers__SizeT) (this->mallocAddr)))))));
}

void lang_Buffer__Buffer_setBuffer_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* newOne) {
    this->data = newOne->data;
    this->mallocAddr = newOne->mallocAddr;
    this->capacity = newOne->capacity;
    this->size = newOne->size;
}

void lang_Buffer__Buffer_init_empty(lang_Buffer__Buffer* this) {
    lang_Buffer__Buffer_init((lang_Buffer__Buffer*) this, 1024);
}

void lang_Buffer__Buffer_init(lang_Buffer__Buffer* this, lang_Numbers__SizeT capacity) {
    lang_Buffer__Buffer_setCapacity(this, capacity);
}

void lang_Buffer__Buffer_init_cStrWithLength(lang_Buffer__Buffer* this, lang_Character__CString s, lang_Numbers__SizeT length, lang_types__Bool stringLiteral__quest) {
    if (stringLiteral__quest) {
        this->data = s;
        this->size = length;
        this->mallocAddr = (void*) NULL;
        this->capacity = 0;
    }
    else {
        lang_Buffer__Buffer_setLength(this, length);
        lang_Memory__memcpy(this->data, s, length);
    }
}

lang_Numbers__SizeT lang_Buffer__Buffer_length_impl(lang_Buffer__Buffer* this) {
    return this->size;
}

void lang_Buffer__Buffer_setCapacity_impl(lang_Buffer__Buffer* this, lang_Numbers__SizeT newCapacity) {
    lang_Numbers__SizeT rshift = lang_Buffer__Buffer__rshift(this);
    lang_Numbers__SizeT min = newCapacity + 1 + rshift;
    if (min >= this->capacity) {
        this->capacity = (min * 120) / 100 + 10;
        lang_Numbers__SSizeT al = 8 - (this->capacity % 8);
        if (al < 8) {
            this->capacity += al;
        }
        lang_Numbers__SizeT rs = rshift;
        if (rs) {
            lang_Buffer__Buffer_shiftLeft(this, rs);
        }
        lang_types__Pointer tmp = lang_Memory__gc_realloc(this->mallocAddr, this->capacity);
        if (!tmp) {
            lang_Exception__Exception_throw((lang_Exception__Exception*) lang_Exception__OutOfMemoryException_new((lang_types__Class*) (lang_Buffer__Buffer_class())));
        }
        if (this->size > (lang_Numbers__SizeT) 0 && this->mallocAddr == (lang_Character__Char*) NULL) {
            rs = 0;
            lang_Memory__memcpy(tmp, this->data, this->size);
        }
        this->mallocAddr = (void*) tmp;
        this->data = (void*) tmp;
        if (rs) {
            lang_Buffer__Buffer_shiftRight(this, rs);
        }
    }
    this->data[newCapacity] = '\0';
}

void lang_Buffer__Buffer_setLength_impl(lang_Buffer__Buffer* this, lang_Numbers__SizeT newLength) {
    if (newLength != this->size) {
        if (newLength > this->capacity) {
            lang_Buffer__Buffer_setCapacity(this, newLength);
        }
        this->size = newLength;
        this->data[this->size] = '\0';
    }
}

void lang_Buffer__Buffer_sizeFromData_impl(lang_Buffer__Buffer* this) {
    lang_Buffer__Buffer_setLength(this, lang_Character__CString_length(((lang_Character__CString) (this->data))));
}

void lang_Buffer__Buffer_shiftRight_impl(lang_Buffer__Buffer* this, lang_Numbers__SSizeT count) {
    if (count == 0 || this->size == (lang_Numbers__SizeT) 0) {
        return;
    }
    lang_Numbers__SSizeT c = count;
    lang_Numbers__SizeT rshift = lang_Buffer__Buffer__rshift(this);
    if (c > (lang_Numbers__SSizeT) this->size) {
        c = this->size;
    }
    else if (c < 0 && lang_Numbers__LLong_abs((lang_Numbers__LLong) c) > (lang_Numbers__LLong) rshift) {
        c = rshift * -1;
    }
    this->data += c;
    this->size -= c;
}

void lang_Buffer__Buffer_shiftLeft_impl(lang_Buffer__Buffer* this, lang_Numbers__SSizeT count) {
    if (count != 0) {
        lang_Buffer__Buffer_shiftRight(this, -count);
    }
}

lang_Buffer__Buffer* lang_Buffer__Buffer_clone_impl(lang_Buffer__Buffer* this) {
    return lang_Buffer__Buffer_clone_withMinimum(this, this->size);
}

lang_Buffer__Buffer* lang_Buffer__Buffer_clone_withMinimum_impl(lang_Buffer__Buffer* this, lang_Numbers__SizeT minimumLength) {
    lang_Numbers__SizeT newCapa = minimumLength > this->size ? minimumLength : this->size;
    lang_Buffer__Buffer* copy = lang_Buffer__Buffer_new(newCapa);
    copy->size = this->size;
    lang_Memory__memcpy(copy->data, this->data, this->size);
    return copy;
}

void lang_Buffer__Buffer_substring_tillEnd_impl(lang_Buffer__Buffer* this, lang_Numbers__SizeT start) {
    lang_Buffer__Buffer_substring(this, start, this->size);
}

void lang_Buffer__Buffer_substring_impl(lang_Buffer__Buffer* this, lang_Numbers__SSizeT start, lang_Numbers__SSizeT end) {
    if (start < 0) {
        start += this->size + 1;
    }
    if (end < 0) {
        end += this->size + 1;
    }
    if (end != (lang_Numbers__SSizeT) this->size) {
        lang_Buffer__Buffer_setLength(this, end);
    }
    if (start > 0) {
        lang_Buffer__Buffer_shiftRight(this, start);
    }
}

void lang_Buffer__Buffer_times_impl(lang_Buffer__Buffer* this, lang_Numbers__SizeT count) {
    lang_Numbers__SizeT origSize = this->size;
    lang_Buffer__Buffer_setLength(this, this->size * count);
    
    {
        lang_Numbers__Int i;
        for (i = 1; i < count; i++) {
            lang_Memory__memcpy(this->data + (i * origSize), this->data, origSize);
        }
    }
}

void lang_Buffer__Buffer_append_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other) {
    if (!other) {
        return;
    }
    lang_Buffer__Buffer_append_pointer(this, other->data, other->size);
}

void lang_Buffer__Buffer_append_str_impl(lang_Buffer__Buffer* this, lang_String__String* other) {
    if (!other) {
        return;
    }
    lang_Buffer__Buffer_append_buf(this, other->_buffer);
}

void lang_Buffer__Buffer_append_pointer_impl(lang_Buffer__Buffer* this, lang_Character__Char* other, lang_Numbers__SizeT otherLength) {
    lang_Numbers__SizeT origlen = this->size;
    lang_Buffer__Buffer_setLength(this, this->size + otherLength);
    lang_Memory__memcpy(this->data + origlen, other, otherLength);
}

void lang_Buffer__Buffer_append_bufLength_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other, lang_Numbers__SizeT otherLength) {
    lang_Buffer__Buffer_append_pointer(this, other->data, otherLength);
}

void lang_Buffer__Buffer_append_char_impl(lang_Buffer__Buffer* this, lang_Character__Char other) {
    lang_Buffer__Buffer_append_pointer(this, &(other), 1);
}

void lang_Buffer__Buffer_prepend_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other) {
    lang_Buffer__Buffer_prepend_pointer(this, other->data, other->size);
}

void lang_Buffer__Buffer_prepend_str_impl(lang_Buffer__Buffer* this, lang_String__String* other) {
    lang_Buffer__Buffer_prepend_buf(this, other->_buffer);
}

void lang_Buffer__Buffer_prepend_pointer_impl(lang_Buffer__Buffer* this, lang_Character__Char* other, lang_Numbers__SizeT otherLength) {
    if (lang_Buffer__Buffer__rshift(this) < otherLength) {
        lang_Buffer__Buffer* newthis = lang_Buffer__Buffer_new(this->size + otherLength);
        lang_Memory__memcpy(newthis->data, other, otherLength);
        lang_Memory__memcpy(newthis->data + otherLength, this->data, this->size);
        lang_Buffer__Buffer_setBuffer(this, newthis);
    }
    else {
        lang_Buffer__Buffer_shiftLeft(this, otherLength);
        lang_Memory__memcpy(this->data, other, otherLength);
    }
}

void lang_Buffer__Buffer_prepend_char_impl(lang_Buffer__Buffer* this, lang_Character__Char other) {
    lang_Buffer__Buffer_prepend_pointer(this, &(other), 1);
}

lang_types__Bool lang_Buffer__Buffer_empty__quest_impl(lang_Buffer__Buffer* this) {
    return this->size == (lang_Numbers__SizeT) 0;
}

lang_types__Bool lang_Buffer__Buffer_compare_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other, lang_Numbers__SSizeT start, lang_Numbers__SSizeT length) {
    if (this->size < (lang_Numbers__SizeT) (start + length) || other->size < (lang_Numbers__SizeT) length) {
        return false;
    }
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < length; i++) {
            if (this->data[start + i] != lang_Buffer____OP_IDX_Buffer_SSizeT__Char(other, i)) {
                return false;
            }
        }
    }
    return true;
}

lang_types__Bool lang_Buffer__Buffer_equals__quest(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other) {
    if ((this == (lang_Buffer__Buffer*) NULL) || (other == (lang_Buffer__Buffer*) NULL)) {
        return false;
    }
    if (other->size != this->size) {
        return false;
    }
    return lang_Buffer__Buffer_compare(this, other, 0, this->size);
}

lang_types__Bool lang_Buffer__Buffer_startsWith__quest_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s) {
    lang_Numbers__SizeT len = lang_Buffer__Buffer_length(s);
    if (this->size < len) {
        return false;
    }
    return lang_Buffer__Buffer_compare(this, s, 0, len);
}

lang_types__Bool lang_Buffer__Buffer_startsWith__quest_char_impl(lang_Buffer__Buffer* this, lang_Character__Char c) {
    return (this->size > (lang_Numbers__SizeT) 0) && (this->data[0] == c);
}

lang_types__Bool lang_Buffer__Buffer_endsWith__quest_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s) {
    lang_Numbers__SizeT len = s->size;
    if (this->size < len) {
        return false;
    }
    return lang_Buffer__Buffer_compare(this, s, this->size - len, len);
}

lang_types__Bool lang_Buffer__Buffer_endsWith__quest_char_impl(lang_Buffer__Buffer* this, lang_Character__Char c) {
    return (this->size > (lang_Numbers__SizeT) 0) && this->data[this->size] == c;
}

lang_Numbers__SSizeT lang_Buffer__Buffer_find_char_impl(lang_Buffer__Buffer* this, lang_Character__Char what, lang_Numbers__SSizeT offset, lang_types__Bool searchCaseSensitive) {
    return lang_Buffer__Buffer_find_pointer(this, &(what), 1, offset, searchCaseSensitive);
}

lang_Numbers__SSizeT lang_Buffer__Buffer_find_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* what, lang_Numbers__SSizeT offset, lang_types__Bool searchCaseSensitive) {
    return lang_Buffer__Buffer_find_pointer(this, what->data, what->size, offset, searchCaseSensitive);
}

lang_Numbers__SSizeT lang_Buffer__Buffer_find_pointer_impl(lang_Buffer__Buffer* this, lang_Character__Char* what, lang_Numbers__SizeT whatSize, lang_Numbers__SSizeT offset, lang_types__Bool searchCaseSensitive) {
    if (offset >= (lang_Numbers__SSizeT) this->size || offset < 0 || what == (lang_Character__Char*) NULL || whatSize == (lang_Numbers__SizeT) 0) {
        return -1;
    }
    lang_Numbers__SSizeT maxpos = this->size - whatSize;
    if (maxpos < 0) {
        return -1;
    }
    lang_types__Bool found;
    
    {
        lang_Numbers__Int sstart;
        for (sstart = offset; sstart < (maxpos + 1); sstart++) {
            found = true;
            
            {
                lang_Numbers__Int j;
                for (j = 0; j < whatSize; j++) {
                    if (searchCaseSensitive) {
                        if (this->data[sstart + j] != what[j]) {
                            found = false;
                            break;
                        }
                    }
                    else if (lang_Character__Char_toUpper(this->data[sstart + j]) != lang_Character__Char_toUpper(what[j])) {
                        found = false;
                        break;
                    }
                }
            }
            if (found) {
                return ((lang_Numbers__SSizeT) (sstart));
            }
        }
    }
    return -1;
}

structs_ArrayList__ArrayList* lang_Buffer__Buffer_findAll_withCase_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* what, lang_types__Bool searchCaseSensitive) {
    return lang_Buffer__Buffer_findAll_pointer(this, what->data, what->size, searchCaseSensitive);
}

structs_ArrayList__ArrayList* lang_Buffer__Buffer_findAll_pointer_impl(lang_Buffer__Buffer* this, lang_Character__Char* what, lang_Numbers__SizeT whatSize, lang_types__Bool searchCaseSensitive) {
    if (what == (lang_Character__Char*) NULL || whatSize == (lang_Numbers__SizeT) 0) {
        return structs_ArrayList__ArrayList_new_withCapacity((lang_types__Class*)lang_Numbers__SizeT_class(), 0);
    }
    structs_ArrayList__ArrayList* result = structs_ArrayList__ArrayList_new_withCapacity((lang_types__Class*)lang_Numbers__SSizeT_class(), this->size / whatSize);
    lang_Numbers__SSizeT offset = (whatSize) * -1;
    while (((offset = lang_Buffer__Buffer_find_pointer(this, what, whatSize, offset + whatSize, searchCaseSensitive)) != -1)) {
        structs_ArrayList__ArrayList_add(result, (uint8_t*) &(offset));
    }
    return result;
}

void lang_Buffer__Buffer_replaceAll_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* what, lang_Buffer__Buffer* whit, lang_types__Bool searchCaseSensitive) {
    structs_ArrayList__ArrayList* findResults = lang_Buffer__Buffer_findAll_withCase(this, what, searchCaseSensitive);
    if (findResults == (structs_ArrayList__ArrayList*) NULL || structs_ArrayList__ArrayList___getsize__(findResults) == 0) {
        return;
    }
    lang_Numbers__SizeT newlen = this->size + (whit->size * structs_ArrayList__ArrayList___getsize__(findResults)) - (what->size * structs_ArrayList__ArrayList___getsize__(findResults));
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_new(newlen);
    lang_Buffer__Buffer_setLength(result, newlen);
    lang_Numbers__SizeT sstart = 0;
    lang_Numbers__SizeT rstart = 0;
    
    {
        lang_Numbers__SizeT item;
        
        {
            lang_Iterators__BackIterator* __iter256 = structs_ArrayList__ArrayList_iterator(findResults);
            while (lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) __iter256)) {
                lang_Iterators__Iterator_next((lang_Iterators__Iterator*) __iter256, (uint8_t*) &(item));
                lang_Numbers__SizeT sdist = item - sstart;
                lang_Memory__memcpy(result->data + rstart, this->data + sstart, sdist);
                sstart += sdist;
                rstart += sdist;
                lang_Memory__memcpy(result->data + rstart, whit->data, whit->size);
                sstart += what->size;
                rstart += whit->size;
            }
        }
    }
    lang_Numbers__SizeT sdist = this->size - sstart;
    lang_Memory__memcpy(result->data + rstart, this->data + sstart, sdist + 1);
    lang_Buffer__Buffer_setBuffer(this, result);
}

void lang_Buffer__Buffer_replaceAll_char_impl(lang_Buffer__Buffer* this, lang_Character__Char oldie, lang_Character__Char kiddo) {
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < this->size; i++) {
            if (this->data[i] == oldie) {
                this->data[i] = kiddo;
            }
        }
    }
}

void lang_Buffer__Buffer_map_impl(lang_Buffer__Buffer* this, lang_types__Closure f) {
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < this->size; i++) {
            this->data[i] = ((lang_Character__Char (*)(lang_Character__Char, void*)) f.thunk)(this->data[i], f.context);
        }
    }
}

void lang_Buffer__Buffer_toLower_impl(lang_Buffer__Buffer* this) {
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < this->size; i++) {
            this->data[i] = lang_Character__Char_toLower(this->data[i]);
        }
    }
}

void lang_Buffer__Buffer_toUpper_impl(lang_Buffer__Buffer* this) {
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < this->size; i++) {
            this->data[i] = lang_Character__Char_toUpper(this->data[i]);
        }
    }
}

lang_String__String* lang_Buffer__Buffer_toString_impl(lang_Buffer__Buffer* this) {
    return lang_String__String_new_withBuffer(this);
}

lang_Numbers__SSizeT lang_Buffer__Buffer_indexOf_char_impl(lang_Buffer__Buffer* this, lang_Character__Char c, lang_Numbers__SSizeT start) {
    
    {
        lang_Numbers__Int i;
        for (i = start; i < this->size; i++) {
            if ((*((this->data + i))) == c) {
                return ((lang_Numbers__SSizeT) (i));
            }
        }
    }
    return -1;
}

lang_Numbers__SSizeT lang_Buffer__Buffer_indexOf_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s, lang_Numbers__SSizeT start) {
    return lang_Buffer__Buffer_find(this, s, start, false);
}

lang_types__Bool lang_Buffer__Buffer_contains__quest_char_impl(lang_Buffer__Buffer* this, lang_Character__Char c) {
    return lang_Buffer__Buffer_indexOf_char(this, c, 0) != -1;
}

lang_types__Bool lang_Buffer__Buffer_contains__quest_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s) {
    return lang_Buffer__Buffer_indexOf_buf(this, s, 0) != -1;
}

void lang_Buffer__Buffer_trim_pointer_impl(lang_Buffer__Buffer* this, lang_Character__Char* s, lang_Numbers__SizeT sLength) {
    lang_Buffer__Buffer_trimRight_pointer(this, s, sLength);
    lang_Buffer__Buffer_trimLeft_pointer(this, s, sLength);
}

void lang_Buffer__Buffer_trim_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s) {
    lang_Buffer__Buffer_trim_pointer(this, s->data, s->size);
}

void lang_Buffer__Buffer_trim_char_impl(lang_Buffer__Buffer* this, lang_Character__Char c) {
    lang_Buffer__Buffer_trim_pointer(this, &(c), 1);
}

void lang_Buffer__Buffer_trim_whitespace_impl(lang_Buffer__Buffer* this) {
    lang_Buffer__Buffer_trim_pointer(this, lang_String__String_toCString(__strLit36), 4);
}

void lang_Buffer__Buffer_trimLeft_space_impl(lang_Buffer__Buffer* this) {
    lang_Buffer__Buffer_trimLeft_char(this, ' ');
}

void lang_Buffer__Buffer_trimLeft_char_impl(lang_Buffer__Buffer* this, lang_Character__Char c) {
    lang_Buffer__Buffer_trimLeft_pointer(this, &(c), 1);
}

void lang_Buffer__Buffer_trimLeft_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s) {
    lang_Buffer__Buffer_trimLeft_pointer(this, s->data, s->size);
}

void lang_Buffer__Buffer_trimLeft_pointer_impl(lang_Buffer__Buffer* this, lang_Character__Char* s, lang_Numbers__SizeT sLength) {
    if (this->size == (lang_Numbers__SizeT) 0 || sLength == (lang_Numbers__SizeT) 0) {
        return;
    }
    lang_Numbers__SizeT start = 0;
    while (start < this->size && lang_Character__Char_containedIn__quest_charWithLength((*((this->data + start))), s, sLength)) {
        start += 1;
    }
    if (start == (lang_Numbers__SizeT) 0) {
        return;
    }
    lang_Buffer__Buffer_shiftRight(this, start);
}

void lang_Buffer__Buffer_trimRight_space_impl(lang_Buffer__Buffer* this) {
    lang_Buffer__Buffer_trimRight_char(this, ' ');
}

void lang_Buffer__Buffer_trimRight_char_impl(lang_Buffer__Buffer* this, lang_Character__Char c) {
    lang_Buffer__Buffer_trimRight_pointer(this, &(c), 1);
}

void lang_Buffer__Buffer_trimRight_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s) {
    lang_Buffer__Buffer_trimRight_pointer(this, s->data, s->size);
}

void lang_Buffer__Buffer_trimRight_pointer_impl(lang_Buffer__Buffer* this, lang_Character__Char* s, lang_Numbers__SizeT sLength) {
    lang_Numbers__SizeT end = this->size;
    while (end > (lang_Numbers__SizeT) 0 && lang_Character__Char_containedIn__quest_charWithLength(this->data[end - 1], s, sLength)) {
        end -= 1;
    }
    if (end != this->size) {
        lang_Buffer__Buffer_setLength(this, end);
    }
}

void lang_Buffer__Buffer_reverse_impl(lang_Buffer__Buffer* this) {
    lang_Buffer__Buffer* result = this;
    lang_Numbers__SizeT bytesLeft = this->size;
    lang_Numbers__SSizeT i = 0;
    while (bytesLeft > (lang_Numbers__SizeT) 1) {
        lang_Character__Char c = result->data[i];
        result->data[i] = result->data[this->size - 1 - i];
        result->data[this->size - 1 - i] = c;
        bytesLeft -= 2;
        i += 1;
    }
}

lang_Numbers__SizeT lang_Buffer__Buffer_count_impl(lang_Buffer__Buffer* this, lang_Character__Char what) {
    lang_Numbers__SizeT result = 0;
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < this->size; i++) {
            if (this->data[i] == what) {
                result += 1;
            }
        }
    }
    return result;
}

lang_Numbers__SizeT lang_Buffer__Buffer_count_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* what) {
    return ((lang_Numbers__SizeT) (structs_ArrayList__ArrayList___getsize__(lang_Buffer__Buffer_findAll_withCase(this, what, true))));
}

lang_Numbers__SSizeT lang_Buffer__Buffer_lastIndexOf_impl(lang_Buffer__Buffer* this, lang_Character__Char c) {
    lang_Numbers__SSizeT i = this->size - 1;
    while (i >= 0) {
        if (this->data[i] == c) {
            return i;
        }
        i -= 1;
    }
    return -1;
}

void lang_Buffer__Buffer_print_impl(lang_Buffer__Buffer* this) {
    lang_IO__fwrite(this->data, 1, this->size, stdout);
}

void lang_Buffer__Buffer_print_withStream_impl(lang_Buffer__Buffer* this, lang_IO__FStream stream) {
    lang_IO__fwrite(this->data, 1, this->size, stream);
}

void lang_Buffer__Buffer_println_impl(lang_Buffer__Buffer* this) {
    lang_Buffer__Buffer_print_withStream(this, stdout);
    lang_Character__Char_print_withStream('\n', stdout);
}

void lang_Buffer__Buffer_println_withStream_impl(lang_Buffer__Buffer* this, lang_IO__FStream stream) {
    lang_Buffer__Buffer_print_withStream(this, stream);
    lang_Character__Char_print_withStream('\n', stream);
}

lang_Numbers__Int lang_Buffer__Buffer_toInt_impl(lang_Buffer__Buffer* this) {
    return ((lang_Numbers__Int) (lang_Character__strtol(this->data, NULL, 10)));
}

lang_Numbers__Int lang_Buffer__Buffer_toInt_withBase_impl(lang_Buffer__Buffer* this, lang_Numbers__Int base) {
    return ((lang_Numbers__Int) (lang_Character__strtol(this->data, NULL, base)));
}

lang_Numbers__Long lang_Buffer__Buffer_toLong_impl(lang_Buffer__Buffer* this) {
    return lang_Character__strtol(this->data, NULL, 10);
}

lang_Numbers__Long lang_Buffer__Buffer_toLong_withBase_impl(lang_Buffer__Buffer* this, lang_Numbers__Long base) {
    return lang_Character__strtol(this->data, NULL, base);
}

lang_Numbers__LLong lang_Buffer__Buffer_toLLong_impl(lang_Buffer__Buffer* this) {
    return lang_Character__strtoll(this->data, NULL, 10);
}

lang_Numbers__LLong lang_Buffer__Buffer_toLLong_withBase_impl(lang_Buffer__Buffer* this, lang_Numbers__LLong base) {
    return lang_Character__strtoll(this->data, NULL, base);
}

lang_Numbers__ULong lang_Buffer__Buffer_toULong_impl(lang_Buffer__Buffer* this) {
    return lang_Character__strtoul(this->data, NULL, 10);
}

lang_Numbers__ULong lang_Buffer__Buffer_toULong_withBase_impl(lang_Buffer__Buffer* this, lang_Numbers__ULong base) {
    return lang_Character__strtoul(this->data, NULL, base);
}

lang_Numbers__Float lang_Buffer__Buffer_toFloat_impl(lang_Buffer__Buffer* this) {
    return lang_Character__strtof(this->data, NULL);
}

lang_Numbers__Double lang_Buffer__Buffer_toDouble_impl(lang_Buffer__Buffer* this) {
    return lang_Character__strtod(this->data, NULL);
}

lang_Numbers__LDouble lang_Buffer__Buffer_toLDouble_impl(lang_Buffer__Buffer* this) {
    return lang_Character__strtold(this->data, NULL);
}

lang_BufferIterator__BufferIterator* lang_Buffer__Buffer_iterator_impl(lang_Buffer__Buffer* this) {
    return lang_BufferIterator__BufferIterator_new_withStr((lang_types__Class*)lang_Character__Char_class(), this);
}

lang_BufferIterator__BufferIterator* lang_Buffer__Buffer_forward_impl(lang_Buffer__Buffer* this) {
    return lang_Buffer__Buffer_iterator(this);
}

lang_Iterators__BackIterator* lang_Buffer__Buffer_backward_impl(lang_Buffer__Buffer* this) {
    return ((lang_Iterators__BackIterator*) (lang_Iterators__BackIterator_reversed((lang_Iterators__BackIterator*) lang_Buffer__Buffer_backIterator(this))));
}

lang_BufferIterator__BufferIterator* lang_Buffer__Buffer_backIterator_impl(lang_Buffer__Buffer* this) {
    lang_BufferIterator__BufferIterator* iter = lang_BufferIterator__BufferIterator_new_withStr((lang_types__Class*)lang_Character__Char_class(), this);
    iter->i = lang_Buffer__Buffer_length(this);
    return iter;
}

lang_Character__Char lang_Buffer__Buffer_get_impl(lang_Buffer__Buffer* this, lang_Numbers__SSizeT index) {
    if (index < 0) {
        index = this->size + index;
    }
    if (index < 0 || index >= (lang_Numbers__SSizeT) this->size) {
        lang_Exception__Exception_throw((lang_Exception__Exception*) lang_Exception__OutOfBoundsException_new((lang_types__Class*) (lang_Buffer__Buffer_class()), index, this->size));
    }
    return this->data[index];
}

void lang_Buffer__Buffer_set_impl(lang_Buffer__Buffer* this, lang_Numbers__SSizeT index, lang_Character__Char value) {
    if (index < 0) {
        index = this->size + index;
    }
    if (index < 0 || index >= (lang_Numbers__SSizeT) this->size) {
        lang_Exception__Exception_throw((lang_Exception__Exception*) lang_Exception__OutOfBoundsException_new((lang_types__Class*) (lang_Buffer__Buffer_class()), index, this->size));
    }
    this->data[index] = value;
}

lang_Character__CString lang_Buffer__Buffer_toCString_impl(lang_Buffer__Buffer* this) {
    return ((lang_Character__CString) (this->data));
}

void lang_Buffer__Buffer___defaults___impl(lang_Buffer__Buffer* this) {
    ((lang_Iterators__Iterable*) this)->T = (void*) lang_Character__Char_class();
    lang_Iterators__Iterable___defaults___impl((lang_Iterators__Iterable*) this);
}

lang_Numbers__SizeT lang_Buffer__Buffer__rshift(lang_Buffer__Buffer* this) {
    return (lang_Numbers__SizeT) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->_rshift((lang_Buffer__Buffer*)this);
}

void lang_Buffer__Buffer_setBuffer(lang_Buffer__Buffer* this, lang_Buffer__Buffer* newOne) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->setBuffer((lang_Buffer__Buffer*)this, newOne);
}

lang_Numbers__SizeT lang_Buffer__Buffer_length(lang_Buffer__Buffer* this) {
    return (lang_Numbers__SizeT) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->length((lang_Buffer__Buffer*)this);
}

void lang_Buffer__Buffer_setCapacity(lang_Buffer__Buffer* this, lang_Numbers__SizeT newCapacity) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->setCapacity((lang_Buffer__Buffer*)this, newCapacity);
}

void lang_Buffer__Buffer_setLength(lang_Buffer__Buffer* this, lang_Numbers__SizeT newLength) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->setLength((lang_Buffer__Buffer*)this, newLength);
}

void lang_Buffer__Buffer_sizeFromData(lang_Buffer__Buffer* this) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->sizeFromData((lang_Buffer__Buffer*)this);
}

void lang_Buffer__Buffer_shiftRight(lang_Buffer__Buffer* this, lang_Numbers__SSizeT count) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->shiftRight((lang_Buffer__Buffer*)this, count);
}

void lang_Buffer__Buffer_shiftLeft(lang_Buffer__Buffer* this, lang_Numbers__SSizeT count) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->shiftLeft((lang_Buffer__Buffer*)this, count);
}

lang_Buffer__Buffer* lang_Buffer__Buffer_clone(lang_Buffer__Buffer* this) {
    return (lang_Buffer__Buffer*) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->clone((lang_Buffer__Buffer*)this);
}

lang_Buffer__Buffer* lang_Buffer__Buffer_clone_withMinimum(lang_Buffer__Buffer* this, lang_Numbers__SizeT minimumLength) {
    return (lang_Buffer__Buffer*) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->clone_withMinimum((lang_Buffer__Buffer*)this, minimumLength);
}

void lang_Buffer__Buffer_substring_tillEnd(lang_Buffer__Buffer* this, lang_Numbers__SizeT start) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->substring_tillEnd((lang_Buffer__Buffer*)this, start);
}

void lang_Buffer__Buffer_substring(lang_Buffer__Buffer* this, lang_Numbers__SSizeT start, lang_Numbers__SSizeT end) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->substring((lang_Buffer__Buffer*)this, start, end);
}

void lang_Buffer__Buffer_times(lang_Buffer__Buffer* this, lang_Numbers__SizeT count) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->times((lang_Buffer__Buffer*)this, count);
}

void lang_Buffer__Buffer_append_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->append_buf((lang_Buffer__Buffer*)this, other);
}

void lang_Buffer__Buffer_append_str(lang_Buffer__Buffer* this, lang_String__String* other) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->append_str((lang_Buffer__Buffer*)this, other);
}

void lang_Buffer__Buffer_append_pointer(lang_Buffer__Buffer* this, lang_Character__Char* other, lang_Numbers__SizeT otherLength) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->append_pointer((lang_Buffer__Buffer*)this, other, otherLength);
}

void lang_Buffer__Buffer_append_bufLength(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other, lang_Numbers__SizeT otherLength) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->append_bufLength((lang_Buffer__Buffer*)this, other, otherLength);
}

void lang_Buffer__Buffer_append_char(lang_Buffer__Buffer* this, lang_Character__Char other) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->append_char((lang_Buffer__Buffer*)this, other);
}

void lang_Buffer__Buffer_prepend_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->prepend_buf((lang_Buffer__Buffer*)this, other);
}

void lang_Buffer__Buffer_prepend_str(lang_Buffer__Buffer* this, lang_String__String* other) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->prepend_str((lang_Buffer__Buffer*)this, other);
}

void lang_Buffer__Buffer_prepend_pointer(lang_Buffer__Buffer* this, lang_Character__Char* other, lang_Numbers__SizeT otherLength) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->prepend_pointer((lang_Buffer__Buffer*)this, other, otherLength);
}

void lang_Buffer__Buffer_prepend_char(lang_Buffer__Buffer* this, lang_Character__Char other) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->prepend_char((lang_Buffer__Buffer*)this, other);
}

lang_types__Bool lang_Buffer__Buffer_empty__quest(lang_Buffer__Buffer* this) {
    return (lang_types__Bool) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->empty__quest((lang_Buffer__Buffer*)this);
}

lang_types__Bool lang_Buffer__Buffer_compare(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other, lang_Numbers__SSizeT start, lang_Numbers__SSizeT length) {
    return (lang_types__Bool) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->compare((lang_Buffer__Buffer*)this, other, start, length);
}

lang_types__Bool lang_Buffer__Buffer_startsWith__quest(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s) {
    return (lang_types__Bool) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->startsWith__quest((lang_Buffer__Buffer*)this, s);
}

lang_types__Bool lang_Buffer__Buffer_startsWith__quest_char(lang_Buffer__Buffer* this, lang_Character__Char c) {
    return (lang_types__Bool) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->startsWith__quest_char((lang_Buffer__Buffer*)this, c);
}

lang_types__Bool lang_Buffer__Buffer_endsWith__quest(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s) {
    return (lang_types__Bool) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->endsWith__quest((lang_Buffer__Buffer*)this, s);
}

lang_types__Bool lang_Buffer__Buffer_endsWith__quest_char(lang_Buffer__Buffer* this, lang_Character__Char c) {
    return (lang_types__Bool) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->endsWith__quest_char((lang_Buffer__Buffer*)this, c);
}

lang_Numbers__SSizeT lang_Buffer__Buffer_find_char(lang_Buffer__Buffer* this, lang_Character__Char what, lang_Numbers__SSizeT offset, lang_types__Bool searchCaseSensitive) {
    return (lang_Numbers__SSizeT) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->find_char((lang_Buffer__Buffer*)this, what, offset, searchCaseSensitive);
}

lang_Numbers__SSizeT lang_Buffer__Buffer_find(lang_Buffer__Buffer* this, lang_Buffer__Buffer* what, lang_Numbers__SSizeT offset, lang_types__Bool searchCaseSensitive) {
    return (lang_Numbers__SSizeT) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->find((lang_Buffer__Buffer*)this, what, offset, searchCaseSensitive);
}

lang_Numbers__SSizeT lang_Buffer__Buffer_find_pointer(lang_Buffer__Buffer* this, lang_Character__Char* what, lang_Numbers__SizeT whatSize, lang_Numbers__SSizeT offset, lang_types__Bool searchCaseSensitive) {
    return (lang_Numbers__SSizeT) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->find_pointer((lang_Buffer__Buffer*)this, what, whatSize, offset, searchCaseSensitive);
}

structs_ArrayList__ArrayList* lang_Buffer__Buffer_findAll_withCase(lang_Buffer__Buffer* this, lang_Buffer__Buffer* what, lang_types__Bool searchCaseSensitive) {
    return (structs_ArrayList__ArrayList*) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->findAll_withCase((lang_Buffer__Buffer*)this, what, searchCaseSensitive);
}

structs_ArrayList__ArrayList* lang_Buffer__Buffer_findAll_pointer(lang_Buffer__Buffer* this, lang_Character__Char* what, lang_Numbers__SizeT whatSize, lang_types__Bool searchCaseSensitive) {
    return (structs_ArrayList__ArrayList*) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->findAll_pointer((lang_Buffer__Buffer*)this, what, whatSize, searchCaseSensitive);
}

void lang_Buffer__Buffer_replaceAll_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* what, lang_Buffer__Buffer* whit, lang_types__Bool searchCaseSensitive) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->replaceAll_buf((lang_Buffer__Buffer*)this, what, whit, searchCaseSensitive);
}

void lang_Buffer__Buffer_replaceAll_char(lang_Buffer__Buffer* this, lang_Character__Char oldie, lang_Character__Char kiddo) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->replaceAll_char((lang_Buffer__Buffer*)this, oldie, kiddo);
}

void lang_Buffer__Buffer_map(lang_Buffer__Buffer* this, lang_types__Closure f) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->map((lang_Buffer__Buffer*)this, f);
}

void lang_Buffer__Buffer_toLower(lang_Buffer__Buffer* this) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->toLower((lang_Buffer__Buffer*)this);
}

void lang_Buffer__Buffer_toUpper(lang_Buffer__Buffer* this) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->toUpper((lang_Buffer__Buffer*)this);
}

lang_String__String* lang_Buffer__Buffer_toString(lang_Buffer__Buffer* this) {
    return (lang_String__String*) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->toString((lang_Buffer__Buffer*)this);
}

lang_Numbers__SSizeT lang_Buffer__Buffer_indexOf_char(lang_Buffer__Buffer* this, lang_Character__Char c, lang_Numbers__SSizeT start) {
    return (lang_Numbers__SSizeT) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->indexOf_char((lang_Buffer__Buffer*)this, c, start);
}

lang_Numbers__SSizeT lang_Buffer__Buffer_indexOf_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s, lang_Numbers__SSizeT start) {
    return (lang_Numbers__SSizeT) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->indexOf_buf((lang_Buffer__Buffer*)this, s, start);
}

lang_types__Bool lang_Buffer__Buffer_contains__quest_char(lang_Buffer__Buffer* this, lang_Character__Char c) {
    return (lang_types__Bool) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->contains__quest_char((lang_Buffer__Buffer*)this, c);
}

lang_types__Bool lang_Buffer__Buffer_contains__quest_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s) {
    return (lang_types__Bool) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->contains__quest_buf((lang_Buffer__Buffer*)this, s);
}

void lang_Buffer__Buffer_trim_pointer(lang_Buffer__Buffer* this, lang_Character__Char* s, lang_Numbers__SizeT sLength) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->trim_pointer((lang_Buffer__Buffer*)this, s, sLength);
}

void lang_Buffer__Buffer_trim_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->trim_buf((lang_Buffer__Buffer*)this, s);
}

void lang_Buffer__Buffer_trim_char(lang_Buffer__Buffer* this, lang_Character__Char c) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->trim_char((lang_Buffer__Buffer*)this, c);
}

void lang_Buffer__Buffer_trim_whitespace(lang_Buffer__Buffer* this) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->trim_whitespace((lang_Buffer__Buffer*)this);
}

void lang_Buffer__Buffer_trimLeft_space(lang_Buffer__Buffer* this) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->trimLeft_space((lang_Buffer__Buffer*)this);
}

void lang_Buffer__Buffer_trimLeft_char(lang_Buffer__Buffer* this, lang_Character__Char c) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->trimLeft_char((lang_Buffer__Buffer*)this, c);
}

void lang_Buffer__Buffer_trimLeft_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->trimLeft_buf((lang_Buffer__Buffer*)this, s);
}

void lang_Buffer__Buffer_trimLeft_pointer(lang_Buffer__Buffer* this, lang_Character__Char* s, lang_Numbers__SizeT sLength) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->trimLeft_pointer((lang_Buffer__Buffer*)this, s, sLength);
}

void lang_Buffer__Buffer_trimRight_space(lang_Buffer__Buffer* this) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->trimRight_space((lang_Buffer__Buffer*)this);
}

void lang_Buffer__Buffer_trimRight_char(lang_Buffer__Buffer* this, lang_Character__Char c) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->trimRight_char((lang_Buffer__Buffer*)this, c);
}

void lang_Buffer__Buffer_trimRight_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->trimRight_buf((lang_Buffer__Buffer*)this, s);
}

void lang_Buffer__Buffer_trimRight_pointer(lang_Buffer__Buffer* this, lang_Character__Char* s, lang_Numbers__SizeT sLength) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->trimRight_pointer((lang_Buffer__Buffer*)this, s, sLength);
}

void lang_Buffer__Buffer_reverse(lang_Buffer__Buffer* this) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->reverse((lang_Buffer__Buffer*)this);
}

lang_Numbers__SizeT lang_Buffer__Buffer_count(lang_Buffer__Buffer* this, lang_Character__Char what) {
    return (lang_Numbers__SizeT) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->count((lang_Buffer__Buffer*)this, what);
}

lang_Numbers__SizeT lang_Buffer__Buffer_count_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* what) {
    return (lang_Numbers__SizeT) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->count_buf((lang_Buffer__Buffer*)this, what);
}

lang_Numbers__SSizeT lang_Buffer__Buffer_lastIndexOf(lang_Buffer__Buffer* this, lang_Character__Char c) {
    return (lang_Numbers__SSizeT) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->lastIndexOf((lang_Buffer__Buffer*)this, c);
}

void lang_Buffer__Buffer_print(lang_Buffer__Buffer* this) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->print((lang_Buffer__Buffer*)this);
}

void lang_Buffer__Buffer_print_withStream(lang_Buffer__Buffer* this, lang_IO__FStream stream) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->print_withStream((lang_Buffer__Buffer*)this, stream);
}

void lang_Buffer__Buffer_println(lang_Buffer__Buffer* this) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->println((lang_Buffer__Buffer*)this);
}

void lang_Buffer__Buffer_println_withStream(lang_Buffer__Buffer* this, lang_IO__FStream stream) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->println_withStream((lang_Buffer__Buffer*)this, stream);
}

lang_Numbers__Int lang_Buffer__Buffer_toInt(lang_Buffer__Buffer* this) {
    return (lang_Numbers__Int) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->toInt((lang_Buffer__Buffer*)this);
}

lang_Numbers__Int lang_Buffer__Buffer_toInt_withBase(lang_Buffer__Buffer* this, lang_Numbers__Int base) {
    return (lang_Numbers__Int) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->toInt_withBase((lang_Buffer__Buffer*)this, base);
}

lang_Numbers__Long lang_Buffer__Buffer_toLong(lang_Buffer__Buffer* this) {
    return (lang_Numbers__Long) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->toLong((lang_Buffer__Buffer*)this);
}

lang_Numbers__Long lang_Buffer__Buffer_toLong_withBase(lang_Buffer__Buffer* this, lang_Numbers__Long base) {
    return (lang_Numbers__Long) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->toLong_withBase((lang_Buffer__Buffer*)this, base);
}

lang_Numbers__LLong lang_Buffer__Buffer_toLLong(lang_Buffer__Buffer* this) {
    return (lang_Numbers__LLong) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->toLLong((lang_Buffer__Buffer*)this);
}

lang_Numbers__LLong lang_Buffer__Buffer_toLLong_withBase(lang_Buffer__Buffer* this, lang_Numbers__LLong base) {
    return (lang_Numbers__LLong) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->toLLong_withBase((lang_Buffer__Buffer*)this, base);
}

lang_Numbers__ULong lang_Buffer__Buffer_toULong(lang_Buffer__Buffer* this) {
    return (lang_Numbers__ULong) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->toULong((lang_Buffer__Buffer*)this);
}

lang_Numbers__ULong lang_Buffer__Buffer_toULong_withBase(lang_Buffer__Buffer* this, lang_Numbers__ULong base) {
    return (lang_Numbers__ULong) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->toULong_withBase((lang_Buffer__Buffer*)this, base);
}

lang_Numbers__Float lang_Buffer__Buffer_toFloat(lang_Buffer__Buffer* this) {
    return (lang_Numbers__Float) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->toFloat((lang_Buffer__Buffer*)this);
}

lang_Numbers__Double lang_Buffer__Buffer_toDouble(lang_Buffer__Buffer* this) {
    return (lang_Numbers__Double) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->toDouble((lang_Buffer__Buffer*)this);
}

lang_Numbers__LDouble lang_Buffer__Buffer_toLDouble(lang_Buffer__Buffer* this) {
    return (lang_Numbers__LDouble) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->toLDouble((lang_Buffer__Buffer*)this);
}

lang_BufferIterator__BufferIterator* lang_Buffer__Buffer_iterator(lang_Buffer__Buffer* this) {
    return (lang_BufferIterator__BufferIterator*) ((lang_Iterators__IterableClass *)((lang_types__Object *)this)->class)->iterator((lang_Iterators__Iterable*)this);
}

lang_BufferIterator__BufferIterator* lang_Buffer__Buffer_forward(lang_Buffer__Buffer* this) {
    return (lang_BufferIterator__BufferIterator*) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->forward((lang_Buffer__Buffer*)this);
}

lang_Iterators__BackIterator* lang_Buffer__Buffer_backward(lang_Buffer__Buffer* this) {
    return (lang_Iterators__BackIterator*) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->backward((lang_Buffer__Buffer*)this);
}

lang_BufferIterator__BufferIterator* lang_Buffer__Buffer_backIterator(lang_Buffer__Buffer* this) {
    return (lang_BufferIterator__BufferIterator*) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->backIterator((lang_Buffer__Buffer*)this);
}

lang_Character__Char lang_Buffer__Buffer_get(lang_Buffer__Buffer* this, lang_Numbers__SSizeT index) {
    return (lang_Character__Char) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->get((lang_Buffer__Buffer*)this, index);
}

void lang_Buffer__Buffer_set(lang_Buffer__Buffer* this, lang_Numbers__SSizeT index, lang_Character__Char value) {
    ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->set((lang_Buffer__Buffer*)this, index, value);
}

lang_Character__CString lang_Buffer__Buffer_toCString(lang_Buffer__Buffer* this) {
    return (lang_Character__CString) ((lang_Buffer__BufferClass *)((lang_types__Object *)this)->class)->toCString((lang_Buffer__Buffer*)this);
}

void lang_Buffer__Buffer___defaults__(lang_Buffer__Buffer* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_Buffer__Buffer* lang_Buffer__Buffer_new_empty() {
    
    lang_Buffer__Buffer* this = ((lang_Buffer__Buffer*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Buffer__Buffer_class())));
    lang_Buffer__Buffer___defaults__(this);
    lang_Buffer__Buffer_init_empty((lang_Buffer__Buffer*) this);
    return this;
}
lang_Buffer__Buffer* lang_Buffer__Buffer_new(lang_Numbers__SizeT capacity) {
    
    lang_Buffer__Buffer* this = ((lang_Buffer__Buffer*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Buffer__Buffer_class())));
    lang_Buffer__Buffer___defaults__(this);
    lang_Buffer__Buffer_init((lang_Buffer__Buffer*) this, capacity);
    return this;
}
lang_Buffer__Buffer* lang_Buffer__Buffer_new_cStrWithLength(lang_Character__CString s, lang_Numbers__SizeT length, lang_types__Bool stringLiteral__quest) {
    
    lang_Buffer__Buffer* this = ((lang_Buffer__Buffer*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Buffer__Buffer_class())));
    lang_Buffer__Buffer___defaults__(this);
    lang_Buffer__Buffer_init_cStrWithLength((lang_Buffer__Buffer*) this, s, length, stringLiteral__quest);
    return this;
}
void lang_Buffer__Buffer___load__() {
    lang_Iterators__Iterable___load__();
}

lang_Buffer__BufferClass *lang_Buffer__Buffer_class(){
    static _Bool __done__ = false;
    static lang_Buffer__BufferClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Buffer__Buffer),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) lang_Buffer__Buffer___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Buffer__Buffer___load__,
                },
            },
            .iterator = (void*) lang_Buffer__Buffer_iterator_impl,
            .toList = (void*) lang_Iterators__Iterable_toList_impl,
            .reduce = (void*) lang_Iterators__Iterable_reduce_impl,
            .each = (void*) lang_Iterators__Iterable_each_impl,
            .eachUntil = (void*) lang_Iterators__Iterable_eachUntil_impl,
            .each_withIndex = (void*) lang_Iterators__Iterable_each_withIndex_impl,
        },
        ._rshift = (void*) lang_Buffer__Buffer__rshift_impl,
        .setBuffer = (void*) lang_Buffer__Buffer_setBuffer_impl,
        .new_empty = (void*) lang_Buffer__Buffer_new_empty,
        .new = (void*) lang_Buffer__Buffer_new,
        .new_cStrWithLength = (void*) lang_Buffer__Buffer_new_cStrWithLength,
        .length = (void*) lang_Buffer__Buffer_length_impl,
        .setCapacity = (void*) lang_Buffer__Buffer_setCapacity_impl,
        .setLength = (void*) lang_Buffer__Buffer_setLength_impl,
        .sizeFromData = (void*) lang_Buffer__Buffer_sizeFromData_impl,
        .shiftRight = (void*) lang_Buffer__Buffer_shiftRight_impl,
        .shiftLeft = (void*) lang_Buffer__Buffer_shiftLeft_impl,
        .clone = (void*) lang_Buffer__Buffer_clone_impl,
        .clone_withMinimum = (void*) lang_Buffer__Buffer_clone_withMinimum_impl,
        .substring_tillEnd = (void*) lang_Buffer__Buffer_substring_tillEnd_impl,
        .substring = (void*) lang_Buffer__Buffer_substring_impl,
        .times = (void*) lang_Buffer__Buffer_times_impl,
        .append_buf = (void*) lang_Buffer__Buffer_append_buf_impl,
        .append_str = (void*) lang_Buffer__Buffer_append_str_impl,
        .append_pointer = (void*) lang_Buffer__Buffer_append_pointer_impl,
        .append_bufLength = (void*) lang_Buffer__Buffer_append_bufLength_impl,
        .append_char = (void*) lang_Buffer__Buffer_append_char_impl,
        .prepend_buf = (void*) lang_Buffer__Buffer_prepend_buf_impl,
        .prepend_str = (void*) lang_Buffer__Buffer_prepend_str_impl,
        .prepend_pointer = (void*) lang_Buffer__Buffer_prepend_pointer_impl,
        .prepend_char = (void*) lang_Buffer__Buffer_prepend_char_impl,
        .empty__quest = (void*) lang_Buffer__Buffer_empty__quest_impl,
        .compare = (void*) lang_Buffer__Buffer_compare_impl,
        .startsWith__quest = (void*) lang_Buffer__Buffer_startsWith__quest_impl,
        .startsWith__quest_char = (void*) lang_Buffer__Buffer_startsWith__quest_char_impl,
        .endsWith__quest = (void*) lang_Buffer__Buffer_endsWith__quest_impl,
        .endsWith__quest_char = (void*) lang_Buffer__Buffer_endsWith__quest_char_impl,
        .find_char = (void*) lang_Buffer__Buffer_find_char_impl,
        .find = (void*) lang_Buffer__Buffer_find_impl,
        .find_pointer = (void*) lang_Buffer__Buffer_find_pointer_impl,
        .findAll_withCase = (void*) lang_Buffer__Buffer_findAll_withCase_impl,
        .findAll_pointer = (void*) lang_Buffer__Buffer_findAll_pointer_impl,
        .replaceAll_buf = (void*) lang_Buffer__Buffer_replaceAll_buf_impl,
        .replaceAll_char = (void*) lang_Buffer__Buffer_replaceAll_char_impl,
        .map = (void*) lang_Buffer__Buffer_map_impl,
        .toLower = (void*) lang_Buffer__Buffer_toLower_impl,
        .toUpper = (void*) lang_Buffer__Buffer_toUpper_impl,
        .toString = (void*) lang_Buffer__Buffer_toString_impl,
        .indexOf_char = (void*) lang_Buffer__Buffer_indexOf_char_impl,
        .indexOf_buf = (void*) lang_Buffer__Buffer_indexOf_buf_impl,
        .contains__quest_char = (void*) lang_Buffer__Buffer_contains__quest_char_impl,
        .contains__quest_buf = (void*) lang_Buffer__Buffer_contains__quest_buf_impl,
        .trim_pointer = (void*) lang_Buffer__Buffer_trim_pointer_impl,
        .trim_buf = (void*) lang_Buffer__Buffer_trim_buf_impl,
        .trim_char = (void*) lang_Buffer__Buffer_trim_char_impl,
        .trim_whitespace = (void*) lang_Buffer__Buffer_trim_whitespace_impl,
        .trimLeft_space = (void*) lang_Buffer__Buffer_trimLeft_space_impl,
        .trimLeft_char = (void*) lang_Buffer__Buffer_trimLeft_char_impl,
        .trimLeft_buf = (void*) lang_Buffer__Buffer_trimLeft_buf_impl,
        .trimLeft_pointer = (void*) lang_Buffer__Buffer_trimLeft_pointer_impl,
        .trimRight_space = (void*) lang_Buffer__Buffer_trimRight_space_impl,
        .trimRight_char = (void*) lang_Buffer__Buffer_trimRight_char_impl,
        .trimRight_buf = (void*) lang_Buffer__Buffer_trimRight_buf_impl,
        .trimRight_pointer = (void*) lang_Buffer__Buffer_trimRight_pointer_impl,
        .reverse = (void*) lang_Buffer__Buffer_reverse_impl,
        .count = (void*) lang_Buffer__Buffer_count_impl,
        .count_buf = (void*) lang_Buffer__Buffer_count_buf_impl,
        .lastIndexOf = (void*) lang_Buffer__Buffer_lastIndexOf_impl,
        .print = (void*) lang_Buffer__Buffer_print_impl,
        .print_withStream = (void*) lang_Buffer__Buffer_print_withStream_impl,
        .println = (void*) lang_Buffer__Buffer_println_impl,
        .println_withStream = (void*) lang_Buffer__Buffer_println_withStream_impl,
        .toInt = (void*) lang_Buffer__Buffer_toInt_impl,
        .toInt_withBase = (void*) lang_Buffer__Buffer_toInt_withBase_impl,
        .toLong = (void*) lang_Buffer__Buffer_toLong_impl,
        .toLong_withBase = (void*) lang_Buffer__Buffer_toLong_withBase_impl,
        .toLLong = (void*) lang_Buffer__Buffer_toLLong_impl,
        .toLLong_withBase = (void*) lang_Buffer__Buffer_toLLong_withBase_impl,
        .toULong = (void*) lang_Buffer__Buffer_toULong_impl,
        .toULong_withBase = (void*) lang_Buffer__Buffer_toULong_withBase_impl,
        .toFloat = (void*) lang_Buffer__Buffer_toFloat_impl,
        .toDouble = (void*) lang_Buffer__Buffer_toDouble_impl,
        .toLDouble = (void*) lang_Buffer__Buffer_toLDouble_impl,
        .forward = (void*) lang_Buffer__Buffer_forward_impl,
        .backward = (void*) lang_Buffer__Buffer_backward_impl,
        .backIterator = (void*) lang_Buffer__Buffer_backIterator_impl,
        .get = (void*) lang_Buffer__Buffer_get_impl,
        .set = (void*) lang_Buffer__Buffer_set_impl,
        .toCString = (void*) lang_Buffer__Buffer_toCString_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Iterators__Iterable_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Buffer", 6);
    }
    return &class;
}
void lang_Buffer_load() {
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
        lang_Numbers_load();
        lang_Abstractions_load();
        lang_Format_load();
        lang_IO_load();
        structs_ArrayList_load();
        lang_Buffer__Buffer___load__();
        __strLit36 = (void*) lang_String__makeStringLiteral(" \r\n\t", 4);
    }
}


lang_types__Bool lang_Buffer____OP_EQ_Buffer_Buffer__Bool(lang_Buffer__Buffer* buff1, lang_Buffer__Buffer* buff2) {
    return lang_Buffer__Buffer_equals__quest((lang_Buffer__Buffer*) buff1, buff2);
}

lang_types__Bool lang_Buffer____OP_NE_Buffer_Buffer__Bool(lang_Buffer__Buffer* buff1, lang_Buffer__Buffer* buff2) {
    return !lang_Buffer__Buffer_equals__quest((lang_Buffer__Buffer*) buff1, buff2);
}

lang_Character__Char lang_Buffer____OP_IDX_Buffer_SSizeT__Char(lang_Buffer__Buffer* buffer, lang_Numbers__SSizeT index) {
    return lang_Buffer__Buffer_get(buffer, index);
}

void lang_Buffer____OP_IDX_ASS_Buffer_SSizeT_Char(lang_Buffer__Buffer* buffer, lang_Numbers__SSizeT index, lang_Character__Char value) {
    lang_Buffer__Buffer_set(buffer, index, value);
}

lang_Buffer__Buffer* lang_Buffer____OP_IDX_Buffer_Range__Buffer(lang_Buffer__Buffer* buffer, lang_Numbers__Range range) {
    lang_Buffer__Buffer* b = lang_Buffer__Buffer_clone(buffer);
    lang_Buffer__Buffer_substring(b, range.min, range.max);
    return b;
}

lang_Buffer__Buffer* lang_Buffer____OP_MUL_Buffer_Int__Buffer(lang_Buffer__Buffer* buffer, lang_Numbers__Int count) {
    lang_Buffer__Buffer* b = lang_Buffer__Buffer_clone_withMinimum(buffer, buffer->size * count);
    lang_Buffer__Buffer_times(b, count);
    return b;
}

lang_Buffer__Buffer* lang_Buffer____OP_ADD_Buffer_Buffer__Buffer(lang_Buffer__Buffer* left, lang_Buffer__Buffer* right) {
    lang_Buffer__Buffer* b = lang_Buffer__Buffer_clone_withMinimum(left, left->size + right->size);
    lang_Buffer__Buffer_append_buf(b, right);
    return b;
}
