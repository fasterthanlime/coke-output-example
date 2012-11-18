/* io/FileReader source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/io/FileReader.h>
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

static lang_String__String* __strLit132;
static lang_String__String* __strLit131;
static lang_String__String* __strLit130;

void io_FileReader__FileReader_init_withFile(io_FileReader__FileReader* this, io_File__File* fileObject) {
    io_FileReader__FileReader_init_withName((io_FileReader__FileReader*) this, io_File__File_getPath(fileObject));
}

void io_FileReader__FileReader_init_withName(io_FileReader__FileReader* this, lang_String__String* fileName) {
    io_FileReader__FileReader_init_withMode((io_FileReader__FileReader*) this, fileName, __strLit130);
}

void io_FileReader__FileReader_init_withMode(io_FileReader__FileReader* this, lang_String__String* fileName, lang_String__String* mode) {
    this->fileName = fileName;
    this->file = lang_IO__FStream_open(fileName, mode);
    if (!this->file) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (io_FileReader__FileReader_class()), lang_String____OP_ADD_String_String__String(lang_String____OP_ADD_String_String__String(__strLit131, fileName), __strLit132)));
    }
}

void io_FileReader__FileReader_init_fromFStream(io_FileReader__FileReader* this, lang_IO__FStream file) {
    this->file = file;
}

lang_Numbers__SizeT io_FileReader__FileReader_read_impl(io_FileReader__FileReader* this, lang_types__Pointer buffer, lang_Numbers__Int offset, lang_Numbers__SizeT count) {
    return lang_IO__FStream_read(this->file, (((lang_Character__Char*) (buffer))) + offset, count);
}

void io_FileReader__FileReader_read_fullBuffer_impl(io_FileReader__FileReader* this, lang_Buffer__Buffer* buffer) {
    lang_Numbers__SizeT count = lang_IO__FStream_read(this->file, buffer->data, buffer->capacity);
    buffer->size = count;
}

lang_Character__Char io_FileReader__FileReader_read_char_impl(io_FileReader__FileReader* this) {
    return lang_IO__FStream_readChar(this->file);
}

lang_types__Bool io_FileReader__FileReader_hasNext__quest_impl(io_FileReader__FileReader* this) {
    return lang_IO__feof(this->file) == (lang_Numbers__Int) 0;
}

lang_types__Bool io_FileReader__FileReader_rewind_impl(io_FileReader__FileReader* this, lang_Numbers__Int offset) {
    return lang_IO__FStream_seek(this->file, -offset, SEEK_CUR) == (lang_Numbers__Int) 0;
}

lang_Numbers__Long io_FileReader__FileReader_mark_impl(io_FileReader__FileReader* this) {
    ((io_Reader__Reader*)this)->marker = lang_IO__FStream_tell(this->file);
    return ((io_Reader__Reader*)this)->marker;
}

void io_FileReader__FileReader_reset_impl(io_FileReader__FileReader* this, lang_Numbers__Long marker) {
    lang_IO__fseek(this->file, marker, SEEK_SET);
}

void io_FileReader__FileReader_close_impl(io_FileReader__FileReader* this) {
    lang_IO__FStream_close(this->file);
}

void io_FileReader__FileReader___defaults___impl(io_FileReader__FileReader* this) {
    io_Reader__Reader___defaults___impl((io_Reader__Reader*) this);
    this->fileName = (void*) lang_String__makeStringLiteral("<stream>", 8);
}

lang_Numbers__SizeT io_FileReader__FileReader_read(io_FileReader__FileReader* this, lang_types__Pointer buffer, lang_Numbers__Int offset, lang_Numbers__SizeT count) {
    return (lang_Numbers__SizeT) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->read((io_Reader__Reader*)this, buffer, offset, count);
}

void io_FileReader__FileReader_read_fullBuffer(io_FileReader__FileReader* this, lang_Buffer__Buffer* buffer) {
    ((io_FileReader__FileReaderClass *)((lang_types__Object *)this)->class)->read_fullBuffer((io_FileReader__FileReader*)this, buffer);
}

lang_Character__Char io_FileReader__FileReader_read_char(io_FileReader__FileReader* this) {
    return (lang_Character__Char) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->read_char((io_Reader__Reader*)this);
}

lang_types__Bool io_FileReader__FileReader_hasNext__quest(io_FileReader__FileReader* this) {
    return (lang_types__Bool) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->hasNext__quest((io_Reader__Reader*)this);
}

lang_types__Bool io_FileReader__FileReader_rewind(io_FileReader__FileReader* this, lang_Numbers__Int offset) {
    return (lang_types__Bool) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->rewind((io_Reader__Reader*)this, offset);
}

lang_Numbers__Long io_FileReader__FileReader_mark(io_FileReader__FileReader* this) {
    return (lang_Numbers__Long) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->mark((io_Reader__Reader*)this);
}

void io_FileReader__FileReader_reset(io_FileReader__FileReader* this, lang_Numbers__Long marker) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->reset((io_Reader__Reader*)this, marker);
}

void io_FileReader__FileReader_close(io_FileReader__FileReader* this) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->close((io_Reader__Reader*)this);
}

void io_FileReader__FileReader___defaults__(io_FileReader__FileReader* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
io_FileReader__FileReader* io_FileReader__FileReader_new_withFile(io_File__File* fileObject) {
    
    io_FileReader__FileReader* this = ((io_FileReader__FileReader*) (lang_types__Class_alloc__class((lang_types__Class*) io_FileReader__FileReader_class())));
    io_FileReader__FileReader___defaults__(this);
    io_FileReader__FileReader_init_withFile((io_FileReader__FileReader*) this, fileObject);
    return this;
}
io_FileReader__FileReader* io_FileReader__FileReader_new_withName(lang_String__String* fileName) {
    
    io_FileReader__FileReader* this = ((io_FileReader__FileReader*) (lang_types__Class_alloc__class((lang_types__Class*) io_FileReader__FileReader_class())));
    io_FileReader__FileReader___defaults__(this);
    io_FileReader__FileReader_init_withName((io_FileReader__FileReader*) this, fileName);
    return this;
}
io_FileReader__FileReader* io_FileReader__FileReader_new_withMode(lang_String__String* fileName, lang_String__String* mode) {
    
    io_FileReader__FileReader* this = ((io_FileReader__FileReader*) (lang_types__Class_alloc__class((lang_types__Class*) io_FileReader__FileReader_class())));
    io_FileReader__FileReader___defaults__(this);
    io_FileReader__FileReader_init_withMode((io_FileReader__FileReader*) this, fileName, mode);
    return this;
}
io_FileReader__FileReader* io_FileReader__FileReader_new_fromFStream(lang_IO__FStream file) {
    
    io_FileReader__FileReader* this = ((io_FileReader__FileReader*) (lang_types__Class_alloc__class((lang_types__Class*) io_FileReader__FileReader_class())));
    io_FileReader__FileReader___defaults__(this);
    io_FileReader__FileReader_init_fromFStream((io_FileReader__FileReader*) this, file);
    return this;
}
void io_FileReader__FileReader___load__() {
    io_Reader__Reader___load__();
}

io_FileReader__FileReaderClass *io_FileReader__FileReader_class(){
    static _Bool __done__ = false;
    static io_FileReader__FileReaderClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(io_FileReader__FileReader),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) io_FileReader__FileReader___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) io_FileReader__FileReader___load__,
                },
            },
            .read = (void*) io_FileReader__FileReader_read_impl,
            .read_char = (void*) io_FileReader__FileReader_read_char_impl,
            .read_buffer = (void*) io_Reader__Reader_read_buffer_impl,
            .readAll = (void*) io_Reader__Reader_readAll_impl,
            .readUntil = (void*) io_Reader__Reader_readUntil_impl,
            .readWhile_filter = (void*) io_Reader__Reader_readWhile_filter_impl,
            .skipUntil = (void*) io_Reader__Reader_skipUntil_impl,
            .skipUntil_str = (void*) io_Reader__Reader_skipUntil_str_impl,
            .skipWhile = (void*) io_Reader__Reader_skipWhile_impl,
            .skipWhile_filter = (void*) io_Reader__Reader_skipWhile_filter_impl,
            .readLine = (void*) io_Reader__Reader_readLine_impl,
            .skipLine = (void*) io_Reader__Reader_skipLine_impl,
            .eachLine = (void*) io_Reader__Reader_eachLine_impl,
            .peek = (void*) io_Reader__Reader_peek_impl,
            .hasNext__quest = (void*) io_FileReader__FileReader_hasNext__quest_impl,
            .rewind = (void*) io_FileReader__FileReader_rewind_impl,
            .mark = (void*) io_FileReader__FileReader_mark_impl,
            .reset = (void*) io_FileReader__FileReader_reset_impl,
            .skip = (void*) io_Reader__Reader_skip_impl,
            .close = (void*) io_FileReader__FileReader_close_impl,
        },
        .new_withFile = (void*) io_FileReader__FileReader_new_withFile,
        .new_withName = (void*) io_FileReader__FileReader_new_withName,
        .new_withMode = (void*) io_FileReader__FileReader_new_withMode,
        .new_fromFStream = (void*) io_FileReader__FileReader_new_fromFStream,
        .read_fullBuffer = (void*) io_FileReader__FileReader_read_fullBuffer_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) io_Reader__Reader_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("FileReader", 10);
    }
    return &class;
}
void io_FileReader_load() {
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
        io_Reader_load();
        io_File_load();
        io_FileReader__FileReader___load__();
        __strLit132 = (void*) lang_String__makeStringLiteral(" for reading.", 13);
        __strLit131 = (void*) lang_String__makeStringLiteral("Couldn't open ", 14);
        __strLit130 = (void*) lang_String__makeStringLiteral("rb", 2);
    }
}

