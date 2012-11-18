/* lang/Exception source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/Exception.h>
#include <sdk/lang/BufferIterator.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Character.h>
#include <sdk/lang/VarArgs.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/Memory.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Buffer.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Abstractions.h>
#include <sdk/lang/Format.h>
#include <sdk/lang/IO.h>
#include <sdk/threading/Thread.h>
#include <sdk/structs/Stack.h>
#include <sdk/structs/LinkedList.h>
#include <sdk/native/win32/errors.h>

static lang_String__String* __strLit169;
static lang_String__String* __strLit10;
static lang_String__String* __strLit9;
static lang_String__String* __strLit8;
static lang_String__String* __strLit7;
static lang_String__String* __strLit6;
static lang_String__String* __strLit5;
static lang_String__String* __strLit4;
static lang_String__String* __strLit3;
static lang_String__String* __strLit2;
lang_Numbers__SSizeT lang_Exception__BACKTRACE_LENGTH;
threading_Thread__ThreadLocal* lang_Exception__exceptionStack;
threading_Thread__ThreadLocal* lang_Exception___exception;
lang_Numbers__Int lang_Exception___EXCEPTION;
void lang_Exception__JmpBuf___load__() {
    lang_types__Class___load__();
}

lang_Exception__JmpBufClass *lang_Exception__JmpBuf_class(){
    static _Bool __done__ = false;
    static lang_Exception__JmpBufClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Exception__JmpBuf),
                    .size = sizeof(lang_Exception__JmpBuf)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_Exception__JmpBuf___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("JmpBuf", 6);
    }
    return &class;
}
void lang_Exception___StackFrame___load__() {
    lang_types__Class___load__();
}

lang_Exception___StackFrameClass *lang_Exception___StackFrame_class(){
    static _Bool __done__ = false;
    static lang_Exception___StackFrameClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Exception___StackFrame),
                    .size = sizeof(lang_Exception___StackFrame)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_Exception___StackFrame___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("_StackFrame", 11);
    }
    return &class;
}
lang_Exception__StackFrame lang_Exception__StackFrame_new() {
    
    return ((lang_Exception__StackFrame) (lang_Memory__gc_malloc(((lang_types__Class*)lang_Exception___StackFrame_class())->size)));
}
void lang_Exception__StackFrame___load__() {
    lang_types__Class___load__();
}

lang_Exception__StackFrameClass *lang_Exception__StackFrame_class(){
    static _Bool __done__ = false;
    static lang_Exception__StackFrameClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Exception__StackFrame),
                    .size = sizeof(lang_Exception__StackFrame)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_Exception__StackFrame___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("StackFrame", 10);
    }
    return &class;
}
#if defined(__WIN32__) || defined(__WIN64__)
void lang_Exception__DWORD___load__() {
    lang_types__Class___load__();
}

lang_Exception__DWORDClass *lang_Exception__DWORD_class(){
    static _Bool __done__ = false;
    static lang_Exception__DWORDClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Exception__DWORD),
                    .size = sizeof(lang_Exception__DWORD)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_Exception__DWORD___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("DWORD", 5);
    }
    return &class;
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)
void lang_Exception__LPTSTR___load__() {
    lang_types__Class___load__();
}

lang_Exception__LPTSTRClass *lang_Exception__LPTSTR_class(){
    static _Bool __done__ = false;
    static lang_Exception__LPTSTRClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Exception__LPTSTR),
                    .size = sizeof(lang_Exception__LPTSTR)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_Exception__LPTSTR___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("LPTSTR", 6);
    }
    return &class;
}
#endif

void lang_Exception__Backtrace_init(lang_Exception__Backtrace* this, lang_Numbers__Int length, lang_types__Pointer* buffer) {
    this->buffer = buffer;
    this->length = length;
}

void lang_Exception__Backtrace___defaults___impl(lang_Exception__Backtrace* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void lang_Exception__Backtrace___defaults__(lang_Exception__Backtrace* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_Exception__Backtrace* lang_Exception__Backtrace_new(lang_Numbers__Int length, lang_types__Pointer* buffer) {
    
    lang_Exception__Backtrace* this = ((lang_Exception__Backtrace*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Exception__Backtrace_class())));
    lang_Exception__Backtrace___defaults__(this);
    lang_Exception__Backtrace_init((lang_Exception__Backtrace*) this, length, buffer);
    return this;
}
void lang_Exception__Backtrace___load__() {
    lang_types__Class___load__();
}

lang_Exception__BacktraceClass *lang_Exception__Backtrace_class(){
    static _Bool __done__ = false;
    static lang_Exception__BacktraceClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Exception__Backtrace),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) lang_Exception__Backtrace___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_Exception__Backtrace___load__,
            },
        },
        .new = (void*) lang_Exception__Backtrace_new,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Backtrace", 9);
    }
    return &class;
}

void lang_Exception__Exception_addBacktrace_impl(lang_Exception__Exception* this) {
    
    #if defined(__linux__)
    lang_types__Pointer backtraceBuffer = lang_Memory__gc_malloc(((lang_types__Class*)lang_types__Pointer_class())->size * lang_Exception__BACKTRACE_LENGTH);
    lang_Numbers__Int backtraceLength = lang_Exception__backtrace(backtraceBuffer, lang_Exception__BACKTRACE_LENGTH);
    lang_Exception__Backtrace* __genArg163 = lang_Exception__Backtrace_new(backtraceLength, backtraceBuffer);
    structs_LinkedList__LinkedList_add(this->backtraces, (uint8_t*) &(__genArg163));
    #endif
}

void lang_Exception__Exception_printBacktrace_impl(lang_Exception__Exception* this) {
    
    #if defined(__linux__)
    if (!structs_List__List_empty__quest((structs_List__List*) this->backtraces)) {
        lang_IO__FStream_write_str(stderr, __strLit2);
    }
    lang_types__Bool first = true;
    
    {
        lang_Exception__Backtrace* backtrace = NULL;
        
        {
            structs_LinkedList__LinkedListIterator* __iter164 = structs_LinkedList__LinkedList_iterator(this->backtraces);
            while (structs_LinkedList__LinkedListIterator_hasNext__quest(__iter164)) {
                structs_LinkedList__LinkedListIterator_next(__iter164, (uint8_t*) &(backtrace));
                if (first) {
                    first = false;
                }
                else {
                    lang_IO__FStream_write_str(stderr, __strLit169);
                }
                if (backtrace->buffer != (lang_types__Pointer*) NULL) {
                    lang_Exception__backtraceSymbolsFd(backtrace->buffer, backtrace->length, 2);
                }
            }
        }
    }
    #endif
}

void lang_Exception__Exception_init(lang_Exception__Exception* this, lang_types__Class* origin, lang_String__String* message) {
    this->message = message;
    this->origin = origin;
}

void lang_Exception__Exception_init_noOrigin(lang_Exception__Exception* this, lang_String__String* message) {
    this->message = message;
}

lang_String__String* lang_Exception__Exception_formatMessage_impl(lang_Exception__Exception* this) {
    if (this->origin) {
        struct { 
            lang_types__Pointer __f1;
            lang_Character__CString __f2;
            lang_types__Pointer __f3;
            lang_Character__CString __f4;
            lang_types__Pointer __f5;
            lang_Character__CString __f6;
        } ____va_args165 = { 
            lang_Character__CString_class(), 
            lang_String__String_toCString(((lang_types__Object*)this)->class->name), 
            lang_Character__CString_class(), 
            lang_String__String_toCString(this->origin->name), 
            lang_Character__CString_class(), 
            this->message ? lang_String__String_toCString(this->message) : lang_String__String_toCString(__strLit3)
        };
        lang_VarArgs__VarArgs ____va166 = (lang_VarArgs__VarArgs) { 
            (void*) &(____va_args165), 
            NULL, 
            3
        };
        return lang_String__String_format((lang_String__String*) __strLit4, ____va166);
    }
    else {
        struct { 
            lang_types__Pointer __f1;
            lang_Character__CString __f2;
            lang_types__Pointer __f3;
            lang_Character__CString __f4;
        } ____va_args167 = { 
            lang_Character__CString_class(), 
            lang_String__String_toCString(((lang_types__Object*)this)->class->name), 
            lang_Character__CString_class(), 
            this->message ? lang_String__String_toCString(this->message) : lang_String__String_toCString(__strLit5)
        };
        lang_VarArgs__VarArgs ____va168 = (lang_VarArgs__VarArgs) { 
            (void*) &(____va_args167), 
            NULL, 
            2
        };
        return lang_String__String_format((lang_String__String*) __strLit6, ____va168);
    }
}

void lang_Exception__Exception_print_impl(lang_Exception__Exception* this) {
    lang_IO__fprintf(stderr, lang_String____OP_AS_String__Char__star(__strLit7), lang_String__String_toCString(lang_Exception__Exception_formatMessage(this)));
    lang_Exception__Exception_printBacktrace(this);
}

void lang_Exception__Exception_throw_impl(lang_Exception__Exception* this) {
    lang_Exception___setException(this);
    lang_Exception__Exception_addBacktrace(this);
    if (!lang_Exception___hasStackFrame()) {
        lang_Exception__Exception_print(this);
        lang_Exception__abort();
    }
    else {
        lang_Exception__StackFrame frame = lang_Exception___popStackFrame();
        lang_Exception__JmpBuf_longJmp((*(frame)).buf, lang_Exception___EXCEPTION);
    }
}

void lang_Exception__Exception_rethrow_impl(lang_Exception__Exception* this) {
    lang_Exception__Exception_throw(this);
}

void lang_Exception__Exception___defaults___impl(lang_Exception__Exception* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
    this->backtraces = structs_LinkedList__LinkedList_new((lang_types__Class*)lang_Exception__Backtrace_class());
}

void lang_Exception__Exception_addBacktrace(lang_Exception__Exception* this) {
    ((lang_Exception__ExceptionClass *)((lang_types__Object *)this)->class)->addBacktrace((lang_Exception__Exception*)this);
}

void lang_Exception__Exception_printBacktrace(lang_Exception__Exception* this) {
    ((lang_Exception__ExceptionClass *)((lang_types__Object *)this)->class)->printBacktrace((lang_Exception__Exception*)this);
}

lang_String__String* lang_Exception__Exception_formatMessage(lang_Exception__Exception* this) {
    return (lang_String__String*) ((lang_Exception__ExceptionClass *)((lang_types__Object *)this)->class)->formatMessage((lang_Exception__Exception*)this);
}

void lang_Exception__Exception_print(lang_Exception__Exception* this) {
    ((lang_Exception__ExceptionClass *)((lang_types__Object *)this)->class)->print((lang_Exception__Exception*)this);
}

void lang_Exception__Exception_throw(lang_Exception__Exception* this) {
    ((lang_Exception__ExceptionClass *)((lang_types__Object *)this)->class)->throw((lang_Exception__Exception*)this);
}

void lang_Exception__Exception_rethrow(lang_Exception__Exception* this) {
    ((lang_Exception__ExceptionClass *)((lang_types__Object *)this)->class)->rethrow((lang_Exception__Exception*)this);
}

void lang_Exception__Exception___defaults__(lang_Exception__Exception* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_Exception__Exception* lang_Exception__Exception_new(lang_types__Class* origin, lang_String__String* message) {
    
    lang_Exception__Exception* this = ((lang_Exception__Exception*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Exception__Exception_class())));
    lang_Exception__Exception___defaults__(this);
    lang_Exception__Exception_init((lang_Exception__Exception*) this, origin, message);
    return this;
}
lang_Exception__Exception* lang_Exception__Exception_new_noOrigin(lang_String__String* message) {
    
    lang_Exception__Exception* this = ((lang_Exception__Exception*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Exception__Exception_class())));
    lang_Exception__Exception___defaults__(this);
    lang_Exception__Exception_init_noOrigin((lang_Exception__Exception*) this, message);
    return this;
}
void lang_Exception__Exception___load__() {
    lang_types__Class___load__();
}

lang_Exception__ExceptionClass *lang_Exception__Exception_class(){
    static _Bool __done__ = false;
    static lang_Exception__ExceptionClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_Exception__Exception),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) lang_Exception__Exception___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_Exception__Exception___load__,
            },
        },
        .addBacktrace = (void*) lang_Exception__Exception_addBacktrace_impl,
        .printBacktrace = (void*) lang_Exception__Exception_printBacktrace_impl,
        .new = (void*) lang_Exception__Exception_new,
        .new_noOrigin = (void*) lang_Exception__Exception_new_noOrigin,
        .formatMessage = (void*) lang_Exception__Exception_formatMessage_impl,
        .print = (void*) lang_Exception__Exception_print_impl,
        .throw = (void*) lang_Exception__Exception_throw_impl,
        .rethrow = (void*) lang_Exception__Exception_rethrow_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Exception", 9);
    }
    return &class;
}

void lang_Exception__OSException_init(lang_Exception__OSException* this, lang_String__String* message) {
    ((lang_Exception__Exception*)this)->message = message;
    lang_Exception__OSException_init_noOrigin((lang_Exception__OSException*) this);
}

void lang_Exception__OSException_init_noOrigin(lang_Exception__OSException* this) {
    lang_String__String* x = lang_Exception__getOSError();
    if ((((lang_Exception__Exception*)this)->message != (lang_String__String*) NULL) && (!lang_String__String_empty__quest(((lang_Exception__Exception*)this)->message))) {
        ((lang_Exception__Exception*)this)->message = lang_String__String_append_str(lang_String__String_append_char(((lang_Exception__Exception*)this)->message, ':'), x);
    }
    else {
        ((lang_Exception__Exception*)this)->message = x;
    }
}

void lang_Exception__OSException___defaults___impl(lang_Exception__OSException* this) {
    lang_Exception__Exception___defaults___impl((lang_Exception__Exception*) this);
}

void lang_Exception__OSException___defaults__(lang_Exception__OSException* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_Exception__OSException* lang_Exception__OSException_new(lang_String__String* message) {
    
    lang_Exception__OSException* this = ((lang_Exception__OSException*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Exception__OSException_class())));
    lang_Exception__OSException___defaults__(this);
    lang_Exception__OSException_init((lang_Exception__OSException*) this, message);
    return this;
}
lang_Exception__OSException* lang_Exception__OSException_new_noOrigin() {
    
    lang_Exception__OSException* this = ((lang_Exception__OSException*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Exception__OSException_class())));
    lang_Exception__OSException___defaults__(this);
    lang_Exception__OSException_init_noOrigin((lang_Exception__OSException*) this);
    return this;
}
void lang_Exception__OSException___load__() {
    lang_Exception__Exception___load__();
}

lang_Exception__OSExceptionClass *lang_Exception__OSException_class(){
    static _Bool __done__ = false;
    static lang_Exception__OSExceptionClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Exception__OSException),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) lang_Exception__OSException___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Exception__OSException___load__,
                },
            },
            .addBacktrace = (void*) lang_Exception__Exception_addBacktrace_impl,
            .printBacktrace = (void*) lang_Exception__Exception_printBacktrace_impl,
            .new = (void*) lang_Exception__OSException_new,
            .new_noOrigin = (void*) lang_Exception__OSException_new_noOrigin,
            .formatMessage = (void*) lang_Exception__Exception_formatMessage_impl,
            .print = (void*) lang_Exception__Exception_print_impl,
            .throw = (void*) lang_Exception__Exception_throw_impl,
            .rethrow = (void*) lang_Exception__Exception_rethrow_impl,
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Exception__Exception_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("OSException", 11);
    }
    return &class;
}

void lang_Exception__OutOfBoundsException_init(lang_Exception__OutOfBoundsException* this, lang_types__Class* origin, lang_Numbers__SizeT accessOffset, lang_Numbers__SizeT elementLength) {
    ((lang_Exception__Exception*)this)->origin = origin;
    lang_Exception__OutOfBoundsException_init_noOrigin((lang_Exception__OutOfBoundsException*) this, accessOffset, elementLength);
}

void lang_Exception__OutOfBoundsException_init_noOrigin(lang_Exception__OutOfBoundsException* this, lang_Numbers__SizeT accessOffset, lang_Numbers__SizeT elementLength) {
    struct { 
        lang_types__Pointer __f1;
        lang_Numbers__SizeT __f2;
        lang_types__Pointer __f3;
        lang_Numbers__SizeT __f4;
    } ____va_args170 = { 
        lang_Numbers__SizeT_class(), 
        accessOffset, 
        lang_Numbers__SizeT_class(), 
        elementLength
    };
    lang_VarArgs__VarArgs ____va171 = (lang_VarArgs__VarArgs) { 
        (void*) &(____va_args170), 
        NULL, 
        2
    };
    ((lang_Exception__Exception*)this)->message = lang_String__String_format((lang_String__String*) __strLit8, ____va171);
}

void lang_Exception__OutOfBoundsException___defaults___impl(lang_Exception__OutOfBoundsException* this) {
    lang_Exception__Exception___defaults___impl((lang_Exception__Exception*) this);
}

void lang_Exception__OutOfBoundsException___defaults__(lang_Exception__OutOfBoundsException* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_Exception__OutOfBoundsException* lang_Exception__OutOfBoundsException_new(lang_types__Class* origin, lang_Numbers__SizeT accessOffset, lang_Numbers__SizeT elementLength) {
    
    lang_Exception__OutOfBoundsException* this = ((lang_Exception__OutOfBoundsException*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Exception__OutOfBoundsException_class())));
    lang_Exception__OutOfBoundsException___defaults__(this);
    lang_Exception__OutOfBoundsException_init((lang_Exception__OutOfBoundsException*) this, origin, accessOffset, elementLength);
    return this;
}
lang_Exception__OutOfBoundsException* lang_Exception__OutOfBoundsException_new_noOrigin(lang_Numbers__SizeT accessOffset, lang_Numbers__SizeT elementLength) {
    
    lang_Exception__OutOfBoundsException* this = ((lang_Exception__OutOfBoundsException*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Exception__OutOfBoundsException_class())));
    lang_Exception__OutOfBoundsException___defaults__(this);
    lang_Exception__OutOfBoundsException_init_noOrigin((lang_Exception__OutOfBoundsException*) this, accessOffset, elementLength);
    return this;
}
void lang_Exception__OutOfBoundsException___load__() {
    lang_Exception__Exception___load__();
}

lang_Exception__OutOfBoundsExceptionClass *lang_Exception__OutOfBoundsException_class(){
    static _Bool __done__ = false;
    static lang_Exception__OutOfBoundsExceptionClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Exception__OutOfBoundsException),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) lang_Exception__OutOfBoundsException___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Exception__OutOfBoundsException___load__,
                },
            },
            .addBacktrace = (void*) lang_Exception__Exception_addBacktrace_impl,
            .printBacktrace = (void*) lang_Exception__Exception_printBacktrace_impl,
            .new = (void*) lang_Exception__OutOfBoundsException_new,
            .new_noOrigin = (void*) lang_Exception__OutOfBoundsException_new_noOrigin,
            .formatMessage = (void*) lang_Exception__Exception_formatMessage_impl,
            .print = (void*) lang_Exception__Exception_print_impl,
            .throw = (void*) lang_Exception__Exception_throw_impl,
            .rethrow = (void*) lang_Exception__Exception_rethrow_impl,
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Exception__Exception_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("OutOfBoundsException", 20);
    }
    return &class;
}

void lang_Exception__OutOfMemoryException_init(lang_Exception__OutOfMemoryException* this, lang_types__Class* origin) {
    ((lang_Exception__Exception*)this)->origin = origin;
    lang_Exception__OutOfMemoryException_init_noOrigin((lang_Exception__OutOfMemoryException*) this);
}

void lang_Exception__OutOfMemoryException_init_noOrigin(lang_Exception__OutOfMemoryException* this) {
    ((lang_Exception__Exception*)this)->message = __strLit9;
}

void lang_Exception__OutOfMemoryException___defaults___impl(lang_Exception__OutOfMemoryException* this) {
    lang_Exception__Exception___defaults___impl((lang_Exception__Exception*) this);
}

void lang_Exception__OutOfMemoryException___defaults__(lang_Exception__OutOfMemoryException* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
lang_Exception__OutOfMemoryException* lang_Exception__OutOfMemoryException_new(lang_types__Class* origin) {
    
    lang_Exception__OutOfMemoryException* this = ((lang_Exception__OutOfMemoryException*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Exception__OutOfMemoryException_class())));
    lang_Exception__OutOfMemoryException___defaults__(this);
    lang_Exception__OutOfMemoryException_init((lang_Exception__OutOfMemoryException*) this, origin);
    return this;
}
lang_Exception__OutOfMemoryException* lang_Exception__OutOfMemoryException_new_noOrigin() {
    
    lang_Exception__OutOfMemoryException* this = ((lang_Exception__OutOfMemoryException*) (lang_types__Class_alloc__class((lang_types__Class*) lang_Exception__OutOfMemoryException_class())));
    lang_Exception__OutOfMemoryException___defaults__(this);
    lang_Exception__OutOfMemoryException_init_noOrigin((lang_Exception__OutOfMemoryException*) this);
    return this;
}
void lang_Exception__OutOfMemoryException___load__() {
    lang_Exception__Exception___load__();
}

lang_Exception__OutOfMemoryExceptionClass *lang_Exception__OutOfMemoryException_class(){
    static _Bool __done__ = false;
    static lang_Exception__OutOfMemoryExceptionClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(lang_Exception__OutOfMemoryException),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) lang_Exception__OutOfMemoryException___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) lang_Exception__OutOfMemoryException___load__,
                },
            },
            .addBacktrace = (void*) lang_Exception__Exception_addBacktrace_impl,
            .printBacktrace = (void*) lang_Exception__Exception_printBacktrace_impl,
            .new = (void*) lang_Exception__OutOfMemoryException_new,
            .new_noOrigin = (void*) lang_Exception__OutOfMemoryException_new_noOrigin,
            .formatMessage = (void*) lang_Exception__Exception_formatMessage_impl,
            .print = (void*) lang_Exception__Exception_print_impl,
            .throw = (void*) lang_Exception__Exception_throw_impl,
            .rethrow = (void*) lang_Exception__Exception_rethrow_impl,
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_Exception__Exception_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("OutOfMemoryException", 20);
    }
    return &class;
}
void lang_Exception_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_BufferIterator_load();
        lang_System_load();
        lang_Character_load();
        lang_VarArgs_load();
        lang_types_load();
        lang_Iterators_load();
        lang_Memory_load();
        lang_String_load();
        lang_Buffer_load();
        lang_Numbers_load();
        lang_Abstractions_load();
        lang_Format_load();
        lang_IO_load();
        threading_Thread_load();
        structs_Stack_load();
        structs_LinkedList_load();
        native_win32_errors_load();
        lang_Exception__JmpBuf___load__();
        lang_Exception___StackFrame___load__();
        lang_Exception__StackFrame___load__();
        #if defined(__WIN32__) || defined(__WIN64__)
        lang_Exception__DWORD___load__();
        #endif
        #if defined(__WIN32__) || defined(__WIN64__)
        lang_Exception__LPTSTR___load__();
        #endif
        lang_Exception__Backtrace___load__();
        lang_Exception__Exception___load__();
        lang_Exception__OSException___load__();
        lang_Exception__OutOfBoundsException___load__();
        lang_Exception__OutOfMemoryException___load__();
        __strLit169 = (void*) lang_String__makeStringLiteral("[backtrace]\n", 12);
        __strLit10 = (void*) lang_String__makeStringLiteral("", 0);
        __strLit9 = (void*) lang_String__makeStringLiteral("Failed to allocate more memory!", 31);
        __strLit8 = (void*) lang_String__makeStringLiteral("Trying to access an element at offset %d, but size is only %d!", 62);
        __strLit7 = (void*) lang_String__makeStringLiteral("%s", 2);
        __strLit6 = (void*) lang_String__makeStringLiteral("[%s]: %s\n", 9);
        __strLit5 = (void*) lang_String__makeStringLiteral("<no message>", 12);
        __strLit4 = (void*) lang_String__makeStringLiteral("[%s in %s]: %s\n", 15);
        __strLit3 = (void*) lang_String__makeStringLiteral("<no message>", 12);
        __strLit2 = (void*) lang_String__makeStringLiteral("[backtrace]\n", 12);
        lang_Exception__BACKTRACE_LENGTH = 20;
        lang_Exception__exceptionStack = threading_Thread__ThreadLocal_new((lang_types__Class*)structs_Stack__Stack_class());
        lang_Exception___exception = threading_Thread__ThreadLocal_new((lang_types__Class*)lang_Exception__Exception_class());
        lang_Exception___EXCEPTION = 1;
        
        #if defined(__WIN32__) || defined(__WIN64__)
        ;
        #endif
        
        #if defined(__WIN32__) || defined(__WIN64__)
        ;
        #endif
        
        #if defined(__WIN32__) || defined(__WIN64__)
        ;
        #endif
        
        #if !(defined(__WIN32__) || defined(__WIN64__))
        ;
        #endif
    }
}


lang_Exception__StackFrame lang_Exception___pushStackFrame() {
    structs_Stack__Stack* stack = NULL;
    if (!threading_Thread__ThreadLocal_hasValue__quest(lang_Exception__exceptionStack)) {
        stack = structs_Stack__Stack_new((lang_types__Class*)lang_Exception__StackFrame_class());
        threading_Thread__ThreadLocal_set(lang_Exception__exceptionStack, (uint8_t*) &(stack));
    }
    else {
        threading_Thread__ThreadLocal_get(lang_Exception__exceptionStack, (uint8_t*) &(stack));
    }
    lang_Exception__StackFrame buf = lang_Exception__StackFrame_new();
    structs_Stack__Stack_push(stack, (uint8_t*) &(buf));
    return buf;
}

void lang_Exception___setException(lang_Exception__Exception* e) {
    threading_Thread__ThreadLocal_set(lang_Exception___exception, (uint8_t*) &(e));
}

lang_Exception__Exception* lang_Exception___getException() {
    lang_Exception__Exception* __genCall252 = NULL;
    return (threading_Thread__ThreadLocal_get(lang_Exception___exception, (uint8_t*) &(__genCall252)), __genCall252);
}

lang_Exception__StackFrame lang_Exception___popStackFrame() {
    structs_Stack__Stack* __genCall172 = NULL;
    lang_Exception__StackFrame __genCall173;
    return ((lang_Exception__StackFrame) ((structs_Stack__Stack_pop(((structs_Stack__Stack*) ((threading_Thread__ThreadLocal_get(lang_Exception__exceptionStack, (uint8_t*) &(__genCall172)), __genCall172))), (uint8_t*) &(__genCall173)), __genCall173)));
}

lang_types__Bool lang_Exception___hasStackFrame() {
    structs_Stack__Stack* __genCall174 = NULL;
    return threading_Thread__ThreadLocal_hasValue__quest(lang_Exception__exceptionStack) && structs_Stack__Stack___getsize__(((structs_Stack__Stack*) ((threading_Thread__ThreadLocal_get(lang_Exception__exceptionStack, (uint8_t*) &(__genCall174)), __genCall174)))) > 0;
}
#if defined(__WIN32__) || defined(__WIN64__)

lang_Numbers__Int lang_Exception__getOSErrorCode() {
    return native_win32_errors__GetLastError();
}
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))

lang_Numbers__Int lang_Exception__getOSErrorCode() {
    return errno;
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)

lang_String__String* lang_Exception__getOSError() {
    lang_Exception__DWORD err = native_win32_errors__GetLastError();
    lang_Numbers__SSizeT BUF_SIZE = 256;
    lang_Buffer__Buffer* buf = lang_Buffer__Buffer_new(BUF_SIZE);
    lang_Numbers__SSizeT len = lang_Exception__FormatMessage(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS | FORMAT_MESSAGE_ARGUMENT_ARRAY, NULL, err, 0, ((lang_Character__CString) (buf->data)), BUF_SIZE, NULL);
    lang_Buffer__Buffer_setLength(buf, len);
    while ((len > 0) && (((lang_Numbers__Octet) (lang_Buffer____OP_IDX_Buffer_SSizeT__Char(buf, len - 1))) < (lang_Numbers__Octet) 32)) {
        len -= 1;
    }
    lang_Buffer__Buffer_setLength(buf, len);
    return lang_Buffer__Buffer_toString(buf);
}
#endif
#if !(defined(__WIN32__) || defined(__WIN64__))

lang_String__String* lang_Exception__getOSError() {
    lang_Character__CString x = lang_Exception__strerror(errno);
    return (x != (lang_Character__CString) NULL) ? lang_Character__CString_toString(x) : __strLit10;
}
#endif

void lang_Exception__raise(lang_String__String* msg) {
    lang_Exception__Exception_throw(lang_Exception__Exception_new_noOrigin(msg));
}

void lang_Exception__raise_withClass(lang_types__Class* clazz, lang_String__String* msg) {
    lang_Exception__Exception_throw(lang_Exception__Exception_new(clazz, msg));
}
