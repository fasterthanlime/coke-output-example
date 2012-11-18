/* structs/ArrayList header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___structs_ArrayList_fwd___
#define ___structs_ArrayList_fwd___

struct _structs_ArrayList__ArrayList;
typedef struct _structs_ArrayList__ArrayList structs_ArrayList__ArrayList;
struct _structs_ArrayList__ArrayListIterator;
typedef struct _structs_ArrayList__ArrayListIterator structs_ArrayList__ArrayListIterator;
struct _structs_ArrayList__ArrayListClass;
typedef struct _structs_ArrayList__ArrayListClass structs_ArrayList__ArrayListClass;
struct _structs_ArrayList__ArrayListIteratorClass;
typedef struct _structs_ArrayList__ArrayListIteratorClass structs_ArrayList__ArrayListIteratorClass;

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
#include <sdk/structs/List-fwd.h>

#ifndef __FUNC___T_T_Bool__DEFINE
#define __FUNC___T_T_Bool__DEFINE

typedef lang_types__Bool (*__FUNC___T_T_Bool)(uint8_t*, uint8_t*, void*);

#endif

structs_ArrayList__ArrayListClass *structs_ArrayList__ArrayList_class();
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_new(lang_types__Class* T);
void structs_ArrayList__ArrayList_init(structs_ArrayList__ArrayList* this);
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_new_withCapacity(lang_types__Class* T, lang_Numbers__SizeT capacity);
void structs_ArrayList__ArrayList_init_withCapacity(structs_ArrayList__ArrayList* this, lang_Numbers__SizeT capacity);
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_new_withData(lang_types__Class* T, uint8_t* data, lang_Numbers__SizeT _size);
void structs_ArrayList__ArrayList_init_withData(structs_ArrayList__ArrayList* this, uint8_t* data, lang_Numbers__SizeT _size);
void structs_ArrayList__ArrayList_add(structs_ArrayList__ArrayList* this, uint8_t* element);
void structs_ArrayList__ArrayList_add_impl(structs_ArrayList__ArrayList* this, uint8_t* element);
void structs_ArrayList__ArrayList_add_withIndex(structs_ArrayList__ArrayList* this, lang_Numbers__SSizeT index, uint8_t* element);
void structs_ArrayList__ArrayList_add_withIndex_impl(structs_ArrayList__ArrayList* this, lang_Numbers__SSizeT index, uint8_t* element);
void structs_ArrayList__ArrayList_clear(structs_ArrayList__ArrayList* this);
void structs_ArrayList__ArrayList_clear_impl(structs_ArrayList__ArrayList* this);
void structs_ArrayList__ArrayList_get(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn61, lang_Numbers__SSizeT index);
void structs_ArrayList__ArrayList_get_impl(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn61, lang_Numbers__SSizeT index);
lang_Numbers__SSizeT structs_ArrayList__ArrayList_indexOf(structs_ArrayList__ArrayList* this, uint8_t* element);
lang_Numbers__SSizeT structs_ArrayList__ArrayList_indexOf_impl(structs_ArrayList__ArrayList* this, uint8_t* element);
lang_Numbers__SSizeT structs_ArrayList__ArrayList_lastIndexOf(structs_ArrayList__ArrayList* this, uint8_t* element);
lang_Numbers__SSizeT structs_ArrayList__ArrayList_lastIndexOf_impl(structs_ArrayList__ArrayList* this, uint8_t* element);
void structs_ArrayList__ArrayList_removeAt(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn62, lang_Numbers__SSizeT index);
void structs_ArrayList__ArrayList_removeAt_impl(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn62, lang_Numbers__SSizeT index);
void structs_ArrayList__ArrayList_sort(structs_ArrayList__ArrayList* this, lang_types__Closure greaterThan);
void structs_ArrayList__ArrayList_sort_impl(structs_ArrayList__ArrayList* this, lang_types__Closure greaterThan);
lang_types__Bool structs_ArrayList__ArrayList_remove(structs_ArrayList__ArrayList* this, uint8_t* element);
lang_types__Bool structs_ArrayList__ArrayList_remove_impl(structs_ArrayList__ArrayList* this, uint8_t* element);
void structs_ArrayList__ArrayList_set(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn63, lang_Numbers__Int index, uint8_t* element);
void structs_ArrayList__ArrayList_set_impl(structs_ArrayList__ArrayList* this, uint8_t* __genericReturn63, lang_Numbers__Int index, uint8_t* element);
lang_Numbers__SizeT structs_ArrayList__ArrayList_getSize(structs_ArrayList__ArrayList* this);
lang_Numbers__SizeT structs_ArrayList__ArrayList_getSize_impl(structs_ArrayList__ArrayList* this);
void structs_ArrayList__ArrayList_ensureCapacity(structs_ArrayList__ArrayList* this, lang_Numbers__SizeT newSize);
void structs_ArrayList__ArrayList_ensureCapacity_impl(structs_ArrayList__ArrayList* this, lang_Numbers__SizeT newSize);
void structs_ArrayList__ArrayList_checkIndex(structs_ArrayList__ArrayList* this, lang_Numbers__SSizeT index);
void structs_ArrayList__ArrayList_checkIndex_impl(structs_ArrayList__ArrayList* this, lang_Numbers__SSizeT index);
lang_Iterators__BackIterator* structs_ArrayList__ArrayList_iterator(structs_ArrayList__ArrayList* this);
lang_Iterators__BackIterator* structs_ArrayList__ArrayList_iterator_impl(structs_ArrayList__ArrayList* this);
lang_Iterators__BackIterator* structs_ArrayList__ArrayList_backIterator(structs_ArrayList__ArrayList* this);
lang_Iterators__BackIterator* structs_ArrayList__ArrayList_backIterator_impl(structs_ArrayList__ArrayList* this);
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_clone(structs_ArrayList__ArrayList* this);
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_clone_impl(structs_ArrayList__ArrayList* this);
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_emptyClone(structs_ArrayList__ArrayList* this, lang_types__Class* K);
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_emptyClone_impl(structs_ArrayList__ArrayList* this, lang_types__Class* K);
lang_types__Pointer structs_ArrayList__ArrayList_toArray(structs_ArrayList__ArrayList* this);
lang_types__Pointer structs_ArrayList__ArrayList_toArray_impl(structs_ArrayList__ArrayList* this);
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_slice(structs_ArrayList__ArrayList* this, lang_Numbers__SSizeT min, lang_Numbers__SSizeT max);
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_slice_impl(structs_ArrayList__ArrayList* this, lang_Numbers__SSizeT min, lang_Numbers__SSizeT max);
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_slice_withRange(structs_ArrayList__ArrayList* this, lang_Numbers__Range r);
structs_ArrayList__ArrayList* structs_ArrayList__ArrayList_slice_withRange_impl(structs_ArrayList__ArrayList* this, lang_Numbers__Range r);
lang_Numbers__SSizeT structs_ArrayList__ArrayList___getsize__(structs_ArrayList__ArrayList* this);
lang_Numbers__SSizeT structs_ArrayList__ArrayList___getsize___impl(structs_ArrayList__ArrayList* this);
void structs_ArrayList__ArrayList___defaults__(structs_ArrayList__ArrayList* this);
void structs_ArrayList__ArrayList___defaults___impl(structs_ArrayList__ArrayList* this);
void structs_ArrayList__ArrayList___load__();
structs_ArrayList__ArrayListIteratorClass *structs_ArrayList__ArrayListIterator_class();
structs_ArrayList__ArrayListIterator* structs_ArrayList__ArrayListIterator_new_iter(lang_types__Class* T, structs_ArrayList__ArrayList* list);
void structs_ArrayList__ArrayListIterator_init_iter(structs_ArrayList__ArrayListIterator* this, structs_ArrayList__ArrayList* list);
lang_types__Bool structs_ArrayList__ArrayListIterator_hasNext__quest(structs_ArrayList__ArrayListIterator* this);
lang_types__Bool structs_ArrayList__ArrayListIterator_hasNext__quest_impl(structs_ArrayList__ArrayListIterator* this);
void structs_ArrayList__ArrayListIterator_next(structs_ArrayList__ArrayListIterator* this, uint8_t* __genericReturn64);
void structs_ArrayList__ArrayListIterator_next_impl(structs_ArrayList__ArrayListIterator* this, uint8_t* __genericReturn64);
lang_types__Bool structs_ArrayList__ArrayListIterator_hasPrev__quest(structs_ArrayList__ArrayListIterator* this);
lang_types__Bool structs_ArrayList__ArrayListIterator_hasPrev__quest_impl(structs_ArrayList__ArrayListIterator* this);
void structs_ArrayList__ArrayListIterator_prev(structs_ArrayList__ArrayListIterator* this, uint8_t* __genericReturn65);
void structs_ArrayList__ArrayListIterator_prev_impl(structs_ArrayList__ArrayListIterator* this, uint8_t* __genericReturn65);
lang_types__Bool structs_ArrayList__ArrayListIterator_remove(structs_ArrayList__ArrayListIterator* this);
lang_types__Bool structs_ArrayList__ArrayListIterator_remove_impl(structs_ArrayList__ArrayListIterator* this);
void structs_ArrayList__ArrayListIterator___defaults__(structs_ArrayList__ArrayListIterator* this);
void structs_ArrayList__ArrayListIterator___defaults___impl(structs_ArrayList__ArrayListIterator* this);
void structs_ArrayList__ArrayListIterator___load__();
void structs_ArrayList_load();
structs_ArrayList__ArrayList* structs_ArrayList____OP_IDX_ArrayList_Range__ArrayList(lang_types__Class* T, structs_ArrayList__ArrayList* list, lang_Numbers__Range r);
void structs_ArrayList____OP_IDX_ArrayList_Int__T(uint8_t* __genericReturn60, lang_types__Class* T, structs_ArrayList__ArrayList* list, lang_Numbers__Int i);
void structs_ArrayList____OP_IDX_ASS_ArrayList_Int_T(lang_types__Class* T, structs_ArrayList__ArrayList* list, lang_Numbers__Int i, uint8_t* element);
void structs_ArrayList____OP_ADD_ASS_ArrayList_T(lang_types__Class* T, structs_ArrayList__ArrayList* list, uint8_t* element);
lang_types__Bool structs_ArrayList____OP_SUB_ASS_ArrayList_T__Bool(lang_types__Class* T, structs_ArrayList__ArrayList* list, uint8_t* element);
structs_ArrayList__ArrayList* structs_ArrayList____OP_AS_T__array__ArrayList(lang_types__Class* T, _lang_array__Array array);

#endif // ___structs_ArrayList_fwd___
