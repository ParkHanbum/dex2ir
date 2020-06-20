#
# Copyright (C) 2014 The Android Open Source Project
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#  * Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
#  * Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in
#    the documentation and/or other materials provided with the
#    distribution.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
# FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
# COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
# BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
# OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
# AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
# OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
# OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
# SUCH DAMAGE.
#
#
# Copyright (c) 2014 ARM Ltd
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in the
#    documentation and/or other materials provided with the distribution.
# 3. The name of the company may not be used to endorse or promote
#    products derived from this software without specific prior written
#    permission.
#
# THIS SOFTWARE IS PROVIDED BY ARM LTD ``AS IS'' AND ANY EXPRESS OR IMPLIED
# WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
# IN NO EVENT SHALL ARM LTD BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
# TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
# PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
# LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
# NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

include $(srcdir)/Makefile.include

srcdir := $(CURDIR)
objdir := $(CURDIR)

vixl_include_files := $(srcdir)/src/ \
vixl_src_files := \
	src/a64/assembler-a64.cc \
	src/a64/cpu-a64.cc \
	src/a64/debugger-a64.cc \
	src/a64/decoder-a64.cc \
	src/a64/disasm-a64.cc \
	src/a64/instructions-a64.cc \
	src/a64/instrument-a64.cc \
	src/a64/macro-assembler-a64.cc \
	src/a64/simulator-a64.cc \
	src/utils-vixl.cc


LOCAL_C_INCLUDES := $(vixl_include_files)
LOCAL_SRC_FILES :=  $(vixl_src_files)
LOCAL_CPPFLAGS := -O2 -Wall -Wextra -DUSE_SIMULATOR -I$(LOCAL_C_INCLUDES)

LOCAL_OBJS := $(patsubst %.cc,%.o,$(LOCAL_SRC_FILES))
LOCAL_OBJS := $(addprefix $(objdir)/,$(LOCAL_OBJS))

TARGET := $(notdir $(LIBVIXL_ARCHIVE))

all: $(TARGET)

$(LOCAL_OBJS):
	$(CXX) -c $(@:.o=.cc) -o $@ $(LOCAL_CPPFLAGS)

$(TARGET): $(LOCAL_OBJS)
	$(QUITE_AR)ar -rcs $@ $^

clean:
	rm -f $(objdir)/$(TARGET)
	find . -name '*.o' -exec rm {} \;
   
