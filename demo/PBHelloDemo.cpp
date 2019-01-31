#include <PBHello.h>

#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Usage: pb_hello_demo message\n");
        exit(EXIT_FAILURE);
    }

    my_company::hello_project::PBHello pbHello(argv[1]);
    custom::hello_message msg = pbHello.getMessage();
    
    cout << msg.text() << endl;
    
    vector<int32_t> numbers = pbHello.getNumbers();
    for (auto val : numbers) {
        cout << val;
    }
    cout << endl;

    return 0;
}
