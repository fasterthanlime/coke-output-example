/* structs/List header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___structs_List_fwd___
#define ___structs_List_fwd___

struct _structs_List__List;
typedef struct _structs_List__List structs_List__List;
typedef struct ___structs_List_closure262_ctx __structs_List_closure262_ctx;
typedef struct ___structs_List_closure265_ctx __structs_List_closure265_ctx;
typedef struct ___structs_List_closure268_ctx __structs_List_closure268_ctx;
struct _structs_List__ListClass;
typedef struct _structs_List__ListClass structs_List__ListClass;
struct ___structs_List_closure262_ctxClass;
typedef struct ___structs_List_closure262_ctxClass __structs_List_closure262_ctxClass;
struct ___structs_List_closure265_ctxClass;
typedef struct ___structs_List_closure265_ctxClass __structs_List_closure265_ctxClass;
struct ___structs_List_closure268_ctxClass;
typedef struct ___structs_List_closure268_ctxClass __structs_List_closure268_ctxClass;

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
#include <sdk/math/Random-fwd.h>
#include <sdk/structs/ArrayList-fwd.h>
#include <sdk/structs/HashMap-fwd.h>

#ifndef __FUNC___T_Bool__DEFINE
#define __FUNC___T_Bool__DEFINE

typedef lang_types__Bool (*__FUNC___T_Bool)(uint8_t*, void*);

#endif


#ifndef __FUNC___T_K__DEFINE
#define __FUNC___T_K__DEFINE

typedef void (*__FUNC___T_K)(uint8_t*, uint8_t*, void*);

#endif


#ifndef __FUNC___T__DEFINE
#define __FUNC___T__DEFINE

typedef void (*__FUNC___T)(uint8_t*, void*);

#endif


#ifndef __FUNC___T_T_T_Bool__DEFINE
#define __FUNC___T_T_T_Bool__DEFINE

typedef lang_types__Bool (*__FUNC___T_T_T_Bool)(lang_types__Class*, uint8_t*, uint8_t*);

#endif


#ifndef __FUNC___T_void__DEFINE
#define __FUNC___T_void__DEFINE

typedef void (*__FUNC___T_void)(uint8_t*, void*);

#endif

structs_List__ListClass *structs_List__List_class();
void structs_List__List_init(structs_List__List* this);
void structs_List__List_add(structs_List__List* this, uint8_t* element);
void structs_List__List_add_withIndex(structs_List__List* this, lang_Numbers__SSizeT index, uint8_t* element);
void structs_List__List_addAll(structs_List__List* this, lang_Iterators__Iterable* list);
void structs_List__List_addAll_impl(structs_List__List* this, lang_Iterators__Iterable* list);
void structs_List__List_addAll_atStart(structs_List__List* this, lang_Numbers__SSizeT start, lang_Iterators__Iterable* list);
void structs_List__List_addAll_atStart_impl(structs_List__List* this, lang_Numbers__SSizeT start, lang_Iterators__Iterable* list);
void structs_List__List_clear(structs_List__List* this);
lang_types__Bool structs_List__List_removeLast(structs_List__List* this);
lang_types__Bool structs_List__List_removeLast_impl(structs_List__List* this);
lang_types__Bool structs_List__List_contains__quest(structs_List__List* this, uint8_t* element);
lang_types__Bool structs_List__List_contains__quest_impl(structs_List__List* this, uint8_t* element);
lang_types__Bool structs_List__List_contains__quest_filter(structs_List__List* this, lang_types__Closure f);
lang_types__Bool structs_List__List_contains__quest_filter_impl(structs_List__List* this, lang_types__Closure f);
lang_types__Bool structs_List__List_replace(structs_List__List* this, uint8_t* oldie, uint8_t* kiddo);
lang_types__Bool structs_List__List_replace_impl(structs_List__List* this, uint8_t* oldie, uint8_t* kiddo);
void structs_List__List_get(structs_List__List* this, uint8_t* __genericReturn67, lang_Numbers__SSizeT index);
lang_Numbers__Int structs_List__List_indexOf(structs_List__List* this, uint8_t* element);
lang_types__Bool structs_List__List_empty__quest(structs_List__List* this);
lang_types__Bool structs_List__List_empty__quest_impl(structs_List__List* this);
lang_Numbers__Int structs_List__List_lastIndexOf(structs_List__List* this, uint8_t* element);
void structs_List__List_removeAt(structs_List__List* this, uint8_t* __genericReturn68, lang_Numbers__SSizeT index);
lang_types__Bool structs_List__List_remove(structs_List__List* this, uint8_t* element);
void structs_List__List_set(structs_List__List* this, uint8_t* __genericReturn69, lang_Numbers__SSizeT index, uint8_t* element);
lang_Numbers__SizeT structs_List__List_getSize(structs_List__List* this);
lang_Iterators__BackIterator* structs_List__List_iterator(structs_List__List* this);
structs_List__List* structs_List__List_clone(structs_List__List* this);
structs_List__List* structs_List__List_emptyClone(structs_List__List* this, lang_types__Class* K);
structs_List__List* structs_List__List_emptyClone_defaults(structs_List__List* this);
structs_List__List* structs_List__List_emptyClone_defaults_impl(structs_List__List* this);
void structs_List__List_split(structs_List__List* this, lang_types__Closure f, structs_List__List** list1, structs_List__List** list2);
void structs_List__List_split_impl(structs_List__List* this, lang_types__Closure f, structs_List__List** list1, structs_List__List** list2);
structs_List__List* structs_List__List_shuffle(structs_List__List* this);
structs_List__List* structs_List__List_shuffle_impl(structs_List__List* this);
void structs_List__List_first(structs_List__List* this, uint8_t* __genericReturn70);
void structs_List__List_first_impl(structs_List__List* this, uint8_t* __genericReturn70);
void structs_List__List_last(structs_List__List* this, uint8_t* __genericReturn71);
void structs_List__List_last_impl(structs_List__List* this, uint8_t* __genericReturn71);
lang_Numbers__SSizeT structs_List__List_lastIndex(structs_List__List* this);
lang_Numbers__SSizeT structs_List__List_lastIndex_impl(structs_List__List* this);
void structs_List__List_reverse__bang(structs_List__List* this);
void structs_List__List_reverse__bang_impl(structs_List__List* this);
structs_List__List* structs_List__List_reverse(structs_List__List* this);
structs_List__List* structs_List__List_reverse_impl(structs_List__List* this);
lang_types__Pointer structs_List__List_toArray(structs_List__List* this);
lang_types__Pointer structs_List__List_toArray_impl(structs_List__List* this);
structs_List__List* structs_List__List_map(structs_List__List* this, lang_types__Class* K, lang_types__Closure f);
structs_List__List* structs_List__List_map_impl(structs_List__List* this, lang_types__Class* K, lang_types__Closure f);
structs_List__List* structs_List__List_filter(structs_List__List* this, lang_types__Closure f);
structs_List__List* structs_List__List_filter_impl(structs_List__List* this, lang_types__Closure f);
void structs_List__List_filterEach(structs_List__List* this, lang_types__Closure f, lang_types__Closure g);
void structs_List__List_filterEach_impl(structs_List__List* this, lang_types__Closure f, lang_types__Closure g);
lang_Numbers__SizeT structs_List__List_itemsSizeInBytes(structs_List__List* this);
lang_Numbers__SizeT structs_List__List_itemsSizeInBytes_impl(structs_List__List* this);
lang_String__String* structs_List__List_join_stringDefault(structs_List__List* this);
lang_String__String* structs_List__List_join_stringDefault_impl(structs_List__List* this);
lang_String__String* structs_List__List_join_string(structs_List__List* this, lang_String__String* str);
lang_String__String* structs_List__List_join_string_impl(structs_List__List* this, lang_String__String* str);
lang_String__String* structs_List__List_join_char(structs_List__List* this, lang_Character__Char chr);
lang_String__String* structs_List__List_join_char_impl(structs_List__List* this, lang_Character__Char chr);
lang_Numbers__SSizeT structs_List__List___getsize__(structs_List__List* this);
lang_Numbers__SSizeT structs_List__List___getsize___impl(structs_List__List* this);
void structs_List__List___defaults__(structs_List__List* this);
void structs_List__List___defaults___impl(structs_List__List* this);
void structs_List__List___load__();
__structs_List_closure262_ctxClass *__structs_List_closure262_ctx_class();
void __structs_List_closure262_ctx___load__();
__structs_List_closure265_ctxClass *__structs_List_closure265_ctx_class();
void __structs_List_closure265_ctx___load__();
__structs_List_closure268_ctxClass *__structs_List_closure268_ctx_class();
void __structs_List_closure268_ctx___load__();
void structs_List_load();
lang_types__Bool structs_List____structs_List_closure262(lang_types__Closure f, lang_types__Bool* result, uint8_t* elem);
lang_types__Bool structs_List____structs_List_closure262_thunk(uint8_t* elem, __structs_List_closure262_ctx* __context__);
void structs_List____structs_List_closure265(lang_types__Closure f, structs_List__List* copy, lang_types__Class* K, uint8_t* x);
void structs_List____structs_List_closure265_thunk(uint8_t* x, __structs_List_closure265_ctx* __context__);
void structs_List____structs_List_closure268(lang_types__Closure f, structs_List__List* copy, uint8_t* x);
void structs_List____structs_List_closure268_thunk(uint8_t* x, __structs_List_closure268_ctx* __context__);
void structs_List____OP_IDX_List_SSizeT__T(uint8_t* __genericReturn66, lang_types__Class* T, structs_List__List* list, lang_Numbers__SSizeT i);
void structs_List____OP_IDX_ASS_List_SSizeT_T(lang_types__Class* T, structs_List__List* list, lang_Numbers__SSizeT i, uint8_t* element);
void structs_List____OP_ADD_ASS_List_T(lang_types__Class* T, structs_List__List* list, uint8_t* element);
lang_types__Bool structs_List____OP_SUB_ASS_List_T__Bool(lang_types__Class* T, structs_List__List* list, uint8_t* element);

#endif // ___structs_List_fwd___
