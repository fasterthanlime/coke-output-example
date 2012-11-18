/* lang/String header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_String_fwd___
#define ___lang_String_fwd___

struct _lang_String__String;
typedef struct _lang_String__String lang_String__String;
typedef struct ___lang_String_closure280_ctx __lang_String_closure280_ctx;
struct _lang_String__StringClass;
typedef struct _lang_String__StringClass lang_String__StringClass;
struct ___lang_String_closure280_ctxClass;
typedef struct ___lang_String_closure280_ctxClass __lang_String_closure280_ctxClass;

#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/BufferIterator-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Character-fwd.h>
#include <sdk/lang/VarArgs-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#include <sdk/lang/Buffer-fwd.h>
#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/Abstractions-fwd.h>
#include <sdk/lang/Format-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/structs/ArrayList-fwd.h>

#ifndef __FUNC___Char_Char__DEFINE
#define __FUNC___Char_Char__DEFINE

typedef lang_Character__Char (*__FUNC___Char_Char)(lang_Character__Char, void*);

#endif


#ifndef __FUNC___LLong_void__DEFINE
#define __FUNC___LLong_void__DEFINE

typedef void (*__FUNC___LLong_void)(lang_Numbers__LLong, void*);

#endif

lang_String__StringClass *lang_String__String_class();
lang_String__String* lang_String__String_new_withBuffer(lang_Buffer__Buffer* _buffer);
void lang_String__String_init_withBuffer(lang_String__String* this, lang_Buffer__Buffer* _buffer);
lang_String__String* lang_String__String_new_withCStr(lang_Character__CString s);
void lang_String__String_init_withCStr(lang_String__String* this, lang_Character__CString s);
lang_String__String* lang_String__String_new_withCStrAndLength(lang_Character__CString s, lang_Numbers__SizeT length);
void lang_String__String_init_withCStrAndLength(lang_String__String* this, lang_Character__CString s, lang_Numbers__SizeT length);
lang_Numbers__SizeT lang_String__String_length(lang_String__String* this);
lang_Numbers__SizeT lang_String__String_length_impl(lang_String__String* this);
lang_types__Bool lang_String__String_equals__quest(lang_String__String* this, lang_String__String* other);
lang_String__String* lang_String__String_clone(lang_String__String* this);
lang_String__String* lang_String__String_clone_impl(lang_String__String* this);
lang_String__String* lang_String__String_substring_tillEnd(lang_String__String* this, lang_Numbers__SizeT start);
lang_String__String* lang_String__String_substring_tillEnd_impl(lang_String__String* this, lang_Numbers__SizeT start);
lang_String__String* lang_String__String_substring(lang_String__String* this, lang_Numbers__SizeT start, lang_Numbers__SizeT end);
lang_String__String* lang_String__String_substring_impl(lang_String__String* this, lang_Numbers__SizeT start, lang_Numbers__SizeT end);
lang_String__String* lang_String__String_times(lang_String__String* this, lang_Numbers__SizeT count);
lang_String__String* lang_String__String_times_impl(lang_String__String* this, lang_Numbers__SizeT count);
lang_String__String* lang_String__String_append_str(lang_String__String* this, lang_String__String* other);
lang_String__String* lang_String__String_append_str_impl(lang_String__String* this, lang_String__String* other);
lang_String__String* lang_String__String_append_char(lang_String__String* this, lang_Character__Char other);
lang_String__String* lang_String__String_append_char_impl(lang_String__String* this, lang_Character__Char other);
lang_String__String* lang_String__String_append_cStr(lang_String__String* this, lang_Character__CString other);
lang_String__String* lang_String__String_append_cStr_impl(lang_String__String* this, lang_Character__CString other);
lang_String__String* lang_String__String_prepend_str(lang_String__String* this, lang_String__String* other);
lang_String__String* lang_String__String_prepend_str_impl(lang_String__String* this, lang_String__String* other);
lang_String__String* lang_String__String_prepend_char(lang_String__String* this, lang_Character__Char other);
lang_String__String* lang_String__String_prepend_char_impl(lang_String__String* this, lang_Character__Char other);
lang_types__Bool lang_String__String_empty__quest(lang_String__String* this);
lang_types__Bool lang_String__String_empty__quest_impl(lang_String__String* this);
lang_types__Bool lang_String__String_startsWith__quest(lang_String__String* this, lang_String__String* s);
lang_types__Bool lang_String__String_startsWith__quest_impl(lang_String__String* this, lang_String__String* s);
lang_types__Bool lang_String__String_startsWith__quest_char(lang_String__String* this, lang_Character__Char c);
lang_types__Bool lang_String__String_startsWith__quest_char_impl(lang_String__String* this, lang_Character__Char c);
lang_types__Bool lang_String__String_endsWith__quest(lang_String__String* this, lang_String__String* s);
lang_types__Bool lang_String__String_endsWith__quest_impl(lang_String__String* this, lang_String__String* s);
lang_types__Bool lang_String__String_endsWith__quest_char(lang_String__String* this, lang_Character__Char c);
lang_types__Bool lang_String__String_endsWith__quest_char_impl(lang_String__String* this, lang_Character__Char c);
lang_Numbers__SSizeT lang_String__String_find(lang_String__String* this, lang_String__String* what, lang_Numbers__SSizeT offset, lang_types__Bool searchCaseSensitive);
lang_Numbers__SSizeT lang_String__String_find_impl(lang_String__String* this, lang_String__String* what, lang_Numbers__SSizeT offset, lang_types__Bool searchCaseSensitive);
structs_ArrayList__ArrayList* lang_String__String_findAll(lang_String__String* this, lang_String__String* what, lang_types__Bool searchCaseSensitive);
structs_ArrayList__ArrayList* lang_String__String_findAll_impl(lang_String__String* this, lang_String__String* what, lang_types__Bool searchCaseSensitive);
lang_String__String* lang_String__String_replaceAll_str(lang_String__String* this, lang_String__String* what, lang_String__String* whit, lang_types__Bool searchCaseSensitive);
lang_String__String* lang_String__String_replaceAll_str_impl(lang_String__String* this, lang_String__String* what, lang_String__String* whit, lang_types__Bool searchCaseSensitive);
lang_String__String* lang_String__String_replaceAll_char(lang_String__String* this, lang_Character__Char oldie, lang_Character__Char kiddo);
lang_String__String* lang_String__String_replaceAll_char_impl(lang_String__String* this, lang_Character__Char oldie, lang_Character__Char kiddo);
lang_String__String* lang_String__String_map(lang_String__String* this, lang_types__Closure f);
lang_String__String* lang_String__String_map_impl(lang_String__String* this, lang_types__Closure f);
structs_ArrayList__ArrayList* lang_String__String__bufArrayListToStrArrayList(lang_String__String* this, structs_ArrayList__ArrayList* x);
structs_ArrayList__ArrayList* lang_String__String__bufArrayListToStrArrayList_impl(lang_String__String* this, structs_ArrayList__ArrayList* x);
lang_String__String* lang_String__String_toLower(lang_String__String* this);
lang_String__String* lang_String__String_toLower_impl(lang_String__String* this);
lang_String__String* lang_String__String_toUpper(lang_String__String* this);
lang_String__String* lang_String__String_toUpper_impl(lang_String__String* this);
lang_Numbers__SSizeT lang_String__String_indexOf_char(lang_String__String* this, lang_Character__Char c, lang_Numbers__SSizeT start);
lang_Numbers__SSizeT lang_String__String_indexOf_char_impl(lang_String__String* this, lang_Character__Char c, lang_Numbers__SSizeT start);
lang_Numbers__SSizeT lang_String__String_indexOf_string(lang_String__String* this, lang_String__String* s, lang_Numbers__SSizeT start);
lang_Numbers__SSizeT lang_String__String_indexOf_string_impl(lang_String__String* this, lang_String__String* s, lang_Numbers__SSizeT start);
lang_types__Bool lang_String__String_contains__quest_char(lang_String__String* this, lang_Character__Char c);
lang_types__Bool lang_String__String_contains__quest_char_impl(lang_String__String* this, lang_Character__Char c);
lang_types__Bool lang_String__String_contains__quest_string(lang_String__String* this, lang_String__String* s);
lang_types__Bool lang_String__String_contains__quest_string_impl(lang_String__String* this, lang_String__String* s);
lang_String__String* lang_String__String_trim_pointer(lang_String__String* this, lang_Character__Char* s, lang_Numbers__SizeT sLength);
lang_String__String* lang_String__String_trim_pointer_impl(lang_String__String* this, lang_Character__Char* s, lang_Numbers__SizeT sLength);
lang_String__String* lang_String__String_trim_string(lang_String__String* this, lang_String__String* s);
lang_String__String* lang_String__String_trim_string_impl(lang_String__String* this, lang_String__String* s);
lang_String__String* lang_String__String_trim_char(lang_String__String* this, lang_Character__Char c);
lang_String__String* lang_String__String_trim_char_impl(lang_String__String* this, lang_Character__Char c);
lang_String__String* lang_String__String_trim_whitespace(lang_String__String* this);
lang_String__String* lang_String__String_trim_whitespace_impl(lang_String__String* this);
lang_String__String* lang_String__String_trimLeft_space(lang_String__String* this);
lang_String__String* lang_String__String_trimLeft_space_impl(lang_String__String* this);
lang_String__String* lang_String__String_trimLeft_char(lang_String__String* this, lang_Character__Char c);
lang_String__String* lang_String__String_trimLeft_char_impl(lang_String__String* this, lang_Character__Char c);
lang_String__String* lang_String__String_trimLeft_string(lang_String__String* this, lang_String__String* s);
lang_String__String* lang_String__String_trimLeft_string_impl(lang_String__String* this, lang_String__String* s);
lang_String__String* lang_String__String_trimLeft_pointer(lang_String__String* this, lang_Character__Char* s, lang_Numbers__SizeT sLength);
lang_String__String* lang_String__String_trimLeft_pointer_impl(lang_String__String* this, lang_Character__Char* s, lang_Numbers__SizeT sLength);
lang_String__String* lang_String__String_trimRight_space(lang_String__String* this);
lang_String__String* lang_String__String_trimRight_space_impl(lang_String__String* this);
lang_String__String* lang_String__String_trimRight_char(lang_String__String* this, lang_Character__Char c);
lang_String__String* lang_String__String_trimRight_char_impl(lang_String__String* this, lang_Character__Char c);
lang_String__String* lang_String__String_trimRight_string(lang_String__String* this, lang_String__String* s);
lang_String__String* lang_String__String_trimRight_string_impl(lang_String__String* this, lang_String__String* s);
lang_String__String* lang_String__String_trimRight_pointer(lang_String__String* this, lang_Character__Char* s, lang_Numbers__SizeT sLength);
lang_String__String* lang_String__String_trimRight_pointer_impl(lang_String__String* this, lang_Character__Char* s, lang_Numbers__SizeT sLength);
lang_String__String* lang_String__String_reverse(lang_String__String* this);
lang_String__String* lang_String__String_reverse_impl(lang_String__String* this);
lang_Numbers__SizeT lang_String__String_count(lang_String__String* this, lang_Character__Char what);
lang_Numbers__SizeT lang_String__String_count_impl(lang_String__String* this, lang_Character__Char what);
lang_Numbers__SizeT lang_String__String_count_string(lang_String__String* this, lang_String__String* what);
lang_Numbers__SizeT lang_String__String_count_string_impl(lang_String__String* this, lang_String__String* what);
lang_Numbers__SSizeT lang_String__String_lastIndexOf(lang_String__String* this, lang_Character__Char c);
lang_Numbers__SSizeT lang_String__String_lastIndexOf_impl(lang_String__String* this, lang_Character__Char c);
void lang_String__String_print(lang_String__String* this);
void lang_String__String_print_impl(lang_String__String* this);
void lang_String__String_println(lang_String__String* this);
void lang_String__String_println_impl(lang_String__String* this);
void lang_String__String_println_withStream(lang_String__String* this, lang_IO__FStream stream);
void lang_String__String_println_withStream_impl(lang_String__String* this, lang_IO__FStream stream);
lang_Numbers__Int lang_String__String_toInt(lang_String__String* this);
lang_Numbers__Int lang_String__String_toInt_impl(lang_String__String* this);
lang_Numbers__Int lang_String__String_toInt_withBase(lang_String__String* this, lang_Numbers__Int base);
lang_Numbers__Int lang_String__String_toInt_withBase_impl(lang_String__String* this, lang_Numbers__Int base);
lang_Numbers__Long lang_String__String_toLong(lang_String__String* this);
lang_Numbers__Long lang_String__String_toLong_impl(lang_String__String* this);
lang_Numbers__Long lang_String__String_toLong_withBase(lang_String__String* this, lang_Numbers__Long base);
lang_Numbers__Long lang_String__String_toLong_withBase_impl(lang_String__String* this, lang_Numbers__Long base);
lang_Numbers__LLong lang_String__String_toLLong(lang_String__String* this);
lang_Numbers__LLong lang_String__String_toLLong_impl(lang_String__String* this);
lang_Numbers__LLong lang_String__String_toLLong_withBase(lang_String__String* this, lang_Numbers__LLong base);
lang_Numbers__LLong lang_String__String_toLLong_withBase_impl(lang_String__String* this, lang_Numbers__LLong base);
lang_Numbers__ULong lang_String__String_toULong(lang_String__String* this);
lang_Numbers__ULong lang_String__String_toULong_impl(lang_String__String* this);
lang_Numbers__ULong lang_String__String_toULong_withBase(lang_String__String* this, lang_Numbers__ULong base);
lang_Numbers__ULong lang_String__String_toULong_withBase_impl(lang_String__String* this, lang_Numbers__ULong base);
lang_Numbers__Float lang_String__String_toFloat(lang_String__String* this);
lang_Numbers__Float lang_String__String_toFloat_impl(lang_String__String* this);
lang_Numbers__Double lang_String__String_toDouble(lang_String__String* this);
lang_Numbers__Double lang_String__String_toDouble_impl(lang_String__String* this);
lang_Numbers__LDouble lang_String__String_toLDouble(lang_String__String* this);
lang_Numbers__LDouble lang_String__String_toLDouble_impl(lang_String__String* this);
lang_BufferIterator__BufferIterator* lang_String__String_iterator(lang_String__String* this);
lang_BufferIterator__BufferIterator* lang_String__String_iterator_impl(lang_String__String* this);
lang_BufferIterator__BufferIterator* lang_String__String_forward(lang_String__String* this);
lang_BufferIterator__BufferIterator* lang_String__String_forward_impl(lang_String__String* this);
lang_Iterators__BackIterator* lang_String__String_backward(lang_String__String* this);
lang_Iterators__BackIterator* lang_String__String_backward_impl(lang_String__String* this);
lang_BufferIterator__BufferIterator* lang_String__String_backIterator(lang_String__String* this);
lang_BufferIterator__BufferIterator* lang_String__String_backIterator_impl(lang_String__String* this);
lang_String__String* lang_String__String_cformat_str(lang_String__String* this, ...);
lang_Character__CString lang_String__String_toCString(lang_String__String* this);
lang_Character__CString lang_String__String_toCString_impl(lang_String__String* this);
lang_Numbers__SSizeT lang_String__String___getsize__(lang_String__String* this);
lang_Numbers__SSizeT lang_String__String___getsize___impl(lang_String__String* this);
void lang_String__String___defaults__(lang_String__String* this);
void lang_String__String___defaults___impl(lang_String__String* this);
void lang_String__String___load__();
__lang_String_closure280_ctxClass *__lang_String_closure280_ctx_class();
void __lang_String_closure280_ctx___load__();
void lang_String_load();
lang_String__String* lang_String__makeStringLiteral(lang_Character__CString str, lang_Numbers__SizeT strLen);
structs_ArrayList__ArrayList* lang_String__strArrayListFromCString(lang_Numbers__Int argc, lang_Character__Char** argv);
structs_ArrayList__ArrayList* lang_String__strArrayListFromCString_hack(lang_Numbers__Int argc, lang_String__String** argv);
lang_String__String** lang_String__cStringPtrToStringPtr(lang_Character__CString* cstr, lang_Numbers__SizeT len);
void lang_String____lang_String_closure280(lang_Character__Char** argv, structs_ArrayList__ArrayList* result, lang_Numbers__LLong i);
void lang_String____lang_String_closure280_thunk(lang_Numbers__LLong i, __lang_String_closure280_ctx* __context__);
lang_String__String* lang_String____OP_AS_Char__star__String(lang_Character__Char* c);
lang_String__String* lang_String____OP_AS_CString__String(lang_Character__CString c);
lang_Character__Char* lang_String____OP_AS_String__Char__star(lang_String__String* s);
lang_Character__CString lang_String____OP_AS_String__CString(lang_String__String* s);
lang_types__Bool lang_String____OP_EQ_String_String__Bool(lang_String__String* str1, lang_String__String* str2);
lang_types__Bool lang_String____OP_NE_String_String__Bool(lang_String__String* str1, lang_String__String* str2);
lang_Character__Char lang_String____OP_IDX_String_SSizeT__Char(lang_String__String* string, lang_Numbers__SSizeT index);
lang_String__String* lang_String____OP_IDX_String_Range__String(lang_String__String* string, lang_Numbers__Range range);
lang_String__String* lang_String____OP_MUL_String_SizeT__String(lang_String__String* string, lang_Numbers__SizeT count);
lang_String__String* lang_String____OP_ADD_String_String__String(lang_String__String* left, lang_String__String* right);
lang_String__String* lang_String____OP_ADD_String_CString__String(lang_String__String* left, lang_Character__CString right);
lang_String__String* lang_String____OP_ADD_String_Char__String(lang_String__String* left, lang_Character__Char right);
lang_String__String* lang_String____OP_ADD_Char_String__String(lang_Character__Char left, lang_String__String* right);

#endif // ___lang_String_fwd___
