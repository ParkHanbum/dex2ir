# Copyright (C) 2014 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the 'License');
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an 'AS IS' BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

source $ANDROID_BUILD_TOP/build/envsetup.sh >/dev/null

root_dir=`realpath \`dirname $0\`/../../`

if [ -z "$ANDROID_SERIAL" ]; then
  echo "Please set up ANDORID_SERAL enviroment variable"
  exit -1
fi

if [ -z "$1" ]; then
  echo "Usage runtest.sh test-name"
  exit -1;
fi

test_name=$1
product_out=$(cd $ANDROID_BUILD_TOP;get_build_var PRODUCT_OUT 2>/dev/null)
test_local=$product_out/data/nativetest/$test_name/$test_name
test_target=/data/nativetest/$test_name/$test_name

cd $root_dir
adb push $test_local $test_target

logfile_native=$test_name.stdout.log
logfile_valgrind=$test_name.stdout.vlog

# reference point
echo "Creating reference point log (run without valgrind)..."
adb shell $test_target > $logfile_native
# valgrind run
echo "Running test under valgrind..."
adb shell valgrind $test_target > $logfile_valgrind

echo "Checking results..."
diff $logfile_native $logfile_valgrind | grep -v "^> ==" | grep -v -e "^[0-9]" > $test_name.diff.log

if [ -s $test_name.diff.log ]; then
  echo "Test $test_name FAILED, please check the diff below"
  cat $test_name.diff.log | sed "s/^< /expected: /" | sed "s/^> /actual  : /"
  exit -2
fi

echo "Test $test_name PASSED"

