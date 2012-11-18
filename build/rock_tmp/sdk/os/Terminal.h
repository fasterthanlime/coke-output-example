/* os/Terminal header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___os_Terminal___
#define ___os_Terminal___

#include <sdk/os/Terminal-fwd.h>
#include <sdk/lang/types.h>

struct _os_Terminal__Attr {
    struct _lang_types__Object __super__;
};


#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _os_Terminal__Color {
    struct _lang_types__Object __super__;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _os_Terminal__Color {
    struct _lang_types__Object __super__;
};


#endif
#if !(((defined(__unix__)) || (((defined(__APPLE__)) || (defined(__WIN32__) || defined(__WIN64__))))))
struct _os_Terminal__Color {
    struct _lang_types__Object __super__;
};


#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _os_Terminal__Terminal {
    struct _lang_types__Object __super__;
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _os_Terminal__Terminal {
    struct _lang_types__Object __super__;
};


#endif
#if !(((defined(__unix__)) || (((defined(__APPLE__)) || (defined(__WIN32__) || defined(__WIN64__))))))
struct _os_Terminal__Terminal {
    struct _lang_types__Object __super__;
};


#endif
struct _os_Terminal__AttrClass {
    struct _lang_types__ClassClass __super__;
    lang_Numbers__Int reset;
    lang_Numbers__Int bright;
    lang_Numbers__Int dim;
    lang_Numbers__Int under;
    lang_Numbers__Int blink;
    lang_Numbers__Int reverse;
    lang_Numbers__Int hidden;
    os_Terminal__Attr* (*new)();
    void (*init)(os_Terminal__Attr*);
};


#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _os_Terminal__ColorClass {
    struct _lang_types__ClassClass __super__;
    lang_Numbers__Int black;
    lang_Numbers__Int red;
    lang_Numbers__Int green;
    lang_Numbers__Int yellow;
    lang_Numbers__Int blue;
    lang_Numbers__Int magenta;
    lang_Numbers__Int cyan;
    lang_Numbers__Int grey;
    lang_Numbers__Int white;
    os_Terminal__Color* (*new)();
    void (*init)(os_Terminal__Color*);
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _os_Terminal__ColorClass {
    struct _lang_types__ClassClass __super__;
    lang_Numbers__Int black;
    lang_Numbers__Int grey;
    lang_Numbers__Int blue;
    lang_Numbers__Int red;
    lang_Numbers__Int yellow;
    lang_Numbers__Int white;
    lang_Numbers__Int green;
    lang_Numbers__Int magenta;
    lang_Numbers__Int cyan;
    os_Terminal__Color* (*new)();
    void (*init)(os_Terminal__Color*);
};


#endif
#if !(((defined(__unix__)) || (((defined(__APPLE__)) || (defined(__WIN32__) || defined(__WIN64__))))))
struct _os_Terminal__ColorClass {
    struct _lang_types__ClassClass __super__;
    lang_Numbers__Int black;
    lang_Numbers__Int red;
    lang_Numbers__Int green;
    lang_Numbers__Int yellow;
    lang_Numbers__Int blue;
    lang_Numbers__Int magenta;
    lang_Numbers__Int cyan;
    lang_Numbers__Int grey;
    lang_Numbers__Int white;
    os_Terminal__Color* (*new)();
    void (*init)(os_Terminal__Color*);
};


#endif
#if ((defined(__unix__)) || (defined(__APPLE__)))
struct _os_Terminal__TerminalClass {
    struct _lang_types__ClassClass __super__;
    os_Terminal__Terminal* (*new)();
    void (*init)(os_Terminal__Terminal*);
    void (*output)(lang_String__String*, ...);
    void (*setColor)(lang_Numbers__Int, lang_Numbers__Int);
    void (*setFgColor)(lang_Numbers__Int);
    void (*setBgColor)(lang_Numbers__Int);
    void (*setAttr)(lang_Numbers__Int);
    void (*reset)();
};


#endif
#if defined(__WIN32__) || defined(__WIN64__)
struct _os_Terminal__TerminalClass {
    struct _lang_types__ClassClass __super__;
    lang_Numbers__Int bg;
    lang_Numbers__Int fg;
    os_Terminal__Terminal* (*new)();
    void (*init)(os_Terminal__Terminal*);
    void (*output)(lang_String__String*, ...);
    void (*setColor)(lang_Numbers__Int, lang_Numbers__Int);
    void (*setFgColor)(lang_Numbers__Int);
    void (*setBgColor)(lang_Numbers__Int);
    void (*setAttr)(lang_Numbers__Int);
    void (*reset)();
};


#endif
#if !(((defined(__unix__)) || (((defined(__APPLE__)) || (defined(__WIN32__) || defined(__WIN64__))))))
struct _os_Terminal__TerminalClass {
    struct _lang_types__ClassClass __super__;
    os_Terminal__Terminal* (*new)();
    void (*init)(os_Terminal__Terminal*);
    void (*output)(lang_String__String*, ...);
    void (*setColor)(lang_Numbers__Int, lang_Numbers__Int);
    void (*setFgColor)(lang_Numbers__Int);
    void (*setBgColor)(lang_Numbers__Int);
    void (*setAttr)(lang_Numbers__Int);
    void (*reset)();
};


#endif
#ifdef OOC_FROM_C
#define GetStdHandle(mode) os_Terminal__GetStdHandle((mode))
#define SetConsoleTextAttribute(console, attr) os_Terminal__SetConsoleTextAttribute((console), (attr))
#define Attr os_Terminal__Attr
#define Attr_class() os_Terminal__Attr_class()
#define AttrClass os_Terminal__AttrClass
#define AttrClass_class() os_Terminal__AttrClass_class()
#define Attr_new() (void*) os_Terminal__Attr_new()
#define Attr_init(_this_) os_Terminal__Attr_init((void*) (_this_))
#define Attr___defaults__(_this_) os_Terminal__Attr___defaults__((void*) (_this_))
#define Attr___load__() os_Terminal__Attr___load__()
#define Color os_Terminal__Color
#define Color_class() os_Terminal__Color_class()
#define Color os_Terminal__Color
#define Color_class() os_Terminal__Color_class()
#define Color os_Terminal__Color
#define Color_class() os_Terminal__Color_class()
#define ColorClass os_Terminal__ColorClass
#define ColorClass_class() os_Terminal__ColorClass_class()
#define Color_new() (void*) os_Terminal__Color_new()
#define Color_init(_this_) os_Terminal__Color_init((void*) (_this_))
#define Color___defaults__(_this_) os_Terminal__Color___defaults__((void*) (_this_))
#define Color___load__() os_Terminal__Color___load__()
#define ColorClass os_Terminal__ColorClass
#define ColorClass_class() os_Terminal__ColorClass_class()
#define Color_new() (void*) os_Terminal__Color_new()
#define Color_init(_this_) os_Terminal__Color_init((void*) (_this_))
#define Color___defaults__(_this_) os_Terminal__Color___defaults__((void*) (_this_))
#define Color___load__() os_Terminal__Color___load__()
#define ColorClass os_Terminal__ColorClass
#define ColorClass_class() os_Terminal__ColorClass_class()
#define Color_new() (void*) os_Terminal__Color_new()
#define Color_init(_this_) os_Terminal__Color_init((void*) (_this_))
#define Color___defaults__(_this_) os_Terminal__Color___defaults__((void*) (_this_))
#define Color___load__() os_Terminal__Color___load__()
#define Terminal os_Terminal__Terminal
#define Terminal_class() os_Terminal__Terminal_class()
#define Terminal os_Terminal__Terminal
#define Terminal_class() os_Terminal__Terminal_class()
#define Terminal os_Terminal__Terminal
#define Terminal_class() os_Terminal__Terminal_class()
#define TerminalClass os_Terminal__TerminalClass
#define TerminalClass_class() os_Terminal__TerminalClass_class()
#define Terminal_new() (void*) os_Terminal__Terminal_new()
#define Terminal_init(_this_) os_Terminal__Terminal_init((void*) (_this_))
#define Terminal_output(fmt, ...) os_Terminal__Terminal_output((void*) (fmt), __VA_ARGS__)
#define Terminal_setColor(f, b) os_Terminal__Terminal_setColor((f), (b))
#define Terminal_setFgColor(c) os_Terminal__Terminal_setFgColor((c))
#define Terminal_setBgColor(c) os_Terminal__Terminal_setBgColor((c))
#define Terminal_setAttr(att) os_Terminal__Terminal_setAttr((att))
#define Terminal_reset() os_Terminal__Terminal_reset()
#define Terminal___defaults__(_this_) os_Terminal__Terminal___defaults__((void*) (_this_))
#define Terminal___load__() os_Terminal__Terminal___load__()
#define TerminalClass os_Terminal__TerminalClass
#define TerminalClass_class() os_Terminal__TerminalClass_class()
#define Terminal_new() (void*) os_Terminal__Terminal_new()
#define Terminal_init(_this_) os_Terminal__Terminal_init((void*) (_this_))
#define Terminal_output(fmt, ...) os_Terminal__Terminal_output((void*) (fmt), __VA_ARGS__)
#define Terminal_setColor(f, b) os_Terminal__Terminal_setColor((f), (b))
#define Terminal_setFgColor(c) os_Terminal__Terminal_setFgColor((c))
#define Terminal_setBgColor(c) os_Terminal__Terminal_setBgColor((c))
#define Terminal_setAttr(att) os_Terminal__Terminal_setAttr((att))
#define Terminal_reset() os_Terminal__Terminal_reset()
#define Terminal___defaults__(_this_) os_Terminal__Terminal___defaults__((void*) (_this_))
#define Terminal___load__() os_Terminal__Terminal___load__()
#define TerminalClass os_Terminal__TerminalClass
#define TerminalClass_class() os_Terminal__TerminalClass_class()
#define Terminal_new() (void*) os_Terminal__Terminal_new()
#define Terminal_init(_this_) os_Terminal__Terminal_init((void*) (_this_))
#define Terminal_output(fmt, ...) os_Terminal__Terminal_output((void*) (fmt), __VA_ARGS__)
#define Terminal_setColor(f, b) os_Terminal__Terminal_setColor((f), (b))
#define Terminal_setFgColor(c) os_Terminal__Terminal_setFgColor((c))
#define Terminal_setBgColor(c) os_Terminal__Terminal_setBgColor((c))
#define Terminal_setAttr(att) os_Terminal__Terminal_setAttr((att))
#define Terminal_reset() os_Terminal__Terminal_reset()
#define Terminal___defaults__(_this_) os_Terminal__Terminal___defaults__((void*) (_this_))
#define Terminal___load__() os_Terminal__Terminal___load__()
#endif

#endif // ___os_Terminal___
