/* io/FileWriter source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/io/FileWriter.h>
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
#include <sdk/io/File.h>
#include <sdk/os/Pipe.h>
#include <sdk/os/native/PipeUnix.h>

static lang_String__String* __strLit123;
static lang_String__String* __strLit122;
static lang_String__String* __strLit121;
static lang_String__String* __strLit120;
static lang_String__String* __strLit119;
static lang_String__String* __strLit118;
static lang_String__String* __strLit117;

void io_FileWriter__FileWriter_init_withFile(io_FileWriter__FileWriter* this, io_File__File* fileObject, lang_types__Bool append) {
    io_FileWriter__FileWriter_init_withName((io_FileWriter__FileWriter*) this, io_File__File_getPath(fileObject), append);
}

void io_FileWriter__FileWriter_init_withFileOverwrite(io_FileWriter__FileWriter* this, io_File__File* fileObject) {
    io_FileWriter__FileWriter_init_withFile((io_FileWriter__FileWriter*) this, fileObject, false);
}

void io_FileWriter__FileWriter_init_withFileAndFlags(io_FileWriter__FileWriter* this, io_File__File* fileObject, lang_Numbers__Int flags) {
    io_FileWriter__FileWriter_init_withModeAndFlags((io_FileWriter__FileWriter*) this, io_File__File_getPath(fileObject), __strLit117, flags);
}

void io_FileWriter__FileWriter_init_withName(io_FileWriter__FileWriter* this, lang_String__String* fileName, lang_types__Bool append) {
    io_FileWriter__FileWriter_init_withMode((io_FileWriter__FileWriter*) this, fileName, append ? __strLit118 : __strLit119);
}

void io_FileWriter__FileWriter_init_withMode(io_FileWriter__FileWriter* this, lang_String__String* fileName, lang_String__String* mode) {
    this->file = lang_IO__FStream_open(fileName, mode);
    if (!this->file) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (io_FileWriter__FileWriter_class()), lang_String____OP_ADD_String_String__String(__strLit120, fileName)));
    }
}

void io_FileWriter__FileWriter_init_withModeAndFlags(io_FileWriter__FileWriter* this, lang_String__String* fileName, lang_String__String* mode, lang_Numbers__Int flags) {
    this->file = lang_IO__FStream_open_withFlags(fileName, mode, flags);
    if (!this->file) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (io_FileWriter__FileWriter_class()), lang_String____OP_ADD_String_String__String(__strLit121, fileName)));
    }
}

void io_FileWriter__FileWriter_init_withFStream(io_FileWriter__FileWriter* this, lang_IO__FStream file) {
    this->file = file;
}

void io_FileWriter__FileWriter_init_withNameOverwrite(io_FileWriter__FileWriter* this, lang_String__String* fileName) {
    io_FileWriter__FileWriter_init_withName((io_FileWriter__FileWriter*) this, fileName, false);
}

lang_Numbers__SizeT io_FileWriter__FileWriter_write_impl(io_FileWriter__FileWriter* this, lang_Character__Char* bytes, lang_Numbers__SizeT length) {
    return lang_IO__FStream_write_precise(this->file, bytes, 0, length);
}

void io_FileWriter__FileWriter_write_chr_impl(io_FileWriter__FileWriter* this, lang_Character__Char chr) {
    lang_IO__FStream_write_chr(this->file, chr);
}

void io_FileWriter__FileWriter_close_impl(io_FileWriter__FileWriter* this) {
    lang_IO__FStream_close(this->file);
}

os_Pipe__Pipe* io_FileWriter__FileWriter_asPipe_impl(io_FileWriter__FileWriter* this) {
    
    #if ((defined(__unix__)) || (defined(__APPLE__)))
    return ((os_Pipe__Pipe*) (os_native_PipeUnix__PipeUnix_new_withFDs(-1, lang_IO__FStream_no(this->file))));
    #endif
    
    #if !(((defined(__unix__)) || (defined(__APPLE__))))
    lang_Exception__Exception_throw(lang_Exception__Exception_new_noOrigin(__strLit123));
    #endif
    return ((os_Pipe__Pipe*) (NULL));
}

void io_FileWriter__FileWriter___defaults___impl(io_FileWriter__FileWriter* this) {
    io_Writer__Writer___defaults___impl((io_Writer__Writer*) this);
}

lang_Numbers__SizeT io_FileWriter__FileWriter_write(io_FileWriter__FileWriter* this, lang_Character__Char* bytes, lang_Numbers__SizeT length) {
    return (lang_Numbers__SizeT) ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write((io_Writer__Writer*)this, bytes, length);
}

void io_FileWriter__FileWriter_write_chr(io_FileWriter__FileWriter* this, lang_Character__Char chr) {
    ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write_chr((io_Writer__Writer*)this, chr);
}

void io_FileWriter__FileWriter_close(io_FileWriter__FileWriter* this) {
    ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->close((io_Writer__Writer*)this);
}

os_Pipe__Pipe* io_FileWriter__FileWriter_asPipe(io_FileWriter__FileWriter* this) {
    return (os_Pipe__Pipe*) ((io_FileWriter__FileWriterClass *)((lang_types__Object *)this)->class)->asPipe((io_FileWriter__FileWriter*)this);
}

void io_FileWriter__FileWriter___defaults__(io_FileWriter__FileWriter* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
io_FileWriter__FileWriter* io_FileWriter__FileWriter_new_withFile(io_File__File* fileObject, lang_types__Bool append) {
    
    io_FileWriter__FileWriter* this = ((io_FileWriter__FileWriter*) (lang_types__Class_alloc__class((lang_types__Class*) io_FileWriter__FileWriter_class())));
    io_FileWriter__FileWriter___defaults__(this);
    io_FileWriter__FileWriter_init_withFile((io_FileWriter__FileWriter*) this, fileObject, append);
    return this;
}
io_FileWriter__FileWriter* io_FileWriter__FileWriter_new_withFileOverwrite(io_File__File* fileObject) {
    
    io_FileWriter__FileWriter* this = ((io_FileWriter__FileWriter*) (lang_types__Class_alloc__class((lang_types__Class*) io_FileWriter__FileWriter_class())));
    io_FileWriter__FileWriter___defaults__(this);
    io_FileWriter__FileWriter_init_withFileOverwrite((io_FileWriter__FileWriter*) this, fileObject);
    return this;
}
io_FileWriter__FileWriter* io_FileWriter__FileWriter_new_withFileAndFlags(io_File__File* fileObject, lang_Numbers__Int flags) {
    
    io_FileWriter__FileWriter* this = ((io_FileWriter__FileWriter*) (lang_types__Class_alloc__class((lang_types__Class*) io_FileWriter__FileWriter_class())));
    io_FileWriter__FileWriter___defaults__(this);
    io_FileWriter__FileWriter_init_withFileAndFlags((io_FileWriter__FileWriter*) this, fileObject, flags);
    return this;
}
io_FileWriter__FileWriter* io_FileWriter__FileWriter_new_withName(lang_String__String* fileName, lang_types__Bool append) {
    
    io_FileWriter__FileWriter* this = ((io_FileWriter__FileWriter*) (lang_types__Class_alloc__class((lang_types__Class*) io_FileWriter__FileWriter_class())));
    io_FileWriter__FileWriter___defaults__(this);
    io_FileWriter__FileWriter_init_withName((io_FileWriter__FileWriter*) this, fileName, append);
    return this;
}
io_FileWriter__FileWriter* io_FileWriter__FileWriter_new_withMode(lang_String__String* fileName, lang_String__String* mode) {
    
    io_FileWriter__FileWriter* this = ((io_FileWriter__FileWriter*) (lang_types__Class_alloc__class((lang_types__Class*) io_FileWriter__FileWriter_class())));
    io_FileWriter__FileWriter___defaults__(this);
    io_FileWriter__FileWriter_init_withMode((io_FileWriter__FileWriter*) this, fileName, mode);
    return this;
}
io_FileWriter__FileWriter* io_FileWriter__FileWriter_new_withModeAndFlags(lang_String__String* fileName, lang_String__String* mode, lang_Numbers__Int flags) {
    
    io_FileWriter__FileWriter* this = ((io_FileWriter__FileWriter*) (lang_types__Class_alloc__class((lang_types__Class*) io_FileWriter__FileWriter_class())));
    io_FileWriter__FileWriter___defaults__(this);
    io_FileWriter__FileWriter_init_withModeAndFlags((io_FileWriter__FileWriter*) this, fileName, mode, flags);
    return this;
}
io_FileWriter__FileWriter* io_FileWriter__FileWriter_new_withFStream(lang_IO__FStream file) {
    
    io_FileWriter__FileWriter* this = ((io_FileWriter__FileWriter*) (lang_types__Class_alloc__class((lang_types__Class*) io_FileWriter__FileWriter_class())));
    io_FileWriter__FileWriter___defaults__(this);
    io_FileWriter__FileWriter_init_withFStream((io_FileWriter__FileWriter*) this, file);
    return this;
}
io_FileWriter__FileWriter* io_FileWriter__FileWriter_new_withNameOverwrite(lang_String__String* fileName) {
    
    io_FileWriter__FileWriter* this = ((io_FileWriter__FileWriter*) (lang_types__Class_alloc__class((lang_types__Class*) io_FileWriter__FileWriter_class())));
    io_FileWriter__FileWriter___defaults__(this);
    io_FileWriter__FileWriter_init_withNameOverwrite((io_FileWriter__FileWriter*) this, fileName);
    return this;
}
io_FileWriter__FileWriter* io_FileWriter__FileWriter_createTempFile(lang_String__String* pattern, lang_String__String* mode) {
    
    
    #if !(defined(__WIN32__) || defined(__WIN64__))
    return io_FileWriter__FileWriter_new_withFStream(lang_IO__fdopen(lang_IO__mkstemp(lang_String____OP_AS_String__Char__star(pattern)), lang_String____OP_AS_String__Char__star(mode)));
    #endif
    
    #if defined(__WIN32__) || defined(__WIN64__)
    io_FileWriter__FileWriter_new_withMode(lang_Character__CString_toString(lang_IO__mktemp(lang_String____OP_AS_String__Char__star(pattern))), mode);
    #endif
    lang_Exception__Exception_throw(lang_Exception__Exception_new_noOrigin(__strLit122));
    return ((io_FileWriter__FileWriter*) (NULL));
}
void io_FileWriter__FileWriter___load__() {
    io_Writer__Writer___load__();
}

io_FileWriter__FileWriterClass *io_FileWriter__FileWriter_class(){
    static _Bool __done__ = false;
    static io_FileWriter__FileWriterClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(io_FileWriter__FileWriter),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) io_FileWriter__FileWriter___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) io_FileWriter__FileWriter___load__,
                },
            },
            .write_chr = (void*) io_FileWriter__FileWriter_write_chr_impl,
            .write = (void*) io_FileWriter__FileWriter_write_impl,
            .write_implicitLength = (void*) io_Writer__Writer_write_implicitLength_impl,
            .write_bufImplicitLength = (void*) io_Writer__Writer_write_bufImplicitLength_impl,
            .write_strGivenLength = (void*) io_Writer__Writer_write_strGivenLength_impl,
            .write_fromReader = (void*) io_Writer__Writer_write_fromReader_impl,
            .write_fromReaderDefaultBufferSize = (void*) io_Writer__Writer_write_fromReaderDefaultBufferSize_impl,
            .close = (void*) io_FileWriter__FileWriter_close_impl,
        },
        .new_withFile = (void*) io_FileWriter__FileWriter_new_withFile,
        .new_withFileOverwrite = (void*) io_FileWriter__FileWriter_new_withFileOverwrite,
        .new_withFileAndFlags = (void*) io_FileWriter__FileWriter_new_withFileAndFlags,
        .new_withName = (void*) io_FileWriter__FileWriter_new_withName,
        .new_withMode = (void*) io_FileWriter__FileWriter_new_withMode,
        .new_withModeAndFlags = (void*) io_FileWriter__FileWriter_new_withModeAndFlags,
        .new_withFStream = (void*) io_FileWriter__FileWriter_new_withFStream,
        .new_withNameOverwrite = (void*) io_FileWriter__FileWriter_new_withNameOverwrite,
        .createTempFile = (void*) io_FileWriter__FileWriter_createTempFile,
        .asPipe = (void*) io_FileWriter__FileWriter_asPipe_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) io_Writer__Writer_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("FileWriter", 10);
    }
    return &class;
}
void io_FileWriter_load() {
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
        io_Writer_load();
        io_File_load();
        os_Pipe_load();
        os_native_PipeUnix_load();
        io_FileWriter__FileWriter___load__();
        __strLit123 = (void*) lang_String__makeStringLiteral("FileWriter asPipe() is not supported on your platform", 53);
        __strLit122 = (void*) lang_String__makeStringLiteral("FileWriter createTempFile() is unsupported on your os", 53);
        __strLit121 = (void*) lang_String__makeStringLiteral("File not found: ", 16);
        __strLit120 = (void*) lang_String__makeStringLiteral("File not found: ", 16);
        __strLit119 = (void*) lang_String__makeStringLiteral("wb", 2);
        __strLit118 = (void*) lang_String__makeStringLiteral("ab", 2);
        __strLit117 = (void*) lang_String__makeStringLiteral("wb", 2);
    }
}

