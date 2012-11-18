/* io/native/FileWin32 header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_native_FileWin32___
#define ___io_native_FileWin32___

#include <sdk/io/native/FileWin32-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/io/File.h>

#if defined(__WIN32__) || defined(__WIN64__)
struct _io_native_FileWin32__FileWin32 {
    struct _io_File__File __super__;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _io_native_FileWin32__FindDataClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _io_native_FileWin32__FileWin32Class {
    struct _io_File__FileClass __super__;
    io_native_FileWin32__FileWin32* (*new_win32)(lang_String__String*);
    void (*init_win32)(io_native_FileWin32__FileWin32*, lang_String__String*);
    void (*_getFindData)(io_native_FileWin32__FileWin32*, io_native_FileWin32__FindData*, lang_types__Bool*);
    structs_ArrayList__ArrayList* (*_getChildren)(io_native_FileWin32__FileWin32*, lang_types__Class*);
};


#endif
#ifdef OOC_FROM_C
#define FindFirstFile(, ) io_native_FileWin32__FindFirstFile((), ())
#define FindNextFile(, ) io_native_FileWin32__FindNextFile((), ())
#define FindClose() io_native_FileWin32__FindClose(())
#define GetFileAttributes() io_native_FileWin32__GetFileAttributes(())
#define CreateDirectory(, ) io_native_FileWin32__CreateDirectory((), (void*) ())
#define GetCurrentDirectory(, ) io_native_FileWin32__GetCurrentDirectory((), (void*) ())
#define FindData io_native_FileWin32__FindData
#define FindData_class() io_native_FileWin32__FindData_class()
#define FindDataClass io_native_FileWin32__FindDataClass
#define FindDataClass_class() io_native_FileWin32__FindDataClass_class()
#define FindData___load__() io_native_FileWin32__FindData___load__()
#define FileWin32 io_native_FileWin32__FileWin32
#define FileWin32_class() io_native_FileWin32__FileWin32_class()
#define FileWin32Class io_native_FileWin32__FileWin32Class
#define FileWin32Class_class() io_native_FileWin32__FileWin32Class_class()
#define FileWin32_new_win32(path) (void*) io_native_FileWin32__FileWin32_new_win32((void*) (path))
#define FileWin32_init_win32(_this_, path) io_native_FileWin32__FileWin32_init_win32((void*) (_this_), (void*) (path))
#define FileWin32_exists__quest(_this_) io_native_FileWin32__FileWin32_exists__quest((void*) (_this_))
#define FileWin32__getFindData(_this_, __tupleArg135, __tupleArg136) io_native_FileWin32__FileWin32__getFindData((void*) (_this_), (__tupleArg135), (__tupleArg136))
#define FileWin32_dir__quest(_this_) io_native_FileWin32__FileWin32_dir__quest((void*) (_this_))
#define FileWin32_file__quest(_this_) io_native_FileWin32__FileWin32_file__quest((void*) (_this_))
#define FileWin32_link__quest(_this_) io_native_FileWin32__FileWin32_link__quest((void*) (_this_))
#define FileWin32_getSize(_this_) io_native_FileWin32__FileWin32_getSize((void*) (_this_))
#define FileWin32_ownerPerm(_this_) io_native_FileWin32__FileWin32_ownerPerm((void*) (_this_))
#define FileWin32_groupPerm(_this_) io_native_FileWin32__FileWin32_groupPerm((void*) (_this_))
#define FileWin32_otherPerm(_this_) io_native_FileWin32__FileWin32_otherPerm((void*) (_this_))
#define FileWin32_mkdir_withMode(_this_, mode) io_native_FileWin32__FileWin32_mkdir_withMode((void*) (_this_), (mode))
#define FileWin32_mkfifo_withMode(_this_, mode) io_native_FileWin32__FileWin32_mkfifo_withMode((void*) (_this_), (mode))
#define FileWin32_lastAccessed(_this_) io_native_FileWin32__FileWin32_lastAccessed((void*) (_this_))
#define FileWin32_lastModified(_this_) io_native_FileWin32__FileWin32_lastModified((void*) (_this_))
#define FileWin32_created(_this_) io_native_FileWin32__FileWin32_created((void*) (_this_))
#define FileWin32_relative__quest(_this_) io_native_FileWin32__FileWin32_relative__quest((void*) (_this_))
#define FileWin32_getAbsolutePath(_this_) (void*) io_native_FileWin32__FileWin32_getAbsolutePath((void*) (_this_))
#define FileWin32__getChildren(_this_, T, T) (void*) io_native_FileWin32__FileWin32__getChildren((void*) (_this_), (T), (void*) (T))
#define FileWin32_getChildrenNames(_this_) (void*) io_native_FileWin32__FileWin32_getChildrenNames((void*) (_this_))
#define FileWin32_getChildren(_this_) (void*) io_native_FileWin32__FileWin32_getChildren((void*) (_this_))
#define FileWin32___defaults__(_this_) io_native_FileWin32__FileWin32___defaults__((void*) (_this_))
#define FileWin32___load__() io_native_FileWin32__FileWin32___load__()
#endif

#endif // ___io_native_FileWin32___
