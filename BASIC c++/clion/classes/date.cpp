//
// Created by Rahul on 6/7/2019.
//

#include "date.h"
#include <iostream>
#include <ctime>
using namespace std;
void Date::init()  //get present date and assign it to data members
{
    struct tm *ptr;   //pointer to struct tm
    time_t sec;     //for second;
    time(&sec);
    ptr=localtime(&sec);//initialize the struct of type tm and return a pointerv to it
 month=(short)ptr->tm_mon+1;
 day=(short)ptr->tm_mday;
 year=(short)ptr->tm_year+1900;
}
void Date::init(int m,int d,int y)
{
    month=(short)m;
    day=(short)d;
    year=(short)y;
}
void Date::print()
{
    cout<<month<<'-'<<day<<'-'<<year<<endl;
}