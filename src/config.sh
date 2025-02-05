#!/bin/bash


if [ -f ./config.h ]; then
	mv -f config.h config.h.bak 
fi

echo "#ifndef CONFIG_H" > config.h
echo "#define CONFIG_H" >> config.h
echo "#define PROJECT_VERSION_MAJOR 1" >> config.h
echo "#define PROJECT_VERSION_MINOR 0" >> config.h
echo "#define PROJECT_VERSION_PATCH 0" >> config.h
echo "#define PROJECT_VERSION "1.0.0"" >> config.h
echo "#define PROJECT_DESCRIPTION \"Angie-1.0.0\"" >> config.h
echo "#define BUILD_OS_NAME \"$(uname -sr)\"" >> config.h
echo "#define BUILD_CC_NAME \"GNU\"" >> config.h
echo "#define BUILD_CC_VERSION \"$(gcc --version | grep gcc)\"" >> config.h
echo "#define BUILD_GIT_REVISION \"v1.0.0-20250115\"" >> config.h
echo "#define ELF_INTERP \"/lib64/ld-linux-x86-64.so.2\"" >> config.h
echo "#endif" >> config.h
