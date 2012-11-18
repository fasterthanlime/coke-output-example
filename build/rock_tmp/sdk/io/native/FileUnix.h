/* io/native/FileUnix header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_native_FileUnix___
#define ___io_native_FileUnix___

#include <sdk/io/native/FileUnix-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/io/File.h>

#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _io_native_FileUnix__FileUnix {
    struct _io_File__File __super__;
};


#endif
struct _io_native_FileUnix__DIRClass {
    struct _lang_types__ClassClass __super__;
};


struct _io_native_FileUnix__DirEntClass {
    struct _lang_types__ClassClass __super__;
};


#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _io_native_FileUnix__TimeTClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _io_native_FileUnix__ModeTClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _io_native_FileUnix__FileStatClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _io_native_FileUnix__FileUnixClass {
    struct _io_File__FileClass __super__;
    io_native_FileUnix__FileUnix* (*new_unix)(lang_String__String*);
    void (*init_unix)(io_native_FileUnix__FileUnix*, lang_String__String*);
    io_native_FileUnix__FileStat (*_getFileStat)(io_native_FileUnix__FileUnix*);
    structs_ArrayList__ArrayList* (*_getChildren)(io_native_FileUnix__FileUnix*, lang_types__Class*);
};


#endif
#ifdef OOC_FROM_C
#define closedir() io_native_FileUnix__closedir(())
#define opendir() io_native_FileUnix__opendir(())
#define readdir() io_native_FileUnix__readdir(())
#define readdir_r(, , ) io_native_FileUnix__readdir_r((), (), ())
#define rewinddir() io_native_FileUnix__rewinddir(())
#define seekdir(, ) io_native_FileUnix__seekdir((), ())
#define telldir() io_native_FileUnix__telldir(())
#define realpath(path, resolved) io_native_FileUnix__realpath((path), (resolved))
#define _getcwd(buf, size) io_native_FileUnix___getcwd((buf), (size))
#define S_ISDIR(...) io_native_FileUnix__S_ISDIR(__VA_ARGS__)
#define S_ISREG(...) io_native_FileUnix__S_ISREG(__VA_ARGS__)
#define S_ISLNK(...) io_native_FileUnix__S_ISLNK(__VA_ARGS__)
#define lstat(, ) io_native_FileUnix__lstat((), ())
#define _mkdir(, ) io_native_FileUnix___mkdir((), ())
#define _mkfifo(, ) io_native_FileUnix___mkfifo((), ())
#define remove(path) io_native_FileUnix__remove((path))
#define DIRClass io_native_FileUnix__DIRClass
#define DIRClass_class() io_native_FileUnix__DIRClass_class()
#define DIR___load__() DIR___load__()
#define DirEnt io_native_FileUnix__DirEnt
#define DirEnt_class() io_native_FileUnix__DirEnt_class()
#define DirEntClass io_native_FileUnix__DirEntClass
#define DirEntClass_class() io_native_FileUnix__DirEntClass_class()
#define DirEnt___load__() io_native_FileUnix__DirEnt___load__()
#define TimeT io_native_FileUnix__TimeT
#define TimeT_class() io_native_FileUnix__TimeT_class()
#define TimeTClass io_native_FileUnix__TimeTClass
#define TimeTClass_class() io_native_FileUnix__TimeTClass_class()
#define TimeT___load__() io_native_FileUnix__TimeT___load__()
#define ModeT io_native_FileUnix__ModeT
#define ModeT_class() io_native_FileUnix__ModeT_class()
#define ModeTClass io_native_FileUnix__ModeTClass
#define ModeTClass_class() io_native_FileUnix__ModeTClass_class()
#define ModeT___load__() io_native_FileUnix__ModeT___load__()
#define FileStat io_native_FileUnix__FileStat
#define FileStat_class() io_native_FileUnix__FileStat_class()
#define FileStatClass io_native_FileUnix__FileStatClass
#define FileStatClass_class() io_native_FileUnix__FileStatClass_class()
#define FileStat___load__() io_native_FileUnix__FileStat___load__()
#define FileUnix io_native_FileUnix__FileUnix
#define FileUnix_class() io_native_FileUnix__FileUnix_class()
#define FileUnixClass io_native_FileUnix__FileUnixClass
#define FileUnixClass_class() io_native_FileUnix__FileUnixClass_class()
#define FileUnix_new_unix(path) (void*) io_native_FileUnix__FileUnix_new_unix((void*) (path))
#define FileUnix_init_unix(_this_, path) io_native_FileUnix__FileUnix_init_unix((void*) (_this_), (void*) (path))
#define FileUnix__getFileStat(_this_) io_native_FileUnix__FileUnix__getFileStat((void*) (_this_))
#define FileUnix_dir__quest(_this_) io_native_FileUnix__FileUnix_dir__quest((void*) (_this_))
#define FileUnix_file__quest(_this_) io_native_FileUnix__FileUnix_file__quest((void*) (_this_))
#define FileUnix_link__quest(_this_) io_native_FileUnix__FileUnix_link__quest((void*) (_this_))
#define FileUnix_getSize(_this_) io_native_FileUnix__FileUnix_getSize((void*) (_this_))
#define FileUnix_ownerPerm(_this_) io_native_FileUnix__FileUnix_ownerPerm((void*) (_this_))
#define FileUnix_groupPerm(_this_) io_native_FileUnix__FileUnix_groupPerm((void*) (_this_))
#define FileUnix_otherPerm(_this_) io_native_FileUnix__FileUnix_otherPerm((void*) (_this_))
#define FileUnix_lastAccessed(_this_) io_native_FileUnix__FileUnix_lastAccessed((void*) (_this_))
#define FileUnix_lastModified(_this_) io_native_FileUnix__FileUnix_lastModified((void*) (_this_))
#define FileUnix_created(_this_) io_native_FileUnix__FileUnix_created((void*) (_this_))
#define FileUnix_relative__quest(_this_) io_native_FileUnix__FileUnix_relative__quest((void*) (_this_))
#define FileUnix_getAbsolutePath(_this_) (void*) io_native_FileUnix__FileUnix_getAbsolutePath((void*) (_this_))
#define FileUnix_getAbsoluteFile(_this_) (void*) io_native_FileUnix__FileUnix_getAbsoluteFile((void*) (_this_))
#define FileUnix__getChildren(_this_, T, T) (void*) io_native_FileUnix__FileUnix__getChildren((void*) (_this_), (T), (void*) (T))
#define FileUnix_getChildrenNames(_this_) (void*) io_native_FileUnix__FileUnix_getChildrenNames((void*) (_this_))
#define FileUnix_getChildren(_this_) (void*) io_native_FileUnix__FileUnix_getChildren((void*) (_this_))
#define FileUnix_mkdir_withMode(_this_, mode) io_native_FileUnix__FileUnix_mkdir_withMode((void*) (_this_), (mode))
#define FileUnix_mkfifo_withMode(_this_, mode) io_native_FileUnix__FileUnix_mkfifo_withMode((void*) (_this_), (mode))
#define FileUnix___defaults__(_this_) io_native_FileUnix__FileUnix___defaults__((void*) (_this_))
#define FileUnix___load__() io_native_FileUnix__FileUnix___load__()
#endif

#endif // ___io_native_FileUnix___
