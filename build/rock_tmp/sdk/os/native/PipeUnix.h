/* os/native/PipeUnix header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___os_native_PipeUnix___
#define ___os_native_PipeUnix___

#include <sdk/os/native/PipeUnix-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/os/Pipe.h>

#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _os_native_PipeUnix__PipeUnix {
    struct _os_Pipe__Pipe __super__;
    os_FileDescriptor__FileDescriptor readFD;
    os_FileDescriptor__FileDescriptor writeFD;
};


#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _os_native_PipeUnix__PipeUnixClass {
    struct _os_Pipe__PipeClass __super__;
    os_native_PipeUnix__PipeUnix* (*new_withFDs)(os_FileDescriptor__FileDescriptor, os_FileDescriptor__FileDescriptor);
    void (*init_withFDs)(os_native_PipeUnix__PipeUnix*, os_FileDescriptor__FileDescriptor, os_FileDescriptor__FileDescriptor);
    os_native_PipeUnix__PipeUnix* (*new_twos)();
    void (*init_twos)(os_native_PipeUnix__PipeUnix*);
};


#endif
#ifdef OOC_FROM_C
#define PipeUnix os_native_PipeUnix__PipeUnix
#define PipeUnix_class() os_native_PipeUnix__PipeUnix_class()
#define PipeUnixClass os_native_PipeUnix__PipeUnixClass
#define PipeUnixClass_class() os_native_PipeUnix__PipeUnixClass_class()
#define PipeUnix_new_withFDs(readFD, writeFD) (void*) os_native_PipeUnix__PipeUnix_new_withFDs((readFD), (writeFD))
#define PipeUnix_init_withFDs(_this_, readFD, writeFD) os_native_PipeUnix__PipeUnix_init_withFDs((void*) (_this_), (readFD), (writeFD))
#define PipeUnix_new_twos() (void*) os_native_PipeUnix__PipeUnix_new_twos()
#define PipeUnix_init_twos(_this_) os_native_PipeUnix__PipeUnix_init_twos((void*) (_this_))
#define PipeUnix_read(_this_, len) (void*) os_native_PipeUnix__PipeUnix_read((void*) (_this_), (len))
#define PipeUnix_write(_this_, data, len) os_native_PipeUnix__PipeUnix_write((void*) (_this_), (void*) (data), (len))
#define PipeUnix_close(_this_, mode) os_native_PipeUnix__PipeUnix_close((void*) (_this_), (mode))
#define PipeUnix___defaults__(_this_) os_native_PipeUnix__PipeUnix___defaults__((void*) (_this_))
#define PipeUnix___load__() os_native_PipeUnix__PipeUnix___load__()
#endif

#endif // ___os_native_PipeUnix___
