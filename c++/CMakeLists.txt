cmake_minimum_required(VERSION 3.14)
project(leetcode_cpp_tests)

# Fetch gtest
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

# Solution code library
add_library(Solutions STATIC
  majority_element.cpp
  # Add other solution files here
)

# Test executable
add_executable(majority_element_test 
  ../tests/c++/majority_element_test.cpp
)
target_link_libraries(majority_element_test 
  PRIVATE gtest_main
  PRIVATE Solutions
)
