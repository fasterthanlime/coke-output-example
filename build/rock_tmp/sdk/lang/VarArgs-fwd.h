/* lang/VarArgs header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_VarArgs_fwd___
#define ___lang_VarArgs_fwd___

typedef struct _lang_VarArgs__VarArgs lang_VarArgs__VarArgs;
typedef struct _lang_VarArgs__VarArgsIterator lang_VarArgs__VarArgsIterator;
struct _lang_VarArgs__VarArgsClass;
typedef struct _lang_VarArgs__VarArgsClass lang_VarArgs__VarArgsClass;
struct _lang_VarArgs__VarArgsIteratorClass;
typedef struct _lang_VarArgs__VarArgsIteratorClass lang_VarArgs__VarArgsIteratorClass;

#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/BufferIterator-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Character-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Buffer-fwd.h>
#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/Abstractions-fwd.h>
#include <sdk/lang/Format-fwd.h>
#include <sdk/lang/IO-fwd.h>

#ifndef __FUNC___T_T__DEFINE
#define __FUNC___T_T__DEFINE

typedef void (*__FUNC___T_T)(lang_types__Class*, uint8_t*, void*);

#endif

lang_VarArgs__VarArgsClass *lang_VarArgs__VarArgs_class();
void lang_VarArgs__VarArgs_each(lang_VarArgs__VarArgs this, lang_types__Closure f);
lang_VarArgs__VarArgs lang_VarArgs__VarArgs_new(lang_Numbers__SSizeT count, lang_Numbers__SizeT bytes);
void lang_VarArgs__VarArgs_init(lang_VarArgs__VarArgs* this, lang_Numbers__SSizeT count, lang_Numbers__SizeT bytes);
void lang_VarArgs__VarArgs__addValue(lang_VarArgs__VarArgs* this, lang_types__Class* T, uint8_t* value);
lang_VarArgs__VarArgsIterator lang_VarArgs__VarArgs_iterator(lang_VarArgs__VarArgs this);
void lang_VarArgs__VarArgs___load__();
lang_VarArgs__VarArgsIteratorClass *lang_VarArgs__VarArgsIterator_class();
lang_types__Bool lang_VarArgs__VarArgsIterator_hasNext__quest(lang_VarArgs__VarArgsIterator this);
void lang_VarArgs__VarArgsIterator_next(lang_VarArgs__VarArgsIterator* this, uint8_t* __genericReturn13, lang_types__Class* T);
lang_types__Class* lang_VarArgs__VarArgsIterator_getNextType(lang_VarArgs__VarArgsIterator* this);
void lang_VarArgs__VarArgsIterator___load__();
void lang_VarArgs_load();
void lang_VarArgs____va_call(lang_types__Closure f, lang_types__Class* T, uint8_t* arg);
#define lang_VarArgs____sizeof sizeof

lang_Numbers__SizeT lang_VarArgs____pointer_align(lang_Numbers__SizeT s);

#endif // ___lang_VarArgs_fwd___
