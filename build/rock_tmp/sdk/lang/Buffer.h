/* lang/Buffer header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Buffer___
#define ___lang_Buffer___

#include <sdk/lang/Buffer-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/lang/Iterators.h>

struct _lang_Buffer__Buffer {
    struct _lang_Iterators__Iterable __super__;
    lang_Numbers__SizeT size;
    lang_Numbers__SizeT capacity;
    lang_Character__Char* mallocAddr;
    lang_Character__Char* data;
};


struct _lang_Buffer__BufferClass {
    struct _lang_Iterators__IterableClass __super__;
    lang_Numbers__SizeT (*_rshift)(lang_Buffer__Buffer*);
    void (*setBuffer)(lang_Buffer__Buffer*, lang_Buffer__Buffer*);
    lang_Buffer__Buffer* (*new_empty)();
    void (*init_empty)(lang_Buffer__Buffer*);
    lang_Buffer__Buffer* (*new)(lang_Numbers__SizeT);
    lang_Buffer__Buffer* (*new_cStrWithLength)(lang_Character__CString, lang_Numbers__SizeT, lang_types__Bool);
    void (*init_cStrWithLength)(lang_Buffer__Buffer*, lang_Character__CString, lang_Numbers__SizeT, lang_types__Bool);
    lang_Numbers__SizeT (*length)(lang_Buffer__Buffer*);
    void (*setCapacity)(lang_Buffer__Buffer*, lang_Numbers__SizeT);
    void (*setLength)(lang_Buffer__Buffer*, lang_Numbers__SizeT);
    void (*sizeFromData)(lang_Buffer__Buffer*);
    void (*shiftRight)(lang_Buffer__Buffer*, lang_Numbers__SSizeT);
    void (*shiftLeft)(lang_Buffer__Buffer*, lang_Numbers__SSizeT);
    lang_Buffer__Buffer* (*clone)(lang_Buffer__Buffer*);
    lang_Buffer__Buffer* (*clone_withMinimum)(lang_Buffer__Buffer*, lang_Numbers__SizeT);
    void (*substring_tillEnd)(lang_Buffer__Buffer*, lang_Numbers__SizeT);
    void (*substring)(lang_Buffer__Buffer*, lang_Numbers__SSizeT, lang_Numbers__SSizeT);
    void (*times)(lang_Buffer__Buffer*, lang_Numbers__SizeT);
    void (*append_buf)(lang_Buffer__Buffer*, lang_Buffer__Buffer*);
    void (*append_str)(lang_Buffer__Buffer*, lang_String__String*);
    void (*append_pointer)(lang_Buffer__Buffer*, lang_Character__Char*, lang_Numbers__SizeT);
    void (*append_bufLength)(lang_Buffer__Buffer*, lang_Buffer__Buffer*, lang_Numbers__SizeT);
    void (*append_char)(lang_Buffer__Buffer*, lang_Character__Char);
    void (*prepend_buf)(lang_Buffer__Buffer*, lang_Buffer__Buffer*);
    void (*prepend_str)(lang_Buffer__Buffer*, lang_String__String*);
    void (*prepend_pointer)(lang_Buffer__Buffer*, lang_Character__Char*, lang_Numbers__SizeT);
    void (*prepend_char)(lang_Buffer__Buffer*, lang_Character__Char);
    lang_types__Bool (*empty__quest)(lang_Buffer__Buffer*);
    lang_types__Bool (*compare)(lang_Buffer__Buffer*, lang_Buffer__Buffer*, lang_Numbers__SSizeT, lang_Numbers__SSizeT);
    lang_types__Bool (*equals__quest)(lang_Buffer__Buffer*, lang_Buffer__Buffer*);
    lang_types__Bool (*startsWith__quest)(lang_Buffer__Buffer*, lang_Buffer__Buffer*);
    lang_types__Bool (*startsWith__quest_char)(lang_Buffer__Buffer*, lang_Character__Char);
    lang_types__Bool (*endsWith__quest)(lang_Buffer__Buffer*, lang_Buffer__Buffer*);
    lang_types__Bool (*endsWith__quest_char)(lang_Buffer__Buffer*, lang_Character__Char);
    lang_Numbers__SSizeT (*find_char)(lang_Buffer__Buffer*, lang_Character__Char, lang_Numbers__SSizeT, lang_types__Bool);
    lang_Numbers__SSizeT (*find)(lang_Buffer__Buffer*, lang_Buffer__Buffer*, lang_Numbers__SSizeT, lang_types__Bool);
    lang_Numbers__SSizeT (*find_pointer)(lang_Buffer__Buffer*, lang_Character__Char*, lang_Numbers__SizeT, lang_Numbers__SSizeT, lang_types__Bool);
    structs_ArrayList__ArrayList* (*findAll_withCase)(lang_Buffer__Buffer*, lang_Buffer__Buffer*, lang_types__Bool);
    structs_ArrayList__ArrayList* (*findAll_pointer)(lang_Buffer__Buffer*, lang_Character__Char*, lang_Numbers__SizeT, lang_types__Bool);
    void (*replaceAll_buf)(lang_Buffer__Buffer*, lang_Buffer__Buffer*, lang_Buffer__Buffer*, lang_types__Bool);
    void (*replaceAll_char)(lang_Buffer__Buffer*, lang_Character__Char, lang_Character__Char);
    void (*map)(lang_Buffer__Buffer*, lang_types__Closure);
    void (*toLower)(lang_Buffer__Buffer*);
    void (*toUpper)(lang_Buffer__Buffer*);
    lang_String__String* (*toString)(lang_Buffer__Buffer*);
    lang_Numbers__SSizeT (*indexOf_char)(lang_Buffer__Buffer*, lang_Character__Char, lang_Numbers__SSizeT);
    lang_Numbers__SSizeT (*indexOf_buf)(lang_Buffer__Buffer*, lang_Buffer__Buffer*, lang_Numbers__SSizeT);
    lang_types__Bool (*contains__quest_char)(lang_Buffer__Buffer*, lang_Character__Char);
    lang_types__Bool (*contains__quest_buf)(lang_Buffer__Buffer*, lang_Buffer__Buffer*);
    void (*trim_pointer)(lang_Buffer__Buffer*, lang_Character__Char*, lang_Numbers__SizeT);
    void (*trim_buf)(lang_Buffer__Buffer*, lang_Buffer__Buffer*);
    void (*trim_char)(lang_Buffer__Buffer*, lang_Character__Char);
    void (*trim_whitespace)(lang_Buffer__Buffer*);
    void (*trimLeft_space)(lang_Buffer__Buffer*);
    void (*trimLeft_char)(lang_Buffer__Buffer*, lang_Character__Char);
    void (*trimLeft_buf)(lang_Buffer__Buffer*, lang_Buffer__Buffer*);
    void (*trimLeft_pointer)(lang_Buffer__Buffer*, lang_Character__Char*, lang_Numbers__SizeT);
    void (*trimRight_space)(lang_Buffer__Buffer*);
    void (*trimRight_char)(lang_Buffer__Buffer*, lang_Character__Char);
    void (*trimRight_buf)(lang_Buffer__Buffer*, lang_Buffer__Buffer*);
    void (*trimRight_pointer)(lang_Buffer__Buffer*, lang_Character__Char*, lang_Numbers__SizeT);
    void (*reverse)(lang_Buffer__Buffer*);
    lang_Numbers__SizeT (*count)(lang_Buffer__Buffer*, lang_Character__Char);
    lang_Numbers__SizeT (*count_buf)(lang_Buffer__Buffer*, lang_Buffer__Buffer*);
    lang_Numbers__SSizeT (*lastIndexOf)(lang_Buffer__Buffer*, lang_Character__Char);
    void (*print)(lang_Buffer__Buffer*);
    void (*print_withStream)(lang_Buffer__Buffer*, lang_IO__FStream);
    void (*println)(lang_Buffer__Buffer*);
    void (*println_withStream)(lang_Buffer__Buffer*, lang_IO__FStream);
    lang_Numbers__Int (*toInt)(lang_Buffer__Buffer*);
    lang_Numbers__Int (*toInt_withBase)(lang_Buffer__Buffer*, lang_Numbers__Int);
    lang_Numbers__Long (*toLong)(lang_Buffer__Buffer*);
    lang_Numbers__Long (*toLong_withBase)(lang_Buffer__Buffer*, lang_Numbers__Long);
    lang_Numbers__LLong (*toLLong)(lang_Buffer__Buffer*);
    lang_Numbers__LLong (*toLLong_withBase)(lang_Buffer__Buffer*, lang_Numbers__LLong);
    lang_Numbers__ULong (*toULong)(lang_Buffer__Buffer*);
    lang_Numbers__ULong (*toULong_withBase)(lang_Buffer__Buffer*, lang_Numbers__ULong);
    lang_Numbers__Float (*toFloat)(lang_Buffer__Buffer*);
    lang_Numbers__Double (*toDouble)(lang_Buffer__Buffer*);
    lang_Numbers__LDouble (*toLDouble)(lang_Buffer__Buffer*);
    lang_BufferIterator__BufferIterator* (*forward)(lang_Buffer__Buffer*);
    lang_Iterators__BackIterator* (*backward)(lang_Buffer__Buffer*);
    lang_BufferIterator__BufferIterator* (*backIterator)(lang_Buffer__Buffer*);
    lang_Character__Char (*get)(lang_Buffer__Buffer*, lang_Numbers__SSizeT);
    void (*set)(lang_Buffer__Buffer*, lang_Numbers__SSizeT, lang_Character__Char);
    lang_Character__CString (*toCString)(lang_Buffer__Buffer*);
};


#ifdef OOC_FROM_C
#define Buffer lang_Buffer__Buffer
#define Buffer_class() lang_Buffer__Buffer_class()
#define BufferClass lang_Buffer__BufferClass
#define BufferClass_class() lang_Buffer__BufferClass_class()
#define Buffer__rshift(_this_) lang_Buffer__Buffer__rshift((void*) (_this_))
#define Buffer_setBuffer(_this_, newOne) lang_Buffer__Buffer_setBuffer((void*) (_this_), (void*) (newOne))
#define Buffer_new_empty() (void*) lang_Buffer__Buffer_new_empty()
#define Buffer_init_empty(_this_) lang_Buffer__Buffer_init_empty((void*) (_this_))
#define Buffer_new(capacity) (void*) lang_Buffer__Buffer_new((capacity))
#define Buffer_init(_this_, capacity) lang_Buffer__Buffer_init((void*) (_this_), (capacity))
#define Buffer_new_cStrWithLength(s, length, stringLiteral__quest) (void*) lang_Buffer__Buffer_new_cStrWithLength((s), (length), (stringLiteral__quest))
#define Buffer_init_cStrWithLength(_this_, s, length, stringLiteral__quest) lang_Buffer__Buffer_init_cStrWithLength((void*) (_this_), (s), (length), (stringLiteral__quest))
#define Buffer_length(_this_) lang_Buffer__Buffer_length((void*) (_this_))
#define Buffer_setCapacity(_this_, newCapacity) lang_Buffer__Buffer_setCapacity((void*) (_this_), (newCapacity))
#define Buffer_setLength(_this_, newLength) lang_Buffer__Buffer_setLength((void*) (_this_), (newLength))
#define Buffer_sizeFromData(_this_) lang_Buffer__Buffer_sizeFromData((void*) (_this_))
#define Buffer_shiftRight(_this_, count) lang_Buffer__Buffer_shiftRight((void*) (_this_), (count))
#define Buffer_shiftLeft(_this_, count) lang_Buffer__Buffer_shiftLeft((void*) (_this_), (count))
#define Buffer_clone(_this_) (void*) lang_Buffer__Buffer_clone((void*) (_this_))
#define Buffer_clone_withMinimum(_this_, minimumLength) (void*) lang_Buffer__Buffer_clone_withMinimum((void*) (_this_), (minimumLength))
#define Buffer_substring_tillEnd(_this_, start) lang_Buffer__Buffer_substring_tillEnd((void*) (_this_), (start))
#define Buffer_substring(_this_, start, end) lang_Buffer__Buffer_substring((void*) (_this_), (start), (end))
#define Buffer_times(_this_, count) lang_Buffer__Buffer_times((void*) (_this_), (count))
#define Buffer_append_buf(_this_, other) lang_Buffer__Buffer_append_buf((void*) (_this_), (void*) (other))
#define Buffer_append_str(_this_, other) lang_Buffer__Buffer_append_str((void*) (_this_), (void*) (other))
#define Buffer_append_pointer(_this_, other, otherLength) lang_Buffer__Buffer_append_pointer((void*) (_this_), (other), (otherLength))
#define Buffer_append_bufLength(_this_, other, otherLength) lang_Buffer__Buffer_append_bufLength((void*) (_this_), (void*) (other), (otherLength))
#define Buffer_append_char(_this_, other) lang_Buffer__Buffer_append_char((void*) (_this_), (other))
#define Buffer_prepend_buf(_this_, other) lang_Buffer__Buffer_prepend_buf((void*) (_this_), (void*) (other))
#define Buffer_prepend_str(_this_, other) lang_Buffer__Buffer_prepend_str((void*) (_this_), (void*) (other))
#define Buffer_prepend_pointer(_this_, other, otherLength) lang_Buffer__Buffer_prepend_pointer((void*) (_this_), (other), (otherLength))
#define Buffer_prepend_char(_this_, other) lang_Buffer__Buffer_prepend_char((void*) (_this_), (other))
#define Buffer_empty__quest(_this_) lang_Buffer__Buffer_empty__quest((void*) (_this_))
#define Buffer_compare(_this_, other, start, length) lang_Buffer__Buffer_compare((void*) (_this_), (void*) (other), (start), (length))
#define Buffer_equals__quest(_this_, other) lang_Buffer__Buffer_equals__quest((void*) (_this_), (void*) (other))
#define Buffer_startsWith__quest(_this_, s) lang_Buffer__Buffer_startsWith__quest((void*) (_this_), (void*) (s))
#define Buffer_startsWith__quest_char(_this_, c) lang_Buffer__Buffer_startsWith__quest_char((void*) (_this_), (c))
#define Buffer_endsWith__quest(_this_, s) lang_Buffer__Buffer_endsWith__quest((void*) (_this_), (void*) (s))
#define Buffer_endsWith__quest_char(_this_, c) lang_Buffer__Buffer_endsWith__quest_char((void*) (_this_), (c))
#define Buffer_find_char(_this_, what, offset, searchCaseSensitive) lang_Buffer__Buffer_find_char((void*) (_this_), (what), (offset), (searchCaseSensitive))
#define Buffer_find(_this_, what, offset, searchCaseSensitive) lang_Buffer__Buffer_find((void*) (_this_), (void*) (what), (offset), (searchCaseSensitive))
#define Buffer_find_pointer(_this_, what, whatSize, offset, searchCaseSensitive) lang_Buffer__Buffer_find_pointer((void*) (_this_), (what), (whatSize), (offset), (searchCaseSensitive))
#define Buffer_findAll_withCase(_this_, what, searchCaseSensitive) (void*) lang_Buffer__Buffer_findAll_withCase((void*) (_this_), (void*) (what), (searchCaseSensitive))
#define Buffer_findAll_pointer(_this_, what, whatSize, searchCaseSensitive) (void*) lang_Buffer__Buffer_findAll_pointer((void*) (_this_), (what), (whatSize), (searchCaseSensitive))
#define Buffer_replaceAll_buf(_this_, what, whit, searchCaseSensitive) lang_Buffer__Buffer_replaceAll_buf((void*) (_this_), (void*) (what), (void*) (whit), (searchCaseSensitive))
#define Buffer_replaceAll_char(_this_, oldie, kiddo) lang_Buffer__Buffer_replaceAll_char((void*) (_this_), (oldie), (kiddo))
#define Buffer_map(_this_, f) lang_Buffer__Buffer_map((void*) (_this_), (f))
#define Buffer_toLower(_this_) lang_Buffer__Buffer_toLower((void*) (_this_))
#define Buffer_toUpper(_this_) lang_Buffer__Buffer_toUpper((void*) (_this_))
#define Buffer_toString(_this_) (void*) lang_Buffer__Buffer_toString((void*) (_this_))
#define Buffer_indexOf_char(_this_, c, start) lang_Buffer__Buffer_indexOf_char((void*) (_this_), (c), (start))
#define Buffer_indexOf_buf(_this_, s, start) lang_Buffer__Buffer_indexOf_buf((void*) (_this_), (void*) (s), (start))
#define Buffer_contains__quest_char(_this_, c) lang_Buffer__Buffer_contains__quest_char((void*) (_this_), (c))
#define Buffer_contains__quest_buf(_this_, s) lang_Buffer__Buffer_contains__quest_buf((void*) (_this_), (void*) (s))
#define Buffer_trim_pointer(_this_, s, sLength) lang_Buffer__Buffer_trim_pointer((void*) (_this_), (s), (sLength))
#define Buffer_trim_buf(_this_, s) lang_Buffer__Buffer_trim_buf((void*) (_this_), (void*) (s))
#define Buffer_trim_char(_this_, c) lang_Buffer__Buffer_trim_char((void*) (_this_), (c))
#define Buffer_trim_whitespace(_this_) lang_Buffer__Buffer_trim_whitespace((void*) (_this_))
#define Buffer_trimLeft_space(_this_) lang_Buffer__Buffer_trimLeft_space((void*) (_this_))
#define Buffer_trimLeft_char(_this_, c) lang_Buffer__Buffer_trimLeft_char((void*) (_this_), (c))
#define Buffer_trimLeft_buf(_this_, s) lang_Buffer__Buffer_trimLeft_buf((void*) (_this_), (void*) (s))
#define Buffer_trimLeft_pointer(_this_, s, sLength) lang_Buffer__Buffer_trimLeft_pointer((void*) (_this_), (s), (sLength))
#define Buffer_trimRight_space(_this_) lang_Buffer__Buffer_trimRight_space((void*) (_this_))
#define Buffer_trimRight_char(_this_, c) lang_Buffer__Buffer_trimRight_char((void*) (_this_), (c))
#define Buffer_trimRight_buf(_this_, s) lang_Buffer__Buffer_trimRight_buf((void*) (_this_), (void*) (s))
#define Buffer_trimRight_pointer(_this_, s, sLength) lang_Buffer__Buffer_trimRight_pointer((void*) (_this_), (s), (sLength))
#define Buffer_reverse(_this_) lang_Buffer__Buffer_reverse((void*) (_this_))
#define Buffer_count(_this_, what) lang_Buffer__Buffer_count((void*) (_this_), (what))
#define Buffer_count_buf(_this_, what) lang_Buffer__Buffer_count_buf((void*) (_this_), (void*) (what))
#define Buffer_lastIndexOf(_this_, c) lang_Buffer__Buffer_lastIndexOf((void*) (_this_), (c))
#define Buffer_print(_this_) lang_Buffer__Buffer_print((void*) (_this_))
#define Buffer_print_withStream(_this_, stream) lang_Buffer__Buffer_print_withStream((void*) (_this_), (stream))
#define Buffer_println(_this_) lang_Buffer__Buffer_println((void*) (_this_))
#define Buffer_println_withStream(_this_, stream) lang_Buffer__Buffer_println_withStream((void*) (_this_), (stream))
#define Buffer_toInt(_this_) lang_Buffer__Buffer_toInt((void*) (_this_))
#define Buffer_toInt_withBase(_this_, base) lang_Buffer__Buffer_toInt_withBase((void*) (_this_), (base))
#define Buffer_toLong(_this_) lang_Buffer__Buffer_toLong((void*) (_this_))
#define Buffer_toLong_withBase(_this_, base) lang_Buffer__Buffer_toLong_withBase((void*) (_this_), (base))
#define Buffer_toLLong(_this_) lang_Buffer__Buffer_toLLong((void*) (_this_))
#define Buffer_toLLong_withBase(_this_, base) lang_Buffer__Buffer_toLLong_withBase((void*) (_this_), (base))
#define Buffer_toULong(_this_) lang_Buffer__Buffer_toULong((void*) (_this_))
#define Buffer_toULong_withBase(_this_, base) lang_Buffer__Buffer_toULong_withBase((void*) (_this_), (base))
#define Buffer_toFloat(_this_) lang_Buffer__Buffer_toFloat((void*) (_this_))
#define Buffer_toDouble(_this_) lang_Buffer__Buffer_toDouble((void*) (_this_))
#define Buffer_toLDouble(_this_) lang_Buffer__Buffer_toLDouble((void*) (_this_))
#define Buffer_iterator(_this_) (void*) lang_Buffer__Buffer_iterator((void*) (_this_))
#define Buffer_forward(_this_) (void*) lang_Buffer__Buffer_forward((void*) (_this_))
#define Buffer_backward(_this_) (void*) lang_Buffer__Buffer_backward((void*) (_this_))
#define Buffer_backIterator(_this_) (void*) lang_Buffer__Buffer_backIterator((void*) (_this_))
#define Buffer_get(_this_, index) lang_Buffer__Buffer_get((void*) (_this_), (index))
#define Buffer_set(_this_, index, value) lang_Buffer__Buffer_set((void*) (_this_), (index), (value))
#define Buffer_toCString(_this_) lang_Buffer__Buffer_toCString((void*) (_this_))
#define Buffer___defaults__(_this_) lang_Buffer__Buffer___defaults__((void*) (_this_))
#define Buffer___load__() lang_Buffer__Buffer___load__()
#endif

#endif // ___lang_Buffer___
