#pragma once

#include <string>

namespace my_company {
    namespace hello_project {    

        class PBHello {
          public:
            PBHello(std::string);
            
            std::string getMessage();
          private:
            std::string messageText;
        };
    }
}
