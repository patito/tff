#include <boost/algorithm/string.hpp>
#include <parse.hpp>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
using namespace boost;


static void show_obj(GDTVehicle obj)
{
    cout << "Lane   = " << obj.getLane()   << endl;
    cout << "Day    = " << obj.getDay()    << endl;
    cout << "Month  = " << obj.getMonth()  << endl;
    cout << "Year   = " << obj.getYear()   << endl;
    cout << "Hour   = " << obj.getHour()   << endl;
    cout << "Minute = " << obj.getMinute() << endl;
    cout << "Second = " << obj.getSecond() << endl;
    cout << "Speed  = " << obj.getSpeed()  << endl;
    cout << "Length = " << obj.getLength() << endl;
}

GDTLine::GDTLine() {}


GDTVehicle GDTLine::parse(string line)
{
    GDTVehicle obj;

    vector <string> fields;

    split(fields, line, is_any_of(GDT_TOKENS));

    obj.setLane(fields[0]);
    obj.setDay(fields[1]);
    obj.setMonth(fields[2]);
    obj.setYear(fields[3]);
    obj.setHour(fields[4]);
    obj.setMinute(fields[5]);
    obj.setSecond(fields[6]);
    obj.setSpeed(fields[7]);
    obj.setLength(fields[8]);
    
    show_obj(obj);

    return obj;
}


GDTLine::~GDTLine() {}

