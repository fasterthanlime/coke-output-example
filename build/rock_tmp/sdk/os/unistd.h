/* os/unistd header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___os_unistd___
#define ___os_unistd___

#include <sdk/os/unistd-fwd.h>

#ifdef OOC_FROM_C
#define chdir() os_unistd__chdir(())
#define dup2(, ) os_unistd__dup2((), ())
#define execv(, ) os_unistd__execv((), ())
#define execvp(, ) os_unistd__execvp((), ())
#define execve(, , ) os_unistd__execve((), (), ())
#define fileno() os_unistd__fileno(())
#define fork() os_unistd__fork()
#define getpid() os_unistd__getpid()
#define pipe(arg) os_unistd__pipe((arg))
#define isatty(fd) os_unistd__isatty((fd))
#endif

#endif // ___os_unistd___
