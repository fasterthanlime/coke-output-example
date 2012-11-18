/* os/native/PipeUnix source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/os/native/PipeUnix.h>
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
#include <sdk/os/unistd.h>
#include <sdk/os/FileDescriptor.h>

static lang_String__String* __strLit157;
static lang_String__String* __strLit156;
static lang_String__String* __strLit155;
#if ((defined(__unix__)) || (defined(__APPLE__)))

void os_native_PipeUnix__PipeUnix_init_withFDs(os_native_PipeUnix__PipeUnix* this, os_FileDescriptor__FileDescriptor readFD, os_FileDescriptor__FileDescriptor writeFD) {
    this->writeFD = writeFD;
    this->readFD = readFD;
    if (readFD == (os_FileDescriptor__FileDescriptor) -1 && writeFD == (os_FileDescriptor__FileDescriptor) -1) {
        os_Pipe__Pipe_init((os_Pipe__Pipe*) this);
        return;
    }
    if (readFD == (os_FileDescriptor__FileDescriptor) -1) {
        lang_Numbers__Int* fds = ((lang_Numbers__Int*) ((lang_Numbers__SSizeT[]) { -1 }));
        os_unistd__pipe(fds);
        this->readFD = fds[0];
        if (os_unistd__pipe(fds) < (lang_Numbers__Int) 0) {
            lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (os_native_PipeUnix__PipeUnix_class()), __strLit155));
        }
    }
    if (writeFD == (os_FileDescriptor__FileDescriptor) -1) {
        lang_Numbers__Int* fds = ((lang_Numbers__Int*) ((lang_Numbers__SSizeT[]) { -1 }));
        os_unistd__pipe(fds);
        this->writeFD = fds[0];
        if (os_unistd__pipe(fds) < (lang_Numbers__Int) 0) {
            lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (os_native_PipeUnix__PipeUnix_class()), __strLit156));
        }
    }
}

void os_native_PipeUnix__PipeUnix_init_twos(os_native_PipeUnix__PipeUnix* this) {
    lang_Numbers__Int* fds = ((lang_Numbers__Int*) ((lang_Numbers__SSizeT[]) { -1, -1 }));
    if (os_unistd__pipe(fds) < (lang_Numbers__Int) 0) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (os_native_PipeUnix__PipeUnix_class()), __strLit157));
    }
    this->readFD = fds[0];
    this->writeFD = fds[1];
}

lang_types__Pointer os_native_PipeUnix__PipeUnix_read_impl(os_native_PipeUnix__PipeUnix* this, lang_Numbers__Int len) {
    lang_Character__Char* buf = ((lang_Character__Char*) (lang_Memory__gc_malloc(len + 1)));
    lang_Numbers__Int howmuch = os_FileDescriptor__FileDescriptor_read(this->readFD, buf, len);
    buf[howmuch] = '\0';
    return ((lang_types__Pointer) (buf));
}

lang_Numbers__Int os_native_PipeUnix__PipeUnix_write_impl(os_native_PipeUnix__PipeUnix* this, lang_types__Pointer data, lang_Numbers__Int len) {
    return os_FileDescriptor__FileDescriptor_write(this->writeFD, data, len);
}

lang_Numbers__Int os_native_PipeUnix__PipeUnix_close_impl(os_native_PipeUnix__PipeUnix* this, lang_Character__Char mode) {
    lang_Numbers__Int __match158;
    if (mode == 'r'){
        __match158 = os_FileDescriptor__FileDescriptor_close(this->readFD);
    } else if (mode == 'w'){
        __match158 = os_FileDescriptor__FileDescriptor_close(this->writeFD);
    } else {
        __match158 = 0;
    };
    return __match158;
}

void os_native_PipeUnix__PipeUnix___defaults___impl(os_native_PipeUnix__PipeUnix* this) {
    os_Pipe__Pipe___defaults___impl((os_Pipe__Pipe*) this);
}

lang_types__Pointer os_native_PipeUnix__PipeUnix_read(os_native_PipeUnix__PipeUnix* this, lang_Numbers__Int len) {
    return (lang_types__Pointer) ((os_Pipe__PipeClass *)((lang_types__Object *)this)->class)->read((os_Pipe__Pipe*)this, len);
}

lang_Numbers__Int os_native_PipeUnix__PipeUnix_write(os_native_PipeUnix__PipeUnix* this, lang_types__Pointer data, lang_Numbers__Int len) {
    return (lang_Numbers__Int) ((os_Pipe__PipeClass *)((lang_types__Object *)this)->class)->write((os_Pipe__Pipe*)this, data, len);
}

lang_Numbers__Int os_native_PipeUnix__PipeUnix_close(os_native_PipeUnix__PipeUnix* this, lang_Character__Char mode) {
    return (lang_Numbers__Int) ((os_Pipe__PipeClass *)((lang_types__Object *)this)->class)->close((os_Pipe__Pipe*)this, mode);
}

void os_native_PipeUnix__PipeUnix___defaults__(os_native_PipeUnix__PipeUnix* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
os_native_PipeUnix__PipeUnix* os_native_PipeUnix__PipeUnix_new_withFDs(os_FileDescriptor__FileDescriptor readFD, os_FileDescriptor__FileDescriptor writeFD) {
    
    os_native_PipeUnix__PipeUnix* this = ((os_native_PipeUnix__PipeUnix*) (lang_types__Class_alloc__class((lang_types__Class*) os_native_PipeUnix__PipeUnix_class())));
    os_native_PipeUnix__PipeUnix___defaults__(this);
    os_native_PipeUnix__PipeUnix_init_withFDs((os_native_PipeUnix__PipeUnix*) this, readFD, writeFD);
    return this;
}
os_native_PipeUnix__PipeUnix* os_native_PipeUnix__PipeUnix_new_twos() {
    
    os_native_PipeUnix__PipeUnix* this = ((os_native_PipeUnix__PipeUnix*) (lang_types__Class_alloc__class((lang_types__Class*) os_native_PipeUnix__PipeUnix_class())));
    os_native_PipeUnix__PipeUnix___defaults__(this);
    os_native_PipeUnix__PipeUnix_init_twos((os_native_PipeUnix__PipeUnix*) this);
    return this;
}
void os_native_PipeUnix__PipeUnix___load__() {
    os_Pipe__Pipe___load__();
}

os_native_PipeUnix__PipeUnixClass *os_native_PipeUnix__PipeUnix_class(){
    static _Bool __done__ = false;
    static os_native_PipeUnix__PipeUnixClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(os_native_PipeUnix__PipeUnix),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) os_native_PipeUnix__PipeUnix___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) os_native_PipeUnix__PipeUnix___load__,
                },
            },
            .new = (void*) os_Pipe__Pipe_new,
            .read = (void*) os_native_PipeUnix__PipeUnix_read_impl,
            .write_string = (void*) os_Pipe__Pipe_write_string_impl,
            .write = (void*) os_native_PipeUnix__PipeUnix_write_impl,
            .close = (void*) os_native_PipeUnix__PipeUnix_close_impl,
        },
        .new_withFDs = (void*) os_native_PipeUnix__PipeUnix_new_withFDs,
        .new_twos = (void*) os_native_PipeUnix__PipeUnix_new_twos,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) os_Pipe__Pipe_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("PipeUnix", 8);
    }
    return &class;
}
#endif
void os_native_PipeUnix_load() {
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
        os_unistd_load();
        os_FileDescriptor_load();
        os_Pipe_load();
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        os_native_PipeUnix__PipeUnix___load__();
        #endif
        __strLit157 = (void*) lang_String__makeStringLiteral("Couldn't create pipes", 21);
        __strLit156 = (void*) lang_String__makeStringLiteral("Couldn't create pipe", 20);
        __strLit155 = (void*) lang_String__makeStringLiteral("Couldn't create pipe", 20);
    }
}

