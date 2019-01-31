#include <PBHello.h>

namespace my_company {
    namespace hello_project {    

PBHello::PBHello(std::string messageText) : messageText(messageText) {
    // no-op
}

std::string PBHello::getMessage() {
    return messageText;
}

    }   // namespace hello_project
}       // namespace my_company
