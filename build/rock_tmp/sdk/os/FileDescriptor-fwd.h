/* os/FileDescriptor header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___os_FileDescriptor_fwd___
#define ___os_FileDescriptor_fwd___

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

typedef signed int os_FileDescriptor__FileDescriptor;
struct _os_FileDescriptor__FileDescriptorClass;
typedef struct _os_FileDescriptor__FileDescriptorClass os_FileDescriptor__FileDescriptorClass;

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
os_FileDescriptor__FileDescriptorClass *os_FileDescriptor__FileDescriptor_class();
lang_Numbers__Int os_FileDescriptor__FileDescriptor_write_string(os_FileDescriptor__FileDescriptor this, lang_String__String* str);
lang_types__Pointer os_FileDescriptor__FileDescriptor_read_evilAlloc(os_FileDescriptor__FileDescriptor this, lang_Numbers__Int len);
#define os_FileDescriptor__FileDescriptor_write write

#define os_FileDescriptor__FileDescriptor_read read

#define os_FileDescriptor__FileDescriptor_close close

void os_FileDescriptor__FileDescriptor__errMsg(os_FileDescriptor__FileDescriptor this, lang_Numbers__Int var, lang_String__String* funcName);
void os_FileDescriptor__FileDescriptor___load__();
void os_FileDescriptor_load();
#define os_FileDescriptor__open open


#endif // ___os_FileDescriptor_fwd___
