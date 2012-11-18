/* io/native/FileUnix header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_native_FileUnix_fwd___
#define ___io_native_FileUnix_fwd___

#include <dirent.h>
#if defined(__linux__)
#ifndef __USE_BSD
#define __USE_BSD __USE_BSD
#define __USE_BSD___defined
#endif
#include <unistd.h>
#ifdef __USE_BSD___defined
#undef __USE_BSD
#undef __USE_BSD___defined
#endif
#endif
#if defined(__linux__)
#ifndef __USE_BSD
#define __USE_BSD __USE_BSD
#define __USE_BSD___defined
#endif
#include <sys/stat.h>
#ifdef __USE_BSD___defined
#undef __USE_BSD
#undef __USE_BSD___defined
#endif
#endif
#if defined(__linux__)
#ifndef __USE_BSD
#define __USE_BSD __USE_BSD
#define __USE_BSD___defined
#endif
#include <sys/types.h>
#ifdef __USE_BSD___defined
#undef __USE_BSD
#undef __USE_BSD___defined
#endif
#endif
#if defined(__linux__)
#ifndef __USE_BSD
#define __USE_BSD __USE_BSD
#define __USE_BSD___defined
#endif
#include <stdlib.h>
#ifdef __USE_BSD___defined
#undef __USE_BSD
#undef __USE_BSD___defined
#endif
#endif
#if defined(__linux__)
#include <limits.h>
#endif
#if !(defined(__linux__))
#include <unistd.h>
#endif
#if !(defined(__linux__))
#include <sys/stat.h>
#endif
#if !(defined(__linux__))
#include <sys/types.h>
#endif
#if !(defined(__linux__))
#include <stdlib.h>
#endif

typedef struct dirent io_native_FileUnix__DirEnt;
#if ((defined(__unix__)) || (defined(__APPLE__)))
typedef time_t io_native_FileUnix__TimeT;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
typedef mode_t io_native_FileUnix__ModeT;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
typedef struct stat io_native_FileUnix__FileStat;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _io_native_FileUnix__FileUnix;
typedef struct _io_native_FileUnix__FileUnix io_native_FileUnix__FileUnix;
#endif
struct _io_native_FileUnix__DIRClass;
typedef struct _io_native_FileUnix__DIRClass io_native_FileUnix__DIRClass;
struct _io_native_FileUnix__DirEntClass;
typedef struct _io_native_FileUnix__DirEntClass io_native_FileUnix__DirEntClass;
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _io_native_FileUnix__TimeTClass;
typedef struct _io_native_FileUnix__TimeTClass io_native_FileUnix__TimeTClass;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _io_native_FileUnix__ModeTClass;
typedef struct _io_native_FileUnix__ModeTClass io_native_FileUnix__ModeTClass;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _io_native_FileUnix__FileStatClass;
typedef struct _io_native_FileUnix__FileStatClass io_native_FileUnix__FileStatClass;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _io_native_FileUnix__FileUnixClass;
typedef struct _io_native_FileUnix__FileUnixClass io_native_FileUnix__FileUnixClass;
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
#include <sdk/io/File-fwd.h>
#include <sdk/structs/ArrayList-fwd.h>
io_native_FileUnix__DIRClass *DIR_class();
void DIR___load__();
io_native_FileUnix__DirEntClass *io_native_FileUnix__DirEnt_class();
void io_native_FileUnix__DirEnt___load__();
#if ((defined(__unix__)) || (defined(__APPLE__)))
io_native_FileUnix__TimeTClass *io_native_FileUnix__TimeT_class();
void io_native_FileUnix__TimeT___load__();
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
io_native_FileUnix__ModeTClass *io_native_FileUnix__ModeT_class();
void io_native_FileUnix__ModeT___load__();
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
io_native_FileUnix__FileStatClass *io_native_FileUnix__FileStat_class();
void io_native_FileUnix__FileStat___load__();
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
io_native_FileUnix__FileUnixClass *io_native_FileUnix__FileUnix_class();
io_native_FileUnix__FileUnix* io_native_FileUnix__FileUnix_new_unix(lang_String__String* path);
void io_native_FileUnix__FileUnix_init_unix(io_native_FileUnix__FileUnix* this, lang_String__String* path);
io_native_FileUnix__FileStat io_native_FileUnix__FileUnix__getFileStat(io_native_FileUnix__FileUnix* this);
io_native_FileUnix__FileStat io_native_FileUnix__FileUnix__getFileStat_impl(io_native_FileUnix__FileUnix* this);
lang_types__Bool io_native_FileUnix__FileUnix_dir__quest(io_native_FileUnix__FileUnix* this);
lang_types__Bool io_native_FileUnix__FileUnix_dir__quest_impl(io_native_FileUnix__FileUnix* this);
lang_types__Bool io_native_FileUnix__FileUnix_file__quest(io_native_FileUnix__FileUnix* this);
lang_types__Bool io_native_FileUnix__FileUnix_file__quest_impl(io_native_FileUnix__FileUnix* this);
lang_types__Bool io_native_FileUnix__FileUnix_link__quest(io_native_FileUnix__FileUnix* this);
lang_types__Bool io_native_FileUnix__FileUnix_link__quest_impl(io_native_FileUnix__FileUnix* this);
lang_Numbers__LLong io_native_FileUnix__FileUnix_getSize(io_native_FileUnix__FileUnix* this);
lang_Numbers__LLong io_native_FileUnix__FileUnix_getSize_impl(io_native_FileUnix__FileUnix* this);
lang_Numbers__Int io_native_FileUnix__FileUnix_ownerPerm(io_native_FileUnix__FileUnix* this);
lang_Numbers__Int io_native_FileUnix__FileUnix_ownerPerm_impl(io_native_FileUnix__FileUnix* this);
lang_Numbers__Int io_native_FileUnix__FileUnix_groupPerm(io_native_FileUnix__FileUnix* this);
lang_Numbers__Int io_native_FileUnix__FileUnix_groupPerm_impl(io_native_FileUnix__FileUnix* this);
lang_Numbers__Int io_native_FileUnix__FileUnix_otherPerm(io_native_FileUnix__FileUnix* this);
lang_Numbers__Int io_native_FileUnix__FileUnix_otherPerm_impl(io_native_FileUnix__FileUnix* this);
lang_Numbers__Long io_native_FileUnix__FileUnix_lastAccessed(io_native_FileUnix__FileUnix* this);
lang_Numbers__Long io_native_FileUnix__FileUnix_lastAccessed_impl(io_native_FileUnix__FileUnix* this);
lang_Numbers__Long io_native_FileUnix__FileUnix_lastModified(io_native_FileUnix__FileUnix* this);
lang_Numbers__Long io_native_FileUnix__FileUnix_lastModified_impl(io_native_FileUnix__FileUnix* this);
lang_Numbers__Long io_native_FileUnix__FileUnix_created(io_native_FileUnix__FileUnix* this);
lang_Numbers__Long io_native_FileUnix__FileUnix_created_impl(io_native_FileUnix__FileUnix* this);
lang_types__Bool io_native_FileUnix__FileUnix_relative__quest(io_native_FileUnix__FileUnix* this);
lang_types__Bool io_native_FileUnix__FileUnix_relative__quest_impl(io_native_FileUnix__FileUnix* this);
lang_String__String* io_native_FileUnix__FileUnix_getAbsolutePath(io_native_FileUnix__FileUnix* this);
lang_String__String* io_native_FileUnix__FileUnix_getAbsolutePath_impl(io_native_FileUnix__FileUnix* this);
io_File__File* io_native_FileUnix__FileUnix_getAbsoluteFile(io_native_FileUnix__FileUnix* this);
io_File__File* io_native_FileUnix__FileUnix_getAbsoluteFile_impl(io_native_FileUnix__FileUnix* this);
structs_ArrayList__ArrayList* io_native_FileUnix__FileUnix__getChildren(io_native_FileUnix__FileUnix* this, lang_types__Class* T);
structs_ArrayList__ArrayList* io_native_FileUnix__FileUnix__getChildren_impl(io_native_FileUnix__FileUnix* this, lang_types__Class* T);
structs_ArrayList__ArrayList* io_native_FileUnix__FileUnix_getChildrenNames(io_native_FileUnix__FileUnix* this);
structs_ArrayList__ArrayList* io_native_FileUnix__FileUnix_getChildrenNames_impl(io_native_FileUnix__FileUnix* this);
structs_ArrayList__ArrayList* io_native_FileUnix__FileUnix_getChildren(io_native_FileUnix__FileUnix* this);
structs_ArrayList__ArrayList* io_native_FileUnix__FileUnix_getChildren_impl(io_native_FileUnix__FileUnix* this);
lang_Numbers__Int io_native_FileUnix__FileUnix_mkdir_withMode(io_native_FileUnix__FileUnix* this, lang_Numbers__Int32 mode);
lang_Numbers__Int io_native_FileUnix__FileUnix_mkdir_withMode_impl(io_native_FileUnix__FileUnix* this, lang_Numbers__Int32 mode);
lang_Numbers__Int io_native_FileUnix__FileUnix_mkfifo_withMode(io_native_FileUnix__FileUnix* this, lang_Numbers__Int32 mode);
lang_Numbers__Int io_native_FileUnix__FileUnix_mkfifo_withMode_impl(io_native_FileUnix__FileUnix* this, lang_Numbers__Int32 mode);
void io_native_FileUnix__FileUnix___defaults__(io_native_FileUnix__FileUnix* this);
void io_native_FileUnix__FileUnix___defaults___impl(io_native_FileUnix__FileUnix* this);
void io_native_FileUnix__FileUnix___load__();
#endif
void io_native_FileUnix_load();
#define io_native_FileUnix__closedir closedir

#define io_native_FileUnix__opendir opendir

#define io_native_FileUnix__readdir readdir

#define io_native_FileUnix__readdir_r readdir_r

#define io_native_FileUnix__rewinddir rewinddir

#define io_native_FileUnix__seekdir seekdir

#define io_native_FileUnix__telldir telldir

#define io_native_FileUnix__realpath realpath

#if ((defined(__unix__)) || (defined(__APPLE__)))
#define io_native_FileUnix___getcwd getcwd

#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
lang_String__String* ooc_get_cwd();
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
#define io_native_FileUnix__S_ISDIR S_ISDIR

#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
#define io_native_FileUnix__S_ISREG S_ISREG

#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
#define io_native_FileUnix__S_ISLNK S_ISLNK

#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
#define io_native_FileUnix__lstat lstat

#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
#define io_native_FileUnix___mkdir mkdir

#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
#define io_native_FileUnix___mkfifo mkfifo

#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
#define io_native_FileUnix__remove remove

#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
lang_Numbers__Int _remove(lang_String__String* path);
#endif

#endif // ___io_native_FileUnix_fwd___
