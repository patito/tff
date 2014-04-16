#include <vehicle.hpp>

GDTVehicle::GDTVehicle() {}

string GDTVehicle::getLane() 
{
    return this->lane;
}

string GDTVehicle::getDay() 
{
    return this->day;
}

string GDTVehicle::getMonth() 
{
    return this->month;
}

string GDTVehicle::getYear() 
{
    return this->year;
}

string GDTVehicle::getHour() 
{
    return this->hour;
}

string GDTVehicle::getMinute() 
{
    return this->minute;
}

string GDTVehicle::getSecond() 
{
    return this->second;
}

string GDTVehicle::getSpeed() 
{
    return this->speed;
}

string GDTVehicle::getLength() 
{
    return this->length;
}

void GDTVehicle::setLane(string lane)
{
    this->lane = lane;
}

void GDTVehicle::setDay(string day)
{
    this->day = day;
}

void GDTVehicle::setMonth(string month)
{
    this->month = month;
}

void GDTVehicle::setYear(string year)
{
    this->year = year;
}

void GDTVehicle::setHour(string hour)
{
    this->hour = hour;
}

void GDTVehicle::setMinute(string minute)
{
    this->minute = minute;
}

void GDTVehicle::setSecond(string second)
{
    this->second = second;
}

void GDTVehicle::setSpeed(string speed)
{
    this->speed = speed;
}

void GDTVehicle::setLength(string length)
{
    this->length = length;
}










GDTVehicle::~GDTVehicle() {}
