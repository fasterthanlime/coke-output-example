/* io/BufferWriter source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/io/BufferWriter.h>
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

static lang_String__String* __strLit133;

void io_BufferWriter__BufferWriter_init(io_BufferWriter__BufferWriter* this) {
    this->buffer = lang_Buffer__Buffer_new(1024);
    this->pos = 0;
}

void io_BufferWriter__BufferWriter_init_withBuffer(io_BufferWriter__BufferWriter* this, lang_Buffer__Buffer* buffer) {
    this->buffer = buffer;
}

lang_Buffer__Buffer* io_BufferWriter__BufferWriter_buffer_impl(io_BufferWriter__BufferWriter* this) {
    return this->buffer;
}

void io_BufferWriter__BufferWriter_close_impl(io_BufferWriter__BufferWriter* this) {
}

void io_BufferWriter__BufferWriter__makeRoom_impl(io_BufferWriter__BufferWriter* this, lang_Numbers__Long len) {
    if (this->buffer->size < (lang_Numbers__SizeT) len) {
        lang_Buffer__Buffer_setLength(this->buffer, len);
    }
}

void io_BufferWriter__BufferWriter_write_chr_impl(io_BufferWriter__BufferWriter* this, lang_Character__Char chr) {
    io_BufferWriter__BufferWriter__makeRoom(this, this->pos + 1);
    lang_Buffer____OP_IDX_ASS_Buffer_SSizeT_Char(this->buffer, this->pos, chr);
    this->pos += 1;
}

lang_Numbers__Long io_BufferWriter__BufferWriter_mark_impl(io_BufferWriter__BufferWriter* this) {
    return this->pos;
}

void io_BufferWriter__BufferWriter_seek_impl(io_BufferWriter__BufferWriter* this, lang_Numbers__Long p) {
    if (p < (lang_Numbers__Long) 0 || p > (lang_Numbers__Long) this->buffer->size) {
        struct { 
            lang_types__Pointer __f1;
            lang_Numbers__Long __f2;
            lang_types__Pointer __f3;
            lang_Numbers__SizeT __f4;
        } ____va_args242 = { 
            lang_Numbers__Long_class(), 
            p, 
            lang_Numbers__SizeT_class(), 
            this->buffer->size
        };
        lang_VarArgs__VarArgs ____va243 = (lang_VarArgs__VarArgs) { 
            (void*) &(____va_args242), 
            NULL, 
            2
        };
        lang_Exception__Exception_throw(lang_Exception__Exception_new_noOrigin(lang_String__String_format((lang_String__String*) __strLit133, ____va243)));
    }
    this->pos = p;
}

lang_Numbers__SizeT io_BufferWriter__BufferWriter_write_impl(io_BufferWriter__BufferWriter* this, lang_Character__Char* chars, lang_Numbers__SizeT length) {
    io_BufferWriter__BufferWriter__makeRoom(this, this->pos + length);
    lang_Memory__memcpy(this->buffer->data + this->pos, chars, length);
    this->pos += length;
    return length;
}

void io_BufferWriter__BufferWriter_vwritef_impl(io_BufferWriter__BufferWriter* this, lang_String__String* fmt, lang_System__VaList list) {
    lang_System__VaList list2;
    lang_System__va_copy(list2, list);
    lang_Numbers__Int length = lang_IO__vsnprintf(NULL, 0, lang_String____OP_AS_String__Char__star(fmt), list2);
    lang_System__va_end(list2);
    io_BufferWriter__BufferWriter__makeRoom(this, this->pos + length + 1);
    lang_IO__vsnprintf(this->buffer->data + this->pos, length + 1, lang_String____OP_AS_String__Char__star(fmt), list);
    this->pos += length;
}

void io_BufferWriter__BufferWriter___defaults___impl(io_BufferWriter__BufferWriter* this) {
    io_Writer__Writer___defaults___impl((io_Writer__Writer*) this);
}

lang_Buffer__Buffer* io_BufferWriter__BufferWriter_buffer(io_BufferWriter__BufferWriter* this) {
    return (lang_Buffer__Buffer*) ((io_BufferWriter__BufferWriterClass *)((lang_types__Object *)this)->class)->buffer((io_BufferWriter__BufferWriter*)this);
}

void io_BufferWriter__BufferWriter_close(io_BufferWriter__BufferWriter* this) {
    ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->close((io_Writer__Writer*)this);
}

void io_BufferWriter__BufferWriter__makeRoom(io_BufferWriter__BufferWriter* this, lang_Numbers__Long len) {
    ((io_BufferWriter__BufferWriterClass *)((lang_types__Object *)this)->class)->_makeRoom((io_BufferWriter__BufferWriter*)this, len);
}

void io_BufferWriter__BufferWriter_write_chr(io_BufferWriter__BufferWriter* this, lang_Character__Char chr) {
    ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write_chr((io_Writer__Writer*)this, chr);
}

lang_Numbers__Long io_BufferWriter__BufferWriter_mark(io_BufferWriter__BufferWriter* this) {
    return (lang_Numbers__Long) ((io_BufferWriter__BufferWriterClass *)((lang_types__Object *)this)->class)->mark((io_BufferWriter__BufferWriter*)this);
}

void io_BufferWriter__BufferWriter_seek(io_BufferWriter__BufferWriter* this, lang_Numbers__Long p) {
    ((io_BufferWriter__BufferWriterClass *)((lang_types__Object *)this)->class)->seek((io_BufferWriter__BufferWriter*)this, p);
}

lang_Numbers__SizeT io_BufferWriter__BufferWriter_write(io_BufferWriter__BufferWriter* this, lang_Character__Char* chars, lang_Numbers__SizeT length) {
    return (lang_Numbers__SizeT) ((io_Writer__WriterClass *)((lang_types__Object *)this)->class)->write((io_Writer__Writer*)this, chars, length);
}

void io_BufferWriter__BufferWriter_vwritef(io_BufferWriter__BufferWriter* this, lang_String__String* fmt, lang_System__VaList list) {
    ((io_BufferWriter__BufferWriterClass *)((lang_types__Object *)this)->class)->vwritef((io_BufferWriter__BufferWriter*)this, fmt, list);
}

void io_BufferWriter__BufferWriter___defaults__(io_BufferWriter__BufferWriter* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
io_BufferWriter__BufferWriter* io_BufferWriter__BufferWriter_new() {
    
    io_BufferWriter__BufferWriter* this = ((io_BufferWriter__BufferWriter*) (lang_types__Class_alloc__class((lang_types__Class*) io_BufferWriter__BufferWriter_class())));
    io_BufferWriter__BufferWriter___defaults__(this);
    io_BufferWriter__BufferWriter_init((io_BufferWriter__BufferWriter*) this);
    return this;
}
io_BufferWriter__BufferWriter* io_BufferWriter__BufferWriter_new_withBuffer(lang_Buffer__Buffer* buffer) {
    
    io_BufferWriter__BufferWriter* this = ((io_BufferWriter__BufferWriter*) (lang_types__Class_alloc__class((lang_types__Class*) io_BufferWriter__BufferWriter_class())));
    io_BufferWriter__BufferWriter___defaults__(this);
    io_BufferWriter__BufferWriter_init_withBuffer((io_BufferWriter__BufferWriter*) this, buffer);
    return this;
}
void io_BufferWriter__BufferWriter___load__() {
    io_Writer__Writer___load__();
}

io_BufferWriter__BufferWriterClass *io_BufferWriter__BufferWriter_class(){
    static _Bool __done__ = false;
    static io_BufferWriter__BufferWriterClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(io_BufferWriter__BufferWriter),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) io_BufferWriter__BufferWriter___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) io_BufferWriter__BufferWriter___load__,
                },
            },
            .write_chr = (void*) io_BufferWriter__BufferWriter_write_chr_impl,
            .write = (void*) io_BufferWriter__BufferWriter_write_impl,
            .write_implicitLength = (void*) io_Writer__Writer_write_implicitLength_impl,
            .write_bufImplicitLength = (void*) io_Writer__Writer_write_bufImplicitLength_impl,
            .write_strGivenLength = (void*) io_Writer__Writer_write_strGivenLength_impl,
            .write_fromReader = (void*) io_Writer__Writer_write_fromReader_impl,
            .write_fromReaderDefaultBufferSize = (void*) io_Writer__Writer_write_fromReaderDefaultBufferSize_impl,
            .close = (void*) io_BufferWriter__BufferWriter_close_impl,
        },
        .new = (void*) io_BufferWriter__BufferWriter_new,
        .new_withBuffer = (void*) io_BufferWriter__BufferWriter_new_withBuffer,
        .buffer = (void*) io_BufferWriter__BufferWriter_buffer_impl,
        ._makeRoom = (void*) io_BufferWriter__BufferWriter__makeRoom_impl,
        .mark = (void*) io_BufferWriter__BufferWriter_mark_impl,
        .seek = (void*) io_BufferWriter__BufferWriter_seek_impl,
        .vwritef = (void*) io_BufferWriter__BufferWriter_vwritef_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) io_Writer__Writer_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("BufferWriter", 12);
    }
    return &class;
}
void io_BufferWriter_load() {
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
        io_BufferWriter__BufferWriter___load__();
        __strLit133 = (void*) lang_String__makeStringLiteral("Seeking out of bounds! p = %d, size = %d", 40);
    }
}

