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

#include "common_compiler_test.h"
#include "mirror/art_field-inl.h"

#include <jni.h>
#include <vector>

namespace art {

class ProxyTest : public CommonCompilerTest {
 public:
  // Generate a proxy class with the given name and interfaces. This is a simplification from what
  // libcore does to fit to our test needs. We do not check for duplicated interfaces or methods and
  // we do not declare exceptions.
  mirror::Class* GenerateProxyClass(ScopedObjectAccess& soa, jobject jclass_loader,
                                    const char* className,
                                    const std::vector<mirror::Class*>& interfaces)
      SHARED_LOCKS_REQUIRED(Locks::mutator_lock_) {
    mirror::Class* javaLangObject = class_linker_->FindSystemClass(soa.Self(), "Ljava/lang/Object;");
    CHECK(javaLangObject != nullptr);

    jclass javaLangClass = soa.AddLocalReference<jclass>(mirror::Class::GetJavaLangClass());

    // Builds the interfaces array.
    jobjectArray proxyClassInterfaces = soa.Env()->NewObjectArray(interfaces.size(), javaLangClass,
                                                                  nullptr);
    soa.Self()->AssertNoPendingException();
    for (size_t i = 0; i < interfaces.size(); ++i) {
      soa.Env()->SetObjectArrayElement(proxyClassInterfaces, i,
                                       soa.AddLocalReference<jclass>(interfaces[i]));
    }

    // Builds the method array.
    jsize methods_count = 3;  // Object.equals, Object.hashCode and Object.toString.
    for (mirror::Class* interface : interfaces) {
      mirror::ObjectArray<mirror::ArtMethod>* virtual_methods = interface->GetVirtualMethods();
      methods_count += (virtual_methods == nullptr) ? 0 : virtual_methods->GetLength();
    }
    jclass javaLangReflectArtMethod =
        soa.AddLocalReference<jclass>(mirror::ArtMethod::GetJavaLangReflectArtMethod());
    jobjectArray proxyClassMethods = soa.Env()->NewObjectArray(methods_count,
                                                               javaLangReflectArtMethod, nullptr);
    soa.Self()->AssertNoPendingException();

    // Fill the method array
    mirror::ArtMethod* equalsMethod = javaLangObject->FindDeclaredVirtualMethod("equals",
                                                                                "(Ljava/lang/Object;)Z");
    mirror::ArtMethod* hashCodeMethod = javaLangObject->FindDeclaredVirtualMethod("hashCode",
                                                                                  "()I");
    mirror::ArtMethod* toStringMethod = javaLangObject->FindDeclaredVirtualMethod("toString",
                                                                                  "()Ljava/lang/String;");
    CHECK(equalsMethod != nullptr);
    CHECK(hashCodeMethod != nullptr);
    CHECK(toStringMethod != nullptr);

    jsize array_index = 0;
    // Adds Object methods.
    soa.Env()->SetObjectArrayElement(proxyClassMethods, array_index++,
                                     soa.AddLocalReference<jobject>(equalsMethod));
    soa.Env()->SetObjectArrayElement(proxyClassMethods, array_index++,
                                     soa.AddLocalReference<jobject>(hashCodeMethod));
    soa.Env()->SetObjectArrayElement(proxyClassMethods, array_index++,
                                     soa.AddLocalReference<jobject>(toStringMethod));

    // Now adds all interfaces virtual methods.
    for (mirror::Class* interface : interfaces) {
      mirror::ObjectArray<mirror::ArtMethod>* virtual_methods = interface->GetVirtualMethods();
      if (virtual_methods != nullptr) {
        for (int32_t mth_index = 0; mth_index < virtual_methods->GetLength(); ++mth_index) {
          mirror::ArtMethod* method = virtual_methods->Get(mth_index);
          soa.Env()->SetObjectArrayElement(proxyClassMethods, array_index++,
                                           soa.AddLocalReference<jobject>(method));
        }
      }
    }
    CHECK_EQ(array_index, methods_count);

    // Builds an empty exception array.
    jobjectArray proxyClassThrows = soa.Env()->NewObjectArray(0, javaLangClass, nullptr);
    soa.Self()->AssertNoPendingException();

    mirror::Class* proxyClass = class_linker_->CreateProxyClass(soa,
                                                                soa.Env()->NewStringUTF(className),
                                                                proxyClassInterfaces, jclass_loader,
                                                                proxyClassMethods, proxyClassThrows);
    soa.Self()->AssertNoPendingException();
    return proxyClass;
  }
};

// Creates a proxy class and check ClassHelper works correctly.
TEST_F(ProxyTest, ProxyClassHelper) {
  ScopedObjectAccess soa(Thread::Current());
  jobject jclass_loader = LoadDex("Interfaces");
  StackHandleScope<1> hs(soa.Self());
  Handle<mirror::ClassLoader> class_loader(
      hs.NewHandle(soa.Decode<mirror::ClassLoader*>(jclass_loader)));

  mirror::Class* I = class_linker_->FindClass(soa.Self(), "LInterfaces$I;", class_loader);
  mirror::Class* J = class_linker_->FindClass(soa.Self(), "LInterfaces$J;", class_loader);
  ASSERT_TRUE(I != nullptr);
  ASSERT_TRUE(J != nullptr);
  std::vector<mirror::Class*> interfaces;
  interfaces.push_back(I);
  interfaces.push_back(J);

  mirror::Class* proxyClass = GenerateProxyClass(soa, jclass_loader, "$Proxy1234", interfaces);
  ASSERT_TRUE(proxyClass != nullptr);
  ASSERT_TRUE(proxyClass->IsProxyClass());
  ASSERT_TRUE(proxyClass->IsInitialized());

  // Check ClassHelper for proxy.
  ClassHelper kh(proxyClass);
  EXPECT_EQ(kh.NumDirectInterfaces(), 2U);  // Interfaces$I and Interfaces$J.
  EXPECT_EQ(I, kh.GetDirectInterface(0));
  EXPECT_EQ(J, kh.GetDirectInterface(1));
  std::string proxyClassDescriptor(kh.GetDescriptor());
  EXPECT_EQ("L$Proxy1234;", proxyClassDescriptor);
}

// Creates a proxy class and check FieldHelper works correctly.
TEST_F(ProxyTest, ProxyFieldHelper) {
  ScopedObjectAccess soa(Thread::Current());
  jobject jclass_loader = LoadDex("Interfaces");
  StackHandleScope<1> hs(soa.Self());
  Handle<mirror::ClassLoader> class_loader(
      hs.NewHandle(soa.Decode<mirror::ClassLoader*>(jclass_loader)));

  mirror::Class* I = class_linker_->FindClass(soa.Self(), "LInterfaces$I;", class_loader);
  mirror::Class* J = class_linker_->FindClass(soa.Self(), "LInterfaces$J;", class_loader);
  ASSERT_TRUE(I != nullptr);
  ASSERT_TRUE(J != nullptr);
  std::vector<mirror::Class*> interfaces;
  interfaces.push_back(I);
  interfaces.push_back(J);

  mirror::Class* proxyClass = GenerateProxyClass(soa, jclass_loader, "$Proxy1234", interfaces);
  ASSERT_TRUE(proxyClass != nullptr);
  ASSERT_TRUE(proxyClass->IsProxyClass());
  ASSERT_TRUE(proxyClass->IsInitialized());

  mirror::ObjectArray<mirror::ArtField>* instance_fields = proxyClass->GetIFields();
  EXPECT_TRUE(instance_fields == nullptr);

  mirror::ObjectArray<mirror::ArtField>* static_fields = proxyClass->GetSFields();
  ASSERT_TRUE(static_fields != nullptr);
  ASSERT_EQ(2, static_fields->GetLength());

  mirror::Class* interfacesFieldClass = class_linker_->FindSystemClass(soa.Self(),
                                                                       "[Ljava/lang/Class;");
  ASSERT_TRUE(interfacesFieldClass != nullptr);
  mirror::Class* throwsFieldClass = class_linker_->FindSystemClass(soa.Self(),
                                                                   "[[Ljava/lang/Class;");
  ASSERT_TRUE(throwsFieldClass != nullptr);

  // Test "Class[] interfaces" field.
  FieldHelper fh(static_fields->Get(0));
  EXPECT_EQ("interfaces", std::string(fh.GetName()));
  EXPECT_EQ("[Ljava/lang/Class;", std::string(fh.GetTypeDescriptor()));
  EXPECT_EQ(interfacesFieldClass, fh.GetType());
  EXPECT_EQ("L$Proxy1234;", std::string(fh.GetDeclaringClassDescriptor()));
  EXPECT_FALSE(fh.IsPrimitiveType());

  // Test "Class[][] throws" field.
  fh.ChangeField(static_fields->Get(1));
  EXPECT_EQ("throws", std::string(fh.GetName()));
  EXPECT_EQ("[[Ljava/lang/Class;", std::string(fh.GetTypeDescriptor()));
  EXPECT_EQ(throwsFieldClass, fh.GetType());
  EXPECT_EQ("L$Proxy1234;", std::string(fh.GetDeclaringClassDescriptor()));
  EXPECT_FALSE(fh.IsPrimitiveType());
}

}  // namespace art
