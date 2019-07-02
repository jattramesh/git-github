//
// Created by Rahul on 6/11/2019.
//
#include "daytime_this_pointer_version.h"
#include <ctime>
using namespace std;
const Daytime& currentime() //return the current time
{
    static Daytime curTime()
    {

        time_t sec;
        time(&sec);//get the current time and initialize the struct
        struct tm *time=localtime(&sec);
        curTime.setTime(time->tm_hour,time->tm_min,time->tm_sec);
        return curTime;

    }
}