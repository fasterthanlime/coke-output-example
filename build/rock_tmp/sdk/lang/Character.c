/* lang/Character source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/Character.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/BufferIterator.h>
#include <sdk/lang/System.h>
#include <sdk/lang/VarArgs.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/Memory.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Buffer.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Abstractions.h>
#include <sdk/lang/Format.h>
#include <sdk/lang/IO.h>


lang_types__Bool lang_Character__Char_alphaNumeric__quest(lang_Character__Char this) {
    return lang_Character__Char_alpha__quest(this) || lang_Character__Char_digit__quest(this);
}

lang_types__Bool lang_Character__Char_alpha__quest(lang_Character__Char this) {
    return lang_Character__Char_lower__quest(this) || lang_Character__Char_upper__quest(this);
}

lang_types__Bool lang_Character__Char_lower__quest(lang_Character__Char this) {
    return this >= 'a' && this <= 'z';
}

lang_types__Bool lang_Character__Char_upper__quest(lang_Character__Char this) {
    return this >= 'A' && this <= 'Z';
}

lang_types__Bool lang_Character__Char_digit__quest(lang_Character__Char this) {
    return this >= '0' && this <= '9';
}

lang_types__Bool lang_Character__Char_octalDigit__quest(lang_Character__Char this) {
    return this >= '0' && this <= '7';
}

lang_types__Bool lang_Character__Char_hexDigit__quest(lang_Character__Char this) {
    return lang_Character__Char_digit__quest(this) || (this >= 'A' && this <= 'F') || (this >= 'a' && this <= 'f');
}

lang_types__Bool lang_Character__Char_control__quest(lang_Character__Char this) {
    return (this >= (lang_Character__Char) 0 && this <= (lang_Character__Char) 31) || this == (lang_Character__Char) 127;
}

lang_types__Bool lang_Character__Char_graph__quest(lang_Character__Char this) {
    return lang_Character__Char_printable__quest(this) && this != ' ';
}

lang_types__Bool lang_Character__Char_printable__quest(lang_Character__Char this) {
    return this >= (lang_Character__Char) 32 && this <= (lang_Character__Char) 126;
}

lang_types__Bool lang_Character__Char_punctuation__quest(lang_Character__Char this) {
    return lang_Character__Char_printable__quest(this) && !lang_Character__Char_alphaNumeric__quest(this) && this != ' ';
}

lang_types__Bool lang_Character__Char_whitespace__quest(lang_Character__Char this) {
    return this == ' ' || this == '\f' || this == '\n' || this == '\r' || this == '\t' || this == '\v';
}

lang_types__Bool lang_Character__Char_blank__quest(lang_Character__Char this) {
    return this == ' ' || this == '\t';
}

lang_Numbers__Int lang_Character__Char_toInt(lang_Character__Char this) {
    if (lang_Character__Char_digit__quest(this)) {
        return ((lang_Numbers__Int) ((this - '0')));
    }
    return ((lang_Numbers__Int) (-1));
}

lang_String__String* lang_Character__Char_toString(lang_Character__Char this) {
    return lang_String__String_new_withCStrAndLength(((lang_Character__CString) (&(this))), 1);
}

void lang_Character__Char_print(lang_Character__Char this) {
    lang_IO__fputc(this, stdout);
}

void lang_Character__Char_print_withStream(lang_Character__Char this, lang_IO__FStream stream) {
    lang_IO__fputc(this, stream);
}

void lang_Character__Char_println(lang_Character__Char this) {
    lang_IO__fputc(this, stdout);
    lang_IO__fputc('\n', stdout);
}

void lang_Character__Char_println_withStream(lang_Character__Char this, lang_IO__FStream stream) {
    lang_IO__fputc(this, stream);
    lang_IO__fputc('\n', stream);
}

lang_types__Bool lang_Character__Char_containedIn__quest(lang_Character__Char this, lang_String__String* s) {
    return lang_Character__Char_containedIn__quest_charWithLength(this, s->_buffer->data, lang_String__String___getsize__(s));
}

lang_types__Bool lang_Character__Char_containedIn__quest_charWithLength(lang_Character__Char this, lang_Character__Char* s, lang_Numbers__SizeT sLength) {
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < sLength; i++) {
            if ((*((s + i))) == this) {
                return true;
            }
        }
    }
    return false;
}

lang_Numbers__SSizeT lang_Character__Char_compareWith(lang_Character__Char this, lang_types__Closure compareFunc, lang_Character__Char* target, lang_Numbers__SizeT targetSize) {
    return ((lang_Numbers__SSizeT (*)(lang_Character__Char, lang_Character__Char*, lang_Numbers__SizeT, void*)) compareFunc.thunk)(this, target, targetSize, compareFunc.context);
}
void lang_Character__Char___load__() {
    lang_types__Class___load__();
}

lang_Character__CharClass *lang_Character__Char_class(){
    static _Bool __done__ = false;
    static lang_Character__CharClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Character__Char),
                    .size = sizeof(lang_Character__Char)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_Character__Char___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Char", 4);
    }
    return &class;
}
void lang_Character__SChar___load__() {
    lang_Character__Char___load__();
}

lang_Character__SCharClass *lang_Character__SChar_class(){
    static _Bool __done__ = false;
    static lang_Character__SCharClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Character__SChar),
                        .size = sizeof(lang_Character__SChar)
                    },
                    .__defaults__ = (void*) lang_types__Class___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Character__SChar___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Character__Char_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("SChar", 5);
    }
    return &class;
}
void lang_Character__UChar___load__() {
    lang_Character__Char___load__();
}

lang_Character__UCharClass *lang_Character__UChar_class(){
    static _Bool __done__ = false;
    static lang_Character__UCharClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Character__UChar),
                        .size = sizeof(lang_Character__UChar)
                    },
                    .__defaults__ = (void*) lang_types__Class___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Character__UChar___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Character__Char_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("UChar", 5);
    }
    return &class;
}
void lang_Character__WChar___load__() {
    lang_types__Class___load__();
}

lang_Character__WCharClass *lang_Character__WChar_class(){
    static _Bool __done__ = false;
    static lang_Character__WCharClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Character__WChar),
                    .size = sizeof(lang_Character__WChar)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_Character__WChar___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("WChar", 5);
    }
    return &class;
}

lang_Character__CString lang_Character__CString_clone(lang_Character__CString this) {
    lang_Numbers__Int length = lang_Character__CString_length(this);
    lang_Character__CString copy = lang_Character__CString_new_withLength(length);
    lang_Memory__memcpy(copy, this, length + 1);
    return ((lang_Character__CString) (copy));
}

lang_types__Bool lang_Character__CString_equals__quest(lang_Character__CString this, lang_Character__CString other) {
    if (other == (lang_Character__CString) NULL) {
        return false;
    }
    lang_Numbers__Int l = lang_Character__CString_length(this);
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < l; i++) {
            if (((*((this + i))) != (*((other + i)))) || (*((other + i))) == '\0') {
                return false;
            }
        }
    }
    return true;
}

lang_String__String* lang_Character__CString_toString(lang_Character__CString this) {
    return lang_String__String_new_withCStrAndLength(this, lang_Character__CString_length(this));
}
lang_Character__CString lang_Character__CString_new_withLength(lang_Numbers__Int length) {
    
    lang_Character__Char* result = ((lang_Character__Char*) (lang_Memory__gc_malloc(length + 1)));
    result[length] = '\0';
    return ((lang_Character__CString) (result));
}
void lang_Character__CString___load__() {
    lang_types__Class___load__();
}

lang_Character__CStringClass *lang_Character__CString_class(){
    static _Bool __done__ = false;
    static lang_Character__CStringClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Character__CString),
                    .size = sizeof(lang_Character__CString)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_Character__CString___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("CString", 7);
    }
    return &class;
}
void lang_Character_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Exception_load();
        lang_BufferIterator_load();
        lang_System_load();
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
        lang_Character__Char___load__();
        lang_Character__SChar___load__();
        lang_Character__UChar___load__();
        lang_Character__WChar___load__();
        lang_Character__CString___load__();
    }
}

#if defined(__CYGWIN__)

lang_Numbers__LDouble lang_Character__strtold(lang_Character__Char* str, lang_types__Pointer p) {
    return ((lang_Numbers__LDouble) (lang_Character__strtod(str, p)));
}
#endif

lang_String__String* lang_Character____OP_AS_Char__String(lang_Character__Char value) {
    return lang_Character__Char_toString(value);
}

lang_String__String* lang_Character____OP_AS_Char__star__String(lang_Character__Char* value) {
    return value ? lang_Character__CString_toString(((lang_Character__CString) (value))) : NULL;
}

lang_String__String* lang_Character____OP_AS_CString__String(lang_Character__CString value) {
    return value ? lang_Character__CString_toString(value) : NULL;
}

lang_types__Bool lang_Character____OP_EQ_CString_CString__Bool(lang_Character__CString str1, lang_Character__CString str2) {
    if ((str1 == (lang_Character__CString) NULL) || (str2 == (lang_Character__CString) NULL)) {
        return false;
    }
    return lang_Character__CString_equals__quest(str1, str2);
}

lang_types__Bool lang_Character____OP_NE_CString_CString__Bool(lang_Character__CString str1, lang_Character__CString str2) {
    return !(lang_Character____OP_EQ_CString_CString__Bool(str1, str2));
}
