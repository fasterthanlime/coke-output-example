/* lang/VarArgs header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_VarArgs___
#define ___lang_VarArgs___

#include <sdk/lang/VarArgs-fwd.h>
#include <sdk/lang/types.h>

struct _lang_VarArgs__VarArgs {
    lang_Numbers__UInt8* args;
    lang_Numbers__UInt8* argsPtr;
    lang_Numbers__SSizeT count;
};

struct _lang_VarArgs__VarArgsIterator {
    lang_Numbers__UInt8* argsPtr;
    lang_Numbers__SSizeT countdown;
    lang_types__Bool first;
};

struct _lang_VarArgs__VarArgsClass {
    struct _lang_types__ClassClass __super__;
    void (*each)(lang_VarArgs__VarArgs, lang_types__Closure);
    lang_VarArgs__VarArgs (*new)(lang_Numbers__SSizeT, lang_Numbers__SizeT);
    void (*init)(lang_VarArgs__VarArgs*, lang_Numbers__SSizeT, lang_Numbers__SizeT);
    void (*_addValue)(lang_VarArgs__VarArgs*, lang_types__Class*, uint8_t*);
    lang_VarArgs__VarArgsIterator (*iterator)(lang_VarArgs__VarArgs);
};


struct _lang_VarArgs__VarArgsIteratorClass {
    struct _lang_types__ClassClass __super__;
    lang_types__Bool (*hasNext__quest)(lang_VarArgs__VarArgsIterator);
    void (*next)(lang_VarArgs__VarArgsIterator*, uint8_t*, lang_types__Class*);
    lang_types__Class* (*getNextType)(lang_VarArgs__VarArgsIterator*);
};


#ifdef OOC_FROM_C
#define __va_call(T, f, T, arg) lang_VarArgs____va_call((T), (f), (void*) (T), (arg))
#define __sizeof() lang_VarArgs____sizeof((void*) ())
#define __pointer_align(s) lang_VarArgs____pointer_align((s))
#define VarArgs lang_VarArgs__VarArgs
#define VarArgs_class() lang_VarArgs__VarArgs_class()
#define VarArgsClass lang_VarArgs__VarArgsClass
#define VarArgsClass_class() lang_VarArgs__VarArgsClass_class()
#define VarArgs_each(_this_, f) lang_VarArgs__VarArgs_each((void*) (_this_), (f))
#define VarArgs_new(count, bytes) lang_VarArgs__VarArgs_new((count), (bytes))
#define VarArgs_init(_this_, count, bytes) lang_VarArgs__VarArgs_init((void*) (_this_), (count), (bytes))
#define VarArgs__addValue(_this_, value) lang_VarArgs__VarArgs__addValue((void*) (_this_), (value))
#define VarArgs_iterator(_this_) lang_VarArgs__VarArgs_iterator((void*) (_this_))
#define VarArgs___load__() lang_VarArgs__VarArgs___load__()
#define VarArgsIterator lang_VarArgs__VarArgsIterator
#define VarArgsIterator_class() lang_VarArgs__VarArgsIterator_class()
#define VarArgsIteratorClass lang_VarArgs__VarArgsIteratorClass
#define VarArgsIteratorClass_class() lang_VarArgs__VarArgsIteratorClass_class()
#define VarArgsIterator_hasNext__quest(_this_) lang_VarArgs__VarArgsIterator_hasNext__quest((void*) (_this_))
#define VarArgsIterator_next(_this_, __genericReturn13, T, T) lang_VarArgs__VarArgsIterator_next((void*) (_this_), (__genericReturn13), (T), (void*) (T))
#define VarArgsIterator_getNextType(_this_) (void*) lang_VarArgs__VarArgsIterator_getNextType((void*) (_this_))
#define VarArgsIterator___load__() lang_VarArgs__VarArgsIterator___load__()
#endif

#endif // ___lang_VarArgs___
