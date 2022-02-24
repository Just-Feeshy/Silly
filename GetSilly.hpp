#ifndef GET_SILLY_INCLUDED
#define GET_SILLY_INCLUDED

#include "Silly.hpp"

#include <iostream>

class GetSilly {
    public:
        GetSilly() = default;
        ~GetSilly() = default;

        void contactSilly() {
            silly.someSillyValue += 1;
            
            std::cout << silly.getSillyValue() << std::endl;
            std::cout << silly.someSillyValue << std::endl;
        }
    private:
        Silly silly;
};
#endif