# Copyright (C) 2009 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

include $(srcdir)/Makefile.include

srcdir := $(CURDIR)
objdir := $(CURDIR)

local_src_files := \
    JNIHelp.cpp \
    JniConstants.cpp \
    toStringArray.cpp

LOCAL_SRC_FILES := \
    $(local_src_files) \
    JniInvocation.cpp

LOCAL_CFLAGS := -Werror -fvisibility=protected
LOCAL_C_INCLUDES := ../libcore/include
LOCAL_CPPFLAGS := -O2 -Wall -Wextra -DUSE_SIMULATOR -I$(LIBCORE_HDRS) -I$(LIBNATIVEHELPER_HDRS)

LOCAL_OBJS := $(patsubst %.cpp,%.o,$(LOCAL_SRC_FILES))
LOCAL_OBJS := $(addprefix $(objdir)/,$(LOCAL_OBJS))

TARGET := $(notdir $(LIBNATIVEHELPER_ARCHIVE))

all: $(TARGET)

$(LOCAL_OBJS):
	$(CXX) -c $(@:.o=.cpp) -o $@ $(LOCAL_CPPFLAGS)

$(TARGET): $(LOCAL_OBJS)
	$(QUITE_AR)ar -rcs $@ $^

clean:
	rm -f $(objdir)/$(TARGET)
	find . -name '*.o' -exec rm {} \;

