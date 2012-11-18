/* lang/Format header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Format_fwd___
#define ___lang_Format_fwd___

struct _lang_Format__InvalidFormatException;
typedef struct _lang_Format__InvalidFormatException lang_Format__InvalidFormatException;
struct _lang_Format__InvalidTypeException;
typedef struct _lang_Format__InvalidTypeException lang_Format__InvalidTypeException;
typedef struct _lang_Format__FSInfoStruct lang_Format__FSInfoStruct;
typedef struct ___lang_Format_closure277_ctx __lang_Format_closure277_ctx;
struct _lang_Format__InvalidFormatExceptionClass;
typedef struct _lang_Format__InvalidFormatExceptionClass lang_Format__InvalidFormatExceptionClass;
struct _lang_Format__InvalidTypeExceptionClass;
typedef struct _lang_Format__InvalidTypeExceptionClass lang_Format__InvalidTypeExceptionClass;
struct _lang_Format__FSInfoStructClass;
typedef struct _lang_Format__FSInfoStructClass lang_Format__FSInfoStructClass;
struct ___lang_Format_closure277_ctxClass;
typedef struct ___lang_Format_closure277_ctxClass __lang_Format_closure277_ctxClass;

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
#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/Abstractions-fwd.h>
#include <sdk/lang/IO-fwd.h>

#ifndef __FUNC___void__DEFINE
#define __FUNC___void__DEFINE

typedef void (*__FUNC___void)();

#endif

lang_Format__InvalidFormatExceptionClass *lang_Format__InvalidFormatException_class();
lang_Format__InvalidFormatException* lang_Format__InvalidFormatException_new(lang_Character__CString msg);
void lang_Format__InvalidFormatException_init(lang_Format__InvalidFormatException* this, lang_Character__CString msg);
void lang_Format__InvalidFormatException___defaults__(lang_Format__InvalidFormatException* this);
void lang_Format__InvalidFormatException___defaults___impl(lang_Format__InvalidFormatException* this);
void lang_Format__InvalidFormatException___load__();
lang_Format__InvalidTypeExceptionClass *lang_Format__InvalidTypeException_class();
lang_Format__InvalidTypeException* lang_Format__InvalidTypeException_new(lang_types__Class* T);
void lang_Format__InvalidTypeException_init(lang_Format__InvalidTypeException* this, lang_types__Class* T);
void lang_Format__InvalidTypeException___defaults__(lang_Format__InvalidTypeException* this);
void lang_Format__InvalidTypeException___defaults___impl(lang_Format__InvalidTypeException* this);
void lang_Format__InvalidTypeException___load__();
lang_Format__FSInfoStructClass *lang_Format__FSInfoStruct_class();
void lang_Format__FSInfoStruct___load__();
__lang_Format_closure277_ctxClass *__lang_Format_closure277_ctx_class();
void __lang_Format_closure277_ctx___load__();
extern lang_Numbers__SSizeT lang_Format__TF_ALTERNATE;
extern lang_Numbers__SSizeT lang_Format__TF_ZEROPAD;
extern lang_Numbers__SSizeT lang_Format__TF_LEFT;
extern lang_Numbers__SSizeT lang_Format__TF_SPACE;
extern lang_Numbers__SSizeT lang_Format__TF_EXP_SIGN;
extern lang_Numbers__SSizeT lang_Format__TF_SMALL;
extern lang_Numbers__SSizeT lang_Format__TF_PLUS;
extern lang_Numbers__SSizeT lang_Format__TF_UNSIGNED;
extern lang_String__String* lang_Format____digits;
extern lang_String__String* lang_Format____digits_small;
void lang_Format_load();
void lang_Buffer__Buffer_format(lang_Buffer__Buffer* this, lang_VarArgs__VarArgs args);
lang_String__String* lang_String__String_format(lang_String__String* this, lang_VarArgs__VarArgs args);
void lang_String__String_printf(lang_String__String* this, lang_VarArgs__VarArgs args);
void lang_String__String_printfln(lang_String__String* this, lang_VarArgs__VarArgs args);
void lang_Format__argNext(uint8_t* __genericReturn50, lang_VarArgs__VarArgsIterator* va, lang_types__Class* T);
void lang_Format__m_printn(lang_types__Class* T, lang_Buffer__Buffer* res, lang_Format__FSInfoStruct* info, uint8_t* arg);
lang_Character__Char* lang_Format__getCharPtrFromStringType(lang_types__Class* T, uint8_t* s);
lang_Numbers__SizeT lang_Format__getSizeFromStringType(lang_types__Class* T, uint8_t* s);
void lang_Format__parseArg(lang_Buffer__Buffer* res, lang_Format__FSInfoStruct* info, lang_VarArgs__VarArgsIterator* va, lang_Character__Char* p);
void lang_Format__getEntityInfo(lang_Format__FSInfoStruct* info, lang_VarArgs__VarArgsIterator* va, lang_Character__Char* start, lang_types__Pointer end);
void lang_Format__format_main(uint8_t* __genericReturn58, lang_types__Class* T, uint8_t* fmt, lang_VarArgs__VarArgs args);
void lang_Format____lang_Format_closure277(lang_types__Pointer end, lang_Character__Char* start, lang_Character__Char** p);
void lang_Format____lang_Format_closure277_thunk(__lang_Format_closure277_ctx* __context__);

#endif // ___lang_Format_fwd___
