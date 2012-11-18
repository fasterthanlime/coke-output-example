/* native/win32/types header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___native_win32_types___
#define ___native_win32_types___

#include <sdk/native/win32/types-fwd.h>
#include <sdk/lang/types.h>

#if defined(__WIN32__) || defined(__WIN64__)
struct _native_win32_types__LocaleIdClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _native_win32_types__HandleClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _native_win32_types__LargeIntegerClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _native_win32_types__ULargeIntegerClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _native_win32_types__FileTimeClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#ifdef OOC_FROM_C
#define toLLong_twoPartsLargeInteger(lowPart, highPart) native_win32_types__toLLong_twoPartsLargeInteger((lowPart), (highPart))
#define toULLong_twoPartsLargeInteger(lowPart, highPart) native_win32_types__toULLong_twoPartsLargeInteger((lowPart), (highPart))
#define toTimestamp_fromFiletime(fileTime) native_win32_types__toTimestamp_fromFiletime((fileTime))
#define LocaleId native_win32_types__LocaleId
#define LocaleId_class() native_win32_types__LocaleId_class()
#define LocaleIdClass native_win32_types__LocaleIdClass
#define LocaleIdClass_class() native_win32_types__LocaleIdClass_class()
#define LocaleId___load__() native_win32_types__LocaleId___load__()
#define Handle native_win32_types__Handle
#define Handle_class() native_win32_types__Handle_class()
#define HandleClass native_win32_types__HandleClass
#define HandleClass_class() native_win32_types__HandleClass_class()
#define Handle___load__() native_win32_types__Handle___load__()
#define LargeInteger native_win32_types__LargeInteger
#define LargeInteger_class() native_win32_types__LargeInteger_class()
#define LargeIntegerClass native_win32_types__LargeIntegerClass
#define LargeIntegerClass_class() native_win32_types__LargeIntegerClass_class()
#define LargeInteger___load__() native_win32_types__LargeInteger___load__()
#define ULargeInteger native_win32_types__ULargeInteger
#define ULargeInteger_class() native_win32_types__ULargeInteger_class()
#define ULargeIntegerClass native_win32_types__ULargeIntegerClass
#define ULargeIntegerClass_class() native_win32_types__ULargeIntegerClass_class()
#define ULargeInteger___load__() native_win32_types__ULargeInteger___load__()
#define FileTime native_win32_types__FileTime
#define FileTime_class() native_win32_types__FileTime_class()
#define FileTimeClass native_win32_types__FileTimeClass
#define FileTimeClass_class() native_win32_types__FileTimeClass_class()
#define FileTime___load__() native_win32_types__FileTime___load__()
#endif

#endif // ___native_win32_types___
