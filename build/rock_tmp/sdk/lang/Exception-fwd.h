/* lang/Exception header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_Exception_fwd___
#define ___lang_Exception_fwd___

#include <setjmp.h>
#include <assert.h>
#include <errno.h>
#if defined(__linux__)
#include <execinfo.h>
#endif
#include <stdlib.h>

typedef jmp_buf lang_Exception__JmpBuf;
typedef struct _lang_Exception___StackFrame lang_Exception___StackFrame;
typedef lang_Exception___StackFrame* lang_Exception__StackFrame;
#if defined(__WIN32__) || defined(__WIN64__)
typedef signed long lang_Exception__DWORD;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
typedef char* lang_Exception__LPTSTR;
#endif
struct _lang_Exception__Backtrace;
typedef struct _lang_Exception__Backtrace lang_Exception__Backtrace;
struct _lang_Exception__Exception;
typedef struct _lang_Exception__Exception lang_Exception__Exception;
struct _lang_Exception__OSException;
typedef struct _lang_Exception__OSException lang_Exception__OSException;
struct _lang_Exception__OutOfBoundsException;
typedef struct _lang_Exception__OutOfBoundsException lang_Exception__OutOfBoundsException;
struct _lang_Exception__OutOfMemoryException;
typedef struct _lang_Exception__OutOfMemoryException lang_Exception__OutOfMemoryException;
struct _lang_Exception__JmpBufClass;
typedef struct _lang_Exception__JmpBufClass lang_Exception__JmpBufClass;
struct _lang_Exception___StackFrameClass;
typedef struct _lang_Exception___StackFrameClass lang_Exception___StackFrameClass;
struct _lang_Exception__StackFrameClass;
typedef struct _lang_Exception__StackFrameClass lang_Exception__StackFrameClass;
#if defined(__WIN32__) || defined(__WIN64__)
struct _lang_Exception__DWORDClass;
typedef struct _lang_Exception__DWORDClass lang_Exception__DWORDClass;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _lang_Exception__LPTSTRClass;
typedef struct _lang_Exception__LPTSTRClass lang_Exception__LPTSTRClass;
#endif
struct _lang_Exception__BacktraceClass;
typedef struct _lang_Exception__BacktraceClass lang_Exception__BacktraceClass;
struct _lang_Exception__ExceptionClass;
typedef struct _lang_Exception__ExceptionClass lang_Exception__ExceptionClass;
struct _lang_Exception__OSExceptionClass;
typedef struct _lang_Exception__OSExceptionClass lang_Exception__OSExceptionClass;
struct _lang_Exception__OutOfBoundsExceptionClass;
typedef struct _lang_Exception__OutOfBoundsExceptionClass lang_Exception__OutOfBoundsExceptionClass;
struct _lang_Exception__OutOfMemoryExceptionClass;
typedef struct _lang_Exception__OutOfMemoryExceptionClass lang_Exception__OutOfMemoryExceptionClass;

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
#include <sdk/threading/Thread-fwd.h>
#include <sdk/structs/Stack-fwd.h>
#include <sdk/structs/LinkedList-fwd.h>
#include <sdk/native/win32/errors-fwd.h>
lang_Exception__JmpBufClass *lang_Exception__JmpBuf_class();
#define lang_Exception__JmpBuf_setJmp setjmp

#define lang_Exception__JmpBuf_longJmp longjmp

void lang_Exception__JmpBuf___load__();
lang_Exception___StackFrameClass *lang_Exception___StackFrame_class();
void lang_Exception___StackFrame___load__();
lang_Exception__StackFrameClass *lang_Exception__StackFrame_class();
lang_Exception__StackFrame lang_Exception__StackFrame_new();
void lang_Exception__StackFrame___load__();
#if defined(__WIN32__) || defined(__WIN64__)
lang_Exception__DWORDClass *lang_Exception__DWORD_class();
void lang_Exception__DWORD___load__();
#endif
#if defined(__WIN32__) || defined(__WIN64__)
lang_Exception__LPTSTRClass *lang_Exception__LPTSTR_class();
void lang_Exception__LPTSTR___load__();
#endif
lang_Exception__BacktraceClass *lang_Exception__Backtrace_class();
lang_Exception__Backtrace* lang_Exception__Backtrace_new(lang_Numbers__Int length, lang_types__Pointer* buffer);
void lang_Exception__Backtrace_init(lang_Exception__Backtrace* this, lang_Numbers__Int length, lang_types__Pointer* buffer);
void lang_Exception__Backtrace___defaults__(lang_Exception__Backtrace* this);
void lang_Exception__Backtrace___defaults___impl(lang_Exception__Backtrace* this);
void lang_Exception__Backtrace___load__();
lang_Exception__ExceptionClass *lang_Exception__Exception_class();
void lang_Exception__Exception_addBacktrace(lang_Exception__Exception* this);
void lang_Exception__Exception_addBacktrace_impl(lang_Exception__Exception* this);
void lang_Exception__Exception_printBacktrace(lang_Exception__Exception* this);
void lang_Exception__Exception_printBacktrace_impl(lang_Exception__Exception* this);
lang_Exception__Exception* lang_Exception__Exception_new(lang_types__Class* origin, lang_String__String* message);
void lang_Exception__Exception_init(lang_Exception__Exception* this, lang_types__Class* origin, lang_String__String* message);
lang_Exception__Exception* lang_Exception__Exception_new_noOrigin(lang_String__String* message);
void lang_Exception__Exception_init_noOrigin(lang_Exception__Exception* this, lang_String__String* message);
lang_String__String* lang_Exception__Exception_formatMessage(lang_Exception__Exception* this);
lang_String__String* lang_Exception__Exception_formatMessage_impl(lang_Exception__Exception* this);
void lang_Exception__Exception_print(lang_Exception__Exception* this);
void lang_Exception__Exception_print_impl(lang_Exception__Exception* this);
void lang_Exception__Exception_throw(lang_Exception__Exception* this);
void lang_Exception__Exception_throw_impl(lang_Exception__Exception* this);
void lang_Exception__Exception_rethrow(lang_Exception__Exception* this);
void lang_Exception__Exception_rethrow_impl(lang_Exception__Exception* this);
void lang_Exception__Exception___defaults__(lang_Exception__Exception* this);
void lang_Exception__Exception___defaults___impl(lang_Exception__Exception* this);
void lang_Exception__Exception___load__();
lang_Exception__OSExceptionClass *lang_Exception__OSException_class();
lang_Exception__OSException* lang_Exception__OSException_new(lang_String__String* message);
void lang_Exception__OSException_init(lang_Exception__OSException* this, lang_String__String* message);
lang_Exception__OSException* lang_Exception__OSException_new_noOrigin();
void lang_Exception__OSException_init_noOrigin(lang_Exception__OSException* this);
void lang_Exception__OSException___defaults__(lang_Exception__OSException* this);
void lang_Exception__OSException___defaults___impl(lang_Exception__OSException* this);
void lang_Exception__OSException___load__();
lang_Exception__OutOfBoundsExceptionClass *lang_Exception__OutOfBoundsException_class();
lang_Exception__OutOfBoundsException* lang_Exception__OutOfBoundsException_new(lang_types__Class* origin, lang_Numbers__SizeT accessOffset, lang_Numbers__SizeT elementLength);
void lang_Exception__OutOfBoundsException_init(lang_Exception__OutOfBoundsException* this, lang_types__Class* origin, lang_Numbers__SizeT accessOffset, lang_Numbers__SizeT elementLength);
lang_Exception__OutOfBoundsException* lang_Exception__OutOfBoundsException_new_noOrigin(lang_Numbers__SizeT accessOffset, lang_Numbers__SizeT elementLength);
void lang_Exception__OutOfBoundsException_init_noOrigin(lang_Exception__OutOfBoundsException* this, lang_Numbers__SizeT accessOffset, lang_Numbers__SizeT elementLength);
void lang_Exception__OutOfBoundsException___defaults__(lang_Exception__OutOfBoundsException* this);
void lang_Exception__OutOfBoundsException___defaults___impl(lang_Exception__OutOfBoundsException* this);
void lang_Exception__OutOfBoundsException___load__();
lang_Exception__OutOfMemoryExceptionClass *lang_Exception__OutOfMemoryException_class();
lang_Exception__OutOfMemoryException* lang_Exception__OutOfMemoryException_new(lang_types__Class* origin);
void lang_Exception__OutOfMemoryException_init(lang_Exception__OutOfMemoryException* this, lang_types__Class* origin);
lang_Exception__OutOfMemoryException* lang_Exception__OutOfMemoryException_new_noOrigin();
void lang_Exception__OutOfMemoryException_init_noOrigin(lang_Exception__OutOfMemoryException* this);
void lang_Exception__OutOfMemoryException___defaults__(lang_Exception__OutOfMemoryException* this);
void lang_Exception__OutOfMemoryException___defaults___impl(lang_Exception__OutOfMemoryException* this);
void lang_Exception__OutOfMemoryException___load__();
extern lang_Numbers__SSizeT lang_Exception__BACKTRACE_LENGTH;
extern threading_Thread__ThreadLocal* lang_Exception__exceptionStack;
extern threading_Thread__ThreadLocal* lang_Exception___exception;
extern lang_Numbers__Int lang_Exception___EXCEPTION;
void lang_Exception_load();
#if defined(__linux__)
#define lang_Exception__backtrace backtrace

#endif
#if defined(__linux__)
#define lang_Exception__backtraceSymbols backtrace_symbols

#endif
#if defined(__linux__)
#define lang_Exception__backtraceSymbolsFd backtrace_symbols_fd

#endif
lang_Exception__StackFrame lang_Exception___pushStackFrame();
void lang_Exception___setException(lang_Exception__Exception* e);
lang_Exception__Exception* lang_Exception___getException();
lang_Exception__StackFrame lang_Exception___popStackFrame();
lang_types__Bool lang_Exception___hasStackFrame();
#define lang_Exception__assert assert

#if defined(__WIN32__) || defined(__WIN64__)
#define lang_Exception__FormatMessage FormatMessage

#endif
#if defined(__WIN32__) || defined(__WIN64__)
lang_Numbers__Int lang_Exception__getOSErrorCode();
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
lang_Numbers__Int lang_Exception__getOSErrorCode();
#endif
#if defined(__WIN32__) || defined(__WIN64__)
lang_String__String* lang_Exception__getOSError();
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
lang_String__String* lang_Exception__getOSError();
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))
#define lang_Exception__strerror strerror

#endif
void lang_Exception__raise(lang_String__String* msg);
void lang_Exception__raise_withClass(lang_types__Class* clazz, lang_String__String* msg);
#define lang_Exception__abort abort


#endif // ___lang_Exception_fwd___
