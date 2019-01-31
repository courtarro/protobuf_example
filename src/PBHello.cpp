#include <PBHello.h>

#include <another_message.pb.h>

namespace my_company {
    namespace hello_project {

PBHello::PBHello(std::string messageText) : messageText(messageText) {
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    
    custom::another_message a_msg;
    
    a_msg.add_num_vals(1);
    a_msg.add_num_vals(1);
    a_msg.add_num_vals(2);
    a_msg.add_num_vals(3);
    a_msg.add_num_vals(5);
    
    a_msg.SerializeToString(&serializedNumbers);
}

custom::hello_message PBHello::getMessage() {
    custom::hello_message out_msg;
    
    out_msg.set_text(messageText);
    
    return out_msg;
}

std::vector<int32_t> PBHello::getNumbers() {
    custom::another_message result;
    result.ParseFromString(serializedNumbers);
    
    return std::vector<int32_t>(result.num_vals().begin(), result.num_vals().end());
}

    }   // namespace hello_project
}       // namespace my_company
