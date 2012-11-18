/* io/BufferWriter header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___io_BufferWriter___
#define ___io_BufferWriter___

#include <sdk/io/BufferWriter-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/io/Writer.h>

struct _io_BufferWriter__BufferWriter {
    struct _io_Writer__Writer __super__;
    lang_Buffer__Buffer* buffer;
    lang_Numbers__Long pos;
};


struct _io_BufferWriter__BufferWriterClass {
    struct _io_Writer__WriterClass __super__;
    io_BufferWriter__BufferWriter* (*new)();
    io_BufferWriter__BufferWriter* (*new_withBuffer)(lang_Buffer__Buffer*);
    void (*init_withBuffer)(io_BufferWriter__BufferWriter*, lang_Buffer__Buffer*);
    lang_Buffer__Buffer* (*buffer)(io_BufferWriter__BufferWriter*);
    void (*_makeRoom)(io_BufferWriter__BufferWriter*, lang_Numbers__Long);
    lang_Numbers__Long (*mark)(io_BufferWriter__BufferWriter*);
    void (*seek)(io_BufferWriter__BufferWriter*, lang_Numbers__Long);
    void (*vwritef)(io_BufferWriter__BufferWriter*, lang_String__String*, lang_System__VaList);
};


#ifdef OOC_FROM_C
#define BufferWriter io_BufferWriter__BufferWriter
#define BufferWriter_class() io_BufferWriter__BufferWriter_class()
#define BufferWriterClass io_BufferWriter__BufferWriterClass
#define BufferWriterClass_class() io_BufferWriter__BufferWriterClass_class()
#define BufferWriter_new() (void*) io_BufferWriter__BufferWriter_new()
#define BufferWriter_init(_this_) io_BufferWriter__BufferWriter_init((void*) (_this_))
#define BufferWriter_new_withBuffer(buffer) (void*) io_BufferWriter__BufferWriter_new_withBuffer((void*) (buffer))
#define BufferWriter_init_withBuffer(_this_, buffer) io_BufferWriter__BufferWriter_init_withBuffer((void*) (_this_), (void*) (buffer))
#define BufferWriter_buffer(_this_) (void*) io_BufferWriter__BufferWriter_buffer((void*) (_this_))
#define BufferWriter_close(_this_) io_BufferWriter__BufferWriter_close((void*) (_this_))
#define BufferWriter__makeRoom(_this_, len) io_BufferWriter__BufferWriter__makeRoom((void*) (_this_), (len))
#define BufferWriter_write_chr(_this_, chr) io_BufferWriter__BufferWriter_write_chr((void*) (_this_), (chr))
#define BufferWriter_mark(_this_) io_BufferWriter__BufferWriter_mark((void*) (_this_))
#define BufferWriter_seek(_this_, p) io_BufferWriter__BufferWriter_seek((void*) (_this_), (p))
#define BufferWriter_write(_this_, chars, length) io_BufferWriter__BufferWriter_write((void*) (_this_), (chars), (length))
#define BufferWriter_vwritef(_this_, fmt, list) io_BufferWriter__BufferWriter_vwritef((void*) (_this_), (void*) (fmt), (list))
#define BufferWriter___defaults__(_this_) io_BufferWriter__BufferWriter___defaults__((void*) (_this_))
#define BufferWriter___load__() io_BufferWriter__BufferWriter___load__()
#endif

#endif // ___io_BufferWriter___
