/* os/Pipe header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___os_Pipe_fwd___
#define ___os_Pipe_fwd___

struct _os_Pipe__Pipe;
typedef struct _os_Pipe__Pipe os_Pipe__Pipe;
struct _os_Pipe__PipeClass;
typedef struct _os_Pipe__PipeClass os_Pipe__PipeClass;

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
#include <sdk/os/native/PipeUnix-fwd.h>
#include <sdk/os/native/PipeWin32-fwd.h>
os_Pipe__PipeClass *os_Pipe__Pipe_class();
void os_Pipe__Pipe_init(os_Pipe__Pipe* this);
os_Pipe__Pipe* os_Pipe__Pipe_new();
lang_types__Pointer os_Pipe__Pipe_read(os_Pipe__Pipe* this, lang_Numbers__Int len);
lang_Numbers__Int os_Pipe__Pipe_write_string(os_Pipe__Pipe* this, lang_String__String* str);
lang_Numbers__Int os_Pipe__Pipe_write_string_impl(os_Pipe__Pipe* this, lang_String__String* str);
lang_Numbers__Int os_Pipe__Pipe_write(os_Pipe__Pipe* this, lang_types__Pointer data, lang_Numbers__Int len);
lang_Numbers__Int os_Pipe__Pipe_close(os_Pipe__Pipe* this, lang_Character__Char mode);
void os_Pipe__Pipe___defaults__(os_Pipe__Pipe* this);
void os_Pipe__Pipe___defaults___impl(os_Pipe__Pipe* this);
void os_Pipe__Pipe___load__();
void os_Pipe_load();

#endif // ___os_Pipe_fwd___
