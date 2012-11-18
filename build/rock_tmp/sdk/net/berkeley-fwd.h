/* net/berkeley header-forward file, generated with rock, the ooc compiler written in ooc */

#ifndef ___net_berkeley_fwd___
#define ___net_berkeley_fwd___

#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <sys/poll.h>
#ifndef __USE_BSD
#define __USE_BSD __USE_BSD
#define __USE_BSD___defined
#endif
#include <unistd.h>
#ifdef __USE_BSD___defined
#undef __USE_BSD
#undef __USE_BSD___defined
#endif
#include <sys/select.h>
#include <arpa/inet.h>
#ifndef __USE_POSIX
#define __USE_POSIX __USE_POSIX
#define __USE_POSIX___defined
#endif
#include <netdb.h>
#ifdef __USE_POSIX___defined
#undef __USE_POSIX
#undef __USE_POSIX___defined
#endif
#include <sys/fcntl.h>

typedef struct sockaddr net_berkeley__SockAddr;
typedef struct sockaddr_in net_berkeley__SockAddrIn;
typedef struct in_addr net_berkeley__InAddr;
typedef struct sockaddr_in6 net_berkeley__SockAddrIn6;
typedef struct in6_addr net_berkeley__In6Addr;
typedef struct addrinfo net_berkeley__AddrInfo;
typedef struct hostent net_berkeley__HostEntry;
typedef struct pollfd net_berkeley__PollFd;
typedef fd_set net_berkeley__FdSet;
typedef struct timeval net_berkeley__TimeVal;
struct _net_berkeley__SockAddrClass;
typedef struct _net_berkeley__SockAddrClass net_berkeley__SockAddrClass;
struct _net_berkeley__SockAddrInClass;
typedef struct _net_berkeley__SockAddrInClass net_berkeley__SockAddrInClass;
struct _net_berkeley__InAddrClass;
typedef struct _net_berkeley__InAddrClass net_berkeley__InAddrClass;
struct _net_berkeley__SockAddrIn6Class;
typedef struct _net_berkeley__SockAddrIn6Class net_berkeley__SockAddrIn6Class;
struct _net_berkeley__In6AddrClass;
typedef struct _net_berkeley__In6AddrClass net_berkeley__In6AddrClass;
struct _net_berkeley__AddrInfoClass;
typedef struct _net_berkeley__AddrInfoClass net_berkeley__AddrInfoClass;
struct _net_berkeley__HostEntryClass;
typedef struct _net_berkeley__HostEntryClass net_berkeley__HostEntryClass;
struct _net_berkeley__PollFdClass;
typedef struct _net_berkeley__PollFdClass net_berkeley__PollFdClass;
struct _net_berkeley__FdSetClass;
typedef struct _net_berkeley__FdSetClass net_berkeley__FdSetClass;
struct _net_berkeley__TimeValClass;
typedef struct _net_berkeley__TimeValClass net_berkeley__TimeValClass;

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
net_berkeley__SockAddrClass *net_berkeley__SockAddr_class();
void net_berkeley__SockAddr___load__();
net_berkeley__SockAddrInClass *net_berkeley__SockAddrIn_class();
void net_berkeley__SockAddrIn___load__();
net_berkeley__InAddrClass *net_berkeley__InAddr_class();
void net_berkeley__InAddr___load__();
net_berkeley__SockAddrIn6Class *net_berkeley__SockAddrIn6_class();
void net_berkeley__SockAddrIn6___load__();
net_berkeley__In6AddrClass *net_berkeley__In6Addr_class();
void net_berkeley__In6Addr___load__();
net_berkeley__AddrInfoClass *net_berkeley__AddrInfo_class();
void net_berkeley__AddrInfo___load__();
net_berkeley__HostEntryClass *net_berkeley__HostEntry_class();
void net_berkeley__HostEntry___load__();
net_berkeley__PollFdClass *net_berkeley__PollFd_class();
void net_berkeley__PollFd___load__();
net_berkeley__FdSetClass *net_berkeley__FdSet_class();
#define net_berkeley__FdSet__set FD_SET

#define net_berkeley__FdSet__set__quest FD_ISSET

#define net_berkeley__FdSet__clr FD_CLR

#define net_berkeley__FdSet__zero FD_ZERO

void net_berkeley__FdSet_set(net_berkeley__FdSet* this, lang_Numbers__Int fd);
lang_types__Bool net_berkeley__FdSet_set__quest(net_berkeley__FdSet* this, lang_Numbers__Int fd);
void net_berkeley__FdSet_clr(net_berkeley__FdSet* this, lang_Numbers__Int fd);
void net_berkeley__FdSet_zero(net_berkeley__FdSet* this);
void net_berkeley__FdSet___load__();
#define net_berkeley__FdSet__set FD_SET

#define net_berkeley__FdSet__set__quest FD_ISSET

#define net_berkeley__FdSet__clr FD_CLR

#define net_berkeley__FdSet__zero FD_ZERO

net_berkeley__TimeValClass *net_berkeley__TimeVal_class();
void net_berkeley__TimeVal___load__();
void net_berkeley_load();
#define net_berkeley__socket socket

#define net_berkeley__accept accept

#define net_berkeley__bind bind

#define net_berkeley__connect connect

#define net_berkeley__close close

#define net_berkeley__closesocket closesocket

#define net_berkeley__shutdown shutdown

#define net_berkeley__listen listen

#define net_berkeley__poll poll

#define net_berkeley__recv recv

#define net_berkeley__recvFrom recvfrom

#define net_berkeley__send send

#define net_berkeley__sendTo sendto

#define net_berkeley__select select

#define net_berkeley__getsockopt getsockopt

#define net_berkeley__setsockopt setsockopt

#define net_berkeley__getaddrinfo getaddrinfo

#define net_berkeley__getnameinfo getnameinfo

#define net_berkeley__freeaddrinfo freeaddrinfo

#define net_berkeley__gai_strerror gai_strerror

#define net_berkeley__gethostname gethostname

#define net_berkeley__gethostbyname gethostbyname

#define net_berkeley__gethostbyaddr gethostbyaddr

#define net_berkeley__getpeername getpeername

#define net_berkeley__htonl htonl

#define net_berkeley__htons htons

#define net_berkeley__ntohl ntohl

#define net_berkeley__ntohs ntohs

#define net_berkeley__fcntl fcntl

#define net_berkeley__inet_ntoa inet_ntoa

#define net_berkeley__inet_aton inet_aton

#define net_berkeley__inet_addr inet_addr

#define net_berkeley__inet_ntop inet_ntop

#define net_berkeley__inet_pton inet_pton

#if ((defined(__unix__)) || (defined(__APPLE__)))
#define net_berkeley__ioctl ioctl

#endif

#endif // ___net_berkeley_fwd___
