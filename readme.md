Interesting Protobuf CMAKE Example Project
==========================================

This project exists to show a basic approach to building a library that uses Google Protobuf messages, along with a
demo executable that links to said library and exercises its functionality. There are three major components:

- A static library called `protomessages` that contains the code created by the Protobuf compiler, defined in the
  `proto` subdirectory
- A dynamic library called `libpbhello` that works with the two message types defined in the .proto files. Its public
  interface refers to `hello_message`, while it privately engages `another_message`.
- An executable called `pb_hello_demo` that links dynamically to `libpbhello` and performs a little interaction with
  the library and its messages

Requirements
============

- libprotobuf-dev (Protobuf library and headers)
- protoc (Protobuf compiler)
- CMake 3.5
- C++11

Building
========

Use the standard CMake build steps:

- mkdir build
- cd build
- cmake ..
- make

Running
=======

Once the build is successful, you can run the demo like so (from the build directory):

        $ ./demo/pb_hello_demo "test message text goes here"
        test message text goes here
        11235

The "11235" text is always produced to demonstrate the private storage and use of the `another_message` type by the
`libpbhello` class `PBHello`, which is not exposed publicly outside the class.

Reference Material
==================

[1]: https://developers.google.com/protocol-buffers/docs/cpptutorial "Protobuf C++ Tutorial"
[2]: https://developers.google.com/protocol-buffers/docs/reference/cpp-generated "Protobuf C++ Generated Code"
[3]: https://cmake.org/cmake/help/latest/module/FindProtobuf.html "FindProtobuf CMake Module"
