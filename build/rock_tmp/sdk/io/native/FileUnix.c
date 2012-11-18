/* io/native/FileUnix source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/io/native/FileUnix.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/BufferIterator.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Character.h>
#include <sdk/lang/VarArgs.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/Memory.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Buffer.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Abstractions.h>
#include <sdk/lang/Format.h>
#include <sdk/lang/IO.h>
#include <sdk/structs/ArrayList.h>

static lang_String__String* __strLit150;
static lang_String__String* __strLit149;
static lang_String__String* __strLit148;
static lang_String__String* __strLit147;
static lang_String__String* __strLit146;
static lang_String__String* __strLit145;
static lang_String__String* __strLit144;
static lang_String__String* __strLit143;
void DIR___load__() {
    lang_types__Class___load__();
}
void io_native_FileUnix__DirEnt___load__() {
    lang_types__Class___load__();
}

io_native_FileUnix__DirEntClass *io_native_FileUnix__DirEnt_class(){
    static _Bool __done__ = false;
    static io_native_FileUnix__DirEntClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(io_native_FileUnix__DirEnt),
                    .size = sizeof(io_native_FileUnix__DirEnt)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) io_native_FileUnix__DirEnt___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("DirEnt", 6);
    }
    return &class;
}
#if ((defined(__unix__)) || (defined(__APPLE__)))
void io_native_FileUnix__TimeT___load__() {
    lang_types__Class___load__();
}

io_native_FileUnix__TimeTClass *io_native_FileUnix__TimeT_class(){
    static _Bool __done__ = false;
    static io_native_FileUnix__TimeTClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(io_native_FileUnix__TimeT),
                    .size = sizeof(io_native_FileUnix__TimeT)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) io_native_FileUnix__TimeT___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("TimeT", 5);
    }
    return &class;
}
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
void io_native_FileUnix__ModeT___load__() {
    lang_types__Class___load__();
}

io_native_FileUnix__ModeTClass *io_native_FileUnix__ModeT_class(){
    static _Bool __done__ = false;
    static io_native_FileUnix__ModeTClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(io_native_FileUnix__ModeT),
                    .size = sizeof(io_native_FileUnix__ModeT)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) io_native_FileUnix__ModeT___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("ModeT", 5);
    }
    return &class;
}
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
void io_native_FileUnix__FileStat___load__() {
    lang_types__Class___load__();
}

io_native_FileUnix__FileStatClass *io_native_FileUnix__FileStat_class(){
    static _Bool __done__ = false;
    static io_native_FileUnix__FileStatClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(io_native_FileUnix__FileStat),
                    .size = sizeof(io_native_FileUnix__FileStat)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) io_native_FileUnix__FileStat___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("FileStat", 8);
    }
    return &class;
}
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))

void io_native_FileUnix__FileUnix_init_unix(io_native_FileUnix__FileUnix* this, lang_String__String* path) {
    io_File__File___setpath__((io_File__File*) this, path);
}

io_native_FileUnix__FileStat io_native_FileUnix__FileUnix__getFileStat_impl(io_native_FileUnix__FileUnix* this) {
    io_native_FileUnix__FileStat result;
    io_native_FileUnix__lstat(lang_String____OP_AS_String__CString(io_File__File___getpath__((io_File__File*) this)), &(result));
    return result;
}

lang_types__Bool io_native_FileUnix__FileUnix_dir__quest_impl(io_native_FileUnix__FileUnix* this) {
    return io_native_FileUnix__S_ISDIR(io_native_FileUnix__FileUnix__getFileStat(this).st_mode);
}

lang_types__Bool io_native_FileUnix__FileUnix_file__quest_impl(io_native_FileUnix__FileUnix* this) {
    return io_native_FileUnix__S_ISREG(io_native_FileUnix__FileUnix__getFileStat(this).st_mode);
}

lang_types__Bool io_native_FileUnix__FileUnix_link__quest_impl(io_native_FileUnix__FileUnix* this) {
    return io_native_FileUnix__S_ISLNK(io_native_FileUnix__FileUnix__getFileStat(this).st_mode);
}

lang_Numbers__LLong io_native_FileUnix__FileUnix_getSize_impl(io_native_FileUnix__FileUnix* this) {
    return ((lang_Numbers__LLong) (io_native_FileUnix__FileUnix__getFileStat(this).st_size));
}

lang_Numbers__Int io_native_FileUnix__FileUnix_ownerPerm_impl(io_native_FileUnix__FileUnix* this) {
    return ((lang_Numbers__Int) (((io_native_FileUnix__FileUnix__getFileStat(this).st_mode) & S_IRWXU))) >> 6;
}

lang_Numbers__Int io_native_FileUnix__FileUnix_groupPerm_impl(io_native_FileUnix__FileUnix* this) {
    return ((lang_Numbers__Int) (((io_native_FileUnix__FileUnix__getFileStat(this).st_mode) & S_IRWXG))) >> 3;
}

lang_Numbers__Int io_native_FileUnix__FileUnix_otherPerm_impl(io_native_FileUnix__FileUnix* this) {
    return ((lang_Numbers__Int) (((io_native_FileUnix__FileUnix__getFileStat(this).st_mode) & S_IRWXO)));
}

lang_Numbers__Long io_native_FileUnix__FileUnix_lastAccessed_impl(io_native_FileUnix__FileUnix* this) {
    if (!io_File__File_exists__quest((io_File__File*) this)) {
        return ((lang_Numbers__Long) (-1));
    }
    return ((lang_Numbers__Long) (io_native_FileUnix__FileUnix__getFileStat(this).st_atime));
}

lang_Numbers__Long io_native_FileUnix__FileUnix_lastModified_impl(io_native_FileUnix__FileUnix* this) {
    if (!io_File__File_exists__quest((io_File__File*) this)) {
        return ((lang_Numbers__Long) (-1));
    }
    return ((lang_Numbers__Long) (io_native_FileUnix__FileUnix__getFileStat(this).st_mtime));
}

lang_Numbers__Long io_native_FileUnix__FileUnix_created_impl(io_native_FileUnix__FileUnix* this) {
    if (!io_File__File_exists__quest((io_File__File*) this)) {
        return ((lang_Numbers__Long) (-1));
    }
    return ((lang_Numbers__Long) (io_native_FileUnix__FileUnix__getFileStat(this).st_ctime));
}

lang_types__Bool io_native_FileUnix__FileUnix_relative__quest_impl(io_native_FileUnix__FileUnix* this) {
    return lang_String__String_startsWith__quest(io_File__File___getpath__((io_File__File*) this), __strLit143) || !lang_String__String_startsWith__quest(io_File__File___getpath__((io_File__File*) this), __strLit144);
}

lang_String__String* io_native_FileUnix__FileUnix_getAbsolutePath_impl(io_native_FileUnix__FileUnix* this) {
    lang_Exception__assert(io_File__File___getpath__((io_File__File*) this) != (lang_String__String*) NULL);
    lang_Exception__assert(!lang_String__String_empty__quest(io_File__File___getpath__((io_File__File*) this)));
    lang_Buffer__Buffer* actualPath = lang_Buffer__Buffer_new(io_File__File_class()->MAX_PATH_LENGTH);
    lang_Character__CString ret = io_native_FileUnix__realpath(lang_String__String_toCString(io_File__File___getpath__((io_File__File*) this)), lang_Buffer__Buffer_toCString(actualPath));
    if (ret == (lang_Character__CString) NULL) {
        lang_Exception__Exception_throw((lang_Exception__Exception*) lang_Exception__OSException_new(lang_String____OP_ADD_String_String__String(__strLit145, io_File__File___getpath__((io_File__File*) this))));
    }
    return lang_String__String_new_withCStrAndLength(ret, lang_Character__CString_length(ret));
}

io_File__File* io_native_FileUnix__FileUnix_getAbsoluteFile_impl(io_native_FileUnix__FileUnix* this) {
    lang_String__String* actualPath = io_native_FileUnix__FileUnix_getAbsolutePath(this);
    if (lang_String____OP_NE_String_String__Bool(io_File__File___getpath__((io_File__File*) this), actualPath)) {
        return io_File__File_new(actualPath);
    }
    return ((io_File__File*) (this));
}

structs_ArrayList__ArrayList* io_native_FileUnix__FileUnix__getChildren_impl(io_native_FileUnix__FileUnix* this, lang_types__Class* T) {
    if (!io_native_FileUnix__FileUnix_dir__quest(this)) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (io_native_FileUnix__FileUnix_class()), lang_String____OP_ADD_String_String__String(lang_String____OP_ADD_String_String__String(__strLit146, io_File__File___getpath__((io_File__File*) this)), __strLit147)));
    }
    DIR* dir = io_native_FileUnix__opendir(lang_String____OP_AS_String__CString(io_File__File___getpath__((io_File__File*) this)));
    if (!dir) {
        lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (io_native_FileUnix__FileUnix_class()), lang_String____OP_ADD_String_String__String(lang_String____OP_ADD_String_String__String(__strLit148, io_File__File___getpath__((io_File__File*) this)), __strLit149)));
    }
    structs_ArrayList__ArrayList* result = structs_ArrayList__ArrayList_new((lang_types__Class*)T);
    io_native_FileUnix__DirEnt* entry = io_native_FileUnix__readdir(dir);
    while (entry != (io_native_FileUnix__DirEnt*) NULL) {
        if (!io_File___isDirHardlink__quest((*(entry)).d_name)) {
            lang_String__String* s = lang_String__String_clone(lang_String__String_new_withCStrAndLength((*(entry)).d_name, lang_Character__CString_length((*(entry)).d_name)));
            if (T == (lang_types__Class*) lang_String__String_class()){
                structs_ArrayList__ArrayList_add(result, (uint8_t*) &(s));
            } else {
                io_File__File* __genArg245 = io_File__File_new_parentFile((io_File__File*) (this), s);
                structs_ArrayList__ArrayList_add(result, (uint8_t*) &(__genArg245));
            };
        }
        entry = io_native_FileUnix__readdir(dir);
    }
    io_native_FileUnix__closedir(dir);
    return result;
}

structs_ArrayList__ArrayList* io_native_FileUnix__FileUnix_getChildrenNames_impl(io_native_FileUnix__FileUnix* this) {
    return io_native_FileUnix__FileUnix__getChildren(this, (lang_types__Class*) (lang_String__String_class()));
}

structs_ArrayList__ArrayList* io_native_FileUnix__FileUnix_getChildren_impl(io_native_FileUnix__FileUnix* this) {
    return io_native_FileUnix__FileUnix__getChildren(this, (lang_types__Class*) (io_File__File_class()));
}

lang_Numbers__Int io_native_FileUnix__FileUnix_mkdir_withMode_impl(io_native_FileUnix__FileUnix* this, lang_Numbers__Int32 mode) {
    return io_native_FileUnix___mkdir(lang_String____OP_AS_String__CString(io_File__File___getpath__((io_File__File*) this)), ((io_native_FileUnix__ModeT) (mode)));
}

lang_Numbers__Int io_native_FileUnix__FileUnix_mkfifo_withMode_impl(io_native_FileUnix__FileUnix* this, lang_Numbers__Int32 mode) {
    return io_native_FileUnix___mkfifo(lang_String____OP_AS_String__CString(io_File__File___getpath__((io_File__File*) this)), ((io_native_FileUnix__ModeT) (mode)));
}

void io_native_FileUnix__FileUnix___defaults___impl(io_native_FileUnix__FileUnix* this) {
    io_File__File___defaults___impl((io_File__File*) this);
}

io_native_FileUnix__FileStat io_native_FileUnix__FileUnix__getFileStat(io_native_FileUnix__FileUnix* this) {
    return (io_native_FileUnix__FileStat) ((io_native_FileUnix__FileUnixClass *)((lang_types__Object *)this)->class)->_getFileStat((io_native_FileUnix__FileUnix*)this);
}

lang_types__Bool io_native_FileUnix__FileUnix_dir__quest(io_native_FileUnix__FileUnix* this) {
    return (lang_types__Bool) ((io_File__FileClass *)((lang_types__Object *)this)->class)->dir__quest((io_File__File*)this);
}

lang_types__Bool io_native_FileUnix__FileUnix_file__quest(io_native_FileUnix__FileUnix* this) {
    return (lang_types__Bool) ((io_File__FileClass *)((lang_types__Object *)this)->class)->file__quest((io_File__File*)this);
}

lang_types__Bool io_native_FileUnix__FileUnix_link__quest(io_native_FileUnix__FileUnix* this) {
    return (lang_types__Bool) ((io_File__FileClass *)((lang_types__Object *)this)->class)->link__quest((io_File__File*)this);
}

lang_Numbers__LLong io_native_FileUnix__FileUnix_getSize(io_native_FileUnix__FileUnix* this) {
    return (lang_Numbers__LLong) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getSize((io_File__File*)this);
}

lang_Numbers__Int io_native_FileUnix__FileUnix_ownerPerm(io_native_FileUnix__FileUnix* this) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->ownerPerm((io_File__File*)this);
}

lang_Numbers__Int io_native_FileUnix__FileUnix_groupPerm(io_native_FileUnix__FileUnix* this) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->groupPerm((io_File__File*)this);
}

lang_Numbers__Int io_native_FileUnix__FileUnix_otherPerm(io_native_FileUnix__FileUnix* this) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->otherPerm((io_File__File*)this);
}

lang_Numbers__Long io_native_FileUnix__FileUnix_lastAccessed(io_native_FileUnix__FileUnix* this) {
    return (lang_Numbers__Long) ((io_File__FileClass *)((lang_types__Object *)this)->class)->lastAccessed((io_File__File*)this);
}

lang_Numbers__Long io_native_FileUnix__FileUnix_lastModified(io_native_FileUnix__FileUnix* this) {
    return (lang_Numbers__Long) ((io_File__FileClass *)((lang_types__Object *)this)->class)->lastModified((io_File__File*)this);
}

lang_Numbers__Long io_native_FileUnix__FileUnix_created(io_native_FileUnix__FileUnix* this) {
    return (lang_Numbers__Long) ((io_File__FileClass *)((lang_types__Object *)this)->class)->created((io_File__File*)this);
}

lang_types__Bool io_native_FileUnix__FileUnix_relative__quest(io_native_FileUnix__FileUnix* this) {
    return (lang_types__Bool) ((io_File__FileClass *)((lang_types__Object *)this)->class)->relative__quest((io_File__File*)this);
}

lang_String__String* io_native_FileUnix__FileUnix_getAbsolutePath(io_native_FileUnix__FileUnix* this) {
    return (lang_String__String*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getAbsolutePath((io_File__File*)this);
}

io_File__File* io_native_FileUnix__FileUnix_getAbsoluteFile(io_native_FileUnix__FileUnix* this) {
    return (io_File__File*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getAbsoluteFile((io_File__File*)this);
}

structs_ArrayList__ArrayList* io_native_FileUnix__FileUnix__getChildren(io_native_FileUnix__FileUnix* this, lang_types__Class* T) {
    return (structs_ArrayList__ArrayList*) ((io_native_FileUnix__FileUnixClass *)((lang_types__Object *)this)->class)->_getChildren((io_native_FileUnix__FileUnix*)this, T);
}

structs_ArrayList__ArrayList* io_native_FileUnix__FileUnix_getChildrenNames(io_native_FileUnix__FileUnix* this) {
    return (structs_ArrayList__ArrayList*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getChildrenNames((io_File__File*)this);
}

structs_ArrayList__ArrayList* io_native_FileUnix__FileUnix_getChildren(io_native_FileUnix__FileUnix* this) {
    return (structs_ArrayList__ArrayList*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getChildren((io_File__File*)this);
}

lang_Numbers__Int io_native_FileUnix__FileUnix_mkdir_withMode(io_native_FileUnix__FileUnix* this, lang_Numbers__Int32 mode) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->mkdir_withMode((io_File__File*)this, mode);
}

lang_Numbers__Int io_native_FileUnix__FileUnix_mkfifo_withMode(io_native_FileUnix__FileUnix* this, lang_Numbers__Int32 mode) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->mkfifo_withMode((io_File__File*)this, mode);
}

void io_native_FileUnix__FileUnix___defaults__(io_native_FileUnix__FileUnix* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
io_native_FileUnix__FileUnix* io_native_FileUnix__FileUnix_new_unix(lang_String__String* path) {
    
    io_native_FileUnix__FileUnix* this = ((io_native_FileUnix__FileUnix*) (lang_types__Class_alloc__class((lang_types__Class*) io_native_FileUnix__FileUnix_class())));
    io_native_FileUnix__FileUnix___defaults__(this);
    io_native_FileUnix__FileUnix_init_unix((io_native_FileUnix__FileUnix*) this, path);
    return this;
}
void io_native_FileUnix__FileUnix___load__() {
    io_File__File___load__();
}

io_native_FileUnix__FileUnixClass *io_native_FileUnix__FileUnix_class(){
    static _Bool __done__ = false;
    static io_native_FileUnix__FileUnixClass class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(io_native_FileUnix__FileUnix),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) io_native_FileUnix__FileUnix___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) io_native_FileUnix__FileUnix___load__,
                },
            },
            .new = (void*) io_File__File_new,
            .new_parentFile = (void*) io_File__File_new_parentFile,
            .new_parentPath = (void*) io_File__File_new_parentPath,
            .dir__quest = (void*) io_native_FileUnix__FileUnix_dir__quest_impl,
            .file__quest = (void*) io_native_FileUnix__FileUnix_file__quest_impl,
            .link__quest = (void*) io_native_FileUnix__FileUnix_link__quest_impl,
            .getSize = (void*) io_native_FileUnix__FileUnix_getSize_impl,
            .exists__quest = (void*) io_File__File_exists__quest_impl,
            .ownerPerm = (void*) io_native_FileUnix__FileUnix_ownerPerm_impl,
            .groupPerm = (void*) io_native_FileUnix__FileUnix_groupPerm_impl,
            .otherPerm = (void*) io_native_FileUnix__FileUnix_otherPerm_impl,
            .name = (void*) io_File__File_name_impl,
            .parent = (void*) io_File__File_parent_impl,
            .parentName = (void*) io_File__File_parentName_impl,
            .mkfifo = (void*) io_File__File_mkfifo_impl,
            .mkfifo_withMode = (void*) io_native_FileUnix__FileUnix_mkfifo_withMode_impl,
            .mkdir = (void*) io_File__File_mkdir_impl,
            .mkdir_withMode = (void*) io_native_FileUnix__FileUnix_mkdir_withMode_impl,
            .mkdirs = (void*) io_File__File_mkdirs_impl,
            .mkdirs_withMode = (void*) io_File__File_mkdirs_withMode_impl,
            .lastAccessed = (void*) io_native_FileUnix__FileUnix_lastAccessed_impl,
            .lastModified = (void*) io_native_FileUnix__FileUnix_lastModified_impl,
            .created = (void*) io_native_FileUnix__FileUnix_created_impl,
            .relative__quest = (void*) io_native_FileUnix__FileUnix_relative__quest_impl,
            .getPath = (void*) io_File__File_getPath_impl,
            .getAbsolutePath = (void*) io_native_FileUnix__FileUnix_getAbsolutePath_impl,
            .getAbsoluteFile = (void*) io_native_FileUnix__FileUnix_getAbsoluteFile_impl,
            .getReducedPath = (void*) io_File__File_getReducedPath_impl,
            .getChildrenNames = (void*) io_native_FileUnix__FileUnix_getChildrenNames_impl,
            .getChildren = (void*) io_native_FileUnix__FileUnix_getChildren_impl,
            .remove = (void*) io_File__File_remove_impl,
            .copyTo = (void*) io_File__File_copyTo_impl,
            .read = (void*) io_File__File_read_impl,
            .write_string = (void*) io_File__File_write_string_impl,
            .write_reader = (void*) io_File__File_write_reader_impl,
            .walk = (void*) io_File__File_walk_impl,
            .getChild = (void*) io_File__File_getChild_impl,
            .getCwd = (void*) io_File__File_getCwd,
            .__getpath__ = (void*) io_File__File___getpath___impl,
            .__setpath__ = (void*) io_File__File___setpath___impl,
            .__getchildren__ = (void*) io_File__File___getchildren___impl,
        },
        .new_unix = (void*) io_native_FileUnix__FileUnix_new_unix,
        ._getFileStat = (void*) io_native_FileUnix__FileUnix__getFileStat_impl,
        ._getChildren = (void*) io_native_FileUnix__FileUnix__getChildren_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) io_File__File_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("FileUnix", 8);
    }
    return &class;
}
#endif
void io_native_FileUnix_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Exception_load();
        lang_BufferIterator_load();
        lang_System_load();
        lang_Character_load();
        lang_VarArgs_load();
        lang_types_load();
        lang_Iterators_load();
        lang_Memory_load();
        lang_String_load();
        lang_Buffer_load();
        lang_Numbers_load();
        lang_Abstractions_load();
        lang_Format_load();
        lang_IO_load();
        io_File_load();
        structs_ArrayList_load();
        DIR___load__();
        io_native_FileUnix__DirEnt___load__();
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        io_native_FileUnix__TimeT___load__();
        #endif
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        io_native_FileUnix__ModeT___load__();
        #endif
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        io_native_FileUnix__FileStat___load__();
        #endif
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        io_native_FileUnix__FileUnix___load__();
        #endif
        __strLit150 = (void*) lang_String__makeStringLiteral("error trying to getcwd! ", 24);
        __strLit149 = (void*) lang_String__makeStringLiteral("' for reading!", 14);
        __strLit148 = (void*) lang_String__makeStringLiteral("Couldn't open directory '", 25);
        __strLit147 = (void*) lang_String__makeStringLiteral("'!", 2);
        __strLit146 = (void*) lang_String__makeStringLiteral("Trying to get the children of the non-directory '", 49);
        __strLit145 = (void*) lang_String__makeStringLiteral("failed to get absolute path for ", 32);
        __strLit144 = (void*) lang_String__makeStringLiteral("/", 1);
        __strLit143 = (void*) lang_String__makeStringLiteral(".", 1);
        
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        io_File__File_class()->separator = '/';
        #endif
        
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        io_File__File_class()->pathDelimiter = ':';
        #endif
        
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        ;
        #endif
        
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        ;
        #endif
        
        #if ((defined(__unix__)) || (defined(__APPLE__)))
        ;
        #endif
    }
}

#if ((defined(__unix__)) || (defined(__APPLE__)))

lang_String__String* ooc_get_cwd() {
    lang_Buffer__Buffer* result = lang_Buffer__Buffer_new(io_File__File_class()->MAX_PATH_LENGTH);
    if (!io_native_FileUnix___getcwd(((lang_Character__CString) (result->data)), io_File__File_class()->MAX_PATH_LENGTH)) {
        lang_Exception__Exception_throw((lang_Exception__Exception*) lang_Exception__OSException_new(__strLit150));
    }
    lang_Buffer__Buffer_sizeFromData(result);
    return lang_String__String_new_withBuffer(result);
}
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))

lang_Numbers__Int _remove(lang_String__String* path) {
    return io_native_FileUnix__remove(lang_String____OP_AS_String__CString(path));
}
#endif
