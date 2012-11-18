/* io/BufferWriter header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_BufferWriter_fwd___
#define ___io_BufferWriter_fwd___

struct _io_BufferWriter__BufferWriter;
typedef struct _io_BufferWriter__BufferWriter io_BufferWriter__BufferWriter;
struct _io_BufferWriter__BufferWriterClass;
typedef struct _io_BufferWriter__BufferWriterClass io_BufferWriter__BufferWriterClass;

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
#include <sdk/io/Writer-fwd.h>
io_BufferWriter__BufferWriterClass *io_BufferWriter__BufferWriter_class();
io_BufferWriter__BufferWriter* io_BufferWriter__BufferWriter_new();
void io_BufferWriter__BufferWriter_init(io_BufferWriter__BufferWriter* this);
io_BufferWriter__BufferWriter* io_BufferWriter__BufferWriter_new_withBuffer(lang_Buffer__Buffer* buffer);
void io_BufferWriter__BufferWriter_init_withBuffer(io_BufferWriter__BufferWriter* this, lang_Buffer__Buffer* buffer);
lang_Buffer__Buffer* io_BufferWriter__BufferWriter_buffer(io_BufferWriter__BufferWriter* this);
lang_Buffer__Buffer* io_BufferWriter__BufferWriter_buffer_impl(io_BufferWriter__BufferWriter* this);
void io_BufferWriter__BufferWriter_close(io_BufferWriter__BufferWriter* this);
void io_BufferWriter__BufferWriter_close_impl(io_BufferWriter__BufferWriter* this);
void io_BufferWriter__BufferWriter__makeRoom(io_BufferWriter__BufferWriter* this, lang_Numbers__Long len);
void io_BufferWriter__BufferWriter__makeRoom_impl(io_BufferWriter__BufferWriter* this, lang_Numbers__Long len);
void io_BufferWriter__BufferWriter_write_chr(io_BufferWriter__BufferWriter* this, lang_Character__Char chr);
void io_BufferWriter__BufferWriter_write_chr_impl(io_BufferWriter__BufferWriter* this, lang_Character__Char chr);
lang_Numbers__Long io_BufferWriter__BufferWriter_mark(io_BufferWriter__BufferWriter* this);
lang_Numbers__Long io_BufferWriter__BufferWriter_mark_impl(io_BufferWriter__BufferWriter* this);
void io_BufferWriter__BufferWriter_seek(io_BufferWriter__BufferWriter* this, lang_Numbers__Long p);
void io_BufferWriter__BufferWriter_seek_impl(io_BufferWriter__BufferWriter* this, lang_Numbers__Long p);
lang_Numbers__SizeT io_BufferWriter__BufferWriter_write(io_BufferWriter__BufferWriter* this, lang_Character__Char* chars, lang_Numbers__SizeT length);
lang_Numbers__SizeT io_BufferWriter__BufferWriter_write_impl(io_BufferWriter__BufferWriter* this, lang_Character__Char* chars, lang_Numbers__SizeT length);
void io_BufferWriter__BufferWriter_vwritef(io_BufferWriter__BufferWriter* this, lang_String__String* fmt, lang_System__VaList list);
void io_BufferWriter__BufferWriter_vwritef_impl(io_BufferWriter__BufferWriter* this, lang_String__String* fmt, lang_System__VaList list);
void io_BufferWriter__BufferWriter___defaults__(io_BufferWriter__BufferWriter* this);
void io_BufferWriter__BufferWriter___defaults___impl(io_BufferWriter__BufferWriter* this);
void io_BufferWriter__BufferWriter___load__();
void io_BufferWriter_load();

#endif // ___io_BufferWriter_fwd___
