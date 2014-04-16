#include <iostream>
#include <parse.hpp>
#include <store.hpp>

int main()
{
    GDTLine gdt;

    GDTVehicle v = gdt.parse("1#18/03/2014 00:00:00#062#040#");

    GDTStore db = GDTStore("gdt.db");

    return 0;
}
