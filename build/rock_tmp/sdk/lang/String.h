/* lang/String header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_String___
#define ___lang_String___

#include <sdk/lang/String-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/lang/Iterators.h>

struct _lang_String__String {
    struct _lang_Iterators__Iterable __super__;
    lang_Buffer__Buffer* _buffer;
};


struct ___lang_String_closure280_ctx {
    lang_Character__Char** argv;
    structs_ArrayList__ArrayList* result;
};

struct _lang_String__StringClass {
    struct _lang_Iterators__IterableClass __super__;
    lang_String__String* (*new_withBuffer)(lang_Buffer__Buffer*);
    void (*init_withBuffer)(lang_String__String*, lang_Buffer__Buffer*);
    lang_String__String* (*new_withCStr)(lang_Character__CString);
    void (*init_withCStr)(lang_String__String*, lang_Character__CString);
    lang_String__String* (*new_withCStrAndLength)(lang_Character__CString, lang_Numbers__SizeT);
    void (*init_withCStrAndLength)(lang_String__String*, lang_Character__CString, lang_Numbers__SizeT);
    lang_Numbers__SizeT (*length)(lang_String__String*);
    lang_types__Bool (*equals__quest)(lang_String__String*, lang_String__String*);
    lang_String__String* (*clone)(lang_String__String*);
    lang_String__String* (*substring_tillEnd)(lang_String__String*, lang_Numbers__SizeT);
    lang_String__String* (*substring)(lang_String__String*, lang_Numbers__SizeT, lang_Numbers__SizeT);
    lang_String__String* (*times)(lang_String__String*, lang_Numbers__SizeT);
    lang_String__String* (*append_str)(lang_String__String*, lang_String__String*);
    lang_String__String* (*append_char)(lang_String__String*, lang_Character__Char);
    lang_String__String* (*append_cStr)(lang_String__String*, lang_Character__CString);
    lang_String__String* (*prepend_str)(lang_String__String*, lang_String__String*);
    lang_String__String* (*prepend_char)(lang_String__String*, lang_Character__Char);
    lang_types__Bool (*empty__quest)(lang_String__String*);
    lang_types__Bool (*startsWith__quest)(lang_String__String*, lang_String__String*);
    lang_types__Bool (*startsWith__quest_char)(lang_String__String*, lang_Character__Char);
    lang_types__Bool (*endsWith__quest)(lang_String__String*, lang_String__String*);
    lang_types__Bool (*endsWith__quest_char)(lang_String__String*, lang_Character__Char);
    lang_Numbers__SSizeT (*find)(lang_String__String*, lang_String__String*, lang_Numbers__SSizeT, lang_types__Bool);
    structs_ArrayList__ArrayList* (*findAll)(lang_String__String*, lang_String__String*, lang_types__Bool);
    lang_String__String* (*replaceAll_str)(lang_String__String*, lang_String__String*, lang_String__String*, lang_types__Bool);
    lang_String__String* (*replaceAll_char)(lang_String__String*, lang_Character__Char, lang_Character__Char);
    lang_String__String* (*map)(lang_String__String*, lang_types__Closure);
    structs_ArrayList__ArrayList* (*_bufArrayListToStrArrayList)(lang_String__String*, structs_ArrayList__ArrayList*);
    lang_String__String* (*toLower)(lang_String__String*);
    lang_String__String* (*toUpper)(lang_String__String*);
    lang_Numbers__SSizeT (*indexOf_char)(lang_String__String*, lang_Character__Char, lang_Numbers__SSizeT);
    lang_Numbers__SSizeT (*indexOf_string)(lang_String__String*, lang_String__String*, lang_Numbers__SSizeT);
    lang_types__Bool (*contains__quest_char)(lang_String__String*, lang_Character__Char);
    lang_types__Bool (*contains__quest_string)(lang_String__String*, lang_String__String*);
    lang_String__String* (*trim_pointer)(lang_String__String*, lang_Character__Char*, lang_Numbers__SizeT);
    lang_String__String* (*trim_string)(lang_String__String*, lang_String__String*);
    lang_String__String* (*trim_char)(lang_String__String*, lang_Character__Char);
    lang_String__String* (*trim_whitespace)(lang_String__String*);
    lang_String__String* (*trimLeft_space)(lang_String__String*);
    lang_String__String* (*trimLeft_char)(lang_String__String*, lang_Character__Char);
    lang_String__String* (*trimLeft_string)(lang_String__String*, lang_String__String*);
    lang_String__String* (*trimLeft_pointer)(lang_String__String*, lang_Character__Char*, lang_Numbers__SizeT);
    lang_String__String* (*trimRight_space)(lang_String__String*);
    lang_String__String* (*trimRight_char)(lang_String__String*, lang_Character__Char);
    lang_String__String* (*trimRight_string)(lang_String__String*, lang_String__String*);
    lang_String__String* (*trimRight_pointer)(lang_String__String*, lang_Character__Char*, lang_Numbers__SizeT);
    lang_String__String* (*reverse)(lang_String__String*);
    lang_Numbers__SizeT (*count)(lang_String__String*, lang_Character__Char);
    lang_Numbers__SizeT (*count_string)(lang_String__String*, lang_String__String*);
    lang_Numbers__SSizeT (*lastIndexOf)(lang_String__String*, lang_Character__Char);
    void (*print)(lang_String__String*);
    void (*println)(lang_String__String*);
    void (*println_withStream)(lang_String__String*, lang_IO__FStream);
    lang_Numbers__Int (*toInt)(lang_String__String*);
    lang_Numbers__Int (*toInt_withBase)(lang_String__String*, lang_Numbers__Int);
    lang_Numbers__Long (*toLong)(lang_String__String*);
    lang_Numbers__Long (*toLong_withBase)(lang_String__String*, lang_Numbers__Long);
    lang_Numbers__LLong (*toLLong)(lang_String__String*);
    lang_Numbers__LLong (*toLLong_withBase)(lang_String__String*, lang_Numbers__LLong);
    lang_Numbers__ULong (*toULong)(lang_String__String*);
    lang_Numbers__ULong (*toULong_withBase)(lang_String__String*, lang_Numbers__ULong);
    lang_Numbers__Float (*toFloat)(lang_String__String*);
    lang_Numbers__Double (*toDouble)(lang_String__String*);
    lang_Numbers__LDouble (*toLDouble)(lang_String__String*);
    lang_BufferIterator__BufferIterator* (*forward)(lang_String__String*);
    lang_Iterators__BackIterator* (*backward)(lang_String__String*);
    lang_BufferIterator__BufferIterator* (*backIterator)(lang_String__String*);
    lang_String__String* (*cformat_str)(lang_String__String*, ...);
    lang_Character__CString (*toCString)(lang_String__String*);
    lang_Numbers__SSizeT (*__getsize__)(lang_String__String*);
};


struct ___lang_String_closure280_ctxClass {
    struct _lang_types__ClassClass __super__;
};


#ifdef OOC_FROM_C
#define makeStringLiteral(str, strLen) (void*) lang_String__makeStringLiteral((str), (strLen))
#define strArrayListFromCString(argc, argv) (void*) lang_String__strArrayListFromCString((argc), (argv))
#define strArrayListFromCString_hack(argc, argv) (void*) lang_String__strArrayListFromCString_hack((argc), (void*) (argv))
#define cStringPtrToStringPtr(cstr, len) (void*) lang_String__cStringPtrToStringPtr((cstr), (len))
#define __lang_String_closure280(argv, result, i) lang_String____lang_String_closure280((argv), (void*) (result), (i))
#define __lang_String_closure280_thunk(i, __context__) lang_String____lang_String_closure280_thunk((i), (__context__))
#define String lang_String__String
#define String_class() lang_String__String_class()
#define StringClass lang_String__StringClass
#define StringClass_class() lang_String__StringClass_class()
#define String_new_withBuffer(_buffer) (void*) lang_String__String_new_withBuffer((void*) (_buffer))
#define String_init_withBuffer(_this_, _buffer) lang_String__String_init_withBuffer((void*) (_this_), (void*) (_buffer))
#define String_new_withCStr(s) (void*) lang_String__String_new_withCStr((s))
#define String_init_withCStr(_this_, s) lang_String__String_init_withCStr((void*) (_this_), (s))
#define String_new_withCStrAndLength(s, length) (void*) lang_String__String_new_withCStrAndLength((s), (length))
#define String_init_withCStrAndLength(_this_, s, length) lang_String__String_init_withCStrAndLength((void*) (_this_), (s), (length))
#define String_length(_this_) lang_String__String_length((void*) (_this_))
#define String_equals__quest(_this_, other) lang_String__String_equals__quest((void*) (_this_), (void*) (other))
#define String_clone(_this_) (void*) lang_String__String_clone((void*) (_this_))
#define String_substring_tillEnd(_this_, start) (void*) lang_String__String_substring_tillEnd((void*) (_this_), (start))
#define String_substring(_this_, start, end) (void*) lang_String__String_substring((void*) (_this_), (start), (end))
#define String_times(_this_, count) (void*) lang_String__String_times((void*) (_this_), (count))
#define String_append_str(_this_, other) (void*) lang_String__String_append_str((void*) (_this_), (void*) (other))
#define String_append_char(_this_, other) (void*) lang_String__String_append_char((void*) (_this_), (other))
#define String_append_cStr(_this_, other) (void*) lang_String__String_append_cStr((void*) (_this_), (other))
#define String_prepend_str(_this_, other) (void*) lang_String__String_prepend_str((void*) (_this_), (void*) (other))
#define String_prepend_char(_this_, other) (void*) lang_String__String_prepend_char((void*) (_this_), (other))
#define String_empty__quest(_this_) lang_String__String_empty__quest((void*) (_this_))
#define String_startsWith__quest(_this_, s) lang_String__String_startsWith__quest((void*) (_this_), (void*) (s))
#define String_startsWith__quest_char(_this_, c) lang_String__String_startsWith__quest_char((void*) (_this_), (c))
#define String_endsWith__quest(_this_, s) lang_String__String_endsWith__quest((void*) (_this_), (void*) (s))
#define String_endsWith__quest_char(_this_, c) lang_String__String_endsWith__quest_char((void*) (_this_), (c))
#define String_find(_this_, what, offset, searchCaseSensitive) lang_String__String_find((void*) (_this_), (void*) (what), (offset), (searchCaseSensitive))
#define String_findAll(_this_, what, searchCaseSensitive) (void*) lang_String__String_findAll((void*) (_this_), (void*) (what), (searchCaseSensitive))
#define String_replaceAll_str(_this_, what, whit, searchCaseSensitive) (void*) lang_String__String_replaceAll_str((void*) (_this_), (void*) (what), (void*) (whit), (searchCaseSensitive))
#define String_replaceAll_char(_this_, oldie, kiddo) (void*) lang_String__String_replaceAll_char((void*) (_this_), (oldie), (kiddo))
#define String_map(_this_, f) (void*) lang_String__String_map((void*) (_this_), (f))
#define String__bufArrayListToStrArrayList(_this_, x) (void*) lang_String__String__bufArrayListToStrArrayList((void*) (_this_), (void*) (x))
#define String_toLower(_this_) (void*) lang_String__String_toLower((void*) (_this_))
#define String_toUpper(_this_) (void*) lang_String__String_toUpper((void*) (_this_))
#define String_indexOf_char(_this_, c, start) lang_String__String_indexOf_char((void*) (_this_), (c), (start))
#define String_indexOf_string(_this_, s, start) lang_String__String_indexOf_string((void*) (_this_), (void*) (s), (start))
#define String_contains__quest_char(_this_, c) lang_String__String_contains__quest_char((void*) (_this_), (c))
#define String_contains__quest_string(_this_, s) lang_String__String_contains__quest_string((void*) (_this_), (void*) (s))
#define String_trim_pointer(_this_, s, sLength) (void*) lang_String__String_trim_pointer((void*) (_this_), (s), (sLength))
#define String_trim_string(_this_, s) (void*) lang_String__String_trim_string((void*) (_this_), (void*) (s))
#define String_trim_char(_this_, c) (void*) lang_String__String_trim_char((void*) (_this_), (c))
#define String_trim_whitespace(_this_) (void*) lang_String__String_trim_whitespace((void*) (_this_))
#define String_trimLeft_space(_this_) (void*) lang_String__String_trimLeft_space((void*) (_this_))
#define String_trimLeft_char(_this_, c) (void*) lang_String__String_trimLeft_char((void*) (_this_), (c))
#define String_trimLeft_string(_this_, s) (void*) lang_String__String_trimLeft_string((void*) (_this_), (void*) (s))
#define String_trimLeft_pointer(_this_, s, sLength) (void*) lang_String__String_trimLeft_pointer((void*) (_this_), (s), (sLength))
#define String_trimRight_space(_this_) (void*) lang_String__String_trimRight_space((void*) (_this_))
#define String_trimRight_char(_this_, c) (void*) lang_String__String_trimRight_char((void*) (_this_), (c))
#define String_trimRight_string(_this_, s) (void*) lang_String__String_trimRight_string((void*) (_this_), (void*) (s))
#define String_trimRight_pointer(_this_, s, sLength) (void*) lang_String__String_trimRight_pointer((void*) (_this_), (s), (sLength))
#define String_reverse(_this_) (void*) lang_String__String_reverse((void*) (_this_))
#define String_count(_this_, what) lang_String__String_count((void*) (_this_), (what))
#define String_count_string(_this_, what) lang_String__String_count_string((void*) (_this_), (void*) (what))
#define String_lastIndexOf(_this_, c) lang_String__String_lastIndexOf((void*) (_this_), (c))
#define String_print(_this_) lang_String__String_print((void*) (_this_))
#define String_println(_this_) lang_String__String_println((void*) (_this_))
#define String_println_withStream(_this_, stream) lang_String__String_println_withStream((void*) (_this_), (stream))
#define String_toInt(_this_) lang_String__String_toInt((void*) (_this_))
#define String_toInt_withBase(_this_, base) lang_String__String_toInt_withBase((void*) (_this_), (base))
#define String_toLong(_this_) lang_String__String_toLong((void*) (_this_))
#define String_toLong_withBase(_this_, base) lang_String__String_toLong_withBase((void*) (_this_), (base))
#define String_toLLong(_this_) lang_String__String_toLLong((void*) (_this_))
#define String_toLLong_withBase(_this_, base) lang_String__String_toLLong_withBase((void*) (_this_), (base))
#define String_toULong(_this_) lang_String__String_toULong((void*) (_this_))
#define String_toULong_withBase(_this_, base) lang_String__String_toULong_withBase((void*) (_this_), (base))
#define String_toFloat(_this_) lang_String__String_toFloat((void*) (_this_))
#define String_toDouble(_this_) lang_String__String_toDouble((void*) (_this_))
#define String_toLDouble(_this_) lang_String__String_toLDouble((void*) (_this_))
#define String_iterator(_this_) (void*) lang_String__String_iterator((void*) (_this_))
#define String_forward(_this_) (void*) lang_String__String_forward((void*) (_this_))
#define String_backward(_this_) (void*) lang_String__String_backward((void*) (_this_))
#define String_backIterator(_this_) (void*) lang_String__String_backIterator((void*) (_this_))
#define String_cformat_str(_this_, ...) (void*) lang_String__String_cformat_str((void*) (_this_), __VA_ARGS__)
#define String_toCString(_this_) lang_String__String_toCString((void*) (_this_))
#define String___getsize__(_this_) lang_String__String___getsize__((void*) (_this_))
#define String___defaults__(_this_) lang_String__String___defaults__((void*) (_this_))
#define String___load__() lang_String__String___load__()
#endif

#endif // ___lang_String___
