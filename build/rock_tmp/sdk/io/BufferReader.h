/* io/BufferReader header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_BufferReader___
#define ___io_BufferReader___

#include <sdk/io/BufferReader-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/io/Reader.h>

struct _io_BufferReader__BufferReader {
    struct _io_Reader__Reader __super__;
    lang_Buffer__Buffer* buffer;
};


struct _io_BufferReader__BufferReaderClass {
    struct _io_Reader__ReaderClass __super__;
    io_BufferReader__BufferReader* (*new_withBuffer)(lang_Buffer__Buffer*);
    void (*init_withBuffer)(io_BufferReader__BufferReader*, lang_Buffer__Buffer*);
    lang_Buffer__Buffer* (*buffer)(io_BufferReader__BufferReader*);
};


#ifdef OOC_FROM_C
#define BufferReader io_BufferReader__BufferReader
#define BufferReader_class() io_BufferReader__BufferReader_class()
#define BufferReaderClass io_BufferReader__BufferReaderClass
#define BufferReaderClass_class() io_BufferReader__BufferReaderClass_class()
#define BufferReader_new_withBuffer(buffer) (void*) io_BufferReader__BufferReader_new_withBuffer((void*) (buffer))
#define BufferReader_init_withBuffer(_this_, buffer) io_BufferReader__BufferReader_init_withBuffer((void*) (_this_), (void*) (buffer))
#define BufferReader_buffer(_this_) (void*) io_BufferReader__BufferReader_buffer((void*) (_this_))
#define BufferReader_close(_this_) io_BufferReader__BufferReader_close((void*) (_this_))
#define BufferReader_read(_this_, dest, destOffset, maxRead) io_BufferReader__BufferReader_read((void*) (_this_), (dest), (destOffset), (maxRead))
#define BufferReader_peek(_this_) io_BufferReader__BufferReader_peek((void*) (_this_))
#define BufferReader_read_char(_this_) io_BufferReader__BufferReader_read_char((void*) (_this_))
#define BufferReader_hasNext__quest(_this_) io_BufferReader__BufferReader_hasNext__quest((void*) (_this_))
#define BufferReader_rewind(_this_, offset) io_BufferReader__BufferReader_rewind((void*) (_this_), (offset))
#define BufferReader_mark(_this_) io_BufferReader__BufferReader_mark((void*) (_this_))
#define BufferReader_reset(_this_, marker) io_BufferReader__BufferReader_reset((void*) (_this_), (marker))
#define BufferReader___defaults__(_this_) io_BufferReader__BufferReader___defaults__((void*) (_this_))
#define BufferReader___load__() io_BufferReader__BufferReader___load__()
#endif

#endif // ___io_BufferReader___
