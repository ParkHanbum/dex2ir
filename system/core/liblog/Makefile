#
# Copyright (C) 2008-2014 The Android Open Source Project
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
#

include $(srcdir)/Makefile.include

srcdir := $(CURDIR)
objdir := $(CURDIR)

LOCAL_SRC_FILES := \
	logd_write_kern.c \
	logprint.c \
	event_tag_map.c \
	fake_log_device.c \
	log_read_kern.c

LOCAL_CFLAGS := -DFAKE_LOG_DEVICE=1 -fpermissive  -I$(SYSTEM_CORE_HDRS)

LOCAL_OBJS := $(patsubst %.c,%.o,$(LOCAL_SRC_FILES))
LOCAL_OBJS := $(addprefix $(objdir)/,$(LOCAL_OBJS))

TARGET := $(notdir $(LIBLOG_ARCHIVE))

all: $(TARGET)

$(LOCAL_OBJS):
	$(CXX) -c $(@:.o=.c) -o $@ $(LOCAL_CFLAGS)

$(TARGET): $(LOCAL_OBJS)
	$(QUITE_AR)ar -rcs $@ $^

clean:
	rm -f $(objdir)/$(TARGET)
	find . -name '*.o' -exec rm {} \;


