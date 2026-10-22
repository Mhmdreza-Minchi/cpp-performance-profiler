
cmake_minimum_required(VERSION 3.20)

project(
    CppPerformanceProfiler
    VERSION 0.0.1
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(profiler_core
    src/Profiler.cpp
    src/Timer.cpp
    src/ScopedTimer.cpp
    src/Benchmark.cpp
)

target_include_directories(profiler_core
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(cpp_profiler
    src/main.cpp
)

target_link_libraries(cpp_profiler
    PRIVATE
        profiler_core
)

enable_testing()

add_executable(test_profiler
    tests/test_profiler.cpp
)

target_link_libraries(test_profiler
    PRIVATE
        profiler_core
)

add_test(
    NAME ProfilerTests
    COMMAND test_profiler
)
