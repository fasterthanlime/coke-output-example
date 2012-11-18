/* io/File header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_File___
#define ___io_File___

#include <sdk/io/File-fwd.h>
#include <sdk/lang/types.h>

struct _io_File__File {
    struct _lang_types__Object __super__;
    lang_String__String* path;
};


struct _io_File__FileClass {
    struct _lang_types__ClassClass __super__;
    lang_Character__Char separator;
    lang_Character__Char pathDelimiter;
    lang_Numbers__SSizeT MAX_PATH_LENGTH;
    void (*init)(io_File__File*);
    io_File__File* (*new)(lang_String__String*);
    io_File__File* (*new_parentFile)(io_File__File*, lang_String__String*);
    io_File__File* (*new_parentPath)(lang_String__String*, lang_String__String*);
    lang_types__Bool (*dir__quest)(io_File__File*);
    lang_types__Bool (*file__quest)(io_File__File*);
    lang_types__Bool (*link__quest)(io_File__File*);
    lang_Numbers__LLong (*getSize)(io_File__File*);
    lang_types__Bool (*exists__quest)(io_File__File*);
    lang_Numbers__Int (*ownerPerm)(io_File__File*);
    lang_Numbers__Int (*groupPerm)(io_File__File*);
    lang_Numbers__Int (*otherPerm)(io_File__File*);
    lang_String__String* (*name)(io_File__File*);
    io_File__File* (*parent)(io_File__File*);
    lang_String__String* (*parentName)(io_File__File*);
    lang_Numbers__Int (*mkfifo)(io_File__File*);
    lang_Numbers__Int (*mkfifo_withMode)(io_File__File*, lang_Numbers__Int32);
    lang_Numbers__Int (*mkdir)(io_File__File*);
    lang_Numbers__Int (*mkdir_withMode)(io_File__File*, lang_Numbers__Int32);
    void (*mkdirs)(io_File__File*);
    lang_Numbers__Int (*mkdirs_withMode)(io_File__File*, lang_Numbers__Int32);
    lang_Numbers__Long (*lastAccessed)(io_File__File*);
    lang_Numbers__Long (*lastModified)(io_File__File*);
    lang_Numbers__Long (*created)(io_File__File*);
    lang_types__Bool (*relative__quest)(io_File__File*);
    lang_String__String* (*getPath)(io_File__File*);
    lang_String__String* (*getAbsolutePath)(io_File__File*);
    io_File__File* (*getAbsoluteFile)(io_File__File*);
    lang_String__String* (*getReducedPath)(io_File__File*);
    structs_ArrayList__ArrayList* (*getChildrenNames)(io_File__File*);
    structs_ArrayList__ArrayList* (*getChildren)(io_File__File*);
    lang_Numbers__Int (*remove)(io_File__File*);
    void (*copyTo)(io_File__File*, io_File__File*);
    lang_String__String* (*read)(io_File__File*);
    void (*write_string)(io_File__File*, lang_String__String*);
    void (*write_reader)(io_File__File*, io_Reader__Reader*);
    lang_types__Bool (*walk)(io_File__File*, lang_types__Closure);
    io_File__File* (*getChild)(io_File__File*, lang_String__String*);
    lang_String__String* (*getCwd)();
    lang_String__String* (*__getpath__)(io_File__File*);
    void (*__setpath__)(io_File__File*, lang_String__String*);
    structs_ArrayList__ArrayList* (*__getchildren__)(io_File__File*);
};


#ifdef OOC_FROM_C
#define _isDirHardlink__quest(dir) io_File___isDirHardlink__quest((dir))
#define File io_File__File
#define File_class() io_File__File_class()
#define FileClass io_File__FileClass
#define FileClass_class() io_File__FileClass_class()
#define File_init(_this_) io_File__File_init((void*) (_this_))
#define File_new(path) (void*) io_File__File_new((void*) (path))
#define File_new_parentFile(parent, path) (void*) io_File__File_new_parentFile((void*) (parent), (void*) (path))
#define File_new_parentPath(parent, path) (void*) io_File__File_new_parentPath((void*) (parent), (void*) (path))
#define File_dir__quest(_this_) io_File__File_dir__quest((void*) (_this_))
#define File_file__quest(_this_) io_File__File_file__quest((void*) (_this_))
#define File_link__quest(_this_) io_File__File_link__quest((void*) (_this_))
#define File_getSize(_this_) io_File__File_getSize((void*) (_this_))
#define File_exists__quest(_this_) io_File__File_exists__quest((void*) (_this_))
#define File_ownerPerm(_this_) io_File__File_ownerPerm((void*) (_this_))
#define File_groupPerm(_this_) io_File__File_groupPerm((void*) (_this_))
#define File_otherPerm(_this_) io_File__File_otherPerm((void*) (_this_))
#define File_name(_this_) (void*) io_File__File_name((void*) (_this_))
#define File_parent(_this_) (void*) io_File__File_parent((void*) (_this_))
#define File_parentName(_this_) (void*) io_File__File_parentName((void*) (_this_))
#define File_mkfifo(_this_) io_File__File_mkfifo((void*) (_this_))
#define File_mkfifo_withMode(_this_, mode) io_File__File_mkfifo_withMode((void*) (_this_), (mode))
#define File_mkdir(_this_) io_File__File_mkdir((void*) (_this_))
#define File_mkdir_withMode(_this_, mode) io_File__File_mkdir_withMode((void*) (_this_), (mode))
#define File_mkdirs(_this_) io_File__File_mkdirs((void*) (_this_))
#define File_mkdirs_withMode(_this_, mode) io_File__File_mkdirs_withMode((void*) (_this_), (mode))
#define File_lastAccessed(_this_) io_File__File_lastAccessed((void*) (_this_))
#define File_lastModified(_this_) io_File__File_lastModified((void*) (_this_))
#define File_created(_this_) io_File__File_created((void*) (_this_))
#define File_relative__quest(_this_) io_File__File_relative__quest((void*) (_this_))
#define File_getPath(_this_) (void*) io_File__File_getPath((void*) (_this_))
#define File_getAbsolutePath(_this_) (void*) io_File__File_getAbsolutePath((void*) (_this_))
#define File_getAbsoluteFile(_this_) (void*) io_File__File_getAbsoluteFile((void*) (_this_))
#define File_getReducedPath(_this_) (void*) io_File__File_getReducedPath((void*) (_this_))
#define File_getChildrenNames(_this_) (void*) io_File__File_getChildrenNames((void*) (_this_))
#define File_getChildren(_this_) (void*) io_File__File_getChildren((void*) (_this_))
#define File_remove(_this_) io_File__File_remove((void*) (_this_))
#define File_copyTo(_this_, dstFile) io_File__File_copyTo((void*) (_this_), (void*) (dstFile))
#define File_read(_this_) (void*) io_File__File_read((void*) (_this_))
#define File_write_string(_this_, str) io_File__File_write_string((void*) (_this_), (void*) (str))
#define File_write_reader(_this_, reader) io_File__File_write_reader((void*) (_this_), (void*) (reader))
#define File_walk(_this_, f) io_File__File_walk((void*) (_this_), (f))
#define File_getChild(_this_, name) (void*) io_File__File_getChild((void*) (_this_), (void*) (name))
#define File_getCwd() (void*) io_File__File_getCwd()
#define File___getpath__(_this_) (void*) io_File__File___getpath__((void*) (_this_))
#define File___setpath__(_this_, path) io_File__File___setpath__((void*) (_this_), (void*) (path))
#define File___getchildren__(_this_) (void*) io_File__File___getchildren__((void*) (_this_))
#define File___defaults__(_this_) io_File__File___defaults__((void*) (_this_))
#define File___load__() io_File__File___load__()
#endif

#endif // ___io_File___
