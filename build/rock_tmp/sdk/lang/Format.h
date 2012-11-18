/* lang/Format header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Format___
#define ___lang_Format___

#include <sdk/lang/Format-fwd.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/types.h>

struct _lang_Format__InvalidFormatException {
    struct _lang_Exception__Exception __super__;
};


struct _lang_Format__InvalidTypeException {
    struct _lang_Exception__Exception __super__;
};


struct _lang_Format__FSInfoStruct {
    lang_Numbers__Int precision;
    lang_Numbers__Int fieldwidth;
    lang_Numbers__SizeT flags;
    lang_Numbers__Int base;
    lang_Numbers__SizeT bytesProcessed;
};

struct ___lang_Format_closure277_ctx {
    lang_types__Pointer end;
    lang_Character__Char* start;
    lang_Character__Char** p;
};

struct _lang_Format__InvalidFormatExceptionClass {
    struct _lang_Exception__ExceptionClass __super__;
};


struct _lang_Format__InvalidTypeExceptionClass {
    struct _lang_Exception__ExceptionClass __super__;
};


struct _lang_Format__FSInfoStructClass {
    struct _lang_types__ClassClass __super__;
};


struct ___lang_Format_closure277_ctxClass {
    struct _lang_types__ClassClass __super__;
};


#ifdef OOC_FROM_C
#define argNext(__genericReturn50, T, va, T) lang_Format__argNext((__genericReturn50), (T), (va), (void*) (T))
#define m_printn(res, info, arg) lang_Format__m_printn((void*) (res), (info), (arg))
#define getCharPtrFromStringType(s) lang_Format__getCharPtrFromStringType((s))
#define getSizeFromStringType(s) lang_Format__getSizeFromStringType((s))
#define parseArg(res, info, va, p) lang_Format__parseArg((void*) (res), (info), (va), (p))
#define getEntityInfo(info, va, start, end) lang_Format__getEntityInfo((info), (va), (start), (void*) (end))
#define format_main(__genericReturn58, fmt, ...) lang_Format__format_main((__genericReturn58), (fmt), __VA_ARGS__)
#define __lang_Format_closure277(end, start, p) lang_Format____lang_Format_closure277((void*) (end), (start), (p))
#define __lang_Format_closure277_thunk(__context__) lang_Format____lang_Format_closure277_thunk((__context__))
#define InvalidFormatException lang_Format__InvalidFormatException
#define InvalidFormatException_class() lang_Format__InvalidFormatException_class()
#define InvalidFormatExceptionClass lang_Format__InvalidFormatExceptionClass
#define InvalidFormatExceptionClass_class() lang_Format__InvalidFormatExceptionClass_class()
#define InvalidFormatException_new(msg) (void*) lang_Format__InvalidFormatException_new((msg))
#define InvalidFormatException_init(_this_, msg) lang_Format__InvalidFormatException_init((void*) (_this_), (msg))
#define InvalidFormatException___defaults__(_this_) lang_Format__InvalidFormatException___defaults__((void*) (_this_))
#define InvalidFormatException___load__() lang_Format__InvalidFormatException___load__()
#define InvalidTypeException lang_Format__InvalidTypeException
#define InvalidTypeException_class() lang_Format__InvalidTypeException_class()
#define InvalidTypeExceptionClass lang_Format__InvalidTypeExceptionClass
#define InvalidTypeExceptionClass_class() lang_Format__InvalidTypeExceptionClass_class()
#define InvalidTypeException_new(T) (void*) lang_Format__InvalidTypeException_new((void*) (T))
#define InvalidTypeException_init(_this_, T) lang_Format__InvalidTypeException_init((void*) (_this_), (void*) (T))
#define InvalidTypeException___defaults__(_this_) lang_Format__InvalidTypeException___defaults__((void*) (_this_))
#define InvalidTypeException___load__() lang_Format__InvalidTypeException___load__()
#define FSInfoStruct lang_Format__FSInfoStruct
#define FSInfoStruct_class() lang_Format__FSInfoStruct_class()
#define FSInfoStructClass lang_Format__FSInfoStructClass
#define FSInfoStructClass_class() lang_Format__FSInfoStructClass_class()
#define FSInfoStruct___load__() lang_Format__FSInfoStruct___load__()
#endif

#endif // ___lang_Format___
