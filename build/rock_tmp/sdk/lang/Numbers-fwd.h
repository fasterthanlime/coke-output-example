/* lang/Numbers header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Numbers_fwd___
#define ___lang_Numbers_fwd___

#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <float.h>
#include <ctype.h>
#include <sys/types.h>

typedef signed long long lang_Numbers__LLong;
typedef signed long lang_Numbers__Long;
typedef signed int lang_Numbers__Int;
typedef signed short lang_Numbers__Short;
typedef unsigned long long lang_Numbers__ULLong;
typedef unsigned long lang_Numbers__ULong;
typedef unsigned int lang_Numbers__UInt;
typedef unsigned short lang_Numbers__UShort;
typedef int8_t lang_Numbers__Int8;
typedef int16_t lang_Numbers__Int16;
typedef int32_t lang_Numbers__Int32;
typedef int64_t lang_Numbers__Int64;
typedef uint8_t lang_Numbers__UInt8;
typedef uint16_t lang_Numbers__UInt16;
typedef uint32_t lang_Numbers__UInt32;
typedef uint64_t lang_Numbers__UInt64;
typedef uint8_t lang_Numbers__Octet;
typedef size_t lang_Numbers__SizeT;
typedef ssize_t lang_Numbers__SSizeT;
typedef ptrdiff_t lang_Numbers__PtrDiff;
typedef long double lang_Numbers__LDouble;
typedef double lang_Numbers__Double;
typedef float lang_Numbers__Float;
typedef struct _lang_Numbers__Range lang_Numbers__Range;
struct _lang_Numbers__LLongClass;
typedef struct _lang_Numbers__LLongClass lang_Numbers__LLongClass;
struct _lang_Numbers__LongClass;
typedef struct _lang_Numbers__LongClass lang_Numbers__LongClass;
struct _lang_Numbers__IntClass;
typedef struct _lang_Numbers__IntClass lang_Numbers__IntClass;
struct _lang_Numbers__ShortClass;
typedef struct _lang_Numbers__ShortClass lang_Numbers__ShortClass;
struct _lang_Numbers__ULLongClass;
typedef struct _lang_Numbers__ULLongClass lang_Numbers__ULLongClass;
struct _lang_Numbers__ULongClass;
typedef struct _lang_Numbers__ULongClass lang_Numbers__ULongClass;
struct _lang_Numbers__UIntClass;
typedef struct _lang_Numbers__UIntClass lang_Numbers__UIntClass;
struct _lang_Numbers__UShortClass;
typedef struct _lang_Numbers__UShortClass lang_Numbers__UShortClass;
struct _lang_Numbers__Int8Class;
typedef struct _lang_Numbers__Int8Class lang_Numbers__Int8Class;
struct _lang_Numbers__Int16Class;
typedef struct _lang_Numbers__Int16Class lang_Numbers__Int16Class;
struct _lang_Numbers__Int32Class;
typedef struct _lang_Numbers__Int32Class lang_Numbers__Int32Class;
struct _lang_Numbers__Int64Class;
typedef struct _lang_Numbers__Int64Class lang_Numbers__Int64Class;
struct _lang_Numbers__UInt8Class;
typedef struct _lang_Numbers__UInt8Class lang_Numbers__UInt8Class;
struct _lang_Numbers__UInt16Class;
typedef struct _lang_Numbers__UInt16Class lang_Numbers__UInt16Class;
struct _lang_Numbers__UInt32Class;
typedef struct _lang_Numbers__UInt32Class lang_Numbers__UInt32Class;
struct _lang_Numbers__UInt64Class;
typedef struct _lang_Numbers__UInt64Class lang_Numbers__UInt64Class;
struct _lang_Numbers__OctetClass;
typedef struct _lang_Numbers__OctetClass lang_Numbers__OctetClass;
struct _lang_Numbers__SizeTClass;
typedef struct _lang_Numbers__SizeTClass lang_Numbers__SizeTClass;
struct _lang_Numbers__SSizeTClass;
typedef struct _lang_Numbers__SSizeTClass lang_Numbers__SSizeTClass;
struct _lang_Numbers__PtrDiffClass;
typedef struct _lang_Numbers__PtrDiffClass lang_Numbers__PtrDiffClass;
struct _lang_Numbers__LDoubleClass;
typedef struct _lang_Numbers__LDoubleClass lang_Numbers__LDoubleClass;
struct _lang_Numbers__DoubleClass;
typedef struct _lang_Numbers__DoubleClass lang_Numbers__DoubleClass;
struct _lang_Numbers__FloatClass;
typedef struct _lang_Numbers__FloatClass lang_Numbers__FloatClass;
struct _lang_Numbers__RangeClass;
typedef struct _lang_Numbers__RangeClass lang_Numbers__RangeClass;

#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/BufferIterator-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Character-fwd.h>
#include <sdk/lang/VarArgs-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Buffer-fwd.h>
#include <sdk/lang/Abstractions-fwd.h>
#include <sdk/lang/Format-fwd.h>
#include <sdk/lang/IO-fwd.h>

#ifndef __FUNC____DEFINE
#define __FUNC____DEFINE

typedef void (*__FUNC__)(void*);

#endif


#ifndef __FUNC___LLong__DEFINE
#define __FUNC___LLong__DEFINE

typedef void (*__FUNC___LLong)(lang_Numbers__LLong, void*);

#endif


#ifndef __FUNC___Int_Int_Int__DEFINE
#define __FUNC___Int_Int_Int__DEFINE

typedef lang_Numbers__Int (*__FUNC___Int_Int_Int)(lang_Numbers__Int, lang_Numbers__Int, void*);

#endif

lang_Numbers__LLongClass *lang_Numbers__LLong_class();
lang_String__String* lang_Numbers__LLong_toString(lang_Numbers__LLong this);
lang_String__String* lang_Numbers__LLong_toHexString(lang_Numbers__LLong this);
lang_types__Bool lang_Numbers__LLong_odd__quest(lang_Numbers__LLong this);
lang_types__Bool lang_Numbers__LLong_even__quest(lang_Numbers__LLong this);
lang_types__Bool lang_Numbers__LLong_divisor__quest(lang_Numbers__LLong this, lang_Numbers__Int divisor);
lang_types__Bool lang_Numbers__LLong_in__quest(lang_Numbers__LLong this, lang_Numbers__Range range);
void lang_Numbers__LLong_times(lang_Numbers__LLong this, lang_types__Closure fn);
void lang_Numbers__LLong_times_withIndex(lang_Numbers__LLong this, lang_types__Closure fn);
lang_Numbers__LLong lang_Numbers__LLong_abs(lang_Numbers__LLong this);
void lang_Numbers__LLong___load__();
lang_Numbers__LongClass *lang_Numbers__Long_class();
void lang_Numbers__Long___load__();
lang_Numbers__IntClass *lang_Numbers__Int_class();
lang_String__String* lang_Numbers__Int_toString(lang_Numbers__Int this);
void lang_Numbers__Int___load__();
lang_Numbers__ShortClass *lang_Numbers__Short_class();
void lang_Numbers__Short___load__();
lang_Numbers__ULLongClass *lang_Numbers__ULLong_class();
lang_String__String* lang_Numbers__ULLong_toString(lang_Numbers__ULLong this);
lang_types__Bool lang_Numbers__ULLong_in__quest(lang_Numbers__ULLong this, lang_Numbers__Range range);
void lang_Numbers__ULLong___load__();
lang_Numbers__ULongClass *lang_Numbers__ULong_class();
void lang_Numbers__ULong___load__();
lang_Numbers__UIntClass *lang_Numbers__UInt_class();
lang_String__String* lang_Numbers__UInt_toString(lang_Numbers__UInt this);
void lang_Numbers__UInt___load__();
lang_Numbers__UShortClass *lang_Numbers__UShort_class();
void lang_Numbers__UShort___load__();
lang_Numbers__Int8Class *lang_Numbers__Int8_class();
void lang_Numbers__Int8___load__();
lang_Numbers__Int16Class *lang_Numbers__Int16_class();
void lang_Numbers__Int16___load__();
lang_Numbers__Int32Class *lang_Numbers__Int32_class();
void lang_Numbers__Int32___load__();
lang_Numbers__Int64Class *lang_Numbers__Int64_class();
void lang_Numbers__Int64___load__();
lang_Numbers__UInt8Class *lang_Numbers__UInt8_class();
void lang_Numbers__UInt8___load__();
lang_Numbers__UInt16Class *lang_Numbers__UInt16_class();
void lang_Numbers__UInt16___load__();
lang_Numbers__UInt32Class *lang_Numbers__UInt32_class();
void lang_Numbers__UInt32___load__();
lang_Numbers__UInt64Class *lang_Numbers__UInt64_class();
void lang_Numbers__UInt64___load__();
lang_Numbers__OctetClass *lang_Numbers__Octet_class();
void lang_Numbers__Octet___load__();
lang_Numbers__SizeTClass *lang_Numbers__SizeT_class();
void lang_Numbers__SizeT___load__();
lang_Numbers__SSizeTClass *lang_Numbers__SSizeT_class();
lang_String__String* lang_Numbers__SSizeT_toString(lang_Numbers__SSizeT this);
void lang_Numbers__SSizeT___load__();
lang_Numbers__PtrDiffClass *lang_Numbers__PtrDiff_class();
void lang_Numbers__PtrDiff___load__();
lang_Numbers__LDoubleClass *lang_Numbers__LDouble_class();
lang_String__String* lang_Numbers__LDouble_toString(lang_Numbers__LDouble this);
lang_Numbers__LDouble lang_Numbers__LDouble_abs(lang_Numbers__LDouble this);
void lang_Numbers__LDouble___load__();
lang_Numbers__DoubleClass *lang_Numbers__Double_class();
lang_String__String* lang_Numbers__Double_toString(lang_Numbers__Double this);
void lang_Numbers__Double___load__();
lang_Numbers__FloatClass *lang_Numbers__Float_class();
lang_String__String* lang_Numbers__Float_toString(lang_Numbers__Float this);
void lang_Numbers__Float___load__();
lang_Numbers__RangeClass *lang_Numbers__Range_class();
lang_Numbers__Range lang_Numbers__Range_new(lang_Numbers__Int min, lang_Numbers__Int max);
lang_Numbers__Int lang_Numbers__Range_reduce(lang_Numbers__Range this, lang_types__Closure f);
void lang_Numbers__Range___load__();
extern lang_Numbers__SSizeT lang_Numbers__INT_MAX;
extern lang_Numbers__SSizeT lang_Numbers__INT_MIN;
void lang_Numbers_load();

#endif // ___lang_Numbers_fwd___
