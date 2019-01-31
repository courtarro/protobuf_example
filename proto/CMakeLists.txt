cmake_minimum_required(VERSION 3.5)

find_package(Protobuf REQUIRED)
include_directories(${Protobuf_INCLUDE_DIRS})
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS hello_message.proto another_message.proto)

set(HELLO_PROTO_INCLUDE_DIRS ${CMAKE_CURRENT_BINARY_DIR} PARENT_SCOPE)
add_library(protomessages STATIC ${PROTO_SRCS} ${PROTO_HDRS})
target_include_directories(protomessages PUBLIC ${HELLO_PROTO_INCLUDE_DIRS})
target_link_libraries(protomessages ${PROTOBUF_LIBRARIES})
