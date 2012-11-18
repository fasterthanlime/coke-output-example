/* io/BufferReader header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_BufferReader_fwd___
#define ___io_BufferReader_fwd___

struct _io_BufferReader__BufferReader;
typedef struct _io_BufferReader__BufferReader io_BufferReader__BufferReader;
struct _io_BufferReader__BufferReaderClass;
typedef struct _io_BufferReader__BufferReaderClass io_BufferReader__BufferReaderClass;

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
io_BufferReader__BufferReaderClass *io_BufferReader__BufferReader_class();
io_BufferReader__BufferReader* io_BufferReader__BufferReader_new_withBuffer(lang_Buffer__Buffer* buffer);
void io_BufferReader__BufferReader_init_withBuffer(io_BufferReader__BufferReader* this, lang_Buffer__Buffer* buffer);
lang_Buffer__Buffer* io_BufferReader__BufferReader_buffer(io_BufferReader__BufferReader* this);
lang_Buffer__Buffer* io_BufferReader__BufferReader_buffer_impl(io_BufferReader__BufferReader* this);
void io_BufferReader__BufferReader_close(io_BufferReader__BufferReader* this);
void io_BufferReader__BufferReader_close_impl(io_BufferReader__BufferReader* this);
lang_Numbers__SizeT io_BufferReader__BufferReader_read(io_BufferReader__BufferReader* this, lang_Character__Char* dest, lang_Numbers__Int destOffset, lang_Numbers__Int maxRead);
lang_Numbers__SizeT io_BufferReader__BufferReader_read_impl(io_BufferReader__BufferReader* this, lang_Character__Char* dest, lang_Numbers__Int destOffset, lang_Numbers__Int maxRead);
lang_Character__Char io_BufferReader__BufferReader_peek(io_BufferReader__BufferReader* this);
lang_Character__Char io_BufferReader__BufferReader_peek_impl(io_BufferReader__BufferReader* this);
lang_Character__Char io_BufferReader__BufferReader_read_char(io_BufferReader__BufferReader* this);
lang_Character__Char io_BufferReader__BufferReader_read_char_impl(io_BufferReader__BufferReader* this);
lang_types__Bool io_BufferReader__BufferReader_hasNext__quest(io_BufferReader__BufferReader* this);
lang_types__Bool io_BufferReader__BufferReader_hasNext__quest_impl(io_BufferReader__BufferReader* this);
void io_BufferReader__BufferReader_rewind(io_BufferReader__BufferReader* this, lang_Numbers__Int offset);
void io_BufferReader__BufferReader_rewind_impl(io_BufferReader__BufferReader* this, lang_Numbers__Int offset);
lang_Numbers__Long io_BufferReader__BufferReader_mark(io_BufferReader__BufferReader* this);
lang_Numbers__Long io_BufferReader__BufferReader_mark_impl(io_BufferReader__BufferReader* this);
void io_BufferReader__BufferReader_reset(io_BufferReader__BufferReader* this, lang_Numbers__Long marker);
void io_BufferReader__BufferReader_reset_impl(io_BufferReader__BufferReader* this, lang_Numbers__Long marker);
void io_BufferReader__BufferReader___defaults__(io_BufferReader__BufferReader* this);
void io_BufferReader__BufferReader___defaults___impl(io_BufferReader__BufferReader* this);
void io_BufferReader__BufferReader___load__();
void io_BufferReader_load();

#endif // ___io_BufferReader_fwd___
