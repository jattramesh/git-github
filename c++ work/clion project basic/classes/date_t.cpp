//
// Created by Rahul on 6/7/2019.
//
#include <iostream>
#include "date.h"
using namespace std;
int main()
{
    Date today,birthday,aDate;
    today.init();
    birthday.init(12,11,1997);
    cout<<"todays date";
    today.print();
    cout<<"\n Felix's Birthday";
    birthday.print();
    cout<<"\n ////////////////some testing input////////////////";
    aDate=today;
    aDate.print();
    Date *pdate=&birthday;
    pdate->print();
    Date &holiday=aDate;
    holiday.init(1,5,2000);
    aDate.print();
return 0;
}
