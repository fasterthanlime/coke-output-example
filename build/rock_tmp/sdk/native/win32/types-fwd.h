/* native/win32/types header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___native_win32_types_fwd___
#define ___native_win32_types_fwd___

#if defined(__WIN32__) || defined(__WIN64__)
#include <windows.h>
#endif

#if defined(__WIN32__) || defined(__WIN64__)
typedef LCID native_win32_types__LocaleId;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
typedef HANDLE native_win32_types__Handle;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
typedef LARGE_INTEGER native_win32_types__LargeInteger;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
typedef ULARGE_INTEGER native_win32_types__ULargeInteger;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
typedef FILETIME native_win32_types__FileTime;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _native_win32_types__LocaleIdClass;
typedef struct _native_win32_types__LocaleIdClass native_win32_types__LocaleIdClass;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _native_win32_types__HandleClass;
typedef struct _native_win32_types__HandleClass native_win32_types__HandleClass;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _native_win32_types__LargeIntegerClass;
typedef struct _native_win32_types__LargeIntegerClass native_win32_types__LargeIntegerClass;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _native_win32_types__ULargeIntegerClass;
typedef struct _native_win32_types__ULargeIntegerClass native_win32_types__ULargeIntegerClass;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _native_win32_types__FileTimeClass;
typedef struct _native_win32_types__FileTimeClass native_win32_types__FileTimeClass;
#endif

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
#if defined(__WIN32__) || defined(__WIN64__)
native_win32_types__LocaleIdClass *native_win32_types__LocaleId_class();
void native_win32_types__LocaleId___load__();
#endif
#if defined(__WIN32__) || defined(__WIN64__)
native_win32_types__HandleClass *native_win32_types__Handle_class();
void native_win32_types__Handle___load__();
#endif
#if defined(__WIN32__) || defined(__WIN64__)
native_win32_types__LargeIntegerClass *native_win32_types__LargeInteger_class();
void native_win32_types__LargeInteger___load__();
#endif
#if defined(__WIN32__) || defined(__WIN64__)
native_win32_types__ULargeIntegerClass *native_win32_types__ULargeInteger_class();
void native_win32_types__ULargeInteger___load__();
#endif
#if defined(__WIN32__) || defined(__WIN64__)
native_win32_types__FileTimeClass *native_win32_types__FileTime_class();
void native_win32_types__FileTime___load__();
#endif
void native_win32_types_load();
#if defined(__WIN32__) || defined(__WIN64__)
lang_Numbers__LLong native_win32_types__toLLong_twoPartsLargeInteger(lang_Numbers__Long lowPart, lang_Numbers__Long highPart);
#endif
#if defined(__WIN32__) || defined(__WIN64__)
lang_Numbers__ULLong native_win32_types__toULLong_twoPartsLargeInteger(lang_Numbers__Long lowPart, lang_Numbers__Long highPart);
#endif
#if defined(__WIN32__) || defined(__WIN64__)
lang_Numbers__Long native_win32_types__toTimestamp_fromFiletime(native_win32_types__FileTime fileTime);
#endif

#endif // ___native_win32_types_fwd___
