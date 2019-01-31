#pragma once

#include <string>
#include <vector>

#include <hello_message.pb.h>

namespace my_company {
    namespace hello_project {    

        class PBHello {
          public:
            PBHello(std::string);
            
            custom::hello_message   getMessage();
            std::vector<int32_t>    getNumbers();
          private:
            std::string             serializedNumbers;
            std::string             messageText;
        };
    }
}
