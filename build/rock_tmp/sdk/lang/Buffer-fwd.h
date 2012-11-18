/* lang/Buffer header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Buffer_fwd___
#define ___lang_Buffer_fwd___

struct _lang_Buffer__Buffer;
typedef struct _lang_Buffer__Buffer lang_Buffer__Buffer;
struct _lang_Buffer__BufferClass;
typedef struct _lang_Buffer__BufferClass lang_Buffer__BufferClass;

#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/BufferIterator-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Character-fwd.h>
#include <sdk/lang/VarArgs-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/Abstractions-fwd.h>
#include <sdk/lang/Format-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/structs/ArrayList-fwd.h>

#ifndef __FUNC___Char_Char__DEFINE
#define __FUNC___Char_Char__DEFINE

typedef lang_Character__Char (*__FUNC___Char_Char)(lang_Character__Char, void*);

#endif

lang_Buffer__BufferClass *lang_Buffer__Buffer_class();
lang_Numbers__SizeT lang_Buffer__Buffer__rshift(lang_Buffer__Buffer* this);
lang_Numbers__SizeT lang_Buffer__Buffer__rshift_impl(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_setBuffer(lang_Buffer__Buffer* this, lang_Buffer__Buffer* newOne);
void lang_Buffer__Buffer_setBuffer_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* newOne);
lang_Buffer__Buffer* lang_Buffer__Buffer_new_empty();
void lang_Buffer__Buffer_init_empty(lang_Buffer__Buffer* this);
lang_Buffer__Buffer* lang_Buffer__Buffer_new(lang_Numbers__SizeT capacity);
void lang_Buffer__Buffer_init(lang_Buffer__Buffer* this, lang_Numbers__SizeT capacity);
lang_Buffer__Buffer* lang_Buffer__Buffer_new_cStrWithLength(lang_Character__CString s, lang_Numbers__SizeT length, lang_types__Bool stringLiteral__quest);
void lang_Buffer__Buffer_init_cStrWithLength(lang_Buffer__Buffer* this, lang_Character__CString s, lang_Numbers__SizeT length, lang_types__Bool stringLiteral__quest);
lang_Numbers__SizeT lang_Buffer__Buffer_length(lang_Buffer__Buffer* this);
lang_Numbers__SizeT lang_Buffer__Buffer_length_impl(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_setCapacity(lang_Buffer__Buffer* this, lang_Numbers__SizeT newCapacity);
void lang_Buffer__Buffer_setCapacity_impl(lang_Buffer__Buffer* this, lang_Numbers__SizeT newCapacity);
void lang_Buffer__Buffer_setLength(lang_Buffer__Buffer* this, lang_Numbers__SizeT newLength);
void lang_Buffer__Buffer_setLength_impl(lang_Buffer__Buffer* this, lang_Numbers__SizeT newLength);
void lang_Buffer__Buffer_sizeFromData(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_sizeFromData_impl(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_shiftRight(lang_Buffer__Buffer* this, lang_Numbers__SSizeT count);
void lang_Buffer__Buffer_shiftRight_impl(lang_Buffer__Buffer* this, lang_Numbers__SSizeT count);
void lang_Buffer__Buffer_shiftLeft(lang_Buffer__Buffer* this, lang_Numbers__SSizeT count);
void lang_Buffer__Buffer_shiftLeft_impl(lang_Buffer__Buffer* this, lang_Numbers__SSizeT count);
lang_Buffer__Buffer* lang_Buffer__Buffer_clone(lang_Buffer__Buffer* this);
lang_Buffer__Buffer* lang_Buffer__Buffer_clone_impl(lang_Buffer__Buffer* this);
lang_Buffer__Buffer* lang_Buffer__Buffer_clone_withMinimum(lang_Buffer__Buffer* this, lang_Numbers__SizeT minimumLength);
lang_Buffer__Buffer* lang_Buffer__Buffer_clone_withMinimum_impl(lang_Buffer__Buffer* this, lang_Numbers__SizeT minimumLength);
void lang_Buffer__Buffer_substring_tillEnd(lang_Buffer__Buffer* this, lang_Numbers__SizeT start);
void lang_Buffer__Buffer_substring_tillEnd_impl(lang_Buffer__Buffer* this, lang_Numbers__SizeT start);
void lang_Buffer__Buffer_substring(lang_Buffer__Buffer* this, lang_Numbers__SSizeT start, lang_Numbers__SSizeT end);
void lang_Buffer__Buffer_substring_impl(lang_Buffer__Buffer* this, lang_Numbers__SSizeT start, lang_Numbers__SSizeT end);
void lang_Buffer__Buffer_times(lang_Buffer__Buffer* this, lang_Numbers__SizeT count);
void lang_Buffer__Buffer_times_impl(lang_Buffer__Buffer* this, lang_Numbers__SizeT count);
void lang_Buffer__Buffer_append_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other);
void lang_Buffer__Buffer_append_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other);
void lang_Buffer__Buffer_append_str(lang_Buffer__Buffer* this, lang_String__String* other);
void lang_Buffer__Buffer_append_str_impl(lang_Buffer__Buffer* this, lang_String__String* other);
void lang_Buffer__Buffer_append_pointer(lang_Buffer__Buffer* this, lang_Character__Char* other, lang_Numbers__SizeT otherLength);
void lang_Buffer__Buffer_append_pointer_impl(lang_Buffer__Buffer* this, lang_Character__Char* other, lang_Numbers__SizeT otherLength);
void lang_Buffer__Buffer_append_bufLength(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other, lang_Numbers__SizeT otherLength);
void lang_Buffer__Buffer_append_bufLength_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other, lang_Numbers__SizeT otherLength);
void lang_Buffer__Buffer_append_char(lang_Buffer__Buffer* this, lang_Character__Char other);
void lang_Buffer__Buffer_append_char_impl(lang_Buffer__Buffer* this, lang_Character__Char other);
void lang_Buffer__Buffer_prepend_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other);
void lang_Buffer__Buffer_prepend_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other);
void lang_Buffer__Buffer_prepend_str(lang_Buffer__Buffer* this, lang_String__String* other);
void lang_Buffer__Buffer_prepend_str_impl(lang_Buffer__Buffer* this, lang_String__String* other);
void lang_Buffer__Buffer_prepend_pointer(lang_Buffer__Buffer* this, lang_Character__Char* other, lang_Numbers__SizeT otherLength);
void lang_Buffer__Buffer_prepend_pointer_impl(lang_Buffer__Buffer* this, lang_Character__Char* other, lang_Numbers__SizeT otherLength);
void lang_Buffer__Buffer_prepend_char(lang_Buffer__Buffer* this, lang_Character__Char other);
void lang_Buffer__Buffer_prepend_char_impl(lang_Buffer__Buffer* this, lang_Character__Char other);
lang_types__Bool lang_Buffer__Buffer_empty__quest(lang_Buffer__Buffer* this);
lang_types__Bool lang_Buffer__Buffer_empty__quest_impl(lang_Buffer__Buffer* this);
lang_types__Bool lang_Buffer__Buffer_compare(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other, lang_Numbers__SSizeT start, lang_Numbers__SSizeT length);
lang_types__Bool lang_Buffer__Buffer_compare_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other, lang_Numbers__SSizeT start, lang_Numbers__SSizeT length);
lang_types__Bool lang_Buffer__Buffer_equals__quest(lang_Buffer__Buffer* this, lang_Buffer__Buffer* other);
lang_types__Bool lang_Buffer__Buffer_startsWith__quest(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s);
lang_types__Bool lang_Buffer__Buffer_startsWith__quest_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s);
lang_types__Bool lang_Buffer__Buffer_startsWith__quest_char(lang_Buffer__Buffer* this, lang_Character__Char c);
lang_types__Bool lang_Buffer__Buffer_startsWith__quest_char_impl(lang_Buffer__Buffer* this, lang_Character__Char c);
lang_types__Bool lang_Buffer__Buffer_endsWith__quest(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s);
lang_types__Bool lang_Buffer__Buffer_endsWith__quest_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s);
lang_types__Bool lang_Buffer__Buffer_endsWith__quest_char(lang_Buffer__Buffer* this, lang_Character__Char c);
lang_types__Bool lang_Buffer__Buffer_endsWith__quest_char_impl(lang_Buffer__Buffer* this, lang_Character__Char c);
lang_Numbers__SSizeT lang_Buffer__Buffer_find_char(lang_Buffer__Buffer* this, lang_Character__Char what, lang_Numbers__SSizeT offset, lang_types__Bool searchCaseSensitive);
lang_Numbers__SSizeT lang_Buffer__Buffer_find_char_impl(lang_Buffer__Buffer* this, lang_Character__Char what, lang_Numbers__SSizeT offset, lang_types__Bool searchCaseSensitive);
lang_Numbers__SSizeT lang_Buffer__Buffer_find(lang_Buffer__Buffer* this, lang_Buffer__Buffer* what, lang_Numbers__SSizeT offset, lang_types__Bool searchCaseSensitive);
lang_Numbers__SSizeT lang_Buffer__Buffer_find_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* what, lang_Numbers__SSizeT offset, lang_types__Bool searchCaseSensitive);
lang_Numbers__SSizeT lang_Buffer__Buffer_find_pointer(lang_Buffer__Buffer* this, lang_Character__Char* what, lang_Numbers__SizeT whatSize, lang_Numbers__SSizeT offset, lang_types__Bool searchCaseSensitive);
lang_Numbers__SSizeT lang_Buffer__Buffer_find_pointer_impl(lang_Buffer__Buffer* this, lang_Character__Char* what, lang_Numbers__SizeT whatSize, lang_Numbers__SSizeT offset, lang_types__Bool searchCaseSensitive);
structs_ArrayList__ArrayList* lang_Buffer__Buffer_findAll_withCase(lang_Buffer__Buffer* this, lang_Buffer__Buffer* what, lang_types__Bool searchCaseSensitive);
structs_ArrayList__ArrayList* lang_Buffer__Buffer_findAll_withCase_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* what, lang_types__Bool searchCaseSensitive);
structs_ArrayList__ArrayList* lang_Buffer__Buffer_findAll_pointer(lang_Buffer__Buffer* this, lang_Character__Char* what, lang_Numbers__SizeT whatSize, lang_types__Bool searchCaseSensitive);
structs_ArrayList__ArrayList* lang_Buffer__Buffer_findAll_pointer_impl(lang_Buffer__Buffer* this, lang_Character__Char* what, lang_Numbers__SizeT whatSize, lang_types__Bool searchCaseSensitive);
void lang_Buffer__Buffer_replaceAll_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* what, lang_Buffer__Buffer* whit, lang_types__Bool searchCaseSensitive);
void lang_Buffer__Buffer_replaceAll_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* what, lang_Buffer__Buffer* whit, lang_types__Bool searchCaseSensitive);
void lang_Buffer__Buffer_replaceAll_char(lang_Buffer__Buffer* this, lang_Character__Char oldie, lang_Character__Char kiddo);
void lang_Buffer__Buffer_replaceAll_char_impl(lang_Buffer__Buffer* this, lang_Character__Char oldie, lang_Character__Char kiddo);
void lang_Buffer__Buffer_map(lang_Buffer__Buffer* this, lang_types__Closure f);
void lang_Buffer__Buffer_map_impl(lang_Buffer__Buffer* this, lang_types__Closure f);
void lang_Buffer__Buffer_toLower(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_toLower_impl(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_toUpper(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_toUpper_impl(lang_Buffer__Buffer* this);
lang_String__String* lang_Buffer__Buffer_toString(lang_Buffer__Buffer* this);
lang_String__String* lang_Buffer__Buffer_toString_impl(lang_Buffer__Buffer* this);
lang_Numbers__SSizeT lang_Buffer__Buffer_indexOf_char(lang_Buffer__Buffer* this, lang_Character__Char c, lang_Numbers__SSizeT start);
lang_Numbers__SSizeT lang_Buffer__Buffer_indexOf_char_impl(lang_Buffer__Buffer* this, lang_Character__Char c, lang_Numbers__SSizeT start);
lang_Numbers__SSizeT lang_Buffer__Buffer_indexOf_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s, lang_Numbers__SSizeT start);
lang_Numbers__SSizeT lang_Buffer__Buffer_indexOf_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s, lang_Numbers__SSizeT start);
lang_types__Bool lang_Buffer__Buffer_contains__quest_char(lang_Buffer__Buffer* this, lang_Character__Char c);
lang_types__Bool lang_Buffer__Buffer_contains__quest_char_impl(lang_Buffer__Buffer* this, lang_Character__Char c);
lang_types__Bool lang_Buffer__Buffer_contains__quest_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s);
lang_types__Bool lang_Buffer__Buffer_contains__quest_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s);
void lang_Buffer__Buffer_trim_pointer(lang_Buffer__Buffer* this, lang_Character__Char* s, lang_Numbers__SizeT sLength);
void lang_Buffer__Buffer_trim_pointer_impl(lang_Buffer__Buffer* this, lang_Character__Char* s, lang_Numbers__SizeT sLength);
void lang_Buffer__Buffer_trim_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s);
void lang_Buffer__Buffer_trim_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s);
void lang_Buffer__Buffer_trim_char(lang_Buffer__Buffer* this, lang_Character__Char c);
void lang_Buffer__Buffer_trim_char_impl(lang_Buffer__Buffer* this, lang_Character__Char c);
void lang_Buffer__Buffer_trim_whitespace(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_trim_whitespace_impl(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_trimLeft_space(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_trimLeft_space_impl(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_trimLeft_char(lang_Buffer__Buffer* this, lang_Character__Char c);
void lang_Buffer__Buffer_trimLeft_char_impl(lang_Buffer__Buffer* this, lang_Character__Char c);
void lang_Buffer__Buffer_trimLeft_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s);
void lang_Buffer__Buffer_trimLeft_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s);
void lang_Buffer__Buffer_trimLeft_pointer(lang_Buffer__Buffer* this, lang_Character__Char* s, lang_Numbers__SizeT sLength);
void lang_Buffer__Buffer_trimLeft_pointer_impl(lang_Buffer__Buffer* this, lang_Character__Char* s, lang_Numbers__SizeT sLength);
void lang_Buffer__Buffer_trimRight_space(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_trimRight_space_impl(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_trimRight_char(lang_Buffer__Buffer* this, lang_Character__Char c);
void lang_Buffer__Buffer_trimRight_char_impl(lang_Buffer__Buffer* this, lang_Character__Char c);
void lang_Buffer__Buffer_trimRight_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s);
void lang_Buffer__Buffer_trimRight_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* s);
void lang_Buffer__Buffer_trimRight_pointer(lang_Buffer__Buffer* this, lang_Character__Char* s, lang_Numbers__SizeT sLength);
void lang_Buffer__Buffer_trimRight_pointer_impl(lang_Buffer__Buffer* this, lang_Character__Char* s, lang_Numbers__SizeT sLength);
void lang_Buffer__Buffer_reverse(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_reverse_impl(lang_Buffer__Buffer* this);
lang_Numbers__SizeT lang_Buffer__Buffer_count(lang_Buffer__Buffer* this, lang_Character__Char what);
lang_Numbers__SizeT lang_Buffer__Buffer_count_impl(lang_Buffer__Buffer* this, lang_Character__Char what);
lang_Numbers__SizeT lang_Buffer__Buffer_count_buf(lang_Buffer__Buffer* this, lang_Buffer__Buffer* what);
lang_Numbers__SizeT lang_Buffer__Buffer_count_buf_impl(lang_Buffer__Buffer* this, lang_Buffer__Buffer* what);
lang_Numbers__SSizeT lang_Buffer__Buffer_lastIndexOf(lang_Buffer__Buffer* this, lang_Character__Char c);
lang_Numbers__SSizeT lang_Buffer__Buffer_lastIndexOf_impl(lang_Buffer__Buffer* this, lang_Character__Char c);
void lang_Buffer__Buffer_print(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_print_impl(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_print_withStream(lang_Buffer__Buffer* this, lang_IO__FStream stream);
void lang_Buffer__Buffer_print_withStream_impl(lang_Buffer__Buffer* this, lang_IO__FStream stream);
void lang_Buffer__Buffer_println(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_println_impl(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer_println_withStream(lang_Buffer__Buffer* this, lang_IO__FStream stream);
void lang_Buffer__Buffer_println_withStream_impl(lang_Buffer__Buffer* this, lang_IO__FStream stream);
lang_Numbers__Int lang_Buffer__Buffer_toInt(lang_Buffer__Buffer* this);
lang_Numbers__Int lang_Buffer__Buffer_toInt_impl(lang_Buffer__Buffer* this);
lang_Numbers__Int lang_Buffer__Buffer_toInt_withBase(lang_Buffer__Buffer* this, lang_Numbers__Int base);
lang_Numbers__Int lang_Buffer__Buffer_toInt_withBase_impl(lang_Buffer__Buffer* this, lang_Numbers__Int base);
lang_Numbers__Long lang_Buffer__Buffer_toLong(lang_Buffer__Buffer* this);
lang_Numbers__Long lang_Buffer__Buffer_toLong_impl(lang_Buffer__Buffer* this);
lang_Numbers__Long lang_Buffer__Buffer_toLong_withBase(lang_Buffer__Buffer* this, lang_Numbers__Long base);
lang_Numbers__Long lang_Buffer__Buffer_toLong_withBase_impl(lang_Buffer__Buffer* this, lang_Numbers__Long base);
lang_Numbers__LLong lang_Buffer__Buffer_toLLong(lang_Buffer__Buffer* this);
lang_Numbers__LLong lang_Buffer__Buffer_toLLong_impl(lang_Buffer__Buffer* this);
lang_Numbers__LLong lang_Buffer__Buffer_toLLong_withBase(lang_Buffer__Buffer* this, lang_Numbers__LLong base);
lang_Numbers__LLong lang_Buffer__Buffer_toLLong_withBase_impl(lang_Buffer__Buffer* this, lang_Numbers__LLong base);
lang_Numbers__ULong lang_Buffer__Buffer_toULong(lang_Buffer__Buffer* this);
lang_Numbers__ULong lang_Buffer__Buffer_toULong_impl(lang_Buffer__Buffer* this);
lang_Numbers__ULong lang_Buffer__Buffer_toULong_withBase(lang_Buffer__Buffer* this, lang_Numbers__ULong base);
lang_Numbers__ULong lang_Buffer__Buffer_toULong_withBase_impl(lang_Buffer__Buffer* this, lang_Numbers__ULong base);
lang_Numbers__Float lang_Buffer__Buffer_toFloat(lang_Buffer__Buffer* this);
lang_Numbers__Float lang_Buffer__Buffer_toFloat_impl(lang_Buffer__Buffer* this);
lang_Numbers__Double lang_Buffer__Buffer_toDouble(lang_Buffer__Buffer* this);
lang_Numbers__Double lang_Buffer__Buffer_toDouble_impl(lang_Buffer__Buffer* this);
lang_Numbers__LDouble lang_Buffer__Buffer_toLDouble(lang_Buffer__Buffer* this);
lang_Numbers__LDouble lang_Buffer__Buffer_toLDouble_impl(lang_Buffer__Buffer* this);
lang_BufferIterator__BufferIterator* lang_Buffer__Buffer_iterator(lang_Buffer__Buffer* this);
lang_BufferIterator__BufferIterator* lang_Buffer__Buffer_iterator_impl(lang_Buffer__Buffer* this);
lang_BufferIterator__BufferIterator* lang_Buffer__Buffer_forward(lang_Buffer__Buffer* this);
lang_BufferIterator__BufferIterator* lang_Buffer__Buffer_forward_impl(lang_Buffer__Buffer* this);
lang_Iterators__BackIterator* lang_Buffer__Buffer_backward(lang_Buffer__Buffer* this);
lang_Iterators__BackIterator* lang_Buffer__Buffer_backward_impl(lang_Buffer__Buffer* this);
lang_BufferIterator__BufferIterator* lang_Buffer__Buffer_backIterator(lang_Buffer__Buffer* this);
lang_BufferIterator__BufferIterator* lang_Buffer__Buffer_backIterator_impl(lang_Buffer__Buffer* this);
lang_Character__Char lang_Buffer__Buffer_get(lang_Buffer__Buffer* this, lang_Numbers__SSizeT index);
lang_Character__Char lang_Buffer__Buffer_get_impl(lang_Buffer__Buffer* this, lang_Numbers__SSizeT index);
void lang_Buffer__Buffer_set(lang_Buffer__Buffer* this, lang_Numbers__SSizeT index, lang_Character__Char value);
void lang_Buffer__Buffer_set_impl(lang_Buffer__Buffer* this, lang_Numbers__SSizeT index, lang_Character__Char value);
lang_Character__CString lang_Buffer__Buffer_toCString(lang_Buffer__Buffer* this);
lang_Character__CString lang_Buffer__Buffer_toCString_impl(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer___defaults__(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer___defaults___impl(lang_Buffer__Buffer* this);
void lang_Buffer__Buffer___load__();
void lang_Buffer_load();
lang_types__Bool lang_Buffer____OP_EQ_Buffer_Buffer__Bool(lang_Buffer__Buffer* buff1, lang_Buffer__Buffer* buff2);
lang_types__Bool lang_Buffer____OP_NE_Buffer_Buffer__Bool(lang_Buffer__Buffer* buff1, lang_Buffer__Buffer* buff2);
lang_Character__Char lang_Buffer____OP_IDX_Buffer_SSizeT__Char(lang_Buffer__Buffer* buffer, lang_Numbers__SSizeT index);
void lang_Buffer____OP_IDX_ASS_Buffer_SSizeT_Char(lang_Buffer__Buffer* buffer, lang_Numbers__SSizeT index, lang_Character__Char value);
lang_Buffer__Buffer* lang_Buffer____OP_IDX_Buffer_Range__Buffer(lang_Buffer__Buffer* buffer, lang_Numbers__Range range);
lang_Buffer__Buffer* lang_Buffer____OP_MUL_Buffer_Int__Buffer(lang_Buffer__Buffer* buffer, lang_Numbers__Int count);
lang_Buffer__Buffer* lang_Buffer____OP_ADD_Buffer_Buffer__Buffer(lang_Buffer__Buffer* left, lang_Buffer__Buffer* right);

#endif // ___lang_Buffer_fwd___
