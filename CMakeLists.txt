cmake_minimum_required(VERSION 3.5)

project(pb_hello_library LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)

add_library(pbhello SHARED src/PBHello.cpp)
target_include_directories(pbhello PUBLIC include)

# Build the demo executable
set(PB_HELLO_INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(PB_HELLO_LIBRARIES pbhello)
add_subdirectory(demo)
