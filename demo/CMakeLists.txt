cmake_minimum_required(VERSION 3.5)

add_executable(pb_hello_demo PBHelloDemo.cpp)
target_include_directories(pb_hello_demo PUBLIC ${PB_HELLO_INCLUDES})
target_link_libraries(pb_hello_demo ${PB_HELLO_LIBRARIES})

