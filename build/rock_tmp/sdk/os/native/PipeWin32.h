/* os/native/PipeWin32 header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___os_native_PipeWin32___
#define ___os_native_PipeWin32___

#include <sdk/os/native/PipeWin32-fwd.h>
#include <sdk/lang/types.h>
#include <sdk/os/Pipe.h>

#if defined(__WIN32__) || defined(__WIN64__)
struct _os_native_PipeWin32__PipeWin32 {
    struct _os_Pipe__Pipe __super__;
    native_win32_types__Handle readFD;
    native_win32_types__Handle writeFD;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _os_native_PipeWin32__SecurityAttributesClass {
    struct _lang_types__ClassClass __super__;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _os_native_PipeWin32__PipeWin32Class {
    struct _os_Pipe__PipeClass __super__;
    os_native_PipeWin32__PipeWin32* (*new_twos)();
    void (*init_twos)(os_native_PipeWin32__PipeWin32*);
};


#endif
#ifdef OOC_FROM_C
#define CreatePipe(readPipe, writePipe, lpPipeAttributes, nSize) os_native_PipeWin32__CreatePipe((readPipe), (writePipe), (void*) (lpPipeAttributes), (nSize))
#define ReadFile(hFile, buffer, numberOfBytesToRead, numberOfBytesRead, lpOverlapped) os_native_PipeWin32__ReadFile((hFile), (void*) (buffer), (numberOfBytesToRead), (numberOfBytesRead), (void*) (lpOverlapped))
#define WriteFile(hFile, buffer, numberOfBytesToWrite, numberOfBytesWritten, lpOverlapped) os_native_PipeWin32__WriteFile((hFile), (void*) (buffer), (numberOfBytesToWrite), (numberOfBytesWritten), (void*) (lpOverlapped))
#define CloseHandle(handle) os_native_PipeWin32__CloseHandle((handle))
#define PeekNamedPipe(hPipe, buffer, bufferSize, bytesRead, totalBytesAvail, bytesLeftThisMessage) os_native_PipeWin32__PeekNamedPipe((hPipe), (void*) (buffer), (bufferSize), (bytesRead), (totalBytesAvail), (bytesLeftThisMessage))
#define SecurityAttributes os_native_PipeWin32__SecurityAttributes
#define SecurityAttributes_class() os_native_PipeWin32__SecurityAttributes_class()
#define SecurityAttributesClass os_native_PipeWin32__SecurityAttributesClass
#define SecurityAttributesClass_class() os_native_PipeWin32__SecurityAttributesClass_class()
#define SecurityAttributes___load__() os_native_PipeWin32__SecurityAttributes___load__()
#define PipeWin32 os_native_PipeWin32__PipeWin32
#define PipeWin32_class() os_native_PipeWin32__PipeWin32_class()
#define PipeWin32Class os_native_PipeWin32__PipeWin32Class
#define PipeWin32Class_class() os_native_PipeWin32__PipeWin32Class_class()
#define PipeWin32_new_twos() (void*) os_native_PipeWin32__PipeWin32_new_twos()
#define PipeWin32_init_twos(_this_) os_native_PipeWin32__PipeWin32_init_twos((void*) (_this_))
#define PipeWin32_read(_this_, bytesRequested) (void*) os_native_PipeWin32__PipeWin32_read((void*) (_this_), (bytesRequested))
#define PipeWin32_write(_this_, data, len) os_native_PipeWin32__PipeWin32_write((void*) (_this_), (void*) (data), (len))
#define PipeWin32_close(_this_, mode) os_native_PipeWin32__PipeWin32_close((void*) (_this_), (mode))
#define PipeWin32___defaults__(_this_) os_native_PipeWin32__PipeWin32___defaults__((void*) (_this_))
#define PipeWin32___load__() os_native_PipeWin32__PipeWin32___load__()
#endif

#endif // ___os_native_PipeWin32___
