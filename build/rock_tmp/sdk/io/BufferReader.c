/* io/BufferReader source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/io/BufferReader.h>
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

static lang_String__String* __strLit134;

void io_BufferReader__BufferReader_init_withBuffer(io_BufferReader__BufferReader* this, lang_Buffer__Buffer* buffer) {
    this->buffer = buffer;
}

lang_Buffer__Buffer* io_BufferReader__BufferReader_buffer_impl(io_BufferReader__BufferReader* this) {
    return this->buffer;
}

void io_BufferReader__BufferReader_close_impl(io_BufferReader__BufferReader* this) {
}

lang_Numbers__SizeT io_BufferReader__BufferReader_read_impl(io_BufferReader__BufferReader* this, lang_Character__Char* dest, lang_Numbers__Int destOffset, lang_Numbers__Int maxRead) {
    if (((io_Reader__Reader*)this)->marker >= (lang_Numbers__Long) this->buffer->size) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (io_BufferReader__BufferReader_class()), __strLit134));
    }
    lang_Numbers__SizeT copySize = (((io_Reader__Reader*)this)->marker + maxRead > (lang_Numbers__Long) this->buffer->size ? this->buffer->size - ((io_Reader__Reader*)this)->marker : maxRead);
    lang_Memory__memcpy(dest, this->buffer->data + ((io_Reader__Reader*)this)->marker, copySize);
    ((io_Reader__Reader*)this)->marker += copySize;
    return copySize;
}

lang_Character__Char io_BufferReader__BufferReader_peek_impl(io_BufferReader__BufferReader* this) {
    return lang_Buffer__Buffer_get(this->buffer, ((io_Reader__Reader*)this)->marker);
}

lang_Character__Char io_BufferReader__BufferReader_read_char_impl(io_BufferReader__BufferReader* this) {
    lang_Character__Char c = lang_Buffer__Buffer_get(this->buffer, ((io_Reader__Reader*)this)->marker);
    ((io_Reader__Reader*)this)->marker += 1;
    return c;
}

lang_types__Bool io_BufferReader__BufferReader_hasNext__quest_impl(io_BufferReader__BufferReader* this) {
    return ((io_Reader__Reader*)this)->marker < (lang_Numbers__Long) this->buffer->size;
}

void io_BufferReader__BufferReader_rewind_impl(io_BufferReader__BufferReader* this, lang_Numbers__Int offset) {
    ((io_Reader__Reader*)this)->marker -= offset;
    if (((io_Reader__Reader*)this)->marker < (lang_Numbers__Long) 0) {
        ((io_Reader__Reader*)this)->marker = 0;
    }
}

lang_Numbers__Long io_BufferReader__BufferReader_mark_impl(io_BufferReader__BufferReader* this) {
    return ((io_Reader__Reader*)this)->marker;
}

void io_BufferReader__BufferReader_reset_impl(io_BufferReader__BufferReader* this, lang_Numbers__Long marker) {
    ((io_Reader__Reader*)this)->marker = marker;
}

void io_BufferReader__BufferReader___defaults___impl(io_BufferReader__BufferReader* this) {
    io_Reader__Reader___defaults___impl((io_Reader__Reader*) this);
}

lang_Buffer__Buffer* io_BufferReader__BufferReader_buffer(io_BufferReader__BufferReader* this) {
    return (lang_Buffer__Buffer*) ((io_BufferReader__BufferReaderClass *)((lang_types__Object *)this)->class)->buffer((io_BufferReader__BufferReader*)this);
}

void io_BufferReader__BufferReader_close(io_BufferReader__BufferReader* this) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->close((io_Reader__Reader*)this);
}

lang_Numbers__SizeT io_BufferReader__BufferReader_read(io_BufferReader__BufferReader* this, lang_Character__Char* dest, lang_Numbers__Int destOffset, lang_Numbers__Int maxRead) {
    return (lang_Numbers__SizeT) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->read((io_Reader__Reader*)this, dest, destOffset, maxRead);
}

lang_Character__Char io_BufferReader__BufferReader_peek(io_BufferReader__BufferReader* this) {
    return (lang_Character__Char) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->peek((io_Reader__Reader*)this);
}

lang_Character__Char io_BufferReader__BufferReader_read_char(io_BufferReader__BufferReader* this) {
    return (lang_Character__Char) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->read_char((io_Reader__Reader*)this);
}

lang_types__Bool io_BufferReader__BufferReader_hasNext__quest(io_BufferReader__BufferReader* this) {
    return (lang_types__Bool) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->hasNext__quest((io_Reader__Reader*)this);
}

void io_BufferReader__BufferReader_rewind(io_BufferReader__BufferReader* this, lang_Numbers__Int offset) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->rewind((io_Reader__Reader*)this, offset);
}

lang_Numbers__Long io_BufferReader__BufferReader_mark(io_BufferReader__BufferReader* this) {
    return (lang_Numbers__Long) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->mark((io_Reader__Reader*)this);
}

void io_BufferReader__BufferReader_reset(io_BufferReader__BufferReader* this, lang_Numbers__Long marker) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->reset((io_Reader__Reader*)this, marker);
}

void io_BufferReader__BufferReader___defaults__(io_BufferReader__BufferReader* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
io_BufferReader__BufferReader* io_BufferReader__BufferReader_new_withBuffer(lang_Buffer__Buffer* buffer) {
    
    io_BufferReader__BufferReader* this = ((io_BufferReader__BufferReader*) (lang_types__Class_alloc__class((lang_types__Class*) io_BufferReader__BufferReader_class())));
    io_BufferReader__BufferReader___defaults__(this);
    io_BufferReader__BufferReader_init_withBuffer((io_BufferReader__BufferReader*) this, buffer);
    return this;
}
void io_BufferReader__BufferReader___load__() {
    io_Reader__Reader___load__();
}

io_BufferReader__BufferReaderClass *io_BufferReader__BufferReader_class(){
    static _Bool __done__ = false;
    static io_BufferReader__BufferReaderClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(io_BufferReader__BufferReader),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) io_BufferReader__BufferReader___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) io_BufferReader__BufferReader___load__,
                },
            },
            .read = (void*) io_BufferReader__BufferReader_read_impl,
            .read_char = (void*) io_BufferReader__BufferReader_read_char_impl,
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
            .peek = (void*) io_BufferReader__BufferReader_peek_impl,
            .hasNext__quest = (void*) io_BufferReader__BufferReader_hasNext__quest_impl,
            .rewind = (void*) io_BufferReader__BufferReader_rewind_impl,
            .mark = (void*) io_BufferReader__BufferReader_mark_impl,
            .reset = (void*) io_BufferReader__BufferReader_reset_impl,
            .skip = (void*) io_Reader__Reader_skip_impl,
            .close = (void*) io_BufferReader__BufferReader_close_impl,
        },
        .new_withBuffer = (void*) io_BufferReader__BufferReader_new_withBuffer,
        .buffer = (void*) io_BufferReader__BufferReader_buffer_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) io_Reader__Reader_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("BufferReader", 12);
    }
    return &class;
}
void io_BufferReader_load() {
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
        io_BufferReader__BufferReader___load__();
        __strLit134 = (void*) lang_String__makeStringLiteral("Buffer overflow! Offset is larger than buffer size.", 51);
    }
}

