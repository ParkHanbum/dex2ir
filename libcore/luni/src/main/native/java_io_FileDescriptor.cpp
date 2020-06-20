/*
 * Copyright (C) 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define LOG_TAG "FileDescriptor"

#include "JniConstants.h"

#include <sys/socket.h>
#include <sys/types.h>

static jboolean FileDescriptor_isSocket(JNIEnv*, jclass, jint fd) {
  int error;
  socklen_t error_length = sizeof(error);
  return TEMP_FAILURE_RETRY(getsockopt(fd, SOL_SOCKET, SO_ERROR, &error, &error_length));
}

static JNINativeMethod gMethods[] = {
  NATIVE_METHOD(FileDescriptor, isSocket, "(I)Z"),
};
void register_java_io_FileDescriptor(JNIEnv* env) {
  jniRegisterNativeMethods(env, "java/io/FileDescriptor", gMethods, NELEM(gMethods));
}
