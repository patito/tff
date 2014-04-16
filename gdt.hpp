#include <vehicle.hpp>

#define GDT_TOKENS "#/ :"

class GDTLine: public{

    public:
        GDTLine();

        void print();

        GDTVehicle parse(string line);

        ~GDTLine();
};

