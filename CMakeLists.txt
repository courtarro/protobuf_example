cmake_minimum_required(VERSION 3.5)

project(pb_hello_library LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -Wextra")

# Protobuf messages
add_subdirectory(proto)

# Library definition (libpbhello)
add_library(pbhello SHARED src/PBHello.cpp)
target_include_directories(pbhello PUBLIC include)
target_include_directories(pbhello PUBLIC ${HELLO_PROTO_INCLUDE_DIRS})
target_link_libraries(pbhello protomessages)

# Build the demo executable
set(PB_HELLO_INCLUDES ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(PB_HELLO_LIBRARIES pbhello)
add_subdirectory(demo)
