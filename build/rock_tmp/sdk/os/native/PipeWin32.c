/* os/native/PipeWin32 source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/os/native/PipeWin32.h>
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
#include <sdk/native/win32/types.h>
#include <sdk/native/win32/errors.h>

static lang_String__String* __strLit161;
static lang_String__String* __strLit160;
static lang_String__String* __strLit159;
#if defined(__WIN32__) || defined(__WIN64__)
void os_native_PipeWin32__SecurityAttributes___load__() {
    lang_types__Class___load__();
}

os_native_PipeWin32__SecurityAttributesClass *os_native_PipeWin32__SecurityAttributes_class(){
    static _Bool __done__ = false;
    static os_native_PipeWin32__SecurityAttributesClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(os_native_PipeWin32__SecurityAttributes),
                    .size = sizeof(os_native_PipeWin32__SecurityAttributes)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) os_native_PipeWin32__SecurityAttributes___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("SecurityAttributes", 18);
    }
    return &class;
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)

void os_native_PipeWin32__PipeWin32_init_twos(os_native_PipeWin32__PipeWin32* this) {
    os_native_PipeWin32__SecurityAttributes saAttr;
    saAttr.nLength = ((lang_types__Class*)os_native_PipeWin32__SecurityAttributes_class())->size;
    saAttr.bInheritHandle = true;
    saAttr.lpSecurityDescriptor = (void*) NULL;
    if (!os_native_PipeWin32__CreatePipe(&(this->readFD), &(this->writeFD), &(saAttr), 0)) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (os_native_PipeWin32__PipeWin32_class()), __strLit159));
    }
}

lang_types__Pointer os_native_PipeWin32__PipeWin32_read_impl(os_native_PipeWin32__PipeWin32* this, lang_Numbers__Int bytesRequested) {
    lang_Numbers__Long howmuch;
    lang_Numbers__Long totalBytesAvail;
    if (!os_native_PipeWin32__PeekNamedPipe(this->readFD, NULL, 0, NULL, &(totalBytesAvail), NULL)) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (os_native_PipeWin32__PipeWin32_class()), __strLit160));
    }
    if (totalBytesAvail == (lang_Numbers__Long) 0) {
        return NULL;
    }
    lang_Numbers__Int bytesAsked = totalBytesAvail > (lang_Numbers__Long) bytesRequested ? bytesRequested : totalBytesAvail;
    lang_Buffer__Buffer* buffer = lang_Buffer__Buffer_new(bytesAsked + 1);
    lang_Numbers__Long bytesRead;
    if (!os_native_PipeWin32__ReadFile(this->readFD, buffer->data, bytesAsked, &(bytesRead), NULL)) {
        if (native_win32_errors__GetLastError() == ERROR_HANDLE_EOF) {
            return NULL;
        }
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (os_native_PipeWin32__PipeWin32_class()), __strLit161));
    }
    lang_Buffer__Buffer_setLength(buffer, bytesRead);
    return ((lang_types__Pointer) (buffer->data));
}

lang_Numbers__Int os_native_PipeWin32__PipeWin32_write_impl(os_native_PipeWin32__PipeWin32* this, lang_types__Pointer data, lang_Numbers__Int len) {
    return ((lang_Numbers__Int) (os_native_PipeWin32__WriteFile(this->writeFD, data, ((lang_Numbers__Long) (len)), NULL, NULL) == (lang_types__Bool) 0 ? 1 : 0));
}

lang_Numbers__Int os_native_PipeWin32__PipeWin32_close_impl(os_native_PipeWin32__PipeWin32* this, lang_Character__Char mode) {
    lang_Numbers__SSizeT __match162;
    if (mode == 'r'){
        __match162 = os_native_PipeWin32__CloseHandle(this->readFD) ? 1 : 0;
    } else if (mode == 'w'){
        __match162 = os_native_PipeWin32__CloseHandle(this->writeFD) ? 1 : 0;
    } else {
        __match162 = 0;
    };
    return ((lang_Numbers__Int) (__match162));
}

void os_native_PipeWin32__PipeWin32___defaults___impl(os_native_PipeWin32__PipeWin32* this) {
    os_Pipe__Pipe___defaults___impl((os_Pipe__Pipe*) this);
    this->readFD = 0;
    this->writeFD = 0;
}

lang_types__Pointer os_native_PipeWin32__PipeWin32_read(os_native_PipeWin32__PipeWin32* this, lang_Numbers__Int bytesRequested) {
    return (lang_types__Pointer) ((os_Pipe__PipeClass *)((lang_types__Object *)this)->class)->read((os_Pipe__Pipe*)this, bytesRequested);
}

lang_Numbers__Int os_native_PipeWin32__PipeWin32_write(os_native_PipeWin32__PipeWin32* this, lang_types__Pointer data, lang_Numbers__Int len) {
    return (lang_Numbers__Int) ((os_Pipe__PipeClass *)((lang_types__Object *)this)->class)->write((os_Pipe__Pipe*)this, data, len);
}

lang_Numbers__Int os_native_PipeWin32__PipeWin32_close(os_native_PipeWin32__PipeWin32* this, lang_Character__Char mode) {
    return (lang_Numbers__Int) ((os_Pipe__PipeClass *)((lang_types__Object *)this)->class)->close((os_Pipe__Pipe*)this, mode);
}

void os_native_PipeWin32__PipeWin32___defaults__(os_native_PipeWin32__PipeWin32* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
os_native_PipeWin32__PipeWin32* os_native_PipeWin32__PipeWin32_new_twos() {
    
    os_native_PipeWin32__PipeWin32* this = ((os_native_PipeWin32__PipeWin32*) (lang_types__Class_alloc__class((lang_types__Class*) os_native_PipeWin32__PipeWin32_class())));
    os_native_PipeWin32__PipeWin32___defaults__(this);
    os_native_PipeWin32__PipeWin32_init_twos((os_native_PipeWin32__PipeWin32*) this);
    return this;
}
void os_native_PipeWin32__PipeWin32___load__() {
    os_Pipe__Pipe___load__();
}

os_native_PipeWin32__PipeWin32Class *os_native_PipeWin32__PipeWin32_class(){
    static _Bool __done__ = false;
    static os_native_PipeWin32__PipeWin32Class class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(os_native_PipeWin32__PipeWin32),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) os_native_PipeWin32__PipeWin32___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) os_native_PipeWin32__PipeWin32___load__,
                },
            },
            .new = (void*) os_Pipe__Pipe_new,
            .read = (void*) os_native_PipeWin32__PipeWin32_read_impl,
            .write_string = (void*) os_Pipe__Pipe_write_string_impl,
            .write = (void*) os_native_PipeWin32__PipeWin32_write_impl,
            .close = (void*) os_native_PipeWin32__PipeWin32_close_impl,
        },
        .new_twos = (void*) os_native_PipeWin32__PipeWin32_new_twos,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) os_Pipe__Pipe_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("PipeWin32", 9);
    }
    return &class;
}
#endif
void os_native_PipeWin32_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Exception_load();
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
        os_Pipe_load();
        native_win32_types_load();
        native_win32_errors_load();
        #if defined(__WIN32__) || defined(__WIN64__)
        os_native_PipeWin32__SecurityAttributes___load__();
        #endif
        #if defined(__WIN32__) || defined(__WIN64__)
        os_native_PipeWin32__PipeWin32___load__();
        #endif
        __strLit161 = (void*) lang_String__makeStringLiteral("Couldn't read pipe", 18);
        __strLit160 = (void*) lang_String__makeStringLiteral("Couldn't peek pipe", 18);
        __strLit159 = (void*) lang_String__makeStringLiteral("Couldn't create pipes", 21);
    }
}

