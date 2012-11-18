/* net/berkeley header file, generated with rock, the ooc compiler written in ooc */

#ifndef ___net_berkeley___
#define ___net_berkeley___

#include <sdk/net/berkeley-fwd.h>
#include <sdk/lang/types.h>

struct _net_berkeley__SockAddrClass {
    struct _lang_types__ClassClass __super__;
};


struct _net_berkeley__SockAddrInClass {
    struct _lang_types__ClassClass __super__;
};


struct _net_berkeley__InAddrClass {
    struct _lang_types__ClassClass __super__;
};


struct _net_berkeley__SockAddrIn6Class {
    struct _lang_types__ClassClass __super__;
};


struct _net_berkeley__In6AddrClass {
    struct _lang_types__ClassClass __super__;
};


struct _net_berkeley__AddrInfoClass {
    struct _lang_types__ClassClass __super__;
};


struct _net_berkeley__HostEntryClass {
    struct _lang_types__ClassClass __super__;
};


struct _net_berkeley__PollFdClass {
    struct _lang_types__ClassClass __super__;
};


struct _net_berkeley__FdSetClass {
    struct _lang_types__ClassClass __super__;
    void (*set)(net_berkeley__FdSet*, lang_Numbers__Int);
    lang_types__Bool (*set__quest)(net_berkeley__FdSet*, lang_Numbers__Int);
    void (*clr)(net_berkeley__FdSet*, lang_Numbers__Int);
    void (*zero)(net_berkeley__FdSet*);
};


struct _net_berkeley__TimeValClass {
    struct _lang_types__ClassClass __super__;
};


#ifdef OOC_FROM_C
#define socket(family, type, protocol) net_berkeley__socket((family), (type), (protocol))
#define accept(descriptor, address, addressLength) net_berkeley__accept((descriptor), (address), (addressLength))
#define bind(descriptor, myAddress, addressLength) net_berkeley__bind((descriptor), (myAddress), (addressLength))
#define connect(descriptor, serverAddress, addressLength) net_berkeley__connect((descriptor), (serverAddress), (addressLength))
#define close(descriptor) net_berkeley__close((descriptor))
#define closesocket(descriptor) net_berkeley__closesocket((descriptor))
#define shutdown(descriptor, how) net_berkeley__shutdown((descriptor), (how))
#define listen(descriptor, numberOfBacklogConnections) net_berkeley__listen((descriptor), (numberOfBacklogConnections))
#define poll(ufds, nfds, timeout) net_berkeley__poll((ufds), (nfds), (timeout))
#define recv(descriptor, buffer, maxBufferLength, flags) net_berkeley__recv((descriptor), (void*) (buffer), (maxBufferLength), (flags))
#define recvFrom(descriptor, buffer, maxBufferLength, flags, senderAddress, senderAddressLength) net_berkeley__recvFrom((descriptor), (void*) (buffer), (maxBufferLength), (flags), (senderAddress), (senderAddressLength))
#define send(descriptor, message, messageLength, flags) net_berkeley__send((descriptor), (void*) (message), (messageLength), (flags))
#define sendTo(descriptor, message, messageLength, flags, recieverAddress, receiverAddressLength) net_berkeley__sendTo((descriptor), (void*) (message), (messageLength), (flags), (recieverAddress), (receiverAddressLength))
#define select(numfds, readfds, writefds, exceptfds, timeout) net_berkeley__select((numfds), (readfds), (writefds), (exceptfds), (timeout))
#define getsockopt(s, level, optname, optval, optlen) net_berkeley__getsockopt((s), (level), (optname), (void*) (optval), (optlen))
#define setsockopt(s, level, optname, optval, optlen) net_berkeley__setsockopt((s), (level), (optname), (void*) (optval), (optlen))
#define getaddrinfo(domain_name_or_ip, service_name_or_port, hints, service_information) net_berkeley__getaddrinfo((domain_name_or_ip), (service_name_or_port), (hints), (service_information))
#define getnameinfo(serviceInformation, serviceInformationLength, hostName, hostNameLength, serviceName, serviceNameLength, flags) net_berkeley__getnameinfo((serviceInformation), (serviceInformationLength), (hostName), (hostNameLength), (serviceName), (serviceNameLength), (flags))
#define freeaddrinfo(serviceInformation) net_berkeley__freeaddrinfo((serviceInformation))
#define gai_strerror(errorCode) net_berkeley__gai_strerror((errorCode))
#define gethostname(localSystemName, localSystemNameLength) net_berkeley__gethostname((localSystemName), (localSystemNameLength))
#define gethostbyname(domainName) net_berkeley__gethostbyname((domainName))
#define gethostbyaddr(pointerToAddress, addressLength, type) net_berkeley__gethostbyaddr((pointerToAddress), (addressLength), (type))
#define getpeername(descriptor, address, len) net_berkeley__getpeername((descriptor), (address), (len))
#define htonl(hostlong) net_berkeley__htonl((hostlong))
#define htons(hostshort) net_berkeley__htons((hostshort))
#define ntohl(netlong) net_berkeley__ntohl((netlong))
#define ntohs(netshort) net_berkeley__ntohs((netshort))
#define fcntl(descriptor, command, argument) net_berkeley__fcntl((descriptor), (command), (argument))
#define inet_ntoa(address) net_berkeley__inet_ntoa((address))
#define inet_aton(ipAddress, inp) net_berkeley__inet_aton((ipAddress), (inp))
#define inet_addr(ipAddress) net_berkeley__inet_addr((ipAddress))
#define inet_ntop(addressFamily, address, destination, destinationSize) net_berkeley__inet_ntop((addressFamily), (void*) (address), (destination), (destinationSize))
#define inet_pton(addressFamily, address, destination) net_berkeley__inet_pton((addressFamily), (address), (void*) (destination))
#define ioctl(d, request, arg) net_berkeley__ioctl((d), (request), (void*) (arg))
#define SockAddr net_berkeley__SockAddr
#define SockAddr_class() net_berkeley__SockAddr_class()
#define SockAddrClass net_berkeley__SockAddrClass
#define SockAddrClass_class() net_berkeley__SockAddrClass_class()
#define SockAddr___load__() net_berkeley__SockAddr___load__()
#define SockAddrIn net_berkeley__SockAddrIn
#define SockAddrIn_class() net_berkeley__SockAddrIn_class()
#define SockAddrInClass net_berkeley__SockAddrInClass
#define SockAddrInClass_class() net_berkeley__SockAddrInClass_class()
#define SockAddrIn___load__() net_berkeley__SockAddrIn___load__()
#define InAddr net_berkeley__InAddr
#define InAddr_class() net_berkeley__InAddr_class()
#define InAddrClass net_berkeley__InAddrClass
#define InAddrClass_class() net_berkeley__InAddrClass_class()
#define InAddr___load__() net_berkeley__InAddr___load__()
#define SockAddrIn6 net_berkeley__SockAddrIn6
#define SockAddrIn6_class() net_berkeley__SockAddrIn6_class()
#define SockAddrIn6Class net_berkeley__SockAddrIn6Class
#define SockAddrIn6Class_class() net_berkeley__SockAddrIn6Class_class()
#define SockAddrIn6___load__() net_berkeley__SockAddrIn6___load__()
#define In6Addr net_berkeley__In6Addr
#define In6Addr_class() net_berkeley__In6Addr_class()
#define In6AddrClass net_berkeley__In6AddrClass
#define In6AddrClass_class() net_berkeley__In6AddrClass_class()
#define In6Addr___load__() net_berkeley__In6Addr___load__()
#define AddrInfo net_berkeley__AddrInfo
#define AddrInfo_class() net_berkeley__AddrInfo_class()
#define AddrInfoClass net_berkeley__AddrInfoClass
#define AddrInfoClass_class() net_berkeley__AddrInfoClass_class()
#define AddrInfo___load__() net_berkeley__AddrInfo___load__()
#define HostEntry net_berkeley__HostEntry
#define HostEntry_class() net_berkeley__HostEntry_class()
#define HostEntryClass net_berkeley__HostEntryClass
#define HostEntryClass_class() net_berkeley__HostEntryClass_class()
#define HostEntry___load__() net_berkeley__HostEntry___load__()
#define PollFd net_berkeley__PollFd
#define PollFd_class() net_berkeley__PollFd_class()
#define PollFdClass net_berkeley__PollFdClass
#define PollFdClass_class() net_berkeley__PollFdClass_class()
#define PollFd___load__() net_berkeley__PollFd___load__()
#define FdSet net_berkeley__FdSet
#define FdSet_class() net_berkeley__FdSet_class()
#define FdSetClass net_berkeley__FdSetClass
#define FdSetClass_class() net_berkeley__FdSetClass_class()
#define FdSet__set(fd, fdset) net_berkeley__FdSet__set((fd), (fdset))
#define FdSet__set__quest(fd, fdset) net_berkeley__FdSet__set__quest((fd), (fdset))
#define FdSet__clr(fd, fdset) net_berkeley__FdSet__clr((fd), (fdset))
#define FdSet__zero(fdset) net_berkeley__FdSet__zero((fdset))
#define FdSet_set(_this_, fd) net_berkeley__FdSet_set((void*) (_this_), (fd))
#define FdSet_set__quest(_this_, fd) net_berkeley__FdSet_set__quest((void*) (_this_), (fd))
#define FdSet_clr(_this_, fd) net_berkeley__FdSet_clr((void*) (_this_), (fd))
#define FdSet_zero(_this_) net_berkeley__FdSet_zero((void*) (_this_))
#define FdSet___load__() net_berkeley__FdSet___load__()
#define TimeVal net_berkeley__TimeVal
#define TimeVal_class() net_berkeley__TimeVal_class()
#define TimeValClass net_berkeley__TimeValClass
#define TimeValClass_class() net_berkeley__TimeValClass_class()
#define TimeVal___load__() net_berkeley__TimeVal___load__()
#endif

#endif // ___net_berkeley___
