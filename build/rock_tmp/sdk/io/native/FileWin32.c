/* io/native/FileWin32 source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/io/native/FileWin32.h>
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
#include <sdk/native/win32/types.h>
#include <sdk/structs/ArrayList.h>

static lang_String__String* __strLit142;
static lang_String__String* __strLit141;
static lang_String__String* __strLit140;
static lang_String__String* __strLit139;
static lang_String__String* __strLit138;
static lang_String__String* __strLit137;
#if defined(__WIN32__) || defined(__WIN64__)
void io_native_FileWin32__FindData___load__() {
    lang_types__Class___load__();
}

io_native_FileWin32__FindDataClass *io_native_FileWin32__FindData_class(){
    static _Bool __done__ = false;
    static io_native_FileWin32__FindDataClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(io_native_FileWin32__FindData),
                    .size = sizeof(io_native_FileWin32__FindData)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) io_native_FileWin32__FindData___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("FindData", 8);
    }
    return &class;
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)

void io_native_FileWin32__FileWin32_init_win32(io_native_FileWin32__FileWin32* this, lang_String__String* path) {
    io_File__File___setpath__((io_File__File*) this, path);
}

lang_types__Bool io_native_FileWin32__FileWin32_exists__quest_impl(io_native_FileWin32__FileWin32* this) {
    io_native_FileWin32__FindData ffd;
    lang_types__Bool ok;
    io_native_FileWin32__FileWin32__getFindData(this, &(ffd), &(ok));
    return ok;
}

void io_native_FileWin32__FileWin32__getFindData_impl(io_native_FileWin32__FileWin32* this, io_native_FileWin32__FindData* __tupleArg135, lang_types__Bool* __tupleArg136) {
    io_native_FileWin32__FindData ffd;
    native_win32_types__Handle hFind = io_native_FileWin32__FindFirstFile(lang_String__String_toCString(io_File__File___getpath__((io_File__File*) this)), &(ffd));
    if (hFind != INVALID_HANDLE_VALUE) {
        io_native_FileWin32__FindClose(hFind);
    }
    else {
        if (__tupleArg135) {
            (*__tupleArg135) = ffd;
        }
        if (__tupleArg136) {
            (*__tupleArg136) = false;
        }
        return;
    }
    if (__tupleArg135) {
        (*__tupleArg135) = ffd;
    }
    if (__tupleArg136) {
        (*__tupleArg136) = true;
    }
    return;
}

lang_types__Bool io_native_FileWin32__FileWin32_dir__quest_impl(io_native_FileWin32__FileWin32* this) {
    io_native_FileWin32__FindData ffd;
    lang_types__Bool ok;
    io_native_FileWin32__FileWin32__getFindData(this, &(ffd), &(ok));
    return (ok) && ((ffd.dwFileAttributes) & FILE_ATTRIBUTE_DIRECTORY) != (lang_Numbers__Long) 0;
}

lang_types__Bool io_native_FileWin32__FileWin32_file__quest_impl(io_native_FileWin32__FileWin32* this) {
    io_native_FileWin32__FindData ffd;
    lang_types__Bool ok;
    io_native_FileWin32__FileWin32__getFindData(this, &(ffd), &(ok));
    return (ok) && (((ffd.dwFileAttributes) & FILE_ATTRIBUTE_DIRECTORY) == (lang_Numbers__Long) 0) && (((ffd.dwFileAttributes) & FILE_ATTRIBUTE_REPARSE_POINT) == (lang_Numbers__Long) 0);
}

lang_types__Bool io_native_FileWin32__FileWin32_link__quest_impl(io_native_FileWin32__FileWin32* this) {
    io_native_FileWin32__FindData ffd;
    lang_types__Bool ok;
    io_native_FileWin32__FileWin32__getFindData(this, &(ffd), &(ok));
    return (ok) && ((ffd.dwFileAttributes) & FILE_ATTRIBUTE_REPARSE_POINT) != (lang_Numbers__Long) 0;
}

lang_Numbers__LLong io_native_FileWin32__FileWin32_getSize_impl(io_native_FileWin32__FileWin32* this) {
    io_native_FileWin32__FindData ffd;
    lang_types__Bool ok;
    io_native_FileWin32__FileWin32__getFindData(this, &(ffd), &(ok));
    return (ok) ? native_win32_types__toLLong_twoPartsLargeInteger(ffd.nFileSizeLow, ffd.nFileSizeHigh) : 0;
}

lang_Numbers__Int io_native_FileWin32__FileWin32_ownerPerm_impl(io_native_FileWin32__FileWin32* this) {
    return ((lang_Numbers__Int) (0));
}

lang_Numbers__Int io_native_FileWin32__FileWin32_groupPerm_impl(io_native_FileWin32__FileWin32* this) {
    return ((lang_Numbers__Int) (0));
}

lang_Numbers__Int io_native_FileWin32__FileWin32_otherPerm_impl(io_native_FileWin32__FileWin32* this) {
    return ((lang_Numbers__Int) (0));
}

lang_Numbers__Int io_native_FileWin32__FileWin32_mkdir_withMode_impl(io_native_FileWin32__FileWin32* this, lang_Numbers__Int32 mode) {
    if (io_native_FileWin32__FileWin32_relative__quest(this)) {
        return io_File__File_mkdir(io_File__File_getAbsoluteFile((io_File__File*) this));
    }
    io_File__File* parent = io_File__File_parent((io_File__File*) this);
    if (!io_File__File_exists__quest(parent)) {
        io_File__File_mkdir(parent);
    }
    return ((lang_Numbers__Int) (io_native_FileWin32__CreateDirectory(lang_String__String_toCString(io_File__File___getpath__((io_File__File*) this)), NULL) ? 0 : -1));
}

lang_Numbers__Int io_native_FileWin32__FileWin32_mkfifo_withMode_impl(io_native_FileWin32__FileWin32* this, lang_Numbers__Int32 mode) {
    return lang_IO__fprintf(stderr, lang_String____OP_AS_String__Char__star(__strLit137));
}

lang_Numbers__Long io_native_FileWin32__FileWin32_lastAccessed_impl(io_native_FileWin32__FileWin32* this) {
    io_native_FileWin32__FindData ffd;
    lang_types__Bool ok;
    io_native_FileWin32__FileWin32__getFindData(this, &(ffd), &(ok));
    return (ok) ? native_win32_types__toTimestamp_fromFiletime(ffd.ftLastAccessTime) : -1;
}

lang_Numbers__Long io_native_FileWin32__FileWin32_lastModified_impl(io_native_FileWin32__FileWin32* this) {
    io_native_FileWin32__FindData ffd;
    lang_types__Bool ok;
    io_native_FileWin32__FileWin32__getFindData(this, &(ffd), &(ok));
    return (ok) ? native_win32_types__toTimestamp_fromFiletime(ffd.ftLastWriteTime) : -1;
}

lang_Numbers__Long io_native_FileWin32__FileWin32_created_impl(io_native_FileWin32__FileWin32* this) {
    io_native_FileWin32__FindData ffd;
    lang_types__Bool ok;
    io_native_FileWin32__FileWin32__getFindData(this, &(ffd), &(ok));
    return (ok) ? native_win32_types__toTimestamp_fromFiletime(ffd.ftCreationTime) : -1;
}

lang_types__Bool io_native_FileWin32__FileWin32_relative__quest_impl(io_native_FileWin32__FileWin32* this) {
    return lang_String__String_startsWith__quest(io_File__File___getpath__((io_File__File*) this), __strLit138) || (!lang_String__String_startsWith__quest(io_File__File___getpath__((io_File__File*) this), __strLit139) && (lang_String__String_length(io_File__File___getpath__((io_File__File*) this)) > (lang_Numbers__SizeT) 1 && lang_String____OP_IDX_String_SSizeT__Char(io_File__File___getpath__((io_File__File*) this), 1) != ':'));
}

lang_String__String* io_native_FileWin32__FileWin32_getAbsolutePath_impl(io_native_FileWin32__FileWin32* this) {
    if (io_native_FileWin32__FileWin32_relative__quest(this)) {
        return lang_String____OP_ADD_String_String__String(lang_String____OP_ADD_String_Char__String(io_File__File_getCwd(), io_File__File_class()->separator), io_File__File___getpath__((io_File__File*) this));
    }
    else {
        return io_File__File___getpath__((io_File__File*) this);
    }
}

structs_ArrayList__ArrayList* io_native_FileWin32__FileWin32__getChildren_impl(io_native_FileWin32__FileWin32* this, lang_types__Class* T) {
    structs_ArrayList__ArrayList* result = structs_ArrayList__ArrayList_new((lang_types__Class*)T);
    io_native_FileWin32__FindData ffd;
    native_win32_types__Handle hFile = io_native_FileWin32__FindFirstFile(lang_String__String_toCString((lang_String____OP_ADD_String_String__String(io_File__File___getpath__((io_File__File*) this), __strLit140))), &(ffd));
    lang_types__Bool running = (hFile != INVALID_HANDLE_VALUE);
    while (running) {
        if (!io_File___isDirHardlink__quest(ffd.cFileName)) {
            lang_Numbers__Int l = lang_Character__CString_length(ffd.cFileName);
            lang_Buffer__Buffer* b = lang_Buffer__Buffer_new(l + 1 + lang_String__String___getsize__(io_File__File___getpath__((io_File__File*) this)));
            lang_Buffer__Buffer_append_str(b, io_File__File___getpath__((io_File__File*) this));
            lang_Buffer__Buffer_append_char(b, '\\');
            lang_Buffer__Buffer_append_pointer(b, ffd.cFileName, l);
            lang_String__String* s = lang_String__String_new_withBuffer(b);
            uint8_t* candidate = lang_Memory__gc_malloc(T->size);
            lang_String__String* __unreferencable244 = (T == (lang_types__Class*) lang_String__String_class()) ? s : io_File__File_new(s);
            lang_Memory__memcpy(candidate, &(__unreferencable244), ((lang_types__Class*)lang_String__String_class())->size);
            structs_ArrayList__ArrayList_add(result, (uint8_t*) candidate);
        }
        running = io_native_FileWin32__FindNextFile(hFile, &(ffd));
    }
    io_native_FileWin32__FindClose(hFile);
    return result;
}

structs_ArrayList__ArrayList* io_native_FileWin32__FileWin32_getChildrenNames_impl(io_native_FileWin32__FileWin32* this) {
    return io_native_FileWin32__FileWin32__getChildren(this, (lang_types__Class*) (lang_String__String_class()));
}

structs_ArrayList__ArrayList* io_native_FileWin32__FileWin32_getChildren_impl(io_native_FileWin32__FileWin32* this) {
    return io_native_FileWin32__FileWin32__getChildren(this, (lang_types__Class*) (io_File__File_class()));
}

void io_native_FileWin32__FileWin32___defaults___impl(io_native_FileWin32__FileWin32* this) {
    io_File__File___defaults___impl((io_File__File*) this);
}

lang_types__Bool io_native_FileWin32__FileWin32_exists__quest(io_native_FileWin32__FileWin32* this) {
    return (lang_types__Bool) ((io_File__FileClass *)((lang_types__Object *)this)->class)->exists__quest((io_File__File*)this);
}

void io_native_FileWin32__FileWin32__getFindData(io_native_FileWin32__FileWin32* this, io_native_FileWin32__FindData* __tupleArg135, lang_types__Bool* __tupleArg136) {
    return (void) ((io_native_FileWin32__FileWin32Class *)((lang_types__Object *)this)->class)->_getFindData((io_native_FileWin32__FileWin32*)this, __tupleArg135, __tupleArg136);
}

lang_types__Bool io_native_FileWin32__FileWin32_dir__quest(io_native_FileWin32__FileWin32* this) {
    return (lang_types__Bool) ((io_File__FileClass *)((lang_types__Object *)this)->class)->dir__quest((io_File__File*)this);
}

lang_types__Bool io_native_FileWin32__FileWin32_file__quest(io_native_FileWin32__FileWin32* this) {
    return (lang_types__Bool) ((io_File__FileClass *)((lang_types__Object *)this)->class)->file__quest((io_File__File*)this);
}

lang_types__Bool io_native_FileWin32__FileWin32_link__quest(io_native_FileWin32__FileWin32* this) {
    return (lang_types__Bool) ((io_File__FileClass *)((lang_types__Object *)this)->class)->link__quest((io_File__File*)this);
}

lang_Numbers__LLong io_native_FileWin32__FileWin32_getSize(io_native_FileWin32__FileWin32* this) {
    return (lang_Numbers__LLong) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getSize((io_File__File*)this);
}

lang_Numbers__Int io_native_FileWin32__FileWin32_ownerPerm(io_native_FileWin32__FileWin32* this) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->ownerPerm((io_File__File*)this);
}

lang_Numbers__Int io_native_FileWin32__FileWin32_groupPerm(io_native_FileWin32__FileWin32* this) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->groupPerm((io_File__File*)this);
}

lang_Numbers__Int io_native_FileWin32__FileWin32_otherPerm(io_native_FileWin32__FileWin32* this) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->otherPerm((io_File__File*)this);
}

lang_Numbers__Int io_native_FileWin32__FileWin32_mkdir_withMode(io_native_FileWin32__FileWin32* this, lang_Numbers__Int32 mode) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->mkdir_withMode((io_File__File*)this, mode);
}

lang_Numbers__Int io_native_FileWin32__FileWin32_mkfifo_withMode(io_native_FileWin32__FileWin32* this, lang_Numbers__Int32 mode) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->mkfifo_withMode((io_File__File*)this, mode);
}

lang_Numbers__Long io_native_FileWin32__FileWin32_lastAccessed(io_native_FileWin32__FileWin32* this) {
    return (lang_Numbers__Long) ((io_File__FileClass *)((lang_types__Object *)this)->class)->lastAccessed((io_File__File*)this);
}

lang_Numbers__Long io_native_FileWin32__FileWin32_lastModified(io_native_FileWin32__FileWin32* this) {
    return (lang_Numbers__Long) ((io_File__FileClass *)((lang_types__Object *)this)->class)->lastModified((io_File__File*)this);
}

lang_Numbers__Long io_native_FileWin32__FileWin32_created(io_native_FileWin32__FileWin32* this) {
    return (lang_Numbers__Long) ((io_File__FileClass *)((lang_types__Object *)this)->class)->created((io_File__File*)this);
}

lang_types__Bool io_native_FileWin32__FileWin32_relative__quest(io_native_FileWin32__FileWin32* this) {
    return (lang_types__Bool) ((io_File__FileClass *)((lang_types__Object *)this)->class)->relative__quest((io_File__File*)this);
}

lang_String__String* io_native_FileWin32__FileWin32_getAbsolutePath(io_native_FileWin32__FileWin32* this) {
    return (lang_String__String*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getAbsolutePath((io_File__File*)this);
}

structs_ArrayList__ArrayList* io_native_FileWin32__FileWin32__getChildren(io_native_FileWin32__FileWin32* this, lang_types__Class* T) {
    return (structs_ArrayList__ArrayList*) ((io_native_FileWin32__FileWin32Class *)((lang_types__Object *)this)->class)->_getChildren((io_native_FileWin32__FileWin32*)this, T);
}

structs_ArrayList__ArrayList* io_native_FileWin32__FileWin32_getChildrenNames(io_native_FileWin32__FileWin32* this) {
    return (structs_ArrayList__ArrayList*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getChildrenNames((io_File__File*)this);
}

structs_ArrayList__ArrayList* io_native_FileWin32__FileWin32_getChildren(io_native_FileWin32__FileWin32* this) {
    return (structs_ArrayList__ArrayList*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getChildren((io_File__File*)this);
}

void io_native_FileWin32__FileWin32___defaults__(io_native_FileWin32__FileWin32* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
io_native_FileWin32__FileWin32* io_native_FileWin32__FileWin32_new_win32(lang_String__String* path) {
    
    io_native_FileWin32__FileWin32* this = ((io_native_FileWin32__FileWin32*) (lang_types__Class_alloc__class((lang_types__Class*) io_native_FileWin32__FileWin32_class())));
    io_native_FileWin32__FileWin32___defaults__(this);
    io_native_FileWin32__FileWin32_init_win32((io_native_FileWin32__FileWin32*) this, path);
    return this;
}
void io_native_FileWin32__FileWin32___load__() {
    io_File__File___load__();
}

io_native_FileWin32__FileWin32Class *io_native_FileWin32__FileWin32_class(){
    static _Bool __done__ = false;
    static io_native_FileWin32__FileWin32Class class = 
    {
        {
            {
                {
                    {
                        .instanceSize = sizeof(io_native_FileWin32__FileWin32),
                        .size = sizeof(void*)
                    },
                    .__defaults__ = (void*) io_native_FileWin32__FileWin32___defaults___impl,
                    .__destroy__ = (void*) lang_types__Object___destroy___impl,
                    .__load__ = (void*) io_native_FileWin32__FileWin32___load__,
                },
            },
            .new = (void*) io_File__File_new,
            .new_parentFile = (void*) io_File__File_new_parentFile,
            .new_parentPath = (void*) io_File__File_new_parentPath,
            .dir__quest = (void*) io_native_FileWin32__FileWin32_dir__quest_impl,
            .file__quest = (void*) io_native_FileWin32__FileWin32_file__quest_impl,
            .link__quest = (void*) io_native_FileWin32__FileWin32_link__quest_impl,
            .getSize = (void*) io_native_FileWin32__FileWin32_getSize_impl,
            .exists__quest = (void*) io_native_FileWin32__FileWin32_exists__quest_impl,
            .ownerPerm = (void*) io_native_FileWin32__FileWin32_ownerPerm_impl,
            .groupPerm = (void*) io_native_FileWin32__FileWin32_groupPerm_impl,
            .otherPerm = (void*) io_native_FileWin32__FileWin32_otherPerm_impl,
            .name = (void*) io_File__File_name_impl,
            .parent = (void*) io_File__File_parent_impl,
            .parentName = (void*) io_File__File_parentName_impl,
            .mkfifo = (void*) io_File__File_mkfifo_impl,
            .mkfifo_withMode = (void*) io_native_FileWin32__FileWin32_mkfifo_withMode_impl,
            .mkdir = (void*) io_File__File_mkdir_impl,
            .mkdir_withMode = (void*) io_native_FileWin32__FileWin32_mkdir_withMode_impl,
            .mkdirs = (void*) io_File__File_mkdirs_impl,
            .mkdirs_withMode = (void*) io_File__File_mkdirs_withMode_impl,
            .lastAccessed = (void*) io_native_FileWin32__FileWin32_lastAccessed_impl,
            .lastModified = (void*) io_native_FileWin32__FileWin32_lastModified_impl,
            .created = (void*) io_native_FileWin32__FileWin32_created_impl,
            .relative__quest = (void*) io_native_FileWin32__FileWin32_relative__quest_impl,
            .getPath = (void*) io_File__File_getPath_impl,
            .getAbsolutePath = (void*) io_native_FileWin32__FileWin32_getAbsolutePath_impl,
            .getAbsoluteFile = (void*) io_File__File_getAbsoluteFile_impl,
            .getReducedPath = (void*) io_File__File_getReducedPath_impl,
            .getChildrenNames = (void*) io_native_FileWin32__FileWin32_getChildrenNames_impl,
            .getChildren = (void*) io_native_FileWin32__FileWin32_getChildren_impl,
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
        .new_win32 = (void*) io_native_FileWin32__FileWin32_new_win32,
        ._getFindData = (void*) io_native_FileWin32__FileWin32__getFindData_impl,
        ._getChildren = (void*) io_native_FileWin32__FileWin32__getChildren_impl,
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) io_File__File_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("FileWin32", 9);
    }
    return &class;
}
#endif
void io_native_FileWin32_load() {
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
        native_win32_types_load();
        structs_ArrayList_load();
        io_File_load();
        #if defined(__WIN32__) || defined(__WIN64__)
        io_native_FileWin32__FindData___load__();
        #endif
        #if defined(__WIN32__) || defined(__WIN64__)
        io_native_FileWin32__FileWin32___load__();
        #endif
        __strLit142 = (void*) lang_String__makeStringLiteral("Failed to get current directory!", 32);
        __strLit141 = (void*) lang_String__makeStringLiteral("Win32: should remove file %s\n", 29);
        __strLit140 = (void*) lang_String__makeStringLiteral("\\*", 2);
        __strLit139 = (void*) lang_String__makeStringLiteral("\\\\", 2);
        __strLit138 = (void*) lang_String__makeStringLiteral(".", 1);
        __strLit137 = (void*) lang_String__makeStringLiteral("FileWin32:stub mkfifo", 21);
        
        #if defined(__WIN32__) || defined(__WIN64__)
        io_File__File_class()->separator = '\\';
        #endif
        
        #if defined(__WIN32__) || defined(__WIN64__)
        io_File__File_class()->pathDelimiter = ';';
        #endif
        
        #if defined(__WIN32__) || defined(__WIN64__)
        ;
        #endif
        
        #if defined(__WIN32__) || defined(__WIN64__)
        ;
        #endif
        
        #if defined(__WIN32__) || defined(__WIN64__)
        ;
        #endif
    }
}

#if defined(__WIN32__) || defined(__WIN64__)

lang_Numbers__Int _remove(lang_String__String* path) {
    return lang_IO__printf(lang_String____OP_AS_String__Char__star(__strLit141), lang_String__String_toCString(path));
}
#endif
#if defined(__WIN32__) || defined(__WIN64__)

lang_String__String* ooc_get_cwd() {
    lang_Buffer__Buffer* ret = lang_Buffer__Buffer_new(io_File__File_class()->MAX_PATH_LENGTH + 1);
    lang_Numbers__Int bytesWritten = io_native_FileWin32__GetCurrentDirectory(io_File__File_class()->MAX_PATH_LENGTH, ret->data);
    if (bytesWritten == (lang_Numbers__Int) 0) {
        lang_Exception__Exception_throw((lang_Exception__Exception*) lang_Exception__OSException_new(__strLit142));
    }
    lang_Buffer__Buffer_setLength(ret, bytesWritten);
    return lang_String__String_new_withBuffer(ret);
}
#endif
