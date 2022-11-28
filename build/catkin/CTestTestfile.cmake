# CMake generated Testfile for 
# Source directory: /catkin_ws/src/catkin
# Build directory: /catkin_ws/build/catkin
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_catkin_nosetests_test.local_tests "/catkin_ws/build/catkin/catkin_generated/env_cached.sh" "/usr/bin/python3" "/catkin_ws/src/catkin/cmake/test/run_tests.py" "/catkin_ws/build/catkin/test_results/catkin/nosetests-test.local_tests.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /catkin_ws/build/catkin/test_results/catkin" "/usr/bin/nosetests3 -P --process-timeout=60 --where=/catkin_ws/src/catkin/test/local_tests --with-xunit --xunit-file=/catkin_ws/build/catkin/test_results/catkin/nosetests-test.local_tests.xml")
set_tests_properties(_ctest_catkin_nosetests_test.local_tests PROPERTIES  _BACKTRACE_TRIPLES "/catkin_ws/src/catkin/cmake/test/tests.cmake;160;add_test;/catkin_ws/src/catkin/cmake/test/nosetests.cmake;83;catkin_run_tests_target;/catkin_ws/src/catkin/CMakeLists.txt;26;catkin_add_nosetests;/catkin_ws/src/catkin/CMakeLists.txt;0;")
add_test(_ctest_catkin_nosetests_test.unit_tests "/catkin_ws/build/catkin/catkin_generated/env_cached.sh" "/usr/bin/python3" "/catkin_ws/src/catkin/cmake/test/run_tests.py" "/catkin_ws/build/catkin/test_results/catkin/nosetests-test.unit_tests.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /catkin_ws/build/catkin/test_results/catkin" "/usr/bin/nosetests3 -P --process-timeout=60 --where=/catkin_ws/src/catkin/test/unit_tests --with-xunit --xunit-file=/catkin_ws/build/catkin/test_results/catkin/nosetests-test.unit_tests.xml")
set_tests_properties(_ctest_catkin_nosetests_test.unit_tests PROPERTIES  _BACKTRACE_TRIPLES "/catkin_ws/src/catkin/cmake/test/tests.cmake;160;add_test;/catkin_ws/src/catkin/cmake/test/nosetests.cmake;83;catkin_run_tests_target;/catkin_ws/src/catkin/CMakeLists.txt;27;catkin_add_nosetests;/catkin_ws/src/catkin/CMakeLists.txt;0;")
subdirs("gtest")
