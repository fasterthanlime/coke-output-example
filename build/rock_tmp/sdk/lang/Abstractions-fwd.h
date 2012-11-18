/* lang/Abstractions header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Abstractions_fwd___
#define ___lang_Abstractions_fwd___

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
#include <sdk/lang/Format-fwd.h>
#include <sdk/lang/IO-fwd.h>

#ifndef __FUNC___Bool__DEFINE
#define __FUNC___Bool__DEFINE

typedef lang_types__Bool (*__FUNC___Bool)(void*);

#endif

void lang_Abstractions_load();
void lang_Abstractions__loop(lang_types__Closure f);

#endif // ___lang_Abstractions_fwd___
