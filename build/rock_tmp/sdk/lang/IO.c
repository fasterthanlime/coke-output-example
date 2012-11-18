/* lang/IO source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/lang/IO.h>
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

static lang_String__String* __strLit59;
void FILE___load__() {
    lang_types__Class___load__();
}

lang_types__Bool lang_IO__FStream_eof__quest(lang_IO__FStream this) {
    return lang_IO__feof(this) != (lang_Numbers__Int) 0;
}

lang_Numbers__Int lang_IO__FStream_seek(lang_IO__FStream this, lang_Numbers__Long offset, lang_Numbers__Int origin) {
    return lang_IO__fseek(this, offset, origin);
}

lang_Numbers__SizeT lang_IO__FStream_read(lang_IO__FStream this, lang_types__Pointer dest, lang_Numbers__SizeT bytesToRead) {
    return lang_IO__fread(dest, 1, bytesToRead, this);
}

lang_Character__Char lang_IO__FStream_readChar(lang_IO__FStream this) {
    lang_Character__Char c = '\0';
    lang_Numbers__SizeT count = lang_IO__fread(&(c), 1, 1, this);
    if (count != (lang_Numbers__SizeT) 1 && lang_IO__FStream_error(this)) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new_noOrigin(__strLit59));
    }
    return c;
}

lang_String__String* lang_IO__FStream_readLine_defaults(lang_IO__FStream this) {
    return lang_IO__FStream_readLine(this, 1023);
}

lang_String__String* lang_IO__FStream_readLine(lang_IO__FStream this, lang_Numbers__Int chunk) {
    lang_Numbers__SSizeT length = 1023;
    lang_Buffer__Buffer* buf = lang_Buffer__Buffer_new(length);
    while (true) {
        lang_Numbers__Int c = lang_IO__fgetc(this);
        if (c == EOF) {
            break;
        }
        if (c == (lang_Numbers__Int) '\n') {
            break;
        }
        lang_Buffer__Buffer_append_char(buf, ((lang_Character__Char) ((c & 255))));
        if (!lang_IO__FStream_hasNext__quest(this)) {
            break;
        }
    }
    return lang_Buffer__Buffer_toString(buf);
}

lang_Numbers__SSizeT lang_IO__FStream_getSize(lang_IO__FStream this) {
    lang_Numbers__Long prev = lang_IO__FStream_tell(this);
    lang_IO__FStream_seek(this, 0, SEEK_END);
    lang_Numbers__SizeT result = ((lang_Numbers__SizeT) (lang_IO__FStream_tell(this)));
    lang_IO__FStream_seek(this, prev, SEEK_SET);
    return ((lang_Numbers__SSizeT) (result));
}

lang_types__Bool lang_IO__FStream_hasNext__quest(lang_IO__FStream this) {
    return lang_IO__feof(this) == (lang_Numbers__Int) 0;
}

void lang_IO__FStream_write_chr(lang_IO__FStream this, lang_Character__Char chr) {
    lang_IO__fputc(chr, this);
}

void lang_IO__FStream_write_str(lang_IO__FStream this, lang_String__String* str) {
    lang_IO__fputs(str->_buffer->data, this);
}

lang_Numbers__SizeT lang_IO__FStream_write_withLength(lang_IO__FStream this, lang_String__String* str, lang_Numbers__SizeT length) {
    return lang_IO__FStream_write_precise(this, str->_buffer->data, 0, length);
}

lang_Numbers__SizeT lang_IO__FStream_write_precise(lang_IO__FStream this, lang_Character__Char* str, lang_Numbers__SizeT offset, lang_Numbers__SizeT length) {
    return lang_IO__fwrite(str + offset, 1, length, this);
}
lang_IO__FStream lang_IO__FStream_open(lang_String__String* filename, lang_String__String* mode) {
    
    return lang_IO__fopen(lang_String____OP_AS_String__Char__star(filename), lang_String____OP_AS_String__Char__star(mode));
}
lang_IO__FStream lang_IO__FStream_open_withFlags(lang_String__String* filename, lang_String__String* mode, lang_Numbers__Int flags) {
    
    lang_Numbers__Int fd = lang_IO__open(lang_String____OP_AS_String__Char__star(filename), flags);
    return lang_IO__fdopen(fd, lang_String____OP_AS_String__Char__star(mode));
}
void lang_IO__FStream___load__() {
    lang_types__Class___load__();
}

lang_IO__FStreamClass *lang_IO__FStream_class(){
    static _Bool __done__ = false;
    static lang_IO__FStreamClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(lang_IO__FStream),
                    .size = sizeof(lang_IO__FStream)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) lang_IO__FStream___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("FStream", 7);
    }
    return &class;
}
void lang_IO_load() {
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
        FILE___load__();
        lang_IO__FStream___load__();
        __strLit59 = (void*) lang_String__makeStringLiteral("Trying to read a char at the end of a file!", 43);
    }
}


void lang_IO__println_withCStr(lang_Character__Char* str) {
    lang_IO__fputs(str, stdout);
    lang_IO__println();
}

void lang_IO__println_withStr(lang_String__String* str) {
    lang_IO__println_withCStr(lang_String__String_toCString(str));
}

void lang_IO__println() {
    lang_IO__fputc('\n', stdout);
}
