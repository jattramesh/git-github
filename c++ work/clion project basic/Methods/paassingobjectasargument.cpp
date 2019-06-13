//
// Created by Rahul on 6/10/2019.
//
#include "daytime_this_pointer_version.h"
#include <iostream>
using namespace std;
int main()
{
    Daytime depart1(11,11,11),depart2;
    depart2.setTime(12,0,0);
    if(depart1.isLess(depart2))
    {
        cout<<"\n ist take off before"<<endl;
    }
    cout<<depart1.getSecond()<<endl;

}

