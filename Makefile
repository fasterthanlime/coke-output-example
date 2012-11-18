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
OPENSSL_INSTALLED:=$(shell utils/apt-status.sh libcurl4-openssl-dev)
GNUTLS_INSTALLED:=$(shell utils/apt-status.sh libcurl4-gnutls-dev)
APT_PACKAGES:=

setup:
	@echo "Compiling for target platform: $(PLATFORM)"

# APT actions
ifeq ($(OPENSSL_INSTALLED), NOT_INSTALLED)
	@echo "Checking for libcurl4-openssl-dev... no"
	$(eval APT_PACKAGES+=libcurl4-openssl-dev)
else ifeq ($(OPENSSL_INSTALED), ERROR)
	@echo "[ERROR] Invalid APT package: libcurl4-openssl-dev"
	@echo "Please report the issue to https://github.com/nddrylliog/coke/issues"
	@exit 1
else
	@echo "Checking for libcurl4-openssl-dev... yes"
endif

ifeq ($(GNUTLS_INSTALLED), NOT_INSTALLED)
	@echo "Checking for libcurl4-gnutls-dev... no"
	$(eval APT_PACKAGES+=libcurl4-gnutls-dev)
else ifeq ($(GNUTLS_INSTALED), ERROR)
	@echo "[ERROR] Invalid APT package: libcurl4-gnutls-dev"
	@echo "Please report the issue to https://github.com/nddrylliog/coke/issues"
	@exit 1
else
	@echo "Checking for libcurl4-gnutls-dev... yes"
endif

ifneq ($(APT_PACKAGES), "")
	@echo "There are APT packages to install: [$(APT_PACKAGES)]"
	sudo apt-get install $(APT_PACKAGES)
endif

endif
else ifeq ($(SYSTEM), osx)
	@echo "OSX"
else ifeq ($(SYSTEM), win)
	@echo "Windows"
endif

