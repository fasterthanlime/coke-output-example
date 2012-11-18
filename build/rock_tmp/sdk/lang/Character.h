/* lang/Character header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Character___
#define ___lang_Character___

#include <sdk/lang/Character-fwd.h>
#include <sdk/lang/types.h>

struct _lang_Character__CharClass {
    struct _lang_types__ClassClass __super__;
    lang_types__Bool (*alphaNumeric__quest)(lang_Character__Char);
    lang_types__Bool (*alpha__quest)(lang_Character__Char);
    lang_types__Bool (*lower__quest)(lang_Character__Char);
    lang_types__Bool (*upper__quest)(lang_Character__Char);
    lang_types__Bool (*digit__quest)(lang_Character__Char);
    lang_types__Bool (*octalDigit__quest)(lang_Character__Char);
    lang_types__Bool (*hexDigit__quest)(lang_Character__Char);
    lang_types__Bool (*control__quest)(lang_Character__Char);
    lang_types__Bool (*graph__quest)(lang_Character__Char);
    lang_types__Bool (*printable__quest)(lang_Character__Char);
    lang_types__Bool (*punctuation__quest)(lang_Character__Char);
    lang_types__Bool (*whitespace__quest)(lang_Character__Char);
    lang_types__Bool (*blank__quest)(lang_Character__Char);
    lang_Numbers__Int (*toInt)(lang_Character__Char);
    lang_String__String* (*toString)(lang_Character__Char);
    void (*print)(lang_Character__Char);
    void (*print_withStream)(lang_Character__Char, lang_IO__FStream);
    void (*println)(lang_Character__Char);
    void (*println_withStream)(lang_Character__Char, lang_IO__FStream);
    lang_types__Bool (*containedIn__quest)(lang_Character__Char, lang_String__String*);
    lang_types__Bool (*containedIn__quest_charWithLength)(lang_Character__Char, lang_Character__Char*, lang_Numbers__SizeT);
    lang_Numbers__SSizeT (*compareWith)(lang_Character__Char, lang_types__Closure, lang_Character__Char*, lang_Numbers__SizeT);
};


struct _lang_Character__SCharClass {
    struct _lang_Character__CharClass __super__;
};


struct _lang_Character__UCharClass {
    struct _lang_Character__CharClass __super__;
};


struct _lang_Character__WCharClass {
    struct _lang_types__ClassClass __super__;
};


struct _lang_Character__CStringClass {
    struct _lang_types__ClassClass __super__;
    lang_Character__CString (*new_withLength)(lang_Numbers__Int);
    lang_Character__CString (*clone)(lang_Character__CString);
    lang_types__Bool (*equals__quest)(lang_Character__CString, lang_Character__CString);
    lang_String__String* (*toString)(lang_Character__CString);
};


#ifdef OOC_FROM_C
#define strcmp(, ) lang_Character__strcmp((), ())
#define strncmp(, , ) lang_Character__strncmp((), (), ())
#define strstr(, ) lang_Character__strstr((), ())
#define strlen() lang_Character__strlen(())
#define strtol(, , ) lang_Character__strtol((), (void*) (), ())
#define strtoll(, , ) lang_Character__strtoll((), (void*) (), ())
#define strtoul(, , ) lang_Character__strtoul((), (void*) (), ())
#define strtof(, ) lang_Character__strtof((), (void*) ())
#define strtod(, ) lang_Character__strtod((), (void*) ())
#define strtold(, ) lang_Character__strtold((), (void*) ())
#define strtold(str, p) lang_Character__strtold((str), (void*) (p))
#define Char lang_Character__Char
#define Char_class() lang_Character__Char_class()
#define CharClass lang_Character__CharClass
#define CharClass_class() lang_Character__CharClass_class()
#define Char_alphaNumeric__quest(_this_) lang_Character__Char_alphaNumeric__quest((void*) (_this_))
#define Char_alpha__quest(_this_) lang_Character__Char_alpha__quest((void*) (_this_))
#define Char_lower__quest(_this_) lang_Character__Char_lower__quest((void*) (_this_))
#define Char_upper__quest(_this_) lang_Character__Char_upper__quest((void*) (_this_))
#define Char_digit__quest(_this_) lang_Character__Char_digit__quest((void*) (_this_))
#define Char_octalDigit__quest(_this_) lang_Character__Char_octalDigit__quest((void*) (_this_))
#define Char_hexDigit__quest(_this_) lang_Character__Char_hexDigit__quest((void*) (_this_))
#define Char_control__quest(_this_) lang_Character__Char_control__quest((void*) (_this_))
#define Char_graph__quest(_this_) lang_Character__Char_graph__quest((void*) (_this_))
#define Char_printable__quest(_this_) lang_Character__Char_printable__quest((void*) (_this_))
#define Char_punctuation__quest(_this_) lang_Character__Char_punctuation__quest((void*) (_this_))
#define Char_whitespace__quest(_this_) lang_Character__Char_whitespace__quest((void*) (_this_))
#define Char_blank__quest(_this_) lang_Character__Char_blank__quest((void*) (_this_))
#define Char_toInt(_this_) lang_Character__Char_toInt((void*) (_this_))
#define Char_toLower(_this_) lang_Character__Char_toLower((void*) (_this_))
#define Char_toUpper(_this_) lang_Character__Char_toUpper((void*) (_this_))
#define Char_toString(_this_) (void*) lang_Character__Char_toString((void*) (_this_))
#define Char_print(_this_) lang_Character__Char_print((void*) (_this_))
#define Char_print_withStream(_this_, stream) lang_Character__Char_print_withStream((void*) (_this_), (stream))
#define Char_println(_this_) lang_Character__Char_println((void*) (_this_))
#define Char_println_withStream(_this_, stream) lang_Character__Char_println_withStream((void*) (_this_), (stream))
#define Char_containedIn__quest(_this_, s) lang_Character__Char_containedIn__quest((void*) (_this_), (void*) (s))
#define Char_containedIn__quest_charWithLength(_this_, s, sLength) lang_Character__Char_containedIn__quest_charWithLength((void*) (_this_), (s), (sLength))
#define Char_compareWith(_this_, compareFunc, target, targetSize) lang_Character__Char_compareWith((void*) (_this_), (compareFunc), (target), (targetSize))
#define Char___load__() lang_Character__Char___load__()
#define SChar lang_Character__SChar
#define SChar_class() lang_Character__SChar_class()
#define SCharClass lang_Character__SCharClass
#define SCharClass_class() lang_Character__SCharClass_class()
#define SChar___load__() lang_Character__SChar___load__()
#define UChar lang_Character__UChar
#define UChar_class() lang_Character__UChar_class()
#define UCharClass lang_Character__UCharClass
#define UCharClass_class() lang_Character__UCharClass_class()
#define UChar___load__() lang_Character__UChar___load__()
#define WChar lang_Character__WChar
#define WChar_class() lang_Character__WChar_class()
#define WCharClass lang_Character__WCharClass
#define WCharClass_class() lang_Character__WCharClass_class()
#define WChar___load__() lang_Character__WChar___load__()
#define CString lang_Character__CString
#define CString_class() lang_Character__CString_class()
#define CStringClass lang_Character__CStringClass
#define CStringClass_class() lang_Character__CStringClass_class()
#define CString_new_withLength(length) lang_Character__CString_new_withLength((length))
#define CString_clone(_this_) lang_Character__CString_clone((void*) (_this_))
#define CString_equals__quest(_this_, other) lang_Character__CString_equals__quest((void*) (_this_), (other))
#define CString_toString(_this_) (void*) lang_Character__CString_toString((void*) (_this_))
#define CString_length(_this_) lang_Character__CString_length((void*) (_this_))
#define CString___load__() lang_Character__CString___load__()
#endif

#endif // ___lang_Character___
