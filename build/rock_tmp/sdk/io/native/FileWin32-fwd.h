/* io/native/FileWin32 header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_native_FileWin32_fwd___
#define ___io_native_FileWin32_fwd___

#if defined(__WIN32__) || defined(__WIN64__)
#include <windows.h>
#endif

#if defined(__WIN32__) || defined(__WIN64__)
typedef WIN32_FIND_DATA io_native_FileWin32__FindData;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _io_native_FileWin32__FileWin32;
typedef struct _io_native_FileWin32__FileWin32 io_native_FileWin32__FileWin32;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _io_native_FileWin32__FindDataClass;
typedef struct _io_native_FileWin32__FindDataClass io_native_FileWin32__FindDataClass;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _io_native_FileWin32__FileWin32Class;
typedef struct _io_native_FileWin32__FileWin32Class io_native_FileWin32__FileWin32Class;
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
#include <sdk/native/win32/types-fwd.h>
#include <sdk/structs/ArrayList-fwd.h>
#include <sdk/io/File-fwd.h>
#if defined(__WIN32__) || defined(__WIN64__)
io_native_FileWin32__FindDataClass *io_native_FileWin32__FindData_class();
void io_native_FileWin32__FindData___load__();
#endif
#if defined(__WIN32__) || defined(__WIN64__)
io_native_FileWin32__FileWin32Class *io_native_FileWin32__FileWin32_class();
io_native_FileWin32__FileWin32* io_native_FileWin32__FileWin32_new_win32(lang_String__String* path);
void io_native_FileWin32__FileWin32_init_win32(io_native_FileWin32__FileWin32* this, lang_String__String* path);
lang_types__Bool io_native_FileWin32__FileWin32_exists__quest(io_native_FileWin32__FileWin32* this);
lang_types__Bool io_native_FileWin32__FileWin32_exists__quest_impl(io_native_FileWin32__FileWin32* this);
void io_native_FileWin32__FileWin32__getFindData(io_native_FileWin32__FileWin32* this, io_native_FileWin32__FindData* __tupleArg135, lang_types__Bool* __tupleArg136);
void io_native_FileWin32__FileWin32__getFindData_impl(io_native_FileWin32__FileWin32* this, io_native_FileWin32__FindData* __tupleArg135, lang_types__Bool* __tupleArg136);
lang_types__Bool io_native_FileWin32__FileWin32_dir__quest(io_native_FileWin32__FileWin32* this);
lang_types__Bool io_native_FileWin32__FileWin32_dir__quest_impl(io_native_FileWin32__FileWin32* this);
lang_types__Bool io_native_FileWin32__FileWin32_file__quest(io_native_FileWin32__FileWin32* this);
lang_types__Bool io_native_FileWin32__FileWin32_file__quest_impl(io_native_FileWin32__FileWin32* this);
lang_types__Bool io_native_FileWin32__FileWin32_link__quest(io_native_FileWin32__FileWin32* this);
lang_types__Bool io_native_FileWin32__FileWin32_link__quest_impl(io_native_FileWin32__FileWin32* this);
lang_Numbers__LLong io_native_FileWin32__FileWin32_getSize(io_native_FileWin32__FileWin32* this);
lang_Numbers__LLong io_native_FileWin32__FileWin32_getSize_impl(io_native_FileWin32__FileWin32* this);
lang_Numbers__Int io_native_FileWin32__FileWin32_ownerPerm(io_native_FileWin32__FileWin32* this);
lang_Numbers__Int io_native_FileWin32__FileWin32_ownerPerm_impl(io_native_FileWin32__FileWin32* this);
lang_Numbers__Int io_native_FileWin32__FileWin32_groupPerm(io_native_FileWin32__FileWin32* this);
lang_Numbers__Int io_native_FileWin32__FileWin32_groupPerm_impl(io_native_FileWin32__FileWin32* this);
lang_Numbers__Int io_native_FileWin32__FileWin32_otherPerm(io_native_FileWin32__FileWin32* this);
lang_Numbers__Int io_native_FileWin32__FileWin32_otherPerm_impl(io_native_FileWin32__FileWin32* this);
lang_Numbers__Int io_native_FileWin32__FileWin32_mkdir_withMode(io_native_FileWin32__FileWin32* this, lang_Numbers__Int32 mode);
lang_Numbers__Int io_native_FileWin32__FileWin32_mkdir_withMode_impl(io_native_FileWin32__FileWin32* this, lang_Numbers__Int32 mode);
lang_Numbers__Int io_native_FileWin32__FileWin32_mkfifo_withMode(io_native_FileWin32__FileWin32* this, lang_Numbers__Int32 mode);
lang_Numbers__Int io_native_FileWin32__FileWin32_mkfifo_withMode_impl(io_native_FileWin32__FileWin32* this, lang_Numbers__Int32 mode);
lang_Numbers__Long io_native_FileWin32__FileWin32_lastAccessed(io_native_FileWin32__FileWin32* this);
lang_Numbers__Long io_native_FileWin32__FileWin32_lastAccessed_impl(io_native_FileWin32__FileWin32* this);
lang_Numbers__Long io_native_FileWin32__FileWin32_lastModified(io_native_FileWin32__FileWin32* this);
lang_Numbers__Long io_native_FileWin32__FileWin32_lastModified_impl(io_native_FileWin32__FileWin32* this);
lang_Numbers__Long io_native_FileWin32__FileWin32_created(io_native_FileWin32__FileWin32* this);
lang_Numbers__Long io_native_FileWin32__FileWin32_created_impl(io_native_FileWin32__FileWin32* this);
lang_types__Bool io_native_FileWin32__FileWin32_relative__quest(io_native_FileWin32__FileWin32* this);
lang_types__Bool io_native_FileWin32__FileWin32_relative__quest_impl(io_native_FileWin32__FileWin32* this);
lang_String__String* io_native_FileWin32__FileWin32_getAbsolutePath(io_native_FileWin32__FileWin32* this);
lang_String__String* io_native_FileWin32__FileWin32_getAbsolutePath_impl(io_native_FileWin32__FileWin32* this);
structs_ArrayList__ArrayList* io_native_FileWin32__FileWin32__getChildren(io_native_FileWin32__FileWin32* this, lang_types__Class* T);
structs_ArrayList__ArrayList* io_native_FileWin32__FileWin32__getChildren_impl(io_native_FileWin32__FileWin32* this, lang_types__Class* T);
structs_ArrayList__ArrayList* io_native_FileWin32__FileWin32_getChildrenNames(io_native_FileWin32__FileWin32* this);
structs_ArrayList__ArrayList* io_native_FileWin32__FileWin32_getChildrenNames_impl(io_native_FileWin32__FileWin32* this);
structs_ArrayList__ArrayList* io_native_FileWin32__FileWin32_getChildren(io_native_FileWin32__FileWin32* this);
structs_ArrayList__ArrayList* io_native_FileWin32__FileWin32_getChildren_impl(io_native_FileWin32__FileWin32* this);
void io_native_FileWin32__FileWin32___defaults__(io_native_FileWin32__FileWin32* this);
void io_native_FileWin32__FileWin32___defaults___impl(io_native_FileWin32__FileWin32* this);
void io_native_FileWin32__FileWin32___load__();
#endif
void io_native_FileWin32_load();
#if defined(__WIN32__) || defined(__WIN64__)
#define io_native_FileWin32__FindFirstFile FindFirstFileA

#endif
#if defined(__WIN32__) || defined(__WIN64__)
#define io_native_FileWin32__FindNextFile FindNextFile

#endif
#if defined(__WIN32__) || defined(__WIN64__)
#define io_native_FileWin32__FindClose FindClose

#endif
#if defined(__WIN32__) || defined(__WIN64__)
#define io_native_FileWin32__GetFileAttributes GetFileAttributes

#endif
#if defined(__WIN32__) || defined(__WIN64__)
#define io_native_FileWin32__CreateDirectory CreateDirectory

#endif
#if defined(__WIN32__) || defined(__WIN64__)
#define io_native_FileWin32__GetCurrentDirectory GetCurrentDirectory

#endif
#if defined(__WIN32__) || defined(__WIN64__)
lang_Numbers__Int _remove(lang_String__String* path);
#endif
#if defined(__WIN32__) || defined(__WIN64__)
lang_String__String* ooc_get_cwd();
#endif

#endif // ___io_native_FileWin32_fwd___
