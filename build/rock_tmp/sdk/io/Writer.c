/* io/Writer source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/io/Writer.h>
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
#include <sdk/io/Reader.h>


void io_Writer__Writer_init(io_Writer__Writer* this) {
}

lang_Numbers__SizeT io_Writer__Writer_write_implicitLength_impl(io_Writer__Writer* this, lang_String__String* str) {
    return io_Writer__Writer_write(this, str->_buffer->data, lang_String__String___getsize__(str));
}

lang_Numbers__SizeT io_Writer__Writer_write_bufImplicitLength_impl(io_Writer__Writer* this, lang_Buffer__Buffer* buffer) {
    return io_Writer__Writer_write(this, buffer->data, buffer->size);
}

lang_Numbers__SizeT io_Writer__Writer_write_strGivenLength_impl(io_Writer__Writer* this, lang_String__String* str, lang_Numbers__SizeT length) {
    return io_Writer__Writer_write(this, str->_buffer->data, length);
}

void io_Writer__Writer_writef(io_Writer__Writer* this, lang_String__String* fmt, lang_VarArgs__VarArgs args) {
    io_Writer__Writer_write_implicitLength(this, lang_String__String_format((lang_String__String*) fmt, ((lang_VarArgs__VarArgs) (args))));
}

lang_Numbers__SizeT io_Writer__Writer_write_fromReader_impl(io_Writer__Writer* this, io_Reader__Reader* source, lang_Numbers__SizeT bufferSize) {
    lang_Buffer__Buffer* buffer = lang_Buffer__Buffer_new(bufferSize);
    lang_Numbers__Int cursor;
    lang_Numbers__Int bytesTransfered;
    cursor = 0;
    bytesTransfered = 0;
    while (io_Reader__Reader_hasNext__quest(source)) {
        lang_Buffer__Buffer_setLength(buffer, io_Reader__Reader_read(source, buffer->data, cursor, bufferSize));
        bytesTransfered += io_Writer__Writer_write(this, buffer->data, buffer->size);
    }
    return ((lang_Numbers__SizeT) (bytesTransfered));
}

void io_Writer__Writer_write_fromReaderDefaultBufferSize_impl(io_Writer__Writer* this, io_Reader__Reader* source) {
    io_Writer__Writer_write_fromReader(this, source, 8192);
}

void io_Writer__Writer___defaults___impl(io_Writer__Writer* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

void io_Writer__Writer_write_chr(io_Writer__Writer* this, lang_Character__Char chr) {
    ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write_chr((io_Writer__Writer*)this, chr);
}

lang_Numbers__SizeT io_Writer__Writer_write(io_Writer__Writer* this, lang_Character__Char* bytes, lang_Numbers__SizeT length) {
    return (lang_Numbers__SizeT) ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write((io_Writer__Writer*)this, bytes, length);
}

lang_Numbers__SizeT io_Writer__Writer_write_implicitLength(io_Writer__Writer* this, lang_String__String* str) {
    return (lang_Numbers__SizeT) ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write_implicitLength((io_Writer__Writer*)this, str);
}

lang_Numbers__SizeT io_Writer__Writer_write_bufImplicitLength(io_Writer__Writer* this, lang_Buffer__Buffer* buffer) {
    return (lang_Numbers__SizeT) ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write_bufImplicitLength((io_Writer__Writer*)this, buffer);
}

lang_Numbers__SizeT io_Writer__Writer_write_strGivenLength(io_Writer__Writer* this, lang_String__String* str, lang_Numbers__SizeT length) {
    return (lang_Numbers__SizeT) ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write_strGivenLength((io_Writer__Writer*)this, str, length);
}

lang_Numbers__SizeT io_Writer__Writer_write_fromReader(io_Writer__Writer* this, io_Reader__Reader* source, lang_Numbers__SizeT bufferSize) {
    return (lang_Numbers__SizeT) ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write_fromReader((io_Writer__Writer*)this, source, bufferSize);
}

void io_Writer__Writer_write_fromReaderDefaultBufferSize(io_Writer__Writer* this, io_Reader__Reader* source) {
    ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write_fromReaderDefaultBufferSize((io_Writer__Writer*)this, source);
}

void io_Writer__Writer_close(io_Writer__Writer* this) {
    ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->close((io_Writer__Writer*)this);
}

void io_Writer__Writer___defaults__(io_Writer__Writer* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
void io_Writer__Writer___load__() {
    lang_types__Class___load__();
}

io_Writer__WriterClass *io_Writer__Writer_class(){
    static _Bool __done__ = false;
    static io_Writer__WriterClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(io_Writer__Writer),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) io_Writer__Writer___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) io_Writer__Writer___load__,
            },
        },
        .write_chr = (void*) io_Writer__Writer_write_chr,
        .write = (void*) io_Writer__Writer_write,
        .write_implicitLength = (void*) io_Writer__Writer_write_implicitLength_impl,
        .write_bufImplicitLength = (void*) io_Writer__Writer_write_bufImplicitLength_impl,
        .write_strGivenLength = (void*) io_Writer__Writer_write_strGivenLength_impl,
        .write_fromReader = (void*) io_Writer__Writer_write_fromReader_impl,
        .write_fromReaderDefaultBufferSize = (void*) io_Writer__Writer_write_fromReaderDefaultBufferSize_impl,
        .close = (void*) io_Writer__Writer_close,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Writer", 6);
    }
    return &class;
}
void io_Writer_load() {
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
        io_Writer__Writer___load__();
    }
}

