/* io/File source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/io/File.h>
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
#include <sdk/io/FileReader.h>
#include <sdk/io/FileWriter.h>
#include <sdk/io/Reader.h>
#include <sdk/io/BufferWriter.h>
#include <sdk/io/BufferReader.h>
#include <sdk/io/native/FileWin32.h>
#include <sdk/io/native/FileUnix.h>
#include <sdk/text/StringTokenizer.h>

static lang_String__String* __strLit241;
static lang_String__String* __strLit240;
static lang_String__String* __strLit127;
static lang_String__String* __strLit126;
static lang_String__String* __strLit125;
static lang_String__String* __strLit124;

void io_File__File_init(io_File__File* this) {
}

lang_types__Bool io_File__File_exists__quest_impl(io_File__File* this) {
    lang_IO__FStream fd = lang_IO__FStream_open(io_File__File___getpath__(this), __strLit125);
    if (fd) {
        lang_IO__FStream_close(fd);
        return true;
    }
    return false;
}

lang_String__String* io_File__File_name_impl(io_File__File* this) {
    lang_String__String* trimmed = lang_String__String_trim_char(io_File__File___getpath__(this), io_File__File_class()->separator);
    lang_Numbers__SSizeT idx = lang_String__String_lastIndexOf(trimmed, io_File__File_class()->separator);
    if (idx == -1) {
        return trimmed;
    }
    return lang_String__String_substring_tillEnd(trimmed, idx + 1);
}

io_File__File* io_File__File_parent_impl(io_File__File* this) {
    lang_String__String* pName = io_File__File_parentName(this);
    if (pName) {
        return io_File__File_new(pName);
    }
    if (lang_String____OP_NE_String_String__Bool(io_File__File___getpath__(this), __strLit126) && !lang_String__String_startsWith__quest_char(io_File__File___getpath__(this), io_File__File_class()->separator)) {
        return io_File__File_new(__strLit127);
    }
    return ((io_File__File*) (NULL));
}

lang_String__String* io_File__File_parentName_impl(io_File__File* this) {
    lang_Numbers__SSizeT idx = lang_String__String_lastIndexOf(io_File__File___getpath__(this), io_File__File_class()->separator);
    if (idx == -1) {
        return lang_Character____OP_AS_Char__star__String(NULL);
    }
    return lang_String__String_substring(io_File__File___getpath__(this), 0, idx);
}

lang_Numbers__Int io_File__File_mkfifo_impl(io_File__File* this) {
    return io_File__File_mkfifo_withMode(this, 493);
}

lang_Numbers__Int io_File__File_mkdir_impl(io_File__File* this) {
    return io_File__File_mkdir_withMode(this, 493);
}

void io_File__File_mkdirs_impl(io_File__File* this) {
    io_File__File_mkdirs_withMode(this, 493);
}

lang_Numbers__Int io_File__File_mkdirs_withMode_impl(io_File__File* this, lang_Numbers__Int32 mode) {
    
    {
        io_File__File* parent = io_File__File_parent(this);
        if (parent) {
            io_File__File_mkdirs(parent);
        }
    }
    return io_File__File_mkdir(this);
}

lang_String__String* io_File__File_getPath_impl(io_File__File* this) {
    return io_File__File___getpath__(this);
}

io_File__File* io_File__File_getAbsoluteFile_impl(io_File__File* this) {
    return io_File__File_new(io_File__File_getAbsolutePath(this));
}

lang_String__String* io_File__File_getReducedPath_impl(io_File__File* this) {
    structs_ArrayList__ArrayList* elems = structs_ArrayList__ArrayList_new((lang_types__Class*)lang_String__String_class());
    
    {
        lang_String__String* elem = NULL;
        
        {
            lang_Iterators__BackIterator* __iter238 = structs_ArrayList__ArrayList_iterator(lang_String__String_split_withCharWithoutmaxTokens((lang_String__String*) io_File__File___getpath__(this), io_File__File_class()->separator));
            while (lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) __iter238)) {
                lang_Iterators__Iterator_next((lang_Iterators__Iterator*) __iter238, (uint8_t*) &(elem));
                if (lang_String____OP_EQ_String_String__Bool(elem, __strLit240)) {
                    if (!structs_List__List_empty__quest((structs_List__List*) elems)) {
                        structs_ArrayList__ArrayList_removeAt(elems, NULL, structs_List__List_lastIndex((structs_List__List*) elems));
                    }
                    else {
                        structs_ArrayList__ArrayList_add(elems, (uint8_t*) &(elem));
                    }
                }
                else if (lang_String____OP_EQ_String_String__Bool(elem, __strLit241)) {
                }
                else {
                    structs_ArrayList__ArrayList_add(elems, (uint8_t*) &(elem));
                }
            }
        }
    }
    lang_String__String* result = structs_List__List_join_char((structs_List__List*) elems, io_File__File_class()->separator);
    if (lang_String__String_startsWith__quest_char(io_File__File___getpath__(this), io_File__File_class()->separator)) {
        result = lang_String____OP_ADD_Char_String__String(io_File__File_class()->separator, result);
    }
    return result;
}

lang_Numbers__Int io_File__File_remove_impl(io_File__File* this) {
    return _remove(io_File__File___getpath__(this));
}

void io_File__File_copyTo_impl(io_File__File* this, io_File__File* dstFile) {
    io_File__File_mkdirs(io_File__File_parent(dstFile));
    io_FileReader__FileReader* src = io_FileReader__FileReader_new_withFile(this);
    io_FileWriter__FileWriter* dst = io_FileWriter__FileWriter_new_withFileOverwrite(dstFile);
    lang_Numbers__SSizeT max = 8192;
    _lang_array__Array buffer = _lang_array__Array_new(lang_Character__Char, max);
    while (io_FileReader__FileReader_hasNext__quest(src)) {
        lang_Numbers__SizeT num = io_FileReader__FileReader_read(src, buffer.data, 0, max);
        io_FileWriter__FileWriter_write(dst, buffer.data, num);
    }
    io_FileWriter__FileWriter_close(dst);
    io_FileReader__FileReader_close(src);
}

lang_String__String* io_File__File_read_impl(io_File__File* this) {
    io_FileReader__FileReader* fR = io_FileReader__FileReader_new_withFile(this);
    io_BufferWriter__BufferWriter* bW = io_BufferWriter__BufferWriter_new();
    io_Writer__Writer_write_fromReaderDefaultBufferSize((io_Writer__Writer*) bW, (io_Reader__Reader*) (fR));
    io_BufferWriter__BufferWriter_close(bW);
    io_FileReader__FileReader_close(fR);
    return lang_Buffer__Buffer_toString(bW->buffer);
}

void io_File__File_write_string_impl(io_File__File* this, lang_String__String* str) {
    io_FileWriter__FileWriter* __callRoot128 = io_FileWriter__FileWriter_new_withFileOverwrite(this);
    io_Writer__Writer_write_fromReaderDefaultBufferSize((io_Writer__Writer*) __callRoot128, (io_Reader__Reader*) (io_BufferReader__BufferReader_new_withBuffer(str->_buffer)));
    io_FileWriter__FileWriter_close(__callRoot128);
}

void io_File__File_write_reader_impl(io_File__File* this, io_Reader__Reader* reader) {
    io_FileWriter__FileWriter* __callRoot129 = io_FileWriter__FileWriter_new_withFileOverwrite(this);
    io_Writer__Writer_write_fromReaderDefaultBufferSize((io_Writer__Writer*) __callRoot129, reader);
    io_FileWriter__FileWriter_close(__callRoot129);
}

lang_types__Bool io_File__File_walk_impl(io_File__File* this, lang_types__Closure f) {
    if (io_File__File_file__quest(this)) {
        if (!((lang_types__Bool (*)(io_File__File*, void*)) f.thunk)(this, f.context)) {
            return false;
        }
    }
    else if (io_File__File_dir__quest(this)) {
        
        {
            io_File__File* child = NULL;
            
            {
                lang_Iterators__BackIterator* __iter239 = structs_ArrayList__ArrayList_iterator(io_File__File_getChildren(this));
                while (lang_Iterators__Iterator_hasNext__quest((lang_Iterators__Iterator*) __iter239)) {
                    lang_Iterators__Iterator_next((lang_Iterators__Iterator*) __iter239, (uint8_t*) &(child));
                    if (!io_File__File_walk(child, f)) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}

io_File__File* io_File__File_getChild_impl(io_File__File* this, lang_String__String* name) {
    return io_File__File_new(lang_String____OP_ADD_String_String__String(lang_String____OP_ADD_String_Char__String(io_File__File___getpath__(this), io_File__File_class()->separator), name));
}

lang_String__String* io_File__File___getpath___impl(io_File__File* this) {
    return this->path;
}

void io_File__File___setpath___impl(io_File__File* this, lang_String__String* path) {
    this->path = path;
}

structs_ArrayList__ArrayList* io_File__File___getchildren___impl(io_File__File* this) {
    return io_File__File_getChildren(this);
}

void io_File__File___defaults___impl(io_File__File* this) {
    lang_types__Class___defaults___impl((lang_types__Class*) this);
}

lang_types__Bool io_File__File_dir__quest(io_File__File* this) {
    return (lang_types__Bool) ((io_File__FileClass *)((lang_types__Object *)this)->class)->dir__quest((io_File__File*)this);
}

lang_types__Bool io_File__File_file__quest(io_File__File* this) {
    return (lang_types__Bool) ((io_File__FileClass *)((lang_types__Object *)this)->class)->file__quest((io_File__File*)this);
}

lang_types__Bool io_File__File_link__quest(io_File__File* this) {
    return (lang_types__Bool) ((io_File__FileClass *)((lang_types__Object *)this)->class)->link__quest((io_File__File*)this);
}

lang_Numbers__LLong io_File__File_getSize(io_File__File* this) {
    return (lang_Numbers__LLong) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getSize((io_File__File*)this);
}

lang_types__Bool io_File__File_exists__quest(io_File__File* this) {
    return (lang_types__Bool) ((io_File__FileClass *)((lang_types__Object *)this)->class)->exists__quest((io_File__File*)this);
}

lang_Numbers__Int io_File__File_ownerPerm(io_File__File* this) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->ownerPerm((io_File__File*)this);
}

lang_Numbers__Int io_File__File_groupPerm(io_File__File* this) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->groupPerm((io_File__File*)this);
}

lang_Numbers__Int io_File__File_otherPerm(io_File__File* this) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->otherPerm((io_File__File*)this);
}

lang_String__String* io_File__File_name(io_File__File* this) {
    return (lang_String__String*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->name((io_File__File*)this);
}

io_File__File* io_File__File_parent(io_File__File* this) {
    return (io_File__File*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->parent((io_File__File*)this);
}

lang_String__String* io_File__File_parentName(io_File__File* this) {
    return (lang_String__String*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->parentName((io_File__File*)this);
}

lang_Numbers__Int io_File__File_mkfifo(io_File__File* this) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->mkfifo((io_File__File*)this);
}

lang_Numbers__Int io_File__File_mkfifo_withMode(io_File__File* this, lang_Numbers__Int32 mode) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->mkfifo_withMode((io_File__File*)this, mode);
}

lang_Numbers__Int io_File__File_mkdir(io_File__File* this) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->mkdir((io_File__File*)this);
}

lang_Numbers__Int io_File__File_mkdir_withMode(io_File__File* this, lang_Numbers__Int32 mode) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->mkdir_withMode((io_File__File*)this, mode);
}

void io_File__File_mkdirs(io_File__File* this) {
    ((io_File__FileClass *)((lang_types__Object *)this)->class)->mkdirs((io_File__File*)this);
}

lang_Numbers__Int io_File__File_mkdirs_withMode(io_File__File* this, lang_Numbers__Int32 mode) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->mkdirs_withMode((io_File__File*)this, mode);
}

lang_Numbers__Long io_File__File_lastAccessed(io_File__File* this) {
    return (lang_Numbers__Long) ((io_File__FileClass *)((lang_types__Object *)this)->class)->lastAccessed((io_File__File*)this);
}

lang_Numbers__Long io_File__File_lastModified(io_File__File* this) {
    return (lang_Numbers__Long) ((io_File__FileClass *)((lang_types__Object *)this)->class)->lastModified((io_File__File*)this);
}

lang_Numbers__Long io_File__File_created(io_File__File* this) {
    return (lang_Numbers__Long) ((io_File__FileClass *)((lang_types__Object *)this)->class)->created((io_File__File*)this);
}

lang_types__Bool io_File__File_relative__quest(io_File__File* this) {
    return (lang_types__Bool) ((io_File__FileClass *)((lang_types__Object *)this)->class)->relative__quest((io_File__File*)this);
}

lang_String__String* io_File__File_getPath(io_File__File* this) {
    return (lang_String__String*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getPath((io_File__File*)this);
}

lang_String__String* io_File__File_getAbsolutePath(io_File__File* this) {
    return (lang_String__String*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getAbsolutePath((io_File__File*)this);
}

io_File__File* io_File__File_getAbsoluteFile(io_File__File* this) {
    return (io_File__File*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getAbsoluteFile((io_File__File*)this);
}

lang_String__String* io_File__File_getReducedPath(io_File__File* this) {
    return (lang_String__String*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getReducedPath((io_File__File*)this);
}

structs_ArrayList__ArrayList* io_File__File_getChildrenNames(io_File__File* this) {
    return (structs_ArrayList__ArrayList*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getChildrenNames((io_File__File*)this);
}

structs_ArrayList__ArrayList* io_File__File_getChildren(io_File__File* this) {
    return (structs_ArrayList__ArrayList*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getChildren((io_File__File*)this);
}

lang_Numbers__Int io_File__File_remove(io_File__File* this) {
    return (lang_Numbers__Int) ((io_File__FileClass *)((lang_types__Object *)this)->class)->remove((io_File__File*)this);
}

void io_File__File_copyTo(io_File__File* this, io_File__File* dstFile) {
    ((io_File__FileClass *)((lang_types__Object *)this)->class)->copyTo((io_File__File*)this, dstFile);
}

lang_String__String* io_File__File_read(io_File__File* this) {
    return (lang_String__String*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->read((io_File__File*)this);
}

void io_File__File_write_string(io_File__File* this, lang_String__String* str) {
    ((io_File__FileClass *)((lang_types__Object *)this)->class)->write_string((io_File__File*)this, str);
}

void io_File__File_write_reader(io_File__File* this, io_Reader__Reader* reader) {
    ((io_File__FileClass *)((lang_types__Object *)this)->class)->write_reader((io_File__File*)this, reader);
}

lang_types__Bool io_File__File_walk(io_File__File* this, lang_types__Closure f) {
    return (lang_types__Bool) ((io_File__FileClass *)((lang_types__Object *)this)->class)->walk((io_File__File*)this, f);
}

io_File__File* io_File__File_getChild(io_File__File* this, lang_String__String* name) {
    return (io_File__File*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->getChild((io_File__File*)this, name);
}

lang_String__String* io_File__File___getpath__(io_File__File* this) {
    return (lang_String__String*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->__getpath__((io_File__File*)this);
}

void io_File__File___setpath__(io_File__File* this, lang_String__String* path) {
    ((io_File__FileClass *)((lang_types__Object *)this)->class)->__setpath__((io_File__File*)this, path);
}

structs_ArrayList__ArrayList* io_File__File___getchildren__(io_File__File* this) {
    return (structs_ArrayList__ArrayList*) ((io_File__FileClass *)((lang_types__Object *)this)->class)->__getchildren__((io_File__File*)this);
}

void io_File__File___defaults__(io_File__File* this) {
    ((lang_types__ObjectClass *)((lang_types__Object *)this)->class)->__defaults__((lang_types__Object*)this);
}
io_File__File* io_File__File_new(lang_String__String* path) {
    
    
    #if ((defined(__unix__)) || (defined(__APPLE__)))
    return ((io_File__File*) (io_native_FileUnix__FileUnix_new_unix(path)));
    #endif
    
    #if defined(__WIN32__) || defined(__WIN64__)
    return ((io_File__File*) (io_native_FileWin32__FileWin32_new_win32(path)));
    #endif
    lang_Exception__Exception_throw(lang_Exception__Exception_new((lang_types__Class*) (io_File__File_class()), __strLit124));
    return ((io_File__File*) (NULL));
}
io_File__File* io_File__File_new_parentFile(io_File__File* parent, lang_String__String* path) {
    
    lang_Exception__assert(parent != (io_File__File*) NULL);
    lang_Exception__assert(io_File__File___getpath__(parent) != (lang_String__String*) NULL);
    lang_Exception__assert(!lang_String__String_empty__quest(io_File__File___getpath__(parent)));
    return io_File__File_new(lang_String____OP_ADD_String_String__String(lang_String____OP_ADD_String_Char__String(io_File__File___getpath__(parent), io_File__File_class()->separator), path));
}
io_File__File* io_File__File_new_parentPath(lang_String__String* parent, lang_String__String* path) {
    
    return io_File__File_new(lang_String____OP_ADD_String_String__String(lang_String____OP_ADD_String_Char__String(parent, io_File__File_class()->separator), path));
}
lang_String__String* io_File__File_getCwd() {
    
    return ooc_get_cwd();
}
void io_File__File___load__() {
    lang_types__Class___load__();
    io_File__File_class()->MAX_PATH_LENGTH = 16383;
}

io_File__FileClass *io_File__File_class(){
    static _Bool __done__ = false;
    static io_File__FileClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(io_File__File),
                    .size = sizeof(void*)
                },
                .__defaults__ = (void*) io_File__File___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) io_File__File___load__,
            },
        },
        .new = (void*) io_File__File_new,
        .new_parentFile = (void*) io_File__File_new_parentFile,
        .new_parentPath = (void*) io_File__File_new_parentPath,
        .dir__quest = (void*) io_File__File_dir__quest,
        .file__quest = (void*) io_File__File_file__quest,
        .link__quest = (void*) io_File__File_link__quest,
        .getSize = (void*) io_File__File_getSize,
        .exists__quest = (void*) io_File__File_exists__quest_impl,
        .ownerPerm = (void*) io_File__File_ownerPerm,
        .groupPerm = (void*) io_File__File_groupPerm,
        .otherPerm = (void*) io_File__File_otherPerm,
        .name = (void*) io_File__File_name_impl,
        .parent = (void*) io_File__File_parent_impl,
        .parentName = (void*) io_File__File_parentName_impl,
        .mkfifo = (void*) io_File__File_mkfifo_impl,
        .mkfifo_withMode = (void*) io_File__File_mkfifo_withMode,
        .mkdir = (void*) io_File__File_mkdir_impl,
        .mkdir_withMode = (void*) io_File__File_mkdir_withMode,
        .mkdirs = (void*) io_File__File_mkdirs_impl,
        .mkdirs_withMode = (void*) io_File__File_mkdirs_withMode_impl,
        .lastAccessed = (void*) io_File__File_lastAccessed,
        .lastModified = (void*) io_File__File_lastModified,
        .created = (void*) io_File__File_created,
        .relative__quest = (void*) io_File__File_relative__quest,
        .getPath = (void*) io_File__File_getPath_impl,
        .getAbsolutePath = (void*) io_File__File_getAbsolutePath,
        .getAbsoluteFile = (void*) io_File__File_getAbsoluteFile_impl,
        .getReducedPath = (void*) io_File__File_getReducedPath_impl,
        .getChildrenNames = (void*) io_File__File_getChildrenNames,
        .getChildren = (void*) io_File__File_getChildren,
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
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("File", 4);
    }
    return &class;
}
void io_File_load() {
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
        structs_ArrayList_load();
        io_FileReader_load();
        io_FileWriter_load();
        io_Reader_load();
        io_BufferWriter_load();
        io_BufferReader_load();
        io_native_FileWin32_load();
        io_native_FileUnix_load();
        text_StringTokenizer_load();
        io_File__File___load__();
        __strLit241 = (void*) lang_String__makeStringLiteral(".", 1);
        __strLit240 = (void*) lang_String__makeStringLiteral("..", 2);
        __strLit127 = (void*) lang_String__makeStringLiteral(".", 1);
        __strLit126 = (void*) lang_String__makeStringLiteral(".", 1);
        __strLit125 = (void*) lang_String__makeStringLiteral("rb", 2);
        __strLit124 = (void*) lang_String__makeStringLiteral("Unsupported platform!\n", 22);
    }
}


lang_types__Bool io_File___isDirHardlink__quest(lang_Character__CString dir) {
    return (dir[0] == '.') && (dir[1] == '\0' || (dir[1] == '.' && dir[2] == '\0'));
}
