/* lang/IO header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_IO___
#define ___lang_IO___

#include <sdk/lang/IO-fwd.h>
#include <sdk/lang/types.h>

struct _lang_IO__FILEClass {
    struct _lang_types__ClassClass __super__;
};


struct _lang_IO__FStreamClass {
    struct _lang_types__ClassClass __super__;
    lang_IO__FStream (*open)(lang_String__String*, lang_String__String*);
    lang_IO__FStream (*open_withFlags)(lang_String__String*, lang_String__String*, lang_Numbers__Int);
    lang_types__Bool (*eof__quest)(lang_IO__FStream);
    lang_Numbers__Int (*seek)(lang_IO__FStream, lang_Numbers__Long, lang_Numbers__Int);
    lang_Numbers__SizeT (*read)(lang_IO__FStream, lang_types__Pointer, lang_Numbers__SizeT);
    lang_Character__Char (*readChar)(lang_IO__FStream);
    lang_String__String* (*readLine_defaults)(lang_IO__FStream);
    lang_String__String* (*readLine)(lang_IO__FStream, lang_Numbers__Int);
    lang_Numbers__SSizeT (*getSize)(lang_IO__FStream);
    lang_types__Bool (*hasNext__quest)(lang_IO__FStream);
    void (*write_chr)(lang_IO__FStream, lang_Character__Char);
    void (*write_str)(lang_IO__FStream, lang_String__String*);
    lang_Numbers__SizeT (*write_withLength)(lang_IO__FStream, lang_String__String*, lang_Numbers__SizeT);
    lang_Numbers__SizeT (*write_precise)(lang_IO__FStream, lang_Character__Char*, lang_Numbers__SizeT, lang_Numbers__SizeT);
};


#ifdef OOC_FROM_C
#define println_withCStr(str) lang_IO__println_withCStr((str))
#define println_withStr(str) lang_IO__println_withStr((void*) (str))
#define println() lang_IO__println()
#define open(, , ...) lang_IO__open((), (), __VA_ARGS__)
#define fdopen(, ) lang_IO__fdopen((), ())
#define mkstemp() lang_IO__mkstemp(())
#define mktemp() lang_IO__mktemp(())
#define printf(, ...) lang_IO__printf((), __VA_ARGS__)
#define fprintf(, , ...) lang_IO__fprintf((), (), __VA_ARGS__)
#define sprintf(, , ...) lang_IO__sprintf((), (), __VA_ARGS__)
#define snprintf(, , , ...) lang_IO__snprintf((), (), (), __VA_ARGS__)
#define vprintf(, ) lang_IO__vprintf((), ())
#define vfprintf(, , ) lang_IO__vfprintf((), (), ())
#define vsprintf(, , ) lang_IO__vsprintf((), (), ())
#define vsnprintf(, , , ) lang_IO__vsnprintf((), (), (), ())
#define fread(ptr, size, nmemb, stream) lang_IO__fread((void*) (ptr), (size), (nmemb), (stream))
#define fwrite(ptr, size, nmemb, stream) lang_IO__fwrite((void*) (ptr), (size), (nmemb), (stream))
#define feof(stream) lang_IO__feof((stream))
#define fopen(, ) lang_IO__fopen((), ())
#define fclose(file) lang_IO__fclose((file))
#define fflush(file) lang_IO__fflush((file))
#define fputc(, ) lang_IO__fputc((), ())
#define fputs(, ) lang_IO__fputs((), ())
#define scanf(format, ...) lang_IO__scanf((format), __VA_ARGS__)
#define fscanf(stream, format, ...) lang_IO__fscanf((stream), (format), __VA_ARGS__)
#define sscanf(str, format, ...) lang_IO__sscanf((str), (format), __VA_ARGS__)
#define vscanf(format, ap) lang_IO__vscanf((format), (ap))
#define vfscanf(file, format, ap) lang_IO__vfscanf((file), (format), (ap))
#define vsscanf(str, format, ap) lang_IO__vsscanf((str), (format), (ap))
#define fgets(str, length, stream) lang_IO__fgets((str), (length), (stream))
#define fgetc(stream) lang_IO__fgetc((stream))
#define fseek(stream, offset, origin) lang_IO__fseek((stream), (offset), (origin))
#define ftell(stream) lang_IO__ftell((stream))
#define ferror(stream) lang_IO__ferror((stream))
#define FILEClass lang_IO__FILEClass
#define FILEClass_class() lang_IO__FILEClass_class()
#define FILE___load__() FILE___load__()
#define FStream lang_IO__FStream
#define FStream_class() lang_IO__FStream_class()
#define FStreamClass lang_IO__FStreamClass
#define FStreamClass_class() lang_IO__FStreamClass_class()
#define FStream_open(filename, mode) lang_IO__FStream_open((void*) (filename), (void*) (mode))
#define FStream_open_withFlags(filename, mode, flags) lang_IO__FStream_open_withFlags((void*) (filename), (void*) (mode), (flags))
#define FStream_close(_this_) lang_IO__FStream_close((void*) (_this_))
#define FStream_no(_this_) lang_IO__FStream_no((void*) (_this_))
#define FStream_error(_this_) lang_IO__FStream_error((void*) (_this_))
#define FStream_eof__quest(_this_) lang_IO__FStream_eof__quest((void*) (_this_))
#define FStream_seek(_this_, offset, origin) lang_IO__FStream_seek((void*) (_this_), (offset), (origin))
#define FStream_tell(_this_) lang_IO__FStream_tell((void*) (_this_))
#define FStream_flush(_this_) lang_IO__FStream_flush((void*) (_this_))
#define FStream_read(_this_, dest, bytesToRead) lang_IO__FStream_read((void*) (_this_), (void*) (dest), (bytesToRead))
#define FStream_readChar(_this_) lang_IO__FStream_readChar((void*) (_this_))
#define FStream_readLine_defaults(_this_) (void*) lang_IO__FStream_readLine_defaults((void*) (_this_))
#define FStream_readLine(_this_, chunk) (void*) lang_IO__FStream_readLine((void*) (_this_), (chunk))
#define FStream_getSize(_this_) lang_IO__FStream_getSize((void*) (_this_))
#define FStream_hasNext__quest(_this_) lang_IO__FStream_hasNext__quest((void*) (_this_))
#define FStream_write_chr(_this_, chr) lang_IO__FStream_write_chr((void*) (_this_), (chr))
#define FStream_write_str(_this_, str) lang_IO__FStream_write_str((void*) (_this_), (void*) (str))
#define FStream_write_withLength(_this_, str, length) lang_IO__FStream_write_withLength((void*) (_this_), (void*) (str), (length))
#define FStream_write_precise(_this_, str, offset, length) lang_IO__FStream_write_precise((void*) (_this_), (str), (offset), (length))
#define FStream___load__() lang_IO__FStream___load__()
#endif

#endif // ___lang_IO___
