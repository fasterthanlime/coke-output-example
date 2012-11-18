/* io/FileReader header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_FileReader___
#define ___io_FileReader___

#include <sdk/io/FileReader-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/io/Reader.h>

struct _io_FileReader__FileReader {
    struct _io_Reader__Reader __super__;
    lang_String__String* fileName;
    lang_IO__FStream file;
};


struct _io_FileReader__FileReaderClass {
    struct _io_Reader__ReaderClass __super__;
    io_FileReader__FileReader* (*new_withFile)(io_File__File*);
    void (*init_withFile)(io_FileReader__FileReader*, io_File__File*);
    io_FileReader__FileReader* (*new_withName)(lang_String__String*);
    void (*init_withName)(io_FileReader__FileReader*, lang_String__String*);
    io_FileReader__FileReader* (*new_withMode)(lang_String__String*, lang_String__String*);
    void (*init_withMode)(io_FileReader__FileReader*, lang_String__String*, lang_String__String*);
    io_FileReader__FileReader* (*new_fromFStream)(lang_IO__FStream);
    void (*init_fromFStream)(io_FileReader__FileReader*, lang_IO__FStream);
    void (*read_fullBuffer)(io_FileReader__FileReader*, lang_Buffer__Buffer*);
};


#ifdef OOC_FROM_C
#define FileReader io_FileReader__FileReader
#define FileReader_class() io_FileReader__FileReader_class()
#define FileReaderClass io_FileReader__FileReaderClass
#define FileReaderClass_class() io_FileReader__FileReaderClass_class()
#define FileReader_new_withFile(fileObject) (void*) io_FileReader__FileReader_new_withFile((void*) (fileObject))
#define FileReader_init_withFile(_this_, fileObject) io_FileReader__FileReader_init_withFile((void*) (_this_), (void*) (fileObject))
#define FileReader_new_withName(fileName) (void*) io_FileReader__FileReader_new_withName((void*) (fileName))
#define FileReader_init_withName(_this_, fileName) io_FileReader__FileReader_init_withName((void*) (_this_), (void*) (fileName))
#define FileReader_new_withMode(fileName, mode) (void*) io_FileReader__FileReader_new_withMode((void*) (fileName), (void*) (mode))
#define FileReader_init_withMode(_this_, fileName, mode) io_FileReader__FileReader_init_withMode((void*) (_this_), (void*) (fileName), (void*) (mode))
#define FileReader_new_fromFStream(file) (void*) io_FileReader__FileReader_new_fromFStream((file))
#define FileReader_init_fromFStream(_this_, file) io_FileReader__FileReader_init_fromFStream((void*) (_this_), (file))
#define FileReader_read(_this_, buffer, offset, count) io_FileReader__FileReader_read((void*) (_this_), (void*) (buffer), (offset), (count))
#define FileReader_read_fullBuffer(_this_, buffer) io_FileReader__FileReader_read_fullBuffer((void*) (_this_), (void*) (buffer))
#define FileReader_read_char(_this_) io_FileReader__FileReader_read_char((void*) (_this_))
#define FileReader_hasNext__quest(_this_) io_FileReader__FileReader_hasNext__quest((void*) (_this_))
#define FileReader_rewind(_this_, offset) io_FileReader__FileReader_rewind((void*) (_this_), (offset))
#define FileReader_mark(_this_) io_FileReader__FileReader_mark((void*) (_this_))
#define FileReader_reset(_this_, marker) io_FileReader__FileReader_reset((void*) (_this_), (marker))
#define FileReader_close(_this_) io_FileReader__FileReader_close((void*) (_this_))
#define FileReader___defaults__(_this_) io_FileReader__FileReader___defaults__((void*) (_this_))
#define FileReader___load__() io_FileReader__FileReader___load__()
#endif

#endif // ___io_FileReader___
