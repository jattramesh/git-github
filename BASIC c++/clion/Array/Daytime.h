//
// Created by Rahul on 6/13/2019.
//

#ifndef ARRAY_DAYTIME_H
#define ARRAY_DAYTIME_H

#include <iostream>
#include <string>
using namespace std;
class daytime
{
private:
    short hour,minute,second;
    bool overflow;
public:
    daytime(int h=0,int m=0,int s=0)
    {
        overflow=false;
        if(!settiime(h,m,s))
            hour=minute=second=0;
    }
    bool settime(int hour,int minute,int second=0) {
        if (hour > 0 && hour <= 24 && minute > 0 && minute <= 60 && second > 0 && second < 60) {
            this->hour = (short) hour;
            this->minute = (short) minute;
            this->second = (short) second;
        } else
            return false;
    }
int gethour() const {return  hour;}
int getsecond() const {return second;}
int getminute() const {return second;}
int assecond() const {return 3600*hour+60*minute+second;}
bool isless(daytime t) const{
        return this->assecond()<t.assecond();
    }
    void print() const {
        cout<<hour<<':'<<minute<<':'<<second<<endl;
    }
    void swap(daytime t)
    {
        daytime temp(t);
        t=*this;
        *this=temp;
    }

};
#endif //ARRAY_DAYTIME_H
