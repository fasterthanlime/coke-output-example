/* lang/BufferIterator header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_BufferIterator_fwd___
#define ___lang_BufferIterator_fwd___

struct _lang_BufferIterator__BufferIterator;
typedef struct _lang_BufferIterator__BufferIterator lang_BufferIterator__BufferIterator;
struct _lang_BufferIterator__BufferIteratorClass;
typedef struct _lang_BufferIterator__BufferIteratorClass lang_BufferIterator__BufferIteratorClass;

#include <sdk/lang/Exception-fwd.h>
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
#include <sdk/lang/Format-fwd.h>
#include <sdk/lang/IO-fwd.h>
lang_BufferIterator__BufferIteratorClass *lang_BufferIterator__BufferIterator_class();
lang_BufferIterator__BufferIterator* lang_BufferIterator__BufferIterator_new_withStr(lang_types__Class* T, lang_Buffer__Buffer* str);
void lang_BufferIterator__BufferIterator_init_withStr(lang_BufferIterator__BufferIterator* this, lang_Buffer__Buffer* str);
lang_types__Bool lang_BufferIterator__BufferIterator_hasNext__quest(lang_BufferIterator__BufferIterator* this);
lang_types__Bool lang_BufferIterator__BufferIterator_hasNext__quest_impl(lang_BufferIterator__BufferIterator* this);
void lang_BufferIterator__BufferIterator_next(lang_BufferIterator__BufferIterator* this, uint8_t* __genericReturn11);
void lang_BufferIterator__BufferIterator_next_impl(lang_BufferIterator__BufferIterator* this, uint8_t* __genericReturn11);
lang_types__Bool lang_BufferIterator__BufferIterator_hasPrev__quest(lang_BufferIterator__BufferIterator* this);
lang_types__Bool lang_BufferIterator__BufferIterator_hasPrev__quest_impl(lang_BufferIterator__BufferIterator* this);
void lang_BufferIterator__BufferIterator_prev(lang_BufferIterator__BufferIterator* this, uint8_t* __genericReturn12);
void lang_BufferIterator__BufferIterator_prev_impl(lang_BufferIterator__BufferIterator* this, uint8_t* __genericReturn12);
lang_types__Bool lang_BufferIterator__BufferIterator_remove(lang_BufferIterator__BufferIterator* this);
lang_types__Bool lang_BufferIterator__BufferIterator_remove_impl(lang_BufferIterator__BufferIterator* this);
void lang_BufferIterator__BufferIterator___defaults__(lang_BufferIterator__BufferIterator* this);
void lang_BufferIterator__BufferIterator___defaults___impl(lang_BufferIterator__BufferIterator* this);
void lang_BufferIterator__BufferIterator___load__();
void lang_BufferIterator_load();

#endif // ___lang_BufferIterator_fwd___
