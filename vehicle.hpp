//1#18/03/2014 00:00:00#062#040#

#include <string>

using namespace std;

class GDTVehicle {

    private:
        string lane;
        string day;
        string month;
        string year;
        string hour;
        string minute;
        string second;
        string speed;
        string length;

    public:
        GDTVehicle();

        string getLane();
        void setLane(string lane);

        string getDay();
        void setDay(string day);

        string getMonth();
        void setMonth(string month);
        
        string getYear();
        void setYear(string year);

        string getHour();
        void setHour(string hour);
        
        string getMinute();
        void setMinute(string minute);

        string getSecond();
        void setSecond(string second);

        string getSpeed();
        void setSpeed(string speed);

        string getLength();
        void setLength(string length);

        ~GDTVehicle();
};
