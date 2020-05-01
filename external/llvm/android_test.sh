#!/bin/bash

# Set resource limits
ulimit -t 600
ulimit -d 512000
ulimit -m 512000
ulimit -s 8192

: ${ANDROID_BUILD_TOP:?"ANDROID_BUILD_TOP not set. Exiting."}

if [ ! -d $ANDROID_BUILD_TOP/out/host/linux-x86/obj/test_llvm ]; then
	mkdir $ANDROID_BUILD_TOP/out/host/linux-x86/obj/test_llvm
fi

python ./utils/lit/lit.py -s -v ./test
