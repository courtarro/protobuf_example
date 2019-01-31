#include <PBHello.h>

#include <iostream>

int main(int argc, const char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: pb_hello_demo message\n");
        exit(EXIT_FAILURE);
    }

    my_company::hello_project::PBHello pbHello(argv[1]);
    std::cout << pbHello.getMessage() << std::endl;

    return 0;
}
