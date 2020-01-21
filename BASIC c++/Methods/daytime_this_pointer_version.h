#ifndef _DAYTIME_
#define _DAYTIME_

#include <iostream>
using namespace std;
class Daytime
{
private:
    short hour, minute, second;
    bool overflow;
public:
    Daytime( int h = 0, int m = 0, int s = 0)
    {
        overflow = false;
        if( !setTime( h, m, s)) // this->setTime(...)
            hour = minute = second = 0; // hour is equivalent
    } // to this->hour etc.
    bool setTime(int hour, int minute, int second = 0)
    {
        if( hour >= 0 && hour < 24
            && minute >= 0 && minute < 60
            && second >= 0 && second < 60 )
        {
            this->hour = (short)hour;
            this->minute = (short)minute;
            this->second = (short)second;
            return true;
        }
        else
            return false;
    }
    int getHour() const { return hour; }
    int getMinute() const { return minute; }
    int getSecond() const { return second; }
    int asSeconds() const // daytime in seconds
    { return (60*60*hour + 60*minute + second); }
    bool isLess( Daytime t) const // compare *this and t
    {
        return asSeconds() < t.asSeconds();
    } // this->asSeconds() < t.asSeconds();
    void print(Daytime A,Daytime B)
    {
        cout<<A.hour<<A.minute<<A.second<<endl;
        cout<<B.hour<<B.minute<<B.second<<endl;

    }

    void swap(Daytime &t) const
    {
        Daytime temp(t);
        t=*this;//this pointer reference to the calling object automatically
        *this=temp;
    }

};
#endif // _DAYTIME_