/* os/native/PipeUnix header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___os_native_PipeUnix_fwd___
#define ___os_native_PipeUnix_fwd___

#if ((defined(__unix__)) || (defined(__APPLE__)))
#include <fcntl.h>
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
#include <sys/stat.h>
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
#include <sys/types.h>
#endif

#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _os_native_PipeUnix__PipeUnix;
typedef struct _os_native_PipeUnix__PipeUnix os_native_PipeUnix__PipeUnix;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _os_native_PipeUnix__PipeUnixClass;
typedef struct _os_native_PipeUnix__PipeUnixClass os_native_PipeUnix__PipeUnixClass;
#endif

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
#include <sdk/os/unistd-fwd.h>
#include <sdk/os/FileDescriptor-fwd.h>
#include <sdk/os/Pipe-fwd.h>
#if ((defined(__unix__)) || (defined(__APPLE__)))
os_native_PipeUnix__PipeUnixClass *os_native_PipeUnix__PipeUnix_class();
os_native_PipeUnix__PipeUnix* os_native_PipeUnix__PipeUnix_new_withFDs(os_FileDescriptor__FileDescriptor readFD, os_FileDescriptor__FileDescriptor writeFD);
void os_native_PipeUnix__PipeUnix_init_withFDs(os_native_PipeUnix__PipeUnix* this, os_FileDescriptor__FileDescriptor readFD, os_FileDescriptor__FileDescriptor writeFD);
os_native_PipeUnix__PipeUnix* os_native_PipeUnix__PipeUnix_new_twos();
void os_native_PipeUnix__PipeUnix_init_twos(os_native_PipeUnix__PipeUnix* this);
lang_types__Pointer os_native_PipeUnix__PipeUnix_read(os_native_PipeUnix__PipeUnix* this, lang_Numbers__Int len);
lang_types__Pointer os_native_PipeUnix__PipeUnix_read_impl(os_native_PipeUnix__PipeUnix* this, lang_Numbers__Int len);
lang_Numbers__Int os_native_PipeUnix__PipeUnix_write(os_native_PipeUnix__PipeUnix* this, lang_types__Pointer data, lang_Numbers__Int len);
lang_Numbers__Int os_native_PipeUnix__PipeUnix_write_impl(os_native_PipeUnix__PipeUnix* this, lang_types__Pointer data, lang_Numbers__Int len);
lang_Numbers__Int os_native_PipeUnix__PipeUnix_close(os_native_PipeUnix__PipeUnix* this, lang_Character__Char mode);
lang_Numbers__Int os_native_PipeUnix__PipeUnix_close_impl(os_native_PipeUnix__PipeUnix* this, lang_Character__Char mode);
void os_native_PipeUnix__PipeUnix___defaults__(os_native_PipeUnix__PipeUnix* this);
void os_native_PipeUnix__PipeUnix___defaults___impl(os_native_PipeUnix__PipeUnix* this);
void os_native_PipeUnix__PipeUnix___load__();
#endif
void os_native_PipeUnix_load();

#endif // ___os_native_PipeUnix_fwd___
