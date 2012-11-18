/* wget-like header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___wget_like_fwd___
#define ___wget_like_fwd___

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
#include <source/curl/Curl-fwd.h>
#include <sdk/io/FileWriter-fwd.h>
#include <sdk/structs/ArrayList-fwd.h>
void wget_like_load();
void wget_like__writecb(lang_types__Pointer buffer, lang_Numbers__SizeT size, lang_Numbers__SizeT nmemb, io_FileWriter__FileWriter* fw);
lang_Numbers__Int main(lang_Numbers__Int argc, lang_Character__CString* argv);

#endif // ___wget_like_fwd___
