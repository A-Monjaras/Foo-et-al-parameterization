cmake_minimum_required(VERSION 3.10)

project(FooParameterization VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(FooParameterization src/main.cpp src/foo/FooParameterization.cpp src/foo/Sphere.cpp src/utils/Math.cpp)

add_library(FooLib src/foo/FooParameterization.cpp src/foo/Sphere.cpp src/utils/Math.cpp)
target_include_directories(FooLib PUBLIC include)

enable_testing()

# Download and install Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

# Link Google Test
add_executable(FooParameterizationTests tests/foo/FooParameterizationTests.cpp tests/foo/SphereTests.cpp tests/utils/MathTests.cpp)
target_link_libraries(FooParameterizationTests gtest_main FooLib)

include(GoogleTest)
gtest_discover_tests(FooParameterizationTests)
