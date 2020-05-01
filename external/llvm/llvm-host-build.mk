# Windows can't use Clang to build yet
ifneq ($(HOST_OS),windows)
LOCAL_CLANG := true
include external/libcxx/libcxx.mk
endif

LOCAL_CFLAGS +=	\
	-D_GNU_SOURCE	\
	-D__STDC_LIMIT_MACROS	\
	-O2	\
	-fomit-frame-pointer	\
	-Wall	\
	-W	\
	-Wno-unused-parameter	\
	-Wwrite-strings	\
	-Dsprintf=sprintf \
	$(LOCAL_CFLAGS)

ifeq ($(LLVM_ENABLE_ASSERTION),true)
LOCAL_CFLAGS :=	\
	$(LOCAL_CFLAGS) \
	-D_DEBUG	\
	-UNDEBUG
endif

ifneq ($(REQUIRES_EH),1)
LOCAL_CFLAGS += -fno-exceptions
else
REQUIRES_EH := 0
LOCAL_CFLAGS += -fexceptions
endif

ifneq ($(REQUIRES_RTTI),1)
LOCAL_CPPFLAGS += -fno-rtti
else
REQUIRES_RTTI := 0
endif

LOCAL_CPPFLAGS :=	\
	$(LOCAL_CPPFLAGS)	\
	-Woverloaded-virtual	\
	-Wno-sign-promo         \
	-std=c++11

# Make sure bionic is first so we can include system headers.
LOCAL_C_INCLUDES :=	\
	$(LLVM_ROOT_PATH)	\
	$(LLVM_ROOT_PATH)/include	\
	$(LLVM_ROOT_PATH)/host/include	\
	$(LOCAL_C_INCLUDES)

LOCAL_IS_HOST_MODULE := true

LOCAL_32_BIT_ONLY := true

###########################################################
## Commands for running tblgen to compile a td file
###########################################################
define transform-host-td-to-out
@mkdir -p $(dir $@)
@echo "Host TableGen: $(TBLGEN_LOCAL_MODULE) (gen-$(1)) <= $<"
$(hide) $(LLVM_TBLGEN) \
	-I $(dir $<)	\
	-I $(LLVM_ROOT_PATH)/include	\
	-I $(LLVM_ROOT_PATH)/host/include	\
	-I $(LLVM_ROOT_PATH)/lib/Target	\
	$(if $(strip $(CLANG_ROOT_PATH)),-I $(CLANG_ROOT_PATH)/include,)	\
	-gen-$(strip $(1))	\
	-o $@ $<
endef
