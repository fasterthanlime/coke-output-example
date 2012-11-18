/* lang/Format source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/Format.h>
#include <sdk/lang/BufferIterator.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Character.h>
#include <sdk/lang/VarArgs.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/Memory.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Buffer.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Abstractions.h>
#include <sdk/lang/IO.h>

static lang_String__String* __strLit56;
static lang_String__String* __strLit52;
static lang_String__String* __strLit51;
static lang_String__String* __strLit49;
static lang_String__String* __strLit48;
static lang_String__String* __strLit47;
static lang_String__String* __strLit46;
lang_Numbers__SSizeT lang_Format__TF_ALTERNATE;
lang_Numbers__SSizeT lang_Format__TF_ZEROPAD;
lang_Numbers__SSizeT lang_Format__TF_LEFT;
lang_Numbers__SSizeT lang_Format__TF_SPACE;
lang_Numbers__SSizeT lang_Format__TF_EXP_SIGN;
lang_Numbers__SSizeT lang_Format__TF_SMALL;
lang_Numbers__SSizeT lang_Format__TF_PLUS;
lang_Numbers__SSizeT lang_Format__TF_UNSIGNED;
lang_String__String* lang_Format____digits;
lang_String__String* lang_Format____digits_small;

void lang_Format__InvalidFormatException_init(lang_Format__InvalidFormatException* this, lang_Character__CString msg) {
    ((lang_Exception__Exception*)this)->message = lang_String____OP_ADD_String_CString__String(__strLit46, msg) == (lang_String__String*) NULL ? __strLit47 : lang_String____OP_ADD_String_String__String(lang_Character__CString_toString(msg), __strLit48);
}

void lang_Format__InvalidFormatException___defaults___impl(lang_Format__InvalidFormatException* this) {
    lang_Exception__Exception___defaults___impl((lang_Exception__Exception*) this);
}

void lang_Format__InvalidFormatException___defaults__(lang_Format__InvalidFormatException* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_Format__InvalidFormatException* lang_Format__InvalidFormatException_new(lang_Character__CString msg) {
    
    lang_Format__InvalidFormatException* this = ((lang_Format__InvalidFormatException*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Format__InvalidFormatException_class())));
    lang_Format__InvalidFormatException___defaults__(this);
    lang_Format__InvalidFormatException_init((lang_Format__InvalidFormatException*) this, msg);
    return this;
}
void lang_Format__InvalidFormatException___load__() {
    lang_Exception__Exception___load__();
}

lang_Format__InvalidFormatExceptionClass *lang_Format__InvalidFormatException_class(){
    static _Bool __done__ = false;
    static lang_Format__InvalidFormatExceptionClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Format__InvalidFormatException),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) lang_Format__InvalidFormatException___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Format__InvalidFormatException___load__,
                },
            },
            .addBacktrace = (void*) lang_Exception__Exception_addBacktrace_impl,
            .printBacktrace = (void*) lang_Exception__Exception_printBacktrace_impl,
            .new = (void*) lang_Format__InvalidFormatException_new,
            .new_noOrigin = (void*) lang_Exception__Exception_new_noOrigin,
            .formatMessage = (void*) lang_Exception__Exception_formatMessage_impl,
            .print = (void*) lang_Exception__Exception_print_impl,
            .throw = (void*) lang_Exception__Exception_throw_impl,
            .rethrow = (void*) lang_Exception__Exception_rethrow_impl,
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Exception__Exception_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("InvalidFormatException", 22);
    }
    return &class;
}

void lang_Format__InvalidTypeException_init(lang_Format__InvalidTypeException* this, lang_types__Class* T) {
    struct { 
        lang_types__Pointer __f1;
        lang_String__String* __f2;
    } ____va_args205 = { 
        lang_String__String_class(), 
        T->name
    };
    lang_VarArgs__VarArgs ____va206 = (lang_VarArgs__VarArgs) { 
        (void*) &(____va_args205), 
        NULL, 
        1
    };
    ((lang_Exception__Exception*)this)->message = lang_String__String_format((lang_String__String*) __strLit49, ____va206);
}

void lang_Format__InvalidTypeException___defaults___impl(lang_Format__InvalidTypeException* this) {
    lang_Exception__Exception___defaults___impl((lang_Exception__Exception*) this);
}

void lang_Format__InvalidTypeException___defaults__(lang_Format__InvalidTypeException* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_Format__InvalidTypeException* lang_Format__InvalidTypeException_new(lang_types__Class* T) {
    
    lang_Format__InvalidTypeException* this = ((lang_Format__InvalidTypeException*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Format__InvalidTypeException_class())));
    lang_Format__InvalidTypeException___defaults__(this);
    lang_Format__InvalidTypeException_init((lang_Format__InvalidTypeException*) this, T);
    return this;
}
void lang_Format__InvalidTypeException___load__() {
    lang_Exception__Exception___load__();
}

lang_Format__InvalidTypeExceptionClass *lang_Format__InvalidTypeException_class(){
    static _Bool __done__ = false;
    static lang_Format__InvalidTypeExceptionClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Format__InvalidTypeException),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) lang_Format__InvalidTypeException___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Format__InvalidTypeException___load__,
                },
            },
            .addBacktrace = (void*) lang_Exception__Exception_addBacktrace_impl,
            .printBacktrace = (void*) lang_Exception__Exception_printBacktrace_impl,
            .new = (void*) lang_Format__InvalidTypeException_new,
            .new_noOrigin = (void*) lang_Exception__Exception_new_noOrigin,
            .formatMessage = (void*) lang_Exception__Exception_formatMessage_impl,
            .print = (void*) lang_Exception__Exception_print_impl,
            .throw = (void*) lang_Exception__Exception_throw_impl,
            .rethrow = (void*) lang_Exception__Exception_rethrow_impl,
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Exception__Exception_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("InvalidTypeException", 20);
    }
    return &class;
}
void lang_Format__FSInfoStruct___load__() {
    lang_types__Class___load__();
}

lang_Format__FSInfoStructClass *lang_Format__FSInfoStruct_class(){
    static _Bool __done__ = false;
    static lang_Format__FSInfoStructClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Format__FSInfoStruct),
                    .size = sizeof(lang_Format__FSInfoStruct)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_Format__FSInfoStruct___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("FSInfoStruct", 12);
    }
    return &class;
}
void __lang_Format_closure277_ctx___load__() {
    lang_types__Class___load__();
}

__lang_Format_closure277_ctxClass *__lang_Format_closure277_ctx_class(){
    static _Bool __done__ = false;
    static __lang_Format_closure277_ctxClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(__lang_Format_closure277_ctx),
                    .size = sizeof(__lang_Format_closure277_ctx)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) __lang_Format_closure277_ctx___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("__lang_Format_closure277_ctx", 28);
    }
    return &class;
}
void lang_Format_load() {
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
        lang_Numbers_load();
        lang_Abstractions_load();
        lang_IO_load();
        lang_Format__InvalidFormatException___load__();
        lang_Format__InvalidTypeException___load__();
        lang_Format__FSInfoStruct___load__();
        __lang_Format_closure277_ctx___load__();
        __strLit56 = (void*) lang_String__makeStringLiteral("(nil)", 5);
        __strLit52 = (void*) lang_String__makeStringLiteral("f", 1);
        __strLit51 = (void*) lang_String__makeStringLiteral(".", 1);
        __strLit49 = (void*) lang_String__makeStringLiteral("invalid type %s passed to generic function!", 43);
        __strLit48 = (void*) lang_String__makeStringLiteral("\"", 1);
        __strLit47 = (void*) lang_String__makeStringLiteral("", 0);
        __strLit46 = (void*) lang_String__makeStringLiteral("invalid format string! \"", 24);
        lang_Format__TF_ALTERNATE = 1 << 0;
        lang_Format__TF_ZEROPAD = 1 << 1;
        lang_Format__TF_LEFT = 1 << 2;
        lang_Format__TF_SPACE = 1 << 3;
        lang_Format__TF_EXP_SIGN = 1 << 4;
        lang_Format__TF_SMALL = 1 << 5;
        lang_Format__TF_PLUS = 1 << 6;
        lang_Format__TF_UNSIGNED = 1 << 7;
        lang_Format____digits = (void*) lang_String__makeStringLiteral("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ", 36);
        lang_Format____digits_small = (void*) lang_String__makeStringLiteral("0123456789abcdefghijklmnopqrstuvwxyz", 36);
    }
}


void lang_Buffer__Buffer_format(lang_Buffer__Buffer* this, lang_VarArgs__VarArgs args) {
    lang_Buffer__Buffer* __genCall207 = NULL;
    lang_Buffer__Buffer_setBuffer(this, (lang_Format__format_main((uint8_t*) &(__genCall207), (lang_types__Class*)lang_Buffer__Buffer_class(), (uint8_t*) &(this), args), __genCall207));
}

lang_String__String* lang_String__String_format(lang_String__String* this, lang_VarArgs__VarArgs args) {
    lang_String__String* __genCall257 = NULL;
    return (lang_Format__format_main((uint8_t*) &(__genCall257), (lang_types__Class*)lang_String__String_class(), (uint8_t*) &(this), args), __genCall257);
}

void lang_String__String_printf(lang_String__String* this, lang_VarArgs__VarArgs args) {
    lang_String__String* __genCall208 = NULL;
    lang_String__String_print((lang_Format__format_main((uint8_t*) &(__genCall208), (lang_types__Class*)lang_String__String_class(), (uint8_t*) &(this), args), __genCall208));
}

void lang_String__String_printfln(lang_String__String* this, lang_VarArgs__VarArgs args) {
    lang_String__String* __genCall209 = NULL;
    lang_String__String_println((lang_Format__format_main((uint8_t*) &(__genCall209), (lang_types__Class*)lang_String__String_class(), (uint8_t*) &(this), args), __genCall209));
}

void lang_Format__argNext(uint8_t* __genericReturn50, lang_VarArgs__VarArgsIterator* va, lang_types__Class* T) {
    if (!lang_VarArgs__VarArgsIterator_hasNext__quest((*(va)))) {
        lang_Exception__Exception_throw((lang_Exception__Exception*) lang_Format__InvalidFormatException_new(NULL));
    }
    lang_VarArgs__VarArgsIterator_next(&((*(va))), __genericReturn50, T);
    return;
}

void lang_Format__m_printn(lang_types__Class* T, lang_Buffer__Buffer* res, lang_Format__FSInfoStruct* info, uint8_t* arg) {
    lang_Character__Char sign = '\0';
    lang_Character__Char tmp[36];
    lang_String__String* digits = lang_Format____digits;
    lang_Numbers__Int size = (*info).fieldwidth;
    lang_Numbers__SSizeT i = 0;
    lang_Numbers__UInt32 n;
    lang_Numbers__Int32 signed_n;
    if (T->size == (lang_Numbers__SizeT) 4) {
        n = (* (lang_Numbers__UInt32*)arg);
        signed_n = (* (lang_Numbers__Int32*)arg);
    }
    else {
        n = (* (lang_Numbers__UInt64*)arg);
        signed_n = (* (lang_Numbers__Int64*)arg);
    }
    if ((*info).flags & lang_Format__TF_ALTERNATE && (*info).base == (lang_Numbers__Int) 16) {
        lang_Buffer__Buffer_append_char(res, '0');
        lang_Buffer__Buffer_append_char(res, (*info).flags & lang_Format__TF_SMALL ? 'x' : 'X');
    }
    if ((*info).flags & lang_Format__TF_SMALL) {
        digits = lang_Format____digits_small;
    }
    if (!((*info).flags & lang_Format__TF_UNSIGNED) && signed_n < (lang_Numbers__Int32) 0) {
        sign = '-';
        n = -signed_n;
    }
    else if ((*info).flags & lang_Format__TF_EXP_SIGN) {
        sign = '+';
    }
    if (sign) {
        size -= 1;
    }
    if (n == (lang_Numbers__UInt32) 0) {
        tmp[i] = '0';
        i += 1;
    }
    else {
        while (n != (lang_Numbers__UInt32) 0) {
            tmp[i] = lang_String____OP_IDX_String_SSizeT__Char(digits, n % (*info).base);
            i += 1;
            n /= (*info).base;
        }
    }
    if (!((*info).flags & lang_Format__TF_LEFT)) {
        while (size > (lang_Numbers__Int) i) {
            size -= 1;
            if ((*info).flags & lang_Format__TF_ZEROPAD) {
                lang_Buffer__Buffer_append_char(res, '0');
            }
            else {
                lang_Buffer__Buffer_append_char(res, ' ');
            }
        }
    }
    if (sign) {
        lang_Buffer__Buffer_append_char(res, sign);
    }
    while (i < (lang_Numbers__SSizeT) (*info).precision) {
        (*info).precision -= 1;
        lang_Buffer__Buffer_append_char(res, '0');
    }
    while (i != 0) {
        i -= 1;
        size -= 1;
        lang_Buffer__Buffer_append_char(res, tmp[i]);
    }
    if ((*info).flags & lang_Format__TF_LEFT) {
        while (size > (lang_Numbers__Int) 0) {
            size -= 1;
            lang_Buffer__Buffer_append_char(res, ' ');
        }
    }
}

lang_Character__Char* lang_Format__getCharPtrFromStringType(lang_types__Class* T, uint8_t* s) {
    lang_Character__Char* res;
    if ((T) == (lang_types__Class*) lang_String__String_class()){
        res = (* (lang_String__String**)s) ? lang_String__String_toCString((* (lang_String__String**)s)) : NULL;
    } else if ((T) == (lang_types__Class*) lang_Buffer__Buffer_class()){
        res = (* (lang_Buffer__Buffer**)s) ? lang_Buffer__Buffer_toCString((* (lang_Buffer__Buffer**)s)) : NULL;
    } else if ((T) == (lang_types__Class*) lang_Character__CString_class()){
        res = (* (lang_Character__Char**)s);
    } else if ((T) == (lang_types__Class*) lang_types__Pointer_class()){
        res = (* (lang_Character__Char**)s);
    } else {
        if (T->size == ((lang_types__Class*)lang_types__Pointer_class())->size) {
            res = (* (lang_Character__Char**)s);
        }
        else {
            lang_Exception__Exception_throw((lang_Exception__Exception*) lang_Format__InvalidTypeException_new(T));
        }
    };
    return res;
}

lang_Numbers__SizeT lang_Format__getSizeFromStringType(lang_types__Class* T, uint8_t* s) {
    lang_Numbers__SizeT res;
    if ((T) == (lang_types__Class*) lang_String__String_class()){
        res = (* (lang_String__String**)s)->_buffer->size;
    } else if ((T) == (lang_types__Class*) lang_Buffer__Buffer_class()){
        res = (* (lang_Buffer__Buffer**)s)->size;
    } else if ((T) == (lang_types__Class*) lang_Character__CString_class()){
        res = lang_Character__CString_length((* (lang_Character__CString*)s));
    } else if ((T) == (lang_types__Class*) lang_types__Pointer_class()){
        res = lang_Character__CString_length((* (lang_Character__CString*)s));
    } else {
        lang_Exception__Exception_throw((lang_Exception__Exception*) lang_Format__InvalidTypeException_new(T));
    };
    return res;
}

void lang_Format__parseArg(lang_Buffer__Buffer* res, lang_Format__FSInfoStruct* info, lang_VarArgs__VarArgsIterator* va, lang_Character__Char* p) {
    (*(info)).flags |= lang_Format__TF_UNSIGNED;
    (*(info)).base = 10;
    lang_types__Bool mprintCall = true;
    if (((*(p))) == 'i'){
        (*(info)).flags &= ~lang_Format__TF_UNSIGNED;
    } else if (((*(p))) == 'd'){
        (*(info)).flags &= ~lang_Format__TF_UNSIGNED;
    } else if (((*(p))) == 'u'){
    } else if (((*(p))) == 'o'){
        (*(info)).base = 8;
    } else if (((*(p))) == 'x'){
        (*(info)).flags |= lang_Format__TF_SMALL;
        (*(info)).base = 16;
    } else if (((*(p))) == 'X'){
        (*(info)).base = 16;
    } else if (((*(p))) == 'p'){
        (*(info)).flags |= lang_Format__TF_ALTERNATE | lang_Format__TF_SMALL;
        (*(info)).base = 16;
    } else if (((*(p))) == 'f'){
        mprintCall = false;
        lang_Buffer__Buffer* tmp = lang_Buffer__Buffer_new_empty();
        lang_Buffer__Buffer_append_char(tmp, '%');
        if ((*(info)).flags & lang_Format__TF_ALTERNATE) {
            lang_Buffer__Buffer_append_char(tmp, '#');
        }
        else if ((*(info)).flags & lang_Format__TF_ZEROPAD) {
            lang_Buffer__Buffer_append_char(tmp, '0');
        }
        else if ((*(info)).flags & lang_Format__TF_LEFT) {
            lang_Buffer__Buffer_append_char(tmp, '-');
        }
        else if ((*(info)).flags & lang_Format__TF_SPACE) {
            lang_Buffer__Buffer_append_char(tmp, ' ');
        }
        else if ((*(info)).flags & lang_Format__TF_EXP_SIGN) {
            lang_Buffer__Buffer_append_char(tmp, '+');
        }
        if ((*(info)).fieldwidth != (lang_Numbers__Int) 0) {
            lang_Buffer__Buffer_append_str(tmp, lang_Numbers__Int_toString((*(info)).fieldwidth));
        }
        if ((*(info)).precision >= (lang_Numbers__Int) 0) {
            lang_Buffer__Buffer_append_str(tmp, lang_String____OP_ADD_String_String__String(__strLit51, lang_Numbers__Int_toString((*(info)).precision)));
        }
        lang_Buffer__Buffer_append_str(tmp, __strLit52);
        lang_types__Class* T = lang_VarArgs__VarArgsIterator_getNextType(&((*(va))));
        if (T == (lang_types__Class*) lang_Numbers__Double_class()){
            lang_Numbers__Double __genCall53;
            lang_Buffer__Buffer_append_str(res, lang_String__String_cformat_str((lang_String__String*) lang_Buffer__Buffer_toString(tmp), ((lang_Numbers__Double) ((lang_Format__argNext((uint8_t*) &(__genCall53), va, (lang_types__Class*) (lang_Numbers__Double_class())), __genCall53)))));
        } else {
            lang_Numbers__Float __genCall54;
            lang_Buffer__Buffer_append_str(res, lang_String__String_cformat_str((lang_String__String*) lang_Buffer__Buffer_toString(tmp), ((lang_Numbers__Float) ((lang_Format__argNext((uint8_t*) &(__genCall54), va, (lang_types__Class*) (lang_Numbers__Float_class())), __genCall54)))));
        };
    } else if (((*(p))) == 'c'){
        mprintCall = false;
        lang_Numbers__SSizeT i = 0;
        if (!((*(info)).flags & lang_Format__TF_LEFT)) {
            while (i < (lang_Numbers__SSizeT) (*(info)).fieldwidth) {
                i += 1;
                lang_Buffer__Buffer_append_char(res, ' ');
            }
        }
        lang_Character__Char __genCall55;
        lang_Buffer__Buffer_append_char(res, ((lang_Character__Char) ((lang_Format__argNext((uint8_t*) &(__genCall55), va, (lang_types__Class*) (lang_Character__Char_class())), __genCall55))));
        while (i < (lang_Numbers__SSizeT) (*(info)).fieldwidth) {
            i += 1;
            lang_Buffer__Buffer_append_char(res, ' ');
        }
    } else if (((*(p))) == 's'){
        mprintCall = false;
        lang_types__Class* T = lang_VarArgs__VarArgsIterator_getNextType(&((*(va))));
        uint8_t* s = lang_Memory__gc_malloc(T->size);
        lang_Format__argNext(s, va, T);
        lang_Character__Char* sval = lang_Format__getCharPtrFromStringType((lang_types__Class*)T, (uint8_t*) s);
        if (sval) {
            if ((*(info)).precision == (lang_Numbers__Int) -1) {
                (*(info)).precision = -2;
            }
            while (((*(sval))) && ((*(info)).precision > (lang_Numbers__Int) 0 || (*(info)).precision <= (lang_Numbers__Int) -2)) {
                if ((*(info)).precision > (lang_Numbers__Int) 0) {
                    (*(info)).precision -= 1;
                }
                lang_Buffer__Buffer_append_char(res, (*(sval)));
                sval += 1;
            }
        }
        else {
            lang_Buffer__Buffer_append_str(res, __strLit56);
        }
    } else if (((*(p))) == '%'){
        lang_Buffer__Buffer_append_char(res, '%');
        mprintCall = false;
    } else {
        mprintCall = false;
    };
    if (mprintCall) {
        lang_types__Class* T = lang_VarArgs__VarArgsIterator_getNextType(&((*(va))));
        uint8_t* __genCall57 = lang_Memory__gc_malloc(T->size);
        lang_Format__m_printn((lang_types__Class*)T, res, info, (uint8_t*) (lang_Format__argNext(__genCall57, va, T), __genCall57));
    }
}

void lang_Format__getEntityInfo(lang_Format__FSInfoStruct* info, lang_VarArgs__VarArgsIterator* va, lang_Character__Char* start, lang_types__Pointer end) {
    lang_Character__Char* p = start;
    __lang_Format_closure277_ctx* __ctx278 = lang_Memory__gc_malloc(((lang_types__Class*)__lang_Format_closure277_ctx_class())->size);
    (*(__ctx278)) = (__lang_Format_closure277_ctx) { 
        end, 
        start, 
        &(p)
    };
    lang_types__Closure __closure279 = (lang_types__Closure) { 
        lang_Format____lang_Format_closure277_thunk, 
        __ctx278
    };
    lang_types__Closure checkedInc = __closure279;
    (*info).flags = 0;
    while (((lang_types__Pointer) (p)) < end) {
        ((void (*)(void*)) checkedInc.thunk)(checkedInc.context);
        if (((*(p))) == '#'){
            (*info).flags |= lang_Format__TF_ALTERNATE;
        } else if (((*(p))) == '0'){
            (*info).flags |= lang_Format__TF_ZEROPAD;
        } else if (((*(p))) == '-'){
            (*info).flags |= lang_Format__TF_LEFT;
        } else if (((*(p))) == ' '){
            (*info).flags |= lang_Format__TF_SPACE;
        } else if (((*(p))) == '+'){
            (*info).flags |= lang_Format__TF_EXP_SIGN;
        } else {
            break;
        };
    }
    (*info).fieldwidth = 0;
    while (lang_Character__Char_digit__quest((*(p)))) {
        if ((*info).fieldwidth > (lang_Numbers__Int) 0) {
            (*info).fieldwidth *= 10;
        }
        (*info).fieldwidth += (((lang_Numbers__Int) ((*(p)))) - 48);
        ((void (*)(void*)) checkedInc.thunk)(checkedInc.context);
    }
    (*info).precision = -1;
    if ((*(p)) == '.') {
        ((void (*)(void*)) checkedInc.thunk)(checkedInc.context);
        (*info).precision = 0;
        if ((*(p)) == '*') {
            lang_types__Class* T = lang_VarArgs__VarArgsIterator_getNextType(&((*(va))));
            lang_Format__argNext((uint8_t*) &((*info).precision), va, T);
            ((void (*)(void*)) checkedInc.thunk)(checkedInc.context);
        }
        while (lang_Character__Char_digit__quest((*(p)))) {
            if ((*info).precision > (lang_Numbers__Int) 0) {
                (*info).precision *= 10;
            }
            (*info).precision += (((lang_Numbers__Int) ((*(p)))) - 48);
            ((void (*)(void*)) checkedInc.thunk)(checkedInc.context);
        }
    }
    while ((*(p)) == 'l' || (*(p)) == 'h' || (*(p)) == 'L') {
        ((void (*)(void*)) checkedInc.thunk)(checkedInc.context);
    }
    (*info).bytesProcessed = ((lang_Numbers__SizeT) (p)) - ((lang_Numbers__SizeT) (start));
}

void lang_Format__format_main(uint8_t* __genericReturn58, lang_types__Class* T, uint8_t* fmt, lang_VarArgs__VarArgs args) {
    if (args.count == 0) {
        if (__genericReturn58) {
            lang_Memory__memcpy(__genericReturn58, fmt, T->size);
        }
        return;
    }
    lang_Buffer__Buffer* res = lang_Buffer__Buffer_new(512);
    lang_VarArgs__VarArgsIterator va = lang_VarArgs__VarArgs_iterator(args);
    lang_Character__Char* ptr = lang_Format__getCharPtrFromStringType((lang_types__Class*)T, (uint8_t*) fmt);
    lang_types__Pointer end = ((lang_types__Pointer) ((((lang_Numbers__SizeT) (ptr)) + ((lang_Numbers__SizeT) (lang_Format__getSizeFromStringType((lang_types__Class*)T, (uint8_t*) fmt))))));
    while (((lang_types__Pointer) (ptr)) < end) {
        if (!lang_VarArgs__VarArgsIterator_hasNext__quest(va)) {
            lang_Buffer__Buffer_append_pointer(res, ptr, ((lang_Numbers__SizeT) ((end - ((lang_types__Pointer) (ptr))))));
            break;
        }
        if (((*(ptr))) == '%'){
            
            {
                lang_Format__FSInfoStruct info;
                lang_Format__getEntityInfo(&(info), &(va), ptr, end);
                ptr += info.bytesProcessed;
                lang_Format__parseArg(res, &(info), &(va), ptr);
            }
        } else {
            lang_Buffer__Buffer_append_char(res, (*(ptr)));
        };
        ptr += 1;
    }
    uint8_t* result = lang_Memory__gc_malloc(T->size);
    if ((T) == (lang_types__Class*) lang_String__String_class()){
        lang_String__String* __unreferencable258 = lang_Buffer__Buffer_toString(res);
        lang_Memory__memcpy(result, &(__unreferencable258), ((lang_types__Class*)lang_String__String_class())->size);
    } else if ((T) == (lang_types__Class*) lang_Buffer__Buffer_class()){
        lang_Memory__memcpy(result, &(res), ((lang_types__Class*)lang_Buffer__Buffer_class())->size);
    } else {
        lang_Character__CString __unreferencable259 = lang_Buffer__Buffer_toCString(res);
        lang_Memory__memcpy(result, &(__unreferencable259), ((lang_types__Class*)lang_Character__CString_class())->size);
    };
    if (__genericReturn58) {
        lang_Memory__memcpy(__genericReturn58, result, T->size);
    }
    return;
}

void lang_Format____lang_Format_closure277(lang_types__Pointer end, lang_Character__Char* start, lang_Character__Char** p) {
    if ((*p) < (lang_Character__Char*) end) {
        (*p) += 1;
    }
    else {
        lang_Exception__Exception_throw((lang_Exception__Exception*) lang_Format__InvalidFormatException_new(start));
    }
}

void lang_Format____lang_Format_closure277_thunk(__lang_Format_closure277_ctx* __context__) {
    lang_Format____lang_Format_closure277((*__context__).end, (*__context__).start, (*__context__).p);
}
