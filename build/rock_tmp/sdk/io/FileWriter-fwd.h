/* io/FileWriter header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_FileWriter_fwd___
#define ___io_FileWriter_fwd___

struct _io_FileWriter__FileWriter;
typedef struct _io_FileWriter__FileWriter io_FileWriter__FileWriter;
struct _io_FileWriter__FileWriterClass;
typedef struct _io_FileWriter__FileWriterClass io_FileWriter__FileWriterClass;

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
#include <sdk/io/File-fwd.h>
#include <sdk/os/Pipe-fwd.h>
#include <sdk/os/native/PipeUnix-fwd.h>
io_FileWriter__FileWriterClass *io_FileWriter__FileWriter_class();
io_FileWriter__FileWriter* io_FileWriter__FileWriter_new_withFile(io_File__File* fileObject, lang_types__Bool append);
void io_FileWriter__FileWriter_init_withFile(io_FileWriter__FileWriter* this, io_File__File* fileObject, lang_types__Bool append);
io_FileWriter__FileWriter* io_FileWriter__FileWriter_new_withFileOverwrite(io_File__File* fileObject);
void io_FileWriter__FileWriter_init_withFileOverwrite(io_FileWriter__FileWriter* this, io_File__File* fileObject);
io_FileWriter__FileWriter* io_FileWriter__FileWriter_new_withFileAndFlags(io_File__File* fileObject, lang_Numbers__Int flags);
void io_FileWriter__FileWriter_init_withFileAndFlags(io_FileWriter__FileWriter* this, io_File__File* fileObject, lang_Numbers__Int flags);
io_FileWriter__FileWriter* io_FileWriter__FileWriter_new_withName(lang_String__String* fileName, lang_types__Bool append);
void io_FileWriter__FileWriter_init_withName(io_FileWriter__FileWriter* this, lang_String__String* fileName, lang_types__Bool append);
io_FileWriter__FileWriter* io_FileWriter__FileWriter_new_withMode(lang_String__String* fileName, lang_String__String* mode);
void io_FileWriter__FileWriter_init_withMode(io_FileWriter__FileWriter* this, lang_String__String* fileName, lang_String__String* mode);
io_FileWriter__FileWriter* io_FileWriter__FileWriter_new_withModeAndFlags(lang_String__String* fileName, lang_String__String* mode, lang_Numbers__Int flags);
void io_FileWriter__FileWriter_init_withModeAndFlags(io_FileWriter__FileWriter* this, lang_String__String* fileName, lang_String__String* mode, lang_Numbers__Int flags);
io_FileWriter__FileWriter* io_FileWriter__FileWriter_new_withFStream(lang_IO__FStream file);
void io_FileWriter__FileWriter_init_withFStream(io_FileWriter__FileWriter* this, lang_IO__FStream file);
io_FileWriter__FileWriter* io_FileWriter__FileWriter_new_withNameOverwrite(lang_String__String* fileName);
void io_FileWriter__FileWriter_init_withNameOverwrite(io_FileWriter__FileWriter* this, lang_String__String* fileName);
io_FileWriter__FileWriter* io_FileWriter__FileWriter_createTempFile(lang_String__String* pattern, lang_String__String* mode);
lang_Numbers__SizeT io_FileWriter__FileWriter_write(io_FileWriter__FileWriter* this, lang_Character__Char* bytes, lang_Numbers__SizeT length);
lang_Numbers__SizeT io_FileWriter__FileWriter_write_impl(io_FileWriter__FileWriter* this, lang_Character__Char* bytes, lang_Numbers__SizeT length);
void io_FileWriter__FileWriter_write_chr(io_FileWriter__FileWriter* this, lang_Character__Char chr);
void io_FileWriter__FileWriter_write_chr_impl(io_FileWriter__FileWriter* this, lang_Character__Char chr);
void io_FileWriter__FileWriter_close(io_FileWriter__FileWriter* this);
void io_FileWriter__FileWriter_close_impl(io_FileWriter__FileWriter* this);
os_Pipe__Pipe* io_FileWriter__FileWriter_asPipe(io_FileWriter__FileWriter* this);
os_Pipe__Pipe* io_FileWriter__FileWriter_asPipe_impl(io_FileWriter__FileWriter* this);
void io_FileWriter__FileWriter___defaults__(io_FileWriter__FileWriter* this);
void io_FileWriter__FileWriter___defaults___impl(io_FileWriter__FileWriter* this);
void io_FileWriter__FileWriter___load__();
void io_FileWriter_load();

#endif // ___io_FileWriter_fwd___
