/* io/FileReader header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_FileReader_fwd___
#define ___io_FileReader_fwd___

struct _io_FileReader__FileReader;
typedef struct _io_FileReader__FileReader io_FileReader__FileReader;
struct _io_FileReader__FileReaderClass;
typedef struct _io_FileReader__FileReaderClass io_FileReader__FileReaderClass;

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
#include <sdk/lang/IO-fwd.h>
#include <sdk/io/Reader-fwd.h>
#include <sdk/io/File-fwd.h>
io_FileReader__FileReaderClass *io_FileReader__FileReader_class();
io_FileReader__FileReader* io_FileReader__FileReader_new_withFile(io_File__File* fileObject);
void io_FileReader__FileReader_init_withFile(io_FileReader__FileReader* this, io_File__File* fileObject);
io_FileReader__FileReader* io_FileReader__FileReader_new_withName(lang_String__String* fileName);
void io_FileReader__FileReader_init_withName(io_FileReader__FileReader* this, lang_String__String* fileName);
io_FileReader__FileReader* io_FileReader__FileReader_new_withMode(lang_String__String* fileName, lang_String__String* mode);
void io_FileReader__FileReader_init_withMode(io_FileReader__FileReader* this, lang_String__String* fileName, lang_String__String* mode);
io_FileReader__FileReader* io_FileReader__FileReader_new_fromFStream(lang_IO__FStream file);
void io_FileReader__FileReader_init_fromFStream(io_FileReader__FileReader* this, lang_IO__FStream file);
lang_Numbers__SizeT io_FileReader__FileReader_read(io_FileReader__FileReader* this, lang_types__Pointer buffer, lang_Numbers__Int offset, lang_Numbers__SizeT count);
lang_Numbers__SizeT io_FileReader__FileReader_read_impl(io_FileReader__FileReader* this, lang_types__Pointer buffer, lang_Numbers__Int offset, lang_Numbers__SizeT count);
void io_FileReader__FileReader_read_fullBuffer(io_FileReader__FileReader* this, lang_Buffer__Buffer* buffer);
void io_FileReader__FileReader_read_fullBuffer_impl(io_FileReader__FileReader* this, lang_Buffer__Buffer* buffer);
lang_Character__Char io_FileReader__FileReader_read_char(io_FileReader__FileReader* this);
lang_Character__Char io_FileReader__FileReader_read_char_impl(io_FileReader__FileReader* this);
lang_types__Bool io_FileReader__FileReader_hasNext__quest(io_FileReader__FileReader* this);
lang_types__Bool io_FileReader__FileReader_hasNext__quest_impl(io_FileReader__FileReader* this);
lang_types__Bool io_FileReader__FileReader_rewind(io_FileReader__FileReader* this, lang_Numbers__Int offset);
lang_types__Bool io_FileReader__FileReader_rewind_impl(io_FileReader__FileReader* this, lang_Numbers__Int offset);
lang_Numbers__Long io_FileReader__FileReader_mark(io_FileReader__FileReader* this);
lang_Numbers__Long io_FileReader__FileReader_mark_impl(io_FileReader__FileReader* this);
void io_FileReader__FileReader_reset(io_FileReader__FileReader* this, lang_Numbers__Long marker);
void io_FileReader__FileReader_reset_impl(io_FileReader__FileReader* this, lang_Numbers__Long marker);
void io_FileReader__FileReader_close(io_FileReader__FileReader* this);
void io_FileReader__FileReader_close_impl(io_FileReader__FileReader* this);
void io_FileReader__FileReader___defaults__(io_FileReader__FileReader* this);
void io_FileReader__FileReader___defaults___impl(io_FileReader__FileReader* this);
void io_FileReader__FileReader___load__();
void io_FileReader_load();

#endif // ___io_FileReader_fwd___
