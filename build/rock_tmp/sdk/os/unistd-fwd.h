/* os/unistd header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___os_unistd_fwd___
#define ___os_unistd_fwd___

#ifndef __USE_GNU
#define __USE_GNU __USE_GNU
#define __USE_GNU___defined
#endif
#include <unistd.h>
#ifdef __USE_GNU___defined
#undef __USE_GNU
#undef __USE_GNU___defined
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
void os_unistd_load();
#define os_unistd__chdir chdir

#define os_unistd__dup2 dup2

#define os_unistd__execv execv

#define os_unistd__execvp execvp

#define os_unistd__execve execve

#define os_unistd__fileno fileno

#define os_unistd__fork fork

#define os_unistd__getpid getpid

#define os_unistd__pipe pipe

#define os_unistd__isatty isatty


#endif // ___os_unistd_fwd___
