/* wget-like header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___wget_like___
#define ___wget_like___

#include <./wget-like-fwd.h>

#ifdef OOC_FROM_C
#define writecb(buffer, size, nmemb, fw) wget_like__writecb((void*) (buffer), (size), (nmemb), (void*) (fw))
#endif

#endif // ___wget_like___
