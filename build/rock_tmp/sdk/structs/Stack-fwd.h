/* structs/Stack header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___structs_Stack_fwd___
#define ___structs_Stack_fwd___

struct _structs_Stack__Stack;
typedef struct _structs_Stack__Stack structs_Stack__Stack;
struct _structs_Stack__StackClass;
typedef struct _structs_Stack__StackClass structs_Stack__StackClass;

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
#include <sdk/lang/Format-fwd.h>
#include <sdk/lang/IO-fwd.h>
#include <sdk/structs/ArrayList-fwd.h>
structs_Stack__StackClass *structs_Stack__Stack_class();
structs_Stack__Stack* structs_Stack__Stack_new(lang_types__Class* T);
void structs_Stack__Stack_init(structs_Stack__Stack* this);
void structs_Stack__Stack_push(structs_Stack__Stack* this, uint8_t* element);
void structs_Stack__Stack_push_impl(structs_Stack__Stack* this, uint8_t* element);
void structs_Stack__Stack_pop(structs_Stack__Stack* this, uint8_t* __genericReturn95);
void structs_Stack__Stack_pop_impl(structs_Stack__Stack* this, uint8_t* __genericReturn95);
void structs_Stack__Stack_peek(structs_Stack__Stack* this, uint8_t* __genericReturn97);
void structs_Stack__Stack_peek_impl(structs_Stack__Stack* this, uint8_t* __genericReturn97);
void structs_Stack__Stack_peek_index(structs_Stack__Stack* this, uint8_t* __genericReturn99, lang_Numbers__SSizeT index);
void structs_Stack__Stack_peek_index_impl(structs_Stack__Stack* this, uint8_t* __genericReturn99, lang_Numbers__SSizeT index);
lang_Numbers__SSizeT structs_Stack__Stack_indexOf(structs_Stack__Stack* this, uint8_t* element);
lang_Numbers__SSizeT structs_Stack__Stack_indexOf_impl(structs_Stack__Stack* this, uint8_t* element);
lang_Numbers__SSizeT structs_Stack__Stack_getSize(structs_Stack__Stack* this);
lang_Numbers__SSizeT structs_Stack__Stack_getSize_impl(structs_Stack__Stack* this);
lang_types__Bool structs_Stack__Stack_empty__quest(structs_Stack__Stack* this);
lang_types__Bool structs_Stack__Stack_empty__quest_impl(structs_Stack__Stack* this);
lang_Numbers__Int structs_Stack__Stack_lastIndex(structs_Stack__Stack* this);
lang_Numbers__Int structs_Stack__Stack_lastIndex_impl(structs_Stack__Stack* this);
void structs_Stack__Stack_clear(structs_Stack__Stack* this);
void structs_Stack__Stack_clear_impl(structs_Stack__Stack* this);
lang_Iterators__BackIterator* structs_Stack__Stack_iterator(structs_Stack__Stack* this);
lang_Iterators__BackIterator* structs_Stack__Stack_iterator_impl(structs_Stack__Stack* this);
lang_Iterators__BackIterator* structs_Stack__Stack_backIterator(structs_Stack__Stack* this);
lang_Iterators__BackIterator* structs_Stack__Stack_backIterator_impl(structs_Stack__Stack* this);
lang_Numbers__SSizeT structs_Stack__Stack___getsize__(structs_Stack__Stack* this);
lang_Numbers__SSizeT structs_Stack__Stack___getsize___impl(structs_Stack__Stack* this);
void structs_Stack__Stack___defaults__(structs_Stack__Stack* this);
void structs_Stack__Stack___defaults___impl(structs_Stack__Stack* this);
void structs_Stack__Stack___load__();
void structs_Stack_load();

#endif // ___structs_Stack_fwd___
