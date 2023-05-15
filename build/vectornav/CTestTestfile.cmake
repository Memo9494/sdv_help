# CMake generated Testfile for 
# Source directory: /workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav
# Build directory: /workspaces/isaac_ros-dev/build/vectornav
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/usr/bin/python3.8" "-u" "/opt/ros/humble/install/share/ament_cmake_test/cmake/run_test.py" "/workspaces/isaac_ros-dev/build/vectornav/test_results/vectornav/cppcheck.xunit.xml" "--package-name" "vectornav" "--output-file" "/workspaces/isaac_ros-dev/build/vectornav/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/humble/install/bin/ament_cppcheck" "--xunit-file" "/workspaces/isaac_ros-dev/build/vectornav/test_results/vectornav/cppcheck.xunit.xml")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav" _BACKTRACE_TRIPLES "/opt/ros/humble/install/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/install/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/opt/ros/humble/install/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;83;ament_cppcheck;/opt/ros/humble/install/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav/CMakeLists.txt;60;ament_package;/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav/CMakeLists.txt;0;")
add_test(cpplint "/usr/bin/python3.8" "-u" "/opt/ros/humble/install/share/ament_cmake_test/cmake/run_test.py" "/workspaces/isaac_ros-dev/build/vectornav/test_results/vectornav/cpplint.xunit.xml" "--package-name" "vectornav" "--output-file" "/workspaces/isaac_ros-dev/build/vectornav/ament_cpplint/cpplint.txt" "--command" "/opt/ros/humble/install/bin/ament_cpplint" "--xunit-file" "/workspaces/isaac_ros-dev/build/vectornav/test_results/vectornav/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav" _BACKTRACE_TRIPLES "/opt/ros/humble/install/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/install/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;68;ament_add_test;/opt/ros/humble/install/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;35;ament_cpplint;/opt/ros/humble/install/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;0;;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav/CMakeLists.txt;60;ament_package;/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav/CMakeLists.txt;0;")
add_test(flake8 "/usr/bin/python3.8" "-u" "/opt/ros/humble/install/share/ament_cmake_test/cmake/run_test.py" "/workspaces/isaac_ros-dev/build/vectornav/test_results/vectornav/flake8.xunit.xml" "--package-name" "vectornav" "--output-file" "/workspaces/isaac_ros-dev/build/vectornav/ament_flake8/flake8.txt" "--command" "/opt/ros/humble/install/bin/ament_flake8" "--xunit-file" "/workspaces/isaac_ros-dev/build/vectornav/test_results/vectornav/flake8.xunit.xml")
set_tests_properties(flake8 PROPERTIES  LABELS "flake8;linter" TIMEOUT "60" WORKING_DIRECTORY "/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav" _BACKTRACE_TRIPLES "/opt/ros/humble/install/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/install/share/ament_cmake_flake8/cmake/ament_flake8.cmake;63;ament_add_test;/opt/ros/humble/install/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;18;ament_flake8;/opt/ros/humble/install/share/ament_cmake_flake8/cmake/ament_cmake_flake8_lint_hook.cmake;0;;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav/CMakeLists.txt;60;ament_package;/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3.8" "-u" "/opt/ros/humble/install/share/ament_cmake_test/cmake/run_test.py" "/workspaces/isaac_ros-dev/build/vectornav/test_results/vectornav/lint_cmake.xunit.xml" "--package-name" "vectornav" "--output-file" "/workspaces/isaac_ros-dev/build/vectornav/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/humble/install/bin/ament_lint_cmake" "--xunit-file" "/workspaces/isaac_ros-dev/build/vectornav/test_results/vectornav/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav" _BACKTRACE_TRIPLES "/opt/ros/humble/install/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/install/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/humble/install/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/humble/install/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav/CMakeLists.txt;60;ament_package;/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav/CMakeLists.txt;0;")
add_test(pep257 "/usr/bin/python3.8" "-u" "/opt/ros/humble/install/share/ament_cmake_test/cmake/run_test.py" "/workspaces/isaac_ros-dev/build/vectornav/test_results/vectornav/pep257.xunit.xml" "--package-name" "vectornav" "--output-file" "/workspaces/isaac_ros-dev/build/vectornav/ament_pep257/pep257.txt" "--command" "/opt/ros/humble/install/bin/ament_pep257" "--xunit-file" "/workspaces/isaac_ros-dev/build/vectornav/test_results/vectornav/pep257.xunit.xml")
set_tests_properties(pep257 PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav" _BACKTRACE_TRIPLES "/opt/ros/humble/install/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/install/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/opt/ros/humble/install/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/opt/ros/humble/install/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav/CMakeLists.txt;60;ament_package;/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3.8" "-u" "/opt/ros/humble/install/share/ament_cmake_test/cmake/run_test.py" "/workspaces/isaac_ros-dev/build/vectornav/test_results/vectornav/uncrustify.xunit.xml" "--package-name" "vectornav" "--output-file" "/workspaces/isaac_ros-dev/build/vectornav/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/humble/install/bin/ament_uncrustify" "--xunit-file" "/workspaces/isaac_ros-dev/build/vectornav/test_results/vectornav/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav" _BACKTRACE_TRIPLES "/opt/ros/humble/install/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/install/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;70;ament_add_test;/opt/ros/humble/install/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;34;ament_uncrustify;/opt/ros/humble/install/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav/CMakeLists.txt;60;ament_package;/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3.8" "-u" "/opt/ros/humble/install/share/ament_cmake_test/cmake/run_test.py" "/workspaces/isaac_ros-dev/build/vectornav/test_results/vectornav/xmllint.xunit.xml" "--package-name" "vectornav" "--output-file" "/workspaces/isaac_ros-dev/build/vectornav/ament_xmllint/xmllint.txt" "--command" "/opt/ros/humble/install/bin/ament_xmllint" "--xunit-file" "/workspaces/isaac_ros-dev/build/vectornav/test_results/vectornav/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav" _BACKTRACE_TRIPLES "/opt/ros/humble/install/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/install/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/humble/install/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/humble/install/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/install/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/install/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav/CMakeLists.txt;60;ament_package;/workspaces/isaac_ros-dev/src/sdv_localization/vectornav/vectornav/CMakeLists.txt;0;")
subdirs("vnproglib-1.2.0.0/cpp")
