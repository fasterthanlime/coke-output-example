/* native/win32/errors header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___native_win32_errors_fwd___
#define ___native_win32_errors_fwd___

#if defined(__WIN32__) || defined(__WIN64__)
#include <windows.h>
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
void native_win32_errors_load();
#if defined(__WIN32__) || defined(__WIN64__)
#define native_win32_errors__GetLastError GetLastError

#endif

#endif // ___native_win32_errors_fwd___
