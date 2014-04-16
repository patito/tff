#include <iostream>
#include <vehicle.hpp>

using namespace std;

class Parse {

    public:
        virtual Vehicle parse() = 0;

        ~Parse();
};

