/* lang/IO header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___lang_IO_fwd___
#define ___lang_IO_fwd___

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

typedef FILE* lang_IO__FStream;
struct _lang_IO__FILEClass;
typedef struct _lang_IO__FILEClass lang_IO__FILEClass;
struct _lang_IO__FStreamClass;
typedef struct _lang_IO__FStreamClass lang_IO__FStreamClass;

#include <sdk/lang/Exception-fwd.h>
#include <sdk/lang/BufferIterator-fwd.h>
#include <sdk/lang/System-fwd.h>
#include <sdk/lang/Character-fwd.h>
#include <sdk/lang/VarArgs-fwd.h>
#include <sdk/lang/types-fwd.h>
#include <sdk/lang/Iterators-fwd.h>
#include <sdk/lang/Memory-fwd.h>
#include <sdk/lang/String-fwd.h>
#include <sdk/lang/Buffer-fwd.h>
#include <sdk/lang/Numbers-fwd.h>
#include <sdk/lang/Abstractions-fwd.h>
#include <sdk/lang/Format-fwd.h>
lang_IO__FILEClass *FILE_class();
void FILE___load__();
lang_IO__FStreamClass *lang_IO__FStream_class();
lang_IO__FStream lang_IO__FStream_open(lang_String__String* filename, lang_String__String* mode);
lang_IO__FStream lang_IO__FStream_open_withFlags(lang_String__String* filename, lang_String__String* mode, lang_Numbers__Int flags);
#define lang_IO__FStream_close fclose

#define lang_IO__FStream_no fileno

#define lang_IO__FStream_error ferror

lang_types__Bool lang_IO__FStream_eof__quest(lang_IO__FStream this);
lang_Numbers__Int lang_IO__FStream_seek(lang_IO__FStream this, lang_Numbers__Long offset, lang_Numbers__Int origin);
#define lang_IO__FStream_tell ftell

#define lang_IO__FStream_flush fflush

lang_Numbers__SizeT lang_IO__FStream_read(lang_IO__FStream this, lang_types__Pointer dest, lang_Numbers__SizeT bytesToRead);
lang_Character__Char lang_IO__FStream_readChar(lang_IO__FStream this);
lang_String__String* lang_IO__FStream_readLine_defaults(lang_IO__FStream this);
lang_String__String* lang_IO__FStream_readLine(lang_IO__FStream this, lang_Numbers__Int chunk);
lang_Numbers__SSizeT lang_IO__FStream_getSize(lang_IO__FStream this);
lang_types__Bool lang_IO__FStream_hasNext__quest(lang_IO__FStream this);
void lang_IO__FStream_write_chr(lang_IO__FStream this, lang_Character__Char chr);
void lang_IO__FStream_write_str(lang_IO__FStream this, lang_String__String* str);
lang_Numbers__SizeT lang_IO__FStream_write_withLength(lang_IO__FStream this, lang_String__String* str, lang_Numbers__SizeT length);
lang_Numbers__SizeT lang_IO__FStream_write_precise(lang_IO__FStream this, lang_Character__Char* str, lang_Numbers__SizeT offset, lang_Numbers__SizeT length);
void lang_IO__FStream___load__();
void lang_IO_load();
void lang_IO__println_withCStr(lang_Character__Char* str);
void lang_IO__println_withStr(lang_String__String* str);
void lang_IO__println();
#define lang_IO__open open

#define lang_IO__fdopen fdopen

#define lang_IO__mkstemp mkstemp

#define lang_IO__mktemp mktemp

#define lang_IO__printf printf

#define lang_IO__fprintf fprintf

#define lang_IO__sprintf sprintf

#define lang_IO__snprintf snprintf

#define lang_IO__vprintf vprintf

#define lang_IO__vfprintf vfprintf

#define lang_IO__vsprintf vsprintf

#define lang_IO__vsnprintf vsnprintf

#define lang_IO__fread fread

#define lang_IO__fwrite fwrite

#define lang_IO__feof feof

#define lang_IO__fopen fopen

#define lang_IO__fclose fclose

#define lang_IO__fflush fflush

#define lang_IO__fputc fputc

#define lang_IO__fputs fputs

#define lang_IO__scanf scanf

#define lang_IO__fscanf fscanf

#define lang_IO__sscanf sscanf

#define lang_IO__vscanf vscanf

#define lang_IO__vfscanf vfscanf

#define lang_IO__vsscanf vsscanf

#define lang_IO__fgets fgets

#define lang_IO__fgetc fgetc

#define lang_IO__fseek fseek

#define lang_IO__ftell ftell

#define lang_IO__ferror ferror


#endif // ___lang_IO_fwd___
