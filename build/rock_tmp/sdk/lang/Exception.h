/* lang/Exception header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Exception___
#define ___lang_Exception___

#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/types.h>

struct _lang_Exception___StackFrame {
    lang_Exception__JmpBuf buf;
};

struct _lang_Exception__Backtrace {
    struct _lang_types__Object __super__;
    lang_Numbers__Int length;
    lang_types__Pointer* buffer;
};


struct _lang_Exception__Exception {
    struct _lang_types__Object __super__;
    structs_LinkedList__LinkedList* backtraces;
    lang_types__Class* origin;
    lang_String__String* message;
};


struct _lang_Exception__OSException {
    struct _lang_Exception__Exception __super__;
};


struct _lang_Exception__OutOfBoundsException {
    struct _lang_Exception__Exception __super__;
};


struct _lang_Exception__OutOfMemoryException {
    struct _lang_Exception__Exception __super__;
};


struct _lang_Exception__JmpBufClass {
    struct _lang_types__ClassClass __super__;
};


struct _lang_Exception___StackFrameClass {
    struct _lang_types__ClassClass __super__;
};


struct _lang_Exception__StackFrameClass {
    struct _lang_types__ClassClass __super__;
    lang_Exception__StackFrame (*new)();
};


#if defined(__WIN32__) || defined(__WIN64__)
struct _lang_Exception__DWORDClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _lang_Exception__LPTSTRClass {
    struct _lang_types__ClassClass __super__;
};


#endif
struct _lang_Exception__BacktraceClass {
    struct _lang_types__ClassClass __super__;
    lang_Exception__Backtrace* (*new)(lang_Numbers__Int, lang_types__Pointer*);
    void (*init)(lang_Exception__Backtrace*, lang_Numbers__Int, lang_types__Pointer*);
};


struct _lang_Exception__ExceptionClass {
    struct _lang_types__ClassClass __super__;
    void (*addBacktrace)(lang_Exception__Exception*);
    void (*printBacktrace)(lang_Exception__Exception*);
    lang_Exception__Exception* (*new)(lang_types__Class*, lang_String__String*);
    void (*init)(lang_Exception__Exception*, lang_types__Class*, lang_String__String*);
    lang_Exception__Exception* (*new_noOrigin)(lang_String__String*);
    void (*init_noOrigin)(lang_Exception__Exception*, lang_String__String*);
    lang_String__String* (*formatMessage)(lang_Exception__Exception*);
    void (*print)(lang_Exception__Exception*);
    void (*throw)(lang_Exception__Exception*);
    void (*rethrow)(lang_Exception__Exception*);
};


struct _lang_Exception__OSExceptionClass {
    struct _lang_Exception__ExceptionClass __super__;
};


struct _lang_Exception__OutOfBoundsExceptionClass {
    struct _lang_Exception__ExceptionClass __super__;
};


struct _lang_Exception__OutOfMemoryExceptionClass {
    struct _lang_Exception__ExceptionClass __super__;
};


#ifdef OOC_FROM_C
#define backtrace(array, size) lang_Exception__backtrace((array), (size))
#define backtraceSymbols(array, size) lang_Exception__backtraceSymbols((array), (size))
#define backtraceSymbolsFd(array, size, fd) lang_Exception__backtraceSymbolsFd((array), (size), (fd))
#define _pushStackFrame() lang_Exception___pushStackFrame()
#define _setException(e) lang_Exception___setException((void*) (e))
#define _getException() (void*) lang_Exception___getException()
#define _popStackFrame() lang_Exception___popStackFrame()
#define _hasStackFrame() lang_Exception___hasStackFrame()
#define assert() lang_Exception__assert(())
#define FormatMessage(dwFlags, lpSource, dwMessageId, dwLanguageId, lpBuffer, nSize, Arguments) lang_Exception__FormatMessage((dwFlags), (void*) (lpSource), (dwMessageId), (dwLanguageId), (lpBuffer), (nSize), (Arguments))
#define getOSErrorCode() lang_Exception__getOSErrorCode()
#define getOSErrorCode() lang_Exception__getOSErrorCode()
#define getOSError() (void*) lang_Exception__getOSError()
#define getOSError() (void*) lang_Exception__getOSError()
#define strerror() lang_Exception__strerror(())
#define raise(msg) lang_Exception__raise((void*) (msg))
#define raise_withClass(clazz, msg) lang_Exception__raise_withClass((void*) (clazz), (void*) (msg))
#define abort() lang_Exception__abort()
#define JmpBuf lang_Exception__JmpBuf
#define JmpBuf_class() lang_Exception__JmpBuf_class()
#define JmpBufClass lang_Exception__JmpBufClass
#define JmpBufClass_class() lang_Exception__JmpBufClass_class()
#define JmpBuf_setJmp(_this_) lang_Exception__JmpBuf_setJmp((void*) (_this_))
#define JmpBuf_longJmp(_this_, value) lang_Exception__JmpBuf_longJmp((void*) (_this_), (value))
#define JmpBuf___load__() lang_Exception__JmpBuf___load__()
#define _StackFrame lang_Exception___StackFrame
#define _StackFrame_class() lang_Exception___StackFrame_class()
#define _StackFrameClass lang_Exception___StackFrameClass
#define _StackFrameClass_class() lang_Exception___StackFrameClass_class()
#define _StackFrame___load__() lang_Exception___StackFrame___load__()
#define StackFrame lang_Exception__StackFrame
#define StackFrame_class() lang_Exception__StackFrame_class()
#define StackFrameClass lang_Exception__StackFrameClass
#define StackFrameClass_class() lang_Exception__StackFrameClass_class()
#define StackFrame_new() lang_Exception__StackFrame_new()
#define StackFrame___load__() lang_Exception__StackFrame___load__()
#define DWORD lang_Exception__DWORD
#define DWORD_class() lang_Exception__DWORD_class()
#define DWORDClass lang_Exception__DWORDClass
#define DWORDClass_class() lang_Exception__DWORDClass_class()
#define DWORD___load__() lang_Exception__DWORD___load__()
#define LPTSTR lang_Exception__LPTSTR
#define LPTSTR_class() lang_Exception__LPTSTR_class()
#define LPTSTRClass lang_Exception__LPTSTRClass
#define LPTSTRClass_class() lang_Exception__LPTSTRClass_class()
#define LPTSTR___load__() lang_Exception__LPTSTR___load__()
#define Backtrace lang_Exception__Backtrace
#define Backtrace_class() lang_Exception__Backtrace_class()
#define BacktraceClass lang_Exception__BacktraceClass
#define BacktraceClass_class() lang_Exception__BacktraceClass_class()
#define Backtrace_new(length, buffer) (void*) lang_Exception__Backtrace_new((length), (buffer))
#define Backtrace_init(_this_, length, buffer) lang_Exception__Backtrace_init((void*) (_this_), (length), (buffer))
#define Backtrace___defaults__(_this_) lang_Exception__Backtrace___defaults__((void*) (_this_))
#define Backtrace___load__() lang_Exception__Backtrace___load__()
#define Exception lang_Exception__Exception
#define Exception_class() lang_Exception__Exception_class()
#define ExceptionClass lang_Exception__ExceptionClass
#define ExceptionClass_class() lang_Exception__ExceptionClass_class()
#define Exception_addBacktrace(_this_) lang_Exception__Exception_addBacktrace((void*) (_this_))
#define Exception_printBacktrace(_this_) lang_Exception__Exception_printBacktrace((void*) (_this_))
#define Exception_new(origin, message) (void*) lang_Exception__Exception_new((void*) (origin), (void*) (message))
#define Exception_init(_this_, origin, message) lang_Exception__Exception_init((void*) (_this_), (void*) (origin), (void*) (message))
#define Exception_new_noOrigin(message) (void*) lang_Exception__Exception_new_noOrigin((void*) (message))
#define Exception_init_noOrigin(_this_, message) lang_Exception__Exception_init_noOrigin((void*) (_this_), (void*) (message))
#define Exception_formatMessage(_this_) (void*) lang_Exception__Exception_formatMessage((void*) (_this_))
#define Exception_print(_this_) lang_Exception__Exception_print((void*) (_this_))
#define Exception_throw(_this_) lang_Exception__Exception_throw((void*) (_this_))
#define Exception_rethrow(_this_) lang_Exception__Exception_rethrow((void*) (_this_))
#define Exception___defaults__(_this_) lang_Exception__Exception___defaults__((void*) (_this_))
#define Exception___load__() lang_Exception__Exception___load__()
#define OSException lang_Exception__OSException
#define OSException_class() lang_Exception__OSException_class()
#define OSExceptionClass lang_Exception__OSExceptionClass
#define OSExceptionClass_class() lang_Exception__OSExceptionClass_class()
#define OSException_new(message) (void*) lang_Exception__OSException_new((void*) (message))
#define OSException_init(_this_, message) lang_Exception__OSException_init((void*) (_this_), (void*) (message))
#define OSException_new_noOrigin() (void*) lang_Exception__OSException_new_noOrigin()
#define OSException_init_noOrigin(_this_) lang_Exception__OSException_init_noOrigin((void*) (_this_))
#define OSException___defaults__(_this_) lang_Exception__OSException___defaults__((void*) (_this_))
#define OSException___load__() lang_Exception__OSException___load__()
#define OutOfBoundsException lang_Exception__OutOfBoundsException
#define OutOfBoundsException_class() lang_Exception__OutOfBoundsException_class()
#define OutOfBoundsExceptionClass lang_Exception__OutOfBoundsExceptionClass
#define OutOfBoundsExceptionClass_class() lang_Exception__OutOfBoundsExceptionClass_class()
#define OutOfBoundsException_new(origin, accessOffset, elementLength) (void*) lang_Exception__OutOfBoundsException_new((void*) (origin), (accessOffset), (elementLength))
#define OutOfBoundsException_init(_this_, origin, accessOffset, elementLength) lang_Exception__OutOfBoundsException_init((void*) (_this_), (void*) (origin), (accessOffset), (elementLength))
#define OutOfBoundsException_new_noOrigin(accessOffset, elementLength) (void*) lang_Exception__OutOfBoundsException_new_noOrigin((accessOffset), (elementLength))
#define OutOfBoundsException_init_noOrigin(_this_, accessOffset, elementLength) lang_Exception__OutOfBoundsException_init_noOrigin((void*) (_this_), (accessOffset), (elementLength))
#define OutOfBoundsException___defaults__(_this_) lang_Exception__OutOfBoundsException___defaults__((void*) (_this_))
#define OutOfBoundsException___load__() lang_Exception__OutOfBoundsException___load__()
#define OutOfMemoryException lang_Exception__OutOfMemoryException
#define OutOfMemoryException_class() lang_Exception__OutOfMemoryException_class()
#define OutOfMemoryExceptionClass lang_Exception__OutOfMemoryExceptionClass
#define OutOfMemoryExceptionClass_class() lang_Exception__OutOfMemoryExceptionClass_class()
#define OutOfMemoryException_new(origin) (void*) lang_Exception__OutOfMemoryException_new((void*) (origin))
#define OutOfMemoryException_init(_this_, origin) lang_Exception__OutOfMemoryException_init((void*) (_this_), (void*) (origin))
#define OutOfMemoryException_new_noOrigin() (void*) lang_Exception__OutOfMemoryException_new_noOrigin()
#define OutOfMemoryException_init_noOrigin(_this_) lang_Exception__OutOfMemoryException_init_noOrigin((void*) (_this_))
#define OutOfMemoryException___defaults__(_this_) lang_Exception__OutOfMemoryException___defaults__((void*) (_this_))
#define OutOfMemoryException___load__() lang_Exception__OutOfMemoryException___load__()
#endif

#endif // ___lang_Exception___
