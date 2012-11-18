/* net/berkeley source file, generated with rock, the ooc compiler written in ooc */

#include <sdk/net/berkeley.h>
#include <sdk/lang/Exception.h>
#include <sdk/lang/BufferIterator.h>
#include <sdk/lang/System.h>
#include <sdk/lang/Character.h>
#include <sdk/lang/VarArgs.h>
#include <sdk/lang/Iterators.h>
#include <sdk/lang/Memory.h>
#include <sdk/lang/String.h>
#include <sdk/lang/Buffer.h>
#include <sdk/lang/Numbers.h>
#include <sdk/lang/Abstractions.h>
#include <sdk/lang/Format.h>
#include <sdk/lang/IO.h>

void net_berkeley__SockAddr___load__() {
    lang_types__Class___load__();
}

net_berkeley__SockAddrClass *net_berkeley__SockAddr_class(){
    static _Bool __done__ = false;
    static net_berkeley__SockAddrClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(net_berkeley__SockAddr),
                    .size = sizeof(net_berkeley__SockAddr)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) net_berkeley__SockAddr___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("SockAddr", 8);
    }
    return &class;
}
void net_berkeley__SockAddrIn___load__() {
    lang_types__Class___load__();
}

net_berkeley__SockAddrInClass *net_berkeley__SockAddrIn_class(){
    static _Bool __done__ = false;
    static net_berkeley__SockAddrInClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(net_berkeley__SockAddrIn),
                    .size = sizeof(net_berkeley__SockAddrIn)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) net_berkeley__SockAddrIn___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("SockAddrIn", 10);
    }
    return &class;
}
void net_berkeley__InAddr___load__() {
    lang_types__Class___load__();
}

net_berkeley__InAddrClass *net_berkeley__InAddr_class(){
    static _Bool __done__ = false;
    static net_berkeley__InAddrClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(net_berkeley__InAddr),
                    .size = sizeof(net_berkeley__InAddr)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) net_berkeley__InAddr___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("InAddr", 6);
    }
    return &class;
}
void net_berkeley__SockAddrIn6___load__() {
    lang_types__Class___load__();
}

net_berkeley__SockAddrIn6Class *net_berkeley__SockAddrIn6_class(){
    static _Bool __done__ = false;
    static net_berkeley__SockAddrIn6Class class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(net_berkeley__SockAddrIn6),
                    .size = sizeof(net_berkeley__SockAddrIn6)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) net_berkeley__SockAddrIn6___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("SockAddrIn6", 11);
    }
    return &class;
}
void net_berkeley__In6Addr___load__() {
    lang_types__Class___load__();
}

net_berkeley__In6AddrClass *net_berkeley__In6Addr_class(){
    static _Bool __done__ = false;
    static net_berkeley__In6AddrClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(net_berkeley__In6Addr),
                    .size = sizeof(net_berkeley__In6Addr)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) net_berkeley__In6Addr___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("In6Addr", 7);
    }
    return &class;
}
void net_berkeley__AddrInfo___load__() {
    lang_types__Class___load__();
}

net_berkeley__AddrInfoClass *net_berkeley__AddrInfo_class(){
    static _Bool __done__ = false;
    static net_berkeley__AddrInfoClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(net_berkeley__AddrInfo),
                    .size = sizeof(net_berkeley__AddrInfo)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) net_berkeley__AddrInfo___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("AddrInfo", 8);
    }
    return &class;
}
void net_berkeley__HostEntry___load__() {
    lang_types__Class___load__();
}

net_berkeley__HostEntryClass *net_berkeley__HostEntry_class(){
    static _Bool __done__ = false;
    static net_berkeley__HostEntryClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(net_berkeley__HostEntry),
                    .size = sizeof(net_berkeley__HostEntry)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) net_berkeley__HostEntry___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("HostEntry", 9);
    }
    return &class;
}
void net_berkeley__PollFd___load__() {
    lang_types__Class___load__();
}

net_berkeley__PollFdClass *net_berkeley__PollFd_class(){
    static _Bool __done__ = false;
    static net_berkeley__PollFdClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(net_berkeley__PollFd),
                    .size = sizeof(net_berkeley__PollFd)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) net_berkeley__PollFd___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("PollFd", 6);
    }
    return &class;
}

void net_berkeley__FdSet_set(net_berkeley__FdSet* this, lang_Numbers__Int fd) {
    net_berkeley__FdSet__set(fd, this);
}

lang_types__Bool net_berkeley__FdSet_set__quest(net_berkeley__FdSet* this, lang_Numbers__Int fd) {
    return net_berkeley__FdSet__set__quest(fd, this);
}

void net_berkeley__FdSet_clr(net_berkeley__FdSet* this, lang_Numbers__Int fd) {
    net_berkeley__FdSet__clr(fd, this);
}

void net_berkeley__FdSet_zero(net_berkeley__FdSet* this) {
    net_berkeley__FdSet__zero(this);
}
void net_berkeley__FdSet___load__() {
    lang_types__Class___load__();
}

net_berkeley__FdSetClass *net_berkeley__FdSet_class(){
    static _Bool __done__ = false;
    static net_berkeley__FdSetClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(net_berkeley__FdSet),
                    .size = sizeof(net_berkeley__FdSet)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) net_berkeley__FdSet___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("FdSet", 5);
    }
    return &class;
}
void net_berkeley__TimeVal___load__() {
    lang_types__Class___load__();
}

net_berkeley__TimeValClass *net_berkeley__TimeVal_class(){
    static _Bool __done__ = false;
    static net_berkeley__TimeValClass class = 
    {
        {
            {
                {
                    .instanceSize = sizeof(net_berkeley__TimeVal),
                    .size = sizeof(net_berkeley__TimeVal)
                },
                .__defaults__ = (void*) lang_types__Class___defaults___impl,
                .__destroy__ = (void*) lang_types__Object___destroy___impl,
                .__load__ = (void*) net_berkeley__TimeVal___load__,
            },
        },
    };
    lang_types__Class *classPtr = (lang_types__Class *) &class;
    if(!__done__){
        classPtr->super = (lang_types__Class*) lang_types__Object_class();
        __done__ = true;
        classPtr->name = (void*) lang_String__makeStringLiteral("TimeVal", 7);
    }
    return &class;
}
void net_berkeley_load() {
    static bool __done__ = false;
    if (!__done__){
        __done__ = true;
        lang_Exception_load();
        lang_BufferIterator_load();
        lang_System_load();
        lang_Character_load();
        lang_VarArgs_load();
        lang_types_load();
        lang_Iterators_load();
        lang_Memory_load();
        lang_String_load();
        lang_Buffer_load();
        lang_Numbers_load();
        lang_Abstractions_load();
        lang_Format_load();
        lang_IO_load();
        net_berkeley__SockAddr___load__();
        net_berkeley__SockAddrIn___load__();
        net_berkeley__InAddr___load__();
        net_berkeley__SockAddrIn6___load__();
        net_berkeley__In6Addr___load__();
        net_berkeley__AddrInfo___load__();
        net_berkeley__HostEntry___load__();
        net_berkeley__PollFd___load__();
        net_berkeley__FdSet___load__();
        net_berkeley__TimeVal___load__();
    }
}

