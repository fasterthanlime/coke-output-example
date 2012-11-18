/* os/FileDescriptor header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___os_FileDescriptor___
#define ___os_FileDescriptor___

#include <sdk/os/FileDescriptor-fwd.h>
#include <sdk/lang/types.h>

struct _os_FileDescriptor__FileDescriptorClass {
    struct _lang_types__ClassClass __super__;
    lang_Numbers__Int (*write_string)(os_FileDescriptor__FileDescriptor, lang_String__String*);
    lang_types__Pointer (*read_evilAlloc)(os_FileDescriptor__FileDescriptor, lang_Numbers__Int);
    void (*_errMsg)(os_FileDescriptor__FileDescriptor, lang_Numbers__Int, lang_String__String*);
};


#ifdef OOC_FROM_C
#define open(, ) os_FileDescriptor__open((), ())
#define FileDescriptor os_FileDescriptor__FileDescriptor
#define FileDescriptor_class() os_FileDescriptor__FileDescriptor_class()
#define FileDescriptorClass os_FileDescriptor__FileDescriptorClass
#define FileDescriptorClass_class() os_FileDescriptor__FileDescriptorClass_class()
#define FileDescriptor_write_string(_this_, str) os_FileDescriptor__FileDescriptor_write_string((void*) (_this_), (void*) (str))
#define FileDescriptor_read_evilAlloc(_this_, len) (void*) os_FileDescriptor__FileDescriptor_read_evilAlloc((void*) (_this_), (len))
#define FileDescriptor_write(_this_, , ) os_FileDescriptor__FileDescriptor_write((void*) (_this_), (void*) (), ())
#define FileDescriptor_read(_this_, , ) os_FileDescriptor__FileDescriptor_read((void*) (_this_), (void*) (), ())
#define FileDescriptor_close(_this_) os_FileDescriptor__FileDescriptor_close((void*) (_this_))
#define FileDescriptor__errMsg(_this_, var, funcName) os_FileDescriptor__FileDescriptor__errMsg((void*) (_this_), (var), (void*) (funcName))
#define FileDescriptor___load__() os_FileDescriptor__FileDescriptor___load__()
#endif

#endif // ___os_FileDescriptor___
