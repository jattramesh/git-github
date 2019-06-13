//
// Created by Rahul on 6/11/2019.
//implementation of that method which are  not defined inline

#include "DATE.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <ctime>
using namespace std;
//------------------------------------------
void date::setdate() {
    struct tm *dur; //pointer to struct tm
    time_t sec; //for second
    time(&sec);  //get the present time
    dur=localtime(&sec); //initialize a struct of type tm and return a pointer to it
    day=(short)dur->tm_mday;
    month=(short) dur->tm_mon+1;
    year=(short) dur->tm_year+1900;
}
//bool date ----------
bool date::setdate(int mn, int da, int yr)
{
    if(mn<1 || mn>12)
        return false;
    if(da<1 || da>32)
        return false;
    switch(mn)//month with lkess than 31 days
    {
        case 2:
            if (isLeapyear(yr)) {
                if (da > 29)
                    return false;
                else if (da > 28)
                    return false;
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (da > 30)
                return false;
    }
month=(short)mn;
    day=(short)da;
    year=(short)yr;
    return true;
    }

    //---------------------
    void date::print() const {
    cout<<asString()<<endl;
}

//----------------------
const string& date::asString() const {
    static string datestring;
    stringstream iostream; //for conversion of number->string and formatting
    iostream<<setfill('0')<<setw(2)<<month<<'-'<<setw(2)<<day<<'-'<<year;
    iostream>>datestring;
    return datestring;

}