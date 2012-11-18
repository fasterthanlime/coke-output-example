.PHONY: setup all

# try to determine the OS and architecture
MYOS := $(shell uname -s)
MACHINE := $(shell uname -m)
ifeq ($(MYOS), Linux)
    SYSTEM=linux
else ifeq ($(MYOS), FreeBSD)
    SYSTEM=freebsd
else ifeq ($(MYOS), OpenBSD)
    SYSTEM=openbsd
else ifeq ($(MYOS), NetBSD)
    SYSTEM=netbsd
else ifeq ($(MYOS), DragonFly)
    SYSTEM=dragonfly
else ifeq ($(MYOS), Darwin)
    SYSTEM=osx
else ifeq ($(MYOS), CYGWIN_NT-5.1)
    SYSTEM=win
else ifeq ($(MYOS), MINGW32_NT-5.1)
    SYSTEM=win
else ifeq ($(MYOS), MINGW32_NT-6.1)
    SYSTEM=win
else ifeq ($(MYOS),)
  ifeq (${OS}, Windows_NT)
    SYSTEM=win
  else
    $(error "OS ${MYOS} doesn't have pre-built Boehm GC packages. Please compile and install your own and recompile with GC_PATH=-lgc")
  endif
endif
ifneq ($(SYSTEM), osx)
  ifeq ($(MACHINE), x86_64)
    ARCH=64
  else ifeq (${PROCESSOR_ARCHITECTURE}, AMD64)
    ARCH=64
  else
    ARCH=32
  endif
  PLATFORM:=${SYSTEM}${ARCH}
endif

ifeq ($(SYSTEM), linux)
    DISTRIB := $(shell lsb_release -is)
endif
	
all:
	cd build && make

ifeq ($(SYSTEM), linux)
ifeq ($(DISTRIB), Ubuntu)

# APT tests
OPENSSL_INSTALLED := "$(shell dpkg -s libcurl4-openssl-dev 2> /dev/null)"
GNUTLS_INSTALLED := "$(shell dpkg -s libcurl4-gnutls-dev 2> /dev/null)"
APT_PACKAGES:=

setup:
	@echo "Compiling for target platform: $(PLATFORM)"

# APT actions
ifeq ($(OPENSSL_INSTALLED), "")
	@echo "Checking for libcurl4-openssl-dev... no"
	$(eval APT_PACKAGES += libcurl4-openssl-dev)
else
	@echo "Checking for libcurl4-openssl-dev... yes"
endif

ifeq ($(GNUTLS_INSTALLED), "")
	@echo "Checking for libcurl4-gnutls-dev... no"
	$(eval APT_PACKAGES += libcurl4-gnutls-dev)
else
	@echo "Checking for libcurl4-gnutls-dev... yes"
endif

ifneq ($(APT_PACKAGES), "")
	@echo "There are APT packages to install: [$(APT_PACKAGES)]"
	sudo apt-get install $(APT_PACKAGES)
endif

endif
else ifeq ($(SYSTEM), osx)
	@echo "Haha"
endif

