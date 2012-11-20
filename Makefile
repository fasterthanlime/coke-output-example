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
    $(error "OS $(MYOS) doesn't have pre-built Boehm GC packages. Please compile and install your own and recompile with GC_PATH=-lgc")
  endif
endif

ifeq ($(MACHINE), x86_64)
  ARCH=64
else ifeq (${PROCESSOR_ARCHITECTURE}, AMD64)
  ARCH=64
else
  ARCH=32
endif
PLATFORM=$(SYSTEM)$(ARCH)

ifeq ($(SYSTEM), linux)
    DISTRIB=$(shell lsb_release -is)
endif
	
all:
	cd build && make

check:
	@echo "Checking the dependencies have been installed correctly..."

ifeq ($(SYSTEM), linux)
ifeq ($(DISTRIB), Ubuntu)

# apt tests
CURL_INSTALLED:=$(shell utils/apt-status.sh libcurl4-openssl-dev)
APT_PACKAGES:=

setup:
	@echo "Installing deps for target platform: $(PLATFORM)"

# apt actions
ifeq ($(CURL_INSTALLED), NOT_INSTALLED)
	@echo "Checking for libcurl4-openssl-dev... no"
	$(eval APT_PACKAGES += libcurl4-openssl-dev)
	@echo "Now, APT_PACKAGES = [$(APT_PACKAGES)]"
else ifeq ($(CURL_INSTALLED), INSTALLED)
	@echo "Checking for libcurl4-openssl-dev... yes"
else
	@echo "[ERROR] Problem with apt package: libcurl4-openssl-dev"
	@echo "Please report the issue to https://github.com/nddrylliog/coke/issues"
	@exit 1
endif

ifeq ($(APT_PACKAGES),)
	@echo "[$(APT_PACKAGES)] equals an empty string"
else
	@echo "There are apt packages to install: [$(APT_PACKAGES)]"
	@echo "Hit 'Enter' to continue or 'Ctrl-C' to cancel"
	@read
	sudo apt-get install $(APT_PACKAGES)
endif

endif
	@make check

else ifeq ($(SYSTEM), osx)

# brew tests
CURL_INSTALLED:=$(shell utils/brew-status.sh curl)
BREW_PACKAGES:=

setup:
	@echo "Installing deps for target platform: $(PLATFORM)"

# brew actions
ifeq ($(CURL_INSTALLED), NOT_INSTALLED)
	@echo "Checking for curl... no"
	$(eval BREW_PACKAGES+=curl)
else ifeq ($(CURL_INSTALLED), INSTALLED)
	@echo "Checking for curl... yes"
else
	@echo "[ERROR] Problem with brew package: curl"
	@echo "Please report the issue to https://github.com/nddrylliog/coke/issues"
	@exit 1
endif

ifneq ($(BREW_PACKAGES),)
	@echo "There are brew packages to install: [$(BREW_PACKAGES)]"
	@echo "Hit 'Enter' to continue or 'Ctrl-C' to cancel"
	@read
	brew install $(BREW_PACKAGES)
endif

	@make check

else ifeq ($(SYSTEM), win)
	@echo "Windows"
endif

