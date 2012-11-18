/* lang/Numbers source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/Numbers.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/BufferIterator.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Character.h>
#include <sdk/lang/VarArgs.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/Memory.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Buffer.h>
#include <sdk/lang/Abstractions.h>
#include <sdk/lang/Format.h>
#include <sdk/lang/IO.h>

static lang_String__String* __strLit45;
static lang_String__String* __strLit44;
static lang_String__String* __strLit43;
static lang_String__String* __strLit42;
static lang_String__String* __strLit41;
static lang_String__String* __strLit40;
static lang_String__String* __strLit39;
static lang_String__String* __strLit38;
static lang_String__String* __strLit37;
lang_Numbers__SSizeT lang_Numbers__INT_MAX;
lang_Numbers__SSizeT lang_Numbers__INT_MIN;

lang_String__String* lang_Numbers__LLong_toString(lang_Numbers__LLong this) {
    struct { 
        lang_types__Pointer __f1;
        lang_Numbers__LLong __f2;
    } ____va_args187 = { 
        lang_Numbers__LLong_class(), 
        ((lang_Numbers__LLong) (this))
    };
    lang_VarArgs__VarArgs ____va188 = (lang_VarArgs__VarArgs) { 
        (void*) &(____va_args187), 
        NULL, 
        1
    };
    return lang_String__String_format((lang_String__String*) __strLit37, ____va188);
}

lang_String__String* lang_Numbers__LLong_toHexString(lang_Numbers__LLong this) {
    struct { 
        lang_types__Pointer __f1;
        lang_Numbers__LLong __f2;
    } ____va_args189 = { 
        lang_Numbers__LLong_class(), 
        ((lang_Numbers__LLong) (this))
    };
    lang_VarArgs__VarArgs ____va190 = (lang_VarArgs__VarArgs) { 
        (void*) &(____va_args189), 
        NULL, 
        1
    };
    return lang_String__String_format((lang_String__String*) __strLit38, ____va190);
}

lang_types__Bool lang_Numbers__LLong_odd__quest(lang_Numbers__LLong this) {
    return this % 2 == (lang_Numbers__LLong) 1;
}

lang_types__Bool lang_Numbers__LLong_even__quest(lang_Numbers__LLong this) {
    return this % 2 == (lang_Numbers__LLong) 0;
}

lang_types__Bool lang_Numbers__LLong_divisor__quest(lang_Numbers__LLong this, lang_Numbers__Int divisor) {
    return this % divisor == (lang_Numbers__LLong) 0;
}

lang_types__Bool lang_Numbers__LLong_in__quest(lang_Numbers__LLong this, lang_Numbers__Range range) {
    return this >= (lang_Numbers__LLong) range.min && this < (lang_Numbers__LLong) range.max;
}

void lang_Numbers__LLong_times(lang_Numbers__LLong this, lang_types__Closure fn) {
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < this; i++) {
            ((void (*)(void*)) fn.thunk)(fn.context);
        }
    }
}

void lang_Numbers__LLong_times_withIndex(lang_Numbers__LLong this, lang_types__Closure fn) {
    
    {
        lang_Numbers__Int i;
        for (i = 0; i < this; i++) {
            ((void (*)(lang_Numbers__LLong, void*)) fn.thunk)((lang_Numbers__LLong) (i), fn.context);
        }
    }
}

lang_Numbers__LLong lang_Numbers__LLong_abs(lang_Numbers__LLong this) {
    return this >= (lang_Numbers__LLong) 0 ? this : this * -1;
}
void lang_Numbers__LLong___load__() {
    lang_types__Class___load__();
}

lang_Numbers__LLongClass *lang_Numbers__LLong_class(){
    static _Bool __done__ = false;
    static lang_Numbers__LLongClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Numbers__LLong),
                    .size = sizeof(lang_Numbers__LLong)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_Numbers__LLong___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("LLong", 5);
    }
    return &class;
}
void lang_Numbers__Long___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__LongClass *lang_Numbers__Long_class(){
    static _Bool __done__ = false;
    static lang_Numbers__LongClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Long),
                        .size = sizeof(lang_Numbers__Long)
                    },
                    .__defaults__ = (void*) lang_types__Class___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Numbers__Long___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Long", 4);
    }
    return &class;
}

lang_String__String* lang_Numbers__Int_toString(lang_Numbers__Int this) {
    struct { 
        lang_types__Pointer __f1;
        lang_Numbers__Int __f2;
    } ____va_args191 = { 
        lang_Numbers__Int_class(), 
        this
    };
    lang_VarArgs__VarArgs ____va192 = (lang_VarArgs__VarArgs) { 
        (void*) &(____va_args191), 
        NULL, 
        1
    };
    return lang_String__String_format((lang_String__String*) __strLit39, ____va192);
}
void lang_Numbers__Int___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__IntClass *lang_Numbers__Int_class(){
    static _Bool __done__ = false;
    static lang_Numbers__IntClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Int),
                        .size = sizeof(lang_Numbers__Int)
                    },
                    .__defaults__ = (void*) lang_types__Class___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Numbers__Int___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Int", 3);
    }
    return &class;
}
void lang_Numbers__Short___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__ShortClass *lang_Numbers__Short_class(){
    static _Bool __done__ = false;
    static lang_Numbers__ShortClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Short),
                        .size = sizeof(lang_Numbers__Short)
                    },
                    .__defaults__ = (void*) lang_types__Class___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Numbers__Short___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Short", 5);
    }
    return &class;
}

lang_String__String* lang_Numbers__ULLong_toString(lang_Numbers__ULLong this) {
    struct { 
        lang_types__Pointer __f1;
        lang_Numbers__ULLong __f2;
    } ____va_args193 = { 
        lang_Numbers__ULLong_class(), 
        ((lang_Numbers__ULLong) (this))
    };
    lang_VarArgs__VarArgs ____va194 = (lang_VarArgs__VarArgs) { 
        (void*) &(____va_args193), 
        NULL, 
        1
    };
    return lang_String__String_format((lang_String__String*) __strLit40, ____va194);
}

lang_types__Bool lang_Numbers__ULLong_in__quest(lang_Numbers__ULLong this, lang_Numbers__Range range) {
    return this >= (lang_Numbers__ULLong) range.min && this < (lang_Numbers__ULLong) range.max;
}
void lang_Numbers__ULLong___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__ULLongClass *lang_Numbers__ULLong_class(){
    static _Bool __done__ = false;
    static lang_Numbers__ULLongClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__ULLong),
                        .size = sizeof(lang_Numbers__ULLong)
                    },
                    .__defaults__ = (void*) lang_types__Class___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Numbers__ULLong___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("ULLong", 6);
    }
    return &class;
}
void lang_Numbers__ULong___load__() {
    lang_Numbers__ULLong___load__();
}

lang_Numbers__ULongClass *lang_Numbers__ULong_class(){
    static _Bool __done__ = false;
    static lang_Numbers__ULongClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__ULong),
                            .size = sizeof(lang_Numbers__ULong)
                        },
                        .__defaults__ = (void*) lang_types__Class___defaults___impl,
                        .__destroy__ = (void*) lang_types__Object___destroy___impl,
                        .__load__ = (void*) lang_Numbers__ULong___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__ULLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("ULong", 5);
    }
    return &class;
}

lang_String__String* lang_Numbers__UInt_toString(lang_Numbers__UInt this) {
    struct { 
        lang_types__Pointer __f1;
        lang_Numbers__UInt __f2;
    } ____va_args195 = { 
        lang_Numbers__UInt_class(), 
        this
    };
    lang_VarArgs__VarArgs ____va196 = (lang_VarArgs__VarArgs) { 
        (void*) &(____va_args195), 
        NULL, 
        1
    };
    return lang_String__String_format((lang_String__String*) __strLit41, ____va196);
}
void lang_Numbers__UInt___load__() {
    lang_Numbers__ULLong___load__();
}

lang_Numbers__UIntClass *lang_Numbers__UInt_class(){
    static _Bool __done__ = false;
    static lang_Numbers__UIntClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__UInt),
                            .size = sizeof(lang_Numbers__UInt)
                        },
                        .__defaults__ = (void*) lang_types__Class___defaults___impl,
                        .__destroy__ = (void*) lang_types__Object___destroy___impl,
                        .__load__ = (void*) lang_Numbers__UInt___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__ULLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("UInt", 4);
    }
    return &class;
}
void lang_Numbers__UShort___load__() {
    lang_Numbers__ULLong___load__();
}

lang_Numbers__UShortClass *lang_Numbers__UShort_class(){
    static _Bool __done__ = false;
    static lang_Numbers__UShortClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__UShort),
                            .size = sizeof(lang_Numbers__UShort)
                        },
                        .__defaults__ = (void*) lang_types__Class___defaults___impl,
                        .__destroy__ = (void*) lang_types__Object___destroy___impl,
                        .__load__ = (void*) lang_Numbers__UShort___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__ULLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("UShort", 6);
    }
    return &class;
}
void lang_Numbers__Int8___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__Int8Class *lang_Numbers__Int8_class(){
    static _Bool __done__ = false;
    static lang_Numbers__Int8Class class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Int8),
                        .size = sizeof(lang_Numbers__Int8)
                    },
                    .__defaults__ = (void*) lang_types__Class___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Numbers__Int8___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Int8", 4);
    }
    return &class;
}
void lang_Numbers__Int16___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__Int16Class *lang_Numbers__Int16_class(){
    static _Bool __done__ = false;
    static lang_Numbers__Int16Class class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Int16),
                        .size = sizeof(lang_Numbers__Int16)
                    },
                    .__defaults__ = (void*) lang_types__Class___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Numbers__Int16___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Int16", 5);
    }
    return &class;
}
void lang_Numbers__Int32___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__Int32Class *lang_Numbers__Int32_class(){
    static _Bool __done__ = false;
    static lang_Numbers__Int32Class class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Int32),
                        .size = sizeof(lang_Numbers__Int32)
                    },
                    .__defaults__ = (void*) lang_types__Class___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Numbers__Int32___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Int32", 5);
    }
    return &class;
}
void lang_Numbers__Int64___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__Int64Class *lang_Numbers__Int64_class(){
    static _Bool __done__ = false;
    static lang_Numbers__Int64Class class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Int64),
                        .size = sizeof(lang_Numbers__Int64)
                    },
                    .__defaults__ = (void*) lang_types__Class___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Numbers__Int64___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Int64", 5);
    }
    return &class;
}
void lang_Numbers__UInt8___load__() {
    lang_Numbers__ULLong___load__();
}

lang_Numbers__UInt8Class *lang_Numbers__UInt8_class(){
    static _Bool __done__ = false;
    static lang_Numbers__UInt8Class class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__UInt8),
                            .size = sizeof(lang_Numbers__UInt8)
                        },
                        .__defaults__ = (void*) lang_types__Class___defaults___impl,
                        .__destroy__ = (void*) lang_types__Object___destroy___impl,
                        .__load__ = (void*) lang_Numbers__UInt8___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__ULLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("UInt8", 5);
    }
    return &class;
}
void lang_Numbers__UInt16___load__() {
    lang_Numbers__ULLong___load__();
}

lang_Numbers__UInt16Class *lang_Numbers__UInt16_class(){
    static _Bool __done__ = false;
    static lang_Numbers__UInt16Class class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__UInt16),
                            .size = sizeof(lang_Numbers__UInt16)
                        },
                        .__defaults__ = (void*) lang_types__Class___defaults___impl,
                        .__destroy__ = (void*) lang_types__Object___destroy___impl,
                        .__load__ = (void*) lang_Numbers__UInt16___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__ULLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("UInt16", 6);
    }
    return &class;
}
void lang_Numbers__UInt32___load__() {
    lang_Numbers__ULLong___load__();
}

lang_Numbers__UInt32Class *lang_Numbers__UInt32_class(){
    static _Bool __done__ = false;
    static lang_Numbers__UInt32Class class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__UInt32),
                            .size = sizeof(lang_Numbers__UInt32)
                        },
                        .__defaults__ = (void*) lang_types__Class___defaults___impl,
                        .__destroy__ = (void*) lang_types__Object___destroy___impl,
                        .__load__ = (void*) lang_Numbers__UInt32___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__ULLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("UInt32", 6);
    }
    return &class;
}
void lang_Numbers__UInt64___load__() {
    lang_Numbers__ULLong___load__();
}

lang_Numbers__UInt64Class *lang_Numbers__UInt64_class(){
    static _Bool __done__ = false;
    static lang_Numbers__UInt64Class class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__UInt64),
                            .size = sizeof(lang_Numbers__UInt64)
                        },
                        .__defaults__ = (void*) lang_types__Class___defaults___impl,
                        .__destroy__ = (void*) lang_types__Object___destroy___impl,
                        .__load__ = (void*) lang_Numbers__UInt64___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__ULLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("UInt64", 6);
    }
    return &class;
}
void lang_Numbers__Octet___load__() {
    lang_types__Class___load__();
}

lang_Numbers__OctetClass *lang_Numbers__Octet_class(){
    static _Bool __done__ = false;
    static lang_Numbers__OctetClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Numbers__Octet),
                    .size = sizeof(lang_Numbers__Octet)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_Numbers__Octet___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Octet", 5);
    }
    return &class;
}
void lang_Numbers__SizeT___load__() {
    lang_Numbers__ULLong___load__();
}

lang_Numbers__SizeTClass *lang_Numbers__SizeT_class(){
    static _Bool __done__ = false;
    static lang_Numbers__SizeTClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__SizeT),
                            .size = sizeof(lang_Numbers__SizeT)
                        },
                        .__defaults__ = (void*) lang_types__Class___defaults___impl,
                        .__destroy__ = (void*) lang_types__Object___destroy___impl,
                        .__load__ = (void*) lang_Numbers__SizeT___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__ULLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("SizeT", 5);
    }
    return &class;
}

lang_String__String* lang_Numbers__SSizeT_toString(lang_Numbers__SSizeT this) {
    struct { 
        lang_types__Pointer __f1;
        lang_Numbers__SSizeT __f2;
    } ____va_args197 = { 
        lang_Numbers__SSizeT_class(), 
        this
    };
    lang_VarArgs__VarArgs ____va198 = (lang_VarArgs__VarArgs) { 
        (void*) &(____va_args197), 
        NULL, 
        1
    };
    return lang_String__String_format((lang_String__String*) __strLit42, ____va198);
}
void lang_Numbers__SSizeT___load__() {
    lang_Numbers__LLong___load__();
}

lang_Numbers__SSizeTClass *lang_Numbers__SSizeT_class(){
    static _Bool __done__ = false;
    static lang_Numbers__SSizeTClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__SSizeT),
                        .size = sizeof(lang_Numbers__SSizeT)
                    },
                    .__defaults__ = (void*) lang_types__Class___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Numbers__SSizeT___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LLong_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("SSizeT", 6);
    }
    return &class;
}
void lang_Numbers__PtrDiff___load__() {
    lang_Numbers__SSizeT___load__();
}

lang_Numbers__PtrDiffClass *lang_Numbers__PtrDiff_class(){
    static _Bool __done__ = false;
    static lang_Numbers__PtrDiffClass class = 
    {
        {
            {
                {
                    {
                        {
                            .instanceSize = sizeof(lang_Numbers__PtrDiff),
                            .size = sizeof(lang_Numbers__PtrDiff)
                        },
                        .__defaults__ = (void*) lang_types__Class___defaults___impl,
                        .__destroy__ = (void*) lang_types__Object___destroy___impl,
                        .__load__ = (void*) lang_Numbers__PtrDiff___load__,
                    },
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__SSizeT_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("PtrDiff", 7);
    }
    return &class;
}

lang_String__String* lang_Numbers__LDouble_toString(lang_Numbers__LDouble this) {
    struct { 
        lang_types__Pointer __f1;
        lang_Numbers__LDouble __f2;
    } ____va_args199 = { 
        lang_Numbers__LDouble_class(), 
        this
    };
    lang_VarArgs__VarArgs ____va200 = (lang_VarArgs__VarArgs) { 
        (void*) &(____va_args199), 
        NULL, 
        1
    };
    return lang_String__String_format((lang_String__String*) __strLit43, ____va200);
}

lang_Numbers__LDouble lang_Numbers__LDouble_abs(lang_Numbers__LDouble this) {
    return this < (lang_Numbers__LDouble) 0 ? -this : this;
}
void lang_Numbers__LDouble___load__() {
    lang_types__Class___load__();
}

lang_Numbers__LDoubleClass *lang_Numbers__LDouble_class(){
    static _Bool __done__ = false;
    static lang_Numbers__LDoubleClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Numbers__LDouble),
                    .size = sizeof(lang_Numbers__LDouble)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_Numbers__LDouble___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("LDouble", 7);
    }
    return &class;
}

lang_String__String* lang_Numbers__Double_toString(lang_Numbers__Double this) {
    struct { 
        lang_types__Pointer __f1;
        lang_Numbers__Double __f2;
    } ____va_args201 = { 
        lang_Numbers__Double_class(), 
        this
    };
    lang_VarArgs__VarArgs ____va202 = (lang_VarArgs__VarArgs) { 
        (void*) &(____va_args201), 
        NULL, 
        1
    };
    return lang_String__String_format((lang_String__String*) __strLit44, ____va202);
}
void lang_Numbers__Double___load__() {
    lang_Numbers__LDouble___load__();
}

lang_Numbers__DoubleClass *lang_Numbers__Double_class(){
    static _Bool __done__ = false;
    static lang_Numbers__DoubleClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Double),
                        .size = sizeof(lang_Numbers__Double)
                    },
                    .__defaults__ = (void*) lang_types__Class___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Numbers__Double___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LDouble_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Double", 6);
    }
    return &class;
}

lang_String__String* lang_Numbers__Float_toString(lang_Numbers__Float this) {
    struct { 
        lang_types__Pointer __f1;
        lang_Numbers__Float __f2;
    } ____va_args203 = { 
        lang_Numbers__Float_class(), 
        this
    };
    lang_VarArgs__VarArgs ____va204 = (lang_VarArgs__VarArgs) { 
        (void*) &(____va_args203), 
        NULL, 
        1
    };
    return lang_String__String_format((lang_String__String*) __strLit45, ____va204);
}
void lang_Numbers__Float___load__() {
    lang_Numbers__LDouble___load__();
}

lang_Numbers__FloatClass *lang_Numbers__Float_class(){
    static _Bool __done__ = false;
    static lang_Numbers__FloatClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Numbers__Float),
                        .size = sizeof(lang_Numbers__Float)
                    },
                    .__defaults__ = (void*) lang_types__Class___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Numbers__Float___load__,
                },
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Numbers__LDouble_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Float", 5);
    }
    return &class;
}

lang_Numbers__Int lang_Numbers__Range_reduce(lang_Numbers__Range this, lang_types__Closure f) {
    lang_Numbers__Int acc = ((lang_Numbers__Int (*)(lang_Numbers__Int, lang_Numbers__Int, void*)) f.thunk)(this.min, this.min + 1, f.context);
    
    {
        lang_Numbers__Int i;
        for (i = this.min + 2; i < this.max; i++) {
            acc = ((lang_Numbers__Int (*)(lang_Numbers__Int, lang_Numbers__Int, void*)) f.thunk)(acc, i, f.context);
        }
    }
    return acc;
}
lang_Numbers__Range lang_Numbers__Range_new(lang_Numbers__Int min, lang_Numbers__Int max) {
    
    lang_Numbers__Range this;
    this.min = min;
    this.max = max;
    return this;
}
void lang_Numbers__Range___load__() {
    lang_types__Class___load__();
}

lang_Numbers__RangeClass *lang_Numbers__Range_class(){
    static _Bool __done__ = false;
    static lang_Numbers__RangeClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Numbers__Range),
                    .size = sizeof(lang_Numbers__Range)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_Numbers__Range___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Range", 5);
    }
    return &class;
}
void lang_Numbers_load() {
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
        lang_Abstractions_load();
        lang_Format_load();
        lang_IO_load();
        lang_Numbers__LLong___load__();
        lang_Numbers__Long___load__();
        lang_Numbers__Int___load__();
        lang_Numbers__Short___load__();
        lang_Numbers__ULLong___load__();
        lang_Numbers__ULong___load__();
        lang_Numbers__UInt___load__();
        lang_Numbers__UShort___load__();
        lang_Numbers__Int8___load__();
        lang_Numbers__Int16___load__();
        lang_Numbers__Int32___load__();
        lang_Numbers__Int64___load__();
        lang_Numbers__UInt8___load__();
        lang_Numbers__UInt16___load__();
        lang_Numbers__UInt32___load__();
        lang_Numbers__UInt64___load__();
        lang_Numbers__Octet___load__();
        lang_Numbers__SizeT___load__();
        lang_Numbers__SSizeT___load__();
        lang_Numbers__PtrDiff___load__();
        lang_Numbers__LDouble___load__();
        lang_Numbers__Double___load__();
        lang_Numbers__Float___load__();
        lang_Numbers__Range___load__();
        __strLit45 = (void*) lang_String__makeStringLiteral("%.2f", 4);
        __strLit44 = (void*) lang_String__makeStringLiteral("%.2f", 4);
        __strLit43 = (void*) lang_String__makeStringLiteral("%.2Lf", 5);
        __strLit42 = (void*) lang_String__makeStringLiteral("%u", 2);
        __strLit41 = (void*) lang_String__makeStringLiteral("%u", 2);
        __strLit40 = (void*) lang_String__makeStringLiteral("%llu", 4);
        __strLit39 = (void*) lang_String__makeStringLiteral("%d", 2);
        __strLit38 = (void*) lang_String__makeStringLiteral("%llx", 4);
        __strLit37 = (void*) lang_String__makeStringLiteral("%lld", 4);
        lang_Numbers__INT_MAX = 2147483647;
        lang_Numbers__INT_MIN = -lang_Numbers__INT_MAX - 1;
    }
}

