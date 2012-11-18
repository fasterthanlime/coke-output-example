/* os/Pipe header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___os_Pipe___
#define ___os_Pipe___

#include <sdk/os/Pipe-fwd.h>
#include <sdk/lang/types.h>

struct _os_Pipe__Pipe {
    struct _lang_types__Object __super__;
};


struct _os_Pipe__PipeClass {
    struct _lang_types__ClassClass __super__;
    void (*init)(os_Pipe__Pipe*);
    os_Pipe__Pipe* (*new)();
    lang_types__Pointer (*read)(os_Pipe__Pipe*, lang_Numbers__Int);
    lang_Numbers__Int (*write_string)(os_Pipe__Pipe*, lang_String__String*);
    lang_Numbers__Int (*write)(os_Pipe__Pipe*, lang_types__Pointer, lang_Numbers__Int);
    lang_Numbers__Int (*close)(os_Pipe__Pipe*, lang_Character__Char);
};


#ifdef OOC_FROM_C
#define Pipe os_Pipe__Pipe
#define Pipe_class() os_Pipe__Pipe_class()
#define PipeClass os_Pipe__PipeClass
#define PipeClass_class() os_Pipe__PipeClass_class()
#define Pipe_init(_this_) os_Pipe__Pipe_init((void*) (_this_))
#define Pipe_new() (void*) os_Pipe__Pipe_new()
#define Pipe_read(_this_, len) (void*) os_Pipe__Pipe_read((void*) (_this_), (len))
#define Pipe_write_string(_this_, str) os_Pipe__Pipe_write_string((void*) (_this_), (void*) (str))
#define Pipe_write(_this_, data, len) os_Pipe__Pipe_write((void*) (_this_), (void*) (data), (len))
#define Pipe_close(_this_, mode) os_Pipe__Pipe_close((void*) (_this_), (mode))
#define Pipe___defaults__(_this_) os_Pipe__Pipe___defaults__((void*) (_this_))
#define Pipe___load__() os_Pipe__Pipe___load__()
#endif

#endif // ___os_Pipe___
