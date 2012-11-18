/* io/File header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_File_fwd___
#define ___io_File_fwd___

#include <stdio.h>

struct _io_File__File;
typedef struct _io_File__File io_File__File;
struct _io_File__FileClass;
typedef struct _io_File__FileClass io_File__FileClass;

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
#include <sdk/structs/ArrayList-fwd.h>
#include <sdk/io/FileReader-fwd.h>
#include <sdk/io/FileWriter-fwd.h>
#include <sdk/io/Reader-fwd.h>
#include <sdk/io/BufferWriter-fwd.h>
#include <sdk/io/BufferReader-fwd.h>
#include <sdk/io/native/FileWin32-fwd.h>
#include <sdk/io/native/FileUnix-fwd.h>
#include <sdk/text/StringTokenizer-fwd.h>

#ifndef __FUNC___File_Bool__DEFINE
#define __FUNC___File_Bool__DEFINE

typedef lang_types__Bool (*__FUNC___File_Bool)(io_File__File*, void*);

#endif

io_File__FileClass *io_File__File_class();
void io_File__File_init(io_File__File* this);
io_File__File* io_File__File_new(lang_String__String* path);
io_File__File* io_File__File_new_parentFile(io_File__File* parent, lang_String__String* path);
io_File__File* io_File__File_new_parentPath(lang_String__String* parent, lang_String__String* path);
lang_types__Bool io_File__File_dir__quest(io_File__File* this);
lang_types__Bool io_File__File_file__quest(io_File__File* this);
lang_types__Bool io_File__File_link__quest(io_File__File* this);
lang_Numbers__LLong io_File__File_getSize(io_File__File* this);
lang_types__Bool io_File__File_exists__quest(io_File__File* this);
lang_types__Bool io_File__File_exists__quest_impl(io_File__File* this);
lang_Numbers__Int io_File__File_ownerPerm(io_File__File* this);
lang_Numbers__Int io_File__File_groupPerm(io_File__File* this);
lang_Numbers__Int io_File__File_otherPerm(io_File__File* this);
lang_String__String* io_File__File_name(io_File__File* this);
lang_String__String* io_File__File_name_impl(io_File__File* this);
io_File__File* io_File__File_parent(io_File__File* this);
io_File__File* io_File__File_parent_impl(io_File__File* this);
lang_String__String* io_File__File_parentName(io_File__File* this);
lang_String__String* io_File__File_parentName_impl(io_File__File* this);
lang_Numbers__Int io_File__File_mkfifo(io_File__File* this);
lang_Numbers__Int io_File__File_mkfifo_impl(io_File__File* this);
lang_Numbers__Int io_File__File_mkfifo_withMode(io_File__File* this, lang_Numbers__Int32 mode);
lang_Numbers__Int io_File__File_mkdir(io_File__File* this);
lang_Numbers__Int io_File__File_mkdir_impl(io_File__File* this);
lang_Numbers__Int io_File__File_mkdir_withMode(io_File__File* this, lang_Numbers__Int32 mode);
void io_File__File_mkdirs(io_File__File* this);
void io_File__File_mkdirs_impl(io_File__File* this);
lang_Numbers__Int io_File__File_mkdirs_withMode(io_File__File* this, lang_Numbers__Int32 mode);
lang_Numbers__Int io_File__File_mkdirs_withMode_impl(io_File__File* this, lang_Numbers__Int32 mode);
lang_Numbers__Long io_File__File_lastAccessed(io_File__File* this);
lang_Numbers__Long io_File__File_lastModified(io_File__File* this);
lang_Numbers__Long io_File__File_created(io_File__File* this);
lang_types__Bool io_File__File_relative__quest(io_File__File* this);
lang_String__String* io_File__File_getPath(io_File__File* this);
lang_String__String* io_File__File_getPath_impl(io_File__File* this);
lang_String__String* io_File__File_getAbsolutePath(io_File__File* this);
io_File__File* io_File__File_getAbsoluteFile(io_File__File* this);
io_File__File* io_File__File_getAbsoluteFile_impl(io_File__File* this);
lang_String__String* io_File__File_getReducedPath(io_File__File* this);
lang_String__String* io_File__File_getReducedPath_impl(io_File__File* this);
structs_ArrayList__ArrayList* io_File__File_getChildrenNames(io_File__File* this);
structs_ArrayList__ArrayList* io_File__File_getChildren(io_File__File* this);
lang_Numbers__Int io_File__File_remove(io_File__File* this);
lang_Numbers__Int io_File__File_remove_impl(io_File__File* this);
void io_File__File_copyTo(io_File__File* this, io_File__File* dstFile);
void io_File__File_copyTo_impl(io_File__File* this, io_File__File* dstFile);
lang_String__String* io_File__File_read(io_File__File* this);
lang_String__String* io_File__File_read_impl(io_File__File* this);
void io_File__File_write_string(io_File__File* this, lang_String__String* str);
void io_File__File_write_string_impl(io_File__File* this, lang_String__String* str);
void io_File__File_write_reader(io_File__File* this, io_Reader__Reader* reader);
void io_File__File_write_reader_impl(io_File__File* this, io_Reader__Reader* reader);
lang_types__Bool io_File__File_walk(io_File__File* this, lang_types__Closure f);
lang_types__Bool io_File__File_walk_impl(io_File__File* this, lang_types__Closure f);
io_File__File* io_File__File_getChild(io_File__File* this, lang_String__String* name);
io_File__File* io_File__File_getChild_impl(io_File__File* this, lang_String__String* name);
lang_String__String* io_File__File_getCwd();
lang_String__String* io_File__File___getpath__(io_File__File* this);
lang_String__String* io_File__File___getpath___impl(io_File__File* this);
void io_File__File___setpath__(io_File__File* this, lang_String__String* path);
void io_File__File___setpath___impl(io_File__File* this, lang_String__String* path);
structs_ArrayList__ArrayList* io_File__File___getchildren__(io_File__File* this);
structs_ArrayList__ArrayList* io_File__File___getchildren___impl(io_File__File* this);
void io_File__File___defaults__(io_File__File* this);
void io_File__File___defaults___impl(io_File__File* this);
void io_File__File___load__();
void io_File_load();
lang_types__Bool io_File___isDirHardlink__quest(lang_Character__CString dir);

#endif // ___io_File_fwd___
