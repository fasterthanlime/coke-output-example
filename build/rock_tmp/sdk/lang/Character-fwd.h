/* lang/Character header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Character_fwd___
#define ___lang_Character_fwd___

#include <stdlib.h>

typedef char lang_Character__Char;
typedef signed char lang_Character__SChar;
typedef unsigned char lang_Character__UChar;
typedef wchar_t lang_Character__WChar;
typedef char* lang_Character__CString;
struct _lang_Character__CharClass;
typedef struct _lang_Character__CharClass lang_Character__CharClass;
struct _lang_Character__SCharClass;
typedef struct _lang_Character__SCharClass lang_Character__SCharClass;
struct _lang_Character__UCharClass;
typedef struct _lang_Character__UCharClass lang_Character__UCharClass;
struct _lang_Character__WCharClass;
typedef struct _lang_Character__WCharClass lang_Character__WCharClass;
struct _lang_Character__CStringClass;
typedef struct _lang_Character__CStringClass lang_Character__CStringClass;

#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/BufferIterator-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/VarArgs-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Buffer-fwd.h>
#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/Abstractions-fwd.h>
#include <sdk/lang/Format-fwd.h>
#include <sdk/lang/IO-fwd.h>

#ifndef __FUNC___Char_Char__star_SizeT_SSizeT__DEFINE
#define __FUNC___Char_Char__star_SizeT_SSizeT__DEFINE

typedef lang_Numbers__SSizeT (*__FUNC___Char_Char__star_SizeT_SSizeT)(lang_Character__Char, lang_Character__Char*, lang_Numbers__SizeT, void*);

#endif

lang_Character__CharClass *lang_Character__Char_class();
lang_types__Bool lang_Character__Char_alphaNumeric__quest(lang_Character__Char this);
lang_types__Bool lang_Character__Char_alpha__quest(lang_Character__Char this);
lang_types__Bool lang_Character__Char_lower__quest(lang_Character__Char this);
lang_types__Bool lang_Character__Char_upper__quest(lang_Character__Char this);
lang_types__Bool lang_Character__Char_digit__quest(lang_Character__Char this);
lang_types__Bool lang_Character__Char_octalDigit__quest(lang_Character__Char this);
lang_types__Bool lang_Character__Char_hexDigit__quest(lang_Character__Char this);
lang_types__Bool lang_Character__Char_control__quest(lang_Character__Char this);
lang_types__Bool lang_Character__Char_graph__quest(lang_Character__Char this);
lang_types__Bool lang_Character__Char_printable__quest(lang_Character__Char this);
lang_types__Bool lang_Character__Char_punctuation__quest(lang_Character__Char this);
lang_types__Bool lang_Character__Char_whitespace__quest(lang_Character__Char this);
lang_types__Bool lang_Character__Char_blank__quest(lang_Character__Char this);
lang_Numbers__Int lang_Character__Char_toInt(lang_Character__Char this);
#define lang_Character__Char_toLower tolower

#define lang_Character__Char_toUpper toupper

lang_String__String* lang_Character__Char_toString(lang_Character__Char this);
void lang_Character__Char_print(lang_Character__Char this);
void lang_Character__Char_print_withStream(lang_Character__Char this, lang_IO__FStream stream);
void lang_Character__Char_println(lang_Character__Char this);
void lang_Character__Char_println_withStream(lang_Character__Char this, lang_IO__FStream stream);
lang_types__Bool lang_Character__Char_containedIn__quest(lang_Character__Char this, lang_String__String* s);
lang_types__Bool lang_Character__Char_containedIn__quest_charWithLength(lang_Character__Char this, lang_Character__Char* s, lang_Numbers__SizeT sLength);
lang_Numbers__SSizeT lang_Character__Char_compareWith(lang_Character__Char this, lang_types__Closure compareFunc, lang_Character__Char* target, lang_Numbers__SizeT targetSize);
void lang_Character__Char___load__();
lang_Character__SCharClass *lang_Character__SChar_class();
void lang_Character__SChar___load__();
lang_Character__UCharClass *lang_Character__UChar_class();
void lang_Character__UChar___load__();
lang_Character__WCharClass *lang_Character__WChar_class();
void lang_Character__WChar___load__();
lang_Character__CStringClass *lang_Character__CString_class();
lang_Character__CString lang_Character__CString_new_withLength(lang_Numbers__Int length);
lang_Character__CString lang_Character__CString_clone(lang_Character__CString this);
lang_types__Bool lang_Character__CString_equals__quest(lang_Character__CString this, lang_Character__CString other);
lang_String__String* lang_Character__CString_toString(lang_Character__CString this);
#define lang_Character__CString_length strlen

void lang_Character__CString___load__();
void lang_Character_load();
#define lang_Character__strcmp strcmp

#define lang_Character__strncmp strncmp

#define lang_Character__strstr strstr

#define lang_Character__strlen strlen

#define lang_Character__strtol strtol

#define lang_Character__strtoll strtoll

#define lang_Character__strtoul strtoul

#define lang_Character__strtof strtof

#define lang_Character__strtod strtod

#if !(defined(__CYGWIN__))
#define lang_Character__strtold strtold

#endif
#if defined(__CYGWIN__)
lang_Numbers__LDouble lang_Character__strtold(lang_Character__Char* str, lang_types__Pointer p);
#endif
lang_String__String* lang_Character____OP_AS_Char__String(lang_Character__Char value);
lang_String__String* lang_Character____OP_AS_Char__star__String(lang_Character__Char* value);
lang_String__String* lang_Character____OP_AS_CString__String(lang_Character__CString value);
lang_types__Bool lang_Character____OP_EQ_CString_CString__Bool(lang_Character__CString str1, lang_Character__CString str2);
lang_types__Bool lang_Character____OP_NE_CString_CString__Bool(lang_Character__CString str1, lang_Character__CString str2);

#endif // ___lang_Character_fwd___
