/* os/Terminal header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___os_Terminal_fwd___
#define ___os_Terminal_fwd___

struct _os_Terminal__Attr;
typedef struct _os_Terminal__Attr os_Terminal__Attr;
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _os_Terminal__Color;
typedef struct _os_Terminal__Color os_Terminal__Color;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _os_Terminal__Color;
typedef struct _os_Terminal__Color os_Terminal__Color;
#endif
#if !(((defined(__unix__)) || (((defined(__APPLE__)) || (defined(__WIN32__) || defined(__WIN64__))))))
struct _os_Terminal__Color;
typedef struct _os_Terminal__Color os_Terminal__Color;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _os_Terminal__Terminal;
typedef struct _os_Terminal__Terminal os_Terminal__Terminal;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _os_Terminal__Terminal;
typedef struct _os_Terminal__Terminal os_Terminal__Terminal;
#endif
#if !(((defined(__unix__)) || (((defined(__APPLE__)) || (defined(__WIN32__) || defined(__WIN64__))))))
struct _os_Terminal__Terminal;
typedef struct _os_Terminal__Terminal os_Terminal__Terminal;
#endif
struct _os_Terminal__AttrClass;
typedef struct _os_Terminal__AttrClass os_Terminal__AttrClass;
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _os_Terminal__ColorClass;
typedef struct _os_Terminal__ColorClass os_Terminal__ColorClass;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _os_Terminal__ColorClass;
typedef struct _os_Terminal__ColorClass os_Terminal__ColorClass;
#endif
#if !(((defined(__unix__)) || (((defined(__APPLE__)) || (defined(__WIN32__) || defined(__WIN64__))))))
struct _os_Terminal__ColorClass;
typedef struct _os_Terminal__ColorClass os_Terminal__ColorClass;
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _os_Terminal__TerminalClass;
typedef struct _os_Terminal__TerminalClass os_Terminal__TerminalClass;
#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _os_Terminal__TerminalClass;
typedef struct _os_Terminal__TerminalClass os_Terminal__TerminalClass;
#endif
#if !(((defined(__unix__)) || (((defined(__APPLE__)) || (defined(__WIN32__) || defined(__WIN64__))))))
struct _os_Terminal__TerminalClass;
typedef struct _os_Terminal__TerminalClass os_Terminal__TerminalClass;
#endif

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
#include <sdk/os/FileDescriptor-fwd.h>
#include <sdk/os/unistd-fwd.h>
#include <sdk/native/win32/types-fwd.h>
os_Terminal__AttrClass *os_Terminal__Attr_class();
os_Terminal__Attr* os_Terminal__Attr_new();
void os_Terminal__Attr_init(os_Terminal__Attr* this);
void os_Terminal__Attr___defaults__(os_Terminal__Attr* this);
void os_Terminal__Attr___defaults___impl(os_Terminal__Attr* this);
void os_Terminal__Attr___load__();
#if ((defined(__unix__)) || (defined(__APPLE__)))
os_Terminal__ColorClass *os_Terminal__Color_class();
os_Terminal__Color* os_Terminal__Color_new();
void os_Terminal__Color_init(os_Terminal__Color* this);
void os_Terminal__Color___defaults__(os_Terminal__Color* this);
void os_Terminal__Color___defaults___impl(os_Terminal__Color* this);
void os_Terminal__Color___load__();
#endif
#if defined(__WIN32__) || defined(__WIN64__)
os_Terminal__ColorClass *os_Terminal__Color_class();
os_Terminal__Color* os_Terminal__Color_new();
void os_Terminal__Color_init(os_Terminal__Color* this);
void os_Terminal__Color___defaults__(os_Terminal__Color* this);
void os_Terminal__Color___defaults___impl(os_Terminal__Color* this);
void os_Terminal__Color___load__();
#endif
#if !(((defined(__unix__)) || (((defined(__APPLE__)) || (defined(__WIN32__) || defined(__WIN64__))))))
os_Terminal__ColorClass *os_Terminal__Color_class();
os_Terminal__Color* os_Terminal__Color_new();
void os_Terminal__Color_init(os_Terminal__Color* this);
void os_Terminal__Color___defaults__(os_Terminal__Color* this);
void os_Terminal__Color___defaults___impl(os_Terminal__Color* this);
void os_Terminal__Color___load__();
#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
os_Terminal__TerminalClass *os_Terminal__Terminal_class();
os_Terminal__Terminal* os_Terminal__Terminal_new();
void os_Terminal__Terminal_init(os_Terminal__Terminal* this);
void os_Terminal__Terminal_output(lang_String__String* fmt, ...);
void os_Terminal__Terminal_setColor(lang_Numbers__Int f, lang_Numbers__Int b);
void os_Terminal__Terminal_setFgColor(lang_Numbers__Int c);
void os_Terminal__Terminal_setBgColor(lang_Numbers__Int c);
void os_Terminal__Terminal_setAttr(lang_Numbers__Int att);
void os_Terminal__Terminal_reset();
void os_Terminal__Terminal___defaults__(os_Terminal__Terminal* this);
void os_Terminal__Terminal___defaults___impl(os_Terminal__Terminal* this);
void os_Terminal__Terminal___load__();
#endif
#if defined(__WIN32__) || defined(__WIN64__)
os_Terminal__TerminalClass *os_Terminal__Terminal_class();
os_Terminal__Terminal* os_Terminal__Terminal_new();
void os_Terminal__Terminal_init(os_Terminal__Terminal* this);
void os_Terminal__Terminal_output(lang_String__String* fmt, ...);
void os_Terminal__Terminal_setColor(lang_Numbers__Int f, lang_Numbers__Int b);
void os_Terminal__Terminal_setFgColor(lang_Numbers__Int c);
void os_Terminal__Terminal_setBgColor(lang_Numbers__Int c);
void os_Terminal__Terminal_setAttr(lang_Numbers__Int att);
void os_Terminal__Terminal_reset();
void os_Terminal__Terminal___defaults__(os_Terminal__Terminal* this);
void os_Terminal__Terminal___defaults___impl(os_Terminal__Terminal* this);
void os_Terminal__Terminal___load__();
#endif
#if !(((defined(__unix__)) || (((defined(__APPLE__)) || (defined(__WIN32__) || defined(__WIN64__))))))
os_Terminal__TerminalClass *os_Terminal__Terminal_class();
os_Terminal__Terminal* os_Terminal__Terminal_new();
void os_Terminal__Terminal_init(os_Terminal__Terminal* this);
void os_Terminal__Terminal_output(lang_String__String* fmt, ...);
void os_Terminal__Terminal_setColor(lang_Numbers__Int f, lang_Numbers__Int b);
void os_Terminal__Terminal_setFgColor(lang_Numbers__Int c);
void os_Terminal__Terminal_setBgColor(lang_Numbers__Int c);
void os_Terminal__Terminal_setAttr(lang_Numbers__Int att);
void os_Terminal__Terminal_reset();
void os_Terminal__Terminal___defaults__(os_Terminal__Terminal* this);
void os_Terminal__Terminal___defaults___impl(os_Terminal__Terminal* this);
void os_Terminal__Terminal___load__();
#endif
extern lang_String__String* os_Terminal__COLOR_FORMAT_STRING;
void os_Terminal_load();
#if defined(__WIN32__) || defined(__WIN64__)
#define os_Terminal__GetStdHandle GetStdHandle

#endif
#if defined(__WIN32__) || defined(__WIN64__)
#define os_Terminal__SetConsoleTextAttribute SetConsoleTextAttribute

#endif

#endif // ___os_Terminal_fwd___
