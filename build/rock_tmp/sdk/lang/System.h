/* lang/System header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_System___
#define ___lang_System___

#include <sdk/lang/System-fwd.h>
#include <sdk/lang/types.h>

struct _lang_System__VaListClass {
    struct _lang_types__ClassClass __super__;
};


#ifdef OOC_FROM_C
#define exit() lang_System__exit(())
#define atexit() lang_System__atexit((void*) ())
#define va_start(, ...) lang_System__va_start((), __VA_ARGS__)
#define va_arg(, ...) lang_System__va_arg((), __VA_ARGS__)
#define va_end() lang_System__va_end(())
#define va_copy(, ) lang_System__va_copy((), ())
#define VaList lang_System__VaList
#define VaList_class() lang_System__VaList_class()
#define VaListClass lang_System__VaListClass
#define VaListClass_class() lang_System__VaListClass_class()
#define VaList___load__() lang_System__VaList___load__()
#endif

#endif // ___lang_System___
