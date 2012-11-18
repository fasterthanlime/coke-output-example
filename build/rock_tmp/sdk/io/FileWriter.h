/* io/FileWriter header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_FileWriter___
#define ___io_FileWriter___

#include <sdk/io/FileWriter-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/io/Writer.h>

struct _io_FileWriter__FileWriter {
    struct _io_Writer__Writer __super__;
    lang_IO__FStream file;
};


struct _io_FileWriter__FileWriterClass {
    struct _io_Writer__WriterClass __super__;
    io_FileWriter__FileWriter* (*new_withFile)(io_File__File*, lang_types__Bool);
    void (*init_withFile)(io_FileWriter__FileWriter*, io_File__File*, lang_types__Bool);
    io_FileWriter__FileWriter* (*new_withFileOverwrite)(io_File__File*);
    void (*init_withFileOverwrite)(io_FileWriter__FileWriter*, io_File__File*);
    io_FileWriter__FileWriter* (*new_withFileAndFlags)(io_File__File*, lang_Numbers__Int);
    void (*init_withFileAndFlags)(io_FileWriter__FileWriter*, io_File__File*, lang_Numbers__Int);
    io_FileWriter__FileWriter* (*new_withName)(lang_String__String*, lang_types__Bool);
    void (*init_withName)(io_FileWriter__FileWriter*, lang_String__String*, lang_types__Bool);
    io_FileWriter__FileWriter* (*new_withMode)(lang_String__String*, lang_String__String*);
    void (*init_withMode)(io_FileWriter__FileWriter*, lang_String__String*, lang_String__String*);
    io_FileWriter__FileWriter* (*new_withModeAndFlags)(lang_String__String*, lang_String__String*, lang_Numbers__Int);
    void (*init_withModeAndFlags)(io_FileWriter__FileWriter*, lang_String__String*, lang_String__String*, lang_Numbers__Int);
    io_FileWriter__FileWriter* (*new_withFStream)(lang_IO__FStream);
    void (*init_withFStream)(io_FileWriter__FileWriter*, lang_IO__FStream);
    io_FileWriter__FileWriter* (*new_withNameOverwrite)(lang_String__String*);
    void (*init_withNameOverwrite)(io_FileWriter__FileWriter*, lang_String__String*);
    io_FileWriter__FileWriter* (*createTempFile)(lang_String__String*, lang_String__String*);
    os_Pipe__Pipe* (*asPipe)(io_FileWriter__FileWriter*);
};


#ifdef OOC_FROM_C
#define FileWriter io_FileWriter__FileWriter
#define FileWriter_class() io_FileWriter__FileWriter_class()
#define FileWriterClass io_FileWriter__FileWriterClass
#define FileWriterClass_class() io_FileWriter__FileWriterClass_class()
#define FileWriter_new_withFile(fileObject, append) (void*) io_FileWriter__FileWriter_new_withFile((void*) (fileObject), (append))
#define FileWriter_init_withFile(_this_, fileObject, append) io_FileWriter__FileWriter_init_withFile((void*) (_this_), (void*) (fileObject), (append))
#define FileWriter_new_withFileOverwrite(fileObject) (void*) io_FileWriter__FileWriter_new_withFileOverwrite((void*) (fileObject))
#define FileWriter_init_withFileOverwrite(_this_, fileObject) io_FileWriter__FileWriter_init_withFileOverwrite((void*) (_this_), (void*) (fileObject))
#define FileWriter_new_withFileAndFlags(fileObject, flags) (void*) io_FileWriter__FileWriter_new_withFileAndFlags((void*) (fileObject), (flags))
#define FileWriter_init_withFileAndFlags(_this_, fileObject, flags) io_FileWriter__FileWriter_init_withFileAndFlags((void*) (_this_), (void*) (fileObject), (flags))
#define FileWriter_new_withName(fileName, append) (void*) io_FileWriter__FileWriter_new_withName((void*) (fileName), (append))
#define FileWriter_init_withName(_this_, fileName, append) io_FileWriter__FileWriter_init_withName((void*) (_this_), (void*) (fileName), (append))
#define FileWriter_new_withMode(fileName, mode) (void*) io_FileWriter__FileWriter_new_withMode((void*) (fileName), (void*) (mode))
#define FileWriter_init_withMode(_this_, fileName, mode) io_FileWriter__FileWriter_init_withMode((void*) (_this_), (void*) (fileName), (void*) (mode))
#define FileWriter_new_withModeAndFlags(fileName, mode, flags) (void*) io_FileWriter__FileWriter_new_withModeAndFlags((void*) (fileName), (void*) (mode), (flags))
#define FileWriter_init_withModeAndFlags(_this_, fileName, mode, flags) io_FileWriter__FileWriter_init_withModeAndFlags((void*) (_this_), (void*) (fileName), (void*) (mode), (flags))
#define FileWriter_new_withFStream(file) (void*) io_FileWriter__FileWriter_new_withFStream((file))
#define FileWriter_init_withFStream(_this_, file) io_FileWriter__FileWriter_init_withFStream((void*) (_this_), (file))
#define FileWriter_new_withNameOverwrite(fileName) (void*) io_FileWriter__FileWriter_new_withNameOverwrite((void*) (fileName))
#define FileWriter_init_withNameOverwrite(_this_, fileName) io_FileWriter__FileWriter_init_withNameOverwrite((void*) (_this_), (void*) (fileName))
#define FileWriter_createTempFile(pattern, mode) (void*) io_FileWriter__FileWriter_createTempFile((void*) (pattern), (void*) (mode))
#define FileWriter_write(_this_, bytes, length) io_FileWriter__FileWriter_write((void*) (_this_), (bytes), (length))
#define FileWriter_write_chr(_this_, chr) io_FileWriter__FileWriter_write_chr((void*) (_this_), (chr))
#define FileWriter_close(_this_) io_FileWriter__FileWriter_close((void*) (_this_))
#define FileWriter_asPipe(_this_) (void*) io_FileWriter__FileWriter_asPipe((void*) (_this_))
#define FileWriter___defaults__(_this_) io_FileWriter__FileWriter___defaults__((void*) (_this_))
#define FileWriter___load__() io_FileWriter__FileWriter___load__()
#endif

#endif // ___io_FileWriter___
