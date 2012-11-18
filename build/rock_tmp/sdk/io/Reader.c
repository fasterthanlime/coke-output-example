/* io/Reader source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/io/Reader.h>
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


void io_Reader__Reader_init(io_Reader__Reader* this) {
}

lang_Numbers__SizeT io_Reader__Reader_read_buffer_impl(io_Reader__Reader* this, lang_Buffer__Buffer* buffer) {
    lang_Numbers__SizeT count = io_Reader__Reader_read(this, buffer->data, 0, buffer->capacity);
    buffer->size = count;
    return count;
}

lang_String__String* io_Reader__Reader_readAll_impl(io_Reader__Reader* this) {
    lang_Buffer__Buffer* in = lang_Buffer__Buffer_new(4096);
    lang_Buffer__Buffer* out = lang_Buffer__Buffer_new(4096);
    while (io_Reader__Reader_hasNext__quest(this)) {
        lang_Numbers__SizeT readBytes = io_Reader__Reader_read_buffer(this, in);
        lang_Buffer__Buffer_append_bufLength(out, in, readBytes);
    }
    return lang_Buffer__Buffer_toString(out);
}

lang_String__String* io_Reader__Reader_readUntil_impl(io_Reader__Reader* this, lang_Character__Char end) {
    lang_Buffer__Buffer* sb = lang_Buffer__Buffer_new(1024);
    while (io_Reader__Reader_hasNext__quest(this)) {
        lang_Character__Char c = io_Reader__Reader_read_char(this);
        if (c == end || (!io_Reader__Reader_hasNext__quest(this) && c == (lang_Character__Char) 8)) {
            break;
        }
        lang_Buffer__Buffer_append_char(sb, c);
    }
    return lang_Buffer__Buffer_toString(sb);
}

lang_String__String* io_Reader__Reader_readWhile_filter_impl(io_Reader__Reader* this, lang_types__Closure filter) {
    lang_Buffer__Buffer* sb = lang_Buffer__Buffer_new(1024);
    while (io_Reader__Reader_hasNext__quest(this)) {
        lang_Character__Char c = io_Reader__Reader_read_char(this);
        if (!((lang_types__Bool (*)(lang_Character__Char, void*)) filter.thunk)(c, filter.context)) {
            io_Reader__Reader_rewind(this, 1);
            break;
        }
        lang_Buffer__Buffer_append_char(sb, c);
    }
    return lang_Buffer__Buffer_toString(sb);
}

void io_Reader__Reader_skipUntil_impl(io_Reader__Reader* this, lang_Character__Char end) {
    while (io_Reader__Reader_hasNext__quest(this)) {
        lang_Character__Char c = io_Reader__Reader_read_char(this);
        if (c == end) {
            break;
        }
    }
}

void io_Reader__Reader_skipUntil_str_impl(io_Reader__Reader* this, lang_String__String* end) {
    while (io_Reader__Reader_hasNext__quest(this)) {
        lang_Character__Char c = io_Reader__Reader_read_char(this);
        lang_Numbers__SSizeT i = 0;
        while (c == lang_String____OP_IDX_String_SSizeT__Char(end, i)) {
            c = io_Reader__Reader_read_char(this);
            i += 1;
            if (i >= lang_String__String___getsize__(end)) {
                return;
            }
        }
    }
}

void io_Reader__Reader_skipWhile_impl(io_Reader__Reader* this, lang_Character__Char unwanted) {
    while (io_Reader__Reader_hasNext__quest(this)) {
        lang_Character__Char c = io_Reader__Reader_read_char(this);
        if (c != unwanted) {
            io_Reader__Reader_rewind(this, 1);
            break;
        }
    }
}

void io_Reader__Reader_skipWhile_filter_impl(io_Reader__Reader* this, lang_types__Closure filter) {
    while (io_Reader__Reader_hasNext__quest(this)) {
        lang_Character__Char c = io_Reader__Reader_read_char(this);
        if (!((lang_types__Bool (*)(lang_Character__Char, void*)) filter.thunk)(c, filter.context)) {
            io_Reader__Reader_rewind(this, 1);
            break;
        }
    }
}

lang_String__String* io_Reader__Reader_readLine_impl(io_Reader__Reader* this) {
    return lang_String__String_trimRight_char(io_Reader__Reader_readUntil(this, '\n'), '\r');
}

void io_Reader__Reader_skipLine_impl(io_Reader__Reader* this) {
    io_Reader__Reader_skipUntil(this, '\n');
}

lang_types__Bool io_Reader__Reader_eachLine_impl(io_Reader__Reader* this, lang_types__Closure f) {
    while (io_Reader__Reader_hasNext__quest(this)) {
        if (!((lang_types__Bool (*)(lang_String__String*, void*)) f.thunk)(io_Reader__Reader_readLine(this), f.context)) {
            return false;
        }
    }
    return true;
}

lang_Character__Char io_Reader__Reader_peek_impl(io_Reader__Reader* this) {
    lang_Character__Char c = io_Reader__Reader_read_char(this);
    io_Reader__Reader_rewind(this, 1);
    return c;
}

void io_Reader__Reader_skip_impl(io_Reader__Reader* this, lang_Numbers__Int offset) {
    if (offset < (lang_Numbers__Int) 0) {
        io_Reader__Reader_rewind(this, -offset);
    }
    else {
        
        {
            lang_Numbers__Int i;
            for (i = 0; i < offset; i++) {
                io_Reader__Reader_read_char(this);
            }
        }
    }
}

void io_Reader__Reader___defaults___impl(io_Reader__Reader* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

lang_Numbers__SizeT io_Reader__Reader_read(io_Reader__Reader* this, lang_Character__Char* chars, lang_Numbers__Int offset, lang_Numbers__Int count) {
    return (lang_Numbers__SizeT) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->read((io_Reader__Reader*)this, chars, offset, count);
}

lang_Character__Char io_Reader__Reader_read_char(io_Reader__Reader* this) {
    return (lang_Character__Char) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->read_char((io_Reader__Reader*)this);
}

lang_Numbers__SizeT io_Reader__Reader_read_buffer(io_Reader__Reader* this, lang_Buffer__Buffer* buffer) {
    return (lang_Numbers__SizeT) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->read_buffer((io_Reader__Reader*)this, buffer);
}

lang_String__String* io_Reader__Reader_readAll(io_Reader__Reader* this) {
    return (lang_String__String*) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->readAll((io_Reader__Reader*)this);
}

lang_String__String* io_Reader__Reader_readUntil(io_Reader__Reader* this, lang_Character__Char end) {
    return (lang_String__String*) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->readUntil((io_Reader__Reader*)this, end);
}

lang_String__String* io_Reader__Reader_readWhile_filter(io_Reader__Reader* this, lang_types__Closure filter) {
    return (lang_String__String*) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->readWhile_filter((io_Reader__Reader*)this, filter);
}

void io_Reader__Reader_skipUntil(io_Reader__Reader* this, lang_Character__Char end) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->skipUntil((io_Reader__Reader*)this, end);
}

void io_Reader__Reader_skipUntil_str(io_Reader__Reader* this, lang_String__String* end) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->skipUntil_str((io_Reader__Reader*)this, end);
}

void io_Reader__Reader_skipWhile(io_Reader__Reader* this, lang_Character__Char unwanted) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->skipWhile((io_Reader__Reader*)this, unwanted);
}

void io_Reader__Reader_skipWhile_filter(io_Reader__Reader* this, lang_types__Closure filter) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->skipWhile_filter((io_Reader__Reader*)this, filter);
}

lang_String__String* io_Reader__Reader_readLine(io_Reader__Reader* this) {
    return (lang_String__String*) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->readLine((io_Reader__Reader*)this);
}

void io_Reader__Reader_skipLine(io_Reader__Reader* this) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->skipLine((io_Reader__Reader*)this);
}

lang_types__Bool io_Reader__Reader_eachLine(io_Reader__Reader* this, lang_types__Closure f) {
    return (lang_types__Bool) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->eachLine((io_Reader__Reader*)this, f);
}

lang_Character__Char io_Reader__Reader_peek(io_Reader__Reader* this) {
    return (lang_Character__Char) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->peek((io_Reader__Reader*)this);
}

lang_types__Bool io_Reader__Reader_hasNext__quest(io_Reader__Reader* this) {
    return (lang_types__Bool) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->hasNext__quest((io_Reader__Reader*)this);
}

lang_types__Bool io_Reader__Reader_rewind(io_Reader__Reader* this, lang_Numbers__Int offset) {
    return (lang_types__Bool) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->rewind((io_Reader__Reader*)this, offset);
}

lang_Numbers__Long io_Reader__Reader_mark(io_Reader__Reader* this) {
    return (lang_Numbers__Long) ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->mark((io_Reader__Reader*)this);
}

void io_Reader__Reader_reset(io_Reader__Reader* this, lang_Numbers__Long marker) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->reset((io_Reader__Reader*)this, marker);
}

void io_Reader__Reader_skip(io_Reader__Reader* this, lang_Numbers__Int offset) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->skip((io_Reader__Reader*)this, offset);
}

void io_Reader__Reader_close(io_Reader__Reader* this) {
    ((io_Reader__ReaderClass *)((lang_types__Object *)this)->class)->close((io_Reader__Reader*)this);
}

void io_Reader__Reader___defaults__(io_Reader__Reader* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
void io_Reader__Reader___load__() {
    lang_types__Class___load__();
}

io_Reader__ReaderClass *io_Reader__Reader_class(){
    static _Bool __done__ = false;
    static io_Reader__ReaderClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(io_Reader__Reader),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) io_Reader__Reader___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) io_Reader__Reader___load__,
            },
        },
        .read = (void*) io_Reader__Reader_read,
        .read_char = (void*) io_Reader__Reader_read_char,
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
        .hasNext__quest = (void*) io_Reader__Reader_hasNext__quest,
        .rewind = (void*) io_Reader__Reader_rewind,
        .mark = (void*) io_Reader__Reader_mark,
        .reset = (void*) io_Reader__Reader_reset,
        .skip = (void*) io_Reader__Reader_skip_impl,
        .close = (void*) io_Reader__Reader_close,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("Reader", 6);
    }
    return &class;
}
void io_Reader_load() {
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
        io_Reader__Reader___load__();
    }
}

